/*
  Adapted from Zstandard under the BSD license.
  Copyright Meta Platforms, Inc. and affiliates. All rights reserved.
  Original license: https://github.com/facebook/zstd/blob/v1.5.6/LICENSE
  Full license text: include/compression/zstd_bit_reader.hpp.
*/

#include "compression/zstd_huffman_encoder.hpp"

namespace fw::compression {
namespace {

bool IsError(size_t value) {
  return value > size_t(-120);
}

unsigned HighestBit(uint32_t value) {
  return value ? 31 - __builtin_clz(value) : unsigned(-1);
}

void* AlignWorkspace(void* workspace, size_t& size, unsigned alignment) {
  const size_t adjustment = -reinterpret_cast<uintptr_t>(workspace) &
    (alignment - 1);
  if (size < adjustment) {
    size = 0;
    return nullptr;
  }
  size -= adjustment;
  return static_cast<uint8_t*>(workspace) + adjustment;
}

size_t CountParallel(
  unsigned* counts, unsigned* maximum_symbol, const uint8_t* source,
  size_t source_size, bool check_maximum, unsigned* workspace
) {
  const size_t count_size = (*maximum_symbol + 1) * sizeof(unsigned);
  if (source_size == 0) {
    __builtin_memset(counts, 0, count_size);
    *maximum_symbol = 0;
    return 0;
  }
  __builtin_memset(workspace, 0, 4096);
  size_t position = 0;
  while (position + 20 <= source_size) {
    for (unsigned i = 0; i < 16; ++i) {
      ++workspace[(i & 3) * 256 + source[position + i]];
    }
    position += 16;
  }
  for (; position < source_size; ++position) {
    ++workspace[source[position]];
  }
  unsigned largest = 0;
  for (unsigned symbol = 0; symbol < 256; ++symbol) {
    workspace[symbol] += workspace[256 + symbol] + workspace[512 + symbol] +
      workspace[768 + symbol];
    if (workspace[symbol] > largest) {
      largest = workspace[symbol];
    }
  }
  unsigned maximum = 255;
  while (workspace[maximum] == 0) {
    --maximum;
  }
  if (check_maximum && maximum > *maximum_symbol) {
    return size_t(-48);
  }
  *maximum_symbol = maximum;
  __builtin_memmove(counts, workspace, count_size);
  return largest;
}

struct FseWriter {
  uint64_t value;
  unsigned count;
  uint8_t* start;
  uint8_t* position;
  uint8_t* end;
  bool fast;

  void Add(uint64_t bits, unsigned width) {
    value |= (bits & ((uint64_t(1) << width) - 1)) << count;
    count += width;
  }

  void Flush() {
    __builtin_memcpy(position, &value, 8);
    const unsigned bytes = count >> 3;
    position += bytes;
    if (!fast && position > end) {
      position = end;
    }
    count &= 7;
    value >>= bytes * 8;
  }
};

struct FseCompressionState {
  size_t value;
  const uint16_t* states;
  const FseCompressionTransform* transforms;
  unsigned log;

