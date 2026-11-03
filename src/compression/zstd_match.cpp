/*
  Adapted from Zstandard under the BSD license.
  Copyright Meta Platforms, Inc. and affiliates. All rights reserved.
  Original license: https://github.com/facebook/zstd/blob/v1.5.6/LICENSE
  Full license text: include/compression/zstd_bit_reader.hpp.
*/

#include "compression/zstd_match.hpp"

namespace fw::compression {
namespace {

template <typename T> T Read(const void* source) {
  T value;
  __builtin_memcpy(&value, source, sizeof(value));
  return value;
}

size_t Hash(const void* source, unsigned bits, unsigned length) {
  if (length == 4) {
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

uint32_t LowestPrefix(const MatchState* state, uint32_t current,
                      unsigned window_log) {
  const uint32_t distance = uint32_t{1} << window_log;
  const uint32_t lowest = state->window.dictionary_limit;
  return !state->loaded_dictionary_end && current - lowest > distance
           ? current - distance
           : lowest;
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

bool TagsMatch(uint32_t packed_index, size_t hash) {
  return static_cast<uint8_t>(packed_index) == static_cast<uint8_t>(hash);
}

void Prefetch(const void* address) {
  __builtin_prefetch(address, 0, 3);
}

void PrefetchArea(const uint32_t* table, size_t size) {
  const auto* address = reinterpret_cast<const uint8_t*>(table);

  for (size_t offset = 0; offset < size; offset += 64) {
    __builtin_prefetch(address + offset, 0, 1);
  }
}

unsigned MinimumMatch(const MatchState* state) {
  const unsigned length = state->parameters.minimum_match;
  return length >= 5 && length <= 7 ? length : 4;
}

size_t DoubleFastPrefix(MatchState* ms, SequenceStore* seqStore,
                        uint32_t rep[3], void const* src, size_t srcSize,
                        uint32_t const mls) {
  MatchParameters const* parameters = &ms->parameters;
  uint32_t* const hashLong = ms->hash_table;
  const uint32_t hBitsL = parameters->hash_log;
  uint32_t* const hashSmall = ms->chain_table;
  const uint32_t hBitsS = parameters->chain_log;
  const uint8_t* const base = ms->window.base;
  const uint8_t* const istart = (const uint8_t*)src;
  const uint8_t* anchor = istart;
  const uint32_t endIndex = (uint32_t)((size_t)(istart - base) + srcSize);

  const uint32_t prefixLowestIndex =
    LowestPrefix(ms, endIndex, parameters->window_log);
  const uint8_t* const prefixLowest = base + prefixLowestIndex;
  const uint8_t* const iend = istart + srcSize;
  const uint8_t* const ilimit = iend - 8;
  uint32_t offset_1 = rep[0], offset_2 = rep[1];
  uint32_t offsetSaved1 = 0, offsetSaved2 = 0;

  size_t mLength;
  uint32_t offset;
  uint32_t curr;

  const size_t kStepIncr = 1 << 8;

  const uint8_t* nextStep;
  size_t step;

  size_t hl0;
  size_t hl1;

  uint32_t idxl0;
  uint32_t idxl1;

  const uint8_t* matchl0;
  const uint8_t* matchs0;
  const uint8_t* matchl1;

  const uint8_t* ip = istart;
  const uint8_t* ip1;

  ip += ((ip - prefixLowest) == 0);
  {
    uint32_t const current = (uint32_t)(ip - base);
    uint32_t const windowLow =
      LowestPrefix(ms, current, parameters->window_log);
    uint32_t const maxRep = current - windowLow;
    if (offset_2 > maxRep) {
      offsetSaved2 = offset_2;
      offset_2 = 0;
    }
    if (offset_1 > maxRep) {
      offsetSaved1 = offset_1;
      offset_1 = 0;
    }
  }

  for (;;) {
    step = 1;
    nextStep = ip + kStepIncr;
    ip1 = ip + step;

    if (ip1 > ilimit) {
      goto _cleanup;
    }

    hl0 = Hash(ip, hBitsL, 8);
    idxl0 = hashLong[hl0];
    matchl0 = base + idxl0;

    do {
      const size_t hs0 = Hash(ip, hBitsS, mls);
      const uint32_t idxs0 = hashSmall[hs0];
      curr = (uint32_t)(ip - base);
      matchs0 = base + idxs0;

      hashLong[hl0] = hashSmall[hs0] = curr;

      if ((offset_1 > 0) &
          (Read<uint32_t>(ip + 1 - offset_1) == Read<uint32_t>(ip + 1))) {
        mLength = CountMatch(ip + 1 + 4, ip + 1 + 4 - offset_1, iend) + 4;
        ip++;
        StoreSequence(seqStore, (size_t)(ip - anchor), anchor, iend, 1,
                      mLength);
        goto _match_stored;
      }

      hl1 = Hash(ip1, hBitsL, 8);

      if (idxl0 > prefixLowestIndex) {

        if (Read<uint64_t>(matchl0) == Read<uint64_t>(ip)) {
          mLength = CountMatch(ip + 8, matchl0 + 8, iend) + 8;
          offset = (uint32_t)(ip - matchl0);
          while (((ip > anchor) & (matchl0 > prefixLowest)) &&
                 (ip[-1] == matchl0[-1])) {
            ip--;
            matchl0--;
            mLength++;
          }
          goto _match_found;
        }
      }

      idxl1 = hashLong[hl1];
      matchl1 = base + idxl1;

      if (idxs0 > prefixLowestIndex) {

        if (Read<uint32_t>(matchs0) == Read<uint32_t>(ip)) {
          goto _search_next_long;
        }
      }

      if (ip1 >= nextStep) {
        Prefetch(ip1 + 64);
        Prefetch(ip1 + 128);
        step++;
        nextStep += kStepIncr;
      }
      ip = ip1;
      ip1 += step;

      hl0 = hl1;
      idxl0 = idxl1;
      matchl0 = matchl1;

      Prefetch(ip + 256);

    } while (ip1 <= ilimit);

  _cleanup:

    offsetSaved2 =
      ((offsetSaved1 != 0) && (offset_1 != 0)) ? offsetSaved1 : offsetSaved2;

    rep[0] = offset_1 ? offset_1 : offsetSaved1;
    rep[1] = offset_2 ? offset_2 : offsetSaved2;

    return (size_t)(iend - anchor);

  _search_next_long:

    if (idxl1 > prefixLowestIndex) {
      if (Read<uint64_t>(matchl1) == Read<uint64_t>(ip1)) {
        ip = ip1;
        mLength = CountMatch(ip + 8, matchl1 + 8, iend) + 8;
        offset = (uint32_t)(ip - matchl1);
        while (((ip > anchor) & (matchl1 > prefixLowest)) &&
               (ip[-1] == matchl1[-1])) {
          ip--;
          matchl1--;
          mLength++;
        }
        goto _match_found;
      }
    }

    mLength = CountMatch(ip + 4, matchs0 + 4, iend) + 4;
    offset = (uint32_t)(ip - matchs0);
    while (((ip > anchor) & (matchs0 > prefixLowest)) &&
           (ip[-1] == matchs0[-1])) {
      ip--;
      matchs0--;
      mLength++;
    }

  _match_found:
    offset_2 = offset_1;
    offset_1 = offset;

    if (step < 4) {

      hashLong[hl1] = (uint32_t)(ip1 - base);
    }

    StoreSequence(seqStore, (size_t)(ip - anchor), anchor, iend, (offset + 3),
                  mLength);

  _match_stored:

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

      while ((ip <= ilimit) &&
             ((offset_2 > 0) &
              (Read<uint32_t>(ip) == Read<uint32_t>(ip - offset_2)))) {

        size_t const rLength = CountMatch(ip + 4, ip + 4 - offset_2, iend) + 4;
        uint32_t const tmpOff = offset_2;
        offset_2 = offset_1;
        offset_1 = tmpOff;
        hashSmall[Hash(ip, hBitsS, mls)] = (uint32_t)(ip - base);
        hashLong[Hash(ip, hBitsL, 8)] = (uint32_t)(ip - base);
        StoreSequence(seqStore, 0, anchor, iend, 1, rLength);
        ip += rLength;
        anchor = ip;
        continue;
      }
    }
  }
}

size_t DoubleFastDictionary(MatchState* ms, SequenceStore* seqStore,
                            uint32_t rep[3], void const* src, size_t srcSize,
                            uint32_t const mls) {
  MatchParameters const* parameters = &ms->parameters;
  uint32_t* const hashLong = ms->hash_table;
  const uint32_t hBitsL = parameters->hash_log;
  uint32_t* const hashSmall = ms->chain_table;
  const uint32_t hBitsS = parameters->chain_log;
  const uint8_t* const base = ms->window.base;
  const uint8_t* const istart = (const uint8_t*)src;
  const uint8_t* ip = istart;
  const uint8_t* anchor = istart;
  const uint32_t endIndex = (uint32_t)((size_t)(istart - base) + srcSize);

  const uint32_t prefixLowestIndex =
    LowestPrefix(ms, endIndex, parameters->window_log);
  const uint8_t* const prefixLowest = base + prefixLowestIndex;
  const uint8_t* const iend = istart + srcSize;
  const uint8_t* const ilimit = iend - 8;
  uint32_t offset_1 = rep[0], offset_2 = rep[1];

  const MatchState* const dms = ms->dictionary;
  const MatchParameters* const dictCParams = &dms->parameters;
  const uint32_t* const dictHashLong = dms->hash_table;
  const uint32_t* const dictHashSmall = dms->chain_table;
  const uint32_t dictStartIndex = dms->window.dictionary_limit;
  const uint8_t* const dictBase = dms->window.base;
  const uint8_t* const dictStart = dictBase + dictStartIndex;
  const uint8_t* const dictEnd = dms->window.next_source;
  const uint32_t dictIndexDelta =
    prefixLowestIndex - (uint32_t)(dictEnd - dictBase);
  const uint32_t dictHBitsL = dictCParams->hash_log + 8;
  const uint32_t dictHBitsS = dictCParams->chain_log + 8;
  const uint32_t dictAndPrefixLength =
    (uint32_t)((ip - prefixLowest) + (dictEnd - dictStart));

  if (ms->prefetch_dictionary) {
    size_t const hashTableBytes =
      (((size_t)1) << dictCParams->hash_log) * sizeof(uint32_t);
    size_t const chainTableBytes =
      (((size_t)1) << dictCParams->chain_log) * sizeof(uint32_t);
    PrefetchArea(dictHashLong, hashTableBytes);
    PrefetchArea(dictHashSmall, chainTableBytes);
  }

  ip += (dictAndPrefixLength == 0);

  while (ip < ilimit) {
    size_t mLength;
    uint32_t offset;
    size_t const h2 = Hash(ip, hBitsL, 8);
    size_t const h = Hash(ip, hBitsS, mls);
    size_t const dictHashAndTagL = Hash(ip, dictHBitsL, 8);
    size_t const dictHashAndTagS = Hash(ip, dictHBitsS, mls);
    uint32_t const dictMatchIndexAndTagL = dictHashLong[dictHashAndTagL >> 8];
    uint32_t const dictMatchIndexAndTagS = dictHashSmall[dictHashAndTagS >> 8];
    int const dictTagsMatchL =
      TagsMatch(dictMatchIndexAndTagL, dictHashAndTagL);
    int const dictTagsMatchS =
      TagsMatch(dictMatchIndexAndTagS, dictHashAndTagS);
    uint32_t const curr = (uint32_t)(ip - base);
    uint32_t const matchIndexL = hashLong[h2];
    uint32_t matchIndexS = hashSmall[h];
    const uint8_t* matchLong = base + matchIndexL;
    const uint8_t* match = base + matchIndexS;
    const uint32_t repIndex = curr + 1 - offset_1;
    const uint8_t* repMatch = (repIndex < prefixLowestIndex)
                                ? dictBase + (repIndex - dictIndexDelta)
                                : base + repIndex;
    hashLong[h2] = hashSmall[h] = curr;

    if (((uint32_t)((prefixLowestIndex - 1) - repIndex) >= 3) &&
        (Read<uint32_t>(repMatch) == Read<uint32_t>(ip + 1))) {
      const uint8_t* repMatchEnd =
        repIndex < prefixLowestIndex ? dictEnd : iend;
      mLength = CountDictionaryMatch(ip + 1 + 4, repMatch + 4, iend,
                                     repMatchEnd, prefixLowest) +
                4;
      ip++;
      StoreSequence(seqStore, (size_t)(ip - anchor), anchor, iend, 1, mLength);
      goto _match_stored;
    }

    if (matchIndexL > prefixLowestIndex) {

      if (Read<uint64_t>(matchLong) == Read<uint64_t>(ip)) {
        mLength = CountMatch(ip + 8, matchLong + 8, iend) + 8;
        offset = (uint32_t)(ip - matchLong);
        while (((ip > anchor) & (matchLong > prefixLowest)) &&
               (ip[-1] == matchLong[-1])) {
          ip--;
          matchLong--;
          mLength++;
        }
        goto _match_found;
      }
    }
    else if (dictTagsMatchL) {

      uint32_t const dictMatchIndexL = dictMatchIndexAndTagL >> 8;
      const uint8_t* dictMatchL = dictBase + dictMatchIndexL;

      if (dictMatchL > dictStart &&
          Read<uint64_t>(dictMatchL) == Read<uint64_t>(ip)) {
        mLength = CountDictionaryMatch(ip + 8, dictMatchL + 8, iend, dictEnd,
                                       prefixLowest) +
                  8;
        offset = (uint32_t)(curr - dictMatchIndexL - dictIndexDelta);
        while (((ip > anchor) & (dictMatchL > dictStart)) &&
               (ip[-1] == dictMatchL[-1])) {
          ip--;
          dictMatchL--;
          mLength++;
        }
        goto _match_found;
      }
    }

    if (matchIndexS > prefixLowestIndex) {

      if (Read<uint32_t>(match) == Read<uint32_t>(ip)) {
        goto _search_next_long;
      }
    }
    else if (dictTagsMatchS) {

      uint32_t const dictMatchIndexS = dictMatchIndexAndTagS >> 8;
      match = dictBase + dictMatchIndexS;
      matchIndexS = dictMatchIndexS + dictIndexDelta;

      if (match > dictStart && Read<uint32_t>(match) == Read<uint32_t>(ip)) {
        goto _search_next_long;
      }
    }

    ip += ((ip - anchor) >> 8) + 1;

    Prefetch(ip + 256);

    continue;

  _search_next_long:
    {
      size_t const hl3 = Hash(ip + 1, hBitsL, 8);
      size_t const dictHashAndTagL3 = Hash(ip + 1, dictHBitsL, 8);
      uint32_t const matchIndexL3 = hashLong[hl3];
      uint32_t const dictMatchIndexAndTagL3 =
        dictHashLong[dictHashAndTagL3 >> 8];
      int const dictTagsMatchL3 =
        TagsMatch(dictMatchIndexAndTagL3, dictHashAndTagL3);
      const uint8_t* matchL3 = base + matchIndexL3;
      hashLong[hl3] = curr + 1;

      if (matchIndexL3 > prefixLowestIndex) {
        if (Read<uint64_t>(matchL3) == Read<uint64_t>(ip + 1)) {
          mLength = CountMatch(ip + 9, matchL3 + 8, iend) + 8;
          ip++;
          offset = (uint32_t)(ip - matchL3);
          while (((ip > anchor) & (matchL3 > prefixLowest)) &&
                 (ip[-1] == matchL3[-1])) {
            ip--;
            matchL3--;
            mLength++;
          }
          goto _match_found;
        }
      }
      else if (dictTagsMatchL3) {

        uint32_t const dictMatchIndexL3 = dictMatchIndexAndTagL3 >> 8;
        const uint8_t* dictMatchL3 = dictBase + dictMatchIndexL3;

        if (dictMatchL3 > dictStart &&
            Read<uint64_t>(dictMatchL3) == Read<uint64_t>(ip + 1)) {
          mLength = CountDictionaryMatch(ip + 1 + 8, dictMatchL3 + 8, iend,
                                         dictEnd, prefixLowest) +
                    8;
          ip++;
          offset = (uint32_t)(curr + 1 - dictMatchIndexL3 - dictIndexDelta);
          while (((ip > anchor) & (dictMatchL3 > dictStart)) &&
                 (ip[-1] == dictMatchL3[-1])) {
            ip--;
            dictMatchL3--;
            mLength++;
          }
          goto _match_found;
        }
      }
    }

    if (matchIndexS < prefixLowestIndex) {
      mLength =
        CountDictionaryMatch(ip + 4, match + 4, iend, dictEnd, prefixLowest) +
        4;
      offset = (uint32_t)(curr - matchIndexS);
      while (((ip > anchor) & (match > dictStart)) && (ip[-1] == match[-1])) {
        ip--;
        match--;
        mLength++;
      }
    }
    else {
      mLength = CountMatch(ip + 4, match + 4, iend) + 4;
      offset = (uint32_t)(ip - match);
      while (((ip > anchor) & (match > prefixLowest)) &&
             (ip[-1] == match[-1])) {
        ip--;
        match--;
        mLength++;
      }
    }

  _match_found:
    offset_2 = offset_1;
    offset_1 = offset;

    StoreSequence(seqStore, (size_t)(ip - anchor), anchor, iend, (offset + 3),
                  mLength);

  _match_stored:

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
        const uint8_t* repMatch2 = repIndex2 < prefixLowestIndex
                                     ? dictBase + repIndex2 - dictIndexDelta
                                     : base + repIndex2;
        if (((uint32_t)((prefixLowestIndex - 1) - (uint32_t)repIndex2) >= 3) &&
            (Read<uint32_t>(repMatch2) == Read<uint32_t>(ip))) {
          const uint8_t* const repEnd2 =
            repIndex2 < prefixLowestIndex ? dictEnd : iend;
          size_t const repLength2 =
            CountDictionaryMatch(ip + 4, repMatch2 + 4, iend, repEnd2,
                                 prefixLowest) +
            4;
          uint32_t tmpOffset = offset_2;
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

size_t FastPrefix(MatchState* ms, SequenceStore* seqStore, uint32_t rep[3],
                  void const* src, size_t srcSize, uint32_t const mls,
                  uint32_t const hasStep) {
  const MatchParameters* const parameters = &ms->parameters;
  uint32_t* const hash_table = ms->hash_table;
  uint32_t const hlog = parameters->hash_log;

  size_t const stepSize =
    hasStep ? (parameters->target_length + !(parameters->target_length) + 1)
            : 2;
  const uint8_t* const base = ms->window.base;
  const uint8_t* const istart = (const uint8_t*)src;
  const uint32_t endIndex = (uint32_t)((size_t)(istart - base) + srcSize);
  const uint32_t prefixStartIndex =
    LowestPrefix(ms, endIndex, parameters->window_log);
  const uint8_t* const prefixStart = base + prefixStartIndex;
  const uint8_t* const iend = istart + srcSize;
  const uint8_t* const ilimit = iend - 8;

  const uint8_t* anchor = istart;
  const uint8_t* ip0 = istart;
  const uint8_t* ip1;
  const uint8_t* ip2;
  const uint8_t* ip3;
  uint32_t current0;

  uint32_t rep_offset1 = rep[0];
  uint32_t rep_offset2 = rep[1];
  uint32_t offsetSaved1 = 0, offsetSaved2 = 0;

  size_t hash0;
  size_t hash1;
  uint32_t idx;
  uint32_t mval;

  uint32_t offcode;
  const uint8_t* match0;
  size_t mLength;

  size_t step;
  const uint8_t* nextStep;
  const size_t kStepIncr = (1 << (8 - 1));

  ip0 += (ip0 == prefixStart);
  {
    uint32_t const curr = (uint32_t)(ip0 - base);
    uint32_t const windowLow = LowestPrefix(ms, curr, parameters->window_log);
    uint32_t const maxRep = curr - windowLow;
    if (rep_offset2 > maxRep) {
      offsetSaved2 = rep_offset2;
      rep_offset2 = 0;
    }
    if (rep_offset1 > maxRep) {
      offsetSaved1 = rep_offset1;
      rep_offset1 = 0;
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

  do {

    const uint32_t rval = Read<uint32_t>(ip2 - rep_offset1);

    current0 = (uint32_t)(ip0 - base);
    hash_table[hash0] = current0;

    if ((Read<uint32_t>(ip2) == rval) & (rep_offset1 > 0)) {
      ip0 = ip2;
      match0 = ip0 - rep_offset1;
      mLength = ip0[-1] == match0[-1];
      ip0 -= mLength;
      match0 -= mLength;
      offcode = 1;
      mLength += 4;

      hash_table[hash1] = (uint32_t)(ip1 - base);

      goto _match;
    }

    if (idx >= prefixStartIndex) {
      mval = Read<uint32_t>(base + idx);
    }
    else {
      mval = Read<uint32_t>(ip0) ^ 1;
    }

    if (Read<uint32_t>(ip0) == mval) {

      hash_table[hash1] = (uint32_t)(ip1 - base);

      goto _offset;
    }

    idx = hash_table[hash1];

    hash0 = hash1;
    hash1 = Hash(ip2, hlog, mls);

    ip0 = ip1;
    ip1 = ip2;
    ip2 = ip3;

    current0 = (uint32_t)(ip0 - base);
    hash_table[hash0] = current0;

    if (idx >= prefixStartIndex) {
      mval = Read<uint32_t>(base + idx);
    }
    else {
      mval = Read<uint32_t>(ip0) ^ 1;
    }

    if (Read<uint32_t>(ip0) == mval) {

      if (step <= 4) {

        hash_table[hash1] = (uint32_t)(ip1 - base);
      }

      goto _offset;
    }

    idx = hash_table[hash1];

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
    ((offsetSaved1 != 0) && (rep_offset1 != 0)) ? offsetSaved1 : offsetSaved2;

  rep[0] = rep_offset1 ? rep_offset1 : offsetSaved1;
  rep[1] = rep_offset2 ? rep_offset2 : offsetSaved2;

  return (size_t)(iend - anchor);

_offset:

  match0 = base + idx;
  rep_offset2 = rep_offset1;
  rep_offset1 = (uint32_t)(ip0 - match0);
  offcode = (rep_offset1 + 3);
  mLength = 4;

  while (((ip0 > anchor) & (match0 > prefixStart)) && (ip0[-1] == match0[-1])) {
    ip0--;
    match0--;
    mLength++;
  }

_match:

  mLength += CountMatch(ip0 + mLength, match0 + mLength, iend);

  StoreSequence(seqStore, (size_t)(ip0 - anchor), anchor, iend, offcode,
                mLength);

  ip0 += mLength;
  anchor = ip0;

  if (ip0 <= ilimit) {

    hash_table[Hash(base + current0 + 2, hlog, mls)] = current0 + 2;
    hash_table[Hash(ip0 - 2, hlog, mls)] = (uint32_t)(ip0 - 2 - base);

    if (rep_offset2 > 0) {
      while ((ip0 <= ilimit) &&
             (Read<uint32_t>(ip0) == Read<uint32_t>(ip0 - rep_offset2))) {

        size_t const rLength =
          CountMatch(ip0 + 4, ip0 + 4 - rep_offset2, iend) + 4;
        {
          uint32_t const tmpOff = rep_offset2;
          rep_offset2 = rep_offset1;
          rep_offset1 = tmpOff;
        }
        hash_table[Hash(ip0, hlog, mls)] = (uint32_t)(ip0 - base);
        ip0 += rLength;
        StoreSequence(seqStore, 0, anchor, iend, 1, rLength);
        anchor = ip0;
        continue;
      }
    }
  }

  goto _start;
}

size_t FastDictionary(MatchState* ms, SequenceStore* seqStore, uint32_t rep[3],
                      void const* src, size_t srcSize, uint32_t const mls) {
  const MatchParameters* const parameters = &ms->parameters;
  uint32_t* const hash_table = ms->hash_table;
  uint32_t const hlog = parameters->hash_log;

  uint32_t const stepSize =
    parameters->target_length + !(parameters->target_length);
  const uint8_t* const base = ms->window.base;
  const uint8_t* const istart = (const uint8_t*)src;
  const uint8_t* ip0 = istart;
  const uint8_t* ip1 = ip0 + stepSize;
  const uint8_t* anchor = istart;
  const uint32_t prefixStartIndex = ms->window.dictionary_limit;
  const uint8_t* const prefixStart = base + prefixStartIndex;
  const uint8_t* const iend = istart + srcSize;
  const uint8_t* const ilimit = iend - 8;
  uint32_t offset_1 = rep[0], offset_2 = rep[1];

  const MatchState* const dms = ms->dictionary;
  const MatchParameters* const dictCParams = &dms->parameters;
  const uint32_t* const dictHashTable = dms->hash_table;
  const uint32_t dictStartIndex = dms->window.dictionary_limit;
  const uint8_t* const dictBase = dms->window.base;
  const uint8_t* const dictStart = dictBase + dictStartIndex;
  const uint8_t* const dictEnd = dms->window.next_source;
  const uint32_t dictIndexDelta =
    prefixStartIndex - (uint32_t)(dictEnd - dictBase);
  const uint32_t dictAndPrefixLength =
    (uint32_t)(istart - prefixStart + dictEnd - dictStart);
  const uint32_t dictHBits = dictCParams->hash_log + 8;

  if (ms->prefetch_dictionary) {
    size_t const hashTableBytes =
      (((size_t)1) << dictCParams->hash_log) * sizeof(uint32_t);
    PrefetchArea(dictHashTable, hashTableBytes);
  }

  ip0 += (dictAndPrefixLength == 0);

  while (ip1 <= ilimit) {
    size_t mLength;
    size_t hash0 = Hash(ip0, hlog, mls);

    size_t const dictHashAndTag0 = Hash(ip0, dictHBits, mls);
    uint32_t dictMatchIndexAndTag = dictHashTable[dictHashAndTag0 >> 8];
    int dictTagsMatch = TagsMatch(dictMatchIndexAndTag, dictHashAndTag0);

    uint32_t matchIndex = hash_table[hash0];
    uint32_t curr = (uint32_t)(ip0 - base);
    size_t step = stepSize;
    const size_t kStepIncr = 1 << 8;
    const uint8_t* nextStep = ip0 + kStepIncr;

    for (;;) {
      const uint8_t* match = base + matchIndex;
      const uint32_t repIndex = curr + 1 - offset_1;
      const uint8_t* repMatch = (repIndex < prefixStartIndex)
                                  ? dictBase + (repIndex - dictIndexDelta)
                                  : base + repIndex;
      const size_t hash1 = Hash(ip1, hlog, mls);
      size_t const dictHashAndTag1 = Hash(ip1, dictHBits, mls);
      hash_table[hash0] = curr;

      if (((uint32_t)((prefixStartIndex - 1) - repIndex) >= 3) &&
          (Read<uint32_t>(repMatch) == Read<uint32_t>(ip0 + 1))) {
        const uint8_t* const repMatchEnd =
          repIndex < prefixStartIndex ? dictEnd : iend;
        mLength = CountDictionaryMatch(ip0 + 1 + 4, repMatch + 4, iend,
                                       repMatchEnd, prefixStart) +
                  4;
        ip0++;
        StoreSequence(seqStore, (size_t)(ip0 - anchor), anchor, iend, 1,
                      mLength);
        break;
      }

      if (dictTagsMatch) {

        const uint32_t dictMatchIndex = dictMatchIndexAndTag >> 8;
        const uint8_t* dictMatch = dictBase + dictMatchIndex;
        if (dictMatchIndex > dictStartIndex &&
            Read<uint32_t>(dictMatch) == Read<uint32_t>(ip0)) {

          if (matchIndex <= prefixStartIndex) {
            uint32_t const offset =
              (uint32_t)(curr - dictMatchIndex - dictIndexDelta);
            mLength = CountDictionaryMatch(ip0 + 4, dictMatch + 4, iend,
                                           dictEnd, prefixStart) +
                      4;
            while (((ip0 > anchor) & (dictMatch > dictStart)) &&
                   (ip0[-1] == dictMatch[-1])) {
              ip0--;
              dictMatch--;
              mLength++;
            }
            offset_2 = offset_1;
            offset_1 = offset;
            StoreSequence(seqStore, (size_t)(ip0 - anchor), anchor, iend,
                          (offset + 3), mLength);
            break;
          }
        }
      }

      if (matchIndex > prefixStartIndex &&
          Read<uint32_t>(match) == Read<uint32_t>(ip0)) {

        uint32_t const offset = (uint32_t)(ip0 - match);
        mLength = CountMatch(ip0 + 4, match + 4, iend) + 4;
        while (((ip0 > anchor) & (match > prefixStart)) &&
               (ip0[-1] == match[-1])) {
          ip0--;
          match--;
          mLength++;
        }
        offset_2 = offset_1;
        offset_1 = offset;
        StoreSequence(seqStore, (size_t)(ip0 - anchor), anchor, iend,
                      (offset + 3), mLength);
        break;
      }

      dictMatchIndexAndTag = dictHashTable[dictHashAndTag1 >> 8];
      dictTagsMatch = TagsMatch(dictMatchIndexAndTag, dictHashAndTag1);
      matchIndex = hash_table[hash1];

      if (ip1 >= nextStep) {
        step++;
        nextStep += kStepIncr;
      }
      ip0 = ip1;
      ip1 = ip1 + step;
      if (ip1 > ilimit) {
        goto _cleanup;
      }

      curr = (uint32_t)(ip0 - base);
      hash0 = hash1;
    }

    ip0 += mLength;
    anchor = ip0;

    if (ip0 <= ilimit) {

      hash_table[Hash(base + curr + 2, hlog, mls)] = curr + 2;
      hash_table[Hash(ip0 - 2, hlog, mls)] = (uint32_t)(ip0 - 2 - base);

      while (ip0 <= ilimit) {
        uint32_t const current2 = (uint32_t)(ip0 - base);
        uint32_t const repIndex2 = current2 - offset_2;
        const uint8_t* repMatch2 = repIndex2 < prefixStartIndex
                                     ? dictBase - dictIndexDelta + repIndex2
                                     : base + repIndex2;
        if (((uint32_t)((prefixStartIndex - 1) - (uint32_t)repIndex2) >= 3) &&
            (Read<uint32_t>(repMatch2) == Read<uint32_t>(ip0))) {
          const uint8_t* const repEnd2 =
            repIndex2 < prefixStartIndex ? dictEnd : iend;
          size_t const repLength2 =
            CountDictionaryMatch(ip0 + 4, repMatch2 + 4, iend, repEnd2,
                                 prefixStart) +
            4;
          uint32_t tmpOffset = offset_2;
          offset_2 = offset_1;
          offset_1 = tmpOffset;
          StoreSequence(seqStore, 0, anchor, iend, 1, repLength2);
          hash_table[Hash(ip0, hlog, mls)] = current2;
          ip0 += repLength2;
          anchor = ip0;
          continue;
        }
        break;
      }
    }

    ip1 = ip0 + stepSize;
  }

_cleanup:

  rep[0] = offset_1;
  rep[1] = offset_2;

  return (size_t)(iend - anchor);
}

}

size_t CountDictionaryMatch(const uint8_t* input, const uint8_t* match,
                            const uint8_t* input_end, const uint8_t* match_end,
                            const uint8_t* prefix) {
  const uint8_t* boundary = input + (match_end - match);

  if (boundary > input_end) {
    boundary = input_end;
  }

  const size_t count = CountMatch(input, match, boundary);

  if (match + count != match_end) {
    return count;
  }

  return count + CountMatch(input + count, prefix, input_end);
}

size_t FindDoubleFastMatches(MatchState* state, SequenceStore* sequences,
                             uint32_t repeated_offsets[3], const void* source,
                             size_t source_size) {
  return DoubleFastPrefix(state, sequences, repeated_offsets, source,
                          source_size, MinimumMatch(state));
}

size_t FindDoubleFastDictionaryMatches(MatchState* state,
                                       SequenceStore* sequences,
                                       uint32_t repeated_offsets[3],
                                       const void* source, size_t source_size) {
  return DoubleFastDictionary(state, sequences, repeated_offsets, source,
                              source_size, MinimumMatch(state));
}

size_t FindFastMatches(MatchState* state, SequenceStore* sequences,
                       uint32_t repeated_offsets[3], const void* source,
                       size_t source_size) {
  return FastPrefix(state, sequences, repeated_offsets, source, source_size,
                    MinimumMatch(state), state->parameters.target_length > 1);
}

size_t FindFastDictionaryMatches(MatchState* state, SequenceStore* sequences,
                                 uint32_t repeated_offsets[3],
                                 const void* source, size_t source_size) {
  return FastDictionary(state, sequences, repeated_offsets, source, source_size,
                        MinimumMatch(state));
}

}
