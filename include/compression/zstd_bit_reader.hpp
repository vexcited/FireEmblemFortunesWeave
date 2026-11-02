#pragma once

#include "compression/zstd_huffman.hpp"

namespace fw::compression::detail {

enum class BitReload {
  Unfinished,
  EndOfBuffer,
  Complete,
  Overflow,
};

inline BitReload ReloadBits(ReverseBitStream& bits) {
  static constexpr uint64_t empty = 0;
  if (bits.consumed > 64) {
    bits.cursor = reinterpret_cast<const uint8_t*>(&empty);
    return BitReload::Overflow;
  }
  BitReload result = BitReload::Unfinished;
  if (bits.cursor >= bits.reload_limit) {
    bits.cursor -= bits.consumed >> 3;
    bits.consumed &= 7;
  }
  else {
    if (bits.cursor == bits.start) {
      return bits.consumed < 64 ? BitReload::EndOfBuffer :
                                  BitReload::Complete;
    }
    unsigned bytes = bits.consumed >> 3;
    if (bits.cursor - bytes < bits.start) {
      bytes = bits.cursor - bits.start;
      result = BitReload::EndOfBuffer;
    }
    bits.cursor -= bytes;
    bits.consumed -= bytes * 8;
  }
  __builtin_memcpy(&bits.container, bits.cursor, 8);
  return result;
}

inline size_t PeekBits(const ReverseBitStream& bits, unsigned count) {
  return (bits.container << (bits.consumed & 63)) >> ((64 - count) & 63);
}

inline size_t TakeBits(ReverseBitStream& bits, unsigned count) {
  bits.consumed += count;
  return (bits.container >> ((64 - bits.consumed) & 63)) &
    ((uint64_t(1) << count) - 1);
}

}
