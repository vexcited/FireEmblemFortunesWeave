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

size_t CompressPartitionLiterals(
  const LiteralCompressionTable* state, const HuffmanBlockMetadata* metadata,
  const uint8_t* literals, size_t size, uint8_t* destination, size_t capacity,
  int write_entropy, int* written
) {
  *written = 0;
  if (size == 0 || metadata->type == 0) {
    return WriteRawLiterals(destination, capacity, literals, size);
  }
  if (metadata->type == 1) {
    return WriteRunLengthLiterals(destination, capacity, literals, size);
  }
  size_t reserve = write_entropy ? 200 : 0;
  size_t header = 3 + (size >= 1024 - reserve) + (size >= 16384 - reserve);
  unsigned type = write_entropy ? metadata->type : 3;
  auto* output = destination + header;
  size_t compressed = 0;
  if (write_entropy && metadata->type == 2) {
    __builtin_memcpy(output, metadata->description, metadata->description_size);
    output += metadata->description_size;
    compressed += metadata->description_size;
  }
  size_t available = size_t(destination + capacity - output);
  size_t encoded = header == 3 ?
    CompressHuffman1XWithTable(
      output, available, literals, size, state->table) :
    CompressHuffman4XWithTable(output, available, literals, size, state->table);
  if (encoded == 0 || IsError(encoded)) {
    return 0;
  }
  compressed += encoded;
  output += encoded;
  if ((!write_entropy && compressed >= size) ||
      header < 3 + (compressed >= 1024) + (compressed >= 16384)) {
    return WriteRawLiterals(destination, capacity, literals, size);
  }
  uint32_t value = type + (uint32_t(size) << 4);
  if (header == 3) {
    Write24(destination, value + (uint32_t(compressed) << 14));
  }
  else if (header == 4) {
    Write<uint32_t>(destination, value + 8 + (uint32_t(compressed) << 18));
  }
  else {
    Write<uint32_t>(destination, value + 12 + (uint32_t(compressed) << 22));
    destination[4] = uint8_t(compressed >> 10);
  }
  *written = 1;
  return output - destination;
}

size_t CompressPartitionSequences(
  const SequenceCompressionTables* state, const SequenceBlockMetadata* metadata,
  const MatchSequence* sequences, size_t count, const uint8_t* literal_codes,
  const uint8_t* match_codes, const uint8_t* offset_codes,
  const BlockCompressionParameters* parameters, uint8_t* destination,
  size_t capacity, int write_entropy, int* written
) {
  *written = 0;
  if (int64_t(capacity) < 4) {
    return size_t(-70);
  }
  auto* output = destination;
  if (count < 128) {
    *output++ = uint8_t(count);
  }
  else if (count < 32512) {
    output[0] = uint8_t((count >> 8) + 128);
    output[1] = uint8_t(count);
    output += 2;
  }
  else {
    *output++ = 255;
    Write<uint16_t>(output, uint16_t(count - 32512));
    output += 2;
  }
  if (count == 0) {
    return output - destination;
  }
  auto* sequence_header = output++;
  if (write_entropy) {
    *sequence_header = uint8_t((metadata->literal_type << 6) +
      (metadata->offset_type << 4) + (metadata->match_type << 2));
    __builtin_memcpy(output, metadata->description, metadata->description_size);
    output += metadata->description_size;
  }
  else {
    *sequence_header = 0xfc;
  }
  size_t encoded = EncodeSequences(output, destination + capacity - output,
    state->match_lengths, match_codes, state->offsets, offset_codes,
    state->literal_lengths, literal_codes, sequences, count,
    parameters->match.window_log > 57);
  if (IsError(encoded)) {
    return encoded;
  }
  output += encoded;
  if (write_entropy && metadata->last_count_size &&
      metadata->last_count_size + encoded < 4) {
    return 0;
  }
  if (output - sequence_header < 4) {
    return 0;
  }
  *written = 1;
  return output - destination;
}

