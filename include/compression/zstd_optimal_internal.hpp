/*
  Adapted from Zstandard under the BSD license.
  Copyright Meta Platforms, Inc. and affiliates. All rights reserved.
  Original license: https://github.com/facebook/zstd/blob/v1.5.6/LICENSE
  Full license text: include/compression/zstd_bit_reader.hpp.
*/

#pragma once

#include "compression/zstd_optimal.hpp"
#include "compression/zstd_block_internal.hpp"

namespace fw::compression::optimal_detail {

using block_detail::NextToUpdate;
using block_detail::Read;
using block_detail::StoreSequence;
using block_detail::UpdateRepeatedOffsets;

inline OptimalState& Statistics(MatchState* state) {
  return *reinterpret_cast<OptimalState*>(
    reinterpret_cast<uint8_t*>(state) + 144);
}

inline uint32_t HashLog3(const MatchState* state) {
  return Read<uint32_t>(reinterpret_cast<const uint8_t*>(state) + 48);
}

inline unsigned HighBit(uint32_t value) {
  return value ? 31u - __builtin_clz(value) : uint32_t(-1);
}

inline uint32_t Weight(uint32_t value, unsigned level) {
  uint32_t adjusted = value + 1;
  unsigned bits = HighBit(adjusted);
  return (bits << 8) + (level ? (adjusted << 8) >> (bits & 31) : 0);
}

inline bool CompressedLiterals(const OptimalState* state) {
  return state->literal_mode != 2;
}

inline void SetBasePrices(OptimalState* state, unsigned level) {
  if (CompressedLiterals(state)) {
    state->literal_base_price = Weight(state->literal_sum, level);
  }
  state->literal_length_base_price = Weight(state->literal_length_sum, level);
  state->match_length_base_price = Weight(state->match_length_sum, level);
  state->offset_base_price = Weight(state->offset_sum, level);
}

constexpr uint8_t LiteralBits[] = {
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  1, 1, 1, 1, 2, 2, 3, 3, 4, 6, 7, 8, 9, 10, 11, 12,
  13, 14, 15, 16,
};

constexpr uint8_t MatchBits[] = {
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  1, 1, 1, 1, 2, 2, 3, 3, 4, 4, 5, 7, 8, 9, 10, 11,
  12, 13, 14, 15, 16,
};

constexpr uint8_t LiteralCodes[] = {
  0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15,
  16, 16, 17, 17, 18, 18, 19, 19, 20, 20, 20, 20, 21, 21, 21, 21,
  22, 22, 22, 22, 22, 22, 22, 22, 23, 23, 23, 23, 23, 23, 23, 23,
  24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24,
};

constexpr uint8_t MatchCodes[] = {
  0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15,
  16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31,
  32, 32, 33, 33, 34, 34, 35, 35, 36, 36, 36, 36, 37, 37, 37, 37,
  38, 38, 38, 38, 38, 38, 38, 38, 39, 39, 39, 39, 39, 39, 39, 39,
  40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40,
  41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41,
  42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42,
  42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42,
};

inline unsigned LiteralCode(uint32_t length) {
  return length < 64 ? LiteralCodes[length] : HighBit(length) + 19;
}

inline unsigned MatchCode(uint32_t length) {
  return length < 128 ? MatchCodes[length] : HighBit(length) + 36;
}

}
