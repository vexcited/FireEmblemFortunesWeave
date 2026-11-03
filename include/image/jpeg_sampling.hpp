/*
  Based in part on the work of the Independent JPEG Group.
  Modified libjpeg-turbo 1.5.0 source for the recovered SDK ABI.
  Copyright 1991-2016 Thomas G. Lane and Guido Vollbeding.
  Original license: https://github.com/libjpeg-turbo/libjpeg-turbo/blob/1.5.0/README.ijg
  Full license text: include/image/jpeg_transform.hpp.
*/

#pragma once

#include <stddef.h>
#include <stdint.h>

namespace jpeg_sampling {

using Rows = uint8_t **;
using Planes = Rows *;
struct Encoder;
struct Decoder;

struct ErrorManager {
  void (*error_exit)(void *);
  void (*emit_message)(void *, int);
  uint8_t unknown_010[0x18];
  int32_t msg_code;
};

struct MemoryManager {
  void *(*alloc_small)(void *, int, size_t);
  void *alloc_large;
  Rows (*alloc_sarray)(void *, int, uint32_t, uint32_t);
};

struct Component {
  int32_t component_id;
  int32_t component_index;
  int32_t h_samp_factor;
  int32_t v_samp_factor;
  uint8_t unknown_010[0xc];
  uint32_t width_in_blocks;
  uint32_t height_in_blocks;
  int32_t DCT_scaled_size;
  uint8_t unknown_028[4];
  uint32_t downsampled_width;
  uint32_t downsampled_height;
  int32_t component_needed;
  uint8_t unknown_038[0x28];
};

using Downsample = void (*)(Encoder *, Component *, Rows, Rows);
using Upsample = void (*)(Decoder *, Component *, Rows, Rows *);

struct PublicDownsampler {
  void (*start_pass)(Encoder *);
  void (*downsample)(Encoder *, Planes, uint32_t, Planes, uint32_t);
  int32_t need_context_rows;
};

struct Downsampler {
  PublicDownsampler pub;
  Downsample methods[10];
};

struct PublicUpsampler {
  void (*start_pass)(Decoder *);
  void (*upsample)(Decoder *, Planes, uint32_t *, uint32_t, Rows, uint32_t *,
                   uint32_t);
  int32_t need_context_rows;
};

struct Upsampler {
  PublicUpsampler pub;
  Rows color_buf[10];
  Upsample methods[10];
  int32_t next_row_out;
  uint32_t rows_to_go;
  int32_t rowgroup_height[10];
  uint8_t h_expand[10];
  uint8_t v_expand[10];
};

struct Master {
  uint8_t unknown_000[0x6c];
  int32_t jinit_upsampler_no_alloc;
};

struct Deconverter {
  void (*start_pass)(Decoder *);
  void (*color_convert)(Decoder *, Planes, uint32_t, Rows, int32_t);
};

struct Encoder {
  ErrorManager *err;
  MemoryManager *mem;
  uint8_t unknown_010[0x28];
  uint32_t image_width;
  uint8_t unknown_03c[0x28];
  int32_t num_components;
  uint8_t unknown_068[8];
  Component *comp_info;
  uint8_t unknown_078[0xbc];
  int32_t CCIR601_sampling;
  uint8_t unknown_138[4];
  int32_t smoothing_factor;
  uint8_t unknown_140[0x24];
  int32_t max_h_samp_factor;
  int32_t max_v_samp_factor;
  uint8_t unknown_16c[0xbc];
  PublicDownsampler *downsample;
};

struct Decoder {
  ErrorManager *err;
  MemoryManager *mem;
  uint8_t unknown_010[0x30];
  int32_t num_components;
  uint8_t unknown_044[0x28];
  int32_t do_fancy_upsampling;
  uint8_t unknown_070[0x20];
  uint32_t output_width;
  uint32_t output_height;
  uint8_t unknown_098[0xa0];
  Component *comp_info;
  uint8_t unknown_140[0x54];
  int32_t CCIR601_sampling;
  uint8_t unknown_198[8];
  int32_t max_h_samp_factor;
  int32_t max_v_samp_factor;
  int32_t min_DCT_scaled_size;
  uint8_t unknown_1ac[0x94];
  Master *master;
  uint8_t unknown_248[0x38];
  PublicUpsampler *upsample;
  Deconverter *cconvert;
};

static_assert(sizeof(Component) == 0x60);
static_assert(sizeof(Downsampler) == 0x68);
static_assert(sizeof(Upsampler) == 0x100);
static_assert(offsetof(Encoder, downsample) == 0x228);
static_assert(offsetof(Encoder, max_h_samp_factor) == 0x164);
static_assert(offsetof(Decoder, upsample) == 0x280);
static_assert(offsetof(Decoder, master) == 0x240);
static_assert(offsetof(Decoder, min_DCT_scaled_size) == 0x1a8);

void h2v1_downsample_neon(uint32_t width, int max_rows, int rows,
                          uint32_t blocks, Rows input, Rows output);
void h2v2_downsample_neon(uint32_t width, int max_rows, int rows,
                          uint32_t blocks, Rows input, Rows output);

void jsimd_h2v1_downsample(Encoder *, Component *, Rows, Rows) asm(
    "_Z39nndetailImageJpeg_jsimd_h2v1_downsample"
    "P20jpeg_compress_structP19jpeg_component_infoPPhS4_");
void jsimd_h2v2_downsample(Encoder *, Component *, Rows, Rows) asm(
    "_Z39nndetailImageJpeg_jsimd_h2v2_downsample"
    "P20jpeg_compress_structP19jpeg_component_infoPPhS4_");

}

extern "C" void nndetailImageJpeg_jinit_downsampler(jpeg_sampling::Encoder *);
extern "C" void nndetailImageJpeg_jinit_upsampler(jpeg_sampling::Decoder *);
