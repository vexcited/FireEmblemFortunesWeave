#pragma once

#include "image/png_read.hpp"

namespace fw::image {

struct PngColorspace {
  int32_t gamma;
  uint8_t unknown_004[70];
  uint16_t flags;
};

struct PngReadSetupState {
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
  uint8_t background_gamma_type;
  uint8_t unknown_2e5[3];
  int32_t background_gamma;
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
  uint8_t unknown_450[192];
  PngColorspace colorspace;
};

static_assert(sizeof(PngReadSetupState) == 1376);
static_assert(offsetof(PngReadSetupState, background_gamma_type) == 740);
static_assert(offsetof(PngReadSetupState, background_gamma) == 744);
static_assert(offsetof(PngReadSetupState, colorspace) == 1296);
static_assert(offsetof(PngColorspace, flags) == 74);

}

extern "C" void nndetailImagePng_png_init_read_transformations(
  fw::image::PngReadSetupState*
);
