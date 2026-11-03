/*
  Adapted from Zstandard under the BSD license.
  Copyright Meta Platforms, Inc. and affiliates. All rights reserved.
  Original license: https://github.com/facebook/zstd/blob/v1.5.6/LICENSE
  Full license text: include/compression/zstd_bit_reader.hpp.
*/

#include "compression/zstd_workspace_internal.hpp"

namespace fw::compression {

using namespace reset_detail;

void AdjustLongDistanceParameters(
  LongDistanceParameters* parameters, const MatchParameters* match
) {
  parameters->window_log = match->window_log;
  if (!parameters->minimum_match) {
    parameters->minimum_match = 64;
  }
  if (!parameters->hash_log) {
    unsigned hash_log = match->window_log - 7;
    parameters->hash_log = hash_log > 6 ? hash_log : 6;
  }
  if (!parameters->hash_rate_log) {
    parameters->hash_rate_log = match->window_log < parameters->hash_log
      ? 0 : match->window_log - parameters->hash_log;
  }
  unsigned bucket_log = parameters->bucket_log;
  if (!bucket_log) {
    bucket_log = 3;
  }
  parameters->bucket_log = bucket_log < parameters->hash_log
    ? bucket_log : parameters->hash_log;
}

size_t LongDistanceTableSize(LongDistanceParameters parameters) {
  unsigned bucket = parameters.bucket_log < parameters.hash_log
    ? parameters.bucket_log : parameters.hash_log;
  size_t size = (size_t(8) << parameters.hash_log) +
    (size_t(1) << (parameters.hash_log - bucket));
  return parameters.enabled == 1 ? size : 0;
}

size_t LongDistanceSequenceCapacity(
  LongDistanceParameters parameters, size_t chunk_size
) {
  return parameters.enabled == 1 && parameters.minimum_match
    ? chunk_size / parameters.minimum_match : 0;
}

size_t EstimateCompressionWorkspace(
  const MatchParameters* match, const LongDistanceParameters* long_distance,
  int is_static, unsigned row_match_finder, size_t input_size,
  size_t output_size, uint64_t pledged_size, int sequence_producer,
  size_t maximum_block_size
) {
  size_t window = size_t(1) << match->window_log;
  if (window > pledged_size) {
    window = pledged_size;
  }
  if (!window) {
    window = 1;
  }
  size_t maximum = maximum_block_size ? maximum_block_size : 0x20000;
  size_t block = maximum < window ? maximum : window;
  size_t count = block /
    (match->minimum_match == 3 || sequence_producer ? 3 : 4);
  size_t chain = match->strategy == 1 ||
    RowFinder(match->strategy, row_match_finder)
    ? 0 : size_t(4) << match->chain_log;
  size_t hash3 = match->minimum_match == 3
    ? size_t(4) << (match->window_log < 17 ? match->window_log : 17) : 0;
  size_t row = RowFinder(match->strategy, row_match_finder)
    ? Align(size_t(1) << match->hash_log) : 0;
  size_t optimal = match->strategy >= 7 ? 149248 : 0;
  size_t ldm_sequences = long_distance->enabled == 1
    ? Align(LongDistanceSequenceCapacity(*long_distance, block) * 12) : 0;
  size_t external = sequence_producer
    ? Align((block / 3 + (block >> 10) + 2) * 16) : 0;
  return input_size + output_size + (is_static ? 25432 : 20184) +
    128 + optimal + chain + (size_t(4) << match->hash_log) + hash3 + row +
    block + 32 + Align(count * 8) + 3 * count +
    LongDistanceTableSize(*long_distance) + ldm_sequences + external;
}

}
