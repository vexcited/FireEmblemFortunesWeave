/*
  Adapted from Zstandard under the BSD license.
  Copyright Meta Platforms, Inc. and affiliates. All rights reserved.
  Original license: https://github.com/facebook/zstd/blob/v1.5.6/LICENSE
  Full license text: include/compression/zstd_bit_reader.hpp.
*/

#include "compression/zstd_entropy.hpp"
#include "compression/zstd_sequences.hpp"

namespace fw::compression {
namespace {

constexpr uint32_t kLiteralBases[] = {
  0,
  1,
  2,
  3,
  4,
  5,
  6,
  7,
  8,
  9,
  10,
  11,
  12,
  13,
  14,
  15,
  16,
  18,
  20,
  22,
  24,
  28,
  32,
  40,
  48,
  64,
  128,
  256,
  512,
  1024,
  2048,
  4096,
  8192,
  16384,
  32768,
  65536,
};

constexpr uint8_t kLiteralBits[] = {
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  1,
  1,
  1,
  1,
  2,
  2,
  3,
  3,
  4,
  6,
  7,
  8,
  9,
  10,
  11,
  12,
  13,
  14,
  15,
  16,
};

constexpr SequenceTableStorage<64> kLiteralDefault = {
  {0x01010001, 6},
  {
    {0, 0, 4, 0},
    {16, 0, 4, 0},
    {32, 0, 5, 1},
    {0, 0, 5, 3},
    {0, 0, 5, 4},
    {0, 0, 5, 6},
    {0, 0, 5, 7},
    {0, 0, 5, 9},
    {0, 0, 5, 10},
    {0, 0, 5, 12},
    {0, 0, 6, 14},
    {0, 1, 5, 16},
    {0, 1, 5, 20},
    {0, 1, 5, 22},
    {0, 2, 5, 28},
    {0, 3, 5, 32},
    {0, 4, 5, 48},
    {32, 6, 5, 64},
    {0, 7, 5, 128},
    {0, 8, 6, 256},
    {0, 10, 6, 1024},
    {0, 12, 6, 4096},
    {32, 0, 4, 0},
    {0, 0, 4, 1},
    {0, 0, 5, 2},
    {32, 0, 5, 4},
    {0, 0, 5, 5},
    {32, 0, 5, 7},
    {0, 0, 5, 8},
    {32, 0, 5, 10},
    {0, 0, 5, 11},
    {0, 0, 6, 13},
    {32, 1, 5, 16},
    {0, 1, 5, 18},
    {32, 1, 5, 22},
    {0, 2, 5, 24},
    {32, 3, 5, 32},
    {0, 3, 5, 40},
    {0, 6, 4, 64},
    {16, 6, 4, 64},
    {32, 7, 5, 128},
    {0, 9, 6, 512},
    {0, 11, 6, 2048},
    {48, 0, 4, 0},
    {16, 0, 4, 1},
    {32, 0, 5, 2},
    {32, 0, 5, 3},
    {32, 0, 5, 5},
    {32, 0, 5, 6},
    {32, 0, 5, 8},
    {32, 0, 5, 9},
    {32, 0, 5, 11},
    {32, 0, 5, 12},
    {0, 0, 6, 15},
    {32, 1, 5, 18},
    {32, 1, 5, 20},
    {32, 2, 5, 24},
    {32, 2, 5, 28},
    {32, 3, 5, 40},
    {32, 4, 5, 48},
    {0, 16, 6, 65536},
    {0, 15, 6, 32768},
    {0, 14, 6, 16384},
    {0, 13, 6, 8192},
  },
};

constexpr uint32_t kOffsetBases[] = {
  0,
  1,
  1,
  5,
  13,
  29,
  61,
  125,
  253,
  509,
  1021,
  2045,
  4093,
  8189,
  16381,
  32765,
  65533,
  131069,
  262141,
  524285,
  1048573,
  2097149,
  4194301,
  8388605,
  16777213,
  33554429,
  67108861,
  134217725,
  268435453,
  536870909,
  1073741821,
  2147483645,
};

constexpr uint8_t kOffsetBits[] = {
  0,
  1,
  2,
  3,
  4,
  5,
  6,
  7,
  8,
  9,
  10,
  11,
  12,
  13,
  14,
  15,
  16,
  17,
  18,
  19,
  20,
  21,
  22,
  23,
  24,
  25,
  26,
  27,
  28,
  29,
  30,
  31,
};

constexpr SequenceTableStorage<32> kOffsetDefault = {
  {0x01010001, 5},
  {
    {0, 0, 5, 0},
    {0, 6, 4, 61},
    {0, 9, 5, 509},
    {0, 15, 5, 32765},
    {0, 21, 5, 2097149},
    {0, 3, 5, 5},
    {0, 7, 4, 125},
    {0, 12, 5, 4093},
    {0, 18, 5, 262141},
    {0, 23, 5, 8388605},
    {0, 5, 5, 29},
    {0, 8, 4, 253},
    {0, 14, 5, 16381},
    {0, 20, 5, 1048573},
    {0, 2, 5, 1},
    {16, 7, 4, 125},
    {0, 11, 5, 2045},
    {0, 17, 5, 131069},
    {0, 22, 5, 4194301},
    {0, 4, 5, 13},
    {16, 8, 4, 253},
    {0, 13, 5, 8189},
    {0, 19, 5, 524285},
    {0, 1, 5, 1},
    {16, 6, 4, 61},
    {0, 10, 5, 1021},
    {0, 16, 5, 65533},
    {0, 28, 5, 268435453},
    {0, 27, 5, 134217725},
    {0, 26, 5, 67108861},
    {0, 25, 5, 33554429},
    {0, 24, 5, 16777213},
  },
};

constexpr uint32_t kMatchBases[] = {
  3,
  4,
  5,
  6,
  7,
  8,
  9,
  10,
  11,
  12,
  13,
  14,
  15,
  16,
  17,
  18,
  19,
  20,
  21,
  22,
  23,
  24,
  25,
  26,
  27,
  28,
  29,
  30,
  31,
  32,
  33,
  34,
  35,
  37,
  39,
  41,
  43,
  47,
  51,
  59,
  67,
  83,
  99,
  131,
  259,
  515,
  1027,
  2051,
  4099,
  8195,
  16387,
  32771,
  65539,
};

constexpr uint8_t kMatchBits[] = {
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  1,
  1,
  1,
  1,
  2,
  2,
  3,
  3,
  4,
  4,
  5,
  7,
  8,
  9,
  10,
  11,
  12,
  13,
  14,
  15,
  16,
};

constexpr SequenceTableStorage<64> kMatchDefault = {
  {0x01010001, 6},
  {
    {0, 0, 6, 3},
    {0, 0, 4, 4},
    {32, 0, 5, 5},
    {0, 0, 5, 6},
    {0, 0, 5, 8},
    {0, 0, 5, 9},
    {0, 0, 5, 11},
    {0, 0, 6, 13},
    {0, 0, 6, 16},
    {0, 0, 6, 19},
    {0, 0, 6, 22},
    {0, 0, 6, 25},
    {0, 0, 6, 28},
    {0, 0, 6, 31},
    {0, 0, 6, 34},
    {0, 1, 6, 37},
    {0, 1, 6, 41},
    {0, 2, 6, 47},
    {0, 3, 6, 59},
    {0, 4, 6, 83},
    {0, 7, 6, 131},
    {0, 9, 6, 515},
    {16, 0, 4, 4},
    {0, 0, 4, 5},
    {32, 0, 5, 6},
    {0, 0, 5, 7},
    {32, 0, 5, 9},
    {0, 0, 5, 10},
    {0, 0, 6, 12},
    {0, 0, 6, 15},
    {0, 0, 6, 18},
    {0, 0, 6, 21},
    {0, 0, 6, 24},
    {0, 0, 6, 27},
    {0, 0, 6, 30},
    {0, 0, 6, 33},
    {0, 1, 6, 35},
    {0, 1, 6, 39},
    {0, 2, 6, 43},
    {0, 3, 6, 51},
    {0, 4, 6, 67},
    {0, 5, 6, 99},
    {0, 8, 6, 259},
    {32, 0, 4, 4},
    {48, 0, 4, 4},
    {16, 0, 4, 5},
    {32, 0, 5, 7},
    {32, 0, 5, 8},
    {32, 0, 5, 10},
    {32, 0, 5, 11},
    {0, 0, 6, 14},
    {0, 0, 6, 17},
    {0, 0, 6, 20},
    {0, 0, 6, 23},
    {0, 0, 6, 26},
    {0, 0, 6, 29},
    {0, 0, 6, 32},
    {0, 16, 6, 65539},
    {0, 15, 6, 32771},
    {0, 14, 6, 16387},
    {0, 13, 6, 8195},
    {0, 12, 6, 4099},
    {0, 11, 6, 2051},
    {0, 10, 6, 1027},
  },
};

bool IsError(size_t value) {
  return value > size_t(-120);
}

}

void BuildSequenceTable(SequenceTableHeader* table, const int16_t* counts,
  unsigned maximum_symbol, const uint32_t* bases,
  const uint8_t* additional_bits, unsigned table_log, void* workspace) {
  auto* entries = reinterpret_cast<SequenceEntry*>(table + 1);
  auto* next = static_cast<uint16_t*>(workspace);
  auto* spread = static_cast<uint8_t*>(workspace) + 106;
  const unsigned size = 1U << table_log;
  const unsigned mask = size - 1;
  const unsigned step = (size >> 1) + (size >> 3) + 3;
  unsigned high = mask;
  table->fast = 1;
  table->table_log = table_log;
  for (unsigned symbol = 0; symbol <= maximum_symbol; ++symbol) {
    if (counts[symbol] == -1) {
      entries[high--].base = symbol;
      next[symbol] = 1;
    }
    else {
      if (counts[symbol] >= int(size >> 1)) {
        table->fast = 0;
      }
      next[symbol] = counts[symbol];
    }
  }

  unsigned position = 0;
  if (high == mask) {
    unsigned cursor = 0;
    for (unsigned symbol = 0; symbol <= maximum_symbol; ++symbol) {
      const uint64_t repeated = uint64_t(symbol) * 0x0101010101010101;
      __builtin_memcpy(spread + cursor, &repeated, 8);
      for (int i = 8; i < counts[symbol]; i += 8) {
        __builtin_memcpy(spread + cursor + i, &repeated, 8);
      }
      cursor += counts[symbol];
    }
    for (unsigned i = 0; i < size; ++i) {
      entries[position].base = spread[i];
      position = (position + step) & mask;
    }
  }
  else {
    for (unsigned symbol = 0; symbol <= maximum_symbol; ++symbol) {
      for (int i = 0; i < counts[symbol]; ++i) {
        entries[position].base = symbol;
        do {
          position = (position + step) & mask;
        } while (position > high);
      }
    }
  }

  for (unsigned i = 0; i < size; ++i) {
    const unsigned symbol = entries[i].base;
    const unsigned state = next[symbol]++;
    const unsigned bits = table_log - (31 - __builtin_clz(state));
    entries[i] = {
      uint16_t((state << bits) - size),
      additional_bits[symbol],
      uint8_t(bits),
      bases[symbol],
    };
  }
}

size_t SelectSequenceTable(SequenceTableHeader* storage,
  const SequenceTableHeader** table, SequenceEncoding encoding,
  unsigned maximum_symbol, unsigned maximum_log, const void* source,
  size_t source_size, const uint32_t* bases, const uint8_t* additional_bits,
  const SequenceTableHeader* default_table, uint32_t repeat_available,
  int dictionary_cold, unsigned sequence_count, void* workspace) {
  switch (encoding) {
    case SequenceEncoding::Default:
      *table = default_table;
      return 0;
    case SequenceEncoding::RunLength: {
      if (!source_size) {
        return size_t(-72);
      }
      const unsigned symbol = *static_cast<const uint8_t*>(source);
      if (symbol > maximum_symbol) {
        return size_t(-20);
      }
      *storage = {0, 0};
      *reinterpret_cast<SequenceEntry*>(storage + 1) = {
        0,
        additional_bits[symbol],
        0,
        bases[symbol],
      };
      *table = storage;
      return 1;
    }
    case SequenceEncoding::Compressed: {
      int16_t counts[53];
      unsigned log;
      const size_t size = ReadNormalizedCounts(
        counts, &maximum_symbol, &log, source, source_size);
      if (IsError(size) || log > maximum_log) {
        return size_t(-20);
      }
      BuildSequenceTable(storage, counts, maximum_symbol, bases,
        additional_bits, log, workspace);
      *table = storage;
      return size;
    }
    default:
      if (!repeat_available) {
        return size_t(-20);
      }
      if (dictionary_cold && sequence_count >= 25) {
        const auto* bytes = reinterpret_cast<const uint8_t*>(*table);
        const size_t size = (1 + (1U << maximum_log)) * 8;
        for (size_t i = 0; i < size; i += 64) {
          __builtin_prefetch(bytes + i, 0, 1);
        }
      }
      return 0;
  }
}

size_t ReadSequenceHeaders(LiteralContext* context, int* sequence_count,
  const void* source, size_t source_size) {
  if (!source_size) {
    return size_t(-72);
  }
  const auto* begin = static_cast<const uint8_t*>(source);
  const auto* end = begin + source_size;
  const auto* cursor = begin + 1;
  unsigned count = *begin;
  if (count > 127) {
    if (count == 255) {
      if (source_size < 3) {
        return size_t(-72);
      }
      count = cursor[0] + (unsigned(cursor[1]) << 8) + 32512;
      cursor += 2;
    }
    else {
      if (source_size < 2) {
        return size_t(-72);
      }
      count = ((count - 128) << 8) + *cursor++;
    }
  }
  *sequence_count = count;
  if (!count) {
    return cursor == end ? size_t(cursor - begin) : size_t(-20);
  }
  if (cursor == end) {
    return size_t(-72);
  }
  const unsigned descriptor = *cursor++;
  if (descriptor & 3) {
    return size_t(-20);
  }

  auto& tables = detail::TablesFor(context);
  SequenceTableHeader* storage[] = {
    &tables.literal_storage.header,
    &tables.offset_storage.header,
    &tables.match_storage.header,
  };
  const SequenceTableHeader** pointers[] = {
    &tables.literal_lengths,
    &tables.offsets,
    &tables.match_lengths,
  };
  const SequenceTableHeader* defaults[] = {
    &kLiteralDefault.header,
    &kOffsetDefault.header,
    &kMatchDefault.header,
  };
  const uint32_t* bases[] = {kLiteralBases, kOffsetBases, kMatchBases};
  const uint8_t* bits[] = {kLiteralBits, kOffsetBits, kMatchBits};
  const unsigned maxima[] = {35, 31, 52};
  const unsigned logs[] = {9, 8, 9};
  for (unsigned i = 0; i < 3; ++i) {
    const size_t size = SelectSequenceTable(storage[i], pointers[i],
      SequenceEncoding((descriptor >> (6 - 2 * i)) & 3), maxima[i], logs[i],
      cursor, end - cursor, bases[i], bits[i], defaults[i],
      detail::SequenceEntropy(context), context->dictionary_cold, count,
      context->huffman_workspace);
    if (IsError(size)) {
      return size_t(-20);
    }
    cursor += size;
  }
  return cursor - begin;
}

OffsetInfo GetOffsetInfo(const SequenceTableHeader* table, unsigned count) {
  OffsetInfo info{};
  if (!count) {
    return info;
  }
  const auto* entries = reinterpret_cast<const SequenceEntry*>(table + 1);
  for (unsigned i = 0; i < (1U << table->table_log); ++i) {
    const unsigned bits = entries[i].additional_bits;
    info.long_offset_share += bits > 22;
    if (bits > info.maximum_bits) {
      info.maximum_bits = bits;
    }
  }
  info.long_offset_share <<= 8 - table->table_log;
  return info;
}

void CheckOutputContinuity(
  LiteralContext* context, const void* destination, size_t destination_size) {
  auto& window = detail::WindowFor(context);
  if (destination_size && destination != window.previous_end) {
    window.dictionary_end = window.previous_end;
    window.virtual_start = reinterpret_cast<const uint8_t*>(
      uintptr_t(destination) + uintptr_t(window.prefix_start) -
      uintptr_t(window.previous_end));
    window.prefix_start = static_cast<const uint8_t*>(destination);
    window.previous_end = window.prefix_start;
  }
}

}
