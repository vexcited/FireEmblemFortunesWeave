/*
  Adapted from Zstandard under the BSD license.
  Copyright Meta Platforms, Inc. and affiliates. All rights reserved.
  Original license: https://github.com/facebook/zstd/blob/v1.5.6/LICENSE
  Full license text: include/compression/zstd_bit_reader.hpp.
*/

#pragma once

#include "compression/zstd_oneshot.hpp"

namespace fw::compression {

struct OptimalMatch {
  uint32_t offset_base;
  uint32_t length;
};

struct OptimalPosition {
  int32_t price;
  uint32_t offset_base;
  uint32_t match_length;
  uint32_t literal_length;
  uint32_t repeated_offsets[3];
};

struct OptimalState {
  uint32_t* literal_frequencies;
  uint32_t* literal_length_frequencies;
  uint32_t* match_length_frequencies;
  uint32_t* offset_frequencies;
  OptimalMatch* matches;
  OptimalPosition* prices;
  uint32_t literal_sum;
  uint32_t literal_length_sum;
  uint32_t match_length_sum;
  uint32_t offset_sum;
  uint32_t literal_base_price;
  uint32_t literal_length_base_price;
  uint32_t match_length_base_price;
  uint32_t offset_base_price;
  uint32_t predefined_prices;
  uint32_t padding;
  const BlockCompressionState* symbol_costs;
  uint32_t literal_mode;
  uint32_t trailing_padding;
};

struct OptimalLongDistanceMatch {
  RawSequenceStore sequences;
  uint32_t start;
  uint32_t end;
  uint32_t offset;
  uint32_t padding;
};

static_assert(sizeof(OptimalMatch) == 8);
static_assert(sizeof(OptimalPosition) == 28);
static_assert(sizeof(OptimalState) == 104);
static_assert(offsetof(OptimalState, literal_sum) == 48);
static_assert(offsetof(OptimalState, symbol_costs) == 88);
static_assert(offsetof(OptimalState, literal_mode) == 96);
static_assert(sizeof(OptimalLongDistanceMatch) == 56);

void ResetCompressionSequenceStore(SequenceStore* sequences);
void AdvanceOptimalLongDistanceMatch(
  OptimalLongDistanceMatch* state, uint32_t position, uint32_t remaining);
void MergeOptimalLongDistanceMatch(OptimalLongDistanceMatch* state,
  OptimalMatch* matches, uint32_t* count, uint32_t position,
  uint32_t remaining);
void RescaleOptimalFrequencies(
  OptimalState* state, const uint8_t* source, size_t size, unsigned level);

using OptimalMatchCollector = uint32_t (*)(OptimalMatch*, MatchState*,
  uint32_t*, const uint8_t*, const uint8_t*, const uint32_t*, uint32_t,
  uint32_t);

uint32_t CollectOptimalMatches3(OptimalMatch* matches, MatchState* state,
  uint32_t* next_hash3, const uint8_t* input, const uint8_t* end,
  const uint32_t repeated_offsets[3], uint32_t empty_literals,
  uint32_t length_to_beat);
uint32_t CollectOptimalMatches4(OptimalMatch* matches, MatchState* state,
  uint32_t* next_hash3, const uint8_t* input, const uint8_t* end,
  const uint32_t repeated_offsets[3], uint32_t empty_literals,
  uint32_t length_to_beat);
uint32_t CollectOptimalMatches5(OptimalMatch* matches, MatchState* state,
  uint32_t* next_hash3, const uint8_t* input, const uint8_t* end,
  const uint32_t repeated_offsets[3], uint32_t empty_literals,
  uint32_t length_to_beat);
uint32_t CollectOptimalMatches6(OptimalMatch* matches, MatchState* state,
  uint32_t* next_hash3, const uint8_t* input, const uint8_t* end,
  const uint32_t repeated_offsets[3], uint32_t empty_literals,
  uint32_t length_to_beat);

size_t FindOptimalMatchesForDictionary(MatchState* state,
  SequenceStore* sequences, uint32_t repeated_offsets[3], const void* source,
  size_t size, unsigned dictionary_mode);
size_t FindUltraMatchesForDictionary(MatchState* state,
  SequenceStore* sequences, uint32_t repeated_offsets[3], const void* source,
  size_t size, unsigned dictionary_mode);
size_t FindOptimalMatches(MatchState* state, SequenceStore* sequences,
  uint32_t repeated_offsets[3], const void* source, size_t size);
size_t FindUltraMatches(MatchState* state, SequenceStore* sequences,
  uint32_t repeated_offsets[3], const void* source, size_t size);
size_t FindUltra2Matches(MatchState* state, SequenceStore* sequences,
  uint32_t repeated_offsets[3], const void* source, size_t size);

}
