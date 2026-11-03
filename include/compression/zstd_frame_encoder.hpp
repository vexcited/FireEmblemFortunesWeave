/*
  Adapted from Zstandard under the BSD license.
  Copyright Meta Platforms, Inc. and affiliates. All rights reserved.
  Original license: https://github.com/facebook/zstd/blob/v1.5.6/LICENSE
  Full license text: include/compression/zstd_bit_reader.hpp.
*/

#pragma once

#include "compression/zstd_block_encoder.hpp"

namespace fw::compression {

struct CompressionWorkspacePrefix {
  void* start;
  void* end;
  void* objects_end;
  void* tables_end;
  void* tables_valid_end;
};

struct HuffmanBlockMetadata {
  unsigned type;
  uint8_t description[128];
  uint32_t padding;
  size_t description_size;
};

struct SequenceBlockMetadata {
  unsigned literal_type;
  unsigned offset_type;
  unsigned match_type;
  uint8_t description[133];
  uint8_t padding[7];
  size_t description_size;
  size_t last_count_size;
};

struct BlockEntropyMetadata {
  HuffmanBlockMetadata literals;
  SequenceBlockMetadata sequences;
};

struct SequenceSplits {
  uint32_t* positions;
  size_t count;
};

static_assert(sizeof(CompressionWorkspacePrefix) == 40);
static_assert(sizeof(HuffmanBlockMetadata) == 144);
static_assert(sizeof(SequenceBlockMetadata) == 168);
static_assert(sizeof(BlockEntropyMetadata) == 312);

void ReduceMatchIndexTable(
  uint32_t* table, unsigned size, unsigned correction
);

void CorrectMatchIndexOverflow(
  MatchState* state, CompressionWorkspacePrefix* workspace,
  const BlockCompressionParameters* parameters, const void* source,
  const void* source_end
);

size_t WriteCompressionFrameHeader(
  void* destination, size_t capacity,
  const BlockCompressionParameters* parameters, uint64_t pledged_size,
  unsigned dictionary_id
);

size_t BuildBlockEntropyMetadata(
  const SequenceStore* store, const BlockCompressionState* previous,
  BlockCompressionState* next, const BlockCompressionParameters* parameters,
  BlockEntropyMetadata* metadata, void* workspace, size_t workspace_size
);

void DeriveSequencePartition(
  SequenceStore* result, const SequenceStore* original, size_t start,
  size_t end
);

size_t EstimateSequencePartition(
  SequenceStore* store, BlockCompressionContext* context
);

void FindSequenceSplits(
  SequenceSplits* splits, size_t start, size_t end,
  BlockCompressionContext* context, const SequenceStore* original
);

size_t CompressSequencePartition(
  BlockCompressionContext* context, const SequenceStore* store,
  uint32_t* decoder_repeats, uint32_t* compressor_repeats,
  void* destination, size_t capacity, const void* source, size_t source_size,
  unsigned last_block, unsigned partition
);

size_t CompressSuperBlockPartition(
  const BlockCompressionState* state, const BlockEntropyMetadata* metadata,
  const MatchSequence* sequences, size_t count, const uint8_t* literals,
  size_t literal_size, const uint8_t* literal_codes,
  const uint8_t* match_codes, const uint8_t* offset_codes,
  const BlockCompressionParameters* parameters, void* destination,
  size_t capacity, int bmi2, int write_literals, int write_sequences,
  int* literals_written, int* sequences_written, unsigned last_block
);

size_t CompressSuperBlock(
  BlockCompressionContext* context, void* destination, size_t capacity,
  const void* source, size_t source_size, unsigned last_block
);

size_t ContinueFrameCompression(
  BlockCompressionContext* context, void* destination, size_t capacity,
  const void* source, size_t source_size, unsigned frame,
  unsigned last_chunk
);

size_t FinishFrameCompression(
  BlockCompressionContext* context, void* destination, size_t capacity,
  const void* source, size_t source_size
);

}
