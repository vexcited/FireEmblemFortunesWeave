/*
  Adapted from Zstandard under the BSD license.
  Copyright Meta Platforms, Inc. and affiliates. All rights reserved.
  Original license: https://github.com/facebook/zstd/blob/v1.5.6/LICENSE
  Full license text: include/compression/zstd_bit_reader.hpp.
*/

#include "compression/zstd_oneshot.hpp"
#include "compression/zstd_workspace_internal.hpp"
#include "compression/zstd_frame_encoder.hpp"
#include "compression/zstd_block_internal.hpp"
#include "compression/zstd_chain_dictionary.hpp"
#include "compression/zstd_row_dedicated.hpp"
#include "compression/zstd_checksum.hpp"

namespace fw::compression {
namespace {

using block_detail::Read;
using reset_detail::MatchResetView;

uint32_t Hash(const uint8_t* source, unsigned bits, unsigned length) {
  if (length < 5 || length > 8) {
    return (Read<uint32_t>(source) * uint32_t(2654435761)) >> (32 - bits);
  }
  constexpr uint64_t multipliers[] = {
    0xcf1bbcdcbb000000ULL, 0xcf1bbcdcbf9b0000ULL,
    0xcf1bbcdcbfa56300ULL, 0xcf1bbcdcb7a56463ULL,
  };
  return (Read<uint64_t>(source) * multipliers[length - 5]) >> (64 - bits);
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

void UpdateWindow(MatchWindow* window, const uint8_t* input, size_t size) {
  if (!size) {
    return;
  }
  if (window->next_source != input) {
    window->low_limit = window->dictionary_limit;
    window->dictionary_limit = uint32_t(
      uintptr_t(window->next_source) - uintptr_t(window->base)
    );
    window->dictionary_base = window->base;
    window->base = reinterpret_cast<const uint8_t*>(
      uintptr_t(input) - window->dictionary_limit
    );
    if (window->dictionary_limit - window->low_limit < 8) {
      window->low_limit = window->dictionary_limit;
    }
  }
  window->next_source = input + size;
  uintptr_t dictionary = uintptr_t(window->dictionary_base);
  if (uintptr_t(input + size) > dictionary + window->low_limit &&
      uintptr_t(input) < dictionary + window->dictionary_limit) {
    size_t limit = uintptr_t(input + size) - dictionary;
    window->low_limit = limit < window->dictionary_limit
      ? unsigned(limit) : window->dictionary_limit;
  }
}

}

void UpdateRowDictionary(MatchState* state, const uint8_t* end) {
  auto& view = *reinterpret_cast<MatchResetView*>(state);
  unsigned row_log = state->parameters.search_log;
  row_log = row_log < 4 ? 4 : row_log;
  row_log = row_log > 6 ? 6 : row_log;
  unsigned mask = (1u << row_log) - 1;
  unsigned bits = view.row_hash_log + 8;
  unsigned minimum = state->parameters.minimum_match;
  unsigned target = uint32_t(uintptr_t(end) - uintptr_t(state->window.base));
  for (uint32_t i = view.next_to_update; i < target; ++i) {
    auto* source = state->window.base + i;
    uint32_t hash;
    if (minimum < 5) {
      hash = ((Read<uint32_t>(source) * uint32_t(2654435761)) ^
        uint32_t(view.hash_salt)) >> (32 - bits);
    }
    else {
      uint64_t multiplier = minimum == 5
        ? 0xcf1bbcdcbb000000ULL : 0xcf1bbcdcbf9b0000ULL;
      hash = ((Read<uint64_t>(source) * multiplier) ^ view.hash_salt) >>
        (64 - bits);
    }
    size_t row = size_t(hash >> 8) << row_log;
    uint8_t* tags = view.tags + row;
    unsigned index = (*tags - 1) & mask;
    if (!index) {
      index = mask;
    }
    *tags = uint8_t(index);
    tags[index] = uint8_t(hash);
    state->hash_table[row + index] = i;
  }
  view.next_to_update = target;
}

void FillLongDistanceDictionary(
  LongDistanceState* state, const uint8_t* source, const uint8_t* end,
  const LongDistanceParameters* parameters
) {
  unsigned minimum = parameters->minimum_match;
  unsigned hash_bits = parameters->hash_log - parameters->bucket_log;
  unsigned mask_bits = minimum < 64 ? minimum : 64;
  unsigned rate = parameters->hash_rate_log;
  uint64_t mask = (uint64_t(1) << rate) - 1;
  if (rate && rate <= mask_bits) {
    mask <<= mask_bits - rate;
  }
  RollingHash rolling = {UINT32_MAX, mask};
  const uint8_t* start = source;
  uint32_t hash_mask = (uint32_t(1) << hash_bits) - 1;
  while (source < end) {
    unsigned count = 0;
    size_t consumed = FeedLongDistanceHash(
      &rolling, source, end - source, state->split_indices, &count
    );
    for (unsigned i = 0; i < count; ++i) {
      const uint8_t* split = source + state->split_indices[i];
      if (split < start + minimum) {
        continue;
      }
      split -= minimum;
      uint64_t value = Hash64(split, minimum, 0);
      uint32_t hash = uint32_t(value) & hash_mask;
      unsigned index = state->bucket_offsets[hash];
      auto* bucket = state->hash_table +
        (size_t(hash) << parameters->bucket_log);
      bucket[index] = {uint32_t(split - state->window.base),
        uint32_t(value >> 32)};
      state->bucket_offsets[hash] = uint8_t(
        (index + 1) & ((1u << parameters->bucket_log) - 1)
      );
    }
    source += consumed;
  }
}

uint32_t InsertBinaryTreePosition(
  const MatchState* state, const uint8_t* source, const uint8_t* end,
  uint32_t target, unsigned minimum_match, int external_dictionary
) {
  const auto& parameters = state->parameters;
  uint32_t hash = Hash(source, parameters.hash_log, minimum_match);
  uint32_t mask = (1u << (parameters.chain_log - 1)) - 1;
  uint32_t match_index = state->hash_table[hash];
  const uint8_t* base = state->window.base;
  const uint8_t* dictionary = state->window.dictionary_base;
  uint32_t limit = state->window.dictionary_limit;
  uint32_t current = uint32_t(source - base);
  uint32_t tree_low = current > mask ? current - mask : 0;
  uint32_t* smaller = state->chain_table + 2 * (current & mask);
  uint32_t* larger = smaller + 1;
  uint32_t dummy;
  unsigned distance = 1u << parameters.window_log;
  uint32_t lowest = state->window.low_limit;
  if (!state->loaded_dictionary_end && target - lowest > distance) {
    lowest = target - distance;
  }
  uint32_t match_end = current + 9;
  size_t best = 8;
  size_t common_smaller = 0;
  size_t common_larger = 0;
  unsigned comparisons = 1u << parameters.search_log;
  state->hash_table[hash] = current;
  while (comparisons-- && match_index >= lowest) {
    uint32_t* next = state->chain_table + 2 * (match_index & mask);
    size_t length = common_smaller < common_larger
      ? common_smaller : common_larger;
    const uint8_t* match;
    if (!external_dictionary || match_index + length >= limit) {
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
      best = length;
      if (length > match_end - match_index) {
        match_end = match_index + uint32_t(length);
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
  uint32_t skip = best > 384 ? uint32_t(best - 384) : 0;
  skip = skip < 192 ? skip : 192;
  uint32_t forward = match_end - current - 8;
  return skip > forward ? skip : forward;
}

void UpdateBinaryTree(
  MatchState* state, const uint8_t* target, const uint8_t* end
) {
  auto& view = *reinterpret_cast<MatchResetView*>(state);
  uint32_t limit = uint32_t(target - state->window.base);
  uint32_t index = view.next_to_update;
  while (index < limit) {
    index += InsertBinaryTreePosition(state, state->window.base + index,
      end, limit, state->parameters.minimum_match, 0);
  }
  view.next_to_update = limit;
}

void LoadCompressionDictionaryContent(
  MatchState* state, LongDistanceState* long_distance,
  CompressionWorkspace* workspace, const BlockCompressionParameters* parameters,
  const void* dictionary, size_t dictionary_size,
  HashTableLoad load, HashTablePurpose purpose
) {
  auto* source = static_cast<const uint8_t*>(dictionary);
  const uint8_t* end = source + dictionary_size;
  bool use_long_distance = long_distance &&
    parameters->long_distance.enabled == 1;
  uint32_t maximum = 0xdffffffe;
  if (parameters->match.strategy <= 2 &&
      purpose == HashTablePurpose::Dictionary) {
    maximum = 0xfffffe;
  }
  if (dictionary_size > maximum) {
    source = end - maximum;
    dictionary_size = maximum;
  }
  UpdateWindow(&state->window, source, dictionary_size);
  unsigned force_window = Read<unsigned>(parameters->other_parameters);
  if (use_long_distance) {
    UpdateWindow(&long_distance->window, source, dictionary_size);
    long_distance->loaded_dictionary_end = force_window ? 0 :
      uint32_t(end - long_distance->window.base);
    FillLongDistanceDictionary(long_distance, source, end,
      &parameters->long_distance);
  }
  if (parameters->match.strategy < 8) {
    unsigned log = parameters->match.hash_log > parameters->match.chain_log
      ? parameters->match.hash_log : parameters->match.chain_log;
    maximum = 8u << (log < 28 ? log : 28);
    if (dictionary_size > maximum) {
      source = end - maximum;
      dictionary_size = maximum;
    }
  }
  auto& view = *reinterpret_cast<MatchResetView*>(state);
  view.next_to_update = uint32_t(source - state->window.base);
  state->loaded_dictionary_end = force_window ? 0 :
    uint32_t(end - state->window.base);
  view.force_noncontiguous = Read<unsigned>(
    parameters->other_dictionary_parameters
  );
  if (dictionary_size <= 8) {
    return;
  }
  CorrectMatchIndexOverflow(state,
    reinterpret_cast<CompressionWorkspacePrefix*>(workspace),
    parameters, source, end);
  switch (parameters->match.strategy) {
    case 1:
      FillFastHashTable(state, end, load, purpose);
      break;
    case 2:
      FillDoubleFastHashTable(state, end, load, purpose);
      break;
    case 3:
    case 4:
    case 5:
      if (view.dedicated_dictionary) {
        LoadDedicatedDictionary(state, end - 8);
      }
      else if (parameters->row_match_finder == 1) {
        __builtin_memset(view.tags, 0, size_t(1) << parameters->match.hash_log);
        UpdateRowDictionary(state, end - 8);
      }
      else {
        InsertAndFindChainIndex(state, end - 8);
      }
      break;
    case 6:
    case 7:
    case 8:
    case 9:
      UpdateBinaryTree(state, end - 8, end);
      break;
  }
  view.next_to_update = uint32_t(end - state->window.base);
}

}
