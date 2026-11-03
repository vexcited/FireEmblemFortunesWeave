/*
  Adapted from Zstandard under the BSD license.
  Copyright Meta Platforms, Inc. and affiliates. All rights reserved.
  Original license: https://github.com/facebook/zstd/blob/v1.5.6/LICENSE
  Full license text: include/compression/zstd_bit_reader.hpp.
*/

#include "compression/zstd_sequence_encoder.hpp"

namespace fw::compression {
namespace {

unsigned HighestBit(uint32_t value) {
  return value ? 31 - __builtin_clz(value) : unsigned(-1);
}

bool IsError(size_t value) {
  return value > size_t(-120);
}

unsigned MinimumTableLog(size_t size, unsigned maximum) {
  const unsigned source = HighestBit(uint32_t(size)) + 1;
  const unsigned symbols = HighestBit(maximum) + 2;
  return source < symbols ? source : symbols;
}

size_t NormalizeRemainder(
  int16_t* normalized, unsigned log, const unsigned* counts,
  size_t total, unsigned maximum, int16_t low_probability
) {
  unsigned distributed = 0;
  const unsigned low_threshold = total >> log;
  unsigned low_one = (total * 3) >> (log + 1);
  for (unsigned symbol = 0; symbol <= maximum; ++symbol) {
    if (counts[symbol] == 0) {
      normalized[symbol] = 0;
    }
    else if (counts[symbol] <= low_threshold) {
      normalized[symbol] = low_probability;
      ++distributed;
      total -= counts[symbol];
    }
    else if (counts[symbol] <= low_one) {
      normalized[symbol] = 1;
      ++distributed;
      total -= counts[symbol];
    }
    else {
      normalized[symbol] = -2;
    }
  }
  unsigned remaining = (1u << log) - distributed;
  if (remaining == 0) {
    return 0;
  }
  if (total / remaining > low_one) {
    low_one = total * 3 / (remaining * 2);
    for (unsigned symbol = 0; symbol <= maximum; ++symbol) {
      if (normalized[symbol] == -2 && counts[symbol] <= low_one) {
        normalized[symbol] = 1;
        ++distributed;
        total -= counts[symbol];
      }
    }
    remaining = (1u << log) - distributed;
  }
  if (distributed == maximum + 1) {
    unsigned largest = 0;
    unsigned largest_count = 0;
    for (unsigned symbol = 0; symbol <= maximum; ++symbol) {
      if (counts[symbol] > largest_count) {
        largest = symbol;
        largest_count = counts[symbol];
      }
    }
    normalized[largest] += int16_t(remaining);
    return 0;
  }
  if (total == 0) {
    for (unsigned symbol = 0; remaining; symbol = (symbol + 1) %
         (maximum + 1)) {
      if (normalized[symbol] > 0) {
        --remaining;
        ++normalized[symbol];
      }
    }
    return 0;
  }
  const unsigned shift = 62 - log;
  const uint64_t middle = (uint64_t(1) << (shift - 1)) - 1;
  const uint64_t step = ((uint64_t(1) << shift) * remaining + middle) /
    uint32_t(total);
  uint64_t position = middle;
  for (unsigned symbol = 0; symbol <= maximum; ++symbol) {
    if (normalized[symbol] == -2) {
      const uint64_t end = position + counts[symbol] * step;
      const unsigned weight = unsigned(end >> shift) -
        unsigned(position >> shift);
      if (weight < 1) {
        return size_t(-1);
      }
      normalized[symbol] = int16_t(weight);
      position = end;
    }
  }
  return 0;
}

}

size_t BuildFseCompressionTable(
  uint32_t* table, const int16_t* counts, unsigned maximum_symbol,
  unsigned table_log, void* workspace, size_t workspace_size
) {
  const unsigned table_size = 1u << table_log;
  const unsigned mask = table_size - 1;
  const unsigned step = (table_size >> 1) + (table_size >> 3) + 3;
  const unsigned symbol_count = maximum_symbol + 1;
  auto* header = reinterpret_cast<uint16_t*>(table);
  auto* states = header + 2;
  auto* transforms = reinterpret_cast<FseCompressionTransform*>(
    table + 1 + (table_log ? table_size >> 1 : 1));
  auto* cumulative = static_cast<uint16_t*>(workspace);
  auto* symbols = reinterpret_cast<uint8_t*>(cumulative + symbol_count + 1);
  // The original rounds this check down before its wide spread stores.
  if (((maximum_symbol + 2 + table_size) / 2 + 2) * 4 > workspace_size) {
    return size_t(-44);
  }
  header[0] = uint16_t(table_log);
  header[1] = uint16_t(maximum_symbol);
  unsigned threshold = table_size - 1;
  cumulative[0] = 0;
  for (unsigned symbol = 0; symbol < symbol_count; ++symbol) {
    if (counts[symbol] == -1) {
      cumulative[symbol + 1] = cumulative[symbol] + 1;
      symbols[threshold--] = uint8_t(symbol);
    }
    else {
      cumulative[symbol + 1] = cumulative[symbol] + counts[symbol];
    }
  }
  cumulative[symbol_count] = uint16_t(table_size + 1);
  if (threshold == table_size - 1) {
    uint8_t* spread = symbols + table_size;
    size_t position = 0;
    uint64_t repeated = 0;
    for (unsigned symbol = 0; symbol < symbol_count; ++symbol) {
      __builtin_memcpy(spread + position, &repeated, 8);
      for (int i = 8; i < counts[symbol]; i += 8) {
        __builtin_memcpy(spread + position + i, &repeated, 8);
      }
      position += counts[symbol];
      repeated += 0x0101010101010101ull;
    }
    position = 0;
    for (unsigned i = 0; i < table_size; ++i) {
      symbols[position] = spread[i];
      position = (position + step) & mask;
    }
  }
  else {
    unsigned position = 0;
    for (unsigned symbol = 0; symbol < symbol_count; ++symbol) {
      for (int i = 0; i < counts[symbol]; ++i) {
        symbols[position] = uint8_t(symbol);
        position = (position + step) & mask;
        while (position > threshold) {
          position = (position + step) & mask;
        }
      }
    }
  }
  for (unsigned i = 0; i < table_size; ++i) {
    states[cumulative[symbols[i]]++] = uint16_t(table_size + i);
  }
  unsigned total = 0;
  for (unsigned symbol = 0; symbol <= maximum_symbol; ++symbol) {
    const int count = counts[symbol];
    switch (count) {
      case 0:
        transforms[symbol].bit_delta = ((table_log + 1) << 16) -
          table_size;
        break;
      case -1:
      case 1:
        transforms[symbol].bit_delta = (table_log << 16) - table_size;
        transforms[symbol].state_delta = int32_t(total - 1);
        ++total;
        break;
      default: {
        const unsigned bits = table_log - HighestBit(count - 1);
        transforms[symbol].bit_delta = (bits << 16) - (count << bits);
        transforms[symbol].state_delta = int32_t(total - count);
        total += count;
        break;
      }
    }
  }
  return 0;
}

size_t WriteNormalizedCounts(
  void* destination, size_t capacity, const int16_t* counts,
  unsigned maximum_symbol, unsigned table_log
) {
  if (table_log > 12) {
    return size_t(-44);
  }
  if (table_log < 5) {
    return size_t(-1);
  }
  const size_t bound = maximum_symbol ?
    (((maximum_symbol + 1) * table_log + 6) / 8) + 3 : 512;
  const bool safe = capacity >= bound;
  auto* start = static_cast<uint8_t*>(destination);
  auto* output = start;
  uint32_t bits = table_log - 5;
  unsigned bit_count = 4;
  int remaining = (1 << table_log) + 1;
  int threshold = 1 << table_log;
  int width = table_log + 1;
  unsigned symbol = 0;
  bool previous_zero = false;
  auto flush = [&]() {
    if (!safe && size_t(output - start) + 2 > capacity) {
      return false;
    }
    output[0] = uint8_t(bits);
    output[1] = uint8_t(bits >> 8);
    output += 2;
    bits >>= 16;
    return true;
  };
  while (symbol <= maximum_symbol && remaining > 1) {
    if (previous_zero) {
      unsigned run = symbol;
      while (symbol <= maximum_symbol && counts[symbol] == 0) {
        ++symbol;
      }
      if (symbol == maximum_symbol + 1) {
        break;
      }
      while (symbol >= run + 24) {
        run += 24;
        bits += 0xffffu << bit_count;
        if (!flush()) {
          return size_t(-70);
        }
      }
      while (symbol >= run + 3) {
        run += 3;
        bits += 3u << bit_count;
        bit_count += 2;
      }
      bits += (symbol - run) << bit_count;
      bit_count += 2;
      if (bit_count > 16) {
        if (!flush()) {
          return size_t(-70);
        }
        bit_count -= 16;
      }
    }
    int count = counts[symbol++];
    const int maximum = (2 * threshold - 1) - remaining;
    remaining -= count < 0 ? -count : count;
    ++count;
    if (count >= threshold) {
      count += maximum;
    }
    bits += uint32_t(count) << bit_count;
    bit_count += width - (count < maximum);
    previous_zero = count == 1;
    if (remaining < 1) {
      return size_t(-1);
    }
    while (remaining < threshold) {
      --width;
      threshold >>= 1;
    }
    if (bit_count > 16) {
      if (!flush()) {
        return size_t(-70);
      }
      bit_count -= 16;
    }
  }
  if (remaining != 1) {
    return size_t(-1);
  }
  if (!safe && size_t(output - start) + 2 > capacity) {
    return size_t(-70);
  }
  output[0] = uint8_t(bits);
  output[1] = uint8_t(bits >> 8);
  return size_t(output - start) + (bit_count + 7) / 8;
}

unsigned OptimalFseTableLog(
  unsigned maximum_log, size_t source_size, unsigned maximum_symbol
) {
  const unsigned source_bits = HighestBit(uint32_t(source_size - 1)) - 2;
  const unsigned minimum = MinimumTableLog(source_size, maximum_symbol);
  unsigned log = maximum_log ? maximum_log : 11;
  if (source_bits < log) {
    log = source_bits;
  }
  if (minimum > log) {
    log = minimum;
  }
  if (log < 5) {
    log = 5;
  }
  return log > 12 ? 12 : log;
}

size_t NormalizeFseCounts(
  int16_t* normalized, unsigned table_log, const unsigned* counts,
  size_t total, unsigned maximum_symbol, unsigned low_probability
) {
  if (table_log == 0) {
    table_log = 11;
  }
  if (table_log < 5) {
    return size_t(-1);
  }
  if (table_log > 12) {
    return size_t(-44);
  }
  if (table_log < MinimumTableLog(total, maximum_symbol)) {
    return size_t(-1);
  }
  static constexpr uint32_t rounding[] = {
    0, 473195, 504333, 520860, 550000, 700000, 750000, 830000
  };
  const int16_t low_count = low_probability ? -1 : 1;
  const unsigned shift = 62 - table_log;
  const uint64_t step = (uint64_t(1) << 62) / uint32_t(total);
  const uint64_t unit = uint64_t(1) << (shift - 20);
  const unsigned low_threshold = total >> table_log;
  int remaining = 1 << table_log;
  unsigned largest = 0;
  int16_t largest_weight = 0;
  for (unsigned symbol = 0; symbol <= maximum_symbol; ++symbol) {
    if (counts[symbol] == total) {
      return 0;
    }
    if (counts[symbol] == 0) {
      normalized[symbol] = 0;
    }
    else if (counts[symbol] <= low_threshold) {
      normalized[symbol] = low_count;
      --remaining;
    }
    else {
      int16_t weight = int16_t((counts[symbol] * step) >> shift);
      if (weight < 8) {
        weight += counts[symbol] * step - (uint64_t(weight) << shift) >
          unit * rounding[weight];
      }
      if (weight > largest_weight) {
        largest_weight = weight;
        largest = symbol;
      }
      normalized[symbol] = weight;
      remaining -= weight;
    }
  }
  if (-remaining >= (normalized[largest] >> 1)) {
    const size_t result = NormalizeRemainder(normalized, table_log,
      counts, total, maximum_symbol, low_count);
    if (IsError(result)) {
      return result;
    }
  }
  else {
    normalized[largest] += int16_t(remaining);
  }
  return table_log;
}

size_t BuildFseRunLengthTable(uint32_t* table, uint8_t symbol) {
  auto* header = reinterpret_cast<uint16_t*>(table);
  header[0] = 0;
  header[1] = symbol;
  table[1] = 0;
  auto* transforms = reinterpret_cast<FseCompressionTransform*>(table + 2);
  transforms[symbol].state_delta = 0;
  transforms[symbol].bit_delta = 0;
  return 0;
}

namespace {

constexpr unsigned ProbabilityCost[256] = {
  0, 2048, 1792, 1642, 1536, 1453, 1386, 1329, 1280, 1236, 1197, 1162,
  1130, 1100, 1073, 1047, 1024, 1001, 980, 960, 941, 923, 906, 889,
  874, 859, 844, 830, 817, 804, 791, 779, 768, 756, 745, 734,
  724, 714, 704, 694, 685, 676, 667, 658, 650, 642, 633, 626,
  618, 610, 603, 595, 588, 581, 574, 567, 561, 554, 548, 542,
  535, 529, 523, 517, 512, 506, 500, 495, 489, 484, 478, 473,
  468, 463, 458, 453, 448, 443, 438, 434, 429, 424, 420, 415,
  411, 407, 402, 398, 394, 390, 386, 382, 377, 373, 370, 366,
  362, 358, 354, 350, 347, 343, 339, 336, 332, 329, 325, 322,
  318, 315, 311, 308, 305, 302, 298, 295, 292, 289, 286, 282,
  279, 276, 273, 270, 267, 264, 261, 258, 256, 253, 250, 247,
  244, 241, 239, 236, 233, 230, 228, 225, 222, 220, 217, 215,
  212, 209, 207, 204, 202, 199, 197, 194, 192, 190, 187, 185,
  182, 180, 178, 175, 173, 171, 168, 166, 164, 162, 159, 157,
  155, 153, 151, 149, 146, 144, 142, 140, 138, 136, 134, 132,
  130, 128, 126, 123, 121, 119, 117, 115, 114, 112, 110, 108,
  106, 104, 102, 100, 98, 96, 94, 93, 91, 89, 87, 85,
  83, 82, 80, 78, 76, 74, 73, 71, 69, 67, 66, 64,
  62, 61, 59, 57, 55, 54, 52, 50, 49, 47, 46, 44,
  42, 41, 39, 37, 36, 34, 33, 31, 30, 28, 26, 25,
  23, 22, 20, 19, 17, 16, 14, 13, 11, 10, 8, 7,
  5, 4, 2, 1,
};

}

size_t CountSequenceSymbols(
  unsigned* counts, unsigned* maximum_symbol, const void* source,
  size_t source_size, void* workspace, size_t workspace_size
) {
  const auto* input = static_cast<const uint8_t*>(source);
  const unsigned maximum = *maximum_symbol;
  const size_t count_size = (maximum + 1) * sizeof(unsigned);
  if (source_size < 1500) {
    __builtin_memset(counts, 0, count_size);
    if (source_size == 0) {
      *maximum_symbol = 0;
      return 0;
    }
    for (size_t i = 0; i < source_size; ++i) {
      ++counts[input[i]];
    }
    unsigned last = maximum;
    while (counts[last] == 0) {
      --last;
    }
    *maximum_symbol = last;
    unsigned largest = 0;
    for (unsigned symbol = 0; symbol <= last; ++symbol) {
      if (counts[symbol] > largest) {
        largest = counts[symbol];
      }
    }
    return largest;
  }
  if (reinterpret_cast<uintptr_t>(workspace) & 3) {
    return size_t(-1);
  }
  if (workspace_size < 4096) {
    return size_t(-66);
  }
  auto* lanes = static_cast<unsigned*>(workspace);
  __builtin_memset(lanes, 0, 4096);
  size_t position = 0;
  while (position + 20 <= source_size) {
    for (unsigned i = 0; i < 16; ++i) {
      ++lanes[(i & 3) * 256 + input[position + i]];
    }
    position += 16;
  }
  for (; position < source_size; ++position) {
    ++lanes[input[position]];
  }
  unsigned largest = 0;
  for (unsigned symbol = 0; symbol < 256; ++symbol) {
    lanes[symbol] += lanes[256 + symbol] + lanes[512 + symbol] +
      lanes[768 + symbol];
    if (lanes[symbol] > largest) {
      largest = lanes[symbol];
    }
  }
  unsigned last = 255;
  while (lanes[last] == 0) {
    --last;
  }
  *maximum_symbol = last;
  __builtin_memmove(counts, lanes, count_size);
  return largest;
}

size_t FseBitCost(
  const uint32_t* table, const unsigned* counts, unsigned maximum_symbol
) {
  const auto* header = reinterpret_cast<const uint16_t*>(table);
  const unsigned log = header[0];
  if (header[1] < maximum_symbol) {
    return size_t(-1);
  }
  const auto* transforms = reinterpret_cast<const FseCompressionTransform*>(
    table + 1 + (log ? (1u << (log - 1)) : 1));
  size_t cost = 0;
  for (unsigned symbol = 0; symbol <= maximum_symbol; ++symbol) {
    const unsigned delta = transforms[symbol].bit_delta;
    const unsigned minimum = delta >> 16;
    const unsigned threshold = (minimum + 1) << 16;
    const unsigned distance = threshold - (delta + (1u << log));
    const unsigned bit_cost = (minimum + 1) * 256 -
      ((distance << 8) >> log);
    if (counts[symbol] == 0) {
      continue;
    }
    if (bit_cost >= (log + 1) * 256) {
      return size_t(-1);
    }
    cost += size_t(counts[symbol]) * bit_cost;
  }
  return cost >> 8;
}

size_t CrossEntropyCost(
  const int16_t* normalized, unsigned table_log, const unsigned* counts,
  unsigned maximum_symbol
) {
  size_t cost = 0;
  for (unsigned symbol = 0; symbol <= maximum_symbol; ++symbol) {
    const unsigned weight = normalized[symbol] == -1 ? 1 :
      unsigned(normalized[symbol]);
    cost += counts[symbol] * ProbabilityCost[weight << (8 - table_log)];
  }
  return cost >> 8;
}

unsigned SelectSequenceEncoding(
  unsigned* repeat_mode, const unsigned* counts, unsigned maximum_symbol,
  size_t most_frequent, size_t sequence_count, unsigned table_log,
  const uint32_t* previous_table, const int16_t* default_counts,
  unsigned default_log, unsigned default_allowed, unsigned strategy
) {
  if (most_frequent == sequence_count) {
    *repeat_mode = 0;
    return default_allowed && sequence_count <= 2 ? 0 : 1;
  }
  if (strategy < 4) {
    if (default_allowed) {
      const size_t minimum = ((size_t(1) << default_log) * (10 - strategy))
        >> 3;
      if (*repeat_mode == 2 && sequence_count < 1000) {
        return 3;
      }
      if (sequence_count < minimum ||
          most_frequent < (sequence_count >> (default_log - 1))) {
        *repeat_mode = 0;
        return 0;
      }
    }
  }
  else {
    const size_t basic_cost = default_allowed ?
      CrossEntropyCost(default_counts, default_log, counts, maximum_symbol) :
      size_t(-1);
    const size_t repeat_cost = *repeat_mode ?
      FseBitCost(previous_table, counts, maximum_symbol) : size_t(-1);
    uint8_t header[512];
    int16_t normalized[53];
    const unsigned log = OptimalFseTableLog(table_log, sequence_count,
      maximum_symbol);
    size_t count_cost = NormalizeFseCounts(normalized, log, counts,
      sequence_count, maximum_symbol, sequence_count >= 2048);
    if (!IsError(count_cost)) {
      count_cost = WriteNormalizedCounts(header, sizeof(header), normalized,
        maximum_symbol, log);
    }
    unsigned entropy_cost = 0;
    for (unsigned symbol = 0; symbol <= maximum_symbol; ++symbol) {
      unsigned weight = unsigned((256u * counts[symbol]) /
        sequence_count);
      if (counts[symbol] && weight == 0) {
        weight = 1;
      }
      entropy_cost += counts[symbol] * ProbabilityCost[weight];
    }
    const size_t compressed_cost = (count_cost << 3) + (entropy_cost >> 8);
    if (basic_cost <= repeat_cost && basic_cost <= compressed_cost) {
      *repeat_mode = 0;
      return 0;
    }
    if (repeat_cost <= compressed_cost) {
      return 3;
    }
  }
  *repeat_mode = 1;
  return 2;
}

size_t BuildSequenceCompressionTable(
  void* destination, size_t capacity, uint32_t* next_table,
  unsigned table_log, unsigned encoding, unsigned* counts,
  unsigned maximum_symbol, const uint8_t* codes, size_t sequence_count,
  const int16_t* default_counts, unsigned default_log,
  unsigned default_maximum, const uint32_t* previous_table,
  size_t previous_size, void* workspace, size_t workspace_size
) {
  switch (encoding) {
    case 1:
      BuildFseRunLengthTable(next_table, uint8_t(maximum_symbol));
      if (capacity == 0) {
        return size_t(-70);
      }
      *static_cast<uint8_t*>(destination) = codes[0];
      return 1;
    case 3:
      __builtin_memcpy(next_table, previous_table, previous_size);
      return 0;
    case 0:
      return BuildFseCompressionTable(next_table, default_counts,
        default_maximum, default_log, workspace, workspace_size);
    case 2: {
      auto* normalized = static_cast<int16_t*>(workspace);
      auto* table_workspace = reinterpret_cast<uint8_t*>(workspace) + 108;
      const unsigned log = OptimalFseTableLog(table_log, sequence_count,
        maximum_symbol);
      size_t total = sequence_count;
      if (counts[codes[sequence_count - 1]] > 1) {
        --counts[codes[sequence_count - 1]];
        --total;
      }
      size_t result = NormalizeFseCounts(normalized, log, counts, total,
        maximum_symbol, total >= 2048);
      if (IsError(result)) {
        return result;
      }
      result = WriteNormalizedCounts(destination, capacity, normalized,
        maximum_symbol, log);
      if (IsError(result)) {
        return result;
      }
      const size_t table_result = BuildFseCompressionTable(next_table,
        normalized, maximum_symbol, log, table_workspace, 1140);
      return IsError(table_result) ? table_result : result;
    }
    default:
      return size_t(-1);
  }
}

namespace {

constexpr uint8_t LiteralBits[] = {
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  1, 1, 1, 1, 2, 2, 3, 3, 4, 6, 7, 8, 9, 10, 11, 12,
  13, 14, 15, 16,
};

constexpr uint8_t MatchBits[] = {
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  1, 1, 1, 1, 2, 2, 3, 3, 4, 4, 5, 7, 8, 9, 10, 11,
  12, 13, 14, 15, 16,
};

constexpr int16_t DefaultLiterals[] = {
  4, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1,
  2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 2, 1, 1, 1, 1, 1,
  -1, -1, -1, -1,
};

constexpr int16_t DefaultMatches[] = {
  1, 4, 3, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, -1, -1,
  -1, -1, -1, -1, -1,
};

constexpr int16_t DefaultOffsets[] = {
  1, 1, 1, 1, 1, 1, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, -1, -1, -1, -1, -1,
};

constexpr uint8_t LiteralCodes[] = {
  0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15,
  16, 16, 17, 17, 18, 18, 19, 19, 20, 20, 20, 20, 21, 21, 21, 21,
  22, 22, 22, 22, 22, 22, 22, 22, 23, 23, 23, 23, 23, 23, 23, 23,
  24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24,
};

constexpr uint8_t MatchCodes[] = {
  0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15,
  16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31,
  32, 32, 33, 33, 34, 34, 35, 35, 36, 36, 36, 36, 37, 37, 37, 37,
  38, 38, 38, 38, 38, 38, 38, 38, 39, 39, 39, 39, 39, 39, 39, 39,
  40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40,
  41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41,
  42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42,
  42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42,
};


struct BitWriter {
  uint64_t value;
  unsigned count;
  uint8_t* start;
  uint8_t* position;
  uint8_t* end;

