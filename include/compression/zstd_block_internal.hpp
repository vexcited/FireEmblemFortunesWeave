/*
  Adapted from Zstandard under the BSD license.
  Copyright Meta Platforms, Inc. and affiliates. All rights reserved.
  Original license: https://github.com/facebook/zstd/blob/v1.5.6/LICENSE
  Full license text: include/compression/zstd_bit_reader.hpp.
*/

#pragma once

#include "compression/zstd_match.hpp"

namespace fw::compression::block_detail {

template <typename T> T Read(const void* source) {
  T value;
  __builtin_memcpy(&value, source, sizeof(value));
  return value;
}

template <typename T> void Write(void* destination, T value) {
  __builtin_memcpy(destination, &value, sizeof(value));
}

inline bool IsError(size_t value) {
  return value > size_t(-120);
}

inline uint32_t& NextToUpdate(MatchState* state) {
  return *reinterpret_cast<uint32_t*>(state->other_match_finder_state);
}

inline unsigned DictionaryMode(const MatchState* state) {
  if (state->window.low_limit < state->window.dictionary_limit) {
    return 1;
  }

  if (!state->dictionary) {
    return 0;
  }

  const auto* bytes = reinterpret_cast<const uint8_t*>(state->dictionary);
  return 2 + (Read<uint32_t>(bytes + 140) != 0);
}

inline void UpdateRepeatedOffsets(uint32_t* rep, uint32_t base, bool empty) {
  if (base > 3) {
    rep[2] = rep[1];
    rep[1] = rep[0];
    rep[0] = base - 3;
    return;
  }

  const unsigned index = base - 1 + empty;

  if (index) {
    const uint32_t next = index == 3 ? rep[0] - 1 : rep[index];
    rep[2] = index == 1 ? rep[2] : rep[1];
    rep[1] = rep[0];
    rep[0] = next;
  }
}

inline void Copy16(uint8_t* destination, const uint8_t* source) {
  uint8_t temporary[16];
  __builtin_memcpy(temporary, source, 16);
  __builtin_memcpy(destination, temporary, 16);
}

inline void WildCopy(
  uint8_t* destination, const uint8_t* source, ptrdiff_t size
) {
  uint8_t* end = destination + size;
  // Literal storage includes the original 32-byte overcopy allowance.
  Copy16(destination, source);

  if (size <= 16) {
    return;
  }

  destination += 16;
  source += 16;

  do {
    Copy16(destination, source);
    Copy16(destination + 16, source + 16);
    destination += 32;
    source += 32;
  } while (destination < end);
}

inline void StoreSequence(
  SequenceStore* store, size_t literal_length, const uint8_t* source,
  const uint8_t* source_end, uint32_t offset_base, size_t match_length
) {
  const uint8_t* wild_limit = source_end - 32;
  const uint8_t* literal_end = source + literal_length;

  if (literal_end <= wild_limit) {
    Copy16(store->literals, source);

    if (literal_length > 16) {
      WildCopy(store->literals + 16, source + 16, literal_length - 16);
    }
  }
  else {
    uint8_t* output = store->literals;

    if (source <= wild_limit) {
      WildCopy(output, source, wild_limit - source);
      output += wild_limit - source;
      source = wild_limit;
    }

    while (source < literal_end) {
      *output++ = *source++;
    }
  }

  store->literals += literal_length;

  if (literal_length > 0xFFFF) {
    store->long_length_type = LongSequenceLength::Literal;
    store->long_length_position = store->sequences - store->sequences_start;
  }

  store->sequences->literal_length = static_cast<uint16_t>(literal_length);
  store->sequences->offset_base = offset_base;
  const size_t match_base = match_length - 3;

  if (match_base > 0xFFFF) {
    store->long_length_type = LongSequenceLength::Match;
    store->long_length_position = store->sequences - store->sequences_start;
  }

  store->sequences->match_length_base = static_cast<uint16_t>(match_base);
  ++store->sequences;
}

}
