/*
  Adapted from Zstandard under the BSD license.
  Copyright Meta Platforms, Inc. and affiliates. All rights reserved.
  Original license: https://github.com/facebook/zstd/blob/v1.5.6/LICENSE
  Full license text: include/compression/zstd_bit_reader.hpp.
*/

#include "compression/zstd_row.hpp"

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

uint32_t SaltedHash(
  const void* source, unsigned bits, unsigned minimum, uint64_t salt) {
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
    const uint32_t hash = SaltedHash(
      base + index, metadata.row_hash_log + 8, minimum, metadata.hash_salt);
    PrefetchRow(state, hash, row_log);
    metadata.hash_cache[index & 7] = hash;
  }
}

uint32_t NextHash(
  MatchState* state, uint32_t index, unsigned row_log, unsigned minimum) {
  auto& metadata = Metadata(state);
  const uint32_t next = SaltedHash(state->window.base + index + 8,
    metadata.row_hash_log + 8, minimum, metadata.hash_salt);
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
  uint32_t hash;
  if (LazySkipping(state)) {
    hash = SaltedHash(
      source, metadata.row_hash_log + 8, minimum, metadata.hash_salt);
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
  return length;
}

size_t Parse(MatchState* state, SequenceStore* sequences,
  uint32_t repeated_offsets[3], const void* source, size_t source_size,
  unsigned depth) {
  const auto* input = static_cast<const uint8_t*>(source);
  const auto* anchor = input;
  const auto* end = input + source_size;
  const auto* limit = end - 16;
  const auto* base = state->window.base;
  const auto* prefix = base + state->window.dictionary_limit;
  const unsigned requested = state->parameters.minimum_match;
  const unsigned minimum = requested < 4 ? 4 : requested > 6 ? 6 : requested;
  const unsigned search = state->parameters.search_log;
  const unsigned row_log = search < 4 ? 4 : search > 6 ? 6 : search;
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
  FillCache(state, row_log, minimum, NextUpdate(state), limit);
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
        size_t found =
          SearchRow(state, input, end, &candidate, minimum, row_log);
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
    if (LazySkipping(state)) {
      FillCache(state, row_log, minimum, NextUpdate(state), limit);
      LazySkipping(state) = 0;
    }
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

size_t SearchRow4x16(MatchState* state, const uint8_t* source,
  const uint8_t* end, size_t* offset_base) {
  return SearchRow(state, source, end, offset_base, 4, 4);
}

size_t SearchRow4x32(MatchState* state, const uint8_t* source,
  const uint8_t* end, size_t* offset_base) {
  return SearchRow(state, source, end, offset_base, 4, 5);
}

size_t SearchRow4x64(MatchState* state, const uint8_t* source,
  const uint8_t* end, size_t* offset_base) {
  return SearchRow(state, source, end, offset_base, 4, 6);
}

size_t SearchRow5x16(MatchState* state, const uint8_t* source,
  const uint8_t* end, size_t* offset_base) {
  return SearchRow(state, source, end, offset_base, 5, 4);
}

size_t SearchRow5x32(MatchState* state, const uint8_t* source,
  const uint8_t* end, size_t* offset_base) {
  return SearchRow(state, source, end, offset_base, 5, 5);
}

size_t SearchRow5x64(MatchState* state, const uint8_t* source,
  const uint8_t* end, size_t* offset_base) {
  return SearchRow(state, source, end, offset_base, 5, 6);
}

size_t SearchRow6x16(MatchState* state, const uint8_t* source,
  const uint8_t* end, size_t* offset_base) {
  return SearchRow(state, source, end, offset_base, 6, 4);
}

size_t SearchRow6x32(MatchState* state, const uint8_t* source,
  const uint8_t* end, size_t* offset_base) {
  return SearchRow(state, source, end, offset_base, 6, 5);
}

size_t SearchRow6x64(MatchState* state, const uint8_t* source,
  const uint8_t* end, size_t* offset_base) {
  return SearchRow(state, source, end, offset_base, 6, 6);
}

size_t FindGreedyRowMatches(MatchState* state, SequenceStore* sequences,
  uint32_t repeated_offsets[3], const void* source, size_t source_size) {
  return Parse(state, sequences, repeated_offsets, source, source_size, 0);
}

size_t FindLazyRowMatches(MatchState* state, SequenceStore* sequences,
  uint32_t repeated_offsets[3], const void* source, size_t source_size) {
  return Parse(state, sequences, repeated_offsets, source, source_size, 1);
}

size_t FindLazy2RowMatches(MatchState* state, SequenceStore* sequences,
  uint32_t repeated_offsets[3], const void* source, size_t source_size) {
  return Parse(state, sequences, repeated_offsets, source, source_size, 2);
}

}
