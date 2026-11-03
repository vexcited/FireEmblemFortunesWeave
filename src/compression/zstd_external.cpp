/*
  Adapted from Zstandard under the BSD license.
  Copyright Meta Platforms, Inc. and affiliates. All rights reserved.
  Original license: https://github.com/facebook/zstd/blob/v1.5.6/LICENSE
  Full license text: include/compression/zstd_bit_reader.hpp.
*/

#include "compression/zstd_external.hpp"

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

void Prefetch(const void* address) {
  __builtin_prefetch(address, 0, 3);
}

unsigned MinimumMatch(const MatchState* state) {
  const unsigned length = state->parameters.minimum_match;
  return length >= 5 && length <= 7 ? length : 4;
}

uint32_t LowestMatch(const MatchState* state, uint32_t current,
                     unsigned window_log) {
  const uint32_t distance = uint32_t{1} << window_log;
  const uint32_t lowest = state->window.low_limit;
  return !state->loaded_dictionary_end && current - lowest > distance
           ? current - distance
           : lowest;
}

uint32_t NextUpdateIndex(const MatchState* state) {
  return Read<uint32_t>(reinterpret_cast<const uint8_t*>(state) + 44);
}

void WriteTaggedIndex(uint32_t* table, size_t hash, uint32_t index) {
  table[hash >> 8] = (index << 8) | (hash & 255);
}

