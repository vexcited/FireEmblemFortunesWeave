/*
  Adapted from Zstandard under the BSD license.
  Copyright Meta Platforms, Inc. and affiliates. All rights reserved.
  Original license: https://github.com/facebook/zstd/blob/v1.5.6/LICENSE
  Full license text: include/compression/zstd_bit_reader.hpp.
*/

#include "compression/zstd_optimal_internal.hpp"

namespace fw::compression {

uint32_t CollectOptimalExternalMatches3(OptimalMatch*, MatchState*, uint32_t*,
  const uint8_t*, const uint8_t*, const uint32_t*, uint32_t, uint32_t);

uint32_t CollectOptimalExternalMatches4(OptimalMatch*, MatchState*, uint32_t*,
  const uint8_t*, const uint8_t*, const uint32_t*, uint32_t, uint32_t);

uint32_t CollectOptimalExternalMatches5(OptimalMatch*, MatchState*, uint32_t*,
  const uint8_t*, const uint8_t*, const uint32_t*, uint32_t, uint32_t);

uint32_t CollectOptimalExternalMatches6(OptimalMatch*, MatchState*, uint32_t*,
  const uint8_t*, const uint8_t*, const uint32_t*, uint32_t, uint32_t);

uint32_t CollectOptimalPreparedMatches3(OptimalMatch*, MatchState*, uint32_t*,
  const uint8_t*, const uint8_t*, const uint32_t*, uint32_t, uint32_t);

uint32_t CollectOptimalPreparedMatches4(OptimalMatch*, MatchState*, uint32_t*,
  const uint8_t*, const uint8_t*, const uint32_t*, uint32_t, uint32_t);

uint32_t CollectOptimalPreparedMatches5(OptimalMatch*, MatchState*, uint32_t*,
  const uint8_t*, const uint8_t*, const uint32_t*, uint32_t, uint32_t);

uint32_t CollectOptimalPreparedMatches6(OptimalMatch*, MatchState*, uint32_t*,
  const uint8_t*, const uint8_t*, const uint32_t*, uint32_t, uint32_t);

namespace {
using namespace optimal_detail;

struct RepeatedOffsets {
  uint32_t repeated_offsets[3];
};

RepeatedOffsets NewRepeatedOffsets(
  const uint32_t* previous, uint32_t offset_base, uint32_t empty_literals) {
  RepeatedOffsets result;
  __builtin_memcpy(result.repeated_offsets, previous, 12);
  UpdateRepeatedOffsets(result.repeated_offsets, offset_base, empty_literals);
  return result;
}

uint32_t RawLiteralPrice(const uint8_t* input, uint32_t length,
  const OptimalState* state, unsigned level) {
  if (!length) {
    return 0;
  }
  if (!CompressedLiterals(state)) {
    return length * 2048;
  }
  if (state->predefined_prices) {
    return length * 1536;
  }
  uint32_t price = state->literal_base_price * length;
  uint32_t maximum = state->literal_base_price - 256;
  for (uint32_t i = 0; i < length; ++i) {
    uint32_t weight = Weight(state->literal_frequencies[input[i]], level);
    price -= weight > maximum ? maximum : weight;
  }
  return price;
}

uint32_t LiteralLengthPrice(
  uint32_t length, const OptimalState* state, unsigned level) {
  if (state->predefined_prices) {
    return Weight(length, level);
  }
  if (length == 131072) {
    return 256 + LiteralLengthPrice(length - 1, state, level);
  }
  unsigned code = LiteralCode(length);
  return LiteralBits[code] * 256 + state->literal_length_base_price -
         Weight(state->literal_length_frequencies[code], level);
}

uint32_t MatchPrice(uint32_t offset_base, uint32_t length,
  const OptimalState* state, unsigned level) {
  unsigned offset_code = HighBit(offset_base);
  uint32_t match_base = length - 3;
  if (state->predefined_prices) {
    return Weight(match_base, level) + (16 + offset_code) * 256;
  }
  uint32_t price = offset_code * 256 + state->offset_base_price -
                   Weight(state->offset_frequencies[offset_code], level);
  if (level < 2 && offset_code >= 20) {
    price += (offset_code - 19) * 512;
  }
  unsigned match_code = MatchCode(match_base);
  price += MatchBits[match_code] * 256 + state->match_length_base_price -
           Weight(state->match_length_frequencies[match_code], level);
  return price + 51;
}

void UpdateStatistics(OptimalState* state, uint32_t literal_length,
  const uint8_t* literals, uint32_t offset_base, uint32_t match_length) {
  if (CompressedLiterals(state)) {
    for (uint32_t i = 0; i < literal_length; ++i) {
      state->literal_frequencies[literals[i]] += 2;
    }
    state->literal_sum += literal_length * 2;
  }
  ++state->literal_length_frequencies[LiteralCode(literal_length)];
  ++state->literal_length_sum;
  ++state->offset_frequencies[HighBit(offset_base)];
  ++state->offset_sum;
  ++state->match_length_frequencies[MatchCode(match_length - 3)];
  ++state->match_length_sum;
}

OptimalMatchCollector SelectCollector(
  const MatchState* state, unsigned dictionary_mode) {
  constexpr OptimalMatchCollector collectors[3][4] = {
    {CollectOptimalMatches3, CollectOptimalMatches4, CollectOptimalMatches5,
      CollectOptimalMatches6},
    {CollectOptimalExternalMatches3, CollectOptimalExternalMatches4,
      CollectOptimalExternalMatches5, CollectOptimalExternalMatches6},
    {CollectOptimalPreparedMatches3, CollectOptimalPreparedMatches4,
      CollectOptimalPreparedMatches5, CollectOptimalPreparedMatches6}};
  unsigned minimum = state->parameters.minimum_match;
  minimum = minimum < 3 ? 3 : minimum > 6 ? 6 : minimum;
  return collectors[dictionary_mode][minimum - 3];
}

template <unsigned Level>
size_t Parse(MatchState* state, SequenceStore* sequences,
  uint32_t repeated_offsets[3], const void* source, size_t size,
  unsigned dictionary_mode) {
  OptimalState* const statistics = &Statistics(state);
  auto literal_price = [statistics](const uint8_t* input) {
    return int(RawLiteralPrice(input, 1, statistics, Level));
  };
  auto length_price = [statistics](uint32_t length) {
    return int(LiteralLengthPrice(length, statistics, Level));
  };
  auto length_increment_price = [&length_price](uint32_t length) {
    return length_price(length) - length_price(length - 1);
  };
  const uint8_t* const source_start = (const uint8_t*)source;
  const uint8_t* input = source_start;
  const uint8_t* anchor = source_start;
  const uint8_t* const source_end = source_start + size;
  const uint8_t* const limit = source_end - 8;
  const uint8_t* const base = state->window.base;
  const uint8_t* const prefix_start = base + state->window.dictionary_limit;
  const MatchParameters* const parameters = &state->parameters;
  OptimalMatchCollector collector = SelectCollector(state, dictionary_mode);
  uint32_t const sufficient =
    (parameters->target_length < 4095 ? parameters->target_length : 4095);
  uint32_t const minimum = (parameters->minimum_match == 3) ? 3 : 4;
  uint32_t next_hash3 = NextToUpdate(state);
  OptimalPosition* const prices = statistics->prices;
  OptimalMatch* const matches = statistics->matches;
  OptimalPosition final_stretch;
  OptimalLongDistanceMatch long_distance;
  __builtin_memset(&final_stretch, 0, sizeof(OptimalPosition));
  long_distance.sequences =
    static_cast<const RawSequenceStore*>(state->long_distance_sequences)
      ? *static_cast<const RawSequenceStore*>(state->long_distance_sequences)
      : RawSequenceStore{};
  long_distance.end = long_distance.start = long_distance.offset = 0;
  AdvanceOptimalLongDistanceMatch(&long_distance,
    (uint32_t)(input - source_start), (uint32_t)(source_end - input));

  RescaleOptimalFrequencies(statistics, (const uint8_t*)source, size, Level);
  input += (input == prefix_start);
  while (input < limit) {
    uint32_t position, last_position = 0;
    {
      uint32_t const literal_length = (uint32_t)(input - anchor);
      uint32_t const empty_literals = !literal_length;
      uint32_t count = collector(matches, state, &next_hash3, input, source_end,
        repeated_offsets, empty_literals, minimum);
      MergeOptimalLongDistanceMatch(&long_distance, matches, &count,
        (uint32_t)(input - source_start), (uint32_t)(source_end - input));
      if (!count) {
        input++;
        continue;
      }
      prices[0].match_length = 0;
      prices[0].literal_length = literal_length;
      prices[0].price = length_price(literal_length);

      __builtin_memcpy(&prices[0].repeated_offsets, repeated_offsets,
        sizeof(prices[0].repeated_offsets));
      {
        uint32_t const longest = matches[count - 1].length;
        uint32_t const longest_offset = matches[count - 1].offset_base;

        if (longest > sufficient) {
          final_stretch.literal_length = 0;
          final_stretch.match_length = longest;
          final_stretch.offset_base = longest_offset;

          position = 0;
          last_position = longest;
          goto shortest_path;
        }
      }

      {
        uint32_t endpoint;
        uint32_t candidate;
        for (endpoint = 1; endpoint < minimum; endpoint++) {
          prices[endpoint].price = 1073741824;
          prices[endpoint].match_length = 0;
          prices[endpoint].literal_length = literal_length + endpoint;
        }
        for (candidate = 0; candidate < count; candidate++) {
          uint32_t const offset_base = matches[candidate].offset_base;
          uint32_t const end = matches[candidate].length;
          for (; endpoint <= end; endpoint++) {
            int const match_price =
              (int)MatchPrice(offset_base, endpoint, statistics, Level);
            int const sequence_price = prices[0].price + match_price;

            prices[endpoint].match_length = endpoint;
            prices[endpoint].offset_base = offset_base;
            prices[endpoint].literal_length = 0;
            prices[endpoint].price = sequence_price + length_price(0);
          }
        }
        last_position = endpoint - 1;
        prices[endpoint].price = 1073741824;
      }
    }
    for (position = 1; position <= last_position; position++) {
      const uint8_t* const current = input + position;

      {
        uint32_t const literal_length = prices[position - 1].literal_length + 1;
        int const price = prices[position - 1].price +
                          literal_price(input + position - 1) +
                          length_increment_price(literal_length);

        if (price <= prices[position].price) {
          OptimalPosition const previous_match = prices[position];

          prices[position] = prices[position - 1];
          prices[position].literal_length = literal_length;
          prices[position].price = price;
          if ((Level >= 1) && (previous_match.literal_length == 0) &&
              (length_increment_price(1) < 0) &&
              (input + position < source_end)) {
            int single_literal = previous_match.price +
                                 literal_price(input + position) +
                                 length_increment_price(1);
            int literal_run = price + literal_price(input + position) +
                              length_increment_price(literal_length + 1);

            if ((single_literal < literal_run) &&
                (single_literal < prices[position + 1].price)) {
              uint32_t const previous = position - previous_match.match_length;
              RepeatedOffsets const updated = NewRepeatedOffsets(
                prices[previous].repeated_offsets, previous_match.offset_base,
                prices[previous].literal_length == 0);

              prices[position + 1] = previous_match;
              __builtin_memcpy(prices[position + 1].repeated_offsets, &updated,
                sizeof(RepeatedOffsets));
              prices[position + 1].literal_length = 1;
              prices[position + 1].price = single_literal;
              if (last_position < position + 1) {
                last_position = position + 1;
              }
            }
          }
        }
      }

      if (prices[position].literal_length == 0) {
        uint32_t const previous = position - prices[position].match_length;
        RepeatedOffsets const updated =
          NewRepeatedOffsets(prices[previous].repeated_offsets,
            prices[position].offset_base, prices[previous].literal_length == 0);
        __builtin_memcpy(
          prices[position].repeated_offsets, &updated, sizeof(RepeatedOffsets));
      }
      if (current > limit) {
        continue;
      }
      if (position == last_position) {
        break;
      }
      if ((Level == 0) &&
          (prices[position + 1].price <= prices[position].price + (256 / 2))) {

        continue;
      }

      {
        uint32_t const empty_literals = (prices[position].literal_length == 0);
        int const previous_price = prices[position].price;
        int const base_price = previous_price + length_price(0);
        uint32_t count =
          collector(matches, state, &next_hash3, current, source_end,
            prices[position].repeated_offsets, empty_literals, minimum);
        uint32_t candidate;
        MergeOptimalLongDistanceMatch(&long_distance, matches, &count,
          (uint32_t)(current - source_start), (uint32_t)(source_end - current));
        if (!count) {
          continue;
        }
        {
          uint32_t const longest = matches[count - 1].length;

          if ((longest > sufficient) || (position + longest >= 4096) ||
              (input + position + longest >= source_end)) {
            final_stretch.match_length = longest;
            final_stretch.offset_base = matches[count - 1].offset_base;
            final_stretch.literal_length = 0;
            last_position = position + longest;
            goto shortest_path;
          }
        }
        for (candidate = 0; candidate < count; candidate++) {
          uint32_t const offset = matches[candidate].offset_base;
          uint32_t const last_length = matches[candidate].length;
          uint32_t const first_length =
            (candidate > 0) ? matches[candidate - 1].length + 1 : minimum;
          uint32_t length;

          for (length = last_length; length >= first_length; length--) {
            uint32_t const endpoint = position + length;
            int const price =
              base_price + (int)MatchPrice(offset, length, statistics, Level);
            if ((endpoint > last_position) ||
                (price < prices[endpoint].price)) {

              while (last_position < endpoint) {
                last_position++;
                prices[last_position].price = 1073741824;
                prices[last_position].literal_length = !0;
              }
              prices[endpoint].match_length = length;
              prices[endpoint].offset_base = offset;
              prices[endpoint].literal_length = 0;
              prices[endpoint].price = price;
            }
            else {

              if (Level == 0) {
                break;
              }
            }
          }
        }
      }
      prices[last_position + 1].price = 1073741824;
    }
    final_stretch = prices[last_position];

    position = last_position - final_stretch.match_length;
  shortest_path:

    if (final_stretch.match_length == 0) {

      input += last_position;
      continue;
    }

    if (final_stretch.literal_length == 0) {
      RepeatedOffsets const reps =
        NewRepeatedOffsets(prices[position].repeated_offsets,
          final_stretch.offset_base, prices[position].literal_length == 0);
      __builtin_memcpy(repeated_offsets, &reps, sizeof(RepeatedOffsets));
    }
    else {
      __builtin_memcpy(repeated_offsets, final_stretch.repeated_offsets,
        sizeof(RepeatedOffsets));

      position -= final_stretch.literal_length;
    }
    {
      uint32_t const store_end = position + 2;
      uint32_t store_start = store_end;
      uint32_t stretch_position = position;

      // The original preserves the preceding entry before overwriting this one.
      if (final_stretch.literal_length > 0) {
        prices[store_end].literal_length = final_stretch.literal_length;
        prices[store_end].match_length = 0;
        store_start = store_end - 1;
        prices[store_start] = final_stretch;
      }
      {
        prices[store_end] = final_stretch;
        store_start = store_end;
      }
      while (1) {
        OptimalPosition previous_stretch = prices[stretch_position];
        prices[store_start].literal_length = previous_stretch.literal_length;

        if (previous_stretch.match_length == 0) {
          break;
        }
        store_start--;
        prices[store_start] = previous_stretch;

        stretch_position -=
          previous_stretch.literal_length + previous_stretch.match_length;
      }

      {
        uint32_t store_position;
        for (store_position = store_start; store_position <= store_end;
          store_position++) {
          uint32_t const literal_length = prices[store_position].literal_length;
          uint32_t const length = prices[store_position].match_length;
          uint32_t const offset_base = prices[store_position].offset_base;
          uint32_t const advance = literal_length + length;

          if (length == 0) {

            input = anchor + literal_length;
            continue;
          }

          UpdateStatistics(
            statistics, literal_length, anchor, offset_base, length);
          StoreSequence(
            sequences, literal_length, anchor, source_end, offset_base, length);
          anchor += advance;
          input = anchor;
        }
      }

      SetBasePrices(statistics, Level);
    }
  }
  return (size_t)(source_end - anchor);
}

}

size_t FindOptimalMatchesForDictionary(MatchState* state,
  SequenceStore* sequences, uint32_t repeated_offsets[3], const void* source,
  size_t size, unsigned dictionary_mode) {
  return Parse<0>(
    state, sequences, repeated_offsets, source, size, dictionary_mode);
}

size_t FindUltraMatchesForDictionary(MatchState* state,
  SequenceStore* sequences, uint32_t repeated_offsets[3], const void* source,
  size_t size, unsigned dictionary_mode) {
  return Parse<2>(
    state, sequences, repeated_offsets, source, size, dictionary_mode);
}

size_t FindOptimalMatches(MatchState* state, SequenceStore* sequences,
  uint32_t repeated_offsets[3], const void* source, size_t size) {
  return FindOptimalMatchesForDictionary(
    state, sequences, repeated_offsets, source, size, 0);
}

size_t FindUltraMatches(MatchState* state, SequenceStore* sequences,
  uint32_t repeated_offsets[3], const void* source, size_t size) {
  return FindUltraMatchesForDictionary(
    state, sequences, repeated_offsets, source, size, 0);
}

size_t FindUltra2Matches(MatchState* state, SequenceStore* sequences,
  uint32_t repeated_offsets[3], const void* source, size_t size) {
  using namespace optimal_detail;
  uint32_t current =
    uint32_t(static_cast<const uint8_t*>(source) - state->window.base);
  if (!Statistics(state).literal_length_sum &&
      sequences->sequences == sequences->sequences_start &&
      state->window.dictionary_limit == state->window.low_limit &&
      current == state->window.dictionary_limit && size > 8) {
    uint32_t temporary[3];
    __builtin_memcpy(temporary, repeated_offsets, sizeof(temporary));
    FindUltraMatchesForDictionary(state, sequences, temporary, source, size, 0);
    ResetCompressionSequenceStore(sequences);
    state->window.base -= size;
    state->window.dictionary_limit += uint32_t(size);
    state->window.low_limit = state->window.dictionary_limit;
    NextToUpdate(state) = state->window.dictionary_limit;
  }
  return FindUltraMatchesForDictionary(
    state, sequences, repeated_offsets, source, size, 0);
}

}
