/*
  Adapted from Zstandard under the BSD license.
  Copyright Meta Platforms, Inc. and affiliates. All rights reserved.
  Original license: https://github.com/facebook/zstd/blob/v1.5.6/LICENSE
  Full license text: include/compression/zstd_bit_reader.hpp.
*/

#include "compression/zstd_chain_dictionary.hpp"

namespace fw::compression {
namespace {

template <typename T> T Read(const void* source) {
  T value;
  __builtin_memcpy(&value, source, sizeof(value));
  return value;
}

size_t Hash(const void* source, unsigned bits, unsigned length) {
  if (length < 5 || length > 8) {
    return (Read<uint32_t>(source) * uint32_t{2654435761}) >> (32 - bits);
  }

  uint64_t value = Read<uint64_t>(source);

  switch (length) {
    case 5:
      value *= 0xCF1BBCDCBB000000ULL;
      break;
    case 6:
      value *= 0xCF1BBCDCBF9B0000ULL;
      break;
    case 7:
      value *= 0xCF1BBCDCBFA56300ULL;
      break;
    default:
      value *= 0xCF1BBCDCB7A56463ULL;
      break;
  }

  return value >> (64 - bits);
}

size_t CountMatch(const uint8_t* input, const uint8_t* match,
                  const uint8_t* end) {
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

uint32_t& NextUpdate(MatchState* state) {
  return *reinterpret_cast<uint32_t*>(reinterpret_cast<uint8_t*>(state) + 44);
}

uint32_t& LazySkipping(MatchState* state) {
  return *reinterpret_cast<uint32_t*>(reinterpret_cast<uint8_t*>(state) + 300);
}

unsigned HighBit(uint32_t value) {
  return 31 - __builtin_clz(value);
}

enum class DictionaryMode { Prepared, Dedicated, External };

uint32_t InsertChainEntries(MatchState* state, const uint8_t* source,
                            unsigned minimum, bool skipping) {
  const auto* base = state->window.base;
  const uint32_t target = source - base;
  const uint32_t mask = (uint32_t{1} << state->parameters.chain_log) - 1;
  uint32_t index = NextUpdate(state);
  while (index < target) {
    const uint32_t hash =
      Hash(base + index, state->parameters.hash_log, minimum);
    state->chain_table[index & mask] = state->hash_table[hash];
    state->hash_table[hash] = index;
    ++index;
    if (skipping) {
      break;
    }
  }
  NextUpdate(state) = target;
  return state->hash_table[Hash(source, state->parameters.hash_log, minimum)];
}

size_t SearchDedicatedDictionary(MatchState* state, const uint8_t* source,
                                 const uint8_t* end, size_t* offset_base,
                                 size_t length, uint32_t attempts,
                                 uint32_t bucket_index) {
  const auto* dictionary = state->dictionary;
  const auto* base = state->window.base;
  const uint32_t current = source - base;
  const auto* dictionary_base = dictionary->window.base;
  const auto* dictionary_end = dictionary->window.next_source;
  const uint32_t dictionary_size = dictionary_end - dictionary_base;
  const uint32_t delta = state->window.dictionary_limit - dictionary_size;
  const auto* prefix = base + state->window.dictionary_limit;
  const auto* bucket = dictionary->hash_table + bucket_index;
  const uint32_t bucket_limit = attempts < 3 ? attempts : 3;
  for (uint32_t i = 0; i < 3; ++i) {
    __builtin_prefetch(dictionary_base + bucket[i], 0, 3);
  }
  __builtin_prefetch(dictionary->chain_table + (bucket[3] >> 8), 0, 3);
  for (uint32_t i = 0; i < bucket_limit; ++i) {
    const uint32_t index = bucket[i];
    if (!index) {
      return length;
    }
    const auto* match = dictionary_base + index;
    size_t found = 0;
    if (Read<uint32_t>(match) == Read<uint32_t>(source)) {
      found = CountDictionaryMatch(source + 4, match + 4, end, dictionary_end,
                                   prefix) +
              4;
    }
    if (found > length) {
      length = found;
      *offset_base = current - (index + delta) + 3;
      if (source + found == end) {
        return length;
      }
    }
  }
  const uint32_t packed_chain = bucket[3];
  const uint32_t chain_index = packed_chain >> 8;
  const uint32_t chain_length = packed_chain & 255;
  const uint32_t remaining = attempts - bucket_limit;
  const uint32_t chain_limit =
    remaining > chain_length ? chain_length : remaining;
  const auto* chain = dictionary->chain_table + chain_index;
  for (uint32_t i = 0; i < chain_limit; ++i) {
    __builtin_prefetch(dictionary_base + chain[i], 0, 3);
  }
  for (uint32_t i = 0; i < chain_limit; ++i) {
    const uint32_t index = chain[i];
    const auto* match = dictionary_base + index;
    size_t found = 0;
    if (Read<uint32_t>(match) == Read<uint32_t>(source)) {
      found = CountDictionaryMatch(source + 4, match + 4, end, dictionary_end,
                                   prefix) +
              4;
    }
    if (found > length) {
      length = found;
      *offset_base = current - (index + delta) + 3;
      if (source + found == end) {
        break;
      }
    }
  }
  return length;
}

template <DictionaryMode Mode>
size_t SearchChain(MatchState* state, const uint8_t* source, const uint8_t* end,
                   size_t* offset_base, unsigned minimum) {
  const auto* base = state->window.base;
  const uint32_t current = source - base;
  const auto& parameters = state->parameters;
  const uint32_t chain_size = uint32_t{1} << parameters.chain_log;
  const uint32_t chain_mask = chain_size - 1;
  const uint32_t chain_limit = current > chain_size ? current - chain_size : 0;
  const uint32_t distance = uint32_t{1} << parameters.window_log;
  const uint32_t lowest = state->window.low_limit;
  const uint32_t low_limit =
    !state->loaded_dictionary_end && current - lowest > distance
      ? current - distance
      : lowest;
  uint32_t attempts = uint32_t{1} << parameters.search_log;
  uint32_t bucket_index = 0;
  if constexpr (Mode == DictionaryMode::Dedicated) {
    bucket_index =
      Hash(source, state->dictionary->parameters.hash_log - 2, minimum) << 2;
    __builtin_prefetch(state->dictionary->hash_table + bucket_index, 0, 3);
  }
  uint32_t index =
    InsertChainEntries(state, source, minimum, LazySkipping(state) != 0);
  size_t length = 3;
  for (; index >= low_limit && attempts; --attempts) {
    size_t found = 0;
    if (Mode == DictionaryMode::External &&
        index < state->window.dictionary_limit) {
      const auto* match = state->window.dictionary_base + index;
      if (Read<uint32_t>(match) == Read<uint32_t>(source)) {
        found = CountDictionaryMatch(source + 4, match + 4, end,
                                     state->window.dictionary_base +
                                       state->window.dictionary_limit,
                                     base + state->window.dictionary_limit) +
                4;
      }
    }
    else {
      const auto* match = base + index;
      if (Read<uint32_t>(match + length - 3) ==
          Read<uint32_t>(source + length - 3)) {
        found = CountMatch(source, match, end);
      }
    }
    if (found > length) {
      length = found;
      *offset_base = current - index + 3;
      if (source + found == end) {
        break;
      }
    }
    if (index <= chain_limit) {
      break;
    }
    index = state->chain_table[index & chain_mask];
  }
  if constexpr (Mode == DictionaryMode::Dedicated) {
    return SearchDedicatedDictionary(state, source, end, offset_base, length,
                                     attempts, bucket_index);
  }
  if constexpr (Mode == DictionaryMode::Prepared) {
    const auto* dictionary = state->dictionary;
    const auto* dictionary_base = dictionary->window.base;
    const auto* dictionary_end = dictionary->window.next_source;
    const uint32_t dictionary_size = dictionary_end - dictionary_base;
    const uint32_t dictionary_chain_size = uint32_t{1}
                                           << dictionary->parameters.chain_log;
    const uint32_t dictionary_mask = dictionary_chain_size - 1;
    const uint32_t dictionary_chain_limit =
      dictionary_size > dictionary_chain_size
        ? dictionary_size - dictionary_chain_size
        : 0;
    const uint32_t delta = state->window.dictionary_limit - dictionary_size;
    const auto* prefix = base + state->window.dictionary_limit;
    index =
      dictionary
        ->hash_table[Hash(source, dictionary->parameters.hash_log, minimum)];
    for (; index >= dictionary->window.dictionary_limit && attempts;
         --attempts) {
      const auto* match = dictionary_base + index;
      size_t found = 0;
      if (Read<uint32_t>(match) == Read<uint32_t>(source)) {
        found = CountDictionaryMatch(source + 4, match + 4, end, dictionary_end,
                                     prefix) +
                4;
      }
      if (found > length) {
        length = found;
        *offset_base = current - (index + delta) + 3;
        if (source + found == end) {
          break;
        }
      }
      if (index <= dictionary_chain_limit) {
        break;
      }
      index = dictionary->chain_table[index & dictionary_mask];
    }
  }
  return length;
}

size_t RepeatedAttachedMatch(MatchState* state, const uint8_t* input,
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
  return CountDictionaryMatch(input + 4, match + 4, end, match_end,
                              base + prefix_index) +
         4;
}

template <DictionaryMode Mode>
size_t ParseAttached(MatchState* state, SequenceStore* sequences,
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
    size_t length = RepeatedAttachedMatch(state, input + 1, end, first);
    size_t offset = 1;
    const auto* start = input + 1;
    if (!length || depth) {
      size_t candidate = 999999999;
      const size_t found =
        SearchChain<Mode>(state, input, end, &candidate, minimum);
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
        size_t found = RepeatedAttachedMatch(state, input, end, first);
        int gain = int(length * 3 - HighBit(uint32_t(offset)) + 1);
        if (found >= 4 && int(found * 3) > gain) {
          length = found;
          offset = 1;
          start = input;
        }
        size_t candidate = 999999999;
        found = SearchChain<Mode>(state, input, end, &candidate, minimum);
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
          found = RepeatedAttachedMatch(state, input, end, first);
          gain = int(length * 4 - HighBit(uint32_t(offset)) + 1);
          if (found >= 4 && int(found * 4) > gain) {
            length = found;
            offset = 1;
            start = input;
          }
          candidate = 999999999;
          found = SearchChain<Mode>(state, input, end, &candidate, minimum);
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
      length = RepeatedAttachedMatch(state, input, end, second);
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
  return CountDictionaryMatch(input + 4, match + 4, end, match_end,
                              base + prefix_index) +
         4;
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
      const size_t found = SearchChain<DictionaryMode::External>(
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
        found = SearchChain<DictionaryMode::External>(state, input, end,
                                                      &candidate, minimum);
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
          found = SearchChain<DictionaryMode::External>(state, input, end,
                                                        &candidate, minimum);
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

uint32_t InsertAndFindChainIndex(MatchState* state, const uint8_t* source) {
  return InsertChainEntries(state, source, state->parameters.minimum_match,
                            false);
}

size_t SearchPreparedChain4(MatchState* state, const uint8_t* source,
                            const uint8_t* end, size_t* offset_base) {
  return SearchChain<DictionaryMode::Prepared>(state, source, end, offset_base,
                                               4);
}

size_t SearchPreparedChain5(MatchState* state, const uint8_t* source,
                            const uint8_t* end, size_t* offset_base) {
  return SearchChain<DictionaryMode::Prepared>(state, source, end, offset_base,
                                               5);
}

size_t SearchPreparedChain6(MatchState* state, const uint8_t* source,
                            const uint8_t* end, size_t* offset_base) {
  return SearchChain<DictionaryMode::Prepared>(state, source, end, offset_base,
                                               6);
}

size_t FindGreedyPreparedChainMatches(MatchState* state,
                                      SequenceStore* sequences,
                                      uint32_t repeated_offsets[3],
                                      const void* source, size_t source_size) {
  return ParseAttached<DictionaryMode::Prepared>(
    state, sequences, repeated_offsets, source, source_size, 0);
}

size_t FindLazyPreparedChainMatches(MatchState* state, SequenceStore* sequences,
                                    uint32_t repeated_offsets[3],
                                    const void* source, size_t source_size) {
  return ParseAttached<DictionaryMode::Prepared>(
    state, sequences, repeated_offsets, source, source_size, 1);
}

size_t FindLazy2PreparedChainMatches(MatchState* state,
                                     SequenceStore* sequences,
                                     uint32_t repeated_offsets[3],
                                     const void* source, size_t source_size) {
  return ParseAttached<DictionaryMode::Prepared>(
    state, sequences, repeated_offsets, source, source_size, 2);
}

size_t SearchDedicatedChain4(MatchState* state, const uint8_t* source,
                             const uint8_t* end, size_t* offset_base) {
  return SearchChain<DictionaryMode::Dedicated>(state, source, end, offset_base,
                                                4);
}

size_t SearchDedicatedChain5(MatchState* state, const uint8_t* source,
                             const uint8_t* end, size_t* offset_base) {
  return SearchChain<DictionaryMode::Dedicated>(state, source, end, offset_base,
                                                5);
}

size_t SearchDedicatedChain6(MatchState* state, const uint8_t* source,
                             const uint8_t* end, size_t* offset_base) {
  return SearchChain<DictionaryMode::Dedicated>(state, source, end, offset_base,
                                                6);
}

size_t FindGreedyDedicatedChainMatches(MatchState* state,
                                       SequenceStore* sequences,
                                       uint32_t repeated_offsets[3],
                                       const void* source, size_t source_size) {
  return ParseAttached<DictionaryMode::Dedicated>(
    state, sequences, repeated_offsets, source, source_size, 0);
}

size_t FindLazyDedicatedChainMatches(MatchState* state,
                                     SequenceStore* sequences,
                                     uint32_t repeated_offsets[3],
                                     const void* source, size_t source_size) {
  return ParseAttached<DictionaryMode::Dedicated>(
    state, sequences, repeated_offsets, source, source_size, 1);
}

size_t FindLazy2DedicatedChainMatches(MatchState* state,
                                      SequenceStore* sequences,
                                      uint32_t repeated_offsets[3],
                                      const void* source, size_t source_size) {
  return ParseAttached<DictionaryMode::Dedicated>(
    state, sequences, repeated_offsets, source, source_size, 2);
}

size_t SearchExternalChain4(MatchState* state, const uint8_t* source,
                            const uint8_t* end, size_t* offset_base) {
  return SearchChain<DictionaryMode::External>(state, source, end, offset_base,
                                               4);
}

size_t SearchExternalChain5(MatchState* state, const uint8_t* source,
                            const uint8_t* end, size_t* offset_base) {
  return SearchChain<DictionaryMode::External>(state, source, end, offset_base,
                                               5);
}

size_t SearchExternalChain6(MatchState* state, const uint8_t* source,
                            const uint8_t* end, size_t* offset_base) {
  return SearchChain<DictionaryMode::External>(state, source, end, offset_base,
                                               6);
}

size_t FindGreedyExternalChainMatches(MatchState* state,
                                      SequenceStore* sequences,
                                      uint32_t repeated_offsets[3],
                                      const void* source, size_t source_size) {
  return ParseExternal(state, sequences, repeated_offsets, source, source_size,
                       0);
}

size_t FindLazyExternalChainMatches(MatchState* state, SequenceStore* sequences,
                                    uint32_t repeated_offsets[3],
                                    const void* source, size_t source_size) {
  return ParseExternal(state, sequences, repeated_offsets, source, source_size,
                       1);
}

size_t FindLazy2ExternalChainMatches(MatchState* state,
                                     SequenceStore* sequences,
                                     uint32_t repeated_offsets[3],
                                     const void* source, size_t source_size) {
  return ParseExternal(state, sequences, repeated_offsets, source, source_size,
                       2);
}

}
