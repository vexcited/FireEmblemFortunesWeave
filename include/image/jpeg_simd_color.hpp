/*
  Modified libjpeg-turbo 1.5.0 ARM64 SIMD source.
  Arithmetic is expressed in C++ for the recovered SDK ABI.
  Original license: https://github.com/libjpeg-turbo/libjpeg-turbo/blob/1.5.0/simd/jsimd_arm64_neon.S
*/

// Original license text.
// /*
//  * ARMv8 NEON optimizations for libjpeg-turbo
//  *
//  * Copyright (C) 2009-2011, Nokia Corporation and/or its subsidiary(-ies).
//  * All Rights Reserved.
//  * Author: Siarhei Siamashka <siarhei.siamashka@nokia.com>
//  * Copyright (C) 2013-2014, Linaro Limited.  All Rights Reserved.
//  * Author: Ragesh Radhakrishnan <ragesh.r@linaro.org>
//  * Copyright (C) 2014-2016, D. R. Commander.  All Rights Reserved.
//  * Copyright (C) 2015-2016, Matthieu Darbois.  All Rights Reserved.
//  * Copyright (C) 2016, Siarhei Siamashka.  All Rights Reserved.
//  *
//  * This software is provided 'as-is', without any express or implied
//  * warranty.  In no event will the authors be held liable for any damages
//  * arising from the use of this software.
//  *
//  * Permission is granted to anyone to use this software for any purpose,
//  * including commercial applications, and to alter it and redistribute it
//  * freely, subject to the following restrictions:
//  *
//  * 1. The origin of this software must not be misrepresented; you must not
//  *    claim that you wrote the original software. If you use this software
//  *    in a product, an acknowledgment in the product documentation would be
//  *    appreciated but is not required.
//  * 2. Altered source versions must be plainly marked as such, and must not be
//  *    misrepresented as being the original software.
//  * 3. This notice may not be removed or altered from any source distribution.
//  */
//
// /*
//  * jsimd_arm64.c
//  *
//  * Copyright 2009 Pierre Ossman <ossman@cendio.se> for Cendio AB
//  * Copyright (C) 2009-2011, 2013-2014, 2016, D. R. Commander.
//  * Copyright (C) 2015-2016, Matthieu Darbois.
//  *
//  * Based on the x86 SIMD extension for IJG JPEG library,
//  * Copyright (C) 1999-2006, MIYASAKA Masaru.
//  * For conditions of distribution and use, see copyright notice in jsimdext.inc
//  *
//  * This file contains the interface between the "normal" portions
//  * of the library and the SIMD implementations when running on a
//  * 64-bit ARM architecture.
//  */
//
// ;
// ; jsimdext.inc - common declarations
// ;
// ; Copyright 2009 Pierre Ossman <ossman@cendio.se> for Cendio AB
// ; Copyright (C) 2010, D. R. Commander.
// ;
// ; Based on the x86 SIMD extension for IJG JPEG library - version 1.02
// ;
// ; Copyright (C) 1999-2006, MIYASAKA Masaru.
// ;
// ; This software is provided 'as-is', without any express or implied
// ; warranty.  In no event will the authors be held liable for any damages
// ; arising from the use of this software.
// ;
// ; Permission is granted to anyone to use this software for any purpose,
// ; including commercial applications, and to alter it and redistribute it
// ; freely, subject to the following restrictions:
// ;
// ; 1. The origin of this software must not be misrepresented; you must not
// ;    claim that you wrote the original software. If you use this software
// ;    in a product, an acknowledgment in the product documentation would be
// ;    appreciated but is not required.
// ; 2. Altered source versions must be plainly marked as such, and must not be
// ;    misrepresented as being the original software.
// ; 3. This notice may not be removed or altered from any source distribution.
// ;
// End of original license text.

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