  FseCompressionState(const uint32_t* table, unsigned symbol) {
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

  void Encode(FseWriter& writer, unsigned symbol) {
    const auto transform = transforms[symbol];
    const unsigned bits = unsigned((value + transform.bit_delta) >> 16);
    writer.Add(value, bits);
    value = states[(value >> bits) + transform.state_delta];
  }

  void Flush(FseWriter& writer) const {
    writer.Add(value, log);
    writer.Flush();
  }
};

struct WeightWorkspace {
  uint32_t table[59];
  uint32_t scratch[41];
  unsigned counts[13];
  int16_t normalized[13];
};

struct TableWorkspace {
  WeightWorkspace weights;
  uint8_t bits_to_weight[13];
  uint8_t symbols[255];
};

static_assert(sizeof(WeightWorkspace) == 480);
static_assert(sizeof(TableWorkspace) == 748);

size_t CompressWeights(
  uint8_t* destination, size_t capacity, const uint8_t* weights,
  size_t weight_count, WeightWorkspace& workspace
) {
  if (weight_count <= 1) {
    return 0;
  }
  unsigned maximum = 12;
  const size_t most_frequent = CountHuffmanSymbolsSimple(workspace.counts,
    &maximum, weights, weight_count);
  if (most_frequent == weight_count) {
    return 1;
  }
  if (most_frequent == 1) {
    return 0;
  }
  const unsigned log = OptimalFseTableLog(6, weight_count, maximum);
  size_t result = NormalizeFseCounts(workspace.normalized, log,
    workspace.counts, weight_count, maximum, 0);
  if (IsError(result)) {
    return result;
  }
  const size_t header = WriteNormalizedCounts(destination, capacity,
    workspace.normalized, maximum, log);
  if (IsError(header)) {
    return header;
  }
  result = BuildFseCompressionTable(workspace.table, workspace.normalized,
    maximum, log, workspace.scratch, sizeof(workspace.scratch));
  if (IsError(result)) {
    return result;
  }
  const size_t size = CompressFseWeights(destination + header,
    capacity - header, weights, weight_count, workspace.table);
  if (IsError(size) || size == 0) {
    return size;
  }
  return header + size;
}

}

size_t CountHuffmanSymbolsSimple(
  unsigned* counts, unsigned* maximum_symbol, const void* source,
  size_t source_size
) {
  unsigned maximum = *maximum_symbol;
  __builtin_memset(counts, 0, (maximum + 1) * sizeof(unsigned));
  if (source_size == 0) {
    *maximum_symbol = 0;
    return 0;
  }
  const auto* input = static_cast<const uint8_t*>(source);
  for (size_t i = 0; i < source_size; ++i) {
    ++counts[input[i]];
  }
  while (counts[maximum] == 0) {
    --maximum;
  }
  *maximum_symbol = maximum;
  unsigned largest = 0;
  for (unsigned symbol = 0; symbol <= maximum; ++symbol) {
    if (counts[symbol] > largest) {
      largest = counts[symbol];
    }
  }
  return largest;
}

size_t CountHuffmanSymbols(
  unsigned* counts, unsigned* maximum_symbol, const void* source,
  size_t source_size, void* workspace, size_t workspace_size
) {
  if (reinterpret_cast<uintptr_t>(workspace) & 3) {
    return size_t(-1);
  }
  if (workspace_size < 4096) {
    return size_t(-66);
  }
  const auto* input = static_cast<const uint8_t*>(source);
  if (*maximum_symbol < 255) {
    return CountParallel(counts, maximum_symbol, input, source_size,
      true, static_cast<unsigned*>(workspace));
  }
  *maximum_symbol = 255;
  if (source_size < 1500) {
    return CountHuffmanSymbolsSimple(counts, maximum_symbol, source,
      source_size);
  }
  return CountParallel(counts, maximum_symbol, input, source_size,
    false, static_cast<unsigned*>(workspace));
}

size_t CompressFseWeights(
  void* destination, size_t capacity, const void* source, size_t source_size,
  const uint32_t* table
) {
  if (source_size <= 2 || capacity <= 8) {
    return 0;
  }
  auto* start = static_cast<uint8_t*>(destination);
  const auto* input = static_cast<const uint8_t*>(source);
  const uint8_t* cursor = input + source_size;
  FseWriter writer{0, 0, start, start, start + capacity - 8,
    capacity >= source_size + (source_size >> 7) + 12};
  const unsigned second_symbol = *--cursor;
  const unsigned first_symbol = *--cursor;
  FseCompressionState first(table, source_size & 1 ? second_symbol :
    first_symbol);
  FseCompressionState second(table, source_size & 1 ? first_symbol :
    second_symbol);
  if (source_size & 1) {
    first.Encode(writer, *--cursor);
    writer.Flush();
  }
  if ((source_size - 2) & 2) {
    second.Encode(writer, *--cursor);
    first.Encode(writer, *--cursor);
    writer.Flush();
  }
  while (cursor > input) {
    second.Encode(writer, *--cursor);
    first.Encode(writer, *--cursor);
    second.Encode(writer, *--cursor);
    first.Encode(writer, *--cursor);
    writer.Flush();
  }
  second.Flush(writer);
  first.Flush(writer);
  writer.Add(1, 1);
  writer.fast = false;
  writer.Flush();
  return writer.position >= writer.end ? 0 :
    size_t(writer.position - start) + (writer.count != 0);
}

size_t WriteHuffmanCompressionTable(
  void* destination, size_t capacity, const uint64_t* table,
  unsigned maximum_symbol, unsigned table_log, void* workspace,
  size_t workspace_size
) {
  auto* work = static_cast<TableWorkspace*>(
    AlignWorkspace(workspace, workspace_size, 4));
  if (workspace_size < sizeof(*work)) {
    return size_t(-1);
  }
  if (maximum_symbol > 255) {
    return size_t(-46);
  }
  work->bits_to_weight[0] = 0;
  for (unsigned bits = 1; bits <= table_log; ++bits) {
    work->bits_to_weight[bits] = uint8_t(table_log + 1 - bits);
  }
  for (unsigned symbol = 0; symbol < maximum_symbol; ++symbol) {
    work->symbols[symbol] = work->bits_to_weight[table[symbol + 1] & 255];
  }
  if (capacity < 1) {
    return size_t(-70);
  }
  auto* output = static_cast<uint8_t*>(destination);
  const size_t compressed = CompressWeights(output + 1, capacity - 1,
    work->symbols, maximum_symbol, work->weights);
  if (IsError(compressed)) {
    return compressed;
  }
  if (compressed > 1 && compressed < maximum_symbol / 2) {
    output[0] = uint8_t(compressed);
    return compressed + 1;
  }
  if (maximum_symbol > 128) {
    return size_t(-1);
  }
  const size_t raw_size = (maximum_symbol + 1) / 2 + 1;
  if (raw_size > capacity) {
    return size_t(-70);
  }
  output[0] = uint8_t(127 + maximum_symbol);
  work->symbols[maximum_symbol] = 0;
  for (unsigned symbol = 0; symbol < maximum_symbol; symbol += 2) {
    output[symbol / 2 + 1] = uint8_t((work->symbols[symbol] << 4) +
      work->symbols[symbol + 1]);
  }
  return raw_size;
}

unsigned ChooseHuffmanTableLog(
  unsigned maximum_log, size_t source_size, unsigned maximum_symbol,
  void* workspace, size_t workspace_size, uint64_t* table,
  const unsigned* counts, int flags
) {
  if (!(flags & 2)) {
    const unsigned source_bits = HighestBit(uint32_t(source_size - 1)) - 1;
    const unsigned symbol_bits = HighestBit(maximum_symbol) + 2;
    unsigned minimum = HighestBit(uint32_t(source_size)) + 1;
    if (symbol_bits < minimum) {
      minimum = symbol_bits;
    }
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
  unsigned cardinality = 0;
  for (unsigned symbol = 0; symbol <= maximum_symbol; ++symbol) {
    cardinality += counts[symbol] != 0;
  }
  const unsigned minimum = HighestBit(cardinality) + 1;
  auto* header = static_cast<uint8_t*>(workspace) + sizeof(TableWorkspace);
  const size_t capacity = workspace_size - sizeof(TableWorkspace);
  size_t best_size = size_t(-2);
  unsigned best_log = maximum_log;
  for (unsigned log = minimum; log <= maximum_log; ++log) {
    const size_t bits = BuildHuffmanCompressionTable(table, counts,
      maximum_symbol, log, workspace, workspace_size);
    if (IsError(bits)) {
      continue;
    }
    if (bits < log && log > minimum) {
      break;
    }
    const size_t header_size = WriteHuffmanCompressionTable(header, capacity,
      table, maximum_symbol, unsigned(bits), workspace, workspace_size);
    if (IsError(header_size)) {
      continue;
    }
    const size_t size = EstimateHuffmanSize(table, counts, maximum_symbol) +
      header_size;
    if (size > best_size + 1) {
      break;
    }
    if (size < best_size) {
      best_size = size;
      best_log = log;
    }
  }
  return best_log;
}

namespace {

struct HuffmanWriter {
  uint64_t value[2];
  uint64_t count[2];
  uint8_t* start;
  uint8_t* position;
  uint8_t* end;

  void Add(uint64_t entry, unsigned lane, bool fast) {
    value[lane] >>= entry & 255;
    value[lane] |= fast ? entry : entry & ~uint64_t(255);
    count[lane] += entry;
  }

  void Flush(bool fast) {
    const unsigned bits = count[0] & 255;
    const uint64_t output = value[0] >> ((64 - bits) & 63);
    __builtin_memcpy(position, &output, 8);
    position += bits >> 3;
    count[0] &= 7;
    if (!fast && position > end) {
      position = end;
    }
  }

  void Merge() {
    value[0] >>= count[1] & 255;
    value[0] |= value[1];
    count[0] += count[1];
  }
};

template <int Unroll, bool FastFlush, bool LastFast>
void EncodeHuffmanLoop(
  HuffmanWriter& writer, const uint8_t* input, size_t size,
  const uint64_t* table
) {
  int remaining = int(size);
  int remainder = remaining % Unroll;
  if (remainder) {
    for (; remainder > 0; --remainder) {
      writer.Add(table[input[--remaining]], 0, false);
    }
    writer.Flush(FastFlush);
  }
  if (remaining % (2 * Unroll)) {
    for (int i = 1; i < Unroll; ++i) {
      writer.Add(table[input[remaining - i]], 0, true);
    }
    writer.Add(table[input[remaining - Unroll]], 0, LastFast);
    writer.Flush(FastFlush);
    remaining -= Unroll;
  }
  for (; remaining > 0; remaining -= 2 * Unroll) {
    for (int i = 1; i < Unroll; ++i) {
      writer.Add(table[input[remaining - i]], 0, true);
    }
    writer.Add(table[input[remaining - Unroll]], 0, LastFast);
    writer.Flush(FastFlush);
    writer.value[1] = 0;
    writer.count[1] = 0;
    for (int i = 1; i < Unroll; ++i) {
      writer.Add(table[input[remaining - Unroll - i]], 1, true);
    }
    writer.Add(table[input[remaining - 2 * Unroll]], 1, LastFast);
    writer.Merge();
    writer.Flush(FastFlush);
  }
}

size_t EncodeHuffman4X(
  void* destination, size_t capacity, const void* source, size_t source_size,
  const uint64_t* table
) {
  if (capacity < 17 || source_size < 12) {
    return 0;
  }
  auto* output = static_cast<uint8_t*>(destination);
  const auto* input = static_cast<const uint8_t*>(source);
  const size_t segment_size = (source_size + 3) / 4;
  size_t written = 6;
  for (unsigned stream = 0; stream < 4; ++stream) {
    const size_t size = stream == 3 ? source_size - 3 * segment_size :
      segment_size;
    const size_t compressed = EncodeHuffman1X(output + written,
      capacity - written, input + stream * segment_size, size, table);
    if (IsError(compressed)) {
      return compressed;
    }
    if (compressed == 0 || compressed > 65535) {
      return 0;
    }
    if (stream < 3) {
      const uint16_t length = uint16_t(compressed);
      __builtin_memcpy(output + stream * 2, &length, 2);
    }
    written += compressed;
  }
  return written;
}

struct CompressionWorkspace {
  unsigned counts[256];
  uint64_t table[257];
  alignas(8) uint8_t scratch[4864];
};

static_assert(sizeof(CompressionWorkspace) == 7944);

}

size_t EncodeHuffman1X(
  void* destination, size_t capacity, const void* source, size_t source_size,
  const uint64_t* table
) {
  if (capacity <= 8) {
    return 0;
  }
  auto* start = static_cast<uint8_t*>(destination);
  const auto* input = static_cast<const uint8_t*>(source);
  const unsigned log = table[0] & 255;
  HuffmanWriter writer{{0, 0}, {0, 0}, start, start, start + capacity - 8};
  if (capacity < ((source_size * log) >> 3) + 8 || log > 11) {
    EncodeHuffmanLoop<4, false, false>(writer, input, source_size, table + 1);
  }
  else {
    switch (log) {
      case 11:
        EncodeHuffmanLoop<5, true, false>(writer, input, source_size,
          table + 1);
        break;
      case 10:
        EncodeHuffmanLoop<5, true, true>(writer, input, source_size, table + 1);
        break;
      case 9:
        EncodeHuffmanLoop<6, true, false>(writer, input, source_size,
          table + 1);
        break;
      case 8:
        EncodeHuffmanLoop<7, true, false>(writer, input, source_size,
          table + 1);
        break;
      case 7:
        EncodeHuffmanLoop<8, true, false>(writer, input, source_size,
          table + 1);
        break;
      default:
        EncodeHuffmanLoop<9, true, true>(writer, input, source_size, table + 1);
        break;
    }
  }
  writer.Add((uint64_t(1) << 63) | 1, 0, false);
  writer.Flush(false);
  return writer.position >= writer.end ? 0 :
    size_t(writer.position - start) + (writer.count[0] != 0);
}

size_t CompressHuffman1XWithTable(
  void* destination, size_t capacity, const void* source, size_t source_size,
  const uint64_t* table
) {
  return EncodeHuffman1X(destination, capacity, source, source_size, table);
}

size_t CompressHuffman4XWithTable(
  void* destination, size_t capacity, const void* source, size_t source_size,
  const uint64_t* table
) {
  return EncodeHuffman4X(destination, capacity, source, source_size, table);
}

size_t CompressHuffmanSelectedTable(
  uint8_t* start, uint8_t* output, const uint8_t* end, const void* source,
  size_t source_size, unsigned four_streams, const uint64_t* table
) {
  const size_t size = four_streams ? EncodeHuffman4X(output,
    size_t(end - output), source, source_size, table) :
    EncodeHuffman1X(output, size_t(end - output), source, source_size, table);
  if (IsError(size) || size == 0) {
    return size;
  }
  const size_t total = size_t(output - start) + size;
  return total >= source_size - 1 ? 0 : total;
}

size_t CompressHuffman(
  void* destination, size_t capacity, const void* source, size_t source_size,
  unsigned maximum_symbol, unsigned maximum_log, unsigned four_streams,
  void* workspace, size_t workspace_size, uint64_t* previous_table,
  unsigned* repeat_mode, int flags
) {
  auto* work = static_cast<CompressionWorkspace*>(
    AlignWorkspace(workspace, workspace_size, 8));
  if (workspace_size < sizeof(*work)) {
    return size_t(-66);
  }
  if (source_size == 0 || capacity == 0) {
    return 0;
  }
  if (source_size > 131072) {
    return size_t(-72);
  }
  if (maximum_log > 12) {
    return size_t(-44);
  }
  if (maximum_symbol > 255) {
    return size_t(-46);
  }
  if (maximum_symbol == 0) {
    maximum_symbol = 255;
  }
  if (maximum_log == 0) {
    maximum_log = 11;
  }
  auto* start = static_cast<uint8_t*>(destination);
  auto* output = start;
  const uint8_t* end = start + capacity;
  if ((flags & 4) && repeat_mode && *repeat_mode == 2) {
    return CompressHuffmanSelectedTable(start, output, end, source,
      source_size, four_streams, previous_table);
  }
  if ((flags & 8) && source_size >= 40960) {
    unsigned maximum = maximum_symbol;
    const size_t first = CountHuffmanSymbolsSimple(work->counts, &maximum,
      source, 4096);
    maximum = maximum_symbol;
    const auto* last = static_cast<const uint8_t*>(source) + source_size - 4096;
    const size_t second = CountHuffmanSymbolsSimple(work->counts, &maximum,
      last, 4096);
    if (first + second <= 68) {
      return 0;
    }
  }
  const size_t largest = CountHuffmanSymbols(work->counts, &maximum_symbol,
    source, source_size, work->scratch, 4096);
  if (IsError(largest)) {
    return largest;
  }
  if (largest == source_size) {
    *output = *static_cast<const uint8_t*>(source);
    return 1;
  }
  if (largest <= (source_size >> 7) + 4) {
    return 0;
  }
  if (repeat_mode && *repeat_mode == 1 &&
      !ValidateHuffmanCompressionTable(previous_table, work->counts,
        maximum_symbol)) {
    *repeat_mode = 0;
  }
  if ((flags & 4) && repeat_mode && *repeat_mode) {
    return CompressHuffmanSelectedTable(start, output, end, source,
      source_size, four_streams, previous_table);
  }
  unsigned log = ChooseHuffmanTableLog(maximum_log, source_size,
    maximum_symbol, work->scratch, sizeof(work->scratch), work->table,
    work->counts, flags);
  const size_t bits = BuildHuffmanCompressionTable(work->table, work->counts,
    maximum_symbol, log, work->scratch, sizeof(work->scratch));
  if (IsError(bits)) {
    return bits;
  }
  log = unsigned(bits);
  const size_t header = WriteHuffmanCompressionTable(output, capacity,
    work->table, maximum_symbol, log, work->scratch, 748);
  if (IsError(header)) {
    return header;
  }
  if (repeat_mode && *repeat_mode) {
    const size_t old_size = EstimateHuffmanSize(previous_table, work->counts,
      maximum_symbol);
    const size_t new_size = EstimateHuffmanSize(work->table, work->counts,
      maximum_symbol);
    if (old_size <= header + new_size || header + 12 >= source_size) {
      return CompressHuffmanSelectedTable(start, output, end, source,
        source_size, four_streams, previous_table);
    }
  }
  if (header + 12 >= source_size) {
    return 0;
  }
  output += header;
  if (repeat_mode) {
    *repeat_mode = 0;
  }
  if (previous_table) {
    __builtin_memcpy(previous_table, work->table, sizeof(work->table));
  }
  return CompressHuffmanSelectedTable(start, output, end, source, source_size,
    four_streams, work->table);
}

size_t CompressHuffman1X(
  void* destination, size_t capacity, const void* source, size_t source_size,
  unsigned maximum_symbol, unsigned maximum_log, void* workspace,
  size_t workspace_size, uint64_t* previous_table, unsigned* repeat_mode,
  int flags
) {
  return CompressHuffman(destination, capacity, source, source_size,
    maximum_symbol, maximum_log, 0, workspace, workspace_size, previous_table,
    repeat_mode, flags);
}

size_t CompressHuffman4X(
  void* destination, size_t capacity, const void* source, size_t source_size,
  unsigned maximum_symbol, unsigned maximum_log, void* workspace,
  size_t workspace_size, uint64_t* previous_table, unsigned* repeat_mode,
  int flags
) {
  return CompressHuffman(destination, capacity, source, source_size,
    maximum_symbol, maximum_log, 1, workspace, workspace_size, previous_table,
    repeat_mode, flags);
}

}
