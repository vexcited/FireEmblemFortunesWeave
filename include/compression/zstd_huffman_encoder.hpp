/*
  Adapted from Zstandard under the BSD license.
  Copyright Meta Platforms, Inc. and affiliates. All rights reserved.
  Original license: https://github.com/facebook/zstd/blob/v1.5.6/LICENSE
  Full license text: include/compression/zstd_bit_reader.hpp.
*/

#pragma once

#include "compression/zstd_sequence_encoder.hpp"

namespace fw::compression {

struct HuffmanCompressionNode {
  uint32_t count;
  uint16_t parent;
  uint8_t symbol;
  uint8_t bits;
};

static_assert(sizeof(HuffmanCompressionNode) == 8);

void SortHuffmanNodes(HuffmanCompressionNode* nodes, int low, int high);

size_t BuildHuffmanCompressionTable(
  uint64_t* table, const unsigned* counts, unsigned maximum_symbol,
  unsigned maximum_bits, void* workspace, size_t workspace_size
);

unsigned HuffmanSymbolBits(const uint64_t* table, unsigned symbol);

size_t EstimateHuffmanSize(
  const uint64_t* table, const unsigned* counts, unsigned maximum_symbol
);

int ValidateHuffmanCompressionTable(
  const uint64_t* table, const unsigned* counts, unsigned maximum_symbol
);

size_t CountHuffmanSymbolsSimple(
  unsigned* counts, unsigned* maximum_symbol, const void* source,
  size_t source_size
);

size_t CountHuffmanSymbols(
  unsigned* counts, unsigned* maximum_symbol, const void* source,
  size_t source_size, void* workspace, size_t workspace_size
);

size_t CompressFseWeights(
  void* destination, size_t capacity, const void* source, size_t source_size,
  const uint32_t* table
);

size_t WriteHuffmanCompressionTable(
  void* destination, size_t capacity, const uint64_t* table,
  unsigned maximum_symbol, unsigned table_log, void* workspace,
  size_t workspace_size
);

unsigned ChooseHuffmanTableLog(
  unsigned maximum_log, size_t source_size, unsigned maximum_symbol,
  void* workspace, size_t workspace_size, uint64_t* table,
  const unsigned* counts, int flags
);

size_t EncodeHuffman1X(
  void* destination, size_t capacity, const void* source, size_t source_size,
  const uint64_t* table
);

size_t CompressHuffman1XWithTable(
  void* destination, size_t capacity, const void* source, size_t source_size,
  const uint64_t* table
);

size_t CompressHuffman4XWithTable(
  void* destination, size_t capacity, const void* source, size_t source_size,
  const uint64_t* table
);

size_t CompressHuffmanSelectedTable(
  uint8_t* start, uint8_t* output, const uint8_t* end, const void* source,
  size_t source_size, unsigned four_streams, const uint64_t* table
);

size_t CompressHuffman(
  void* destination, size_t capacity, const void* source, size_t source_size,
  unsigned maximum_symbol, unsigned maximum_log, unsigned four_streams,
  void* workspace, size_t workspace_size, uint64_t* previous_table,
  unsigned* repeat_mode, int flags
);

size_t CompressHuffman1X(
  void* destination, size_t capacity, const void* source, size_t source_size,
  unsigned maximum_symbol, unsigned maximum_log, void* workspace,
  size_t workspace_size, uint64_t* previous_table, unsigned* repeat_mode,
  int flags
);

size_t CompressHuffman4X(
  void* destination, size_t capacity, const void* source, size_t source_size,
  unsigned maximum_symbol, unsigned maximum_log, void* workspace,
  size_t workspace_size, uint64_t* previous_table, unsigned* repeat_mode,
  int flags
);

}
