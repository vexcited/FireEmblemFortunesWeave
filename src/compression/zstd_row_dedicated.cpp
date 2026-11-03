/*
  Adapted from Zstandard under the BSD license.
  Copyright Meta Platforms, Inc. and affiliates. All rights reserved.
  Original license: https://github.com/facebook/zstd/blob/v1.5.6/LICENSE
  Full license text: include/compression/zstd_bit_reader.hpp.
*/

#include "compression/zstd_row_dedicated.hpp"

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

RowMatchMetadata& Metadata(MatchState* state) {
  return *reinterpret_cast<RowMatchMetadata*>(
    reinterpret_cast<uint8_t*>(state) + 48);
}

uint32_t SaltedHash(const void* source, unsigned bits, unsigned minimum,
                    uint64_t salt) {
  if (minimum == 4) {
    return ((Read<uint32_t>(source) * uint32_t{2654435761}) ^ uint32_t(salt)) >>
           (32 - bits);
  }
  const uint64_t multiplier =
    minimum == 5 ? 0xCF1BBCDCBB000000ULL : 0xCF1BBCDCBF9B0000ULL;
  return ((Read<uint64_t>(source) * multiplier) ^ salt) >> (64 - bits);
}

void PrefetchRow(MatchState* state, uint32_t hash, unsigned row_log) {
  const uint32_t row = (hash >> 8) << row_log;
  __builtin_prefetch(state->hash_table + row, 0, 3);
  if (row_log >= 5) {
    __builtin_prefetch(state->hash_table + row + 16, 0, 3);
  }
  auto* tags = Metadata(state).tag_table + row;
  __builtin_prefetch(tags, 0, 3);
  if (row_log == 6) {
    __builtin_prefetch(tags + 32, 0, 3);
  }
}

uint32_t NextRowPosition(uint8_t* tags, uint32_t mask) {
  uint32_t position = (*tags - 1) & mask;
  if (!position) {
    position = mask;
  }
  *tags = position;
  return position;
}

void FillCache(MatchState* state, unsigned row_log, unsigned minimum,
               uint32_t index, const uint8_t* limit) {
  auto& metadata = Metadata(state);
  const auto* base = state->window.base;
  const uint32_t available =
    base + index > limit ? 0 : limit - (base + index) + 1;
  const uint32_t stop = index + (available < 8 ? available : 8);
  for (; index < stop; ++index) {
    const uint32_t hash = SaltedHash(base + index, metadata.row_hash_log + 8,
                                     minimum, metadata.hash_salt);
    PrefetchRow(state, hash, row_log);
    metadata.hash_cache[index & 7] = hash;
  }
}

uint32_t NextHash(MatchState* state, uint32_t index, unsigned row_log,
                  unsigned minimum) {
  auto& metadata = Metadata(state);
  const uint32_t next =
    SaltedHash(state->window.base + index + 8, metadata.row_hash_log + 8,
               minimum, metadata.hash_salt);
  PrefetchRow(state, next, row_log);
  const uint32_t previous = metadata.hash_cache[index & 7];
  metadata.hash_cache[index & 7] = next;
  return previous;
}

void UpdateRows(MatchState* state, uint32_t start, uint32_t end,
                unsigned minimum, unsigned row_log, uint32_t mask) {
  auto& metadata = Metadata(state);
  for (; start < end; ++start) {
    const uint32_t hash = NextHash(state, start, row_log, minimum);
    const uint32_t row = (hash >> 8) << row_log;
    auto* tags = metadata.tag_table + row;
    const uint32_t position = NextRowPosition(tags, mask);
    tags[position] = hash;
    state->hash_table[row + position] = start;
  }
}

