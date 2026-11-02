The routines in `src/compression/zstd_external.cpp` and its header adapt the
Zstandard 1.5.6 fast and double-fast table fillers and external-dictionary
matchers under the BSD license retained in this directory.

The reference sources are `lib/compress/zstd_fast.c`,
`lib/compress/zstd_double_fast.c`, `lib/compress/zstd_compress_internal.h`,
and `lib/common/zstd_internal.h` from the
[official release](https://github.com/facebook/zstd/tree/v1.5.6).

The adaptation uses the recovered 64-bit little-endian match-state layout.
It preserves sparse table filling, optional empty-bucket filling, packed
index tags, external-dictionary boundaries, repeated offsets, sequence output,
and fallback to the prefix matcher when the dictionary expires.
The generic match routines retain separate callable bodies.
The match-state update index uses a local accessor to preserve the existing
public state layout.
Assertions, debug logging, and unrelated compression modes are omitted.
