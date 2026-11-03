/*
  Adapted from Zstandard under the BSD license.
  Copyright Meta Platforms, Inc. and affiliates. All rights reserved.
  Original license: https://github.com/facebook/zstd/blob/v1.5.6/LICENSE
  Full license text: include/compression/zstd_bit_reader.hpp.
*/

#include "compression/zstd_frame_encoder_internal.hpp"

namespace fw::compression {
namespace frame_detail {

extern void (*CompressionTraceEnd)(uint64_t, const FrameTrace*);

}
namespace {

using namespace frame_detail;

bool UpdateWindow(
  MatchWindow* window, const void* source, size_t size, bool force
) {
  uintptr_t input = reinterpret_cast<uintptr_t>(source);
  uintptr_t next = reinterpret_cast<uintptr_t>(window->next_source);
  uintptr_t base = reinterpret_cast<uintptr_t>(window->base);
  bool contiguous = !force && input == next;
  if (!contiguous) {
    window->low_limit = window->dictionary_limit;
    window->dictionary_limit = unsigned(next - base);
    window->dictionary_base = window->base;
    window->base = reinterpret_cast<const uint8_t*>(
      input - window->dictionary_limit
    );
    if (window->dictionary_limit - window->low_limit < 8) {
      window->low_limit = window->dictionary_limit;
    }
  }
  window->next_source = reinterpret_cast<const uint8_t*>(input + size);
  uintptr_t dictionary = reinterpret_cast<uintptr_t>(window->dictionary_base);
  if (input + size > dictionary + window->low_limit &&
      input < dictionary + window->dictionary_limit) {
    size_t limit = input + size - dictionary;
    window->low_limit = limit < window->dictionary_limit ?
      unsigned(limit) : window->dictionary_limit;
  }
  return contiguous;
}

void CheckDictionary(MatchState* state, const void* input, unsigned distance) {
  unsigned end = unsigned(reinterpret_cast<uintptr_t>(input) -
    reinterpret_cast<uintptr_t>(state->window.base));
  if (state->loaded_dictionary_end + distance < end ||
      state->loaded_dictionary_end != state->window.dictionary_limit) {
    state->loaded_dictionary_end = 0;
    state->dictionary = nullptr;
  }
}

void EnforceDistance(MatchState* state, const void* input, unsigned distance) {
  unsigned current = unsigned(reinterpret_cast<uintptr_t>(input) -
    reinterpret_cast<uintptr_t>(state->window.base));
  if (state->loaded_dictionary_end + distance < current) {
    unsigned limit = current - distance;
    if (state->window.low_limit < limit) {
      state->window.low_limit = limit;
    }
    if (state->window.dictionary_limit < state->window.low_limit) {
      state->window.dictionary_limit = state->window.low_limit;
    }
    state->loaded_dictionary_end = 0;
    state->dictionary = nullptr;
  }
  unsigned& next = block_detail::NextToUpdate(state);
  if (next < state->window.low_limit) {
    next = state->window.low_limit;
  }
}

size_t CompressSplitBlock(
  BlockCompressionContext* context, void* destination, size_t capacity,
  const void* source, size_t source_size, unsigned last
) {
  size_t built = BuildSequenceStore(context, source, source_size);
  if (IsError(built)) {
    return built;
  }
  if (built == 1) {
    if (context->previous->sequences.offset_repeat == 2) {
      context->previous->sequences.offset_repeat = 1;
    }
    if (context->collector.enabled) {
      return size_t(-106);
    }
    return RawBlock(destination, capacity, source, source_size, last);
  }
  auto& state = Splits(context);
  unsigned count = unsigned(context->sequences.sequences -
    context->sequences.sequences_start);
  SequenceSplits splits{state.partitions, 0};
  if (count > 4) {
    FindSequenceSplits(&splits, 0, count, context, &context->sequences);
    splits.positions[splits.count] = count;
  }
  uint32_t decoder[3], compressor[3];
  __builtin_memcpy(decoder, context->previous->repeated_offsets,
    sizeof(decoder));
  __builtin_memcpy(compressor, decoder, sizeof(compressor));
  __builtin_memset(&state.next, 0, sizeof(state.next));
  if (splits.count == 0) {
    return CompressSequencePartition(context, &context->sequences,
      decoder, compressor, destination, capacity, source, source_size,
      last, 0);
  }
  DeriveSequencePartition(&state.current, &context->sequences, 0,
    state.partitions[0]);
  auto* input = static_cast<const uint8_t*>(source);
  auto* output = static_cast<uint8_t*>(destination);
  size_t consumed = 0;
  size_t result = 0;
  for (size_t i = 0; i <= splits.count; ++i) {
    size_t bytes = LiteralBytes(&state.current) + MatchBytes(&state.current);
    consumed += bytes;
    unsigned partition_last = 0;
    if (i == splits.count) {
      bytes += source_size - consumed;
      partition_last = last;
    }
    else {
      DeriveSequencePartition(&state.next, &context->sequences,
        state.partitions[i], state.partitions[i + 1]);
    }
    size_t encoded = CompressSequencePartition(context, &state.current,
      decoder, compressor, output, capacity, input, bytes,
      partition_last, 1);
    if (IsError(encoded)) {
      return encoded;
    }
    input += bytes;
    output += encoded;
    capacity -= encoded;
    result += encoded;
    state.current = state.next;
  }
  __builtin_memcpy(context->previous->repeated_offsets, decoder,
    sizeof(decoder));
  return result;
}

size_t CompressTargetBlock(
  BlockCompressionContext* context, void* destination, size_t capacity,
  const void* source, size_t size, unsigned last
) {
  size_t built = BuildSequenceStore(context, source, size);
  if (IsError(built)) {
    return built;
  }
  size_t result = 0;
  bool accepted = false;
  if (built == 0) {
    if (!context->first_block &&
        context->sequences.sequences - context->sequences.sequences_start < 4 &&
        context->sequences.literals - context->sequences.literals_start < 10 &&
        IsRunLengthBlock(source, size)) {
      Write24(destination, uint32_t((size << 3) | last | 2));
      static_cast<uint8_t*>(destination)[3] =
        *static_cast<const uint8_t*>(source);
      result = 4;
      accepted = true;
    }
    else {
      result = CompressSuperBlock(context, destination, capacity, source,
        size, last);
      if (result != size_t(-70)) {
        if (IsError(result)) {
          return result;
        }
        unsigned strategy = context->parameters.match.strategy;
        unsigned shift = (strategy > 7 ? strategy : 7) - 1;
        if (result && result < size - (size >> shift) + 1) {
          ConfirmBlockState(context);
          accepted = true;
        }
      }
    }
  }
  if (!accepted) {
    result = RawBlock(destination, capacity, source, size, last);
    if (IsError(result)) {
      return result;
    }
  }
  if (context->previous->sequences.offset_repeat == 2) {
    context->previous->sequences.offset_repeat = 1;
  }
  return result;
}

}

size_t ContinueFrameCompression(
  BlockCompressionContext* context, void* destination, size_t capacity,
  const void* source, size_t source_size, unsigned frame,
  unsigned last_chunk
) {
  auto& prefix = Prefix(context);
  if (prefix.stage == 0) {
    return size_t(-60);
  }
  auto* output = static_cast<uint8_t*>(destination);
  auto* input = static_cast<const uint8_t*>(source);
  size_t header = 0;
  if (frame && prefix.stage == 1) {
    header = WriteCompressionFrameHeader(output, capacity,
      &context->parameters, prefix.pledged_size_plus_one - 1,
      prefix.dictionary_id);
    if (IsError(header)) {
      return header;
    }
    output += header;
    capacity -= header;
    prefix.stage = 2;
  }
  if (source_size == 0) {
    return header;
  }
  auto* match = &context->match;
  auto* match_bytes = reinterpret_cast<uint8_t*>(match);
  unsigned force = Read<unsigned>(match_bytes + 136);
  if (!UpdateWindow(&match->window, source, source_size, force != 0)) {
    Write<unsigned>(match_bytes + 136, 0);
    block_detail::NextToUpdate(match) = match->window.dictionary_limit;
  }
  if (context->parameters.long_distance.enabled == 1) {
    UpdateWindow(&context->long_distance.window, source, source_size, false);
  }
  size_t encoded = 0;
  if (!frame) {
    CorrectMatchIndexOverflow(match, &prefix.workspace,
      &context->parameters, input, input + source_size);
    encoded = CompressBlock(context, output, capacity, input, source_size, 0);
    if (IsError(encoded)) {
      return encoded;
    }
  }
  else {
    if (ChecksumFlag(&context->parameters)) {
      UpdateChecksum(&prefix.checksum, input, source_size);
    }
    size_t block_size = prefix.block_size;
    size_t remaining = source_size;
    unsigned distance = 1u << context->parameters.match.window_log;
    auto* start = output;
    while (remaining) {
      unsigned last = block_size >= remaining ? last_chunk : 0;
      if (capacity < 6) {
        return size_t(-70);
      }
      if (remaining < block_size) {
        block_size = remaining;
      }
      CorrectMatchIndexOverflow(match, &prefix.workspace,
        &context->parameters, input, input + block_size);
      CheckDictionary(match, input + block_size, distance);
      EnforceDistance(match, input, distance);
      size_t size;
      if (TargetBlockSize(&context->parameters)) {
        size = CompressTargetBlock(context, output, capacity, input,
          block_size, last);
      }
      else if (context->parameters.block_splitter == 1) {
        size = CompressSplitBlock(context, output, capacity, input,
          block_size, last);
      }
      else {
        size = CompressBlock(context, output + 3, capacity - 3, input,
          block_size, 1);
        if (!IsError(size)) {
          if (size == 0) {
            size = RawBlock(output, capacity, input, block_size, last);
          }
          else {
            uint32_t block_header = size == 1 ?
              uint32_t((block_size << 3) | last | 2) :
              uint32_t((size << 3) | last | 4);
            Write24(output, block_header);
            size += 3;
          }
        }
      }
      if (IsError(size)) {
        return size;
      }
      input += block_size;
      remaining -= block_size;
      output += size;
      capacity -= size;
      context->first_block = 0;
    }
    if (last_chunk && output > start) {
      prefix.stage = 3;
    }
    encoded = size_t(output - start);
  }
  prefix.consumed_size += source_size;
  prefix.produced_size += encoded + header;
  if (prefix.pledged_size_plus_one &&
      prefix.consumed_size + 1 > prefix.pledged_size_plus_one) {
    return size_t(-72);
  }
  return encoded + header;
}

size_t FinishFrameCompression(
  BlockCompressionContext* context, void* destination, size_t capacity,
  const void* source, size_t source_size
) {
  size_t compressed = ContinueFrameCompression(context, destination, capacity,
    source, source_size, 1, 1);
  if (IsError(compressed)) {
    return compressed;
  }
  auto& prefix = Prefix(context);
  if (prefix.stage == 0) {
    return size_t(-60);
  }
  auto* start = static_cast<uint8_t*>(destination) + compressed;
  auto* output = start;
  capacity -= compressed;
  if (prefix.stage == 1) {
    size_t header = WriteCompressionFrameHeader(output, capacity,
      &context->parameters, 0, 0);
    if (IsError(header)) {
      return header;
    }
    capacity -= header;
    output += header;
    prefix.stage = 2;
  }
  if (prefix.stage != 3) {
    if (capacity < 3) {
      return size_t(-70);
    }
    Write24(output, 1);
    output += 3;
    capacity -= 3;
  }
  if (ChecksumFlag(&context->parameters)) {
    if (capacity < 4) {
      return size_t(-70);
    }
    Write<uint32_t>(output, uint32_t(DigestChecksum(&prefix.checksum)));
    output += 4;
  }
  size_t epilogue = output - start;
  prefix.stage = 0;
  if (prefix.pledged_size_plus_one &&
      prefix.pledged_size_plus_one != prefix.consumed_size + 1) {
    return size_t(-72);
  }
  uint64_t& trace_context = ContextField<uint64_t>(context, 0xe90);
  if (CompressionTraceEnd && trace_context) {
    FrameTrace trace{};
    trace.version = 10506;
    trace.streaming = ContextField<size_t>(context, 0xdd8) != 0 ||
      ContextField<size_t>(context, 0xe00) != 0 ||
      Read<int>(context->parameters.threading_parameters) > 0;
    trace.dictionary_id = prefix.dictionary_id;
    trace.dictionary_size = prefix.dictionary_size;
    trace.uncompressed_size = prefix.consumed_size;
    trace.compressed_size = prefix.produced_size + epilogue;
    trace.parameters = &context->parameters;
    trace.context = context;
    CompressionTraceEnd(trace_context, &trace);
  }
  trace_context = 0;
  return compressed + epilogue;
}

}
