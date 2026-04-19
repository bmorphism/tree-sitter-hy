# tree-sitter-hy

Tree-sitter grammar for [Hy][hy], a Lisp-ification of Python.

This is `bmorphism/tree-sitter-hy`, a fork of [`kwshi/tree-sitter-hy`][upstream]
tracking Hy 1.x. Compared to upstream (alpha, Hy 0.27), this fork:

- Tracks Hy **0.27 → 1.1** syntax (corpus in `corpus/hy-0-28`, `hy-0-29`, `hy-1-0`, `hy-1-1`).
- Adds bracket strings (`#[tag[…]tag]`), reader sugar, dotted/dots-only identifiers, mixed-delim Dyck stress cases, numeric edge cases from the Python reference.
- Ships a Topiary formatting loop (`.topiary/`).
- **31/31 corpus tests green.**

[hy]: http://hylang.org
[upstream]: https://github.com/kwshi/tree-sitter-hy

## Build

```sh
pnpm install --ignore-scripts            # tree-sitter-cli 0.20.8 devDep
./node_modules/.bin/tree-sitter generate # regenerate src/parser.c from grammar.js
./node_modules/.bin/tree-sitter test     # run corpus (31 cases)
./scripts/build-dylib.sh                 # → dist/hy-1.2.0/{libtree-sitter-hy.dylib,hy.so}
./scripts/build-wasm.sh                  # → dist/hy-1.2.0/tree-sitter-hy.wasm  (Apple container)
```

Build outputs land in **`dist/hy-<VERSION>/`** and are **gitignored** — rebuild
on demand. Per-version frozen bundles (`tree-sitter-hy-<VERSION>.tar.gz`) are
also staged in `dist/` alongside multi-algorithm checksum files
(`SHA256SUMS`, `SHA512SUMS`, `SHA3-256SUMS`, `SHA3-512SUMS`, `BLAKE2b-256SUMS`,
`SHAKE256-512SUMS`, `CHECKSUMS.txt`). Each bundle contains:

- `libtree-sitter-hy.dylib` — macOS arm64 shared library, exports `tree_sitter_hy`
- `hy.so` — Linux-style filename alias (same Mach-O content on macOS)
- `tree-sitter-hy.wasm` — WASM module (SIDE_MODULE=2, exports `_tree_sitter_hy`)
- `corpus.txt` — the version-specific corpus test cases
- `manifest.json` — `hy_version`, `grammar_commit`, per-artifact sha256

Versions covered: `hy-{0.28.0, 0.29.0, 1.0.0, 1.1.0, 1.2.0}`. Override the
target with `HY_VERSION=1.1.0 ./scripts/build-dylib.sh` etc.

### WASM via Apple `container` (no Docker, no local emcc)

`scripts/build-wasm.sh` builds the WASM artifact through Apple's native
containerization CLI (`container`, shipped with macOS 15+). No Docker daemon
and no local Emscripten install are required — the script pulls
`emscripten/emsdk:3.1.29` into an Apple VM and runs `emcc` there with
`--arch amd64` (the emscripten/emsdk image is amd64-only; container's VM
handles the architecture transparently). `container system start` runs
automatically if the apiserver is down.

## Editor integration

### MCP `tree-sitter` server

The server auto-discovers parsers from `~/Library/Application Support/tree-sitter/config.json`.
As long as that config lists `/Users/bob/i` under `parser-directories`, this repo
(and its sibling symlink `/Users/bob/i/tree-sitter-hy`) is picked up automatically.
Verify with:

```sh
./node_modules/.bin/tree-sitter dump-languages | grep hy
```

### Neovim / nvim-treesitter

1. Register `.hy` as filetype `hy`:
   ```lua
   vim.filetype.add { extension = { hy = "hy" } }
   ```

2. Declare the parser:
   ```lua
   local parser_config = require "nvim-treesitter.parsers".get_parser_configs()
   parser_config.hy = {
     install_info = {
       url = "https://github.com/bmorphism/tree-sitter-hy",
       files = { "src/parser.c" },
       branch = "main",
       generate_requires_npm = false,
       requires_generate_from_grammar = false,
     },
     filetype = "hy",
   }
   ```

3. `:TSInstall hy` and copy `queries/` into your Neovim runtimepath.

### Emacs `treesit`

```elisp
(add-to-list 'treesit-language-source-alist
             '(hy "https://github.com/bmorphism/tree-sitter-hy"))
```

Or point directly at the local `libtree-sitter-hy.dylib` via
`treesit-extra-load-path`.

## Corpus sweep

`scripts/` contains a parallel ripper. Against all `.hy` files under `~/i`
(328 files across egregore-ies, asi, hy upstream, nanoclj-zig corpora, vibesnipe,
music-topos, and friends), the grammar parses **294/328 clean** (~90%). The
remaining 34 divide roughly:

- **Duplicates** (`~/i/hy/tests/native_tests/*.hy` vs `~/i/nanoclj-zig/corpora/hy/...`) — same source, counted twice.
- **Intentional fixtures** (`hy/tests/resources/importer/compiler_error.hy` is supposed to fail).
- **User-code syntax errors** that genuinely don't parse in `hy` itself either.
- **Known grammar gaps** against upstream Hy 1.x idioms:
  - `raise X :from Y` in `try` expressions (`hy/tests/native_tests/try.hy:205`)
  - Leading-dot relative imports `.beside` (`hy/tests/native_tests/import.hy:118`)
  - Empty bracket-tagged f-strings `#[f-x[]f-x]` (`hy/tests/native_tests/strings.hy:171`)
  - `lfor` inside nested quasiquote+unquote-splice (`hy/hy/core/macros.hy:165`)
  - Reader-macro quoting in `:module` kwargs (`reader_macros.hy:158`, `repl.hy:191`)

These are tracked as future grammar work; day-to-day use (highlighting, structural
editing, egregore-ies runtime files, music-topos) is unaffected.

## Syntax highlighting

![Advent of Code 2016 day 1 solution in Hy](doc/screenshot/aoc-2016-01.png)

## Development

- `grammar.js` → regenerate with `tree-sitter generate`
- Corpus in `corpus/` (external `.txt` test files)
- Additional defensive tests in `tests/test_corpus.py` (pytest)
- `.topiary/` holds the Topiary format loop; run via `scripts/topiary-loop.sh`
