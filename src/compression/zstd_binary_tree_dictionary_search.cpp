/*
  Adapted from Zstandard under the BSD license.
  Copyright Meta Platforms, Inc. and affiliates. All rights reserved.
  Original license: https://github.com/facebook/zstd/blob/v1.5.6/LICENSE
  Full license text: include/compression/zstd_bit_reader.hpp.
*/

#include "compression/zstd_binary_tree_dictionary.hpp"
#include "compression/zstd_block_internal.hpp"

namespace fw::compression {
namespace {

using block_detail::Read;
using block_detail::NextToUpdate;

uint32_t Hash(const uint8_t* source, unsigned bits, unsigned length) {
  if (length != 5 && length != 6) {
    return (Read<uint32_t>(source) * uint32_t(2654435761)) >> (32 - bits);
  }
  uint64_t multiplier = length == 5
    ? 0xcf1bbcdcbb000000ULL : 0xcf1bbcdcbf9b0000ULL;
  return (Read<uint64_t>(source) * multiplier) >> (64 - bits);
}

template <unsigned Mode>
size_t Search(
  MatchState* state, const uint8_t* source, const uint8_t* end,
  size_t* offset_base, unsigned minimum
) {
  const uint8_t* base = state->window.base;
  uint32_t index = NextToUpdate(state);
  if (source < base + index) {
    return 0;
  }
  uint32_t target = uint32_t(source - base);
  uint32_t mask = (1u << (state->parameters.chain_log - 1)) - 1;
  for (; index < target; ++index) {
    uint32_t hash = Hash(base + index, state->parameters.hash_log, minimum);
    uint32_t previous = state->hash_table[hash];
    state->hash_table[hash] = index;
    uint32_t* node = state->chain_table + 2 * (index & mask);
    node[0] = previous;
    node[1] = 1;
  }
  NextToUpdate(state) = target;
  return FindBinaryTreeBestMatch(
    state, source, end, offset_base, minimum, Mode
  );
}

}

size_t SearchPreparedBinaryTree4(MatchState* state,
  const uint8_t* source, const uint8_t* end, size_t* offset_base) {
  return Search<2>(state, source, end, offset_base, 4);
}

size_t SearchPreparedBinaryTree5(MatchState* state,
  const uint8_t* source, const uint8_t* end, size_t* offset_base) {
  return Search<2>(state, source, end, offset_base, 5);
}

size_t SearchPreparedBinaryTree6(MatchState* state,
  const uint8_t* source, const uint8_t* end, size_t* offset_base) {
  return Search<2>(state, source, end, offset_base, 6);
}

size_t SearchExternalBinaryTree4(MatchState* state,
  const uint8_t* source, const uint8_t* end, size_t* offset_base) {
  return Search<1>(state, source, end, offset_base, 4);
}

size_t SearchExternalBinaryTree5(MatchState* state,
  const uint8_t* source, const uint8_t* end, size_t* offset_base) {
  return Search<1>(state, source, end, offset_base, 5);
}

size_t SearchExternalBinaryTree6(MatchState* state,
  const uint8_t* source, const uint8_t* end, size_t* offset_base) {
  return Search<1>(state, source, end, offset_base, 6);
}

}
