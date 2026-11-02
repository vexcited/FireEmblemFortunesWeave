#include "image/png_write_filter.hpp"

using png_byte = uint8_t;
using png_uint_32 = uint32_t;
using png_bytep = uint8_t*;
using png_structrp = fw::image::PngWriteFilterState*;
using png_row_infop = fw::image::PngRowInfo*;

extern "C" {
void nndetailImagePng_png_compress_IDAT(png_structrp, const uint8_t*, size_t,
                                        int);
void nndetailImagePng_png_write_finish_row(png_structrp);
void nndetailImagePng_png_write_flush(png_structrp);
}

static void png_write_filtered_row(png_structrp png_ptr, png_bytep filtered_row,
                                   size_t row_bytes);
static size_t png_setup_sub_row(png_structrp png_ptr, png_uint_32 bpp,
                                size_t row_bytes, size_t lmins) {
  png_bytep rp, dp, lp;
  size_t i;
  size_t sum = 0;
  unsigned int v;
  png_ptr->try_row[0] = 1;
  for (i = 0, rp = png_ptr->row_buf + 1, dp = png_ptr->try_row + 1; i < bpp;
       i++, rp++, dp++) {
    v = *dp = *rp;
    sum += (v < 128) ? v : 256 - v;
  }
  for (lp = png_ptr->row_buf + 1; i < row_bytes; i++, rp++, lp++, dp++) {
    v = *dp = (png_byte)(((int)*rp - (int)*lp) & 0xff);
    sum += (v < 128) ? v : 256 - v;
    if (sum > lmins) {
      break;
    }
  }
  return (sum);
}

static void png_setup_sub_row_only(png_structrp png_ptr, png_uint_32 bpp,
                                   size_t row_bytes) {
  png_bytep rp, dp, lp;
  size_t i;
  png_ptr->try_row[0] = 1;
  for (i = 0, rp = png_ptr->row_buf + 1, dp = png_ptr->try_row + 1; i < bpp;
       i++, rp++, dp++) {
    *dp = *rp;
  }
  for (lp = png_ptr->row_buf + 1; i < row_bytes; i++, rp++, lp++, dp++) {
    *dp = (png_byte)(((int)*rp - (int)*lp) & 0xff);
  }
}

static size_t png_setup_up_row(png_structrp png_ptr, size_t row_bytes,
                               size_t lmins) {
  png_bytep rp, dp, pp;
  size_t i;
  size_t sum = 0;
  unsigned int v;
  png_ptr->try_row[0] = 2;
  for (i = 0, rp = png_ptr->row_buf + 1, dp = png_ptr->try_row + 1,
      pp = png_ptr->prev_row + 1;
       i < row_bytes; i++, rp++, pp++, dp++) {
    v = *dp = (png_byte)(((int)*rp - (int)*pp) & 0xff);
    sum += (v < 128) ? v : 256 - v;
    if (sum > lmins) {
      break;
    }
  }
  return (sum);
}

static void png_setup_up_row_only(png_structrp png_ptr, size_t row_bytes) {
  png_bytep rp, dp, pp;
  size_t i;
  png_ptr->try_row[0] = 2;
  for (i = 0, rp = png_ptr->row_buf + 1, dp = png_ptr->try_row + 1,
      pp = png_ptr->prev_row + 1;
       i < row_bytes; i++, rp++, pp++, dp++) {
    *dp = (png_byte)(((int)*rp - (int)*pp) & 0xff);
  }
}

static size_t png_setup_avg_row(png_structrp png_ptr, png_uint_32 bpp,
                                size_t row_bytes, size_t lmins) {
  png_bytep rp, dp, pp, lp;
  png_uint_32 i;
  size_t sum = 0;
  unsigned int v;
  png_ptr->try_row[0] = 3;
  for (i = 0, rp = png_ptr->row_buf + 1, dp = png_ptr->try_row + 1,
      pp = png_ptr->prev_row + 1;
       i < bpp; i++) {
    v = *dp++ = (png_byte)(((int)*rp++ - ((int)*pp++ / 2)) & 0xff);
    sum += (v < 128) ? v : 256 - v;
  }
  for (lp = png_ptr->row_buf + 1; i < row_bytes; i++) {
    v = *dp++ =
      (png_byte)(((int)*rp++ - (((int)*pp++ + (int)*lp++) / 2)) & 0xff);
    sum += (v < 128) ? v : 256 - v;
    if (sum > lmins) {
      break;
    }
  }
  return (sum);
}

