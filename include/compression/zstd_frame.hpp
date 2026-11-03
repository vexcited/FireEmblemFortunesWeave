/*
  Adapted from Zstandard under the BSD license.
  Copyright Meta Platforms, Inc. and affiliates. All rights reserved.
  Original license: https://github.com/facebook/zstd/blob/v1.5.6/LICENSE
  Full license text: include/compression/zstd_bit_reader.hpp.
*/

#pragma once

#include <stddef.h>
#include <stdint.h>

namespace fw::compression {

enum class FrameFormat : uint32_t {
  Standard = 0,
  Magicless = 1,
};

enum class FrameType : uint32_t {
  Compressed = 0,
  Skippable = 1,
};

enum class BlockType : uint32_t {
  Raw = 0,
  RunLength = 1,
  Compressed = 2,
  Reserved = 3,
};

struct FrameHeader {
  uint64_t content_size;
  uint64_t window_size;
  uint32_t maximum_block_size;
  FrameType type;
  uint32_t header_size;
  uint32_t dictionary_id;
  uint32_t checksum;
  uint32_t reserved[2];
  uint32_t padding;
};

struct BlockProperties {
  BlockType type;
  uint32_t last;
  uint32_t original_size;
};

struct FrameSizeInfo {
  size_t block_count;
  size_t compressed_size;
  uint64_t decompressed_bound;
};

static_assert(sizeof(FrameHeader) == 48);
static_assert(offsetof(FrameHeader, header_size) == 24);
static_assert(offsetof(FrameHeader, checksum) == 32);
static_assert(sizeof(BlockProperties) == 12);
static_assert(sizeof(FrameSizeInfo) == 24);

size_t ReadFrameHeader(
  FrameHeader* header, const void* source, size_t source_size,
  FrameFormat format
);

uint64_t GetFrameContentSize(const void* source, size_t source_size);

size_t ReadBlockSize(
  const void* source, size_t source_size, BlockProperties* properties
);

void FindFrameSizeInfo(
  FrameSizeInfo* result, const void* source, size_t source_size,
  FrameFormat format
);

}
