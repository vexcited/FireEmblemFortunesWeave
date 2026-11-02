#include "image/jpeg_huffman_encode.hpp"

namespace jpeg_huffman_encode {

extern "C" void *memcpy(void *, const void *, size_t);
extern "C" void *memset(void *, int, size_t);

static constexpr uint8_t natural_order[63] = {
    1,  8,  16, 9,  2,  3,  10, 17, 24, 32, 25, 18, 11, 4,  5,  12,
    19, 26, 33, 40, 48, 41, 34, 27, 20, 13, 6,  7,  14, 21, 28, 35,
    42, 49, 56, 57, 50, 43, 36, 29, 22, 15, 23, 30, 37, 44, 51, 58,
    59, 52, 45, 38, 31, 39, 46, 53, 60, 61, 54, 47, 55, 62, 63};

int encode_one_block(WorkingState *state, const int16_t *block, int last_dc_val,
                     const DerivedTable *dc, const DerivedTable *ac) {
  uint8_t temporary[512];
  memset(temporary, 0, sizeof(temporary));
  bool local = state->free_in_buffer < sizeof(temporary);
  auto *output = local ? temporary : state->next_output_byte;
  uint64_t accumulator = state->cur.put_buffer;
  int bits = state->cur.put_bits;
  int32_t zero_run_code = ac->ehufco[0xf0];
  int zero_run_size = ac->ehufsi[0xf0];

  auto emit_bytes = [&](int count) {
    for (int i = 0; i < count; ++i) {
      bits -= 8;
      auto byte = static_cast<uint8_t>(accumulator >> bits);
      *output++ = byte;
      if (byte == 255) {
        *output++ = 0;
      }
    }
  };
  auto append = [&](int32_t code, int size) {
    bits += size;
    accumulator = (accumulator << size) | static_cast<uint64_t>(code);
  };
  auto emit_bits = [&](int32_t code, int size) {
    if (bits > 47) {
      emit_bytes(6);
    }
    append(code, size);
  };

  int difference = block[0] - last_dc_val;
  int magnitude = difference < 0 ? -difference : difference;
  int count = magnitude ? 32 - __builtin_clz(magnitude) : 0;
  int value = difference - (difference < 0);
  emit_bits(dc->ehufco[count], dc->ehufsi[count]);
  value &= (uint64_t{1} << count) - 1;
  emit_bits(value, count);

  int run = 0;
  for (auto index : natural_order) {
    int coefficient = block[index];
    if (coefficient == 0) {
      ++run;
      continue;
    }
    magnitude = coefficient < 0 ? -coefficient : coefficient;
    count = 32 - __builtin_clz(magnitude);
    value = coefficient - (coefficient < 0);
    while (run > 15) {
      emit_bits(zero_run_code, zero_run_size);
      run -= 16;
    }
    int symbol = (run << 4) + count;
    int32_t code = ac->ehufco[symbol];
    int size = ac->ehufsi[symbol];
    value &= (uint64_t{1} << count) - 1;
    if (bits > 31) {
      emit_bytes(4);
    }
    append(code, size);
    append(value, count);
    run = 0;
  }
  if (run) {
    emit_bits(ac->ehufco[0], ac->ehufsi[0]);
  }

  state->cur.put_buffer = accumulator;
  state->cur.put_bits = bits;
  if (local) {
    size_t remaining = output - temporary;
    const auto *source = temporary;
    while (remaining) {
      size_t amount =
          remaining < state->free_in_buffer ? remaining : state->free_in_buffer;
      memcpy(state->next_output_byte, source, amount);
      state->next_output_byte += amount;
      state->free_in_buffer -= amount;
      source += amount;
      if (state->free_in_buffer == 0) {
        auto *destination = state->cinfo->dest;
        if (!destination->empty_output_buffer(state->cinfo)) {
          return 0;
        }
        state->next_output_byte = destination->next_output_byte;
        state->free_in_buffer = destination->free_in_buffer;
      }
      remaining -= amount;
    }
  }
  else {
    state->free_in_buffer -= output - state->next_output_byte;
    state->next_output_byte = output;
  }
  return 1;
}

}

/*
  Adapted from libjpeg-turbo 1.5.0 jchuff.c.
  The unrolled coefficient traversal is expressed as a loop.
  SDK working-state offsets and the observed 512-byte staging buffer are used.
  See licenses/libjpeg-turbo/README.ijg and HUFFMAN_ENCODE_CHANGES.md.

  Copyright (C) 1991-1997, Thomas G. Lane.
  Copyright (C) 2009-2011, 2014-2016, D. R. Commander.
  Copyright (C) 2015, Matthieu Darbois.
*/
