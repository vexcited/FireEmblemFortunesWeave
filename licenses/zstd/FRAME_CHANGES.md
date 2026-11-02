The routines in `src/compression/zstd_frame.cpp` and its header adapt the
Zstandard 1.5.6 frame parser, content-size query, frame scanner, and block-header
reader under the BSD license retained in this directory.

The reference sources are `lib/decompress/zstd_decompress.c` and
`lib/decompress/zstd_decompress_block.c` from the
[official release](https://github.com/facebook/zstd/tree/v1.5.6).

The adaptation uses the recovered little-endian layouts and explicit scanner
output pointer.
It preserves incomplete-header return sizes, error codes, partial output writes,
skippable-frame overflow checks, and unknown-content decompression bounds.
Assertions, debug logging, legacy support, and unrelated decoding are omitted.
