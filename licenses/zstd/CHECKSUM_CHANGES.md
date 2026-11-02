The routines in `src/compression/zstd_checksum.cpp` and `include/compression/zstd_checksum.hpp` adapt XXH64 from Zstandard 1.5.6 under the BSD license retained here.

The reference is `lib/common/xxhash.h` from the [official release](https://github.com/facebook/zstd/blob/v1.5.6/lib/common/xxhash.h).

The adaptation retains the 88-byte streaming state, four accumulator lanes, little-endian loads, buffered updates, and final mixing. Shared helpers replace repeated inline arithmetic. Unused hash families, logging, assertions, architecture alternatives, and allocation wrappers are omitted.
