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

size_t BuildLiteralMetadata(
  const SequenceStore* store, const LiteralCompressionTable* previous,
  LiteralCompressionTable* next, const BlockCompressionParameters* parameters,
  HuffmanBlockMetadata* metadata, void* workspace, size_t workspace_size
) {
  __builtin_memcpy(next, previous, sizeof(*next));
  size_t size = store->literals - store->literals_start;
  unsigned mode = parameters->literal_mode;
  bool disabled = mode == 2 || (mode != 1 &&
    parameters->match.strategy == 1 && parameters->match.target_length);
  if (disabled || size <= (previous->repeat_mode == 2 ? 6u : 63u)) {
    metadata->type = 0;
    return 0;
  }
  auto* counts = static_cast<unsigned*>(workspace);
  unsigned maximum = 255;
  size_t largest = CountHuffmanSymbols(
    counts, &maximum, store->literals_start, size, workspace, workspace_size
  );
  if (IsError(largest)) {
    return largest;
  }
  if (largest == size) {
    metadata->type = 1;
    return 0;
  }
  if (largest <= (size >> 7) + 4) {
    metadata->type = 0;
    return 0;
  }
  unsigned repeat = previous->repeat_mode;
  if (repeat == 1 &&
      !ValidateHuffmanCompressionTable(previous->table, counts, maximum)) {
    repeat = 0;
  }
  __builtin_memset(next->table, 0, sizeof(next->table));
  auto* nodes = static_cast<uint8_t*>(workspace) + 1024;
  size_t nodes_size = workspace_size - 1024;
  unsigned bits = ChooseHuffmanTableLog(
    11, size, maximum, nodes, nodes_size, next->table, counts,
    parameters->match.strategy > 7 ? 2 : 0
  );
  size_t built = BuildHuffmanCompressionTable(
    next->table, counts, maximum, bits, nodes, nodes_size
  );
  if (IsError(built)) {
    return built;
  }
  size_t estimate = EstimateHuffmanSize(next->table, counts, maximum);
  size_t header = WriteHuffmanCompressionTable(
    metadata->description, sizeof(metadata->description), next->table,
    maximum, unsigned(built), nodes, nodes_size
  );
  if (repeat) {
    size_t previous_size = EstimateHuffmanSize(previous->table, counts,
      maximum);
    if (previous_size < size &&
        (previous_size <= header + estimate || header + 12 >= size)) {
      __builtin_memcpy(next, previous, sizeof(*next));
      metadata->type = 3;
      return 0;
    }
  }
  if (estimate + header >= size) {
    __builtin_memcpy(next, previous, sizeof(*next));
    metadata->type = 0;
    return 0;
  }
  metadata->type = 2;
  next->repeat_mode = 1;
  return header;
}

constexpr uint8_t LiteralBits[] = {
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  1, 1, 1, 1, 2, 2, 3, 3, 4, 6, 7, 8, 9, 10, 11, 12,
  13, 14, 15, 16,
};

constexpr uint8_t MatchBits[] = {
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  1, 1, 1, 1, 2, 2, 3, 3, 4, 4, 5, 7, 8, 9, 10, 11,
  12, 13, 14, 15, 16,
};

constexpr int16_t DefaultLiterals[] = {
  4, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1,
  2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 2, 1, 1, 1, 1, 1,
  -1, -1, -1, -1,
};

constexpr int16_t DefaultMatches[] = {
  1, 4, 3, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, -1, -1,
  -1, -1, -1, -1, -1,
};

constexpr int16_t DefaultOffsets[] = {
  1, 1, 1, 1, 1, 1, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, -1, -1, -1, -1, -1,
};

size_t EstimateSymbols(
  unsigned type, const uint8_t* codes, size_t count, unsigned maximum,
  const uint32_t* table, const uint8_t* bits, const int16_t* defaults,
  unsigned default_log, unsigned default_maximum, void* workspace,
  size_t workspace_size, bool check_default
) {
  auto* counts = static_cast<unsigned*>(workspace);
  CountSequenceSymbols(counts, &maximum, codes, count, workspace,
    workspace_size);
  size_t cost = 0;
  if (type == 0) {
    cost = check_default && maximum > default_maximum ? size_t(-1) :
      CrossEntropyCost(defaults, default_log, counts, maximum);
  }
  else if (type == 2 || type == 3) {
    cost = FseBitCost(table, counts, maximum);
  }
  if (IsError(cost)) {
    return count * 10;
  }
  for (size_t i = 0; i < count; ++i) {
    cost += bits ? bits[codes[i]] : codes[i];
  }
  return cost >> 3;
}

}

