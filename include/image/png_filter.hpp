/*
  Modified libpng source for the recovered SDK ABI.
  Copyright 1995-2019 The PNG Reference Library Authors.
  Original license: https://github.com/pnggroup/libpng/blob/v1.6.37/LICENSE
  Full license text: include/image/png_row.hpp.
*/

#pragma once

#include "image/png_row.hpp"

extern "C" {

void nndetailImagePng_png_read_filter_row_up_neon(
  fw::image::PngRowInfo*, uint8_t*, const uint8_t*
);
void nndetailImagePng_png_read_filter_row_sub3_neon(
  fw::image::PngRowInfo*, uint8_t*, const uint8_t*
);
void nndetailImagePng_png_read_filter_row_sub4_neon(
  fw::image::PngRowInfo*, uint8_t*, const uint8_t*
);
void nndetailImagePng_png_read_filter_row_avg3_neon(
  fw::image::PngRowInfo*, uint8_t*, const uint8_t*
);
void nndetailImagePng_png_read_filter_row_avg4_neon(
  fw::image::PngRowInfo*, uint8_t*, const uint8_t*
);
void nndetailImagePng_png_read_filter_row_paeth3_neon(
  fw::image::PngRowInfo*, uint8_t*, const uint8_t*
);
void nndetailImagePng_png_read_filter_row_paeth4_neon(
  fw::image::PngRowInfo*, uint8_t*, const uint8_t*
);

}