  void Add(uint64_t bits, unsigned width) {
    value |= (bits & ((uint64_t(1) << width) - 1)) << count;
    count += width;
  }

  void Flush() {
    __builtin_memcpy(position, &value, 8);
    const unsigned bytes = count >> 3;
    position += bytes;
    if (position > end) {
      position = end;
    }
    count &= 7;
    value >>= bytes * 8;
  }
};

struct CompressionState {
  size_t value;
  const uint16_t* states;
  const FseCompressionTransform* transforms;
  unsigned log;

  CompressionState(const uint32_t* table, unsigned symbol) {
    const auto* header = reinterpret_cast<const uint16_t*>(table);
    log = header[0];
    states = header + 2;
    transforms = reinterpret_cast<const FseCompressionTransform*>(
      table + 1 + (log ? 1u << (log - 1) : 1));
    const auto transform = transforms[symbol];
    const unsigned bits = (transform.bit_delta + 32768) >> 16;
    value = (bits << 16) - transform.bit_delta;
    value = states[(value >> bits) + transform.state_delta];
  }

  void Encode(BitWriter& writer, unsigned symbol) {
    const auto transform = transforms[symbol];
    const unsigned bits = unsigned((value + transform.bit_delta) >> 16);
    writer.Add(value, bits);
    value = states[(value >> bits) + transform.state_delta];
  }

