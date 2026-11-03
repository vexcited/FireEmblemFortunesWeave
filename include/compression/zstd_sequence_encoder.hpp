/*
  Adapted from Zstandard under the BSD license.
  Copyright Meta Platforms, Inc. and affiliates. All rights reserved.
  Original license: https://github.com/facebook/zstd/blob/v1.5.6/LICENSE
  Full license text: include/compression/zstd_bit_reader.hpp.
*/

#pragma once

#include "compression/zstd_match.hpp"

namespace fw::compression {

struct FseCompressionTransform {
  int32_t state_delta;
  uint32_t bit_delta;
};

struct SequenceCompressionTables {
  uint32_t offsets[193];
  uint32_t match_lengths[363];
  uint32_t literal_lengths[329];
  uint32_t offset_repeat;
  uint32_t match_repeat;
  uint32_t literal_repeat;
};

struct SequenceEncodingStatistics {
  uint32_t literal_type;
  uint32_t offset_type;
  uint32_t match_type;
  uint32_t padding;
  size_t size;
  size_t last_count_size;
  int32_t long_offsets;
  uint32_t trailing_padding;
};

static_assert(sizeof(FseCompressionTransform) == 8);
static_assert(sizeof(SequenceCompressionTables) == 3552);
static_assert(offsetof(SequenceCompressionTables, match_lengths) == 772);
static_assert(offsetof(SequenceCompressionTables, literal_lengths) == 2224);
static_assert(offsetof(SequenceCompressionTables, offset_repeat) == 3540);
static_assert(sizeof(SequenceEncodingStatistics) == 40);

size_t BuildFseCompressionTable(
  uint32_t* table, const int16_t* counts, unsigned maximum_symbol,
  unsigned table_log, void* workspace, size_t workspace_size
);

size_t WriteNormalizedCounts(
  void* destination, size_t capacity, const int16_t* counts,
  unsigned maximum_symbol, unsigned table_log
);

unsigned OptimalFseTableLog(
  unsigned maximum_log, size_t source_size, unsigned maximum_symbol
);

size_t NormalizeFseCounts(
  int16_t* normalized, unsigned table_log, const unsigned* counts,
  size_t total, unsigned maximum_symbol, unsigned low_probability
);

size_t BuildFseRunLengthTable(uint32_t* table, uint8_t symbol);

size_t CountSequenceSymbols(
  unsigned* counts, unsigned* maximum_symbol, const void* source,
  size_t source_size, void* workspace, size_t workspace_size
);

size_t FseBitCost(
  const uint32_t* table, const unsigned* counts, unsigned maximum_symbol
);

size_t CrossEntropyCost(
  const int16_t* normalized, unsigned table_log, const unsigned* counts,
  unsigned maximum_symbol
);

unsigned SelectSequenceEncoding(
  unsigned* repeat_mode, const unsigned* counts, unsigned maximum_symbol,
  size_t most_frequent, size_t sequence_count, unsigned table_log,
  const uint32_t* previous_table, const int16_t* default_counts,
  unsigned default_log, unsigned default_allowed, unsigned strategy
);

size_t BuildSequenceCompressionTable(
  void* destination, size_t capacity, uint32_t* next_table,
  unsigned table_log, unsigned encoding, unsigned* counts,
  unsigned maximum_symbol, const uint8_t* codes, size_t sequence_count,
  const int16_t* default_counts, unsigned default_log,
  unsigned default_maximum, const uint32_t* previous_table,
  size_t previous_size, void* workspace, size_t workspace_size
);

void BuildSequenceStatistics(
  SequenceEncodingStatistics* statistics, const SequenceStore* sequences,
  size_t sequence_count, const SequenceCompressionTables* previous,
  SequenceCompressionTables* next, uint8_t* destination,
  const uint8_t* destination_end, unsigned strategy, unsigned* counts,
  void* workspace, size_t workspace_size
);

size_t EncodeSequences(
  void* destination, size_t capacity, const uint32_t* match_table,
  const uint8_t* match_codes, const uint32_t* offset_table,
  const uint8_t* offset_codes, const uint32_t* literal_table,
  const uint8_t* literal_codes, const MatchSequence* sequences,
  size_t sequence_count, int long_offsets
);

}
