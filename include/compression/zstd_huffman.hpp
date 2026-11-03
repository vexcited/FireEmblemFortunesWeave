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

struct HuffmanTableDescriptor {
  uint8_t maximum_log;
  uint8_t type;
  uint8_t table_log;
  uint8_t reserved;
};

struct HuffmanSingleEntry {
  uint8_t bits;
  uint8_t symbol;
};

struct HuffmanDoubleEntry {
  uint16_t sequence;
  uint8_t bits;
  uint8_t length;
};

struct ReverseBitStream {
  uint64_t container;
  uint32_t consumed;
  uint32_t padding;
  const uint8_t* cursor;
  const uint8_t* start;
  const uint8_t* reload_limit;
};

struct FastHuffmanStreams {
  const uint8_t* input[4];
  uint8_t* output[4];
  uint64_t bits[4];
  const void* table;
  const uint8_t* input_start;
  uint8_t* output_end;
  const uint8_t* stream_start[4];
};

static_assert(sizeof(HuffmanTableDescriptor) == 4);
static_assert(sizeof(HuffmanSingleEntry) == 2);
static_assert(sizeof(HuffmanDoubleEntry) == 4);
static_assert(sizeof(ReverseBitStream) == 40);
static_assert(offsetof(ReverseBitStream, cursor) == 16);
static_assert(sizeof(FastHuffmanStreams) == 152);
static_assert(offsetof(FastHuffmanStreams, stream_start) == 120);

size_t InitializeReverseBits(
  ReverseBitStream* stream, const void* source, size_t source_size
);

size_t InitializeFastHuffman(
  FastHuffmanStreams* streams, void* destination, size_t destination_size,
  const void* source, size_t source_size, const uint32_t* table
);

size_t DecompressHuffman4X(
  void* destination, size_t destination_size, const void* source,
  size_t source_size, const uint32_t* table, int flags
);

}
