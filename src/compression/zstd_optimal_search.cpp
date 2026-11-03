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

template <unsigned Minimum>
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
    next +=
      InsertBinaryTreePosition(state, base + next, end, target, Minimum, 0);
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
    if (offset - 1 < current - state->window.dictionary_limit &&
        repeat_index >= window_low) {
      uint32_t left = Read<uint32_t>(input);
      uint32_t right = Read<uint32_t>(input - offset);
      if (comparison == 3) {
        left <<= 8;
        right <<= 8;
      }
      if (left == right) {
        length = comparison +
                 Count(input + comparison, input + comparison - offset, end);
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
      size_t length = Count(input, base + index3, end);
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
    const uint8_t* match = base + index;
    size_t length =
      common_smaller < common_larger ? common_smaller : common_larger;
    length += Count(input + length, match + length, end);
    if (length > best) {
      if (length > match_end - index) {
        match_end = index + uint32_t(length);
      }
      best = length;
      matches[count++] = {current - index + 3, uint32_t(length)};
      if (length > 4096 || input + length == end) {
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
  NextToUpdate(state) = match_end - 8;
  return count;
}
}

uint32_t CollectOptimalMatches3(OptimalMatch* matches, MatchState* state,
  uint32_t* next_hash3, const uint8_t* input, const uint8_t* end,
  const uint32_t repeated_offsets[3], uint32_t empty_literals,
  uint32_t length_to_beat) {
  return Collect<3>(matches, state, next_hash3, input, end, repeated_offsets,
    empty_literals, length_to_beat);
}

uint32_t CollectOptimalMatches4(OptimalMatch* matches, MatchState* state,
  uint32_t* next_hash3, const uint8_t* input, const uint8_t* end,
  const uint32_t repeated_offsets[3], uint32_t empty_literals,
  uint32_t length_to_beat) {
  return Collect<4>(matches, state, next_hash3, input, end, repeated_offsets,
    empty_literals, length_to_beat);
}

uint32_t CollectOptimalMatches5(OptimalMatch* matches, MatchState* state,
  uint32_t* next_hash3, const uint8_t* input, const uint8_t* end,
  const uint32_t repeated_offsets[3], uint32_t empty_literals,
  uint32_t length_to_beat) {
  return Collect<5>(matches, state, next_hash3, input, end, repeated_offsets,
    empty_literals, length_to_beat);
}

uint32_t CollectOptimalMatches6(OptimalMatch* matches, MatchState* state,
  uint32_t* next_hash3, const uint8_t* input, const uint8_t* end,
  const uint32_t repeated_offsets[3], uint32_t empty_literals,
  uint32_t length_to_beat) {
  return Collect<6>(matches, state, next_hash3, input, end, repeated_offsets,
    empty_literals, length_to_beat);
}

}
