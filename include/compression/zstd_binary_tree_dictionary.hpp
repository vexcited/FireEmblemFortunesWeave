/*
  Adapted from Zstandard under the BSD license.
  Copyright Meta Platforms, Inc. and affiliates. All rights reserved.
  Original license: https://github.com/facebook/zstd/blob/v1.5.6/LICENSE
  Full license text: include/compression/zstd_bit_reader.hpp.
*/

#pragma once

#include "compression/zstd_binary_tree.hpp"

namespace fw::compression {

size_t SearchPreparedBinaryTree4(MatchState* state,
  const uint8_t* source, const uint8_t* end, size_t* offset_base);
size_t SearchPreparedBinaryTree5(MatchState* state,
  const uint8_t* source, const uint8_t* end, size_t* offset_base);
size_t SearchPreparedBinaryTree6(MatchState* state,
  const uint8_t* source, const uint8_t* end, size_t* offset_base);

size_t FindBinaryTreePreparedMatches(MatchState* state,
  SequenceStore* sequences, uint32_t repeated_offsets[3],
  const void* source, size_t source_size);

size_t SearchExternalBinaryTree4(MatchState* state,
  const uint8_t* source, const uint8_t* end, size_t* offset_base);
size_t SearchExternalBinaryTree5(MatchState* state,
  const uint8_t* source, const uint8_t* end, size_t* offset_base);
size_t SearchExternalBinaryTree6(MatchState* state,
  const uint8_t* source, const uint8_t* end, size_t* offset_base);

size_t FindBinaryTreeExternalMatches(MatchState* state,
  SequenceStore* sequences, uint32_t repeated_offsets[3],
  const void* source, size_t source_size);

}
