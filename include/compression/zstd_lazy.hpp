/*
  Adapted from Zstandard under the BSD license.
  Copyright Meta Platforms, Inc. and affiliates. All rights reserved.
  Original license: https://github.com/facebook/zstd/blob/v1.5.6/LICENSE
  Full license text: include/compression/zstd_bit_reader.hpp.
*/

#pragma once

#include "compression/zstd_match.hpp"

namespace fw::compression {

size_t SearchChain4(MatchState* state, const uint8_t* source,
  const uint8_t* end, size_t* offset_base);
size_t SearchChain5(MatchState* state, const uint8_t* source,
  const uint8_t* end, size_t* offset_base);
size_t SearchChain6(MatchState* state, const uint8_t* source,
  const uint8_t* end, size_t* offset_base);

size_t FindGreedyMatches(MatchState* state, SequenceStore* sequences,
  uint32_t repeated_offsets[3], const void* source, size_t source_size);
size_t FindLazyMatches(MatchState* state, SequenceStore* sequences,
  uint32_t repeated_offsets[3], const void* source, size_t source_size);
size_t FindLazy2Matches(MatchState* state, SequenceStore* sequences,
  uint32_t repeated_offsets[3], const void* source, size_t source_size);

}
