The routines in `src/compression/zstd_lazy.cpp` and `include/compression/zstd_lazy.hpp` adapt Zstandard 1.5.6 under the BSD license retained here.

The references are `lib/compress/zstd_lazy.c` and `lib/compress/zstd_compress_internal.h` from the [official release](https://github.com/facebook/zstd/tree/v1.5.6).

The adaptation uses the recovered match-state and sequence-store layouts. It retains the greedy, lazy, and lazy2 parsers without an external dictionary, their hash-chain searches, repeated offsets, match scoring, skipped insertion, and literal overcopy behavior. Assertions, logging, row-based searches, and dictionary variants are omitted. The parser depths share a named implementation.