size_t PartitionSequenceCount(
  const MatchSequence* sequences, size_t count, size_t target,
  size_t literal_cost, size_t sequence_cost, bool first
) {
  size_t budget = (first ? 120 * 256 : 0) +
    sequences[0].literal_length * literal_cost + sequence_cost;
  if (budget > target) {
    return 1;
  }
  size_t input = sequences[0].literal_length +
    sequences[0].match_length_base + 3;
  size_t i = 1;
  for (; i < count; ++i) {
    budget += sequences[i].literal_length * literal_cost + sequence_cost;
    input += sequences[i].literal_length + sequences[i].match_length_base + 3;
    if (budget > target && budget < input * 256) {
      break;
    }
  }
  return i;
}

size_t SequenceLiteralLength(
  const SequenceStore* store, const MatchSequence* sequence
) {
  size_t length = sequence->literal_length;
  if (store->long_length_type == LongSequenceLength::Literal &&
      size_t(sequence - store->sequences_start) ==
      store->long_length_position) {
    length += 0x10000;
  }
  return length;
}

size_t SequenceMatchLength(
  const SequenceStore* store, const MatchSequence* sequence
) {
  size_t length = sequence->match_length_base + 3;
  if (store->long_length_type == LongSequenceLength::Match &&
      size_t(sequence - store->sequences_start) ==
      store->long_length_position) {
    length += 0x10000;
  }
  return length;
}

}

size_t CompressSuperBlockPartition(
  const BlockCompressionState* state, const BlockEntropyMetadata* metadata,
  const MatchSequence* sequences, size_t count, const uint8_t* literals,
  size_t literal_size, const uint8_t* literal_codes,
  const uint8_t* match_codes, const uint8_t* offset_codes,
  const BlockCompressionParameters* parameters, void* destination,
  size_t capacity, int bmi2, int write_literals, int write_sequences,
  int* literals_written, int* sequences_written, unsigned last_block
) {
  (void)bmi2;
  auto* start = static_cast<uint8_t*>(destination);
  auto* output = start + 3;
  size_t literals_size = CompressPartitionLiterals(&state->literals,
    &metadata->literals, literals, literal_size, output, capacity - 3,
    write_literals, literals_written);
  if (literals_size == 0 || IsError(literals_size)) {
    return literals_size;
  }
  output += literals_size;
  size_t sequences_size = CompressPartitionSequences(&state->sequences,
    &metadata->sequences, sequences, count, literal_codes, match_codes,
    offset_codes, parameters, output, start + capacity - output,
    write_sequences, sequences_written);
  if (sequences_size == 0 || IsError(sequences_size)) {
    return sequences_size;
  }
  output += sequences_size;
  Write24(start, last_block + 4 + (uint32_t(output - start - 3) << 3));
  return output - start;
}

