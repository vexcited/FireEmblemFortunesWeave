/*
  Adapted from Zstandard under the BSD license.
  Copyright Meta Platforms, Inc. and affiliates. All rights reserved.
  Original license: https://github.com/facebook/zstd/blob/v1.5.6/LICENSE
  Full license text: include/compression/zstd_bit_reader.hpp.
*/

#pragma once

#include "compression/zstd_block_encoder.hpp"

namespace fw::compression {

struct CompressionWorkspace {
  uint8_t* start;
  uint8_t* end;
  uint8_t* objects_end;
  uint8_t* tables_end;
  uint8_t* tables_valid_end;
  uint8_t* allocation_start;
  uint8_t* initialized_start;
  uint8_t failed;
  uint8_t padding[3];
  int32_t oversized_duration;
  unsigned phase;
  unsigned is_static;
};

static_assert(sizeof(CompressionWorkspace) == 72);
static_assert(offsetof(CompressionWorkspace, phase) == 64);

void AdjustLongDistanceParameters(
  LongDistanceParameters* parameters, const MatchParameters* match
);

size_t LongDistanceTableSize(LongDistanceParameters parameters);

size_t LongDistanceSequenceCapacity(
  LongDistanceParameters parameters, size_t chunk_size
);

size_t EstimateCompressionWorkspace(
  const MatchParameters* match, const LongDistanceParameters* long_distance,
  int is_static, unsigned row_match_finder, size_t input_size,
  size_t output_size, uint64_t pledged_size, int sequence_producer,
  size_t maximum_block_size
);

size_t ResetCompressionMatchState(
  MatchState* state, CompressionWorkspace* workspace,
  const MatchParameters* parameters, unsigned row_match_finder,
  unsigned leave_dirty, unsigned reset_indices, unsigned for_context
);

size_t ResetCompressionContext(
  BlockCompressionContext* context,
  const BlockCompressionParameters* parameters, uint64_t pledged_size,
  size_t loaded_dictionary_size, unsigned leave_dirty, unsigned buffered
);

}
