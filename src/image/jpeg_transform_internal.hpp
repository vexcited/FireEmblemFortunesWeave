#pragma once

#include "image/jpeg_transform.hpp"

using JLONG = int64_t;
using DCTELEM = int16_t;
using JSAMPLE = uint8_t;
using JCOEF = int16_t;
using JCOEFPTR = int16_t *;
using JSAMPROW = uint8_t *;
using JSAMPARRAY = uint8_t **;
using JDIMENSION = uint32_t;
using j_decompress_ptr = jpeg_decompress_struct *;
using ISLOW_MULT_TYPE = int16_t;
using IFAST_MULT_TYPE = int16_t;
using FLOAT_MULT_TYPE = float;
using FAST_FLOAT = float;

constexpr int DCTSIZE = 8;
constexpr int DCTSIZE2 = 64;
constexpr int MAXJSAMPLE = 255;
constexpr int CENTERJSAMPLE = 128;
constexpr int RANGE_MASK = 1023;
constexpr int IFAST_SCALE_BITS = 2;

#define SHIFT_TEMPS
#define RIGHT_SHIFT(value, bits) ((value) >> (bits))
#define LEFT_SHIFT(value, bits)                                                \
  static_cast<int64_t>(static_cast<uint64_t>(value) << (bits))
#define ONE static_cast<int64_t>(1)
#define CONST_SCALE (ONE << CONST_BITS)
#define FIX(value) static_cast<int64_t>((value) * CONST_SCALE + 0.5)
#define DESCALE(value, bits) RIGHT_SHIFT((value) + (ONE << ((bits) - 1)), bits)
#define MULTIPLY16C16(value, constant) ((value) * (constant))
#define MULTIPLY16V16(first, second) ((first) * (second))
#define IDCT_range_limit(decoder)                                              \
  ((decoder)->sample_range_limit + CENTERJSAMPLE)
#define GETJSAMPLE(value) static_cast<int>(value)