size_t CompressSuperBlock(
  BlockCompressionContext* context, void* destination, size_t capacity,
  const void* source, size_t source_size, unsigned last_block
) {
  BlockEntropyMetadata metadata;
  auto* store = &context->sequences;
  size_t built = BuildBlockEntropyMetadata(store, context->previous,
    context->next, &context->parameters, &metadata, context->entropy_workspace,
    8920);
  if (IsError(built)) {
    return built;
  }
  auto* sequence = store->sequences_start;
  const auto* sequence_end = store->sequences;
  const auto* literals = store->literals_start;
  const auto* literals_end = store->literals;
  auto* input = static_cast<const uint8_t*>(source);
  const auto* input_end = input + source_size;
  auto* output = static_cast<uint8_t*>(destination);
  auto* output_start = output;
  auto* output_end = output + capacity;
  const auto* literal_codes = store->literal_codes;
  const auto* match_codes = store->match_codes;
  const auto* offset_codes = store->offset_codes;
  int write_literals = metadata.literals.type == 2;
  int write_sequences = 1;
  size_t count = sequence_end - sequence;
  size_t literal_count = literals_end - literals;
  if (count) {
    auto estimate = EstimateBlockSections(literals, literal_count,
      offset_codes, literal_codes, match_codes, count, context->next, &metadata,
      context->entropy_workspace, 8920, write_literals, true, true);
    size_t target = TargetBlockSize(&context->parameters);
    if (target < 1340) {
      target = 1340;
    }
    size_t literal_cost = literal_count ?
      estimate.literals * 256 / literal_count : 256;
    size_t sequence_cost = (estimate.total - estimate.literals) * 256 / count;
    size_t partitions = (estimate.total + target / 2) / target;
    if (partitions == 0) {
      partitions = 1;
    }
    size_t budget = estimate.total * 256 / partitions;
    if (estimate.total > source_size) {
      return 0;
    }
    for (size_t i = 0; i + 1 < partitions; ++i) {
      size_t partition_count = PartitionSequenceCount(sequence,
        sequence_end - sequence, budget, literal_cost, sequence_cost, i == 0);
      if (sequence + partition_count == sequence_end) {
        break;
      }
      size_t literal_size = 0;
      size_t match_size = 0;
      for (size_t n = 0; n < partition_count; ++n) {
        literal_size += SequenceLiteralLength(store, sequence + n);
        match_size += SequenceMatchLength(store, sequence + n);
      }
      int literals_written = 0;
      int sequences_written = 0;
      size_t encoded = CompressSuperBlockPartition(context->next, &metadata,
        sequence, partition_count, literals, literal_size, literal_codes,
        match_codes, offset_codes, &context->parameters, output,
        output_end - output, context->bmi2, write_literals, write_sequences,
        &literals_written, &sequences_written, 0);
      if (IsError(encoded)) {
        return encoded;
      }
      if (encoded > 0 && encoded < literal_size + match_size) {
        input += literal_size + match_size;
        literals += literal_size;
        output += encoded;
        sequence += partition_count;
        literal_codes += partition_count;
        match_codes += partition_count;
        offset_codes += partition_count;
        if (literals_written) {
          write_literals = 0;
        }
        if (sequences_written) {
          write_sequences = 0;
        }
      }
    }
  }
  size_t remaining_sequences = sequence_end - sequence;
  size_t remaining_literals = literals_end - literals;
  size_t remaining_matches = 0;
  for (size_t i = 0; i < remaining_sequences; ++i) {
    remaining_matches += SequenceMatchLength(store, sequence + i);
  }
  int literals_written = 0;
  int sequences_written = 0;
  size_t encoded = CompressSuperBlockPartition(context->next, &metadata,
    sequence, remaining_sequences, literals, remaining_literals, literal_codes,
    match_codes, offset_codes, &context->parameters, output,
    output_end - output, context->bmi2, write_literals, write_sequences,
    &literals_written, &sequences_written, last_block);
  if (IsError(encoded)) {
    return encoded;
  }
  if (encoded > 0 && encoded < remaining_literals + remaining_matches) {
    input += remaining_literals + remaining_matches;
    output += encoded;
    sequence += remaining_sequences;
    if (literals_written) {
      write_literals = 0;
    }
    if (sequences_written) {
      write_sequences = 0;
    }
  }
  if (write_literals) {
    __builtin_memcpy(&context->next->literals, &context->previous->literals,
      sizeof(context->next->literals));
  }
  const auto& types = metadata.sequences;
  if (write_sequences && (types.literal_type == 1 || types.literal_type == 2 ||
      types.offset_type == 1 || types.offset_type == 2 ||
      types.match_type == 1 || types.match_type == 2)) {
    return 0;
  }
  if (input < input_end) {
    size_t raw = RawBlock(output, output_end - output, input,
      input_end - input, last_block);
    if (IsError(raw)) {
      return raw;
    }
    output += raw;
    if (sequence < sequence_end) {
      uint32_t repeats[3];
      __builtin_memcpy(repeats, context->previous->repeated_offsets,
        sizeof(repeats));
      for (auto* current = store->sequences_start; current < sequence;
           ++current) {
        block_detail::UpdateRepeatedOffsets(repeats, current->offset_base,
          SequenceLiteralLength(store, current) == 0);
      }
      __builtin_memcpy(context->next->repeated_offsets, repeats,
        sizeof(repeats));
    }
  }
  return output - output_start;
}

}
