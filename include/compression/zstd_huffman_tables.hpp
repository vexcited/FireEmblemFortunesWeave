#pragma once

#include "compression/zstd_huffman.hpp"

namespace fw::compression {

size_t ReadHuffmanWeights(
  uint8_t* weights, size_t weight_capacity, uint32_t* ranks,
  unsigned* symbol_count, unsigned* table_log, const void* source,
  size_t source_size, void* workspace, size_t workspace_size, int flags
);

size_t BuildHuffmanSingleTable(
  uint32_t* table, const void* source, size_t source_size, void* workspace,
  size_t workspace_size, int flags
);

size_t BuildHuffmanDoubleTable(
  uint32_t* table, const void* source, size_t source_size, void* workspace,
  size_t workspace_size, int flags
);

size_t DecompressHuffman1X(
  void* destination, size_t destination_size, const void* source,
  size_t source_size, const uint32_t* table, int flags
);

size_t ReadAndDecompressHuffman1X(
  uint32_t* table, void* destination, size_t destination_size,
  const void* source, size_t source_size, void* workspace,
  size_t workspace_size, int flags
);

size_t ReadAndDecompressHuffman4X(
  uint32_t* table, void* destination, size_t destination_size,
  const void* source, size_t source_size, void* workspace,
  size_t workspace_size, int flags
);

}
