#!/usr/bin/env bash
# Build tree-sitter-hy.wasm using Apple's native container CLI (macOS 15+).
# No Docker daemon, no local emscripten install — Apple VM runs emscripten/emsdk:3.1.29.
#
# Requires: `container` CLI (ships with macOS 15+). `container system start` once per boot.

set -euo pipefail

cd "$(dirname "$0")/.."

if ! command -v container >/dev/null 2>&1; then
  echo "error: \`container\` CLI not found (Apple native containerization, macOS 15+)" >&2
  exit 1
fi

if ! container system status 2>&1 | grep -q "apiserver is running"; then
  echo "starting container apiserver..." >&2
  container system start >/dev/null
fi

container image list 2>&1 | grep -q "emscripten/emsdk\s*3.1.29" \
  || container image pull emscripten/emsdk:3.1.29

container run --rm --arch amd64 \
  -v "$PWD:/src" -w /src \
  emscripten/emsdk:3.1.29 \
  emcc -O3 -s WASM=1 -s SIDE_MODULE=2 \
       -s TOTAL_MEMORY=33554432 \
       -s NODEJS_CATCH_EXIT=0 -s NODEJS_CATCH_REJECTION=0 \
       -s 'EXPORTED_FUNCTIONS=["_tree_sitter_hy"]' \
       -fno-exceptions -std=c99 \
       -I src src/parser.c \
       -o tree-sitter-hy.wasm

echo "built: $(ls -la tree-sitter-hy.wasm)"
