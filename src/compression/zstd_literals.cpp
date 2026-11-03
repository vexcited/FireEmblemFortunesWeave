/*
  Adapted from Zstandard under the BSD license.
  Copyright Meta Platforms, Inc. and affiliates. All rights reserved.
  Original license: https://github.com/facebook/zstd/blob/v1.5.6/LICENSE
  Full license text: include/compression/zstd_bit_reader.hpp.
*/

#include "compression/zstd_literals.hpp"
#include "compression/zstd_huffman_tables.hpp"

extern "C" void* memcpy(void* destination, const void* source, size_t size);
extern "C" void* memmove(void* destination, const void* source, size_t size);
extern "C" void* memset(void* destination, int value, size_t size);

namespace fw::compression {
namespace {

uint32_t ReadLittleEndian(const uint8_t* source, unsigned size) {
  uint32_t value = 0;
  for (unsigned i = 0; i < size; ++i) {
    value |= uint32_t(source[i]) << (8 * i);
  }
  return value;
}

void AllocateLiterals(
  LiteralContext& context, uint8_t* destination, size_t destination_size,
  size_t literal_size, size_t maximum_block, size_t expected_size,
  int streaming, bool split_immediately
) {
  if (!streaming && destination_size > maximum_block + literal_size + 64) {
    context.literal_buffer = destination + maximum_block + 32;
    context.literal_buffer_end = context.literal_buffer + literal_size;
    context.literal_location = LiteralLocation::InDestination;
  }
  else if (literal_size <= 65536) {
    context.literal_buffer = context.extra_literals;
    context.literal_buffer_end = context.literal_buffer + literal_size;
    context.literal_location = LiteralLocation::OutsideDestination;
  }
  else {
    context.literal_buffer = destination + expected_size - literal_size;
    if (split_immediately) {
      context.literal_buffer += 65504;
      context.literal_buffer_end = context.literal_buffer + literal_size -
        65536;
    }
    else {
      context.literal_buffer_end = destination + expected_size;
    }
    context.literal_location = LiteralLocation::Split;
  }
}

}

size_t DecodeLiterals(
  LiteralContext* context, const void* source, size_t source_size,
  void* destination, size_t destination_size, int streaming
) {
  if (source_size < 2) {
    return size_t(-20);
  }
  const auto* input = static_cast<const uint8_t*>(source);
  auto* output = static_cast<uint8_t*>(destination);
  const unsigned encoding = input[0] & 3;
  const unsigned size_code = (input[0] >> 2) & 3;
  const size_t maximum_block = context->frame_decompression ?
    context->frame.maximum_block_size : 131072;
  const size_t expected_size = destination_size < maximum_block ?
    destination_size : maximum_block;
  size_t header_size, literal_size;
  if (encoding <= 1) {
    if (size_code == 1 || size_code == 3) {
      header_size = size_code == 1 ? 2 : 3;
      if (source_size < header_size + (encoding == 1)) {
        return size_t(-20);
      }
      literal_size = ReadLittleEndian(input, header_size) >> 4;
    }
    else {
      header_size = 1;
      literal_size = input[0] >> 3;
    }
    if (!destination && literal_size != 0) {
      return size_t(-70);
    }
    if (literal_size > maximum_block) {
      return size_t(-20);
    }
    if (destination_size < literal_size) {
      return size_t(-70);
    }
    AllocateLiterals(*context, output, destination_size, literal_size,
                      maximum_block, expected_size, streaming, true);
    if (encoding == 0) {
      const size_t encoded_size = header_size + literal_size;
      if (encoded_size + 32 <= source_size) {
        context->literal_size = literal_size;
        context->literals = input + header_size;
        context->literal_buffer_end = input + encoded_size;
        context->literal_location = LiteralLocation::OutsideDestination;
        return encoded_size;
      }
      if (encoded_size > source_size) {
        return size_t(-20);
      }
      if (context->literal_location == LiteralLocation::Split) {
        memcpy(context->literal_buffer, input + header_size,
               literal_size - 65536);
        memcpy(context->extra_literals,
               input + header_size + literal_size - 65536, 65536);
      }
      else {
        memcpy(context->literal_buffer, input + header_size, literal_size);
      }
      context->literals = context->literal_buffer;
      context->literal_size = literal_size;
      return encoded_size;
    }
    if (context->literal_location == LiteralLocation::Split) {
      memset(context->literal_buffer, input[header_size], literal_size -
             65536);
      memset(context->extra_literals, input[header_size], 65536);
    }
    else {
      memset(context->literal_buffer, input[header_size], literal_size);
    }
    context->literals = context->literal_buffer;
    context->literal_size = literal_size;
    return header_size + 1;
  }

  if (encoding == 3 && context->literal_entropy == 0) {
    return size_t(-30);
  }
  if (source_size < 5) {
    return size_t(-20);
  }
  const uint32_t header = ReadLittleEndian(input, 4);
  size_t compressed_size;
  const bool single_stream = size_code == 0;
  if (size_code < 2) {
    literal_size = (header >> 4) & 1023;
    compressed_size = (header >> 14) & 1023;
    header_size = 3;
  }
  else if (size_code == 2) {
    literal_size = (header >> 4) & 16383;
    compressed_size = header >> 18;
    header_size = 4;
  }
  else {
    literal_size = (header >> 4) & 262143;
    compressed_size = (header >> 22) | (size_t(input[4]) << 10);
    header_size = 5;
  }
  if (!destination && literal_size != 0) {
    return size_t(-70);
  }
  if (literal_size > maximum_block) {
    return size_t(-20);
  }
  if (!single_stream && literal_size < 6) {
    return size_t(-24);
  }
  if (header_size + compressed_size > source_size) {
    return size_t(-20);
  }
  if (expected_size < literal_size) {
    return size_t(-70);
  }
  AllocateLiterals(*context, output, destination_size, literal_size,
                    maximum_block, expected_size, streaming, false);
  if (context->dictionary_cold && literal_size > 768) {
    for (size_t offset = 0; offset < sizeof(context->owned_huffman_table);
         offset += 64) {
      __builtin_prefetch(reinterpret_cast<const uint8_t*>(
        context->huffman_table) + offset, 0, 1);
    }
  }
  const int flags = context->disable_huffman_assembly ? 16 : 0;
  size_t result;
  if (encoding == 3) {
    result = single_stream ?
      DecompressHuffman1X(context->literal_buffer, literal_size,
        input + header_size, compressed_size, context->huffman_table, flags) :
      DecompressHuffman4X(context->literal_buffer, literal_size,
        input + header_size, compressed_size, context->huffman_table, flags);
  }
  else {
    result = single_stream ?
      ReadAndDecompressHuffman1X(context->owned_huffman_table,
        context->literal_buffer, literal_size, input + header_size,
        compressed_size, context->huffman_workspace,
        sizeof(context->huffman_workspace), flags) :
      ReadAndDecompressHuffman4X(context->owned_huffman_table,
        context->literal_buffer, literal_size, input + header_size,
        compressed_size, context->huffman_workspace,
        sizeof(context->huffman_workspace), flags);
  }
  // The original moves split buffers even when Huffman decoding failed.
  if (context->literal_location == LiteralLocation::Split) {
    memcpy(context->extra_literals, context->literal_buffer_end - 65536,
           65536);
    memmove(context->literal_buffer + 65504, context->literal_buffer,
            literal_size - 65536);
    context->literal_buffer += 65504;
    context->literal_buffer_end -= 32;
  }
  if (result > size_t(-120)) {
    return size_t(-20);
  }
  context->literals = context->literal_buffer;
  context->literal_size = literal_size;
  context->literal_entropy = 1;
  if (encoding == 2) {
    context->huffman_table = context->owned_huffman_table;
  }
  return header_size + compressed_size;
}

}
