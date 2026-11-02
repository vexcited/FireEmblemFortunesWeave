#include "image/png_quantize.hpp"

using png_byte = uint8_t;
using png_bytep = uint8_t *;
using png_uint_16 = uint16_t;
using png_uint_32 = uint32_t;
using png_alloc_size_t = size_t;
using png_color = fw::image::PngColor;
using png_colorp = png_color *;
using png_const_uint_16p = const uint16_t *;
using png_structrp = fw::image::PngQuantizeState *;

extern "C" {
void *nndetailImagePng_png_malloc(png_structrp, size_t);
void *nndetailImagePng_png_calloc(png_structrp, size_t);
void *nndetailImagePng_png_malloc_warn(png_structrp, size_t);
void nndetailImagePng_png_free(png_structrp, void *);
void nndetailImagePng_png_app_error(png_structrp, const char *);
void *memset(void *, int, size_t);
}

namespace {

constexpr unsigned PNG_QUANTIZE = 0x40;

struct png_dsort {
  png_dsort *next;
  uint8_t left;
  uint8_t right;
};

using png_dsortp = png_dsort *;
using png_dsortpp = png_dsort **;

int abs(int value)
{
  return value < 0 ? -value : value;
}

bool prepare(png_structrp state)
{
  if (!state) {
    return false;
  }
  if (state->flags & 0x40) {
    nndetailImagePng_png_app_error(
        state, "invalid after png_start_read_image or png_read_update_info");
    return false;
  }
  state->flags |= 0x4000;
  return true;
}

} // namespace

