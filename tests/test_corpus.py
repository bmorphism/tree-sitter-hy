import os
import subprocess
from pathlib import Path

import pytest

REPO_ROOT = Path(__file__).resolve().parents[1]


def _corpus_roots() -> list[Path]:
    env = os.environ.get("HY_CORPUS_REPOS")
    if env:
        roots = [Path(p).expanduser() for p in env.split(":") if p.strip()]
    else:
        roots = [
            Path("/Users/bob/i/hymlx"),
            Path("/Users/bob/i/repl"),
        ]
    return [p for p in roots if p.exists()]


EXCLUDE_DIRS = {
    ".git",
    ".venv",
    "venv",
    "node_modules",
    "dist",
    "build",
    "target",
    "__pycache__",
    ".mypy_cache",
    ".pytest_cache",
}


def _hy_files(root: Path) -> list[Path]:
    files: list[Path] = []
    for path in root.rglob("*.hy"):
        if any(part in EXCLUDE_DIRS for part in path.parts):
            continue
        files.append(path)
    return files


def _parse_file(path: Path) -> str:
    cmd = ["npx", "tree-sitter", "parse", "--quiet", str(path)]
    proc = subprocess.run(
        cmd,
        cwd=REPO_ROOT,
        check=False,
        capture_output=True,
        text=True,
    )
    stdout = proc.stdout or ""
    stderr = proc.stderr or ""
    if proc.returncode != 0:
        raise AssertionError(
            f"tree-sitter parse failed for {path}\nstdout:\n{stdout}\nstderr:\n{stderr}"
        )
    if "ERROR" in stdout:
        raise AssertionError(
            f"tree-sitter parse reported ERROR node for {path}\n{stdout}"
        )
    return stdout


@pytest.mark.parametrize("root", _corpus_roots())
def test_parse_corpus(root: Path) -> None:
    files = _hy_files(root)
    if not files:
        pytest.skip(f"No .hy files under {root}")
    for path in files:
        _parse_file(path)
