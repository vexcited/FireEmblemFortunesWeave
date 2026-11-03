/*
  Adapted from Zstandard under the BSD license.
  Copyright Meta Platforms, Inc. and affiliates. All rights reserved.
  Original license: https://github.com/facebook/zstd/blob/v1.5.6/LICENSE
  Full license text: include/compression/zstd_bit_reader.hpp.
*/

#include "compression/zstd_frame.hpp"

namespace fw::compression {
namespace {

constexpr uint32_t FrameMagic = 0xfd2fb528;
constexpr uint32_t SkippableMagic = 0x184d2a50;
constexpr uint64_t UnknownContentSize = UINT64_MAX;
constexpr uint64_t InvalidContentSize = UINT64_MAX - 1;
constexpr size_t SourceSizeError = size_t(-72);

uint64_t ReadLittleEndian(const uint8_t* source, size_t size) {
  uint64_t result = 0;
  for (size_t i = 0; i < size; ++i) {
    result |= uint64_t(source[i]) << (8 * i);
  }
  return result;
}

bool IsSkippable(uint32_t magic) {
  return (magic & 0xfffffff0) == SkippableMagic;
}

bool IsError(size_t result) {
  return result > size_t(-120);
}

void SetSizeError(FrameSizeInfo* result, size_t error) {
  // The original leaves block_count untouched on ordinary frame errors.
  result->compressed_size = error;
  result->decompressed_bound = InvalidContentSize;
}

}

size_t ReadFrameHeader(
  FrameHeader* header, const void* source, size_t source_size,
  FrameFormat format
) {
  const auto* input = static_cast<const uint8_t*>(source);
  const size_t minimum = format == FrameFormat::Standard ? 5 : 1;
  if (source == nullptr && source_size != 0) {
    return size_t(-1);
  }
  if (source_size < minimum) {
    if (source_size != 0 && format != FrameFormat::Magicless) {
      const uint32_t mask = uint32_t(UINT64_MAX << (8 * source_size));
      const uint32_t prefix = ReadLittleEndian(input, source_size);
      if ((prefix | (FrameMagic & mask)) != FrameMagic &&
          !IsSkippable(prefix | (SkippableMagic & mask))) {
        return size_t(-10);
      }
    }
    return minimum;
  }

  *header = {};
  if (format != FrameFormat::Magicless &&
      ReadLittleEndian(input, 4) != FrameMagic) {
    if (!IsSkippable(ReadLittleEndian(input, 4))) {
      return size_t(-10);
    }
    if (source_size < 8) {
      return 8;
    }
    header->content_size = ReadLittleEndian(input + 4, 4);
    header->type = FrameType::Skippable;
    return 0;
  }

  const uint8_t descriptor = input[minimum - 1];
  const unsigned dictionary_code = descriptor & 3;
  const unsigned content_code = descriptor >> 6;
  const bool single_segment = (descriptor & 0x20) != 0;
  constexpr size_t dictionary_sizes[] = {0, 1, 2, 4};
  constexpr size_t content_sizes[] = {0, 2, 4, 8};
  const size_t header_size = minimum + dictionary_sizes[dictionary_code] +
    content_sizes[content_code] + !single_segment +
    (single_segment && content_code == 0);
  if (source_size < header_size) {
    return header_size;
  }
  header->header_size = header_size;
  if ((descriptor & 8) != 0) {
    return size_t(-14);
  }

  size_t position = minimum;
  uint64_t window_size = 0;
  if (!single_segment) {
    const uint8_t window = input[position++];
    if (window > 175) {
      return size_t(-16);
    }
    window_size = uint64_t(1) << ((window >> 3) + 10);
    window_size += (window_size >> 3) * (window & 7);
  }
  const uint32_t dictionary_id = ReadLittleEndian(
    input + position, dictionary_sizes[dictionary_code]
  );
  position += dictionary_sizes[dictionary_code];
  uint64_t content_size = UnknownContentSize;
  if (content_code != 0) {
    content_size = ReadLittleEndian(input + position,
                                   content_sizes[content_code]);
    if (content_code == 1) {
      content_size += 256;
    }
  }
  else if (single_segment) {
    content_size = input[position];
  }
  if (single_segment) {
    window_size = content_size;
  }

  header->content_size = content_size;
  header->window_size = window_size;
  header->maximum_block_size = window_size < 131072 ? window_size : 131072;
  header->dictionary_id = dictionary_id;
  header->checksum = (descriptor >> 2) & 1;
  return 0;
}

uint64_t GetFrameContentSize(const void* source, size_t source_size) {
  FrameHeader header;
  if (ReadFrameHeader(&header, source, source_size, FrameFormat::Standard)) {
    return InvalidContentSize;
  }
  return header.type == FrameType::Skippable ? 0 : header.content_size;
}

size_t ReadBlockSize(
  const void* source, size_t source_size, BlockProperties* properties
) {
  if (source_size < 3) {
    return SourceSizeError;
  }
  const uint32_t header = ReadLittleEndian(
    static_cast<const uint8_t*>(source), 3
  );
  properties->type = BlockType((header >> 1) & 3);
  properties->last = header & 1;
  properties->original_size = header >> 3;
  if (properties->type == BlockType::RunLength) {
    return 1;
  }
  if (properties->type == BlockType::Reserved) {
    return size_t(-20);
  }
  return properties->original_size;
}

void FindFrameSizeInfo(
  FrameSizeInfo* result, const void* source, size_t source_size,
  FrameFormat format
) {
  const auto* input = static_cast<const uint8_t*>(source);
  if (format == FrameFormat::Standard && source_size >= 8 &&
      IsSkippable(ReadLittleEndian(input, 4))) {
    const uint32_t payload = ReadLittleEndian(input + 4, 4);
    const size_t frame_size = size_t(payload) + 8;
    result->block_count = 0;
    result->decompressed_bound = 0;
    result->compressed_size = payload > UINT32_MAX - 8 ? size_t(-14) :
      frame_size > source_size ? SourceSizeError : frame_size;
    return;
  }

  FrameHeader header;
  const size_t status = ReadFrameHeader(&header, source, source_size, format);
  if (status != 0) {
    SetSizeError(result, IsError(status) ? status : SourceSizeError);
    return;
  }

  size_t position = header.header_size;
  size_t remaining = source_size - position;
  size_t block_count = 0;
  for (;;) {
    BlockProperties block;
    const size_t block_size = ReadBlockSize(input + position, remaining,
                                           &block);
    if (IsError(block_size)) {
      SetSizeError(result, block_size);
      return;
    }
    if (remaining < block_size + 3) {
      SetSizeError(result, SourceSizeError);
      return;
    }
    position += block_size + 3;
    remaining -= block_size + 3;
    ++block_count;
    if (block.last) {
      break;
    }
  }
  if (header.checksum) {
    if (remaining < 4) {
      SetSizeError(result, SourceSizeError);
      return;
    }
    position += 4;
  }
  result->block_count = block_count;
  result->compressed_size = position;
  result->decompressed_bound = header.content_size == UnknownContentSize ?
    block_count * header.maximum_block_size : header.content_size;
}

}
