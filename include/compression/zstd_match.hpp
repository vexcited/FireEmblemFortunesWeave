/*
  Adapted from Zstandard under the BSD license.
  Copyright Meta Platforms, Inc. and affiliates. All rights reserved.
  Original license: https://github.com/facebook/zstd/blob/v1.5.6/LICENSE
  Full license text: include/compression/zstd_bit_reader.hpp.
*/

#pragma once

#include <stddef.h>
#include <stdint.h>

namespace fw::compression {

struct MatchWindow {
  const uint8_t* next_source;
  const uint8_t* base;
  const uint8_t* dictionary_base;
  uint32_t dictionary_limit;
  uint32_t low_limit;
  uint32_t overflow_corrections;
  uint32_t padding;
};

struct MatchParameters {
  uint32_t window_log;
  uint32_t chain_log;
  uint32_t hash_log;
  uint32_t search_log;
  uint32_t minimum_match;
  uint32_t target_length;
  uint32_t strategy;
};

struct MatchState {
  MatchWindow window;
  uint32_t loaded_dictionary_end;
  uint8_t other_match_finder_state[68];
  uint32_t* hash_table;
  uint32_t* hash_table3;
  uint32_t* chain_table;
  uint8_t other_parser_state[112];
  const MatchState* dictionary;
  MatchParameters parameters;
  uint32_t padding;
  const void* long_distance_sequences;
  int32_t prefetch_dictionary;
};

struct MatchSequence {
  uint32_t offset_base;
  uint16_t literal_length;
  uint16_t match_length_base;
};

enum class LongSequenceLength : uint32_t {
  None,
  Literal,
  Match
};

struct SequenceStore {
  MatchSequence* sequences_start;
  MatchSequence* sequences;
  uint8_t* literals_start;
  uint8_t* literals;
  uint8_t* literal_codes;
  uint8_t* match_codes;
  uint8_t* offset_codes;
  size_t sequence_capacity;
  size_t literal_capacity;
  LongSequenceLength long_length_type;
  uint32_t long_length_position;
};

static_assert(sizeof(MatchWindow) == 40);
static_assert(sizeof(MatchParameters) == 28);
static_assert(offsetof(MatchState, hash_table) == 112);
static_assert(offsetof(MatchState, chain_table) == 128);
static_assert(offsetof(MatchState, dictionary) == 248);
static_assert(offsetof(MatchState, parameters) == 256);
static_assert(offsetof(MatchState, prefetch_dictionary) == 296);
static_assert(sizeof(MatchState) == 304);
static_assert(sizeof(MatchSequence) == 8);
static_assert(sizeof(SequenceStore) == 80);
static_assert(offsetof(SequenceStore, long_length_type) == 72);

size_t FindDoubleFastMatches(
  MatchState* state, SequenceStore* sequences, uint32_t repeated_offsets[3],
  const void* source, size_t source_size
);

size_t FindDoubleFastDictionaryMatches(
  MatchState* state, SequenceStore* sequences, uint32_t repeated_offsets[3],
  const void* source, size_t source_size
);

size_t FindFastMatches(
  MatchState* state, SequenceStore* sequences, uint32_t repeated_offsets[3],
  const void* source, size_t source_size
);

size_t FindFastDictionaryMatches(
  MatchState* state, SequenceStore* sequences, uint32_t repeated_offsets[3],
  const void* source, size_t source_size
);

size_t CountDictionaryMatch(
  const uint8_t* input, const uint8_t* match, const uint8_t* input_end,
  const uint8_t* match_end, const uint8_t* prefix
);

}
