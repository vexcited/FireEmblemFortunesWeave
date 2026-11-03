/*
  Adapted from Zstandard under the BSD license.
  Copyright Meta Platforms, Inc. and affiliates. All rights reserved.
  Original license: https://github.com/facebook/zstd/blob/v1.5.6/LICENSE
  Full license text: include/compression/zstd_bit_reader.hpp.
*/

#include "compression/zstd_optimal_internal.hpp"

namespace fw::compression {
namespace {
using namespace optimal_detail;

uint32_t Sum(const uint32_t* table, unsigned count) {
  uint32_t sum = 0;
  for (unsigned i = 0; i < count; ++i) {
    sum += table[i];
  }
  return sum;
}

uint32_t Downscale(
  uint32_t* table, unsigned count, unsigned shift, bool minimum_one) {
  uint32_t sum = 0;
  for (unsigned i = 0; i < count; ++i) {
    uint32_t base = minimum_one || table[i] != 0;
    table[i] = base + (table[i] >> shift);
    sum += table[i];
  }
  return sum;
}

uint32_t Scale(uint32_t* table, unsigned count, unsigned target_log) {
  uint32_t sum = Sum(table, count);
  uint32_t factor = sum >> target_log;
  return factor <= 1 ? sum : Downscale(table, count, HighBit(factor), true);
}

uint32_t FrequenciesFromFse(
  uint32_t* frequencies, unsigned count, const uint32_t* table) {
  unsigned log = Read<uint16_t>(table);
  const auto* transforms = reinterpret_cast<const FseCompressionTransform*>(
    table + 1 + (log ? 1u << (log - 1) : 1));
  uint32_t sum = 0;
  for (unsigned i = 0; i < count; ++i) {
    unsigned bits = (transforms[i].bit_delta + 65535) >> 16;
    frequencies[i] = bits ? 1u << ((10 - bits) & 31) : 1;
    sum += frequencies[i];
  }
  return sum;
}

void SkipRawBytes(RawSequenceStore* store, size_t bytes) {
  uint32_t position = uint32_t(store->position_in_sequence + bytes);
  while (position && store->position < store->size) {
    const auto& sequence = store->sequences[store->position];
    uint32_t length = sequence.literal_length + sequence.match_length;
    if (position >= length) {
      position -= length;
      ++store->position;
    }
    else {
      store->position_in_sequence = position;
      break;
    }
  }
  if (!position || store->position == store->size) {
    store->position_in_sequence = 0;
  }
}
}

void ResetCompressionSequenceStore(SequenceStore* sequences) {
  sequences->long_length_type = LongSequenceLength::None;
  sequences->literals = sequences->literals_start;
  sequences->sequences = sequences->sequences_start;
}

void AdvanceOptimalLongDistanceMatch(
  OptimalLongDistanceMatch* state, uint32_t position, uint32_t remaining) {
  auto* store = &state->sequences;
  if (!store->size || store->position >= store->size) {
    state->start = state->end = uint32_t(-1);
    return;
  }
  const auto& sequence = store->sequences[store->position];
  uint32_t end = position + remaining;
  uint32_t literals =
    store->position_in_sequence < sequence.literal_length
      ? sequence.literal_length - uint32_t(store->position_in_sequence)
      : 0;
  uint32_t match =
    sequence.match_length - (literals ? 0
                                      : uint32_t(store->position_in_sequence) -
                                          sequence.literal_length);
  if (literals >= remaining) {
    state->start = state->end = uint32_t(-1);
    SkipRawBytes(store, remaining);
    return;
  }
  state->start = position + literals;
  state->end = state->start + match;
  state->offset = sequence.offset;
  if (state->end > end) {
    state->end = end;
    SkipRawBytes(store, end - position);
  }
  else {
    SkipRawBytes(store, literals + match);
  }
}

void MergeOptimalLongDistanceMatch(OptimalLongDistanceMatch* state,
  OptimalMatch* matches, uint32_t* count, uint32_t position,
  uint32_t remaining) {
  auto* store = &state->sequences;
  if (!store->size || store->position >= store->size) {
    return;
  }
  if (position >= state->end) {
    if (position > state->end) {
      SkipRawBytes(store, position - state->end);
    }
    AdvanceOptimalLongDistanceMatch(state, position, remaining);
  }
  uint32_t length = state->end - position;
  if (position < state->start || position >= state->end || length < 3) {
    return;
  }
  if (!*count || (*count < 4096 && length > matches[*count - 1].length)) {
    matches[*count].length = length;
    matches[*count].offset_base = state->offset + 3;
    ++*count;
  }
}

void RescaleOptimalFrequencies(
  OptimalState* state, const uint8_t* source, size_t size, unsigned level) {
  state->predefined_prices = 0;
  if (!state->literal_length_sum) {
    state->predefined_prices = size <= 8;
    const auto* costs = state->symbol_costs;
    if (costs->literals.repeat_mode == 2) {
      state->predefined_prices = 0;
      if (CompressedLiterals(state)) {
        state->literal_sum = 0;
        for (unsigned i = 0; i < 256; ++i) {
          unsigned bits = HuffmanSymbolBits(costs->literals.table, i);
          state->literal_frequencies[i] = bits ? 1u << ((11 - bits) & 31) : 1;
          state->literal_sum += state->literal_frequencies[i];
        }
      }
      state->literal_length_sum =
        FrequenciesFromFse(state->literal_length_frequencies, 36,
          costs->sequences.literal_lengths);
      state->match_length_sum = FrequenciesFromFse(
        state->match_length_frequencies, 53, costs->sequences.match_lengths);
      state->offset_sum = FrequenciesFromFse(
        state->offset_frequencies, 32, costs->sequences.offsets);
    }
    else {
      if (CompressedLiterals(state)) {
        unsigned maximum = 255;
        CountHuffmanSymbolsSimple(
          state->literal_frequencies, &maximum, source, size);
        state->literal_sum =
          Downscale(state->literal_frequencies, 256, 8, false);
      }
      for (unsigned i = 0; i < 36; ++i) {
        state->literal_length_frequencies[i] = i == 0 ? 4 : i == 1 ? 2 : 1;
      }
      state->literal_length_sum = 40;
      for (unsigned i = 0; i < 53; ++i) {
        state->match_length_frequencies[i] = 1;
      }
      state->match_length_sum = 53;
      constexpr uint32_t initial_offsets[32] = {6, 2, 1, 1, 2, 3, 4, 4, 4, 3, 2,
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
      __builtin_memcpy(
        state->offset_frequencies, initial_offsets, sizeof(initial_offsets));
      state->offset_sum = Sum(initial_offsets, 32);
    }
  }
  else {
    if (CompressedLiterals(state)) {
      state->literal_sum = Scale(state->literal_frequencies, 256, 12);
    }
    state->literal_length_sum =
      Scale(state->literal_length_frequencies, 36, 11);
    state->match_length_sum = Scale(state->match_length_frequencies, 53, 11);
    state->offset_sum = Scale(state->offset_frequencies, 32, 11);
  }
  SetBasePrices(state, level);
}

}
