/*
  Adapted from Zstandard under the BSD license.
  Copyright Meta Platforms, Inc. and affiliates. All rights reserved.
  Original license: https://github.com/facebook/zstd/blob/v1.5.6/LICENSE
*/

// Original license text.
// BSD License
//
// For Zstandard software
//
// Copyright (c) Meta Platforms, Inc. and affiliates. All rights reserved.
//
// Redistribution and use in source and binary forms, with or without modification,
// are permitted provided that the following conditions are met:
//
//  * Redistributions of source code must retain the above copyright notice, this
//    list of conditions and the following disclaimer.
//
//  * Redistributions in binary form must reproduce the above copyright notice,
//    this list of conditions and the following disclaimer in the documentation
//    and/or other materials provided with the distribution.
//
//  * Neither the name Facebook, nor Meta, nor the names of its contributors may
//    be used to endorse or promote products derived from this software without
//    specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
// ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
// WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
// DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
// ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
// (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
// LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
// ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
// SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
// End of original license text.

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
