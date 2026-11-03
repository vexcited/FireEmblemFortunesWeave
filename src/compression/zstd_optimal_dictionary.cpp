/*
  Adapted from Zstandard under the BSD license.
  Copyright Meta Platforms, Inc. and affiliates. All rights reserved.
  Original license: https://github.com/facebook/zstd/blob/v1.5.6/LICENSE
  Full license text: include/compression/zstd_bit_reader.hpp.
*/

#include "compression/zstd_optimal_dictionary.hpp"

namespace fw::compression {

size_t FindOptimalPreparedMatches(MatchState* state, SequenceStore* sequences,
  uint32_t repeated_offsets[3], const void* source, size_t size) {
  return FindOptimalMatchesForDictionary(
    state, sequences, repeated_offsets, source, size, 2);
}

size_t FindUltraPreparedMatches(MatchState* state, SequenceStore* sequences,
  uint32_t repeated_offsets[3], const void* source, size_t size) {
  return FindUltraMatchesForDictionary(
    state, sequences, repeated_offsets, source, size, 2);
}

size_t FindOptimalExternalMatches(MatchState* state, SequenceStore* sequences,
  uint32_t repeated_offsets[3], const void* source, size_t size) {
  return FindOptimalMatchesForDictionary(
    state, sequences, repeated_offsets, source, size, 1);
}

size_t FindUltraExternalMatches(MatchState* state, SequenceStore* sequences,
  uint32_t repeated_offsets[3], const void* source, size_t size) {
  return FindUltraMatchesForDictionary(
    state, sequences, repeated_offsets, source, size, 1);
}

}
