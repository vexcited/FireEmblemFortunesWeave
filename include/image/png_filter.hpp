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
