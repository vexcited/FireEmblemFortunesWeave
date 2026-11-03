/*
  Adapted from Zstandard under the BSD license.
  Copyright Meta Platforms, Inc. and affiliates. All rights reserved.
  Original license: https://github.com/facebook/zstd/blob/v1.5.6/LICENSE
  Full license text: include/compression/zstd_bit_reader.hpp.
*/

#include "compression/zstd_optimal_dictionary.hpp"
#include "compression/zstd_optimal_internal.hpp"

namespace fw::compression {
namespace {
using namespace optimal_detail;

uint32_t Hash(const uint8_t* input, unsigned log, unsigned minimum) {
  if (minimum != 5 && minimum != 6) {
    return (Read<uint32_t>(input) * uint32_t(2654435761)) >> (32 - log);
  }
  uint64_t multiplier =
    minimum == 5 ? 0xcf1bbcdcbb000000ULL : 0xcf1bbcdcbf9b0000ULL;
  return (Read<uint64_t>(input) * multiplier) >> (64 - log);
}

uint32_t Hash3(const uint8_t* input, unsigned log) {
  return ((Read<uint32_t>(input) << 8) * uint32_t(506832829)) >> (32 - log);
}

size_t Count(const uint8_t* input, const uint8_t* match, const uint8_t* end) {
  const uint8_t* start = input;
  while (end - input >= 8) {
    uint64_t difference = Read<uint64_t>(input) ^ Read<uint64_t>(match);
    if (difference) {
      return size_t(input - start) + (__builtin_ctzll(difference) >> 3);
    }
    input += 8;
    match += 8;
  }
  if (end - input >= 4 && Read<uint32_t>(input) == Read<uint32_t>(match)) {
    input += 4;
    match += 4;
  }
  if (end - input >= 2 && Read<uint16_t>(input) == Read<uint16_t>(match)) {
    input += 2;
    match += 2;
  }
  if (input < end && *input == *match) {
    ++input;
  }
  return size_t(input - start);
}

uint32_t FirstHash3(
  const MatchState* state, uint32_t* next, const uint8_t* input) {
  uint32_t target = uint32_t(input - state->window.base);
  unsigned log = HashLog3(state);
  for (uint32_t index = *next; index < target; ++index) {
    state->hash_table3[Hash3(state->window.base + index, log)] = index;
  }
  *next = target;
  return state->hash_table3[Hash3(input, log)];
}

template <unsigned Minimum, unsigned Mode>
uint32_t Collect(OptimalMatch* matches, MatchState* state, uint32_t* next_hash3,
  const uint8_t* input, const uint8_t* end, const uint32_t repeated_offsets[3],
  uint32_t empty_literals, uint32_t length_to_beat) {
  const uint8_t* base = state->window.base;
  uint32_t next = NextToUpdate(state);
  if (input < base + next) {
    return 0;
  }
  uint32_t target = uint32_t(input - base);
  while (next < target) {
    next += InsertBinaryTreePosition(
      state, base + next, end, target, Minimum, Mode == 1);
  }
  NextToUpdate(state) = target;
  const auto& parameters = state->parameters;
  uint32_t current = uint32_t(input - base);
  uint32_t hash = Hash(input, parameters.hash_log, Minimum);
  uint32_t index = state->hash_table[hash];
  uint32_t mask = (1u << (parameters.chain_log - 1)) - 1;
  uint32_t tree_low = mask >= current ? 0 : current - mask;
  uint32_t window_low = state->window.low_limit;
  uint32_t distance = 1u << parameters.window_log;
  if (!state->loaded_dictionary_end && current - window_low > distance) {
    window_low = current - distance;
  }
  uint32_t match_low = window_low ? window_low : 1;
  const MatchState* dictionary = Mode == 2 ? state->dictionary : nullptr;
  uint32_t dictionary_limit = state->window.dictionary_limit;
  const uint8_t* prefix = base + dictionary_limit;
  const uint8_t* dictionary_base =
    Mode == 2 ? dictionary->window.base : state->window.dictionary_base;
  const uint8_t* dictionary_end = Mode == 2
                                    ? dictionary->window.next_source
                                    : dictionary_base + dictionary_limit;
  uint32_t dictionary_high =
    Mode == 2 ? uint32_t(dictionary_end - dictionary_base) : 0;
  uint32_t dictionary_low = Mode == 2 ? dictionary->window.low_limit : 0;
  uint32_t dictionary_delta = Mode == 2 ? window_low - dictionary_high : 0;
  uint32_t dictionary_mask =
    Mode == 2 ? (1u << (dictionary->parameters.chain_log - 1)) - 1 : 0;
  uint32_t dictionary_tree_low =
    dictionary_mask < dictionary_high - dictionary_low
      ? dictionary_high - dictionary_mask
      : dictionary_low;
  uint32_t* smaller = state->chain_table + 2 * (current & mask);
  uint32_t* larger = smaller + 1;
  uint32_t match_end = current + 9;
  uint32_t dummy;
  uint32_t count = 0;
  uint32_t attempts = 1u << parameters.search_log;
  uint32_t sufficient =
    parameters.target_length < 4095 ? parameters.target_length : 4095;
  size_t best = length_to_beat - 1;
  constexpr unsigned comparison = Minimum == 3 ? 3 : 4;
  for (unsigned code = empty_literals; code < 3 + empty_literals; ++code) {
    uint32_t offset =
      code == 3 ? repeated_offsets[0] - 1 : repeated_offsets[code];
    uint32_t repeat_index = current - offset;
    uint32_t length = 0;
    const uint8_t* match = nullptr;
    bool in_prefix = offset - 1 < current - dictionary_limit;
    if (in_prefix) {
      if (repeat_index >= window_low) {
        match = input - offset;
      }
    }
    else {
      uint32_t low = Mode == 2 ? dictionary_low + dictionary_delta : window_low;
      if (offset - 1 < current - low &&
          uint32_t(dictionary_limit - 1 - repeat_index) >= 3) {
        match = dictionary_base + repeat_index - dictionary_delta;
      }
    }
    if (match) {
      uint32_t left = Read<uint32_t>(input);
      uint32_t right = Read<uint32_t>(match);
      if (comparison == 3) {
        left <<= 8;
        right <<= 8;
      }
      if (left == right) {
        length =
          comparison +
          (in_prefix ? Count(input + comparison, match + comparison, end)
                     : CountDictionaryMatch(input + comparison,
                         match + comparison, end, dictionary_end, prefix));
      }
    }
    if (length > best) {
      best = length;
      matches[count++] = {code - empty_literals + 1, length};
      if (length > sufficient || input + length == end) {
        return count;
      }
    }
  }
  if (Minimum == 3 && best < 3) {
    uint32_t index3 = FirstHash3(state, next_hash3, input);
    if (index3 >= match_low && current - index3 < (1u << 18)) {
      size_t length = Mode == 2 || index3 >= dictionary_limit
                        ? Count(input, base + index3, end)
                        : CountDictionaryMatch(input, dictionary_base + index3,
                            end, dictionary_end, prefix);
      if (length >= 3) {
        best = length;
        matches[0] = {current - index3 + 3, uint32_t(length)};
        count = 1;
        if (length > sufficient || input + length == end) {
          NextToUpdate(state) = current + 1;
          return 1;
        }
      }
    }
  }
  state->hash_table[hash] = current;
  size_t common_smaller = 0;
  size_t common_larger = 0;
  for (; attempts && index >= match_low; --attempts) {
    uint32_t* node = state->chain_table + 2 * (index & mask);
    const uint8_t* match;
    size_t length =
      common_smaller < common_larger ? common_smaller : common_larger;
    if (Mode == 2 || index + length >= dictionary_limit) {
      match = base + index;
      length += Count(input + length, match + length, end);
    }
    else {
      match = dictionary_base + index;
      length += CountDictionaryMatch(
        input + length, match + length, end, dictionary_end, prefix);
      if (index + length >= dictionary_limit) {
        match = base + index;
      }
    }
    if (length > best) {
      if (length > match_end - index) {
        match_end = index + uint32_t(length);
      }
      best = length;
      matches[count++] = {current - index + 3, uint32_t(length)};
      if (length > 4096 || input + length == end) {
        if (Mode == 2) {
          attempts = 0;
        }
        break;
      }
    }
    if (match[length] < input[length]) {
      *smaller = index;
      common_smaller = length;
      if (index <= tree_low) {
        smaller = &dummy;
        break;
      }
      smaller = node + 1;
      index = node[1];
    }
    else {
      *larger = index;
      common_larger = length;
      if (index <= tree_low) {
        larger = &dummy;
        break;
      }
      larger = node;
      index = node[0];
    }
  }
  *smaller = *larger = 0;
  if (Mode == 2 && attempts) {
    uint32_t dictionary_hash =
      Hash(input, dictionary->parameters.hash_log, Minimum);
    uint32_t dictionary_index = dictionary->hash_table[dictionary_hash];
    common_smaller = common_larger = 0;
    for (; attempts && dictionary_index > dictionary_low; --attempts) {
      const uint32_t* node =
        dictionary->chain_table + 2 * (dictionary_index & dictionary_mask);
      size_t length =
        common_smaller < common_larger ? common_smaller : common_larger;
      const uint8_t* match = dictionary_base + dictionary_index;
      length += CountDictionaryMatch(
        input + length, match + length, end, dictionary_end, prefix);
      if (dictionary_index + length >= dictionary_high) {
        match = base + dictionary_index + dictionary_delta;
      }
      if (length > best) {
        index = dictionary_index + dictionary_delta;
        if (length > match_end - index) {
          match_end = index + uint32_t(length);
        }
        best = length;
        matches[count++] = {current - index + 3, uint32_t(length)};
        if (length > 4096 || input + length == end) {
          break;
        }
      }
      if (dictionary_index <= dictionary_tree_low) {
        break;
      }
      if (match[length] < input[length]) {
        common_smaller = length;
        dictionary_index = node[1];
      }
      else {
        common_larger = length;
        dictionary_index = node[0];
      }
    }
  }
  NextToUpdate(state) = match_end - 8;
  return count;
}
}

uint32_t CollectOptimalExternalMatches3(OptimalMatch* matches,
  MatchState* state, uint32_t* next_hash3, const uint8_t* input,
  const uint8_t* end, const uint32_t repeated_offsets[3],
  uint32_t empty_literals, uint32_t length_to_beat) {
  return Collect<3, 1>(matches, state, next_hash3, input, end, repeated_offsets,
    empty_literals, length_to_beat);
}

uint32_t CollectOptimalExternalMatches4(OptimalMatch* matches,
  MatchState* state, uint32_t* next_hash3, const uint8_t* input,
  const uint8_t* end, const uint32_t repeated_offsets[3],
  uint32_t empty_literals, uint32_t length_to_beat) {
  return Collect<4, 1>(matches, state, next_hash3, input, end, repeated_offsets,
    empty_literals, length_to_beat);
}

uint32_t CollectOptimalExternalMatches5(OptimalMatch* matches,
  MatchState* state, uint32_t* next_hash3, const uint8_t* input,
  const uint8_t* end, const uint32_t repeated_offsets[3],
  uint32_t empty_literals, uint32_t length_to_beat) {
  return Collect<5, 1>(matches, state, next_hash3, input, end, repeated_offsets,
    empty_literals, length_to_beat);
}

uint32_t CollectOptimalExternalMatches6(OptimalMatch* matches,
  MatchState* state, uint32_t* next_hash3, const uint8_t* input,
  const uint8_t* end, const uint32_t repeated_offsets[3],
  uint32_t empty_literals, uint32_t length_to_beat) {
  return Collect<6, 1>(matches, state, next_hash3, input, end, repeated_offsets,
    empty_literals, length_to_beat);
}

uint32_t CollectOptimalPreparedMatches3(OptimalMatch* matches,
  MatchState* state, uint32_t* next_hash3, const uint8_t* input,
  const uint8_t* end, const uint32_t repeated_offsets[3],
  uint32_t empty_literals, uint32_t length_to_beat) {
  return Collect<3, 2>(matches, state, next_hash3, input, end, repeated_offsets,
    empty_literals, length_to_beat);
}

uint32_t CollectOptimalPreparedMatches4(OptimalMatch* matches,
  MatchState* state, uint32_t* next_hash3, const uint8_t* input,
  const uint8_t* end, const uint32_t repeated_offsets[3],
  uint32_t empty_literals, uint32_t length_to_beat) {
  return Collect<4, 2>(matches, state, next_hash3, input, end, repeated_offsets,
    empty_literals, length_to_beat);
}

uint32_t CollectOptimalPreparedMatches5(OptimalMatch* matches,
  MatchState* state, uint32_t* next_hash3, const uint8_t* input,
  const uint8_t* end, const uint32_t repeated_offsets[3],
  uint32_t empty_literals, uint32_t length_to_beat) {
  return Collect<5, 2>(matches, state, next_hash3, input, end, repeated_offsets,
    empty_literals, length_to_beat);
}

uint32_t CollectOptimalPreparedMatches6(OptimalMatch* matches,
  MatchState* state, uint32_t* next_hash3, const uint8_t* input,
  const uint8_t* end, const uint32_t repeated_offsets[3],
  uint32_t empty_literals, uint32_t length_to_beat) {
  return Collect<6, 2>(matches, state, next_hash3, input, end, repeated_offsets,
    empty_literals, length_to_beat);
}

}
