/*
  Adapted from Zstandard under the BSD license.
  Copyright Meta Platforms, Inc. and affiliates. All rights reserved.
  Original license: https://github.com/facebook/zstd/blob/v1.5.6/LICENSE
  Full license text: include/compression/zstd_bit_reader.hpp.
*/

#pragma once

#include "compression/zstd_context_reset.hpp"
#include "compression/zstd_external.hpp"

namespace fw::compression {

size_t ReadHuffmanWeightsWithLocalWorkspace(
  uint8_t* weights, size_t capacity, uint32_t* ranks,
  unsigned* symbol_count, unsigned* table_log, const void* source,
  size_t source_size
);

size_t ReadHuffmanCompressionTable(
  uint64_t* table, unsigned* maximum_symbol, const void* source,
  size_t source_size, unsigned* has_zero_weights
);

size_t LoadCompressionDictionaryEntropy(
  BlockCompressionState* state, void* workspace, const void* dictionary,
  size_t dictionary_size
);

void UpdateRowDictionary(MatchState* state, const uint8_t* end);

void FillLongDistanceDictionary(
  LongDistanceState* state, const uint8_t* source, const uint8_t* end,
  const LongDistanceParameters* parameters
);

uint32_t InsertBinaryTreePosition(
  const MatchState* state, const uint8_t* source, const uint8_t* end,
  uint32_t target, unsigned minimum_match, int external_dictionary
);

void UpdateBinaryTree(
  MatchState* state, const uint8_t* target, const uint8_t* end
);

void LoadCompressionDictionaryContent(
  MatchState* state, LongDistanceState* long_distance,
  CompressionWorkspace* workspace, const BlockCompressionParameters* parameters,
  const void* dictionary, size_t dictionary_size,
  HashTableLoad load, HashTablePurpose purpose
);

size_t CompressWithParameters(
  BlockCompressionContext* context, void* destination, size_t capacity,
  const void* source, size_t source_size, const void* dictionary,
  size_t dictionary_size, const BlockCompressionParameters* parameters
);

size_t CompressUsingDictionary(
  BlockCompressionContext* context, void* destination, size_t capacity,
  const void* source, size_t source_size, const void* dictionary,
  size_t dictionary_size, int level
);

size_t Compress(
  void* destination, size_t capacity, const void* source,
  size_t source_size, int level
);

namespace oneshot_detail {
extern uint64_t (*CompressionTraceBegin)(BlockCompressionContext* context);
}

}