static void png_setup_avg_row_only(png_structrp png_ptr, png_uint_32 bpp,
                                   size_t row_bytes) {
  png_bytep rp, dp, pp, lp;
  png_uint_32 i;
  png_ptr->try_row[0] = 3;
  for (i = 0, rp = png_ptr->row_buf + 1, dp = png_ptr->try_row + 1,
      pp = png_ptr->prev_row + 1;
       i < bpp; i++) {
    *dp++ = (png_byte)(((int)*rp++ - ((int)*pp++ / 2)) & 0xff);
  }
  for (lp = png_ptr->row_buf + 1; i < row_bytes; i++) {
    *dp++ = (png_byte)(((int)*rp++ - (((int)*pp++ + (int)*lp++) / 2)) & 0xff);
  }
}

static size_t png_setup_paeth_row(png_structrp png_ptr, png_uint_32 bpp,
                                  size_t row_bytes, size_t lmins) {
  png_bytep rp, dp, pp, cp, lp;
  size_t i;
  size_t sum = 0;
  unsigned int v;
  png_ptr->try_row[0] = 4;
  for (i = 0, rp = png_ptr->row_buf + 1, dp = png_ptr->try_row + 1,
      pp = png_ptr->prev_row + 1;
       i < bpp; i++) {
    v = *dp++ = (png_byte)(((int)*rp++ - (int)*pp++) & 0xff);
    sum += (v < 128) ? v : 256 - v;
  }
  for (lp = png_ptr->row_buf + 1, cp = png_ptr->prev_row + 1; i < row_bytes;
       i++) {
    int a, b, c, pa, pb, pc, p;
    b = *pp++;
    c = *cp++;
    a = *lp++;
    p = b - c;
    pc = a - c;
    pa = p < 0 ? -p : p;
    pb = pc < 0 ? -pc : pc;
    pc = (p + pc) < 0 ? -(p + pc) : p + pc;
    p = (pa <= pb && pa <= pc) ? a : (pb <= pc) ? b : c;
    v = *dp++ = (png_byte)(((int)*rp++ - p) & 0xff);
    sum += (v < 128) ? v : 256 - v;
    if (sum > lmins) {
      break;
    }
  }
  return (sum);
}

static void png_setup_paeth_row_only(png_structrp png_ptr, png_uint_32 bpp,
                                     size_t row_bytes) {
  png_bytep rp, dp, pp, cp, lp;
  size_t i;
  png_ptr->try_row[0] = 4;
  for (i = 0, rp = png_ptr->row_buf + 1, dp = png_ptr->try_row + 1,
      pp = png_ptr->prev_row + 1;
       i < bpp; i++) {
    *dp++ = (png_byte)(((int)*rp++ - (int)*pp++) & 0xff);
  }
  for (lp = png_ptr->row_buf + 1, cp = png_ptr->prev_row + 1; i < row_bytes;
       i++) {
    int a, b, c, pa, pb, pc, p;
    b = *pp++;
    c = *cp++;
    a = *lp++;
    p = b - c;
    pc = a - c;
    pa = p < 0 ? -p : p;
    pb = pc < 0 ? -pc : pc;
    pc = (p + pc) < 0 ? -(p + pc) : p + pc;
    p = (pa <= pb && pa <= pc) ? a : (pb <= pc) ? b : c;
    *dp++ = (png_byte)(((int)*rp++ - p) & 0xff);
  }
}

