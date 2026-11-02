#include "image/png_gamma.hpp"

using png_byte = uint8_t;
using png_uint_16 = uint16_t;
using png_uint_32 = uint32_t;
using png_int_32 = int32_t;
using png_fixed_point = int32_t;
using png_bytep = uint8_t*;
using png_bytepp = uint8_t**;
using png_uint_16p = uint16_t*;
using png_uint_16pp = uint16_t**;
using png_structrp = fw::image::PngReadSetupState*;

extern "C" {
double pow(double, double);
double floor(double);
void* nndetailImagePng_png_malloc(png_structrp, size_t);
void* nndetailImagePng_png_calloc(png_structrp, size_t);
void nndetailImagePng_png_free(png_structrp, void*);
void nndetailImagePng_png_warning(png_structrp, const char*);
int nndetailImagePng_png_gamma_significant(int32_t);
uint8_t nndetailImagePng_png_gamma_8bit_correct(unsigned, int32_t);
uint16_t nndetailImagePng_png_gamma_16bit_correct(unsigned, int32_t);
int32_t nndetailImagePng_png_reciprocal(int32_t);
int32_t nndetailImagePng_png_reciprocal2(int32_t, int32_t);
}

static int32_t png_product2(int32_t a, int32_t b) {
  double value = a * .00001 * b + .5;
  double product = floor(value);
  int32_t rounded;

  // The original converts before its overflow check, setting FPSR on overflow.
  asm volatile("fcvtms %w0, %d1" : "=r"(rounded) : "w"(value));

  if (product <= 2147483647. && product >= -2147483648.) {
    return rounded;
  }
  return 0;
}

static void png_build_16bit_table(png_structrp png_ptr, png_uint_16pp* ptable,
                                  unsigned int shift,
                                  png_fixed_point gamma_val) {
  unsigned int num = 1U << (8U - shift);

  unsigned int max = (1U << (16U - shift)) - 1U;
  unsigned int max_by_2 = 1U << (15U - shift);
  unsigned int i;
  png_uint_16pp table = *ptable = (png_uint_16pp)nndetailImagePng_png_calloc(
    png_ptr, num * (sizeof(png_uint_16p)));
  for (i = 0; i < num; i++) {
    png_uint_16p sub_table = table[i] =
      (png_uint_16p)nndetailImagePng_png_malloc(png_ptr,
                                                256 * (sizeof(png_uint_16)));
    if (nndetailImagePng_png_gamma_significant(gamma_val) != 0) {
      double fmax = 1.0 / (((png_int_32)1 << (16U - shift)) - 1);
      unsigned int j;
      for (j = 0; j < 256; j++) {
        png_uint_32 ig = (j << (8 - shift)) + i;
        double d = floor(65535. * pow(ig * fmax, gamma_val * .00001) + .5);
        sub_table[j] = (png_uint_16)d;
      }
    }
    else {
      unsigned int j;
      for (j = 0; j < 256; j++) {
        png_uint_32 ig = (j << (8 - shift)) + i;
        if (shift != 0) {
          ig = (ig * 65535U + max_by_2) / max;
        }
        sub_table[j] = (png_uint_16)ig;
      }
    }
  }
}

static void png_build_16to8_table(png_structrp png_ptr, png_uint_16pp* ptable,
                                  unsigned int shift,
                                  png_fixed_point gamma_val) {
  unsigned int num = 1U << (8U - shift);
  unsigned int max = (1U << (16U - shift)) - 1U;
  unsigned int i;
  png_uint_32 last;
  png_uint_16pp table = *ptable = (png_uint_16pp)nndetailImagePng_png_calloc(
    png_ptr, num * (sizeof(png_uint_16p)));
  for (i = 0; i < num; i++) {
    table[i] = (png_uint_16p)nndetailImagePng_png_malloc(
      png_ptr, 256 * (sizeof(png_uint_16)));
  }
  last = 0;
  for (i = 0; i < 255; ++i) {
    png_uint_16 out = (png_uint_16)(i * 257U);
    png_uint_32 bound =
      nndetailImagePng_png_gamma_16bit_correct(out + 128U, gamma_val);
    bound = (bound * max + 32768U) / 65535U + 1U;
    while (last < bound) {
      table[last & (0xffU >> shift)][last >> (8U - shift)] = out;
      last++;
    }
  }
  while (last < (num << 8)) {
    table[last & (0xff >> shift)][last >> (8U - shift)] = 65535U;
    last++;
  }
}

static void png_build_8bit_table(png_structrp png_ptr, png_bytepp ptable,
                                 png_fixed_point gamma_val) {
  unsigned int i;
  png_bytep table = *ptable =
    (png_bytep)nndetailImagePng_png_malloc(png_ptr, 256);
  if (nndetailImagePng_png_gamma_significant(gamma_val) != 0) {
    for (i = 0; i < 256; i++) {
      table[i] = nndetailImagePng_png_gamma_8bit_correct(i, gamma_val);
    }
  }
  else {
    for (i = 0; i < 256; ++i) {
      table[i] = (png_byte)(i & 0xff);
    }
  }
}

