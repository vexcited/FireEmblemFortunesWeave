/*
  Modified libpng source for the recovered SDK ABI.
  Copyright 1995-2019 The PNG Reference Library Authors.
  Original license: https://github.com/pnggroup/libpng/blob/v1.6.37/LICENSE
  Full license text: include/image/png_row.hpp.
*/

#pragma once

#include "image/png_row.hpp"

namespace fw::image {

struct PngColor {
  uint8_t red;
  uint8_t green;
  uint8_t blue;
};

struct PngColor8 {
  uint8_t red;
  uint8_t green;
  uint8_t blue;
  uint8_t gray;
  uint8_t alpha;
};

struct PngColor16 {
  uint8_t index;
  uint16_t red;
  uint16_t green;
  uint16_t blue;
  uint16_t gray;
};

struct PngReadState {
  uint8_t unknown_000[384];
  void (*read_user_transform_fn)(PngReadState*, PngRowInfo*, uint8_t*);
  uint8_t unknown_188[16];
  uint8_t user_transform_depth;
  uint8_t user_transform_channels;
  uint8_t unknown_19a[2];
  uint32_t mode;
  uint32_t flags;
  uint32_t transformations;
  uint8_t unknown_1a8[240];
  uint8_t* row_buf;
  uint8_t unknown_2a0[32];
  PngColor* palette;
  uint16_t num_palette;
  uint8_t unknown_2ca[2];
  int32_t num_palette_max;
  uint16_t num_trans;
  uint8_t unknown_2d2[5];
  uint8_t color_type;
  uint8_t bit_depth;
  uint8_t unknown_2d9[9];
  uint16_t filler;
  uint8_t unknown_2e4[8];
  PngColor16 background;
  PngColor16 background_1;
  uint8_t unknown_300[16];
  int32_t gamma_shift;
  int32_t screen_gamma;
  uint8_t* gamma_table;
  uint16_t** gamma_16_table;
  uint8_t* gamma_from_1;
  uint8_t* gamma_to_1;
  uint16_t** gamma_16_from_1;
  uint16_t** gamma_16_to_1;
  PngColor8 sig_bit;
  PngColor8 shift;
  uint8_t unknown_352[6];
  uint8_t* trans_alpha;
  PngColor16 trans_color;
  uint8_t unknown_36a[126];
  uint8_t* palette_lookup;
  uint8_t* quantize_index;
  uint8_t unknown_3f8[72];
  uint8_t rgb_to_gray_status;
  uint8_t rgb_to_gray_coefficients_set;
  uint16_t rgb_to_gray_red_coeff;
  uint16_t rgb_to_gray_green_coeff;
  uint8_t unknown_446[2];
  uint8_t* riffled_palette;
};

static_assert(sizeof(PngColor16) == 10);
static_assert(sizeof(PngColor8) == 5);
static_assert(sizeof(PngReadState) == 1104);
static_assert(offsetof(PngReadState, flags) == 416);
static_assert(offsetof(PngReadState, row_buf) == 664);
static_assert(offsetof(PngReadState, background) == 748);
static_assert(offsetof(PngReadState, gamma_table) == 792);
static_assert(offsetof(PngReadState, trans_color) == 864);
static_assert(offsetof(PngReadState, palette_lookup) == 1000);
static_assert(offsetof(PngReadState, riffled_palette) == 1096);

}

extern "C" void nndetailImagePng_png_do_read_transformations(
  fw::image::PngReadState*, fw::image::PngRowInfo*
);
