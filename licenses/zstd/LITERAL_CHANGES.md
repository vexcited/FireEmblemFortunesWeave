The routines in `src/compression/zstd_entropy.cpp`,
`src/compression/zstd_huffman_tables.cpp`, `src/compression/zstd_literals.cpp`,
and their headers adapt Zstandard 1.5.6 under the BSD license retained here.

The reference sources are `lib/common/entropy_common.c`,
`lib/common/fse_decompress.c`, `lib/common/bitstream.h`,
`lib/decompress/huf_decompress.c`, and
`lib/decompress/zstd_decompress_block.c` from the
[official release](https://github.com/facebook/zstd/tree/v1.5.6).

The adaptation uses the recovered little-endian table and context layouts.
It retains normalized-count parsing, finite-state decoding, Huffman weights,
single-symbol and paired-symbol tables, decoder selection, and literal buffers.
The context type models the prefix used by literal decoding.
Existing reverse-bit initialization and four-stream decoding are reused.
Table filling uses scalar loops in place of repeated wide stores where their
final table and workspace contents agree.
Assertions, logging, unused architecture paths, and unrelated decoding are
omitted.
