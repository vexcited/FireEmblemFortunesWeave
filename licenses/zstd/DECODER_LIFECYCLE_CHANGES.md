The routines in `src/compression/zstd_decoder_lifecycle.cpp` and `include/compression/zstd_decoder_lifecycle.hpp` adapt Zstandard 1.5.6 under the BSD license retained here.

The reference is `lib/decompress/zstd_decompress.c` from the [official release](https://github.com/facebook/zstd/tree/v1.5.6).

The adaptation uses the recovered decoder layout and existing allocation, dictionary, and frame routines. It preserves static-context rejection, custom release callbacks, dictionary-set storage cleanup, and temporary-context decompression. Assertions and logging are omitted.
