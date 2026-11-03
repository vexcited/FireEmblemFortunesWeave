/*
  Adapted from Zstandard under the BSD license.
  Copyright Meta Platforms, Inc. and affiliates. All rights reserved.
  Original license: https://github.com/facebook/zstd/blob/v1.5.6/LICENSE
  Full license text: include/compression/zstd_bit_reader.hpp.
*/

#include "compression/zstd_frame_encoder_internal.hpp"

namespace fw::compression {
namespace {

using namespace frame_detail;

unsigned ResolveRepeat(const uint32_t* repeats, unsigned base, bool empty) {
  unsigned index = base - 1 + empty;
  return index == 3 ? repeats[0] - 1 : repeats[index];
}

void ResolvePartitionOffsets(
  const SequenceStore* store, uint32_t* decoder, uint32_t* compressor
) {
  size_t count = unsigned(store->sequences - store->sequences_start);
  size_t long_literal = store->long_length_type == LongSequenceLength::Literal ?
    store->long_length_position : count;
  for (size_t i = 0; i < count; ++i) {
    auto& sequence = store->sequences_start[i];
    unsigned base = sequence.offset_base;
    bool empty = sequence.literal_length == 0 && i != long_literal;
    if (base >= 1 && base <= 3) {
      unsigned decoder_offset = ResolveRepeat(decoder, base, empty);
      unsigned compressor_offset = ResolveRepeat(compressor, base, empty);
      if (decoder_offset != compressor_offset) {
        sequence.offset_base = compressor_offset + 3;
      }
    }
    block_detail::UpdateRepeatedOffsets(decoder, sequence.offset_base, empty);
    block_detail::UpdateRepeatedOffsets(compressor, base, empty);
  }
}

}

void DeriveSequencePartition(
  SequenceStore* result, const SequenceStore* original, size_t start,
  size_t end
) {
  *result = *original;
  if (start) {
    result->sequences = original->sequences_start + start;
    result->literals_start += LiteralBytes(result);
  }
  if (original->long_length_type != LongSequenceLength::None) {
    if (original->long_length_position < start ||
        original->long_length_position > end) {
      result->long_length_type = LongSequenceLength::None;
    }
    else {
      result->long_length_position -= unsigned(start);
    }
  }
  result->sequences_start = original->sequences_start + start;
  result->sequences = original->sequences_start + end;
  if (end != size_t(original->sequences - original->sequences_start)) {
    result->literals = result->literals_start + LiteralBytes(result);
  }
  result->literal_codes += start;
  result->match_codes += start;
  result->offset_codes += start;
}

void FindSequenceSplits(
  SequenceSplits* splits, size_t start, size_t end,
  BlockCompressionContext* context, const SequenceStore* original
) {
  if (end - start < 300 || splits->count >= 196) {
    return;
  }
  auto& state = Splits(context);
  size_t middle = (start + end) / 2;
  DeriveSequencePartition(&state.full, original, start, end);
  DeriveSequencePartition(&state.first, original, start, middle);
  DeriveSequencePartition(&state.second, original, middle, end);
  size_t original_size = EstimateSequencePartition(&state.full, context);
  size_t first_size = EstimateSequencePartition(&state.first, context);
  size_t second_size = EstimateSequencePartition(&state.second, context);
  if (IsError(original_size) || IsError(first_size) || IsError(second_size)) {
    return;
  }
  if (first_size + second_size < original_size) {
    FindSequenceSplits(splits, start, middle, context, original);
    splits->positions[splits->count++] = unsigned(middle);
    FindSequenceSplits(splits, middle, end, context, original);
  }
}

size_t CompressSequencePartition(
  BlockCompressionContext* context, const SequenceStore* store,
  uint32_t* decoder_repeats, uint32_t* compressor_repeats,
  void* destination, size_t capacity, const void* source, size_t source_size,
  unsigned last_block, unsigned partition
) {
  uint32_t original_repeats[3];
  __builtin_memcpy(original_repeats, decoder_repeats, sizeof(original_repeats));
  if (partition) {
    ResolvePartitionOffsets(store, decoder_repeats, compressor_repeats);
  }
  if (capacity < 3) {
    return size_t(-70);
  }
  auto* output = static_cast<uint8_t*>(destination);
  size_t encoded = CompressSequenceStore(
    store, context->previous, context->next, &context->parameters,
    output + 3, capacity - 3, source_size, context->entropy_workspace,
    context->bmi2
  );
  if (IsError(encoded)) {
    return encoded;
  }
  if (!context->first_block && encoded < 25 &&
      IsRunLengthBlock(source, source_size)) {
    encoded = 1;
  }
  if (context->collector.enabled) {
    size_t result = CollectBlockSequences(&context->collector, store,
      original_repeats);
    if (IsError(result)) {
      return result;
    }
    ConfirmBlockState(context);
    return 0;
  }
  size_t result;
  if (encoded == 0) {
    result = RawBlock(destination, capacity, source, source_size, last_block);
    if (IsError(result)) {
      return result;
    }
    __builtin_memcpy(decoder_repeats, original_repeats,
      sizeof(original_repeats));
  }
  else if (encoded == 1) {
    if (capacity < 4) {
      return size_t(-70);
    }
    Write24(output, uint32_t((source_size << 3) | last_block | 2));
    output[3] = *static_cast<const uint8_t*>(source);
    result = 4;
    __builtin_memcpy(decoder_repeats, original_repeats,
      sizeof(original_repeats));
  }
  else {
    ConfirmBlockState(context);
    Write24(output, uint32_t((encoded << 3) | last_block | 4));
    result = encoded + 3;
  }
  if (context->previous->sequences.offset_repeat == 2) {
    context->previous->sequences.offset_repeat = 1;
  }
  return result;
}

}
