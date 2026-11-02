#include "compression/zstd_entropy.hpp"
#include "compression/zstd_bit_reader.hpp"

namespace fw::compression {
namespace {

bool IsError(size_t value) {
  return value > size_t(-120);
}

unsigned HighestBit(uint32_t value) {
  return 31 - __builtin_clz(value);
}

uint32_t ReadWord(const uint8_t* source) {
  uint32_t result;
  __builtin_memcpy(&result, source, 4);
  return result;
}

uint8_t DecodeSymbol(FseState& state, ReverseBitStream& bits, bool fast) {
  const FseEntry entry = state.table[state.index];
  size_t low;
  if (fast) {
    low = detail::PeekBits(bits, entry.bits);
    bits.consumed += entry.bits;
  }
  else {
    low = detail::TakeBits(bits, entry.bits);
  }
  state.index = entry.next_state + low;
  return entry.symbol;
}

}

size_t ReadNormalizedCounts(
  int16_t* counts, unsigned* maximum_symbol, unsigned* table_log,
  const void* source, size_t source_size
) {
  const auto* input = static_cast<const uint8_t*>(source);
  if (source_size < 8) {
    uint8_t buffer[8] = {};
    for (size_t i = 0; i < source_size; ++i) {
      buffer[i] = input[i];
    }
    const size_t size = ReadNormalizedCounts(counts, maximum_symbol,
                                             table_log, buffer, 8);
    return !IsError(size) && size > source_size ? size_t(-20) : size;
  }

  const uint8_t* const start = input;
  const uint8_t* const end = input + source_size;
  const unsigned symbol_limit = *maximum_symbol + 1;
  for (unsigned i = 0; i < symbol_limit; ++i) {
    counts[i] = 0;
  }
  uint32_t bits = ReadWord(input);
  int width = (bits & 15) + 5;
  if (width > 15) {
    return size_t(-44);
  }
  *table_log = width;
  bits >>= 4;
  int consumed = 4;
  int remaining = (1 << width) + 1;
  int threshold = 1 << width;
  ++width;
  unsigned symbol = 0;
  bool previous_zero = false;
  for (;;) {
    if (previous_zero) {
      unsigned repeats = __builtin_ctz(~bits | 0x80000000) >> 1;
      while (repeats >= 12) {
        symbol += 36;
        if (input <= end - 7) {
          input += 3;
        }
        else {
          consumed -= 8 * (end - 7 - input);
          consumed &= 31;
          input = end - 4;
        }
        bits = ReadWord(input) >> consumed;
        repeats = __builtin_ctz(~bits | 0x80000000) >> 1;
      }
      symbol += 3 * repeats;
      bits >>= 2 * repeats;
      consumed += 2 * repeats;
      symbol += bits & 3;
      consumed += 2;
      if (symbol >= symbol_limit) {
        break;
      }
      if (input <= end - 7 || input + (consumed >> 3) <= end - 4) {
        input += consumed >> 3;
        consumed &= 7;
      }
      else {
        consumed -= 8 * (end - 4 - input);
        consumed &= 31;
        input = end - 4;
      }
      bits = ReadWord(input) >> consumed;
    }

    const int maximum = (2 * threshold - 1) - remaining;
    int count;
    if ((bits & (threshold - 1)) < unsigned(maximum)) {
      count = bits & (threshold - 1);
      consumed += width - 1;
    }
    else {
      count = bits & (2 * threshold - 1);
      if (count >= threshold) {
        count -= maximum;
      }
      consumed += width;
    }
    --count;
    remaining -= count < 0 ? -count : count;
    counts[symbol++] = count;
    previous_zero = count == 0;
    if (remaining < threshold) {
      if (remaining <= 1) {
        break;
      }
      width = HighestBit(remaining) + 1;
      threshold = 1 << (width - 1);
    }
    if (symbol >= symbol_limit) {
      break;
    }
    if (input <= end - 7 || input + (consumed >> 3) <= end - 4) {
      input += consumed >> 3;
      consumed &= 7;
    }
    else {
      consumed -= 8 * (end - 4 - input);
      consumed &= 31;
      input = end - 4;
    }
    bits = ReadWord(input) >> consumed;
  }
  if (remaining != 1) {
    return size_t(-20);
  }
  if (symbol > symbol_limit) {
    return size_t(-48);
  }
  if (consumed > 32) {
    return size_t(-20);
  }
  *maximum_symbol = symbol - 1;
  return input - start + ((consumed + 7) >> 3);
}

size_t BuildFseTable(
  uint32_t* table, const int16_t* counts, unsigned maximum_symbol,
  unsigned table_log, void* workspace, size_t workspace_size
) {
  if (maximum_symbol > 255 ||
      2 * size_t(maximum_symbol + 1) + (uint64_t(1) << table_log) + 8 >
        workspace_size) {
    return size_t(-46);
  }
  if (table_log > 12) {
    return size_t(-44);
  }
  auto* header = reinterpret_cast<FseTableHeader*>(table);
  auto* entries = reinterpret_cast<FseEntry*>(table + 1);
  auto* next = static_cast<uint16_t*>(workspace);
  auto* spread = reinterpret_cast<uint8_t*>(next + maximum_symbol + 1);
  const unsigned table_size = 1 << table_log;
  unsigned high = table_size - 1;
  const int16_t large = (1 << table_log) >> 1;
  uint16_t fast = 1;
  for (unsigned symbol = 0; symbol <= maximum_symbol; ++symbol) {
    if (counts[symbol] == -1) {
      entries[high--].symbol = symbol;
      next[symbol] = 1;
    }
    else {
      if (counts[symbol] >= large) {
        fast = 0;
      }
      next[symbol] = counts[symbol];
    }
  }
  *header = {uint16_t(table_log), fast};
  const unsigned mask = table_size - 1;
  const unsigned step = (table_size >> 1) + (table_size >> 3) + 3;
  unsigned position = 0;
  if (high == table_size - 1) {
    for (unsigned symbol = 0; symbol <= maximum_symbol; ++symbol) {
      const uint64_t repeated = uint64_t(symbol) * 0x0101010101010101;
      // The original writes eight bytes even for zero-frequency symbols.
      __builtin_memcpy(spread + position, &repeated, 8);
      for (int i = 8; i < counts[symbol]; i += 8) {
        __builtin_memcpy(spread + position + i, &repeated, 8);
      }
      position += counts[symbol];
    }
    position = 0;
    for (unsigned i = 0; i < table_size; ++i) {
      entries[position].symbol = spread[i];
      position = (position + step) & mask;
    }
  }
  else {
    for (unsigned symbol = 0; symbol <= maximum_symbol; ++symbol) {
      for (int i = 0; i < counts[symbol]; ++i) {
        entries[position].symbol = symbol;
        position = (position + step) & mask;
        while (position > high) {
          position = (position + step) & mask;
        }
      }
    }
    if (position != 0) {
      return size_t(-1);
    }
  }
  for (unsigned i = 0; i < table_size; ++i) {
    const unsigned state = next[entries[i].symbol]++;
    entries[i].bits = table_log - HighestBit(state);
    entries[i].next_state = (state << entries[i].bits) - table_size;
  }
  return 0;
}

void InitializeFseState(
  FseState* state, ReverseBitStream* bits, const uint32_t* table
) {
  const auto* header = reinterpret_cast<const FseTableHeader*>(table);
  state->index = detail::TakeBits(*bits, header->table_log);
  detail::ReloadBits(*bits);
  state->table = reinterpret_cast<const FseEntry*>(table + 1);
}

size_t DecompressFse(
  void* destination, size_t destination_size, const void* source,
  size_t source_size, unsigned maximum_log, void* workspace,
  size_t workspace_size, int
) {
  if (workspace_size < 512) {
    return size_t(-1);
  }
  auto* counts = static_cast<int16_t*>(workspace);
  unsigned maximum_symbol = 255;
  unsigned table_log;
  const size_t header_size = ReadNormalizedCounts(counts, &maximum_symbol,
                                                 &table_log, source,
                                                 source_size);
  if (IsError(header_size)) {
    return header_size;
  }
  if (table_log > maximum_log) {
    return size_t(-44);
  }
  const size_t table_bytes = 4 * ((size_t(1) << table_log) + 1);
  const size_t scratch_bytes = 2 * (maximum_symbol + 1) +
    (size_t(1) << table_log) + 8;
  const size_t required = 512 + table_bytes + 8 +
    ((scratch_bytes + 3) & ~size_t(3));
  if (required > workspace_size) {
    return size_t(-44);
  }
  auto* table = reinterpret_cast<uint32_t*>(counts + 256);
  auto* scratch = reinterpret_cast<uint8_t*>(table) + table_bytes;
  const size_t build = BuildFseTable(table, counts, maximum_symbol, table_log,
                                    scratch,
                                    workspace_size - 512 - table_bytes);
  if (IsError(build)) {
    return build;
  }

  ReverseBitStream bits;
  const size_t init = InitializeReverseBits(
    &bits, static_cast<const uint8_t*>(source) + header_size,
    source_size - header_size
  );
  if (IsError(init)) {
    return init;
  }
  FseState first, second;
  InitializeFseState(&first, &bits, table);
  InitializeFseState(&second, &bits, table);
  const bool fast = reinterpret_cast<FseTableHeader*>(table)->fast != 0;
  auto* output = static_cast<uint8_t*>(destination);
  auto* const start = output;
  auto* const end = output + destination_size;
  while ((detail::ReloadBits(bits) == detail::BitReload::Unfinished) &
         (end - output > 3)) {
    output[0] = DecodeSymbol(first, bits, fast);
    output[1] = DecodeSymbol(second, bits, fast);
    output[2] = DecodeSymbol(first, bits, fast);
    output[3] = DecodeSymbol(second, bits, fast);
    output += 4;
  }
  for (;;) {
    if (end - output < 2) {
      return size_t(-70);
    }
    *output++ = DecodeSymbol(first, bits, fast);
    if (detail::ReloadBits(bits) == detail::BitReload::Overflow) {
      *output++ = DecodeSymbol(second, bits, fast);
      break;
    }
    if (end - output < 2) {
      return size_t(-70);
    }
    *output++ = DecodeSymbol(second, bits, fast);
    if (detail::ReloadBits(bits) == detail::BitReload::Overflow) {
      *output++ = DecodeSymbol(first, bits, fast);
      break;
    }
  }
  return output - start;
}

}
