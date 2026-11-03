/*
  Adapted from Zstandard under the BSD license.
  Copyright Meta Platforms, Inc. and affiliates. All rights reserved.
  Original license: https://github.com/facebook/zstd/blob/v1.5.6/LICENSE
  Full license text: include/compression/zstd_bit_reader.hpp.
*/

#include "compression/zstd_block_encoder.hpp"
#include "compression/zstd_block_internal.hpp"
#include "compression/zstd_external.hpp"
#include "compression/zstd_lazy.hpp"
#include "compression/zstd_chain_dictionary.hpp"
#include "compression/zstd_row.hpp"
#include "compression/zstd_row_dictionary.hpp"
#include "compression/zstd_row_dedicated.hpp"
#include "compression/zstd_row_external.hpp"

namespace fw::compression {

size_t FindBinaryTreeMatches(
  MatchState*, SequenceStore*, uint32_t*, const void*, size_t
);
size_t FindBinaryTreeExternalMatches(
  MatchState*, SequenceStore*, uint32_t*, const void*, size_t
);
size_t FindBinaryTreePreparedMatches(
  MatchState*, SequenceStore*, uint32_t*, const void*, size_t
);
size_t FindOptimalMatches(
  MatchState*, SequenceStore*, uint32_t*, const void*, size_t
);
size_t FindUltraMatches(
  MatchState*, SequenceStore*, uint32_t*, const void*, size_t
);
size_t FindUltra2Matches(
  MatchState*, SequenceStore*, uint32_t*, const void*, size_t
);
size_t FindOptimalExternalMatches(
  MatchState*, SequenceStore*, uint32_t*, const void*, size_t
);
size_t FindUltraExternalMatches(
  MatchState*, SequenceStore*, uint32_t*, const void*, size_t
);
size_t FindOptimalPreparedMatches(
  MatchState*, SequenceStore*, uint32_t*, const void*, size_t
);
size_t FindUltraPreparedMatches(
  MatchState*, SequenceStore*, uint32_t*, const void*, size_t
);

namespace {
using namespace block_detail;

size_t MinimumGain(size_t size, unsigned strategy) {
  const unsigned scale = strategy > 7 ? strategy : 7;
  return (size >> (scale - 1)) + 2;
}

void StoreLastLiterals(SequenceStore* store, const void* source, size_t size) {
  __builtin_memcpy(store->literals, source, size);
  store->literals += size;
}

size_t CompressEntropy(
  const SequenceStore* store, const BlockCompressionState* previous,
  BlockCompressionState* next, const BlockCompressionParameters* parameters,
  void* destination, size_t capacity, void* workspace, int bmi2
) {
  const size_t count = store->sequences - store->sequences_start;
  const size_t literal_size = store->literals - store->literals_start;
  const unsigned strategy = parameters->match.strategy;
  const bool suspect = !count || literal_size / count >= 20;
  const bool disabled = parameters->literal_mode == 2 ||
    (parameters->literal_mode != 1 && strategy == 1 &&
      parameters->match.target_length > 0);
  auto* counts = static_cast<unsigned*>(workspace);
  void* entropy_workspace = counts + 53;
  auto* start = static_cast<uint8_t*>(destination);
  uint8_t* end = start + capacity;
  const size_t literals = CompressLiterals(
    start, capacity, store->literals_start, literal_size, entropy_workspace,
    8708, &previous->literals, &next->literals, strategy, disabled, suspect,
    bmi2
  );

  if (IsError(literals)) {
    return literals;
  }

  uint8_t* output = start + literals;

  if (end - output < 4) {
    return size_t(-70);
  }

  if (count < 128) {
    *output++ = count;
  }
  else if (count < 32512) {
    *output++ = (count >> 8) + 128;
    *output++ = count;
  }
  else {
    *output++ = 255;
    Write<uint16_t>(output, count - 32512);
    output += 2;
  }

  if (!count) {
    __builtin_memcpy(&next->sequences, &previous->sequences, 3552);
    return output - start;
  }

  uint8_t* header = output++;
  SequenceEncodingStatistics statistics;
  BuildSequenceStatistics(
    &statistics, store, count, &previous->sequences, &next->sequences,
    output, end, strategy, counts, entropy_workspace, 8708
  );

  if (IsError(statistics.size)) {
    return statistics.size;
  }

  *header = (statistics.literal_type << 6) + (statistics.offset_type << 4) +
    (statistics.match_type << 2);
  output += statistics.size;
  const size_t encoded = EncodeSequences(
    output, end - output, next->sequences.match_lengths, store->match_codes,
    next->sequences.offsets, store->offset_codes,
    next->sequences.literal_lengths, store->literal_codes,
    store->sequences_start, count, statistics.long_offsets
  );

  if (IsError(encoded)) {
    return encoded;
  }

  if (statistics.last_count_size && statistics.last_count_size + encoded < 4) {
    return 0;
  }

  return output + encoded - start;
}

}

BlockParser SelectBlockParser(
  unsigned strategy, unsigned row_match_finder, unsigned dictionary_mode
) {
  static const BlockParser normal[4][10] = {
    {FindFastMatches, FindFastMatches, FindDoubleFastMatches,
      FindGreedyMatches, FindLazyMatches, FindLazy2Matches,
      FindBinaryTreeMatches, FindOptimalMatches, FindUltraMatches,
      FindUltra2Matches},
    {FindFastExternalDictionaryMatches, FindFastExternalDictionaryMatches,
      FindDoubleFastExternalDictionaryMatches, FindGreedyExternalChainMatches,
      FindLazyExternalChainMatches, FindLazy2ExternalChainMatches,
      FindBinaryTreeExternalMatches, FindOptimalExternalMatches,
      FindUltraExternalMatches, FindUltraExternalMatches},
    {FindFastDictionaryMatches, FindFastDictionaryMatches,
      FindDoubleFastDictionaryMatches, FindGreedyPreparedChainMatches,
      FindLazyPreparedChainMatches, FindLazy2PreparedChainMatches,
      FindBinaryTreePreparedMatches, FindOptimalPreparedMatches,
      FindUltraPreparedMatches, FindUltraPreparedMatches},
    {nullptr, nullptr, nullptr, FindGreedyDedicatedChainMatches,
      FindLazyDedicatedChainMatches, FindLazy2DedicatedChainMatches,
      nullptr, nullptr, nullptr, nullptr}
  };
  static const BlockParser row[4][3] = {
    {FindGreedyRowMatches, FindLazyRowMatches, FindLazy2RowMatches},
    {FindGreedyExternalRowMatches, FindLazyExternalRowMatches,
      FindLazy2ExternalRowMatches},
    {FindGreedyDictionaryRowMatches, FindLazyDictionaryRowMatches,
      FindLazy2DictionaryRowMatches},
    {FindGreedyDedicatedRowMatches, FindLazyDedicatedRowMatches,
      FindLazy2DedicatedRowMatches}
  };

  if (row_match_finder == 1 && strategy - 3 <= 2) {
    return row[dictionary_mode][strategy - 3];
  }

  return normal[dictionary_mode][strategy];
}

size_t WriteRawLiterals(
  void* destination, size_t capacity, const void* source, size_t size
) {
  auto* output = static_cast<uint8_t*>(destination);
  const unsigned header = 1 + (size > 31) + (size > 4095);

  if (size + header > capacity) {
    return size_t(-70);
  }

  if (header == 3) {
    Write<uint32_t>(output, (size << 4) | 12);
  }
  else if (header == 2) {
    Write<uint16_t>(output, (size << 4) | 4);
  }
  else {
    *output = size << 3;
  }

  __builtin_memcpy(output + header, source, size);
  return size + header;
}

size_t WriteRunLengthLiterals(
  void* destination, size_t, const void* source, size_t size
) {
  auto* output = static_cast<uint8_t*>(destination);
  const unsigned header = 1 + (size > 31) + (size > 4095);

  if (header == 3) {
    Write<uint32_t>(output, (size << 4) | 13);
  }
  else if (header == 2) {
    Write<uint16_t>(output, (size << 4) | 5);
  }
  else {
    *output = (size << 3) | 1;
  }

  output[header] = *static_cast<const uint8_t*>(source);
  return header + 1;
}

size_t CompressLiterals(
  void* destination, size_t capacity, const void* source, size_t size,
  void* workspace, size_t workspace_size,
  const LiteralCompressionTable* previous, LiteralCompressionTable* next,
  unsigned strategy, int disabled, int suspect_incompressible, int bmi2
) {
  __builtin_memcpy(next, previous, sizeof(*next));
  const unsigned shift = 9 - strategy < 3 ? 9 - strategy : 3;
  const size_t minimum = previous->repeat_mode == 2 ? 6 : size_t{8} << shift;

  if (disabled || size < minimum) {
    return WriteRawLiterals(destination, capacity, source, size);
  }

  const unsigned header = 3 + (size >= 1024) + (size >= 16384);

  if (capacity <= header) {
    return size_t(-70);
  }

  auto* output = static_cast<uint8_t*>(destination);
  unsigned repeat = previous->repeat_mode;
  const bool single = size < 256 || (repeat == 2 && header == 3);
  const int flags = (bmi2 != 0) | ((strategy < 4 && size <= 1024) ? 4 : 0) |
    (strategy >= 8 ? 2 : 0) | (suspect_incompressible ? 8 : 0);
  const auto compress = single ? CompressHuffman1X : CompressHuffman4X;
  const size_t encoded = compress(
    output + header, capacity - header, source, size, 255, 11, workspace,
    workspace_size, next->table, &repeat, flags
  );

  if (!encoded || IsError(encoded) ||
      encoded >= size - MinimumGain(size, strategy)) {
    __builtin_memcpy(next, previous, sizeof(*next));
    return WriteRawLiterals(destination, capacity, source, size);
  }

  if (encoded == 1 && (size >= 8 || IsRunLengthBlock(source, size))) {
    __builtin_memcpy(next, previous, sizeof(*next));
    return WriteRunLengthLiterals(destination, capacity, source, size);
  }

  const unsigned type = repeat ? 3 : 2;

  if (!repeat) {
    next->repeat_mode = 1;
  }

  if (header == 3) {
    const uint32_t value = type + (!single << 2) + (size << 4) +
      (encoded << 14);
    Write<uint16_t>(output, value);
    output[2] = value >> 16;
  }
  else if (header == 4) {
    Write<uint32_t>(output, type + 8 + (size << 4) + (encoded << 18));
  }
  else {
    Write<uint32_t>(output, type + 12 + (size << 4) + (encoded << 22));
    output[4] = encoded >> 10;
  }

  return header + encoded;
}

size_t CompressSequenceStore(
  const SequenceStore* store, const BlockCompressionState* previous,
  BlockCompressionState* next, const BlockCompressionParameters* parameters,
  void* destination, size_t capacity, size_t source_size, void* workspace,
  int bmi2
) {
  const size_t size = CompressEntropy(
    store, previous, next, parameters, destination, capacity, workspace, bmi2
  );

  if (!size || (size == size_t(-70) && source_size <= capacity)) {
    return 0;
  }

  if (IsError(size)) {
    return size;
  }

  return size >= source_size - MinimumGain(source_size,
    parameters->match.strategy) ? 0 : size;
}

int IsRunLengthBlock(const void* source, size_t size) {
  const auto* input = static_cast<const uint8_t*>(source);

  for (size_t i = 1; i < size; ++i) {
    if (input[i] != input[0]) {
      return 0;
    }
  }

  return 1;
}

size_t CollectBlockSequences(
  SequenceCollector* collector, const SequenceStore* store,
  const uint32_t repeated_offsets[3]
) {
  const size_t count = store->sequences - store->sequences_start;

  if (count + 1 > collector->capacity - collector->index) {
    return size_t(-70);
  }

  auto* output = collector->sequences + collector->index;
  uint32_t rep[3];
  __builtin_memcpy(rep, repeated_offsets, sizeof(rep));
  uint32_t literals = 0;

  for (size_t i = 0; i < count; ++i) {
    const MatchSequence& sequence = store->sequences_start[i];
    uint32_t length = sequence.literal_length;
    uint32_t match = sequence.match_length_base + 3;

    if (i == store->long_length_position) {
      length += store->long_length_type == LongSequenceLength::Literal
        ? 65536 : 0;
      match += store->long_length_type == LongSequenceLength::Match
        ? 65536 : 0;
    }

    const uint32_t base = sequence.offset_base;
    uint32_t offset;

    if (base > 3) {
      offset = base - 3;
    }
    else if (length) {
      offset = rep[base - 1];
    }
    else {
      offset = base == 3 ? rep[0] - 1 : rep[base];
    }

    output[i] = {offset, length, match, base <= 3 ? base : 0};
    UpdateRepeatedOffsets(rep, base, sequence.literal_length == 0);
    literals += length;
  }

  output[count].offset = 0;
  output[count].literal_length = store->literals - store->literals_start -
    literals;
  output[count].match_length = 0;
  collector->index += count + 1;
  return 0;
}

size_t CopyExternalSequences(
  BlockCompressionContext* context, SequencePosition* position,
  const ExternalSequence* sequences, size_t count, const void* source,
  size_t source_size, unsigned repeat_search
) {
  const auto* input = static_cast<const uint8_t*>(source);
  const uint8_t* end = input + source_size;
  const unsigned start = position->index;
  unsigned index = start;
  uint32_t rep[3];
  __builtin_memcpy(rep, context->previous->repeated_offsets, sizeof(rep));
  uint32_t dictionary_size = 0;

  if (context->prepared_dictionary) {
    const auto* dictionary = static_cast<const uint8_t*>(
      context->prepared_dictionary);
    dictionary_size = Read<uint32_t>(dictionary + 8);
  }
  else if (context->prefix_dictionary) {
    dictionary_size = context->prefix_size;
  }

  for (; index < count; ++index) {
    const ExternalSequence& sequence = sequences[index];

    if (!sequence.match_length && !sequence.offset) {
      break;
    }

    const unsigned empty = sequence.literal_length == 0;
    uint32_t base = sequence.offset + 3;

    if (repeat_search != 2) {
      if (!empty && sequence.offset == rep[0]) {
        base = 1;
      }
      else if (sequence.offset == rep[1]) {
        base = 2 - empty;
      }
      else if (sequence.offset == rep[2]) {
        base = 3 - empty;
      }
      else if (empty && sequence.offset == rep[0] - 1) {
        base = 3;
      }

      UpdateRepeatedOffsets(rep, base, empty);
    }

    const auto& parameters = context->parameters;

    if (parameters.validate_sequences) {
      position->source_position += sequence.literal_length +
        sequence.match_length;
      const uint32_t window = uint32_t{1} << parameters.match.window_log;
      const size_t bound = position->source_position > window ? window :
        position->source_position + dictionary_size;
      const unsigned minimum = parameters.match.minimum_match == 3 ||
        parameters.producer ? 3 : 4;

      if (base > bound + 3 || sequence.match_length < minimum) {
        return size_t(-107);
      }
    }

    if (index - start >= context->sequences.sequence_capacity) {
      return size_t(-107);
    }

    StoreSequence(&context->sequences, sequence.literal_length, input, end,
      base, sequence.match_length);
    input += sequence.literal_length + sequence.match_length;
  }

  if (repeat_search == 2 && index != start) {
    for (unsigned i = start; i < index; ++i) {
      rep[2] = rep[1];
      rep[1] = rep[0];
      rep[0] = sequences[i].offset;
    }
  }

  __builtin_memcpy(context->next->repeated_offsets, rep, sizeof(rep));
  const size_t last_literals = sequences[index].literal_length;

  if (last_literals) {
    StoreLastLiterals(&context->sequences, input, last_literals);
    input += last_literals;
    position->source_position += last_literals;
  }

  if (input != end) {
    return size_t(-107);
  }

  position->index = index + 1;
  return 0;
}

size_t BuildSequenceStore(
  BlockCompressionContext* context, const void* source, size_t size
) {
  const auto& parameters = context->parameters;
  auto* state = &context->match;

  if (size <= 6) {
    if (parameters.match.strategy >= 7) {
      AdvanceRawSequencePosition(&context->external_sequences, size);
    }
    else {
      SkipRawSequences(&context->external_sequences, size,
        parameters.match.minimum_match);
    }

    return 1;
  }

  auto* store = &context->sequences;
  store->sequences = store->sequences_start;
  store->literals = store->literals_start;
  store->long_length_type = LongSequenceLength::None;
  auto* state_bytes = reinterpret_cast<uint8_t*>(state);
  Write<const BlockCompressionState*>(state_bytes + 232, context->previous);
  Write<unsigned>(state_bytes + 240, parameters.literal_mode);
  const auto* input = static_cast<const uint8_t*>(source);
  const uint32_t current = input - state->window.base;
  uint32_t& next_update = NextToUpdate(state);

  if (current > next_update + 384) {
    const uint32_t gap = current - next_update - 384;
    next_update = current - (gap < 192 ? gap : 192);
  }

  const unsigned dictionary = DictionaryMode(state);
  __builtin_memcpy(context->next->repeated_offsets,
    context->previous->repeated_offsets, 12);
  size_t last_literals;

  if (context->external_sequences.position < context->external_sequences.size
      || parameters.long_distance.enabled == 1) {
    if (parameters.producer) {
      return size_t(-41);
    }

    RawSequenceStore generated = {
      context->long_distance_sequences, 0, 0, 0,
      context->long_distance_capacity
    };
    RawSequenceStore* raw = &context->external_sequences;

    if (raw->position >= raw->size) {
      const size_t result = GenerateLongDistanceSequences(
        &context->long_distance, &generated, &parameters.long_distance,
        source, size
      );

      if (IsError(result)) {
        return result;
      }

      raw = &generated;
    }

    last_literals = MergeLongDistanceSequences(
      raw, state, store, context->next->repeated_offsets,
      parameters.row_match_finder, source, size
    );
  }
  else {
    if (parameters.producer) {
      auto* external = context->producer_sequences;
      size_t count = parameters.producer(parameters.producer_state, external,
        context->producer_capacity, source, size, nullptr, 0,
        parameters.compression_level,
        size_t{1} << parameters.match.window_log);
      size_t result = 0;

      if (!count || count > context->producer_capacity) {
        result = size_t(-106);
      }
      else if (external[count - 1].offset ||
               external[count - 1].match_length) {
        if (count == context->producer_capacity) {
          result = size_t(-106);
        }
        else {
          external[count++] = {};
        }
      }

      if (!result) {
        size_t literal_sum = 0;
        size_t match_sum = 0;

        for (size_t i = 0; i < count; ++i) {
          literal_sum += external[i].literal_length;
          match_sum += external[i].match_length;
        }

        if (literal_sum + match_sum > size) {
          return size_t(-107);
        }

        SequencePosition position = {};
        result = CopyExternalSequences(context, &position, external, count,
          source, size, parameters.external_repeat_search);

        if (IsError(result)) {
          return result;
        }

        state->long_distance_sequences = nullptr;
        return 0;
      }

      if (!parameters.producer_fallback) {
        return result;
      }
    }

    state->long_distance_sequences = nullptr;
    const BlockParser parser = SelectBlockParser(parameters.match.strategy,
      parameters.row_match_finder, dictionary);
    last_literals = parser(state, store, context->next->repeated_offsets,
      source, size);
  }

  StoreLastLiterals(store, input + size - last_literals, last_literals);
  return 0;
}

size_t CompressBlock(
  BlockCompressionContext* context, void* destination, size_t capacity,
  const void* source, size_t size, unsigned frame
) {
  const size_t built = BuildSequenceStore(context, source, size);

  if (IsError(built)) {
    return built;
  }

  size_t encoded = 0;

  if (built == 1) {
    if (context->collector.enabled) {
      return size_t(-106);
    }
  }
  else if (context->collector.enabled) {
    const size_t result = CollectBlockSequences(&context->collector,
      &context->sequences, context->previous->repeated_offsets);

    if (IsError(result)) {
      return result;
    }

    auto* previous = context->previous;
    context->previous = context->next;
    context->next = previous;
    return 0;
  }
  else {
    encoded = CompressSequenceStore(&context->sequences, context->previous,
      context->next, &context->parameters, destination, capacity, size,
      context->entropy_workspace, context->bmi2);

    if (frame && !context->first_block && encoded < 25 &&
        IsRunLengthBlock(source, size)) {
      encoded = 1;
      *static_cast<uint8_t*>(destination) =
        *static_cast<const uint8_t*>(source);
    }
  }

  if (!IsError(encoded) && encoded > 1) {
    auto* previous = context->previous;
    context->previous = context->next;
    context->next = previous;
  }

  if (context->previous->sequences.offset_repeat == 2) {
    context->previous->sequences.offset_repeat = 1;
  }

  return encoded;
}

}