size_t SearchRow(MatchState* state, const uint8_t* source, const uint8_t* end,
                 size_t* offset_base, unsigned minimum, unsigned row_log) {
  auto& metadata = Metadata(state);
  const auto* base = state->window.base;
  const uint32_t current = source - base;
  const uint32_t distance = uint32_t{1} << state->parameters.window_log;
  const uint32_t lowest = state->window.low_limit;
  const uint32_t low_limit =
    !state->loaded_dictionary_end && current - lowest > distance
      ? current - distance
      : lowest;
  const uint32_t entries = uint32_t{1} << row_log;
  const uint32_t mask = entries - 1;
  const unsigned search_log = state->parameters.search_log;
  uint32_t attempts = uint32_t{1}
                      << (search_log < row_log ? search_log : row_log);
  const auto* dictionary = state->dictionary;
  const uint32_t bucket_index =
    SaltedHash(source, dictionary->parameters.hash_log - 2, minimum, 0) << 2;
  __builtin_prefetch(dictionary->hash_table + bucket_index, 0, 3);
  const uint32_t extra_attempts =
    search_log > row_log ? uint32_t{1} << (search_log - row_log) : 0;
  uint32_t hash;
  if (LazySkipping(state)) {
    hash = SaltedHash(source, metadata.row_hash_log + 8, minimum,
                      metadata.hash_salt);
    NextUpdate(state) = current;
  }
  else {
    uint32_t index = NextUpdate(state);
    if (current - index > 384) {
      UpdateRows(state, index, index + 96, minimum, row_log, mask);
      index = current - 32;
      FillCache(state, row_log, minimum, index, source + 1);
    }
    UpdateRows(state, index, current, minimum, row_log, mask);
    NextUpdate(state) = current;
    hash = NextHash(state, current, row_log, minimum);
  }
  metadata.hash_salt_entropy += hash;
  const uint32_t row_index = (hash >> 8) << row_log;
  const uint8_t tag = hash;
  auto* row = state->hash_table + row_index;
  auto* tags = metadata.tag_table + row_index;
  const uint32_t head = *tags & mask;
  uint32_t candidates[64];
  unsigned count = 0;
  for (uint32_t offset = 0; offset < entries && attempts; ++offset) {
    const uint32_t position = (head + offset) & mask;
    if (tags[position] != tag || !position) {
      continue;
    }
    const uint32_t index = row[position];
    if (index < low_limit) {
      break;
    }
    __builtin_prefetch(base + index, 0, 3);
    candidates[count++] = index;
    --attempts;
  }
  const uint32_t position = NextRowPosition(tags, mask);
  tags[position] = tag;
  row[position] = NextUpdate(state)++;
  size_t length = 3;
  for (unsigned i = 0; i < count; ++i) {
    const uint32_t index = candidates[i];
    const auto* match = base + index;
    size_t found = 0;
    if (Read<uint32_t>(match + length - 3) ==
        Read<uint32_t>(source + length - 3)) {
      found = CountMatch(source, match, end);
    }
    if (found > length) {
      length = found;
      *offset_base = current - index + 3;
      if (source + found == end) {
        break;
      }
    }
  }
  const auto* dictionary_base = dictionary->window.base;
  const auto* dictionary_end = dictionary->window.next_source;
  const uint32_t dictionary_size = dictionary_end - dictionary_base;
  const uint32_t delta = state->window.dictionary_limit - dictionary_size;
  const auto* prefix = base + state->window.dictionary_limit;
  const auto* bucket = dictionary->hash_table + bucket_index;
  attempts += extra_attempts;
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

size_t RepeatedMatch(MatchState* state, const uint8_t* input,
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

size_t Parse(MatchState* state, SequenceStore* sequences,
             uint32_t repeated_offsets[3], const void* source,
             size_t source_size, unsigned depth) {
  const auto* input = static_cast<const uint8_t*>(source);
  const auto* anchor = input;
  const auto* end = input + source_size;
  const auto* limit = end - 16;
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
  const unsigned search = state->parameters.search_log;
  const unsigned row_log = search < 4 ? 4 : search > 6 ? 6 : search;
  uint32_t first = repeated_offsets[0];
  uint32_t second = repeated_offsets[1];
  input +=
    uint32_t((input - prefix) + (dictionary_end - dictionary_lowest)) == 0;
  LazySkipping(state) = 0;
  FillCache(state, row_log, minimum, NextUpdate(state), limit);
  while (input < limit) {
    size_t length = RepeatedMatch(state, input + 1, end, first);
    size_t offset = 1;
    const auto* start = input + 1;
    if (!length || depth) {
      size_t candidate = 999999999;
      const size_t found =
        SearchRow(state, input, end, &candidate, minimum, row_log);
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
        size_t found = RepeatedMatch(state, input, end, first);
        int gain = int(length * 3 - HighBit(uint32_t(offset)) + 1);
        if (found >= 4 && int(found * 3) > gain) {
          length = found;
          offset = 1;
          start = input;
        }
        size_t candidate = 999999999;
        found = SearchRow(state, input, end, &candidate, minimum, row_log);
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
          found = RepeatedMatch(state, input, end, first);
          gain = int(length * 4 - HighBit(uint32_t(offset)) + 1);
          if (found >= 4 && int(found * 4) > gain) {
            length = found;
            offset = 1;
            start = input;
          }
          candidate = 999999999;
          found = SearchRow(state, input, end, &candidate, minimum, row_log);
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
      FillCache(state, row_log, minimum, NextUpdate(state), limit);
      LazySkipping(state) = 0;
    }
    while (input <= limit) {
      length = RepeatedMatch(state, input, end, second);
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

void LoadDedicatedDictionary(MatchState* state, const uint8_t* end) {
  const auto* base = state->window.base;
  const uint32_t target = end - base;
  const uint32_t start = NextUpdate(state);
  const uint32_t chain_size = uint32_t{1} << state->parameters.chain_log;
  const uint32_t minimum_chain =
    chain_size < target - start ? target - chain_size : start;
  const uint32_t attempts = (uint32_t{1} << state->parameters.search_log) - 3;
  const uint32_t chain_limit = attempts > 255 ? 255 : attempts;
  const unsigned hash_log = state->parameters.hash_log - 2;
  const uint32_t buckets = uint32_t{1} << hash_log;
  auto* hashes = state->hash_table;
  auto* temporary_chain = hashes + buckets;
  const uint32_t temporary_size = 3 * buckets;
  const uint32_t temporary_minimum =
    temporary_size < target ? target - temporary_size : start;
  const unsigned minimum = state->parameters.minimum_match;
  for (uint32_t index = start; index < target; ++index) {
    const uint32_t hash = Hash(base + index, hash_log, minimum);
    if (index >= temporary_minimum) {
      temporary_chain[index - temporary_minimum] = hashes[hash];
    }
    hashes[hash] = index;
  }
  uint32_t chain_position = 0;
  for (uint32_t hash = 0; hash < buckets; ++hash) {
    uint32_t count = 0;
    uint32_t older = 0;
    uint32_t index = hashes[hash];
    while (index >= temporary_minimum && count < 3) {
      older += index < minimum_chain;
      index = temporary_chain[index - temporary_minimum];
      ++count;
    }
    if (count == 3) {
      count = 0;
      while (count < chain_limit) {
        if (index < minimum_chain && (!index || ++older > 3)) {
          break;
        }
        state->chain_table[chain_position++] = index;
        ++count;
        if (index < temporary_minimum) {
          break;
        }
        index = temporary_chain[index - temporary_minimum];
      }
    }
    else {
      count = 0;
    }
    hashes[hash] = count ? ((chain_position - count) << 8) + count : 0;
  }
  for (uint32_t hash = buckets; hash;) {
    --hash;
    const uint32_t packed_chain = hashes[hash];
    hashes[hash * 4] = 0;
    hashes[hash * 4 + 1] = 0;
    hashes[hash * 4 + 2] = 0;
    hashes[hash * 4 + 3] = packed_chain;
  }
  for (uint32_t index = start; index < target; ++index) {
    const uint32_t bucket = Hash(base + index, hash_log, minimum) << 2;
    hashes[bucket + 2] = hashes[bucket + 1];
    hashes[bucket + 1] = hashes[bucket];
    hashes[bucket] = index;
  }
  NextUpdate(state) = target;
}

size_t SearchDedicatedRow4x16(MatchState* state, const uint8_t* source,
                              const uint8_t* end, size_t* offset_base) {
  return SearchRow(state, source, end, offset_base, 4, 4);
}

size_t SearchDedicatedRow4x32(MatchState* state, const uint8_t* source,
                              const uint8_t* end, size_t* offset_base) {
  return SearchRow(state, source, end, offset_base, 4, 5);
}

size_t SearchDedicatedRow4x64(MatchState* state, const uint8_t* source,
                              const uint8_t* end, size_t* offset_base) {
  return SearchRow(state, source, end, offset_base, 4, 6);
}

size_t SearchDedicatedRow5x16(MatchState* state, const uint8_t* source,
                              const uint8_t* end, size_t* offset_base) {
  return SearchRow(state, source, end, offset_base, 5, 4);
}

size_t SearchDedicatedRow5x32(MatchState* state, const uint8_t* source,
                              const uint8_t* end, size_t* offset_base) {
  return SearchRow(state, source, end, offset_base, 5, 5);
}

size_t SearchDedicatedRow5x64(MatchState* state, const uint8_t* source,
                              const uint8_t* end, size_t* offset_base) {
  return SearchRow(state, source, end, offset_base, 5, 6);
}

size_t SearchDedicatedRow6x16(MatchState* state, const uint8_t* source,
                              const uint8_t* end, size_t* offset_base) {
  return SearchRow(state, source, end, offset_base, 6, 4);
}

size_t SearchDedicatedRow6x32(MatchState* state, const uint8_t* source,
                              const uint8_t* end, size_t* offset_base) {
  return SearchRow(state, source, end, offset_base, 6, 5);
}

size_t SearchDedicatedRow6x64(MatchState* state, const uint8_t* source,
                              const uint8_t* end, size_t* offset_base) {
  return SearchRow(state, source, end, offset_base, 6, 6);
}

size_t FindGreedyDedicatedRowMatches(MatchState* state,
                                     SequenceStore* sequences,
                                     uint32_t repeated_offsets[3],
                                     const void* source, size_t source_size) {
  return Parse(state, sequences, repeated_offsets, source, source_size, 0);
}

size_t FindLazyDedicatedRowMatches(MatchState* state, SequenceStore* sequences,
                                   uint32_t repeated_offsets[3],
                                   const void* source, size_t source_size) {
  return Parse(state, sequences, repeated_offsets, source, source_size, 1);
}

size_t FindLazy2DedicatedRowMatches(MatchState* state, SequenceStore* sequences,
                                    uint32_t repeated_offsets[3],
                                    const void* source, size_t source_size) {
  return Parse(state, sequences, repeated_offsets, source, source_size, 2);
}

}