__attribute__((noinline)) size_t
DoubleFastExternal(MatchState* ms, SequenceStore* seqStore, uint32_t rep[3],
                   void const* src, size_t srcSize, uint32_t const mls) {
  MatchParameters const* parameters = &ms->parameters;
  uint32_t* const hashLong = ms->hash_table;
  uint32_t const hBitsL = parameters->hash_log;
  uint32_t* const hashSmall = ms->chain_table;
  uint32_t const hBitsS = parameters->chain_log;
  const uint8_t* const istart = (const uint8_t*)src;
  const uint8_t* ip = istart;
  const uint8_t* anchor = istart;
  const uint8_t* const iend = istart + srcSize;
  const uint8_t* const ilimit = iend - 8;
  const uint8_t* const base = ms->window.base;
  const uint32_t endIndex = (uint32_t)((size_t)(istart - base) + srcSize);
  const uint32_t lowLimit = LowestMatch(ms, endIndex, parameters->window_log);
  const uint32_t dictStartIndex = lowLimit;
  const uint32_t dictionary_limit = ms->window.dictionary_limit;
  const uint32_t prefixStartIndex =
    (dictionary_limit > lowLimit) ? dictionary_limit : lowLimit;
  const uint8_t* const prefixStart = base + prefixStartIndex;
  const uint8_t* const dictBase = ms->window.dictionary_base;
  const uint8_t* const dictStart = dictBase + dictStartIndex;
  const uint8_t* const dictEnd = dictBase + prefixStartIndex;
  uint32_t offset_1 = rep[0], offset_2 = rep[1];

  if (prefixStartIndex == dictStartIndex) {
    return FindDoubleFastMatches(ms, seqStore, rep, src, srcSize);
  }

  while (ip < ilimit) {
    const size_t hSmall = Hash(ip, hBitsS, mls);
    const uint32_t matchIndex = hashSmall[hSmall];
    const uint8_t* const matchBase =
      matchIndex < prefixStartIndex ? dictBase : base;
    const uint8_t* match = matchBase + matchIndex;

    const size_t hLong = Hash(ip, hBitsL, 8);
    const uint32_t matchLongIndex = hashLong[hLong];
    const uint8_t* const matchLongBase =
      matchLongIndex < prefixStartIndex ? dictBase : base;
    const uint8_t* matchLong = matchLongBase + matchLongIndex;

    const uint32_t curr = (uint32_t)(ip - base);
    const uint32_t repIndex = curr + 1 - offset_1;
    const uint8_t* const repBase =
      repIndex < prefixStartIndex ? dictBase : base;
    const uint8_t* const repMatch = repBase + repIndex;
    size_t mLength;
    hashSmall[hSmall] = hashLong[hLong] = curr;

    if ((((uint32_t)((prefixStartIndex - 1) - repIndex) >= 3) &
         (offset_1 <= curr + 1 - dictStartIndex)) &&
        (Read<uint32_t>(repMatch) == Read<uint32_t>(ip + 1))) {
      const uint8_t* repMatchEnd = repIndex < prefixStartIndex ? dictEnd : iend;
      mLength = CountDictionaryMatch(ip + 1 + 4, repMatch + 4, iend,
                                     repMatchEnd, prefixStart) +
                4;
      ip++;
      StoreSequence(seqStore, (size_t)(ip - anchor), anchor, iend, 1, mLength);
    }
    else {
      if ((matchLongIndex > dictStartIndex) &&
          (Read<uint64_t>(matchLong) == Read<uint64_t>(ip))) {
        const uint8_t* const matchEnd =
          matchLongIndex < prefixStartIndex ? dictEnd : iend;
        const uint8_t* const lowMatchPtr =
          matchLongIndex < prefixStartIndex ? dictStart : prefixStart;
        uint32_t offset;
        mLength = CountDictionaryMatch(ip + 8, matchLong + 8, iend, matchEnd,
                                       prefixStart) +
                  8;
        offset = curr - matchLongIndex;
        while (((ip > anchor) & (matchLong > lowMatchPtr)) &&
               (ip[-1] == matchLong[-1])) {
          ip--;
          matchLong--;
          mLength++;
        }
        offset_2 = offset_1;
        offset_1 = offset;
        StoreSequence(seqStore, (size_t)(ip - anchor), anchor, iend,
                      (offset + 3), mLength);
      }
      else if ((matchIndex > dictStartIndex) &&
               (Read<uint32_t>(match) == Read<uint32_t>(ip))) {
        size_t const h3 = Hash(ip + 1, hBitsL, 8);
        uint32_t const matchIndex3 = hashLong[h3];
        const uint8_t* const match3Base =
          matchIndex3 < prefixStartIndex ? dictBase : base;
        const uint8_t* match3 = match3Base + matchIndex3;
        uint32_t offset;
        hashLong[h3] = curr + 1;
        if ((matchIndex3 > dictStartIndex) &&
            (Read<uint64_t>(match3) == Read<uint64_t>(ip + 1))) {
          const uint8_t* const matchEnd =
            matchIndex3 < prefixStartIndex ? dictEnd : iend;
          const uint8_t* const lowMatchPtr =
            matchIndex3 < prefixStartIndex ? dictStart : prefixStart;
          mLength = CountDictionaryMatch(ip + 9, match3 + 8, iend, matchEnd,
                                         prefixStart) +
                    8;
          ip++;
          offset = curr + 1 - matchIndex3;
          while (((ip > anchor) & (match3 > lowMatchPtr)) &&
                 (ip[-1] == match3[-1])) {
            ip--;
            match3--;
            mLength++;
          }
        }
        else {
          const uint8_t* const matchEnd =
            matchIndex < prefixStartIndex ? dictEnd : iend;
          const uint8_t* const lowMatchPtr =
            matchIndex < prefixStartIndex ? dictStart : prefixStart;
          mLength = CountDictionaryMatch(ip + 4, match + 4, iend, matchEnd,
                                         prefixStart) +
                    4;
          offset = curr - matchIndex;
          while (((ip > anchor) & (match > lowMatchPtr)) &&
                 (ip[-1] == match[-1])) {
            ip--;
            match--;
            mLength++;
          }
        }
        offset_2 = offset_1;
        offset_1 = offset;
        StoreSequence(seqStore, (size_t)(ip - anchor), anchor, iend,
                      (offset + 3), mLength);
      }
      else {
        ip += ((ip - anchor) >> 8) + 1;
        continue;
      }
    }

    ip += mLength;
    anchor = ip;

    if (ip <= ilimit) {

      {
        uint32_t const indexToInsert = curr + 2;
        hashLong[Hash(base + indexToInsert, hBitsL, 8)] = indexToInsert;
        hashLong[Hash(ip - 2, hBitsL, 8)] = (uint32_t)(ip - 2 - base);
        hashSmall[Hash(base + indexToInsert, hBitsS, mls)] = indexToInsert;
        hashSmall[Hash(ip - 1, hBitsS, mls)] = (uint32_t)(ip - 1 - base);
      }

      while (ip <= ilimit) {
        uint32_t const current2 = (uint32_t)(ip - base);
        uint32_t const repIndex2 = current2 - offset_2;
        const uint8_t* repMatch2 = repIndex2 < prefixStartIndex
                                     ? dictBase + repIndex2
                                     : base + repIndex2;
        if ((((uint32_t)((prefixStartIndex - 1) - repIndex2) >= 3) &
             (offset_2 <= current2 - dictStartIndex)) &&
            (Read<uint32_t>(repMatch2) == Read<uint32_t>(ip))) {
          const uint8_t* const repEnd2 =
            repIndex2 < prefixStartIndex ? dictEnd : iend;
          size_t const repLength2 =
            CountDictionaryMatch(ip + 4, repMatch2 + 4, iend, repEnd2,
                                 prefixStart) +
            4;
          uint32_t const tmpOffset = offset_2;
          offset_2 = offset_1;
          offset_1 = tmpOffset;
          StoreSequence(seqStore, 0, anchor, iend, 1, repLength2);
          hashSmall[Hash(ip, hBitsS, mls)] = current2;
          hashLong[Hash(ip, hBitsL, 8)] = current2;
          ip += repLength2;
          anchor = ip;
          continue;
        }
        break;
      }
    }
  }

  rep[0] = offset_1;
  rep[1] = offset_2;

  return (size_t)(iend - anchor);
}

