#pragma once

#include "image/jpeg_color.hpp"

namespace jpeg_simd_color {

using Rows = uint8_t **;
using Planes = Rows *;
using Decoder = jpeg_color::Decoder;

struct Encoder {
  uint8_t unknown_000[0x38];
  uint32_t image_width;
  uint8_t unknown_03c[8];
  int32_t in_color_space;
};

static_assert(offsetof(Encoder, image_width) == 0x38);
static_assert(offsetof(Encoder, in_color_space) == 0x44);

extern uint32_t simd_features;

void rgb_ycc_convert(Encoder *, Rows, Planes, uint32_t,
                     int) asm("_Z39nndetailImageJpeg_jsimd_rgb_ycc_convert"
                              "P20jpeg_compress_structPPhPS2_ji");
void ycc_rgb_convert(Decoder *, Planes, uint32_t, Rows,
                     int) asm("_Z39nndetailImageJpeg_jsimd_ycc_rgb_convert"
                              "P22jpeg_decompress_structPPPhjS2_i");
void ycc_rgb565_convert(Decoder *, Planes, uint32_t, Rows, int) asm(
    "_Z42nndetailImageJpeg_jsimd_ycc_rgb565_convert"
    "P22jpeg_decompress_structPPPhjS2_i");

void jsimd_extrgb_ycc_convert_neon(uint32_t, Rows, Planes, uint32_t, int);
void jsimd_extrgb_ycc_convert_neon_slowld3(uint32_t, Rows, Planes, uint32_t,
                                           int);
void jsimd_extbgr_ycc_convert_neon(uint32_t, Rows, Planes, uint32_t, int);
void jsimd_extbgr_ycc_convert_neon_slowld3(uint32_t, Rows, Planes, uint32_t,
                                           int);
void jsimd_extrgbx_ycc_convert_neon(uint32_t, Rows, Planes, uint32_t, int);
void jsimd_extbgrx_ycc_convert_neon(uint32_t, Rows, Planes, uint32_t, int);
void jsimd_extxbgr_ycc_convert_neon(uint32_t, Rows, Planes, uint32_t, int);
void jsimd_extxrgb_ycc_convert_neon(uint32_t, Rows, Planes, uint32_t, int);
void jsimd_ycc_extrgb_convert_neon(uint32_t, Planes, uint32_t, Rows, int);
void jsimd_ycc_extrgb_convert_neon_slowst3(uint32_t, Planes, uint32_t, Rows,
                                           int);
void jsimd_ycc_extbgr_convert_neon(uint32_t, Planes, uint32_t, Rows, int);
void jsimd_ycc_extbgr_convert_neon_slowst3(uint32_t, Planes, uint32_t, Rows,
                                           int);
void jsimd_ycc_extrgbx_convert_neon(uint32_t, Planes, uint32_t, Rows, int);
void jsimd_ycc_extbgrx_convert_neon(uint32_t, Planes, uint32_t, Rows, int);
void jsimd_ycc_extxbgr_convert_neon(uint32_t, Planes, uint32_t, Rows, int);
void jsimd_ycc_extxrgb_convert_neon(uint32_t, Planes, uint32_t, Rows, int);
void jsimd_ycc_rgb565_convert_neon(uint32_t, Planes, uint32_t, Rows, int);

}
