/*
  Adapted from Zstandard under the BSD license.
  Copyright Meta Platforms, Inc. and affiliates. All rights reserved.
  Original license: https://github.com/facebook/zstd/blob/v1.5.6/LICENSE
  Full license text: include/compression/zstd_bit_reader.hpp.
*/

#pragma once

#include "compression/zstd_match.hpp"

namespace fw::compression {

struct RowMatchMetadata {
  uint32_t hash_log3;
  uint32_t row_hash_log;
  uint8_t* tag_table;
  uint32_t hash_cache[8];
  uint64_t hash_salt;
  uint32_t hash_salt_entropy;
  uint32_t padding;
};

static_assert(sizeof(RowMatchMetadata) == 64);
static_assert(offsetof(RowMatchMetadata, tag_table) == 8);
static_assert(offsetof(RowMatchMetadata, hash_cache) == 16);
static_assert(offsetof(RowMatchMetadata, hash_salt) == 48);

size_t SearchRow4x16(MatchState* state, const uint8_t* source,
  const uint8_t* end, size_t* offset_base);
size_t SearchRow4x32(MatchState* state, const uint8_t* source,
  const uint8_t* end, size_t* offset_base);
size_t SearchRow4x64(MatchState* state, const uint8_t* source,
  const uint8_t* end, size_t* offset_base);
size_t SearchRow5x16(MatchState* state, const uint8_t* source,
  const uint8_t* end, size_t* offset_base);
size_t SearchRow5x32(MatchState* state, const uint8_t* source,
  const uint8_t* end, size_t* offset_base);
size_t SearchRow5x64(MatchState* state, const uint8_t* source,
  const uint8_t* end, size_t* offset_base);
size_t SearchRow6x16(MatchState* state, const uint8_t* source,
  const uint8_t* end, size_t* offset_base);
size_t SearchRow6x32(MatchState* state, const uint8_t* source,
  const uint8_t* end, size_t* offset_base);
size_t SearchRow6x64(MatchState* state, const uint8_t* source,
  const uint8_t* end, size_t* offset_base);

size_t FindGreedyRowMatches(MatchState* state, SequenceStore* sequences,
  uint32_t repeated_offsets[3], const void* source, size_t source_size);
size_t FindLazyRowMatches(MatchState* state, SequenceStore* sequences,
  uint32_t repeated_offsets[3], const void* source, size_t source_size);
size_t FindLazy2RowMatches(MatchState* state, SequenceStore* sequences,
  uint32_t repeated_offsets[3], const void* source, size_t source_size);

}
