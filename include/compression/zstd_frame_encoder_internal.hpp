/*
  Adapted from Zstandard under the BSD license.
  Copyright Meta Platforms, Inc. and affiliates. All rights reserved.
  Original license: https://github.com/facebook/zstd/blob/v1.5.6/LICENSE
  Full license text: include/compression/zstd_bit_reader.hpp.
*/

#pragma once

#include "compression/zstd_frame_encoder.hpp"
#include "compression/zstd_block_internal.hpp"
#include "compression/zstd_checksum.hpp"

namespace fw::compression::frame_detail {

using block_detail::Read;
using block_detail::Write;
using block_detail::IsError;

struct FramePrefix {
  unsigned stage;
  uint32_t padding;
  int bmi2;
  uint8_t other_context[0xdc];
  BlockCompressionParameters parameters;
  uint8_t other_parameters[0xd8];
  unsigned dictionary_id;
  uint32_t dictionary_padding;
  size_t dictionary_size;
  CompressionWorkspacePrefix workspace;
  uint8_t other_workspace[32];
  size_t block_size;
  uint64_t pledged_size_plus_one;
  uint64_t consumed_size;
  uint64_t produced_size;
  ChecksumState checksum;
};

struct FrameSplitState {
  SequenceStore full;
  SequenceStore first;
  SequenceStore second;
  SequenceStore current;
  SequenceStore next;
  uint32_t partitions[196];
  BlockEntropyMetadata entropy;
};

struct FrameTrace {
  unsigned version;
  unsigned streaming;
  unsigned dictionary_id;
  uint32_t padding;
  size_t dictionary_size;
  uint64_t uncompressed_size;
  uint64_t compressed_size;
  const BlockCompressionParameters* parameters;
  const BlockCompressionContext* context;
  uint64_t reserved;
};

static_assert(offsetof(FramePrefix, dictionary_id) == 0x298);
static_assert(offsetof(FramePrefix, workspace) == 0x2a8);
static_assert(offsetof(FramePrefix, block_size) == 0x2f0);
static_assert(offsetof(FramePrefix, checksum) == 0x310);
static_assert(sizeof(FramePrefix) == 0x368);
static_assert(offsetof(FrameSplitState, entropy) == 1184);
static_assert(sizeof(FrameSplitState) == 1496);
static_assert(sizeof(FrameTrace) == 64);

template <class T>
T& ContextField(BlockCompressionContext* context, size_t offset) {
  return *reinterpret_cast<T*>(reinterpret_cast<uint8_t*>(context) + offset);
}

inline FramePrefix& Prefix(BlockCompressionContext* context) {
  return ContextField<FramePrefix>(context, 0);
}

inline FrameSplitState& Splits(BlockCompressionContext* context) {
  return ContextField<FrameSplitState>(context, 0xe98);
}

inline int ContentSizeFlag(const BlockCompressionParameters* parameters) {
  return Read<int>(parameters->frame_parameters);
}

inline int ChecksumFlag(const BlockCompressionParameters* parameters) {
  return Read<int>(parameters->frame_parameters + 4);
}

inline size_t TargetBlockSize(const BlockCompressionParameters* parameters) {
  return Read<size_t>(parameters->other_parameters + 8);
}

inline void Write24(void* destination, uint32_t value) {
  Write<uint16_t>(destination, uint16_t(value));
  static_cast<uint8_t*>(destination)[2] = uint8_t(value >> 16);
}

inline size_t RawBlock(
  void* destination, size_t capacity, const void* source, size_t size,
  unsigned last
) {
  if (size + 3 > capacity) {
    return size_t(-70);
  }
  Write24(destination, uint32_t((size << 3) + last));
  __builtin_memcpy(static_cast<uint8_t*>(destination) + 3, source, size);
  return size + 3;
}

inline void ConfirmBlockState(BlockCompressionContext* context) {
  auto* previous = context->previous;
  context->previous = context->next;
  context->next = previous;
}

inline size_t LiteralBytes(const SequenceStore* store) {
  size_t result = 0;
  size_t count = store->sequences - store->sequences_start;
  for (size_t i = 0; i < count; ++i) {
    result += store->sequences_start[i].literal_length;
    if (i == store->long_length_position &&
        store->long_length_type == LongSequenceLength::Literal) {
      result += 0x10000;
    }
  }
  return result;
}

inline size_t MatchBytes(const SequenceStore* store) {
  size_t result = 0;
  size_t count = store->sequences - store->sequences_start;
  for (size_t i = 0; i < count; ++i) {
    result += store->sequences_start[i].match_length_base + 3;
    if (i == store->long_length_position &&
        store->long_length_type == LongSequenceLength::Match) {
      result += 0x10000;
    }
  }
  return result;
}

struct BlockSizeEstimate {
  size_t literals;
  size_t total;
};

BlockSizeEstimate EstimateBlockSections(
  const uint8_t* literals, size_t literal_size, const uint8_t* offset_codes,
  const uint8_t* literal_codes, const uint8_t* match_codes, size_t count,
  const BlockCompressionState* state, const BlockEntropyMetadata* metadata,
  void* workspace, size_t workspace_size, bool literal_entropy,
  bool sequence_entropy, bool superblock
);

}
