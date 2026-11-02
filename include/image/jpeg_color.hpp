#pragma once

#include <stddef.h>
#include <stdint.h>

namespace jpeg_color {

struct Decoder;

struct ErrorManager {
  void (*error_exit)(Decoder *);
  uint8_t unknown_008[0x20];
  int32_t msg_code;
};

struct MemoryManager {
  void *(*alloc_small)(Decoder *, int32_t, size_t);
};

struct Component {
  uint8_t unknown_000[0x34];
  int32_t component_needed;
  uint8_t unknown_038[0x28];
};

using Rows = uint8_t **;
using Planes = uint8_t ***;
using Convert = void (*)(Decoder *, Planes, uint32_t, Rows, int32_t);

struct Deconverter {
  void (*start_pass)(Decoder *);
  Convert color_convert;
};

struct Decoder {
  ErrorManager *err;
  MemoryManager *mem;
  uint8_t unknown_010[0x30];
  int32_t num_components;
  int32_t jpeg_color_space;
  int32_t out_color_space;
  uint8_t unknown_04c[0x28];
  int32_t quantize_colors;
  int32_t dither_mode;
  uint8_t unknown_07c[0x14];
  uint32_t output_width;
  uint8_t unknown_094[4];
  int32_t out_color_components;
  int32_t output_components;
  uint8_t unknown_0a0[0x10];
  uint32_t output_scanline;
  uint8_t unknown_0b4[0x84];
  Component *comp_info;
  uint8_t unknown_140[0x78];
  uint8_t *sample_range_limit;
  uint8_t unknown_1c0[0xc8];
  Deconverter *cconvert;
  uint8_t unknown_290[8];
};

static_assert(sizeof(Component) == 0x60);
static_assert(sizeof(Decoder) == 0x298);
static_assert(offsetof(ErrorManager, msg_code) == 0x28);
static_assert(offsetof(Decoder, output_width) == 0x90);
static_assert(offsetof(Decoder, output_scanline) == 0xb0);
static_assert(offsetof(Decoder, comp_info) == 0x138);
static_assert(offsetof(Decoder, sample_range_limit) == 0x1b8);
static_assert(offsetof(Decoder, cconvert) == 0x288);

}

extern "C" void
nndetailImageJpeg_jinit_color_deconverter(jpeg_color::Decoder *decoder);

extern "C" void nndetailImageJpeg_jcopy_sample_rows(jpeg_color::Rows input,
                                                    int input_row,
                                                    jpeg_color::Rows output,
                                                    int output_row, int rows,
                                                    uint32_t columns);
