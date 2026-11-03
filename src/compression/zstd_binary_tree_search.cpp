/*
  Adapted from Zstandard under the BSD license.
  Copyright Meta Platforms, Inc. and affiliates. All rights reserved.
  Original license: https://github.com/facebook/zstd/blob/v1.5.6/LICENSE
  Full license text: include/compression/zstd_bit_reader.hpp.
*/

#include "compression/zstd_binary_tree.hpp"
#include "compression/zstd_block_internal.hpp"

namespace fw::compression {
namespace {

using block_detail::Read;
using block_detail::NextToUpdate;

uint32_t Hash(const uint8_t* source, unsigned bits, unsigned length) {
  if (length != 5 && length != 6) {
    return (Read<uint32_t>(source) * uint32_t(2654435761)) >> (32 - bits);
  }
  uint64_t multiplier = length == 5
    ? 0xcf1bbcdcbb000000ULL : 0xcf1bbcdcbf9b0000ULL;
  return (Read<uint64_t>(source) * multiplier) >> (64 - bits);
}

unsigned LeadingZeros(uint32_t value) {
  return value ? __builtin_clz(value) : 32;
}

size_t CountMatch(
  const uint8_t* source, const uint8_t* match, const uint8_t* end
) {
  const uint8_t* start = source;
  while (source + 8 <= end) {
    uint64_t difference = Read<uint64_t>(source) ^ Read<uint64_t>(match);
    if (difference) {
      return source - start + (__builtin_ctzll(difference) >> 3);
    }
    source += 8;
    match += 8;
  }
  while (source < end && *source == *match) {
    ++source;
    ++match;
  }
  return source - start;
}

void SortPosition(
  const MatchState* state, uint32_t current, const uint8_t* input_end,
  unsigned comparisons, uint32_t tree_low, unsigned dictionary_mode
) {
  uint32_t mask = (1u << (state->parameters.chain_log - 1)) - 1;
  const uint8_t* base = state->window.base;
  const uint8_t* dictionary = state->window.dictionary_base;
  uint32_t limit = state->window.dictionary_limit;
  const uint8_t* source = current >= limit
    ? base + current : dictionary + current;
  const uint8_t* end = current >= limit ? input_end : dictionary + limit;
  uint32_t* smaller = state->chain_table + 2 * (current & mask);
  uint32_t* larger = smaller + 1;
  uint32_t match_index = *smaller;
  uint32_t dummy;
  size_t common_smaller = 0;
  size_t common_larger = 0;
  uint32_t lowest = state->window.low_limit;
  unsigned distance = 1u << state->parameters.window_log;
  if (current - lowest > distance) {
    lowest = current - distance;
  }
  while (comparisons && match_index > lowest) {
    --comparisons;
    uint32_t* next = state->chain_table + 2 * (match_index & mask);
    size_t length = common_smaller < common_larger
      ? common_smaller : common_larger;
    const uint8_t* match;
    if (dictionary_mode != 1 || match_index + length >= limit ||
        current < limit) {
      const uint8_t* match_base = dictionary_mode != 1 ||
        match_index + length >= limit ? base : dictionary;
      match = match_base + match_index;
      length += CountMatch(source + length, match + length, end);
    }
    else {
      match = dictionary + match_index;
      length += CountDictionaryMatch(source + length, match + length,
        end, dictionary + limit, base + limit);
      if (match_index + length >= limit) {
        match = base + match_index;
      }
    }
    if (source + length == end) {
      break;
    }
    if (match[length] < source[length]) {
      *smaller = match_index;
      common_smaller = length;
      if (match_index <= tree_low) {
        smaller = &dummy;
        break;
      }
      smaller = next + 1;
      match_index = next[1];
    }
    else {
      *larger = match_index;
      common_larger = length;
      if (match_index <= tree_low) {
        larger = &dummy;
        break;
      }
      larger = next;
      match_index = next[0];
    }
  }
  *smaller = 0;
  *larger = 0;
}

size_t FindPreparedMatch(
  const MatchState* state, const uint8_t* source, const uint8_t* end,
  size_t* offset_base, size_t best, unsigned comparisons, unsigned minimum
) {
  const MatchState* dictionary = state->dictionary;
  uint32_t hash = Hash(source, dictionary->parameters.hash_log, minimum);
  uint32_t index = dictionary->hash_table[hash];
  const uint8_t* base = state->window.base;
  const uint8_t* dictionary_base = dictionary->window.base;
  const uint8_t* dictionary_end = dictionary->window.next_source;
  uint32_t current = uint32_t(source - base);
  uint32_t high = uint32_t(dictionary_end - dictionary_base);
  uint32_t low = dictionary->window.low_limit;
  uint32_t delta = state->window.low_limit - high;
  uint32_t mask = (1u << (dictionary->parameters.chain_log - 1)) - 1;
  uint32_t tree_low = mask >= high - low ? low : high - mask;
  size_t common_smaller = 0;
  size_t common_larger = 0;
  while (comparisons && index > low) {
    --comparisons;
    const uint32_t* next = dictionary->chain_table + 2 * (index & mask);
    size_t length = common_smaller < common_larger
      ? common_smaller : common_larger;
    const uint8_t* match = dictionary_base + index;
    length += CountDictionaryMatch(source + length, match + length, end,
      dictionary_end, base + state->window.dictionary_limit);
    if (index + length >= high) {
      match = base + index + delta;
    }
    if (length > best) {
      uint32_t mapped = index + delta;
      int cost = int(LeadingZeros(uint32_t(*offset_base) + 1)) -
        int(LeadingZeros(current - mapped + 1));
      if (4 * int(length - best) > cost) {
        best = length;
        *offset_base = current - mapped + 3;
      }
      if (source + length == end) {
        break;
      }
    }
    if (index <= tree_low) {
      break;
    }
    if (match[length] < source[length]) {
      common_smaller = length;
      index = next[1];
    }
    else {
      common_larger = length;
      index = next[0];
    }
  }
  return best;
}

size_t Search(
  MatchState* state, const uint8_t* source, const uint8_t* end,
  size_t* offset_base, unsigned minimum
) {
  const uint8_t* base = state->window.base;
  uint32_t index = NextToUpdate(state);
  if (source < base + index) {
    return 0;
  }
  uint32_t target = uint32_t(source - base);
  uint32_t mask = (1u << (state->parameters.chain_log - 1)) - 1;
  for (; index < target; ++index) {
    uint32_t hash = Hash(base + index, state->parameters.hash_log, minimum);
    uint32_t previous = state->hash_table[hash];
    state->hash_table[hash] = index;
    uint32_t* node = state->chain_table + 2 * (index & mask);
    node[0] = previous;
    node[1] = 1;
  }
  NextToUpdate(state) = target;
  return FindBinaryTreeBestMatch(state, source, end, offset_base, minimum, 0);
}

}

size_t FindBinaryTreeBestMatch(
  MatchState* state, const uint8_t* source, const uint8_t* end,
  size_t* offset_base, unsigned minimum_match, unsigned dictionary_mode
) {
  const auto& parameters = state->parameters;
  uint32_t hash = Hash(source, parameters.hash_log, minimum_match);
  uint32_t match_index = state->hash_table[hash];
  const uint8_t* base = state->window.base;
  uint32_t current = uint32_t(source - base);
  uint32_t lowest = state->window.low_limit;
  unsigned distance = 1u << parameters.window_log;
  if (!state->loaded_dictionary_end && current - lowest > distance) {
    lowest = current - distance;
  }
  uint32_t mask = (1u << (parameters.chain_log - 1)) - 1;
  uint32_t tree_low = mask >= current ? 0 : current - mask;
  uint32_t unsorted_limit = tree_low > lowest ? tree_low : lowest;
  unsigned comparisons = 1u << parameters.search_log;
  unsigned candidates = comparisons;
  uint32_t previous = 0;
  while (match_index > unsorted_limit) {
    uint32_t* node = state->chain_table + 2 * (match_index & mask);
    if (node[1] != 1 || candidates <= 1) {
      break;
    }
    node[1] = previous;
    previous = match_index;
    match_index = node[0];
    --candidates;
  }
  if (match_index > unsorted_limit) {
    uint32_t* node = state->chain_table + 2 * (match_index & mask);
    if (node[1] == 1) {
      node[0] = 0;
      node[1] = 0;
    }
  }
  match_index = previous;
  while (match_index) {
    uint32_t next = state->chain_table[2 * (match_index & mask) + 1];
    SortPosition(state, match_index, end, candidates,
      unsorted_limit, dictionary_mode);
    match_index = next;
    ++candidates;
  }
  const uint8_t* dictionary = state->window.dictionary_base;
  uint32_t limit = state->window.dictionary_limit;
  uint32_t* smaller = state->chain_table + 2 * (current & mask);
  uint32_t* larger = smaller + 1;
  uint32_t match_end = current + 9;
  uint32_t dummy;
  size_t best = 0;
  size_t common_smaller = 0;
  size_t common_larger = 0;
  match_index = state->hash_table[hash];
  state->hash_table[hash] = current;
  for (; comparisons && match_index > lowest; --comparisons) {
    uint32_t* next = state->chain_table + 2 * (match_index & mask);
    size_t length = common_smaller < common_larger
      ? common_smaller : common_larger;
    const uint8_t* match;
    if (dictionary_mode != 1 || match_index + length >= limit) {
      match = base + match_index;
      length += CountMatch(source + length, match + length, end);
    }
    else {
      match = dictionary + match_index;
      length += CountDictionaryMatch(source + length, match + length,
        end, dictionary + limit, base + limit);
      if (match_index + length >= limit) {
        match = base + match_index;
      }
    }
    if (length > best) {
      if (length > match_end - match_index) {
        match_end = match_index + uint32_t(length);
      }
      int cost = int(LeadingZeros(uint32_t(*offset_base))) -
        int(LeadingZeros(current - match_index + 1));
      if (4 * int(length - best) > cost) {
        best = length;
        *offset_base = current - match_index + 3;
      }
      if (source + length == end) {
        if (dictionary_mode == 2) {
          comparisons = 0;
        }
        break;
      }
    }
    if (match[length] < source[length]) {
      *smaller = match_index;
      common_smaller = length;
      if (match_index <= tree_low) {
        smaller = &dummy;
        break;
      }
      smaller = next + 1;
      match_index = next[1];
    }
    else {
      *larger = match_index;
      common_larger = length;
      if (match_index <= tree_low) {
        larger = &dummy;
        break;
      }
      larger = next;
      match_index = next[0];
    }
  }
  *smaller = 0;
  *larger = 0;
  if (dictionary_mode == 2 && comparisons) {
    best = FindPreparedMatch(state, source, end, offset_base,
      best, comparisons, minimum_match);
  }
  NextToUpdate(state) = match_end - 8;
  return best;
}

size_t SearchBinaryTree4(MatchState* state, const uint8_t* source,
  const uint8_t* end, size_t* offset_base) {
  return Search(state, source, end, offset_base, 4);
}

size_t SearchBinaryTree5(MatchState* state, const uint8_t* source,
  const uint8_t* end, size_t* offset_base) {
  return Search(state, source, end, offset_base, 5);
}

size_t SearchBinaryTree6(MatchState* state, const uint8_t* source,
  const uint8_t* end, size_t* offset_base) {
  return Search(state, source, end, offset_base, 6);
}

}