  void Flush(BitWriter& writer) const {
    writer.Add(value, log);
    writer.Flush();
  }
};

}

void BuildSequenceStatistics(
  SequenceEncodingStatistics* statistics, const SequenceStore* sequences,
  size_t sequence_count, const SequenceCompressionTables* previous,
  SequenceCompressionTables* next, uint8_t* destination,
  const uint8_t* destination_end, unsigned strategy, unsigned* counts,
  void* workspace, size_t workspace_size
) {
  statistics->last_count_size = 0;
  for (const MatchSequence* sequence = sequences->sequences_start;
       sequence < sequences->sequences; ++sequence) {
    const size_t i = sequence - sequences->sequences_start;
    const unsigned literal_length = sequence->literal_length;
    const unsigned match_length = sequence->match_length_base;
    sequences->literal_codes[i] = literal_length < 64 ?
      LiteralCodes[literal_length] : HighestBit(literal_length) + 19;
    sequences->offset_codes[i] = HighestBit(sequence->offset_base);
    sequences->match_codes[i] = match_length < 128 ?
      MatchCodes[match_length] : HighestBit(match_length) + 36;
  }
  if (sequences->long_length_type == LongSequenceLength::Literal) {
    sequences->literal_codes[sequences->long_length_position] = 35;
  }
  if (sequences->long_length_type == LongSequenceLength::Match) {
    sequences->match_codes[sequences->long_length_position] = 52;
  }
  statistics->long_offsets = 0;
  const struct {
    unsigned* encoding;
    unsigned maximum;
    unsigned log;
    unsigned* repeat;
    const unsigned* previous_repeat;
    uint32_t* next_table;
    const uint32_t* previous_table;
    const uint8_t* codes;
    const int16_t* default_counts;
    unsigned default_log;
    unsigned default_maximum;
    size_t table_size;
  } alphabets[] = {
    {&statistics->literal_type, 35, 9, &next->literal_repeat,
     &previous->literal_repeat, next->literal_lengths,
     previous->literal_lengths, sequences->literal_codes, DefaultLiterals,
     6, 35, sizeof(next->literal_lengths)},
    {&statistics->offset_type, 31, 8, &next->offset_repeat,
     &previous->offset_repeat, next->offsets, previous->offsets,
     sequences->offset_codes, DefaultOffsets, 5, 28, sizeof(next->offsets)},
    {&statistics->match_type, 52, 9, &next->match_repeat,
     &previous->match_repeat, next->match_lengths, previous->match_lengths,
     sequences->match_codes, DefaultMatches, 6, 52,
     sizeof(next->match_lengths)}
  };
  uint8_t* output = destination;
  for (const auto& alphabet : alphabets) {
    unsigned maximum = alphabet.maximum;
    const size_t most_frequent = CountSequenceSymbols(counts, &maximum,
      alphabet.codes, sequence_count, workspace, workspace_size);
    *alphabet.repeat = *alphabet.previous_repeat;
    const unsigned encoding = SelectSequenceEncoding(alphabet.repeat,
      counts, maximum, most_frequent, sequence_count, alphabet.log,
      alphabet.previous_table, alphabet.default_counts,
      alphabet.default_log, maximum <= alphabet.default_maximum, strategy);
    *alphabet.encoding = encoding;
    const size_t size = BuildSequenceCompressionTable(output,
      size_t(destination_end - output), alphabet.next_table, alphabet.log,
      encoding, counts, maximum, alphabet.codes, sequence_count,
      alphabet.default_counts, alphabet.default_log, alphabet.default_maximum,
      alphabet.previous_table, alphabet.table_size, workspace, workspace_size);
    if (IsError(size)) {
      statistics->size = size;
      return;
    }
    if (encoding == 2) {
      statistics->last_count_size = size;
    }
    output += size;
  }
  statistics->size = size_t(output - destination);
}

size_t EncodeSequences(
  void* destination, size_t capacity, const uint32_t* match_table,
  const uint8_t* match_codes, const uint32_t* offset_table,
  const uint8_t* offset_codes, const uint32_t* literal_table,
  const uint8_t* literal_codes, const MatchSequence* sequences,
  size_t sequence_count, int long_offsets
) {
  if (capacity < 9) {
    return size_t(-70);
  }
  auto* start = static_cast<uint8_t*>(destination);
  BitWriter writer{0, 0, start, start, start + capacity - 8};
  const size_t last = sequence_count - 1;
  CompressionState match_state(match_table, match_codes[last]);
  CompressionState offset_state(offset_table, offset_codes[last]);
  CompressionState literal_state(literal_table, literal_codes[last]);
  auto add_offset = [&](uint32_t offset, unsigned width) {
    const unsigned extra = long_offsets && width > 56 ? width - 56 : 0;
    if (extra) {
      writer.Add(offset, extra);
      writer.Flush();
    }
    writer.Add(offset >> extra, width - extra);
  };
  writer.Add(sequences[last].literal_length, LiteralBits[literal_codes[last]]);
  writer.Add(sequences[last].match_length_base, MatchBits[match_codes[last]]);
  add_offset(sequences[last].offset_base, offset_codes[last]);
  writer.Flush();
  for (size_t i = last - 1; i < sequence_count; --i) {
    const unsigned literal = literal_codes[i];
    const unsigned match = match_codes[i];
    const unsigned offset = offset_codes[i];
    const unsigned literal_bits = LiteralBits[literal];
    const unsigned match_bits = MatchBits[match];
    offset_state.Encode(writer, offset);
    match_state.Encode(writer, match);
    literal_state.Encode(writer, literal);
    const unsigned extra_bits = offset + match_bits + literal_bits;
    if (extra_bits >= 31) {
      writer.Flush();
    }
    writer.Add(sequences[i].literal_length, literal_bits);
    writer.Add(sequences[i].match_length_base, match_bits);
    if (extra_bits > 56) {
      writer.Flush();
    }
    add_offset(sequences[i].offset_base, offset);
    writer.Flush();
  }
  match_state.Flush(writer);
  offset_state.Flush(writer);
  literal_state.Flush(writer);
  writer.Add(1, 1);
  writer.Flush();
  if (writer.position >= writer.end) {
    return size_t(-70);
  }
  return size_t(writer.position - start) + (writer.count != 0);
}

}
