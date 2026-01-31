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
    home = Path.home()
    config_path = (
        home
        / "Library"
        / "Application Support"
        / "tree-sitter"
        / "config.json"
    )
    config_path.parent.mkdir(parents=True, exist_ok=True)
    had_config = config_path.exists()
    original = config_path.read_text(encoding="utf-8") if had_config else None
    try:
        config_path.write_text(
            f'{{"parser-directories": ["{REPO_ROOT.parent}"]}}', encoding="utf-8"
        )
        cmd = [
            "npx",
            "tree-sitter",
            "parse",
            "--quiet",
            "--scope",
            "source.hy",
            str(path),
        ]
        proc = subprocess.run(
            cmd,
            cwd=REPO_ROOT,
            check=False,
            capture_output=True,
            text=True,
        )
    finally:
        if had_config and original is not None:
            config_path.write_text(original, encoding="utf-8")
        else:
            try:
                config_path.unlink()
            except FileNotFoundError:
                pass
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
    failures: list[str] = []
    for path in files:
        try:
            _parse_file(path)
        except AssertionError as exc:
            failures.append(f"{path}: {exc}")
    if failures:
        head = "\n".join(failures[:10])
        more = "" if len(failures) <= 10 else f"\n... and {len(failures) - 10} more"
        raise AssertionError(
            f"{len(failures)} parse failures under {root}:\n{head}{more}"
        )