void nndetailImagePng_png_set_quantize(png_structrp png_ptr, png_colorp palette,
                                       int num_palette, int maximum_colors,
                                       png_const_uint_16p histogram,
                                       int full_quantize)
{

  if (prepare(png_ptr) == 0) {
    return;
  }
  png_ptr->transformations |= PNG_QUANTIZE;
  if (full_quantize == 0) {
    int i;
    png_ptr->quantize_index = (png_bytep)nndetailImagePng_png_malloc(
        png_ptr,
        (png_alloc_size_t)((png_uint_32)num_palette * (sizeof(png_byte))));
    for (i = 0; i < num_palette; i++) {
      png_ptr->quantize_index[i] = (png_byte)i;
    }
  }
  if (num_palette > maximum_colors) {
    if (histogram != NULL) {
      int i;
      png_ptr->quantize_sort = (png_bytep)nndetailImagePng_png_malloc(
          png_ptr,
          (png_alloc_size_t)((png_uint_32)num_palette * (sizeof(png_byte))));
      for (i = 0; i < num_palette; i++) {
        png_ptr->quantize_sort[i] = (png_byte)i;
      }
      for (i = num_palette - 1; i >= maximum_colors; i--) {
        int done;
        int j;
        done = 1;
        for (j = 0; j < i; j++) {
          if (histogram[png_ptr->quantize_sort[j]] <
              histogram[png_ptr->quantize_sort[j + 1]]) {
            png_byte t;
            t = png_ptr->quantize_sort[j];
            png_ptr->quantize_sort[j] = png_ptr->quantize_sort[j + 1];
            png_ptr->quantize_sort[j + 1] = t;
            done = 0;
          }
        }
        if (done != 0) {
          break;
        }
      }
      if (full_quantize != 0) {
        int j = num_palette;
        for (i = 0; i < maximum_colors; i++) {
          if ((int)png_ptr->quantize_sort[i] >= maximum_colors) {
            do {
              j--;
            } while ((int)png_ptr->quantize_sort[j] >= maximum_colors);
            palette[i] = palette[j];
          }
        }
      }
      else {
        int j = num_palette;
        for (i = 0; i < maximum_colors; i++) {
          if ((int)png_ptr->quantize_sort[i] >= maximum_colors) {
            png_color tmp_color;
            do {
              j--;
            } while ((int)png_ptr->quantize_sort[j] >= maximum_colors);
            tmp_color = palette[j];
            palette[j] = palette[i];
            palette[i] = tmp_color;
            png_ptr->quantize_index[j] = (png_byte)i;
            png_ptr->quantize_index[i] = (png_byte)j;
          }
        }
        for (i = 0; i < num_palette; i++) {
          if ((int)png_ptr->quantize_index[i] >= maximum_colors) {
            int min_d, k, min_k, d_index;
            d_index = png_ptr->quantize_index[i];
            min_d =
                (abs((int)((palette[d_index]).red) - (int)((palette[0]).red)) +
                 abs((int)((palette[d_index]).green) -
                     (int)((palette[0]).green)) +
                 abs((int)((palette[d_index]).blue) -
                     (int)((palette[0]).blue)));
            for (k = 1, min_k = 0; k < maximum_colors; k++) {
              int d;
              d = (abs((int)((palette[d_index]).red) -
                       (int)((palette[k]).red)) +
                   abs((int)((palette[d_index]).green) -
                       (int)((palette[k]).green)) +
                   abs((int)((palette[d_index]).blue) -
                       (int)((palette[k]).blue)));
              if (d < min_d) {
                min_d = d;
                min_k = k;
              }
            }
            png_ptr->quantize_index[i] = (png_byte)min_k;
          }
        }
      }
      nndetailImagePng_png_free(png_ptr, png_ptr->quantize_sort);
      png_ptr->quantize_sort = NULL;
    }
    else {
      int i;
      int max_d;
      int num_new_palette;
      png_dsortp t;
      png_dsortpp hash;
      t = NULL;
      png_ptr->index_to_palette = (png_bytep)nndetailImagePng_png_malloc(
          png_ptr,
          (png_alloc_size_t)((png_uint_32)num_palette * (sizeof(png_byte))));
      png_ptr->palette_to_index = (png_bytep)nndetailImagePng_png_malloc(
          png_ptr,
          (png_alloc_size_t)((png_uint_32)num_palette * (sizeof(png_byte))));
      for (i = 0; i < num_palette; i++) {
        png_ptr->index_to_palette[i] = (png_byte)i;
        png_ptr->palette_to_index[i] = (png_byte)i;
      }
      hash = (png_dsortpp)nndetailImagePng_png_calloc(
          png_ptr, (png_alloc_size_t)(769 * (sizeof(png_dsortp))));
      num_new_palette = num_palette;
      max_d = 96;
      while (num_new_palette > maximum_colors) {
        for (i = 0; i < num_new_palette - 1; i++) {
          int j;
          for (j = i + 1; j < num_new_palette; j++) {
            int d;
            d = (abs((int)((palette[i]).red) - (int)((palette[j]).red)) +
                 abs((int)((palette[i]).green) - (int)((palette[j]).green)) +
                 abs((int)((palette[i]).blue) - (int)((palette[j]).blue)));
            if (d <= max_d) {
              t = (png_dsortp)nndetailImagePng_png_malloc_warn(
                  png_ptr, (png_alloc_size_t)(sizeof(png_dsort)));
              if (t == NULL) {
                break;
              }
              t->next = hash[d];
              t->left = (png_byte)i;
              t->right = (png_byte)j;
              hash[d] = t;
            }
          }
          if (t == NULL) {
            break;
          }
        }
        if (t != NULL) {
          for (i = 0; i <= max_d; i++) {
            if (hash[i] != NULL) {
              png_dsortp p;
              for (p = hash[i]; p; p = p->next) {
                if ((int)png_ptr->index_to_palette[p->left] < num_new_palette &&
                    (int)png_ptr->index_to_palette[p->right] <
                        num_new_palette) {
                  int j, next_j;
                  if (num_new_palette & 0x01) {
                    j = p->left;
                    next_j = p->right;
                  }
                  else {
                    j = p->right;
                    next_j = p->left;
                  }
                  num_new_palette--;
                  palette[png_ptr->index_to_palette[j]] =
                      palette[num_new_palette];
                  if (full_quantize == 0) {
                    int k;
                    for (k = 0; k < num_palette; k++) {
                      if (png_ptr->quantize_index[k] ==
                          png_ptr->index_to_palette[j]) {
                        png_ptr->quantize_index[k] =
                            png_ptr->index_to_palette[next_j];
                      }
                      if ((int)png_ptr->quantize_index[k] == num_new_palette) {
                        png_ptr->quantize_index[k] =
                            png_ptr->index_to_palette[j];
                      }
                    }
                  }
                  png_ptr->index_to_palette
                      [png_ptr->palette_to_index[num_new_palette]] =
                      png_ptr->index_to_palette[j];
                  png_ptr->palette_to_index[png_ptr->index_to_palette[j]] =
                      png_ptr->palette_to_index[num_new_palette];
                  png_ptr->index_to_palette[j] = (png_byte)num_new_palette;
                  png_ptr->palette_to_index[num_new_palette] = (png_byte)j;
                }
                if (num_new_palette <= maximum_colors) {
                  break;
                }
              }
              if (num_new_palette <= maximum_colors) {
                break;
              }
            }
          }
        }
        for (i = 0; i < 769; i++) {
          if (hash[i] != NULL) {
            png_dsortp p = hash[i];
            while (p) {
              t = p->next;
              nndetailImagePng_png_free(png_ptr, p);
              p = t;
            }
          }
          hash[i] = 0;
        }
        max_d += 96;
      }
      nndetailImagePng_png_free(png_ptr, hash);
      nndetailImagePng_png_free(png_ptr, png_ptr->palette_to_index);
      nndetailImagePng_png_free(png_ptr, png_ptr->index_to_palette);
      png_ptr->palette_to_index = NULL;
      png_ptr->index_to_palette = NULL;
    }
    num_palette = maximum_colors;
  }
  if (png_ptr->palette == NULL) {
    png_ptr->palette = palette;
  }
  png_ptr->num_palette = (png_uint_16)num_palette;
  if (full_quantize != 0) {
    int i;
    png_bytep distance;
    int total_bits = 5 + 5 + 5;
    int num_red = (1 << 5);
    int num_green = (1 << 5);
    int num_blue = (1 << 5);
    size_t num_entries = ((size_t)1 << total_bits);
    png_ptr->palette_lookup = (png_bytep)nndetailImagePng_png_calloc(
        png_ptr, (png_alloc_size_t)(num_entries * (sizeof(png_byte))));
    distance = (png_bytep)nndetailImagePng_png_malloc(
        png_ptr, (png_alloc_size_t)(num_entries * (sizeof(png_byte))));
    memset(distance, 0xff, num_entries * (sizeof(png_byte)));
    for (i = 0; i < num_palette; i++) {
      int ir, ig, ib;
      int r = (palette[i].red >> (8 - 5));
      int g = (palette[i].green >> (8 - 5));
      int b = (palette[i].blue >> (8 - 5));
      for (ir = 0; ir < num_red; ir++) {
        int dr = ((ir > r) ? ir - r : r - ir);
        int index_r = (ir << (5 + 5));
        for (ig = 0; ig < num_green; ig++) {
          int dg = ((ig > g) ? ig - g : g - ig);
          int dt = dr + dg;
          int dm = ((dr > dg) ? dr : dg);
          int index_g = index_r | (ig << 5);
          for (ib = 0; ib < num_blue; ib++) {
            int d_index = index_g | ib;
            int db = ((ib > b) ? ib - b : b - ib);
            int dmax = ((dm > db) ? dm : db);
            int d = dmax + dt + db;
            if (d < (int)distance[d_index]) {
              distance[d_index] = (png_byte)d;
              png_ptr->palette_lookup[d_index] = (png_byte)i;
            }
          }
        }
      }
    }
    nndetailImagePng_png_free(png_ptr, distance);
  }
}

/*
 * Adapted from libpng 1.6.37 pngrtran.c.
 * Copyright (c) 2018-2019 Cosmin Truta
 * Copyright (c) 1998-2002,2004,2006-2018 Glenn Randers-Pehrson
 * Copyright (c) 1996-1997 Andreas Dilger
 * Copyright (c) 1995-1996 Guy Eric Schalnat, Group 42, Inc.
 * Distributed under the license in licenses/libpng/LICENSE.
 */