__attribute__((noinline)) size_t FastExternal(MatchState* ms,
                                              SequenceStore* seqStore,
                                              uint32_t rep[3], void const* src,
                                              size_t srcSize,
                                              uint32_t const mls) {
  const MatchParameters* const parameters = &ms->parameters;
  uint32_t* const hash_table = ms->hash_table;
  uint32_t const hlog = parameters->hash_log;

  size_t const stepSize =
    parameters->target_length + !(parameters->target_length) + 1;
  const uint8_t* const base = ms->window.base;
  const uint8_t* const dictBase = ms->window.dictionary_base;
  const uint8_t* const istart = (const uint8_t*)src;
  const uint8_t* anchor = istart;
  const uint32_t endIndex = (uint32_t)((size_t)(istart - base) + srcSize);
  const uint32_t lowLimit = LowestMatch(ms, endIndex, parameters->window_log);
  const uint32_t dictStartIndex = lowLimit;
  const uint8_t* const dictStart = dictBase + dictStartIndex;
  const uint32_t dictionary_limit = ms->window.dictionary_limit;
  const uint32_t prefixStartIndex =
    dictionary_limit < lowLimit ? lowLimit : dictionary_limit;
  const uint8_t* const prefixStart = base + prefixStartIndex;
  const uint8_t* const dictEnd = dictBase + prefixStartIndex;
  const uint8_t* const iend = istart + srcSize;
  const uint8_t* const ilimit = iend - 8;
  uint32_t offset_1 = rep[0], offset_2 = rep[1];
  uint32_t offsetSaved1 = 0, offsetSaved2 = 0;

  const uint8_t* ip0 = istart;
  const uint8_t* ip1;
  const uint8_t* ip2;
  const uint8_t* ip3;
  uint32_t current0;

  size_t hash0;
  size_t hash1;
  uint32_t idx;
  const uint8_t* idxBase;

  uint32_t offcode;
  const uint8_t* match0;
  size_t mLength;
  const uint8_t* matchEnd = 0;

  size_t step;
  const uint8_t* nextStep;
  const size_t kStepIncr = (1 << (8 - 1));

  if (prefixStartIndex == dictStartIndex) {
    return FindFastMatches(ms, seqStore, rep, src, srcSize);
  }

  {
    uint32_t const curr = (uint32_t)(ip0 - base);
    uint32_t const maxRep = curr - dictStartIndex;
    if (offset_2 >= maxRep) {
      offsetSaved2 = offset_2;
      offset_2 = 0;
    }
    if (offset_1 >= maxRep) {
      offsetSaved1 = offset_1;
      offset_1 = 0;
    }
  }

_start:

  step = stepSize;
  nextStep = ip0 + kStepIncr;

  ip1 = ip0 + 1;
  ip2 = ip0 + step;
  ip3 = ip2 + 1;

  if (ip3 >= ilimit) {
    goto _cleanup;
  }

  hash0 = Hash(ip0, hlog, mls);
  hash1 = Hash(ip1, hlog, mls);

  idx = hash_table[hash0];
  idxBase = idx < prefixStartIndex ? dictBase : base;

  do {
    {
      uint32_t const current2 = (uint32_t)(ip2 - base);
      uint32_t const repIndex = current2 - offset_1;
      const uint8_t* const repBase =
        repIndex < prefixStartIndex ? dictBase : base;
      uint32_t rval;
      if (((uint32_t)(prefixStartIndex - repIndex) >= 4) & (offset_1 > 0)) {
        rval = Read<uint32_t>(repBase + repIndex);
      }
      else {
        rval = Read<uint32_t>(ip2) ^ 1;
      }

      current0 = (uint32_t)(ip0 - base);
      hash_table[hash0] = current0;

      if (Read<uint32_t>(ip2) == rval) {
        ip0 = ip2;
        match0 = repBase + repIndex;
        matchEnd = repIndex < prefixStartIndex ? dictEnd : iend;

        mLength = ip0[-1] == match0[-1];
        ip0 -= mLength;
        match0 -= mLength;
        offcode = 1;
        mLength += 4;
        goto _match;
      }
    }

    {
      uint32_t const mval = idx >= dictStartIndex
                              ? Read<uint32_t>(idxBase + idx)
                              : Read<uint32_t>(ip0) ^ 1;

      if (Read<uint32_t>(ip0) == mval) {

        goto _offset;
      }
    }

    idx = hash_table[hash1];
    idxBase = idx < prefixStartIndex ? dictBase : base;

    hash0 = hash1;
    hash1 = Hash(ip2, hlog, mls);

    ip0 = ip1;
    ip1 = ip2;
    ip2 = ip3;

    current0 = (uint32_t)(ip0 - base);
    hash_table[hash0] = current0;

    {
      uint32_t const mval = idx >= dictStartIndex
                              ? Read<uint32_t>(idxBase + idx)
                              : Read<uint32_t>(ip0) ^ 1;

      if (Read<uint32_t>(ip0) == mval) {

        goto _offset;
      }
    }

    idx = hash_table[hash1];
    idxBase = idx < prefixStartIndex ? dictBase : base;

    hash0 = hash1;
    hash1 = Hash(ip2, hlog, mls);

    ip0 = ip1;
    ip1 = ip2;
    ip2 = ip0 + step;
    ip3 = ip1 + step;

    if (ip2 >= nextStep) {
      step++;
      Prefetch(ip1 + 64);
      Prefetch(ip1 + 128);
      nextStep += kStepIncr;
    }
  } while (ip3 < ilimit);

_cleanup:

  offsetSaved2 =
    ((offsetSaved1 != 0) && (offset_1 != 0)) ? offsetSaved1 : offsetSaved2;

  rep[0] = offset_1 ? offset_1 : offsetSaved1;
  rep[1] = offset_2 ? offset_2 : offsetSaved2;

  return (size_t)(iend - anchor);

_offset:

  {
    uint32_t const offset = current0 - idx;
    const uint8_t* const lowMatchPtr =
      idx < prefixStartIndex ? dictStart : prefixStart;
    matchEnd = idx < prefixStartIndex ? dictEnd : iend;
    match0 = idxBase + idx;
    offset_2 = offset_1;
    offset_1 = offset;
    offcode = (offset + 3);
    mLength = 4;

    while (((ip0 > anchor) & (match0 > lowMatchPtr)) &&
           (ip0[-1] == match0[-1])) {
      ip0--;
      match0--;
      mLength++;
    }
  }

_match:

  mLength += CountDictionaryMatch(ip0 + mLength, match0 + mLength, iend,
                                  matchEnd, prefixStart);

  StoreSequence(seqStore, (size_t)(ip0 - anchor), anchor, iend, offcode,
                mLength);

  ip0 += mLength;
  anchor = ip0;

  if (ip1 < ip0) {
    hash_table[hash1] = (uint32_t)(ip1 - base);
  }

  if (ip0 <= ilimit) {

    hash_table[Hash(base + current0 + 2, hlog, mls)] = current0 + 2;
    hash_table[Hash(ip0 - 2, hlog, mls)] = (uint32_t)(ip0 - 2 - base);

    while (ip0 <= ilimit) {
      uint32_t const repIndex2 = (uint32_t)(ip0 - base) - offset_2;
      const uint8_t* const repMatch2 =
        repIndex2 < prefixStartIndex ? dictBase + repIndex2 : base + repIndex2;
      if ((((uint32_t)((prefixStartIndex - 1) - repIndex2) >= 3) &
           (offset_2 > 0)) &&
          (Read<uint32_t>(repMatch2) == Read<uint32_t>(ip0))) {
        const uint8_t* const repEnd2 =
          repIndex2 < prefixStartIndex ? dictEnd : iend;
        size_t const repLength2 =
          CountDictionaryMatch(ip0 + 4, repMatch2 + 4, iend, repEnd2,
                               prefixStart) +
          4;
        {
          uint32_t const tmpOffset = offset_2;
          offset_2 = offset_1;
          offset_1 = tmpOffset;
        }
        StoreSequence(seqStore, 0, anchor, iend, 1, repLength2);
        hash_table[Hash(ip0, hlog, mls)] = (uint32_t)(ip0 - base);
        ip0 += repLength2;
        anchor = ip0;
        continue;
      }
      break;
    }
  }

  goto _start;
}

}

