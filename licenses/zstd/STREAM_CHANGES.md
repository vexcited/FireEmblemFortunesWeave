The routines in `src/compression/zstd_stream.cpp` and `include/compression/zstd_stream.hpp` adapt Zstandard 1.5.6 under the BSD license retained here.

The reference is `lib/decompress/zstd_decompress.c` from the [official release](https://github.com/facebook/zstd/tree/v1.5.6).

The adaptation uses the recovered decoder layout and existing frame, dictionary, checksum, and block routines. It retains buffered input, output flushing, stable output buffers, allocation callbacks, buffer resizing, progress errors, and the retained final input byte. Assertions, logging, and legacy-format support are omitted.
