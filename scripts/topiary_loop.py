#!/usr/bin/env python3
import argparse
import os
import subprocess
import tempfile
from pathlib import Path

REPO_ROOT = Path(__file__).resolve().parents[1]
TOPIARY_CONFIG = REPO_ROOT / ".topiary" / "languages.ncl"
TOPIARY_QUERY = REPO_ROOT / ".topiary" / "queries" / "hy.scm"

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


def collect_hy_files(roots: list[Path]) -> list[Path]:
    files: list[Path] = []
    for root in roots:
        if not root.exists():
            continue
        for path in root.rglob("*.hy"):
            if any(part in EXCLUDE_DIRS for part in path.parts):
                continue
            files.append(path)
    return sorted(set(files))


def topiary_format(text: str) -> str:
    cmd = [
        "topiary",
        "-C",
        str(TOPIARY_CONFIG),
        "format",
        "--language",
        "hy",
        "--query",
        str(TOPIARY_QUERY),
        "--skip-idempotence",
    ]
    proc = subprocess.run(
        cmd,
        cwd=REPO_ROOT,
        input=text,
        text=True,
        capture_output=True,
        check=False,
    )
    if proc.returncode != 0:
        raise RuntimeError(
            f"topiary format failed\nstdout:\n{proc.stdout}\nstderr:\n{proc.stderr}"
        )
    return proc.stdout


def parse_with_tree_sitter(path: Path, source: Path) -> None:
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
        text=True,
        capture_output=True,
        check=False,
    )
    if proc.returncode != 0 or "ERROR" in (proc.stdout or ""):
        raise RuntimeError(
            "tree-sitter parse failed after formatting\n"
            f"source: {source}\n"
            f"temp: {path}\n"
            f"stdout:\n{proc.stdout}\n"
            f"stderr:\n{proc.stderr}"
        )


def main() -> int:
    parser = argparse.ArgumentParser(
        description="Topiary round-trip loop: format -> reparse -> report changes."
    )
    parser.add_argument(
        "roots",
        nargs="*",
        help="Roots to scan for .hy files (defaults to /Users/bob/i/hymlx and /Users/bob/i/repl if present).",
    )
    args = parser.parse_args()

    if not TOPIARY_CONFIG.exists() or not TOPIARY_QUERY.exists():
        raise SystemExit("Missing .topiary config/query. Run from repo root.")

    if args.roots:
        roots = [Path(r).expanduser() for r in args.roots]
    else:
        roots = [Path("/Users/bob/i/hymlx"), Path("/Users/bob/i/repl")]
        if not any(r.exists() for r in roots):
            roots = [REPO_ROOT]

    files = collect_hy_files(roots)
    if not files:
        raise SystemExit("No .hy files found in targets.")

    changed = 0
    for path in files:
        original = path.read_text(encoding="utf-8")
        formatted = topiary_format(original)
        if formatted != original:
            changed += 1
        with tempfile.NamedTemporaryFile(suffix=".hy", delete=False) as tmp:
            tmp.write(formatted.encode("utf-8"))
            tmp_path = Path(tmp.name)
        try:
            parse_with_tree_sitter(tmp_path, path)
        except Exception:
            # Keep the temp file for inspection if parsing fails.
            print(f"kept temp file: {tmp_path}")
            raise
        else:
            try:
                tmp_path.unlink()
            except FileNotFoundError:
                pass

    print(f"files={len(files)} changed={changed} ok=1")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
