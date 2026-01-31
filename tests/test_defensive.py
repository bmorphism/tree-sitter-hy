import subprocess
from pathlib import Path
import tempfile

import pytest

REPO_ROOT = Path(__file__).resolve().parents[1]
CONFIG_PATH = (
    Path.home()
    / "Library"
    / "Application Support"
    / "tree-sitter"
    / "config.json"
)


def _with_parser_config():
    CONFIG_PATH.parent.mkdir(parents=True, exist_ok=True)
    had_config = CONFIG_PATH.exists()
    original = CONFIG_PATH.read_text(encoding="utf-8") if had_config else None
    CONFIG_PATH.write_text(
        f'{{"parser-directories": ["{REPO_ROOT.parent}"]}}', encoding="utf-8"
    )
    return had_config, original


def _restore_parser_config(had_config: bool, original: str | None) -> None:
    if had_config and original is not None:
        CONFIG_PATH.write_text(original, encoding="utf-8")
    else:
        try:
            CONFIG_PATH.unlink()
        except FileNotFoundError:
            pass


def _parse(path: Path, *, expect_error: bool = False, timeout: float = 5.0) -> str:
    had_config, original = _with_parser_config()
    try:
        proc = subprocess.run(
            [
                "npx",
                "tree-sitter",
                "parse",
                "--quiet",
                "--scope",
                "source.hy",
                str(path),
            ],
            cwd=REPO_ROOT,
            check=False,
            capture_output=True,
            text=True,
            timeout=timeout,
        )
    finally:
        _restore_parser_config(had_config, original)
    stdout = proc.stdout or ""
    if expect_error:
        if "ERROR" not in stdout:
            raise AssertionError(f"Expected ERROR node for {path}\n{stdout}")
    else:
        if proc.returncode != 0 or "ERROR" in stdout:
            raise AssertionError(
                f"Unexpected parse error for {path}\nstdout:\n{stdout}\nstderr:\n{proc.stderr}"
            )
    return stdout


def _tmp_hy(code: str) -> Path:
    fd, path = tempfile.mkstemp(suffix=".hy")
    p = Path(path)
    p.write_text(code, encoding="utf-8")
    return p


def test_reader_macro_edge_cases() -> None:
    # Valid reader sugar and macros
    _parse(_tmp_hy("(f #* [1] #** {\"x\" 1})"))
    _parse(_tmp_hy("`(~@([1 2]))"))
    _parse(_tmp_hy("(#foo [1 2])"))
    # Invalid reader macro (undefined macro name token)
    _parse(_tmp_hy("(# [1 2])"), expect_error=True)


def test_version_corpus_smoke() -> None:
    for corpus in [
        "corpus/hy-0-28.txt",
        "corpus/hy-0-29.txt",
        "corpus/hy-1-0.txt",
        "corpus/hy-1-1.txt",
        "corpus/dyck-stress.txt",
    ]:
        _parse(Path(REPO_ROOT) / corpus)


def test_deep_nesting_timeout() -> None:
    # Stress Dyck nesting without timing out.
    depth = 250
    code = "(" * depth + "0" + ")" * depth
    _parse(_tmp_hy(code), timeout=2.0)


def test_highlight_query_smoke() -> None:
    # Ensure highlight query compiles and runs on a sample file.
    sample = _tmp_hy("(defn f [x] (+ x 1))")
    had_config, original = _with_parser_config()
    try:
        proc = subprocess.run(
            [
                "npx",
                "tree-sitter",
                "highlight",
                "--scope",
                "source.hy",
                str(sample),
            ],
            cwd=REPO_ROOT,
            check=False,
            capture_output=True,
            text=True,
            timeout=5.0,
        )
    finally:
        _restore_parser_config(had_config, original)
    if proc.returncode != 0:
        raise AssertionError(
            f"tree-sitter highlight failed\nstdout:\n{proc.stdout}\nstderr:\n{proc.stderr}"
        )