void nndetailImagePng_png_write_find_filter(png_structrp png_ptr,
                                            png_row_infop row_info) {
  unsigned int filter_to_do = png_ptr->do_filter;
  png_bytep row_buf;
  png_bytep best_row;
  png_uint_32 bpp;
  size_t mins;
  size_t row_bytes = row_info->row_bytes;

  bpp = (row_info->pixel_depth + 7) >> 3;
  row_buf = png_ptr->row_buf;
  mins = SIZE_MAX - 256;
  best_row = png_ptr->row_buf;
  if (SIZE_MAX / 128 <= row_bytes) {
    filter_to_do &= 0U - filter_to_do;
  }
  else if ((filter_to_do & 0x08) != 0 && filter_to_do != 0x08) {
    png_bytep rp;
    size_t sum = 0;
    size_t i;
    unsigned int v;
    {
      for (i = 0, rp = row_buf + 1; i < row_bytes; i++, rp++) {
        v = *rp;
        sum += (v < 128) ? v : 256 - v;
      }
    }
    mins = sum;
  }
  if (filter_to_do == 0x10) {
    png_setup_sub_row_only(png_ptr, bpp, row_bytes);
    best_row = png_ptr->try_row;
  }
  else if ((filter_to_do & 0x10) != 0) {
    size_t sum;
    size_t lmins = mins;
    sum = png_setup_sub_row(png_ptr, bpp, row_bytes, lmins);
    if (sum < mins) {
      mins = sum;
      best_row = png_ptr->try_row;
      if (png_ptr->tst_row != NULL) {
        png_ptr->try_row = png_ptr->tst_row;
        png_ptr->tst_row = best_row;
      }
    }
  }
  if (filter_to_do == 0x20) {
    png_setup_up_row_only(png_ptr, row_bytes);
    best_row = png_ptr->try_row;
  }
  else if ((filter_to_do & 0x20) != 0) {
    size_t sum;
    size_t lmins = mins;
    sum = png_setup_up_row(png_ptr, row_bytes, lmins);
    if (sum < mins) {
      mins = sum;
      best_row = png_ptr->try_row;
      if (png_ptr->tst_row != NULL) {
        png_ptr->try_row = png_ptr->tst_row;
        png_ptr->tst_row = best_row;
      }
    }
  }
  if (filter_to_do == 0x40) {
    png_setup_avg_row_only(png_ptr, bpp, row_bytes);
    best_row = png_ptr->try_row;
  }
  else if ((filter_to_do & 0x40) != 0) {
    size_t sum;
    size_t lmins = mins;
    sum = png_setup_avg_row(png_ptr, bpp, row_bytes, lmins);
    if (sum < mins) {
      mins = sum;
      best_row = png_ptr->try_row;
      if (png_ptr->tst_row != NULL) {
        png_ptr->try_row = png_ptr->tst_row;
        png_ptr->tst_row = best_row;
      }
    }
  }
  if (filter_to_do == 0x80) {
    png_setup_paeth_row_only(png_ptr, bpp, row_bytes);
    best_row = png_ptr->try_row;
  }
  else if ((filter_to_do & 0x80) != 0) {
    size_t sum;
    size_t lmins = mins;
    sum = png_setup_paeth_row(png_ptr, bpp, row_bytes, lmins);
    if (sum < mins) {
      best_row = png_ptr->try_row;
      if (png_ptr->tst_row != NULL) {
        png_ptr->try_row = png_ptr->tst_row;
        png_ptr->tst_row = best_row;
      }
    }
  }
  png_write_filtered_row(png_ptr, best_row, row_info->row_bytes + 1);
}

static void png_write_filtered_row(png_structrp png_ptr, png_bytep filtered_row,
                                   size_t full_row_length) {

  nndetailImagePng_png_compress_IDAT(png_ptr, filtered_row, full_row_length, 0);
  if (png_ptr->prev_row != NULL) {
    png_bytep tptr;
    tptr = png_ptr->prev_row;
    png_ptr->prev_row = png_ptr->row_buf;
    png_ptr->row_buf = tptr;
  }
  nndetailImagePng_png_write_finish_row(png_ptr);
  png_ptr->flush_rows++;
  if (png_ptr->flush_dist > 0 && png_ptr->flush_rows >= png_ptr->flush_dist) {
    nndetailImagePng_png_write_flush(png_ptr);
  }
}

/*
 * Adapted from libpng 1.6.37 pngwutil.c.
 * Copyright (c) 2018 Cosmin Truta
 * Copyright (c) 1998-2002,2004,2006-2018 Glenn Randers-Pehrson
 * Copyright (c) 1996-1997 Andreas Dilger
 * Copyright (c) 1995-1996 Guy Eric Schalnat, Group 42, Inc.
 * Distributed under the license in licenses/libpng/LICENSE.
 */
