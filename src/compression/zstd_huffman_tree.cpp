/*
  Adapted from Zstandard under the BSD license.
  Copyright Meta Platforms, Inc. and affiliates. All rights reserved.
  Original license: https://github.com/facebook/zstd/blob/v1.5.6/LICENSE
  Full license text: include/compression/zstd_bit_reader.hpp.
*/

#include "compression/zstd_huffman_encoder.hpp"

namespace fw::compression {
namespace {

struct RankPosition {
  uint16_t base;
  uint16_t current;
};

struct TreeWorkspace {
  HuffmanCompressionNode nodes[512];
  RankPosition ranks[192];
};

static_assert(sizeof(TreeWorkspace) == 4864);

unsigned HighestBit(uint32_t value) {
  return value ? 31 - __builtin_clz(value) : unsigned(-1);
}

unsigned RankIndex(unsigned count) {
  return count < 166 ? count : HighestBit(count) + 158;
}

void SortSymbols(
  HuffmanCompressionNode* nodes, const unsigned* counts, unsigned maximum,
  RankPosition* ranks
) {
  __builtin_memset(ranks, 0, 192 * sizeof(*ranks));
  for (unsigned symbol = 0; symbol <= maximum; ++symbol) {
    ++ranks[RankIndex(counts[symbol])].base;
  }
  for (unsigned rank = 191; rank > 0; --rank) {
    ranks[rank - 1].base += ranks[rank].base;
    ranks[rank - 1].current = ranks[rank - 1].base;
  }
  for (unsigned symbol = 0; symbol <= maximum; ++symbol) {
    const unsigned count = counts[symbol];
    const unsigned position = ranks[RankIndex(count) + 1].current++;
    nodes[position].count = count;
    nodes[position].symbol = uint8_t(symbol);
  }
  for (unsigned rank = 166; rank < 191; ++rank) {
    const int size = ranks[rank].current - ranks[rank].base;
    if (size > 1) {
      SortHuffmanNodes(nodes + ranks[rank].base, 0, size - 1);
    }
  }
}

int BuildTree(HuffmanCompressionNode* nodes, unsigned maximum) {
  int last = int(maximum);
  while (nodes[last].count == 0) {
    --last;
  }
  int symbol = last;
  int next = 256;
  int parent = 256;
  const int root = 256 + last - 1;
  nodes[parent].count = nodes[symbol].count + nodes[symbol - 1].count;
  nodes[symbol].parent = uint16_t(parent);
  nodes[symbol - 1].parent = uint16_t(parent);
  ++parent;
  symbol -= 2;
  for (int i = parent; i <= root; ++i) {
    nodes[i].count = 1u << 30;
  }
  nodes[-1].count = 1u << 31;
  while (parent <= root) {
    const int first = nodes[symbol].count < nodes[next].count ?
      symbol-- : next++;
    const int second = nodes[symbol].count < nodes[next].count ?
      symbol-- : next++;
    nodes[parent].count = nodes[first].count + nodes[second].count;
    nodes[first].parent = uint16_t(parent);
    nodes[second].parent = uint16_t(parent);
    ++parent;
  }
  nodes[root].bits = 0;
  for (int i = root - 1; i >= 256; --i) {
    nodes[i].bits = nodes[nodes[i].parent].bits + 1;
  }
  for (int i = 0; i <= last; ++i) {
    nodes[i].bits = nodes[nodes[i].parent].bits + 1;
  }
  return last;
}

unsigned LimitHeight(
  HuffmanCompressionNode* nodes, unsigned last, unsigned target
) {
  const unsigned largest = nodes[last].bits;
  if (largest <= target) {
    return largest;
  }
  const unsigned unit = 1u << (largest - target);
  int cost = 0;
  int position = int(last);
  while (nodes[position].bits > target) {
    cost += unit - (1u << (largest - nodes[position].bits));
    nodes[position--].bits = uint8_t(target);
  }
  while (nodes[position].bits == target) {
    --position;
  }
  cost >>= largest - target;
  constexpr unsigned missing = 0xf0f0f0f0;
  unsigned last_rank[14];
  __builtin_memset(last_rank, 0xf0, sizeof(last_rank));
  unsigned bits = target;
  for (int i = position; i >= 0; --i) {
    if (nodes[i].bits < bits) {
      bits = nodes[i].bits;
      last_rank[target - bits] = unsigned(i);
    }
  }
  while (cost > 0) {
    unsigned decrease = HighestBit(unsigned(cost)) + 1;
    for (; decrease > 1; --decrease) {
      const unsigned high = last_rank[decrease];
      const unsigned low = last_rank[decrease - 1];
      if (high == missing) {
        continue;
      }
      if (low == missing || nodes[high].count <= 2 * nodes[low].count) {
        break;
      }
    }
    while (decrease <= 12 && last_rank[decrease] == missing) {
      ++decrease;
    }
    cost -= 1 << (decrease - 1);
    ++nodes[last_rank[decrease]].bits;
    if (last_rank[decrease - 1] == missing) {
      last_rank[decrease - 1] = last_rank[decrease];
    }
    if (last_rank[decrease] == 0) {
      last_rank[decrease] = missing;
    }
    else {
      --last_rank[decrease];
      if (nodes[last_rank[decrease]].bits != target - decrease) {
        last_rank[decrease] = missing;
      }
    }
  }
  while (cost < 0) {
    if (last_rank[1] == missing) {
      while (nodes[position].bits == target) {
        --position;
      }
      --nodes[position + 1].bits;
      last_rank[1] = unsigned(position + 1);
    }
    else {
      --nodes[last_rank[1] + 1].bits;
      ++last_rank[1];
    }
    ++cost;
  }
  return target;
}

void WriteTreeTable(
  uint64_t* table, const HuffmanCompressionNode* nodes, int last,
  unsigned maximum, unsigned bits
) {
  uint16_t counts[13] = {};
  uint16_t values[13] = {};
  for (int i = 0; i <= last; ++i) {
    ++counts[nodes[i].bits];
  }
  uint16_t minimum = 0;
  for (unsigned i = bits; i > 0; --i) {
    values[i] = minimum;
    minimum += counts[i];
    minimum >>= 1;
  }
  for (unsigned i = 0; i <= maximum; ++i) {
    table[nodes[i].symbol + 1] = nodes[i].bits;
  }
  for (unsigned symbol = 0; symbol <= maximum; ++symbol) {
    const unsigned width = table[symbol + 1] & 255;
    const uint64_t value = values[width]++;
    if (width) {
      table[symbol + 1] |= value << (64 - width);
    }
  }
  table[0] = bits | (uint64_t(maximum) << 8);
}

}

void SortHuffmanNodes(HuffmanCompressionNode* nodes, int low, int high) {
  if (high - low < 8) {
    for (int i = low + 1; i <= high; ++i) {
      const auto node = nodes[i];
      int position = i - 1;
      while (position >= low && nodes[position].count < node.count) {
        nodes[position + 1] = nodes[position];
        --position;
      }
      nodes[position + 1] = node;
    }
    return;
  }
  while (low < high) {
    const unsigned pivot = nodes[high].count;
    int position = low - 1;
    for (int i = low; i < high; ++i) {
      if (nodes[i].count > pivot) {
        ++position;
        const auto temporary = nodes[position];
        nodes[position] = nodes[i];
        nodes[i] = temporary;
      }
    }
    ++position;
    const auto temporary = nodes[position];
    nodes[position] = nodes[high];
    nodes[high] = temporary;
    if (position - low < high - position) {
      SortHuffmanNodes(nodes, low, position - 1);
      low = position + 1;
    }
    else {
      SortHuffmanNodes(nodes, position + 1, high);
      high = position - 1;
    }
  }
}

size_t BuildHuffmanCompressionTable(
  uint64_t* table, const unsigned* counts, unsigned maximum_symbol,
  unsigned maximum_bits, void* workspace, size_t workspace_size
) {
  const size_t alignment = -reinterpret_cast<uintptr_t>(workspace) & 3;
  if (workspace_size < alignment || workspace_size - alignment < 4864) {
    return size_t(-66);
  }
  auto* work = reinterpret_cast<TreeWorkspace*>(
    static_cast<uint8_t*>(workspace) + alignment);
  if (maximum_bits == 0) {
    maximum_bits = 11;
  }
  if (maximum_symbol > 255) {
    return size_t(-46);
  }
  __builtin_memset(work->nodes, 0, sizeof(work->nodes));
  auto* nodes = work->nodes + 1;
  SortSymbols(nodes, counts, maximum_symbol, work->ranks);
  const int last = BuildTree(nodes, maximum_symbol);
  const unsigned bits = LimitHeight(nodes, unsigned(last), maximum_bits);
  if (bits > 12) {
    return size_t(-1);
  }
  WriteTreeTable(table, nodes, last, maximum_symbol, bits);
  return bits;
}

unsigned HuffmanSymbolBits(const uint64_t* table, unsigned symbol) {
  const unsigned maximum = (table[0] >> 8) & 255;
  return symbol <= maximum ? unsigned(table[symbol + 1] & 255) : 0;
}

size_t EstimateHuffmanSize(
  const uint64_t* table, const unsigned* counts, unsigned maximum_symbol
) {
  size_t bits = 0;
  for (unsigned symbol = 0; symbol <= maximum_symbol; ++symbol) {
    bits += (table[symbol + 1] & 255) * counts[symbol];
  }
  return bits >> 3;
}

int ValidateHuffmanCompressionTable(
  const uint64_t* table, const unsigned* counts, unsigned maximum_symbol
) {
  if (((table[0] >> 8) & 255) < maximum_symbol) {
    return 0;
  }
  unsigned invalid = 0;
  for (unsigned symbol = 0; symbol <= maximum_symbol; ++symbol) {
    invalid |= (counts[symbol] != 0) & ((table[symbol + 1] & 255) == 0);
  }
  return !invalid;
}

}
