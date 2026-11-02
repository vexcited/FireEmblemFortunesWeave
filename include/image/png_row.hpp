#pragma once

#include <stddef.h>
#include <stdint.h>

namespace fw::image {

struct PngRowInfo {
  uint32_t width;
  uint32_t unknown_04;
  size_t row_bytes;
  uint8_t color_type;
  uint8_t bit_depth;
  uint8_t channels;
  uint8_t pixel_depth;
};

static_assert(offsetof(PngRowInfo, row_bytes) == 8);
static_assert(offsetof(PngRowInfo, pixel_depth) == 19);
static_assert(sizeof(PngRowInfo) == 24);

}

extern "C" {

void nndetailImagePng_png_do_invert(fw::image::PngRowInfo*, uint8_t*);
void nndetailImagePng_png_do_swap(fw::image::PngRowInfo*, uint8_t*);
void nndetailImagePng_png_do_packswap(fw::image::PngRowInfo*, uint8_t*);
void nndetailImagePng_png_do_strip_channel(
  fw::image::PngRowInfo*, uint8_t*, int at_start
);
void nndetailImagePng_png_do_bgr(fw::image::PngRowInfo*, uint8_t*);
void nndetailImagePng_png_do_read_interlace(
  fw::image::PngRowInfo*, uint8_t*, int pass, uint32_t transformations
);
void nndetailImagePng_png_do_write_interlace(
  fw::image::PngRowInfo*, uint8_t*, int pass
);

}