void FillDoubleFastHashTable(MatchState* state, const void* end,
                             HashTableLoad load, HashTablePurpose purpose) {
  const uint8_t* base = state->window.base;
  const uint8_t* input = base + NextUpdateIndex(state);
  const uint8_t* limit = static_cast<const uint8_t*>(end) - 8;
  const unsigned extra = purpose == HashTablePurpose::Dictionary ? 8 : 0;
  const unsigned long_bits = state->parameters.hash_log + extra;
  const unsigned short_bits = state->parameters.chain_log + extra;
  const unsigned minimum = state->parameters.minimum_match;

  for (; input + 2 <= limit; input += 3) {
    const uint32_t current = static_cast<uint32_t>(input - base);

    for (unsigned i = 0; i < 3; ++i) {
      const size_t short_hash = Hash(input + i, short_bits, minimum);
      const size_t long_hash = Hash(input + i, long_bits, 8);

      if (purpose == HashTablePurpose::Dictionary) {
        if (i == 0) {
          WriteTaggedIndex(state->chain_table, short_hash, current + i);
        }

        if (i == 0 || state->hash_table[long_hash >> 8] == 0) {
          WriteTaggedIndex(state->hash_table, long_hash, current + i);
        }
      }
      else {
        if (i == 0) {
          state->chain_table[short_hash] = current + i;
        }

        if (i == 0 || state->hash_table[long_hash] == 0) {
          state->hash_table[long_hash] = current + i;
        }
      }

      if (load == HashTableLoad::Fast) {
        break;
      }
    }
  }
}

