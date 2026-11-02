The match finders in `src/compression/zstd_match.cpp` and its header adapt
Zstandard 1.5.6 under the BSD license retained in this directory.

The reference sources are `lib/compress/zstd_fast.c`,
`lib/compress/zstd_double_fast.c`, `lib/compress/zstd_compress_internal.h`,
and `lib/common/zstd_internal.h` from the
[official release](https://github.com/facebook/zstd/tree/v1.5.6).

The adaptation covers fast and double-fast matching for a contiguous prefix
and an attached dictionary.
It retains sequence ordering, repeated offsets, hash updates, tagged dictionary
lookups, literal copy effects, and extended sequence lengths.
It uses the observed 64-bit little-endian layouts and typed C++ helpers.
The two identical dictionary-boundary counters share one implementation.
Compile-time specializations use common routines selected by the same match
parameters.
Assertions, debug logging, and unrelated compression modes are omitted.
