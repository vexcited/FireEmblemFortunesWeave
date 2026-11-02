#pragma once

#include "image/png_row.hpp"

namespace fw::image {

struct PngWriteState {
  unsigned char unknown_000[392];
  void (*user_transform)(PngWriteState*, PngRowInfo*, uint8_t*);
  unsigned char unknown_190[16];
  uint32_t flags;
  uint32_t transformations;
  unsigned char unknown_1a8[240];
  uint8_t* row_buffer;
  unsigned char unknown_2a0[56];
  uint8_t bit_depth;
  unsigned char unknown_2d9[116];
  uint8_t significant_red;
  uint8_t significant_green;
  uint8_t significant_blue;
  uint8_t significant_gray;
  uint8_t significant_alpha;
};

static_assert(offsetof(PngWriteState, user_transform) == 392);
static_assert(offsetof(PngWriteState, flags) == 416);
static_assert(offsetof(PngWriteState, transformations) == 420);
static_assert(offsetof(PngWriteState, row_buffer) == 664);
static_assert(offsetof(PngWriteState, bit_depth) == 728);
static_assert(offsetof(PngWriteState, significant_red) == 845);

}

extern "C" void nndetailImagePng_png_do_write_transformations(
  fw::image::PngWriteState* state, fw::image::PngRowInfo* info
);