void FillFastHashTable(MatchState* state, const void* end, HashTableLoad load,
                       HashTablePurpose purpose) {
  const uint8_t* base = state->window.base;
  const uint8_t* input = base + NextUpdateIndex(state);
  const uint8_t* limit = static_cast<const uint8_t*>(end) - 8;
  const unsigned extra = purpose == HashTablePurpose::Dictionary ? 8 : 0;
  const unsigned bits = state->parameters.hash_log + extra;
  const unsigned minimum = state->parameters.minimum_match;

  for (; input + 2 <= limit; input += 3) {
    const uint32_t current = static_cast<uint32_t>(input - base);

    for (unsigned i = 0; i < 3; ++i) {
      const size_t hash = Hash(input + i, bits, minimum);

      if (purpose == HashTablePurpose::Dictionary) {
        if (i == 0 || state->hash_table[hash >> 8] == 0) {
          WriteTaggedIndex(state->hash_table, hash, current + i);
        }
      }
      else if (i == 0 || state->hash_table[hash] == 0) {
        state->hash_table[hash] = current + i;
      }

      if (load == HashTableLoad::Fast) {
        break;
      }
    }
  }
}

size_t FindDoubleFastExternalDictionaryMatches(MatchState* state,
                                               SequenceStore* sequences,
                                               uint32_t repeated_offsets[3],
                                               const void* source,
                                               size_t source_size) {
  return DoubleFastExternal(state, sequences, repeated_offsets, source,
                            source_size, MinimumMatch(state));
}

size_t FindFastExternalDictionaryMatches(MatchState* state,
                                         SequenceStore* sequences,
                                         uint32_t repeated_offsets[3],
                                         const void* source,
                                         size_t source_size) {
  return FastExternal(state, sequences, repeated_offsets, source, source_size,
                      MinimumMatch(state));
}

}
