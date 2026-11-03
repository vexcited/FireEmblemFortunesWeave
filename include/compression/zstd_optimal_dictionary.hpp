/*
  Adapted from Zstandard under the BSD license.
  Copyright Meta Platforms, Inc. and affiliates. All rights reserved.
  Original license: https://github.com/facebook/zstd/blob/v1.5.6/LICENSE
  Full license text: include/compression/zstd_bit_reader.hpp.
*/

#pragma once

#include "compression/zstd_optimal.hpp"

namespace fw::compression {

size_t FindOptimalPreparedMatches(MatchState* state, SequenceStore* sequences,
  uint32_t repeated_offsets[3], const void* source, size_t size);

size_t FindUltraPreparedMatches(MatchState* state, SequenceStore* sequences,
  uint32_t repeated_offsets[3], const void* source, size_t size);

size_t FindOptimalExternalMatches(MatchState* state, SequenceStore* sequences,
  uint32_t repeated_offsets[3], const void* source, size_t size);

size_t FindUltraExternalMatches(MatchState* state, SequenceStore* sequences,
  uint32_t repeated_offsets[3], const void* source, size_t size);

uint32_t CollectOptimalExternalMatches3(OptimalMatch* matches,
  MatchState* state, uint32_t* next_hash3, const uint8_t* input,
  const uint8_t* end, const uint32_t repeated_offsets[3],
  uint32_t empty_literals, uint32_t length_to_beat);

uint32_t CollectOptimalExternalMatches4(OptimalMatch* matches,
  MatchState* state, uint32_t* next_hash3, const uint8_t* input,
  const uint8_t* end, const uint32_t repeated_offsets[3],
  uint32_t empty_literals, uint32_t length_to_beat);

uint32_t CollectOptimalExternalMatches5(OptimalMatch* matches,
  MatchState* state, uint32_t* next_hash3, const uint8_t* input,
  const uint8_t* end, const uint32_t repeated_offsets[3],
  uint32_t empty_literals, uint32_t length_to_beat);

uint32_t CollectOptimalExternalMatches6(OptimalMatch* matches,
  MatchState* state, uint32_t* next_hash3, const uint8_t* input,
  const uint8_t* end, const uint32_t repeated_offsets[3],
  uint32_t empty_literals, uint32_t length_to_beat);

uint32_t CollectOptimalPreparedMatches3(OptimalMatch* matches,
  MatchState* state, uint32_t* next_hash3, const uint8_t* input,
  const uint8_t* end, const uint32_t repeated_offsets[3],
  uint32_t empty_literals, uint32_t length_to_beat);

uint32_t CollectOptimalPreparedMatches4(OptimalMatch* matches,
  MatchState* state, uint32_t* next_hash3, const uint8_t* input,
  const uint8_t* end, const uint32_t repeated_offsets[3],
  uint32_t empty_literals, uint32_t length_to_beat);

uint32_t CollectOptimalPreparedMatches5(OptimalMatch* matches,
  MatchState* state, uint32_t* next_hash3, const uint8_t* input,
  const uint8_t* end, const uint32_t repeated_offsets[3],
  uint32_t empty_literals, uint32_t length_to_beat);

uint32_t CollectOptimalPreparedMatches6(OptimalMatch* matches,
  MatchState* state, uint32_t* next_hash3, const uint8_t* input,
  const uint8_t* end, const uint32_t repeated_offsets[3],
  uint32_t empty_literals, uint32_t length_to_beat);

}
