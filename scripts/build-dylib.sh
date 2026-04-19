#!/usr/bin/env bash
# Build libtree-sitter-hy.dylib (+ hy.so alias) into dist/hy-<VERSION>/.
# VERSION defaults to 1.2.0; override with `HY_VERSION=1.1.0 ./scripts/build-dylib.sh`.

set -euo pipefail

cd "$(dirname "$0")/.."

HY_VERSION="${HY_VERSION:-1.2.0}"
OUT_DIR="dist/hy-${HY_VERSION}"
mkdir -p "$OUT_DIR"

cc -O2 -shared -fPIC -I src src/parser.c \
   -o "$OUT_DIR/libtree-sitter-hy.dylib"

cp "$OUT_DIR/libtree-sitter-hy.dylib" "$OUT_DIR/hy.so"

echo "built:"
ls -la "$OUT_DIR/libtree-sitter-hy.dylib" "$OUT_DIR/hy.so"