void nndetailImagePng_png_destroy_gamma_table(png_structrp png_ptr) {
  nndetailImagePng_png_free(png_ptr, png_ptr->gamma_table);
  png_ptr->gamma_table = NULL;
  if (png_ptr->gamma_16_table != NULL) {
    int i;
    int istop = (1 << (8 - png_ptr->gamma_shift));
    for (i = 0; i < istop; i++) {
      nndetailImagePng_png_free(png_ptr, png_ptr->gamma_16_table[i]);
    }
    nndetailImagePng_png_free(png_ptr, png_ptr->gamma_16_table);
    png_ptr->gamma_16_table = NULL;
  }
  nndetailImagePng_png_free(png_ptr, png_ptr->gamma_from_1);
  png_ptr->gamma_from_1 = NULL;
  nndetailImagePng_png_free(png_ptr, png_ptr->gamma_to_1);
  png_ptr->gamma_to_1 = NULL;
  if (png_ptr->gamma_16_from_1 != NULL) {
    int i;
    int istop = (1 << (8 - png_ptr->gamma_shift));
    for (i = 0; i < istop; i++) {
      nndetailImagePng_png_free(png_ptr, png_ptr->gamma_16_from_1[i]);
    }
    nndetailImagePng_png_free(png_ptr, png_ptr->gamma_16_from_1);
    png_ptr->gamma_16_from_1 = NULL;
  }
  if (png_ptr->gamma_16_to_1 != NULL) {
    int i;
    int istop = (1 << (8 - png_ptr->gamma_shift));
    for (i = 0; i < istop; i++) {
      nndetailImagePng_png_free(png_ptr, png_ptr->gamma_16_to_1[i]);
    }
    nndetailImagePng_png_free(png_ptr, png_ptr->gamma_16_to_1);
    png_ptr->gamma_16_to_1 = NULL;
  }
}

void nndetailImagePng_png_build_gamma_table(png_structrp png_ptr,
                                            int bit_depth) {

  if (png_ptr->gamma_table != NULL || png_ptr->gamma_16_table != NULL) {
    nndetailImagePng_png_warning(png_ptr, "gamma table being rebuilt");
    nndetailImagePng_png_destroy_gamma_table(png_ptr);
  }
  if (bit_depth <= 8) {
    png_build_8bit_table(png_ptr, &png_ptr->gamma_table,
                         png_ptr->screen_gamma > 0
                           ? nndetailImagePng_png_reciprocal2(
                               png_ptr->colorspace.gamma, png_ptr->screen_gamma)
                           : 100000);
    if ((png_ptr->transformations & (0x0080U | 0x600000U)) != 0) {
      png_build_8bit_table(
        png_ptr, &png_ptr->gamma_to_1,
        nndetailImagePng_png_reciprocal(png_ptr->colorspace.gamma));
      png_build_8bit_table(
        png_ptr, &png_ptr->gamma_from_1,
        png_ptr->screen_gamma > 0
          ? nndetailImagePng_png_reciprocal(png_ptr->screen_gamma)
          : png_ptr->colorspace.gamma);
    }
  }
  else {
    png_byte shift, sig_bit;
    if ((png_ptr->color_type & 2) != 0) {
      sig_bit = png_ptr->sig_bit.red;
      if (png_ptr->sig_bit.green > sig_bit) {
        sig_bit = png_ptr->sig_bit.green;
      }
      if (png_ptr->sig_bit.blue > sig_bit) {
        sig_bit = png_ptr->sig_bit.blue;
      }
    }
    else {
      sig_bit = png_ptr->sig_bit.gray;
    }
    if (sig_bit > 0 && sig_bit < 16U) {
      shift = (png_byte)((16U - sig_bit) & 0xff);
    }
    else {
      shift = 0;
    }
    if ((png_ptr->transformations & (0x0400U | 0x4000000U)) != 0) {
      if (shift < (16U - 11)) {
        shift = (16U - 11);
      }
    }
    if (shift > 8U) {
      shift = 8U;
    }
    png_ptr->gamma_shift = shift;
    if ((png_ptr->transformations & (0x0400U | 0x4000000U)) != 0) {
      png_build_16to8_table(
        png_ptr, &png_ptr->gamma_16_table, shift,
        png_ptr->screen_gamma > 0
          ? png_product2(png_ptr->colorspace.gamma, png_ptr->screen_gamma)
          : 100000);
    }
    else {
      png_build_16bit_table(
        png_ptr, &png_ptr->gamma_16_table, shift,
        png_ptr->screen_gamma > 0
          ? nndetailImagePng_png_reciprocal2(png_ptr->colorspace.gamma,
                                             png_ptr->screen_gamma)
          : 100000);
    }
    if ((png_ptr->transformations & (0x0080U | 0x600000U)) != 0) {
      png_build_16bit_table(
        png_ptr, &png_ptr->gamma_16_to_1, shift,
        nndetailImagePng_png_reciprocal(png_ptr->colorspace.gamma));
      png_build_16bit_table(
        png_ptr, &png_ptr->gamma_16_from_1, shift,
        png_ptr->screen_gamma > 0
          ? nndetailImagePng_png_reciprocal(png_ptr->screen_gamma)
          : png_ptr->colorspace.gamma);
    }
  }
}

/*
 * Adapted from libpng 1.6.37 png.c.
 * Copyright (c) 2018-2019 Cosmin Truta
 * Copyright (c) 1998-2002,2004,2006-2018 Glenn Randers-Pehrson
 * Copyright (c) 1996-1997 Andreas Dilger
 * Copyright (c) 1995-1996 Guy Eric Schalnat, Group 42, Inc.
 * Distributed under the license in licenses/libpng/LICENSE.
 */
