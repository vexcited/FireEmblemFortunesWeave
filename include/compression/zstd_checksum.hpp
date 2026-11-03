/*
  Adapted from Zstandard 1.5.6 XXH64 under the BSD license.
  Copyright Yann Collet and Meta Platforms, Inc.
  Original license: https://github.com/facebook/zstd/blob/v1.5.6/LICENSE
  Full license text: include/compression/zstd_bit_reader.hpp.
*/

#pragma once

#include <stddef.h>
#include <stdint.h>

namespace fw::compression {

struct ChecksumState {
  uint64_t total_size;
  uint64_t lanes[4];
  uint64_t buffered_words[4];
  uint32_t buffered_size;
  uint32_t reserved32;
  uint64_t reserved64;
};

static_assert(sizeof(ChecksumState) == 88);
static_assert(offsetof(ChecksumState, buffered_words) == 40);
static_assert(offsetof(ChecksumState, buffered_size) == 72);

uint64_t Hash64(const void* source, size_t size, uint64_t seed);
int ResetChecksum(ChecksumState* state, uint64_t seed);
int UpdateChecksum(ChecksumState* state, const void* source, size_t size);
uint64_t DigestChecksum(const ChecksumState* state);

}
