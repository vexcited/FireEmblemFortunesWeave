/*
  Adapted from Zstandard under the BSD license.
  Copyright Meta Platforms, Inc. and affiliates. All rights reserved.
  Original license: https://github.com/facebook/zstd/blob/v1.5.6/LICENSE
  Full license text: include/compression/zstd_bit_reader.hpp.
*/

#pragma once

#include "compression/zstd_match.hpp"

namespace fw::compression {

struct RawSequence {
  uint32_t offset;
  uint32_t literal_length;
  uint32_t match_length;
};

struct RawSequenceStore {
  RawSequence* sequences;
  size_t position;
  size_t position_in_sequence;
  size_t size;
  size_t capacity;
};

struct LongDistanceParameters {
  uint32_t enabled;
  uint32_t hash_log;
  uint32_t bucket_log;
  uint32_t minimum_match;
  uint32_t hash_rate_log;
  uint32_t window_log;
};

struct LongDistanceEntry {
  uint32_t offset;
  uint32_t checksum;
};

struct LongDistanceCandidate {
  const uint8_t* split;
  uint32_t hash;
  uint32_t checksum;
  LongDistanceEntry* bucket;
};

struct LongDistanceState {
  MatchWindow window;
  LongDistanceEntry* hash_table;
  uint32_t loaded_dictionary_end;
  uint32_t padding;
  uint8_t* bucket_offsets;
  size_t split_indices[64];
  LongDistanceCandidate candidates[64];
};

struct RollingHash {
  uint64_t value;
  uint64_t stop_mask;
};

static_assert(sizeof(RawSequence) == 12);
static_assert(sizeof(RawSequenceStore) == 40);
static_assert(sizeof(LongDistanceParameters) == 24);
static_assert(sizeof(LongDistanceState) == 2112);
static_assert(offsetof(LongDistanceState, candidates) == 576);

size_t FeedLongDistanceHash(
  RollingHash* state, const uint8_t* input, size_t size, size_t* splits,
  unsigned* split_count
);

size_t GenerateLongDistanceSequences(
  LongDistanceState* state, RawSequenceStore* sequences,
  const LongDistanceParameters* parameters, const void* source,
  size_t source_size
);

void SkipRawSequences(
  RawSequenceStore* store, size_t size, uint32_t minimum_match
);

void AdvanceRawSequencePosition(RawSequenceStore* store, size_t size);

size_t MergeLongDistanceSequences(
  RawSequenceStore* raw, MatchState* state, SequenceStore* store,
  uint32_t repeated_offsets[3], unsigned row_match_finder,
  const void* source, size_t source_size
);

}
