/*
  Modified libpng source for the recovered SDK ABI.
  Copyright 1995-2019 The PNG Reference Library Authors.
  Original license: https://github.com/pnggroup/libpng/blob/v1.6.37/LICENSE
  Full license text: include/image/png_row.hpp.
*/

#pragma once

#include "image/png_read.hpp"

namespace fw::image {

struct PngQuantizeState {
  uint8_t unknown_000[416];
  uint32_t flags;
  uint32_t transformations;
  uint8_t unknown_1a8[280];
  PngColor* palette;
  uint16_t num_palette;
  uint8_t unknown_2ca[286];
  uint8_t* palette_lookup;
  uint8_t* quantize_index;
  uint8_t unknown_3f8[128];
  uint8_t* quantize_sort;
  uint8_t* index_to_palette;
  uint8_t* palette_to_index;
};

static_assert(sizeof(PngQuantizeState) == 1168);
static_assert(offsetof(PngQuantizeState, flags) == 416);
static_assert(offsetof(PngQuantizeState, palette) == 704);
static_assert(offsetof(PngQuantizeState, palette_lookup) == 1000);
static_assert(offsetof(PngQuantizeState, quantize_sort) == 1144);

}

extern "C" void nndetailImagePng_png_set_quantize(
  fw::image::PngQuantizeState*, fw::image::PngColor*, int, int,
  const uint16_t*, int
);
