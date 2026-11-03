/*
  Adapted from Zstandard under the BSD license.
  Copyright Meta Platforms, Inc. and affiliates. All rights reserved.
  Original license: https://github.com/facebook/zstd/blob/v1.5.6/LICENSE
  Full license text: include/compression/zstd_bit_reader.hpp.
*/

#pragma once

#include "compression/zstd_literals.hpp"

namespace fw::compression {

struct SequenceTableHeader {
  uint32_t fast;
  uint32_t table_log;
};

struct SequenceEntry {
  uint16_t next_state;
  uint8_t additional_bits;
  uint8_t state_bits;
  uint32_t base;
};

template <size_t Count>
struct SequenceTableStorage {
  SequenceTableHeader header;
  SequenceEntry entries[Count];
};

struct SequenceTables {
  const SequenceTableHeader* literal_lengths;
  const SequenceTableHeader* match_lengths;
  const SequenceTableHeader* offsets;
  const uint32_t* huffman;
  SequenceTableStorage<512> literal_storage;
  SequenceTableStorage<256> offset_storage;
  SequenceTableStorage<512> match_storage;
};

struct SequenceWindow {
  const uint8_t* previous_end;
  const uint8_t* prefix_start;
  const uint8_t* virtual_start;
  const uint8_t* dictionary_end;
  size_t expected;
};

struct DecodedSequence {
  size_t literal_length;
  size_t match_length;
  size_t offset;
};

struct OffsetInfo {
  uint32_t long_offset_share;
  uint32_t maximum_bits;
};

enum class SequenceEncoding : uint32_t {
  Default = 0,
  RunLength = 1,
  Compressed = 2,
  Repeat = 3,
};

enum class CopyOverlap : uint32_t {
  None = 0,
  SourceBeforeDestination = 1,
};

static_assert(sizeof(SequenceTableHeader) == 8);
static_assert(sizeof(SequenceEntry) == 8);
static_assert(sizeof(SequenceTables) == 10296);
static_assert(offsetof(SequenceTables, literal_storage) == 32);
static_assert(offsetof(SequenceTables, offset_storage) == 4136);
static_assert(offsetof(SequenceTables, match_storage) == 6192);
static_assert(sizeof(SequenceWindow) == 40);
static_assert(sizeof(DecodedSequence) == 24);
static_assert(sizeof(OffsetInfo) == 8);
static_assert(offsetof(LiteralContext, unknown_26684) == 26684);
static_assert(offsetof(LiteralContext, unknown_29884) + 4 == 29888);
static_assert(offsetof(LiteralContext, unknown_30004) == 30004);

void BuildSequenceTable(SequenceTableHeader* table, const int16_t* counts,
  unsigned maximum_symbol, const uint32_t* bases,
  const uint8_t* additional_bits, unsigned table_log, void* workspace);

size_t SelectSequenceTable(SequenceTableHeader* storage,
  const SequenceTableHeader** table, SequenceEncoding encoding,
  unsigned maximum_symbol, unsigned maximum_log, const void* source,
  size_t source_size, const uint32_t* bases, const uint8_t* additional_bits,
  const SequenceTableHeader* default_table, uint32_t repeat_available,
  int dictionary_cold, unsigned sequence_count, void* workspace);

size_t ReadSequenceHeaders(LiteralContext* context, int* sequence_count,
  const void* source, size_t source_size);

OffsetInfo GetOffsetInfo(const SequenceTableHeader* table, unsigned count);

void CheckOutputContinuity(
  LiteralContext* context, const void* destination, size_t destination_size);

void CopySequenceTail(uint8_t* destination, const uint8_t* wide_copy_end,
  const uint8_t* source, ptrdiff_t length, CopyOverlap overlap);

size_t ExecuteSequenceTail(uint8_t* output, uint8_t* output_end,
  DecodedSequence sequence, const uint8_t** literals,
  const uint8_t* literal_end, const uint8_t* prefix,
  const uint8_t* virtual_start, const uint8_t* dictionary_end);

size_t ExecuteSplitSequenceTail(uint8_t* output, uint8_t* output_end,
  const uint8_t* wide_copy_end, DecodedSequence sequence,
  const uint8_t** literals, const uint8_t* literal_end, const uint8_t* prefix,
  const uint8_t* virtual_start, const uint8_t* dictionary_end);

size_t DecompressSequences(LiteralContext* context, void* destination,
  size_t destination_size, const void* source, size_t source_size,
  int sequence_count);

size_t DecompressSplitSequences(LiteralContext* context, void* destination,
  size_t destination_size, const void* source, size_t source_size,
  int sequence_count);

size_t DecompressPrefetchedSequences(LiteralContext* context, void* destination,
  size_t destination_size, const void* source, size_t source_size,
  int sequence_count);

size_t DecompressBlock(LiteralContext* context, void* destination,
  size_t destination_size, const void* source, size_t source_size,
  int streaming);

namespace detail {

void CopyBeforeSource(uint8_t* output, const uint8_t* input, ptrdiff_t length);

size_t ExecuteSequence(uint8_t* output, uint8_t* output_end,
  const uint8_t* wide_copy_end, DecodedSequence sequence,
  const uint8_t** literals, const uint8_t* literal_end,
  const SequenceWindow& window, bool split);

inline SequenceTables& TablesFor(LiteralContext* context) {
  return *reinterpret_cast<SequenceTables*>(context);
}

inline SequenceWindow& WindowFor(LiteralContext* context) {
  return *reinterpret_cast<SequenceWindow*>(context->unknown_29884 + 4);
}

inline uint32_t* RepeatedOffsets(LiteralContext* context) {
  return reinterpret_cast<uint32_t*>(context->unknown_26684);
}

inline uint32_t& SequenceEntropy(LiteralContext* context) {
  return *reinterpret_cast<uint32_t*>(context->unknown_30004);
}

}
}
