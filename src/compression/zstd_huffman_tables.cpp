#include "compression/zstd_huffman_tables.hpp"
#include "compression/zstd_bit_reader.hpp"
#include "compression/zstd_entropy.hpp"

namespace fw::compression {
namespace {

struct SingleTableWorkspace {
  uint32_t ranks[13];
  uint32_t starts[13];
  uint32_t statistics[219];
  uint8_t symbols[256];
  uint8_t weights[256];
};

struct DoubleTableWorkspace {
  uint32_t ranks[12][13];
  uint32_t counts[13];
  uint32_t starts[15];
  uint8_t symbols[256];
  uint8_t weights[256];
  uint32_t statistics[219];
};

static_assert(sizeof(SingleTableWorkspace) == 1492);
static_assert(sizeof(DoubleTableWorkspace) == 2124);
static_assert(offsetof(SingleTableWorkspace, weights) == 1236);
static_assert(offsetof(DoubleTableWorkspace, weights) == 992);

bool IsError(size_t value) {
  return value > size_t(-120);
}

unsigned HighestBit(uint32_t value) {
  return 31 - __builtin_clz(value);
}

void FillDoubleRank(
  HuffmanDoubleEntry* table, const uint8_t* begin, const uint8_t* end,
  unsigned bits, unsigned table_log, uint16_t first, unsigned length
) {
  const unsigned repeats = 1u << ((table_log - bits) & 31);
  for (; begin != end; ++begin) {
    const HuffmanDoubleEntry entry = {
      uint16_t(length == 1 ? *begin : first | (*begin << 8)),
      uint8_t(bits), uint8_t(length)
    };
    for (unsigned i = 0; i < repeats; ++i) {
      *table++ = entry;
    }
  }
}

void FillDoubleTable(
  HuffmanDoubleEntry* table, DoubleTableWorkspace& work,
  unsigned target_log, unsigned maximum_weight, unsigned baseline
) {
  const int scale = int(baseline) - int(target_log);
  const unsigned minimum_bits = baseline - maximum_weight;
  for (unsigned weight = 1; weight <= maximum_weight; ++weight) {
    const unsigned begin = work.starts[weight];
    const unsigned end = work.starts[weight + 1];
    const unsigned bits = baseline - weight;
    if (target_log - bits < minimum_bits) {
      FillDoubleRank(table + work.ranks[0][weight], work.symbols + begin,
                     work.symbols + end, bits, target_log, 0, 1);
      continue;
    }
    const int minimum_weight = int(bits) + scale > 1 ? int(bits) + scale : 1;
    const unsigned length = 1u << ((target_log - bits) & 31);
    unsigned position = work.ranks[0][weight];
    for (unsigned symbol = begin; symbol < end; ++symbol) {
      auto* rank = table + position;
      const auto* offsets = work.ranks[bits];
      if (minimum_weight > 1) {
        const HuffmanDoubleEntry entry = {
          work.symbols[symbol], uint8_t(bits), 1
        };
        for (unsigned i = 0; i < offsets[minimum_weight]; ++i) {
          rank[i] = entry;
        }
      }
      for (unsigned second = minimum_weight; second <= maximum_weight;
           ++second) {
        FillDoubleRank(rank + offsets[second],
                       work.symbols + work.starts[second],
                       work.symbols + work.starts[second + 1],
                       baseline - second + bits, target_log,
                       work.symbols[symbol], 2);
      }
      position += length;
    }
  }
}

template <typename Entry>
void DecodeSymbol(
  uint8_t*& output, ReverseBitStream& bits, const Entry* table, unsigned log
) {
  const Entry entry = table[detail::PeekBits(bits, log)];
  bits.consumed += entry.bits;
  if constexpr (sizeof(Entry) == 2) {
    *output++ = entry.symbol;
  }
  else {
    __builtin_memcpy(output, &entry.sequence, 2);
    output += entry.length;
  }
}

template <typename Entry>
size_t DecodeSingleStream(
  void* destination, size_t destination_size, const void* source,
  size_t source_size, const uint32_t* decoding_table
) {
  ReverseBitStream bits;
  const size_t initialized = InitializeReverseBits(&bits, source, source_size);
  if (IsError(initialized)) {
    return initialized;
  }
  const auto* descriptor =
    reinterpret_cast<const HuffmanTableDescriptor*>(decoding_table);
  const auto* table = reinterpret_cast<const Entry*>(decoding_table + 1);
  const unsigned log = descriptor->table_log;
  auto* output = static_cast<uint8_t*>(destination);
  const size_t size = int64_t(destination_size) < 0 ? 0 : destination_size;
  uint8_t* const end = output + size;
  if constexpr (sizeof(Entry) == 2) {
    if (end - output > 3) {
      while ((detail::ReloadBits(bits) == detail::BitReload::Unfinished) &
             (end - output > 3)) {
        for (unsigned i = 0; i < 4; ++i) {
          DecodeSymbol(output, bits, table, log);
        }
      }
    }
    else {
      detail::ReloadBits(bits);
    }
    while (output < end) {
      DecodeSymbol(output, bits, table, log);
    }
  }
  else {
    if (end - output >= 8) {
      const unsigned lookups = log <= 11 ? 5 : 4;
      const unsigned margin = log <= 11 ? 9 : 7;
      while ((detail::ReloadBits(bits) == detail::BitReload::Unfinished) &
             (end - output > margin)) {
        for (unsigned i = 0; i < lookups; ++i) {
          DecodeSymbol(output, bits, table, log);
        }
      }
    }
    else {
      detail::ReloadBits(bits);
    }
    if (end - output >= 2) {
      while ((detail::ReloadBits(bits) == detail::BitReload::Unfinished) &
             (end - output >= 2)) {
        DecodeSymbol(output, bits, table, log);
      }
      while (end - output >= 2) {
        DecodeSymbol(output, bits, table, log);
      }
    }
    if (output < end) {
      const Entry entry = table[detail::PeekBits(bits, log)];
      *output++ = entry.sequence;
      if (entry.length == 1) {
        bits.consumed += entry.bits;
      }
      else if (bits.consumed < 64) {
        bits.consumed += entry.bits;
        if (bits.consumed > 64) {
          bits.consumed = 64;
        }
      }
    }
  }
  return bits.cursor == bits.start && bits.consumed == 64 ?
    destination_size : size_t(-20);
}

bool PreferDoubleTable(size_t destination_size, size_t source_size) {
  constexpr uint32_t timings[16][4] = {
    {0, 0, 1, 1}, {0, 0, 1, 1}, {150, 216, 381, 119},
    {170, 205, 514, 112}, {177, 199, 539, 110}, {197, 194, 644, 107},
    {221, 192, 735, 107}, {256, 189, 881, 106}, {359, 188, 1167, 109},
    {582, 187, 1570, 114}, {688, 187, 1712, 122}, {825, 186, 1965, 136},
    {976, 185, 2131, 150}, {1180, 186, 2070, 175},
    {1377, 185, 1731, 202}, {1412, 185, 1695, 202}
  };
  const unsigned bucket = source_size >= destination_size ? 15 :
    unsigned(source_size * 16 / destination_size);
  const uint32_t blocks = destination_size >> 8;
  const uint32_t* row = timings[bucket];
  const uint32_t single = row[0] + row[1] * blocks;
  uint32_t paired = row[2] + row[3] * blocks;
  paired += paired >> 5;
  return paired < single;
}

}

size_t ReadHuffmanWeights(
  uint8_t* weights, size_t weight_capacity, uint32_t* ranks,
  unsigned* symbol_count, unsigned* table_log, const void* source,
  size_t source_size, void* workspace, size_t workspace_size, int flags
) {
  if (source_size == 0) {
    return size_t(-72);
  }
  const auto* input = static_cast<const uint8_t*>(source);
  size_t encoded_size = input[0];
  size_t decoded_size;
  if (encoded_size >= 128) {
    decoded_size = encoded_size - 127;
    encoded_size = (decoded_size + 1) / 2;
    if (encoded_size + 1 > source_size) {
      return size_t(-72);
    }
    if (decoded_size >= weight_capacity) {
      return size_t(-20);
    }
    for (unsigned i = 0; i < decoded_size; i += 2) {
      weights[i] = input[1 + i / 2] >> 4;
      weights[i + 1] = input[1 + i / 2] & 15;
    }
  }
  else {
    if (encoded_size + 1 > source_size) {
      return size_t(-72);
    }
    decoded_size = DecompressFse(weights, weight_capacity - 1, input + 1,
                                 encoded_size, 6, workspace,
                                 workspace_size, flags);
    if (IsError(decoded_size)) {
      return decoded_size;
    }
  }
  for (unsigned i = 0; i < 13; ++i) {
    ranks[i] = 0;
  }
  uint32_t total = 0;
  for (size_t i = 0; i < decoded_size; ++i) {
    if (weights[i] > 12) {
      return size_t(-20);
    }
    ++ranks[weights[i]];
    total += (1u << weights[i]) >> 1;
  }
  if (total == 0) {
    return size_t(-20);
  }
  const unsigned log = HighestBit(total) + 1;
  if (log > 12) {
    return size_t(-20);
  }
  *table_log = log;
  const uint32_t remaining = (1u << log) - total;
  const unsigned last_weight = HighestBit(remaining) + 1;
  if ((1u << (last_weight - 1)) != remaining) {
    return size_t(-20);
  }
  weights[decoded_size] = last_weight;
  ++ranks[last_weight];
  if (ranks[1] < 2 || (ranks[1] & 1)) {
    return size_t(-20);
  }
  *symbol_count = decoded_size + 1;
  return encoded_size + 1;
}

size_t BuildHuffmanSingleTable(
  uint32_t* table, const void* source, size_t source_size, void* workspace,
  size_t workspace_size, int flags
) {
  if (workspace_size < sizeof(SingleTableWorkspace)) {
    return size_t(-44);
  }
  auto& work = *static_cast<SingleTableWorkspace*>(workspace);
  unsigned symbols = 0, log = 0;
  const size_t read = ReadHuffmanWeights(work.weights, 256, work.ranks,
    &symbols, &log, source, source_size, work.statistics,
    sizeof(work.statistics), flags);
  if (IsError(read)) {
    return read;
  }
  auto* descriptor = reinterpret_cast<HuffmanTableDescriptor*>(table);
  const unsigned maximum = descriptor->maximum_log + 1;
  const unsigned target = maximum < 11 ? maximum : 11;
  if (log < target) {
    const unsigned scale = target - log;
    for (unsigned i = 0; i < symbols; ++i) {
      if (work.weights[i] != 0) {
        work.weights[i] += scale;
      }
    }
    for (unsigned i = target; i > scale; --i) {
      work.ranks[i] = work.ranks[i - scale];
    }
    for (unsigned i = scale; i != 0; --i) {
      work.ranks[i] = 0;
    }
    log = target;
  }
  if (log > maximum) {
    return size_t(-44);
  }
  descriptor->type = 0;
  descriptor->table_log = log;
  unsigned position = 0;
  for (unsigned i = 0; i <= log; ++i) {
    work.starts[i] = position;
    position += work.ranks[i];
  }
  for (unsigned symbol = 0; symbol < symbols; ++symbol) {
    work.symbols[work.starts[work.weights[symbol]]++] = symbol;
  }
  auto* entries = reinterpret_cast<HuffmanSingleEntry*>(table + 1);
  unsigned symbol = work.ranks[0];
  for (unsigned weight = 1; weight <= log; ++weight) {
    const unsigned length = (1u << weight) >> 1;
    for (unsigned i = 0; i < work.ranks[weight]; ++i) {
      const HuffmanSingleEntry entry = {
        uint8_t(log + 1 - weight), work.symbols[symbol++]
      };
      for (unsigned j = 0; j < length; ++j) {
        *entries++ = entry;
      }
    }
  }
  return read;
}

size_t BuildHuffmanDoubleTable(
  uint32_t* table, const void* source, size_t source_size, void* workspace,
  size_t workspace_size, int flags
) {
  if (workspace_size < sizeof(DoubleTableWorkspace)) {
    return size_t(-1);
  }
  auto& work = *static_cast<DoubleTableWorkspace*>(workspace);
  for (auto& count : work.counts) {
    count = 0;
  }
  for (auto& start : work.starts) {
    start = 0;
  }
  auto* descriptor = reinterpret_cast<HuffmanTableDescriptor*>(table);
  unsigned maximum = descriptor->maximum_log;
  if (maximum > 12) {
    return size_t(-44);
  }
  unsigned symbols, log;
  const size_t read = ReadHuffmanWeights(work.weights, 256, work.counts,
    &symbols, &log, source, source_size, work.statistics,
    sizeof(work.statistics), flags);
  if (IsError(read)) {
    return read;
  }
  if (log > maximum) {
    return size_t(-44);
  }
  if (log <= 11 && maximum > 11) {
    maximum = 11;
  }
  unsigned maximum_weight = log;
  while (work.counts[maximum_weight] == 0) {
    --maximum_weight;
  }
  uint32_t* starts = work.starts + 1;
  unsigned position = 0;
  for (unsigned weight = 1; weight <= maximum_weight; ++weight) {
    starts[weight] = position;
    position += work.counts[weight];
  }
  starts[0] = position;
  starts[maximum_weight + 1] = position;
  for (unsigned symbol = 0; symbol < symbols; ++symbol) {
    work.symbols[starts[work.weights[symbol]]++] = symbol;
  }
  starts[0] = 0;
  const int scale = int(maximum - log) - 1;
  position = 0;
  for (unsigned weight = 1; weight <= maximum_weight; ++weight) {
    work.ranks[0][weight] = position;
    position += work.counts[weight] << (int(weight) + scale);
  }
  const unsigned minimum_bits = log + 1 - maximum_weight;
  for (unsigned consumed = minimum_bits;
       consumed < maximum - minimum_bits + 1; ++consumed) {
    for (unsigned weight = 1; weight <= maximum_weight; ++weight) {
      work.ranks[consumed][weight] = work.ranks[0][weight] >> consumed;
    }
  }
  FillDoubleTable(reinterpret_cast<HuffmanDoubleEntry*>(table + 1), work,
                  maximum, maximum_weight, log + 1);
  descriptor->table_log = maximum;
  descriptor->type = 1;
  return read;
}

size_t DecompressHuffman1X(
  void* destination, size_t destination_size, const void* source,
  size_t source_size, const uint32_t* table, int
) {
  const auto* descriptor = reinterpret_cast<const HuffmanTableDescriptor*>(
    table
  );
  if (descriptor->type != 0) {
    return DecodeSingleStream<HuffmanDoubleEntry>(destination,
      destination_size, source, source_size, table);
  }
  return DecodeSingleStream<HuffmanSingleEntry>(destination, destination_size,
                                               source, source_size, table);
}

size_t ReadAndDecompressHuffman1X(
  uint32_t* table, void* destination, size_t destination_size,
  const void* source, size_t source_size, void* workspace,
  size_t workspace_size, int flags
) {
  const size_t header = BuildHuffmanSingleTable(table, source, source_size,
                                               workspace, workspace_size,
                                               flags);
  if (IsError(header)) {
    return header;
  }
  if (header >= source_size) {
    return size_t(-72);
  }
  return DecompressHuffman1X(destination, destination_size,
    static_cast<const uint8_t*>(source) + header, source_size - header,
    table, flags);
}

size_t ReadAndDecompressHuffman4X(
  uint32_t* table, void* destination, size_t destination_size,
  const void* source, size_t source_size, void* workspace,
  size_t workspace_size, int flags
) {
  if (destination_size == 0) {
    return size_t(-70);
  }
  if (source_size == 0) {
    return size_t(-20);
  }
  const bool paired = PreferDoubleTable(destination_size, source_size);
  const size_t header = paired ?
    BuildHuffmanDoubleTable(table, source, source_size, workspace,
                            workspace_size, flags) :
    BuildHuffmanSingleTable(table, source, source_size, workspace,
                            workspace_size, flags);
  if (IsError(header)) {
    return header;
  }
  if (header >= source_size) {
    return size_t(-72);
  }
  return DecompressHuffman4X(destination, destination_size,
    static_cast<const uint8_t*>(source) + header, source_size - header,
    table, flags);
}

}
