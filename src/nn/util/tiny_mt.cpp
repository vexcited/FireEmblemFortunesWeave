/*
 * SPDX-License-Identifier: BSD-3-Clause
 * Origin: https://github.com/MersenneTwister-Lab/TinyMT
 * Revision: fabd14128db25498d6d3baf9cd25e15983bc12fd
 * License:
 * https://github.com/MersenneTwister-Lab/TinyMT/blob/master/LICENSE.txt Adapted
 * for the observed sixteen-byte state and fixed SDK parameters.
 *
 * Copyright (c) 2011, 2013 Mutsuo Saito, Makoto Matsumoto,
 * Hiroshima University and The University of Tokyo.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 *
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above
 *       copyright notice, this list of conditions and the following
 *       disclaimer in the documentation and/or other materials provided
 *       with the distribution.
 *     * Neither the name of the Hiroshima University nor the names of
 *       its contributors may be used to endorse or promote products
 *       derived from this software without specific prior written
 *       permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include "nn/util/tiny_mt.hpp"

#include <string.h>

namespace nn::util {

static_assert(sizeof(TinyMt) == 16);

static void NextState(uint32_t* state) {
  uint32_t x = (state[0] & 0x7fffffff) ^ state[1] ^ state[2];
  x ^= x << 1;
  uint32_t y = state[3];
  y ^= (y >> 1) ^ x;
  state[0] = state[1];
  state[1] = state[2];
  state[2] = x ^ (y << 10);
  state[3] = y;

  if (y & 1) {
    state[1] ^= 0x8f7011ee;
    state[2] ^= 0xfc78ff1f;
  }
}

static uint32_t MixFirst(uint32_t value) {
  return (value ^ (value >> 27)) * 1664525u;
}

static uint32_t MixSecond(uint32_t value) {
  return (value ^ (value >> 27)) * 1566083941u;
}

void TinyMt::FinalizeInitialization() {
  if (!(state[0] & 0x7fffffff) && !state[1] && !state[2] && !state[3]) {
    state[0] = 'T';
    state[1] = 'I';
    state[2] = 'N';
    state[3] = 'Y';
  }

  for (unsigned index = 0; index < 8; ++index) {
    NextState(state);
  }
}

void TinyMt::Initialize(const uint32_t* seeds, int count) {
  state[0] = 0;
  state[1] = 0x8f7011ee;
  state[2] = 0xfc78ff1f;
  state[3] = 0x3793fdff;
  uint32_t mixed = MixFirst(state[0] ^ state[1] ^ state[3]);
  state[1] += mixed;
  mixed += uint32_t(count);
  state[2] += mixed;
  state[0] = mixed;
  uint32_t slot = 1;
  int64_t iterations = count > 7 ? count : 7;

  for (int64_t index = 0; index < iterations; ++index) {
    uint32_t seed = index < count ? seeds[index] : 0;
    mixed =
      MixFirst(state[slot] ^ state[(slot + 1) & 3] ^ state[(slot + 3) & 3]);
    uint32_t value = mixed + seed + slot;
    state[slot] = value;
    state[(slot + 1) & 3] += mixed;
    state[(slot + 2) & 3] += value;
    slot = (slot + 1) & 3;
  }

  for (unsigned index = 0; index < 4; ++index) {
    mixed =
      MixSecond(state[slot] + state[(slot + 1) & 3] + state[(slot + 3) & 3]);
    state[(slot + 1) & 3] ^= mixed;
    mixed -= slot;
    state[(slot + 2) & 3] ^= mixed;
    state[slot] = mixed;
    slot = (slot + 1) & 3;
  }

  FinalizeInitialization();
}

uint32_t TinyMt::GenerateRandomU32() {
  NextState(state);
  uint32_t mixed = state[0] + (state[2] >> 8);
  uint32_t value = state[3] ^ mixed;

  if (mixed & 1) {
    value ^= 0x3793fdff;
  }

  return value;
}

void TinyMt::Initialize(uint32_t seed) {
  state[0] = seed;
  state[1] = 0x8f7011ee;
  state[2] = 0xfc78ff1f;
  state[3] = 0x3793fdff;

  for (unsigned index = 1; index < 8; ++index) {
    uint32_t previous = state[(index - 1) & 3];
    state[index & 3] ^= index + 1812433253u * (previous ^ (previous >> 30));
  }

  FinalizeInitialization();
}

void TinyMt::GenerateInitialValuePlus(uint32_t* values, int index,
  uint32_t value) {
  int next = (index + 1) % 4;
  int second = (index + 2) % 4;
  int last = (index + 3) % 4;
  uint32_t mixed = MixFirst(values[index] ^ values[next] ^ values[last]);
  uint32_t result = mixed + value + index;
  values[index] = result;
  values[next] += mixed;
  values[second] += result;
}

void TinyMt::GenerateInitialValueXor(uint32_t* values, int index) {
  int next = (index + 1) % 4;
  int second = (index + 2) % 4;
  int last = (index + 3) % 4;
  uint32_t mixed = MixSecond(values[index] + values[next] + values[last]);
  values[index] = mixed - index;
  values[next] ^= mixed;
  values[second] ^= mixed - index;
}

void TinyMt::SaveState(State* saved) {
  memcpy(saved->data, state, sizeof(state));
}

void TinyMt::RestoreState(const State* saved) {
  memcpy(state, saved->data, sizeof(state));
}

void TinyMt::GenerateRandomBytes(void* buffer, size_t size) {
  uint8_t* begin = static_cast<uint8_t*>(buffer);
  uint8_t* end = begin + size;
  uint8_t* alignedBegin = reinterpret_cast<uint8_t*>(
    (reinterpret_cast<uintptr_t>(begin) + 3) & ~static_cast<uintptr_t>(3));
  uint8_t* alignedEnd = reinterpret_cast<uint8_t*>(
    reinterpret_cast<uintptr_t>(end) & ~static_cast<uintptr_t>(3));

  if (alignedBegin > begin) {
    size_t headSize = alignedBegin - begin;
    uint32_t value = GenerateRandomU32();
    if (headSize >= size) {
      memcpy(begin, &value, size);
      return;
    }
    memcpy(begin, &value, headSize);
  }

  for (uint8_t* current = alignedBegin; current < alignedEnd; current += 4) {
    *reinterpret_cast<uint32_t*>(current) = GenerateRandomU32();
  }

  if (alignedEnd != end) {
    uint32_t value = GenerateRandomU32();
    memcpy(alignedEnd, &value, end - alignedEnd);
  }
}

}
