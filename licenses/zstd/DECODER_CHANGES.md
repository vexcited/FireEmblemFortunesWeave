The routines in `src/compression/zstd_dictionary.cpp`, `src/compression/zstd_decoder.cpp`, and `include/compression/zstd_decoder.hpp` adapt Zstandard 1.5.6 under the BSD license retained here.

The references are `lib/decompress/zstd_decompress.c`, `lib/decompress/zstd_decompress_internal.h`, `lib/decompress/zstd_ddict.c`, and `lib/common/zstd_trace.h` from the [official release](https://github.com/facebook/zstd/tree/v1.5.6).

The adaptation uses the recovered decoder, dictionary, and trace layouts. It retains dictionary entropy loading, dictionary ownership, frame initialization, checksums, concatenated frames, skippable frames, and bufferless continuation. Existing table, literal, sequence, and checksum routines are reused. Repeated frame operations share named helpers. Assertions, logging, legacy-format support, and unrelated buffered streaming are omitted.
