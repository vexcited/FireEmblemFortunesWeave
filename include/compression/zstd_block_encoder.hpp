/*
  Adapted from Zstandard under the BSD license.
  Copyright Meta Platforms, Inc. and affiliates. All rights reserved.
  Original license: https://github.com/facebook/zstd/blob/v1.5.6/LICENSE
  Full license text: include/compression/zstd_bit_reader.hpp.
*/

#pragma once

#include "compression/zstd_huffman_encoder.hpp"
#include "compression/zstd_long_distance.hpp"

namespace fw::compression {

struct LiteralCompressionTable {
  uint64_t table[257];
  unsigned repeat_mode;
  unsigned padding;
};

struct BlockCompressionState {
  LiteralCompressionTable literals;
  SequenceCompressionTables sequences;
  uint32_t repeated_offsets[3];
  uint32_t padding;
};

struct ExternalSequence {
  uint32_t offset;
  uint32_t literal_length;
  uint32_t match_length;
  uint32_t repeat;
};

struct SequencePosition {
  uint32_t index;
  uint32_t position_in_sequence;
  size_t source_position;
};

struct SequenceCollector {
  int enabled;
  uint32_t padding;
  ExternalSequence* sequences;
  size_t index;
  size_t capacity;
};

using SequenceProducer = size_t (*)(
  void*, ExternalSequence*, size_t, const void*, size_t, const void*,
  size_t, int, size_t
);

struct BlockCompressionParameters {
  uint32_t format;
  MatchParameters match;
  uint8_t frame_parameters[12];
  int compression_level;
  uint8_t other_parameters[24];
  unsigned literal_mode;
  uint8_t threading_parameters[20];
  LongDistanceParameters long_distance;
  uint8_t dictionary_and_buffer_modes[16];
  unsigned validate_sequences;
  unsigned block_splitter;
  unsigned row_match_finder;
  uint8_t other_dictionary_parameters[32];
  int producer_fallback;
  void* producer_state;
  SequenceProducer producer;
  size_t maximum_block_size;
  unsigned external_repeat_search;
  uint32_t padding;
};

struct BlockCompressionContext {
  uint8_t stage[8];
  int bmi2;
  uint8_t other_context[0xdc];
  BlockCompressionParameters parameters;
  uint8_t other_parameter_state[0x1d0];
  SequenceCollector collector;
  int first_block;
  int initialized;
  SequenceStore sequences;
  LongDistanceState long_distance;
  RawSequence* long_distance_sequences;
  size_t long_distance_capacity;
  RawSequenceStore external_sequences;
  BlockCompressionState* previous;
  BlockCompressionState* next;
  MatchState match;
  void* entropy_workspace;
  uint8_t streaming_state[0xa8];
  const void* prepared_dictionary;
  const void* prefix_dictionary;
  size_t prefix_size;
  uint8_t other_context_state[0x5e8];
  ExternalSequence* producer_sequences;
  size_t producer_capacity;
};

using BlockParser = size_t (*)(
  MatchState*, SequenceStore*, uint32_t*, const void*, size_t
);

static_assert(sizeof(LiteralCompressionTable) == 2064);
static_assert(offsetof(BlockCompressionState, repeated_offsets) == 5616);
static_assert(sizeof(BlockCompressionParameters) == 216);
static_assert(offsetof(BlockCompressionParameters, long_distance) == 96);
static_assert(offsetof(BlockCompressionParameters, producer) == 192);
static_assert(offsetof(BlockCompressionContext, parameters) == 0xe8);
static_assert(offsetof(BlockCompressionContext, collector) == 0x390);
static_assert(offsetof(BlockCompressionContext, sequences) == 0x3b8);
static_assert(offsetof(BlockCompressionContext, match) == 0xc90);
static_assert(offsetof(BlockCompressionContext, entropy_workspace) == 0xdc0);
static_assert(offsetof(BlockCompressionContext, prepared_dictionary) == 0xe70);
static_assert(offsetof(BlockCompressionContext, producer_sequences) == 0x1470);

BlockParser SelectBlockParser(
  unsigned strategy, unsigned row_match_finder, unsigned dictionary_mode
);

size_t WriteRawLiterals(
  void* destination, size_t capacity, const void* source, size_t size
);

size_t WriteRunLengthLiterals(
  void* destination, size_t capacity, const void* source, size_t size
);

size_t CompressLiterals(
  void* destination, size_t capacity, const void* source, size_t size,
  void* workspace, size_t workspace_size,
  const LiteralCompressionTable* previous, LiteralCompressionTable* next,
  unsigned strategy, int disabled, int suspect_incompressible, int bmi2
);

size_t CompressSequenceStore(
  const SequenceStore* store, const BlockCompressionState* previous,
  BlockCompressionState* next, const BlockCompressionParameters* parameters,
  void* destination, size_t capacity, size_t source_size, void* workspace,
  int bmi2
);

size_t CopyExternalSequences(
  BlockCompressionContext* context, SequencePosition* position,
  const ExternalSequence* sequences, size_t count, const void* source,
  size_t source_size, unsigned repeat_search
);

size_t CollectBlockSequences(
  SequenceCollector* collector, const SequenceStore* store,
  const uint32_t repeated_offsets[3]
);

size_t BuildSequenceStore(
  BlockCompressionContext* context, const void* source, size_t size
);

int IsRunLengthBlock(const void* source, size_t size);

size_t CompressBlock(
  BlockCompressionContext* context, void* destination, size_t capacity,
  const void* source, size_t size, unsigned frame
);

}
