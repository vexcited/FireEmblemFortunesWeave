/*
  Adapted from Zstandard under the BSD license.
  Copyright Meta Platforms, Inc. and affiliates. All rights reserved.
  Original license: https://github.com/facebook/zstd/blob/v1.5.6/LICENSE
  Full license text: include/compression/zstd_bit_reader.hpp.
*/

#pragma once

#include "compression/zstd_match.hpp"

namespace fw::compression {

enum class HashTableLoad : uint32_t {
  Fast,
  Full
};

enum class HashTablePurpose : uint32_t {
  Context,
  Dictionary
};

void FillFastHashTable(
  MatchState* state, const void* end, HashTableLoad load,
  HashTablePurpose purpose
);

void FillDoubleFastHashTable(
  MatchState* state, const void* end, HashTableLoad load,
  HashTablePurpose purpose
);

size_t FindFastExternalDictionaryMatches(
  MatchState* state, SequenceStore* sequences, uint32_t repeated_offsets[3],
  const void* source, size_t source_size
);

size_t FindDoubleFastExternalDictionaryMatches(
  MatchState* state, SequenceStore* sequences, uint32_t repeated_offsets[3],
  const void* source, size_t source_size
);

}
