/*
  Adapted from Zstandard under the BSD license.
  Copyright Meta Platforms, Inc. and affiliates. All rights reserved.
  Original license: https://github.com/facebook/zstd/blob/v1.5.6/LICENSE
  Full license text: include/compression/zstd_bit_reader.hpp.
*/

#include "compression/zstd_binary_tree.hpp"

namespace fw::compression {
namespace {

template <typename T> T Read(const void* source) {
  T value;
  __builtin_memcpy(&value, source, sizeof(value));
  return value;
}

uint32_t LowestPrefix(
  const MatchState* state, uint32_t current, unsigned window_log) {
  const uint32_t distance = uint32_t{1} << window_log;
  const uint32_t lowest = state->window.dictionary_limit;
  return !state->loaded_dictionary_end && current - lowest > distance
           ? current - distance
           : lowest;
}

size_t CountMatch(
  const uint8_t* input, const uint8_t* match, const uint8_t* end) {
  const uint8_t* start = input;

  while (input + 8 <= end) {
    const uint64_t difference = Read<uint64_t>(input) ^ Read<uint64_t>(match);

    if (difference) {
      return input - start + (__builtin_ctzll(difference) >> 3);
    }

    input += 8;
    match += 8;
  }

  if (input + 4 <= end && Read<uint32_t>(input) == Read<uint32_t>(match)) {
    input += 4;
    match += 4;
  }

  if (input + 2 <= end && Read<uint16_t>(input) == Read<uint16_t>(match)) {
    input += 2;
    match += 2;
  }

  if (input < end && *input == *match) {
    ++input;
  }

  return input - start;
}

void Copy16(uint8_t* destination, const uint8_t* source) {
  uint8_t temporary[16];
  __builtin_memcpy(temporary, source, 16);
  __builtin_memcpy(destination, temporary, 16);
}

void WildCopy(uint8_t* destination, const uint8_t* source, ptrdiff_t size) {
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

void StoreSequence(SequenceStore* store, size_t literal_length,
  const uint8_t* source, const uint8_t* source_end, uint32_t offset_base,
  size_t match_length) {
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

uint32_t& LazySkipping(MatchState* state) {
  return *reinterpret_cast<uint32_t*>(reinterpret_cast<uint8_t*>(state) + 300);
}

unsigned HighBit(uint32_t value) {
  return 31 - __builtin_clz(value);
}

size_t Search(MatchState* state, const uint8_t* source,
  const uint8_t* end, size_t* offset_base, unsigned minimum) {
  if (minimum == 4) {
    return SearchBinaryTree4(state, source, end, offset_base);
  }
  if (minimum == 5) {
    return SearchBinaryTree5(state, source, end, offset_base);
  }
  return SearchBinaryTree6(state, source, end, offset_base);
}

size_t Parse(MatchState* state, SequenceStore* sequences,
  uint32_t repeated_offsets[3], const void* source, size_t source_size,
  unsigned depth) {
  const auto* input = static_cast<const uint8_t*>(source);
  const auto* anchor = input;
  const auto* end = input + source_size;
  const auto* limit = end - 8;
  const auto* base = state->window.base;
  const auto* prefix = base + state->window.dictionary_limit;
  const unsigned requested = state->parameters.minimum_match;
  const unsigned minimum = requested < 4 ? 4 : requested > 6 ? 6 : requested;
  uint32_t first = repeated_offsets[0];
  uint32_t second = repeated_offsets[1];
  uint32_t saved_first = 0;
  uint32_t saved_second = 0;
  input += uint32_t(input - prefix) == 0;
  const uint32_t current = input - base;
  const uint32_t maximum =
    current - LowestPrefix(state, current, state->parameters.window_log);
  if (second > maximum) {
    saved_second = second;
    second = 0;
  }
  if (first > maximum) {
    saved_first = first;
    first = 0;
  }
  LazySkipping(state) = 0;
  while (input < limit) {
    size_t length = 0;
    size_t offset = 1;
    const auto* start = input + 1;
    if (first &&
        Read<uint32_t>(input + 1 - first) == Read<uint32_t>(input + 1)) {
      length = CountMatch(input + 5, input + 5 - first, end) + 4;
    }
    if (!length || depth) {
      size_t candidate = 999999999;
      const size_t found = Search(state, input, end, &candidate, minimum);
      if (found > length) {
        length = found;
        start = input;
        offset = candidate;
      }
    }
    if (length < 4) {
      const size_t step = (size_t(input - anchor) >> 8) + 1;
      input += step;
      LazySkipping(state) = step > 8;
      continue;
    }
    if (depth) {
      while (input < limit) {
        ++input;
        if (offset && first &&
            Read<uint32_t>(input) == Read<uint32_t>(input - first)) {
          const size_t found =
            CountMatch(input + 4, input + 4 - first, end) + 4;
          const int gain = int(length * 3 - HighBit(uint32_t(offset)) + 1);
          if (found >= 4 && int(found * 3) > gain) {
            length = found;
            offset = 1;
            start = input;
          }
        }
        size_t candidate = 999999999;
        size_t found = Search(state, input, end, &candidate, minimum);
        int new_gain = int(found * 4 - HighBit(uint32_t(candidate)));
        int old_gain = int(length * 4 - HighBit(uint32_t(offset)) + 4);
        if (found >= 4 && new_gain > old_gain) {
          length = found;
          offset = candidate;
          start = input;
          continue;
        }
        if (depth == 2 && input < limit) {
          ++input;
          if (offset && first &&
              Read<uint32_t>(input) == Read<uint32_t>(input - first)) {
            found = CountMatch(input + 4, input + 4 - first, end) + 4;
            const int gain = int(length * 4 - HighBit(uint32_t(offset)) + 1);
            if (found >= 4 && int(found * 4) > gain) {
              length = found;
              offset = 1;
              start = input;
            }
          }
          candidate = 999999999;
          found = Search(state, input, end, &candidate, minimum);
          new_gain = int(found * 4 - HighBit(uint32_t(candidate)));
          old_gain = int(length * 4 - HighBit(uint32_t(offset)) + 7);
          if (found >= 4 && new_gain > old_gain) {
            length = found;
            offset = candidate;
            start = input;
            continue;
          }
        }
        break;
      }
    }
    if (offset > 3) {
      while (start > anchor && start - (offset - 3) > prefix &&
             start[-1] == (start - (offset - 3))[-1]) {
        --start;
        ++length;
      }
      second = first;
      first = offset - 3;
    }
    StoreSequence(sequences, start - anchor, anchor, end, offset, length);
    input = anchor = start + length;
    LazySkipping(state) = 0;
    while (input <= limit && second &&
           Read<uint32_t>(input) == Read<uint32_t>(input - second)) {
      length = CountMatch(input + 4, input + 4 - second, end) + 4;
      const uint32_t previous = first;
      first = second;
      second = previous;
      StoreSequence(sequences, 0, anchor, end, 1, length);
      input += length;
      anchor = input;
    }
  }
  if (saved_first && first) {
    saved_second = saved_first;
  }
  repeated_offsets[0] = first ? first : saved_first;
  repeated_offsets[1] = second ? second : saved_second;
  return end - anchor;
}

}

size_t FindBinaryTreeMatches(MatchState* state, SequenceStore* sequences,
  uint32_t repeated_offsets[3], const void* source, size_t source_size) {
  return Parse(state, sequences, repeated_offsets, source, source_size, 2);
}

}
