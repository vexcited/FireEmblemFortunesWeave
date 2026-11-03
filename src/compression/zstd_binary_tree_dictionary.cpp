/*
  Adapted from Zstandard under the BSD license.
  Copyright Meta Platforms, Inc. and affiliates. All rights reserved.
  Original license: https://github.com/facebook/zstd/blob/v1.5.6/LICENSE
  Full license text: include/compression/zstd_bit_reader.hpp.
*/

#include "compression/zstd_binary_tree_dictionary.hpp"

namespace fw::compression {
namespace {

template <typename T> T Read(const void* source) {
  T value;
  __builtin_memcpy(&value, source, sizeof(value));
  return value;
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
  const uint8_t* source, const uint8_t* source_end,
  uint32_t offset_base, size_t match_length) {
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

size_t SearchPrepared(MatchState* state, const uint8_t* source,
  const uint8_t* end, size_t* offset_base, unsigned minimum) {
  if (minimum == 4) {
    return SearchPreparedBinaryTree4(state, source, end, offset_base);
  }
  if (minimum == 5) {
    return SearchPreparedBinaryTree5(state, source, end, offset_base);
  }
  return SearchPreparedBinaryTree6(state, source, end, offset_base);
}

size_t SearchExternal(MatchState* state, const uint8_t* source,
  const uint8_t* end, size_t* offset_base, unsigned minimum) {
  if (minimum == 4) {
    return SearchExternalBinaryTree4(state, source, end, offset_base);
  }
  if (minimum == 5) {
    return SearchExternalBinaryTree5(state, source, end, offset_base);
  }
  return SearchExternalBinaryTree6(state, source, end, offset_base);
}

size_t RepeatedPreparedMatch(MatchState* state, const uint8_t* input,
  const uint8_t* end, uint32_t offset) {
  const auto* base = state->window.base;
  const uint32_t prefix_index = state->window.dictionary_limit;
  const auto* dictionary = state->dictionary;
  const auto* dictionary_base = dictionary->window.base;
  const auto* dictionary_end = dictionary->window.next_source;
  const uint32_t delta =
    prefix_index - uint32_t(dictionary_end - dictionary_base);
  const uint32_t index = uint32_t(input - base) - offset;
  if (uint32_t(prefix_index - 1 - index) < 3) {
    return 0;
  }
  const auto* match = index < prefix_index
                        ? dictionary_base + uint32_t(index - delta)
                        : base + index;
  if (Read<uint32_t>(match) != Read<uint32_t>(input)) {
    return 0;
  }
  const auto* match_end = index < prefix_index ? dictionary_end : end;
  return 4 + CountDictionaryMatch(
    input + 4, match + 4, end, match_end, base + prefix_index
  );
}

size_t ParsePrepared(MatchState* state, SequenceStore* sequences,
  uint32_t repeated_offsets[3], const void* source,
  size_t source_size, unsigned depth) {
  const auto* input = static_cast<const uint8_t*>(source);
  const auto* anchor = input;
  const auto* end = input + source_size;
  const auto* limit = end - 8;
  const auto* base = state->window.base;
  const uint32_t prefix_index = state->window.dictionary_limit;
  const auto* prefix = base + prefix_index;
  const auto* dictionary = state->dictionary;
  const auto* dictionary_base = dictionary->window.base;
  const auto* dictionary_lowest =
    dictionary_base + dictionary->window.dictionary_limit;
  const auto* dictionary_end = dictionary->window.next_source;
  const uint32_t delta =
    prefix_index - uint32_t(dictionary_end - dictionary_base);
  const unsigned requested = state->parameters.minimum_match;
  const unsigned minimum = requested < 4 ? 4 : requested > 6 ? 6 : requested;
  uint32_t first = repeated_offsets[0];
  uint32_t second = repeated_offsets[1];
  input +=
    uint32_t((input - prefix) + (dictionary_end - dictionary_lowest)) == 0;
  LazySkipping(state) = 0;
  while (input < limit) {
    size_t length = RepeatedPreparedMatch(state, input + 1, end, first);
    size_t offset = 1;
    const auto* start = input + 1;
    if (!length || depth) {
      size_t candidate = 999999999;
      const size_t found =
        SearchPrepared(state, input, end, &candidate, minimum);
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
        size_t found = RepeatedPreparedMatch(state, input, end, first);
        int gain = int(length * 3 - HighBit(uint32_t(offset)) + 1);
        if (found >= 4 && int(found * 3) > gain) {
          length = found;
          offset = 1;
          start = input;
        }
        size_t candidate = 999999999;
        found = SearchPrepared(state, input, end, &candidate, minimum);
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
          found = RepeatedPreparedMatch(state, input, end, first);
          gain = int(length * 4 - HighBit(uint32_t(offset)) + 1);
          if (found >= 4 && int(found * 4) > gain) {
            length = found;
            offset = 1;
            start = input;
          }
          candidate = 999999999;
          found = SearchPrepared(state, input, end, &candidate, minimum);
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
      const uint32_t index = size_t(start - base) - (offset - 3);
      const auto* match = index < prefix_index
                            ? dictionary_base + uint32_t(index - delta)
                            : base + index;
      const auto* match_start =
        index < prefix_index ? dictionary_lowest : prefix;
      while (start > anchor && match > match_start && start[-1] == match[-1]) {
        --start;
        --match;
        ++length;
      }
      second = first;
      first = offset - 3;
    }
    StoreSequence(sequences, start - anchor, anchor, end, offset, length);
    input = anchor = start + length;
    if (LazySkipping(state)) {
      LazySkipping(state) = 0;
    }
    while (input <= limit) {
      length = RepeatedPreparedMatch(state, input, end, second);
      if (!length) {
        break;
      }
      const uint32_t previous = first;
      first = second;
      second = previous;
      StoreSequence(sequences, 0, anchor, end, 1, length);
      input += length;
      anchor = input;
    }
  }
  repeated_offsets[0] = first;
  repeated_offsets[1] = second;
  return end - anchor;
}

size_t RepeatedExternalMatch(MatchState* state, const uint8_t* input,
  const uint8_t* end, uint32_t offset) {
  const auto* base = state->window.base;
  const uint32_t prefix_index = state->window.dictionary_limit;
  const auto* dictionary_base = state->window.dictionary_base;
  const auto* dictionary_end = dictionary_base + prefix_index;
  const uint32_t current = input - base;
  const uint32_t distance = uint32_t{1} << state->parameters.window_log;
  const uint32_t lowest = state->window.low_limit;
  const uint32_t low_limit =
    !state->loaded_dictionary_end && current - lowest > distance
      ? current - distance
      : lowest;
  const uint32_t index = uint32_t(input - base) - offset;
  if (uint32_t(prefix_index - 1 - index) < 3 || offset > current - low_limit) {
    return 0;
  }
  const auto* match =
    index < prefix_index ? dictionary_base + index : base + index;
  if (Read<uint32_t>(match) != Read<uint32_t>(input)) {
    return 0;
  }
  const auto* match_end = index < prefix_index ? dictionary_end : end;
  return 4 + CountDictionaryMatch(
    input + 4, match + 4, end, match_end, base + prefix_index
  );
}

size_t ParseExternal(MatchState* state, SequenceStore* sequences,
  uint32_t repeated_offsets[3], const void* source,
  size_t source_size, unsigned depth) {
  const auto* input = static_cast<const uint8_t*>(source);
  const auto* anchor = input;
  const auto* end = input + source_size;
  const auto* limit = end - 8;
  const auto* base = state->window.base;
  const uint32_t prefix_index = state->window.dictionary_limit;
  const auto* prefix = base + prefix_index;
  const auto* dictionary_base = state->window.dictionary_base;
  const auto* dictionary_lowest = dictionary_base + state->window.low_limit;
  const unsigned requested = state->parameters.minimum_match;
  const unsigned minimum = requested < 4 ? 4 : requested > 6 ? 6 : requested;
  uint32_t first = repeated_offsets[0];
  uint32_t second = repeated_offsets[1];
  input += input == prefix;
  LazySkipping(state) = 0;
  while (input < limit) {
    size_t length = RepeatedExternalMatch(state, input + 1, end, first);
    size_t offset = 1;
    const auto* start = input + 1;
    if (!length || depth) {
      size_t candidate = 999999999;
      const size_t found = SearchExternal(
        state, input, end, &candidate, minimum);
      if (found > length) {
        length = found;
        start = input;
        offset = candidate;
      }
    }
    if (length < 4) {
      const size_t step = size_t(input - anchor) >> 8;
      input += step + 1;
      LazySkipping(state) = step > 8;
      continue;
    }
    if (depth) {
      while (input < limit) {
        ++input;
        size_t found = RepeatedExternalMatch(state, input, end, first);
        int gain = int(length * 3 - HighBit(uint32_t(offset)) + 1);
        if (found >= 4 && int(found * 3) > gain) {
          length = found;
          offset = 1;
          start = input;
        }
        size_t candidate = 999999999;
        found = SearchExternal(state, input, end, &candidate, minimum);
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
          found = RepeatedExternalMatch(state, input, end, first);
          gain = int(length * 4 - HighBit(uint32_t(offset)) + 1);
          if (found >= 4 && int(found * 4) > gain) {
            length = found;
            offset = 1;
            start = input;
          }
          candidate = 999999999;
          found = SearchExternal(state, input, end, &candidate, minimum);
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
      const uint32_t index = size_t(start - base) - (offset - 3);
      const auto* match =
        index < prefix_index ? dictionary_base + index : base + index;
      const auto* match_start =
        index < prefix_index ? dictionary_lowest : prefix;
      while (start > anchor && match > match_start && start[-1] == match[-1]) {
        --start;
        --match;
        ++length;
      }
      second = first;
      first = offset - 3;
    }
    StoreSequence(sequences, start - anchor, anchor, end, offset, length);
    input = anchor = start + length;
    if (LazySkipping(state)) {
      LazySkipping(state) = 0;
    }
    while (input <= limit) {
      length = RepeatedExternalMatch(state, input, end, second);
      if (!length) {
        break;
      }
      const uint32_t previous = first;
      first = second;
      second = previous;
      StoreSequence(sequences, 0, anchor, end, 1, length);
      input += length;
      anchor = input;
    }
  }
  repeated_offsets[0] = first;
  repeated_offsets[1] = second;
  return end - anchor;
}

}

size_t FindBinaryTreePreparedMatches(MatchState* state,
  SequenceStore* sequences, uint32_t repeated_offsets[3],
  const void* source, size_t source_size) {
  return ParsePrepared(state, sequences, repeated_offsets, source,
    source_size, 2);
}

size_t FindBinaryTreeExternalMatches(MatchState* state,
  SequenceStore* sequences, uint32_t repeated_offsets[3],
  const void* source, size_t source_size) {
  return ParseExternal(state, sequences, repeated_offsets, source,
    source_size, 2);
}

}