size_t BuildBlockEntropyMetadata(
  const SequenceStore* store, const BlockCompressionState* previous,
  BlockCompressionState* next, const BlockCompressionParameters* parameters,
  BlockEntropyMetadata* metadata, void* workspace, size_t workspace_size
) {
  metadata->literals.description_size = BuildLiteralMetadata(
    store, &previous->literals, &next->literals, parameters,
    &metadata->literals, workspace, workspace_size
  );
  if (IsError(metadata->literals.description_size)) {
    return metadata->literals.description_size;
  }
  size_t count = store->sequences - store->sequences_start;
  SequenceEncodingStatistics statistics{};
  if (count) {
    BuildSequenceStatistics(
      &statistics, store, count, &previous->sequences, &next->sequences,
      metadata->sequences.description,
      metadata->sequences.description + sizeof(metadata->sequences.description),
      parameters->match.strategy, static_cast<unsigned*>(workspace),
      static_cast<uint8_t*>(workspace) + 212, workspace_size - 212
    );
  }
  else {
    next->sequences.literal_repeat = 0;
    next->sequences.offset_repeat = 0;
    next->sequences.match_repeat = 0;
  }
  metadata->sequences.description_size = statistics.size;
  if (IsError(statistics.size)) {
    return statistics.size;
  }
  metadata->sequences.literal_type = statistics.literal_type;
  metadata->sequences.offset_type = statistics.offset_type;
  metadata->sequences.match_type = statistics.match_type;
  metadata->sequences.last_count_size = statistics.last_count_size;
  return 0;
}

namespace frame_detail {

BlockSizeEstimate EstimateBlockSections(
  const uint8_t* literals, size_t literal_size, const uint8_t* offset_codes,
  const uint8_t* literal_codes, const uint8_t* match_codes, size_t count,
  const BlockCompressionState* state, const BlockEntropyMetadata* metadata,
  void* workspace, size_t workspace_size, bool literal_entropy,
  bool sequence_entropy, bool superblock
) {
  size_t literals_estimate = literal_size;
  unsigned type = metadata->literals.type;
  if (type == 1) {
    literals_estimate = 1;
  }
  else if (type == 2 || type == 3) {
    unsigned maximum = 255;
    auto* counts = static_cast<unsigned*>(workspace);
    size_t largest = CountHuffmanSymbols(counts, &maximum, literals,
      literal_size, workspace, workspace_size);
    if (!IsError(largest)) {
      literals_estimate = EstimateHuffmanSize(state->literals.table, counts,
        maximum) + 3;
      if (literal_entropy) {
        literals_estimate += metadata->literals.description_size;
      }
      if (!superblock) {
        literals_estimate += (literal_size >= 1024) +
          (literal_size >= 16384) + (literal_size >= 256 ? 6 : 0);
      }
    }
  }
  else if (type != 0) {
    literals_estimate = 0;
  }
  size_t sequences = superblock ? 3 :
    2 + (count >= 128) + (count >= 32512);
  if (!superblock || count) {
    sequences += EstimateSymbols(metadata->sequences.offset_type,
      offset_codes, count, 31, state->sequences.offsets, nullptr,
      DefaultOffsets, 5, 28, workspace, workspace_size, superblock);
    sequences += EstimateSymbols(metadata->sequences.literal_type,
      literal_codes, count, 35, state->sequences.literal_lengths, LiteralBits,
      DefaultLiterals, 6, 35, workspace, workspace_size, superblock);
    sequences += EstimateSymbols(metadata->sequences.match_type,
      match_codes, count, 52, state->sequences.match_lengths, MatchBits,
      DefaultMatches, 6, 52, workspace, workspace_size, superblock);
    if (sequence_entropy) {
      sequences += metadata->sequences.description_size;
    }
  }
  return {literals_estimate, literals_estimate + sequences + 3};
}

}

size_t EstimateSequencePartition(
  SequenceStore* store, BlockCompressionContext* context
) {
  auto& metadata = Splits(context).entropy;
  size_t result = BuildBlockEntropyMetadata(
    store, context->previous, context->next, &context->parameters, &metadata,
    context->entropy_workspace, 8920
  );
  if (IsError(result)) {
    return result;
  }
  return EstimateBlockSections(
    store->literals_start, store->literals - store->literals_start,
    store->offset_codes, store->literal_codes, store->match_codes,
    store->sequences - store->sequences_start, context->next, &metadata,
    context->entropy_workspace, 8920, metadata.literals.type == 2, true,
    false
  ).total;
}

}
