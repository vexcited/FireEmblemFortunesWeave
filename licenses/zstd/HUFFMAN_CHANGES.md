The Huffman decoder in `src/compression/zstd_huffman.cpp` and its header adapt the decoder and reverse bit stream algorithms from Zstandard under the BSD license in this directory.

The reference sources are `lib/decompress/huf_decompress.c` and `lib/common/bitstream.h` from the official Zstandard 1.5.7 release at https://github.com/facebook/zstd/tree/v1.5.7.
The observed decoder behavior also matches Zstandard 1.5.6, whose Huffman decoder source is identical.
These routines do not establish the exact release of the embedded library.

The adaptation retains the four-stream single-symbol and double-symbol decoding paths, fast-loop initialization, fallback decoding, and error results.
It uses fixed 64-bit little-endian layouts, typed C++ helpers, and the input and output boundaries observed in the ARM64 build.
Table construction, frame parsing, compression, other architectures, and assembly decoding paths are outside this adaptation.
