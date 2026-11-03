/*
  Adapted from libpng 1.6.37 pngrtran.c.
  Copyright (c) 2018-2019 Cosmin Truta
  Copyright (c) 1998-2002,2004,2006-2018 Glenn Randers-Pehrson
  Copyright (c) 1996-1997 Andreas Dilger
  Copyright (c) 1995-1996 Guy Eric Schalnat, Group 42, Inc.
  Original license: https://github.com/pnggroup/libpng/blob/v1.6.37/LICENSE
  Full license text: include/image/png_row.hpp.
*/

#include "image/png_read_setup.hpp"

using png_byte = uint8_t;
using png_uint_16 = uint16_t;
using png_uint_32 = uint32_t;
using png_fixed_point = int32_t;
using png_color = fw::image::PngColor;
using png_colorp = png_color *;
using png_structrp = fw::image::PngReadSetupState *;

extern "C" {
int nndetailImagePng_png_muldiv(int32_t *, int32_t, int32_t, int32_t);
int nndetailImagePng_png_gamma_significant(int32_t);
int32_t nndetailImagePng_png_reciprocal(int32_t);
int32_t nndetailImagePng_png_reciprocal2(int32_t, int32_t);
void nndetailImagePng_png_colorspace_set_rgb_coefficients(png_structrp);
void nndetailImagePng_png_build_gamma_table(png_structrp, int);
void nndetailImagePng_png_warning(png_structrp, const char *);
[[noreturn]] void nndetailImagePng_png_error(png_structrp, const char *);
uint8_t nndetailImagePng_png_gamma_8bit_correct(unsigned, int32_t);
uint16_t nndetailImagePng_png_gamma_correct(png_structrp, unsigned, int32_t);
}

constexpr unsigned PNG_BACKGROUND_IS_GRAY = 0x800U;
constexpr unsigned PNG_SHIFT = 0x0008U;
constexpr unsigned PNG_COMPOSE = 0x0080U;
constexpr unsigned PNG_BACKGROUND_EXPAND = 0x0100U;
constexpr unsigned PNG_EXPAND_16 = 0x0200U;
constexpr unsigned PNG_16_TO_8 = 0x0400U;
constexpr unsigned PNG_EXPAND = 0x1000U;
constexpr unsigned PNG_GAMMA = 0x2000U;
constexpr unsigned PNG_GRAY_TO_RGB = 0x4000U;
constexpr unsigned PNG_STRIP_ALPHA = 0x40000U;
constexpr unsigned PNG_INVERT_ALPHA = 0x80000U;
constexpr unsigned PNG_RGB_TO_GRAY = 0x600000U;
constexpr unsigned PNG_ENCODE_ALPHA = 0x800000U;
constexpr unsigned PNG_EXPAND_tRNS = 0x2000000U;
constexpr unsigned PNG_SCALE_16_TO_8 = 0x4000000U;
constexpr unsigned PNG_FLAG_OPTIMIZE_ALPHA = 0x2000U;
constexpr unsigned PNG_COLORSPACE_HAVE_GAMMA = 0x0001;
constexpr unsigned PNG_FP_1 = 100000;
constexpr unsigned PNG_COLOR_MASK_PALETTE = 1;
constexpr unsigned PNG_COLOR_MASK_COLOR = 2;
constexpr unsigned PNG_COLOR_MASK_ALPHA = 4;
constexpr unsigned PNG_COLOR_TYPE_PALETTE =
    (PNG_COLOR_MASK_COLOR | PNG_COLOR_MASK_PALETTE);
constexpr unsigned PNG_BACKGROUND_GAMMA_SCREEN = 1;
constexpr unsigned PNG_BACKGROUND_GAMMA_FILE = 2;
constexpr unsigned PNG_BACKGROUND_GAMMA_UNIQUE = 3;

static int png_gamma_threshold(png_fixed_point screen_gamma,
                               png_fixed_point file_gamma)
{
  png_fixed_point gtest;
  return !nndetailImagePng_png_muldiv(&gtest, screen_gamma, file_gamma,
                                      PNG_FP_1) ||
         nndetailImagePng_png_gamma_significant(gtest);
}
static void png_init_palette_transformations(png_structrp png_ptr)
{
  int input_has_alpha = 0;
  int input_has_transparency = 0;
  if (png_ptr->num_trans > 0) {
    int i;
    for (i = 0; i < png_ptr->num_trans; ++i) {
      if (png_ptr->trans_alpha[i] == 255) {
        continue;
      }
      else if (png_ptr->trans_alpha[i] == 0) {
        input_has_transparency = 1;
      }
      else {
        input_has_transparency = 1;
        input_has_alpha = 1;
        break;
      }
    }
  }
  if (input_has_alpha == 0) {
    png_ptr->transformations &= ~PNG_ENCODE_ALPHA;
    png_ptr->flags &= ~PNG_FLAG_OPTIMIZE_ALPHA;
    if (input_has_transparency == 0) {
      png_ptr->transformations &= ~(PNG_COMPOSE | PNG_BACKGROUND_EXPAND);
    }
  }
  if ((png_ptr->transformations & PNG_BACKGROUND_EXPAND) != 0 &&
      (png_ptr->transformations & PNG_EXPAND) != 0) {
    {
      png_ptr->background.red = png_ptr->palette[png_ptr->background.index].red;
      png_ptr->background.green =
          png_ptr->palette[png_ptr->background.index].green;
      png_ptr->background.blue =
          png_ptr->palette[png_ptr->background.index].blue;
      if ((png_ptr->transformations & PNG_INVERT_ALPHA) != 0) {
        if ((png_ptr->transformations & PNG_EXPAND_tRNS) == 0) {
          int i, istop = png_ptr->num_trans;
          for (i = 0; i < istop; i++) {
            png_ptr->trans_alpha[i] = (png_byte)(255 - png_ptr->trans_alpha[i]);
          }
        }
      }
    }
  }
}
static void png_init_rgb_transformations(png_structrp png_ptr)
{
  int input_has_alpha = (png_ptr->color_type & PNG_COLOR_MASK_ALPHA) != 0;
  int input_has_transparency = png_ptr->num_trans > 0;
  if (input_has_alpha == 0) {
    png_ptr->transformations &= ~PNG_ENCODE_ALPHA;
    png_ptr->flags &= ~PNG_FLAG_OPTIMIZE_ALPHA;
    if (input_has_transparency == 0) {
      png_ptr->transformations &= ~(PNG_COMPOSE | PNG_BACKGROUND_EXPAND);
    }
  }
  if ((png_ptr->transformations & PNG_BACKGROUND_EXPAND) != 0 &&
      (png_ptr->transformations & PNG_EXPAND) != 0 &&
      (png_ptr->color_type & PNG_COLOR_MASK_COLOR) == 0) {
    {
      int gray = png_ptr->background.gray;
      int trans_gray = png_ptr->trans_color.gray;
      switch (png_ptr->bit_depth) {
      case 1:
        gray *= 0xff;
        trans_gray *= 0xff;
        break;
      case 2:
        gray *= 0x55;
        trans_gray *= 0x55;
        break;
      case 4:
        gray *= 0x11;
        trans_gray *= 0x11;
        break;
      default:
      case 8:
      case 16:
        break;
      }
      png_ptr->background.red = png_ptr->background.green =
          png_ptr->background.blue = (png_uint_16)gray;
      if ((png_ptr->transformations & PNG_EXPAND_tRNS) == 0) {
        png_ptr->trans_color.red = png_ptr->trans_color.green =
            png_ptr->trans_color.blue = (png_uint_16)trans_gray;
      }
    }
  }
}
void nndetailImagePng_png_init_read_transformations(png_structrp png_ptr)
{

  {
    int gamma_correction = 0;
    if (png_ptr->colorspace.gamma != 0) {
      if (png_ptr->screen_gamma != 0) {
        gamma_correction = png_gamma_threshold(png_ptr->colorspace.gamma,
                                               png_ptr->screen_gamma);
      }
      else {
        png_ptr->screen_gamma =
            nndetailImagePng_png_reciprocal(png_ptr->colorspace.gamma);
      }
    }
    else if (png_ptr->screen_gamma != 0) {
      png_ptr->colorspace.gamma =
          nndetailImagePng_png_reciprocal(png_ptr->screen_gamma);
    }
    else {
      png_ptr->screen_gamma = png_ptr->colorspace.gamma = PNG_FP_1;
    }
    png_ptr->colorspace.flags |= PNG_COLORSPACE_HAVE_GAMMA;
    if (gamma_correction != 0) {
      png_ptr->transformations |= PNG_GAMMA;
    }
    else {
      png_ptr->transformations &= ~PNG_GAMMA;
    }
  }
  if ((png_ptr->transformations & PNG_STRIP_ALPHA) != 0 &&
      (png_ptr->transformations & PNG_COMPOSE) == 0) {
    png_ptr->transformations &=
        ~(PNG_BACKGROUND_EXPAND | PNG_ENCODE_ALPHA | PNG_EXPAND_tRNS);
    png_ptr->flags &= ~PNG_FLAG_OPTIMIZE_ALPHA;
    png_ptr->num_trans = 0;
  }
  if (nndetailImagePng_png_gamma_significant(png_ptr->screen_gamma) == 0) {
    png_ptr->transformations &= ~PNG_ENCODE_ALPHA;
    png_ptr->flags &= ~PNG_FLAG_OPTIMIZE_ALPHA;
  }
  if ((png_ptr->transformations & PNG_RGB_TO_GRAY) != 0) {
    nndetailImagePng_png_colorspace_set_rgb_coefficients(png_ptr);
  }
  if ((png_ptr->transformations & PNG_BACKGROUND_EXPAND) != 0) {
    if ((png_ptr->color_type & PNG_COLOR_MASK_COLOR) == 0) {
      png_ptr->mode |= PNG_BACKGROUND_IS_GRAY;
    }
  }
  else if ((png_ptr->transformations & PNG_COMPOSE) != 0) {
    if ((png_ptr->transformations & PNG_GRAY_TO_RGB) != 0) {
      if (png_ptr->background.red == png_ptr->background.green &&
          png_ptr->background.red == png_ptr->background.blue) {
        png_ptr->mode |= PNG_BACKGROUND_IS_GRAY;
        png_ptr->background.gray = png_ptr->background.red;
      }
    }
  }
  if (png_ptr->color_type == PNG_COLOR_TYPE_PALETTE) {
    png_init_palette_transformations(png_ptr);
  }
  else {
    png_init_rgb_transformations(png_ptr);
  }
  if ((png_ptr->transformations & PNG_EXPAND_16) != 0 &&
      (png_ptr->transformations & PNG_COMPOSE) != 0 &&
      (png_ptr->transformations & PNG_BACKGROUND_EXPAND) == 0 &&
      png_ptr->bit_depth != 16) {
    (png_ptr->background.red) = ((
        png_uint_16)((((png_uint_32)(png_ptr->background.red) * 255) + 32895) >>
                     16));
    (png_ptr->background.green) =
        ((png_uint_16)((((png_uint_32)(png_ptr->background.green) * 255) +
                        32895) >>
                       16));
    (png_ptr->background.blue) =
        ((png_uint_16)((((png_uint_32)(png_ptr->background.blue) * 255) +
                        32895) >>
                       16));
    (png_ptr->background.gray) =
        ((png_uint_16)((((png_uint_32)(png_ptr->background.gray) * 255) +
                        32895) >>
                       16));
  }
  if ((png_ptr->transformations & (PNG_16_TO_8 | PNG_SCALE_16_TO_8)) != 0 &&
      (png_ptr->transformations & PNG_COMPOSE) != 0 &&
      (png_ptr->transformations & PNG_BACKGROUND_EXPAND) == 0 &&
      png_ptr->bit_depth == 16) {
    png_ptr->background.red = (png_uint_16)(png_ptr->background.red * 257);
    png_ptr->background.green = (png_uint_16)(png_ptr->background.green * 257);
    png_ptr->background.blue = (png_uint_16)(png_ptr->background.blue * 257);
    png_ptr->background.gray = (png_uint_16)(png_ptr->background.gray * 257);
  }
  png_ptr->background_1 = png_ptr->background;
  if ((png_ptr->transformations & PNG_GAMMA) != 0 ||
      ((png_ptr->transformations & PNG_RGB_TO_GRAY) != 0 &&
       (nndetailImagePng_png_gamma_significant(png_ptr->colorspace.gamma) !=
            0 ||
        nndetailImagePng_png_gamma_significant(png_ptr->screen_gamma) != 0)) ||
      ((png_ptr->transformations & PNG_COMPOSE) != 0 &&
       (nndetailImagePng_png_gamma_significant(png_ptr->colorspace.gamma) !=
            0 ||
        nndetailImagePng_png_gamma_significant(png_ptr->screen_gamma) != 0 ||
        (png_ptr->background_gamma_type == PNG_BACKGROUND_GAMMA_UNIQUE &&
         nndetailImagePng_png_gamma_significant(png_ptr->background_gamma) !=
             0))) ||
      ((png_ptr->transformations & PNG_ENCODE_ALPHA) != 0 &&
       nndetailImagePng_png_gamma_significant(png_ptr->screen_gamma) != 0)) {
    nndetailImagePng_png_build_gamma_table(png_ptr, png_ptr->bit_depth);
    if ((png_ptr->transformations & PNG_COMPOSE) != 0) {
      if ((png_ptr->transformations & PNG_RGB_TO_GRAY) != 0) {
        nndetailImagePng_png_warning(
            png_ptr, "libpng does not support gamma+background+rgb_to_gray");
      }
      if ((png_ptr->color_type == PNG_COLOR_TYPE_PALETTE) != 0) {
        png_color back, back_1;
        png_colorp palette = png_ptr->palette;
        int num_palette = png_ptr->num_palette;
        int i;
        if (png_ptr->background_gamma_type == PNG_BACKGROUND_GAMMA_FILE) {
          back.red = png_ptr->gamma_table[png_ptr->background.red];
          back.green = png_ptr->gamma_table[png_ptr->background.green];
          back.blue = png_ptr->gamma_table[png_ptr->background.blue];
          back_1.red = png_ptr->gamma_to_1[png_ptr->background.red];
          back_1.green = png_ptr->gamma_to_1[png_ptr->background.green];
          back_1.blue = png_ptr->gamma_to_1[png_ptr->background.blue];
        }
        else {
          png_fixed_point g, gs;
          switch (png_ptr->background_gamma_type) {
          case PNG_BACKGROUND_GAMMA_SCREEN:
            g = (png_ptr->screen_gamma);
            gs = PNG_FP_1;
            break;
          case PNG_BACKGROUND_GAMMA_FILE:
            g = nndetailImagePng_png_reciprocal(png_ptr->colorspace.gamma);
            gs = nndetailImagePng_png_reciprocal2(png_ptr->colorspace.gamma,
                                                  png_ptr->screen_gamma);
            break;
          case PNG_BACKGROUND_GAMMA_UNIQUE:
            g = nndetailImagePng_png_reciprocal(png_ptr->background_gamma);
            gs = nndetailImagePng_png_reciprocal2(png_ptr->background_gamma,
                                                  png_ptr->screen_gamma);
            break;
          default:
            g = PNG_FP_1;
            gs = PNG_FP_1;
            break;
          }
          if (nndetailImagePng_png_gamma_significant(gs) != 0) {
            back.red = nndetailImagePng_png_gamma_8bit_correct(
                png_ptr->background.red, gs);
            back.green = nndetailImagePng_png_gamma_8bit_correct(
                png_ptr->background.green, gs);
            back.blue = nndetailImagePng_png_gamma_8bit_correct(
                png_ptr->background.blue, gs);
          }
          else {
            back.red = (png_byte)png_ptr->background.red;
            back.green = (png_byte)png_ptr->background.green;
            back.blue = (png_byte)png_ptr->background.blue;
          }
          if (nndetailImagePng_png_gamma_significant(g) != 0) {
            back_1.red = nndetailImagePng_png_gamma_8bit_correct(
                png_ptr->background.red, g);
            back_1.green = nndetailImagePng_png_gamma_8bit_correct(
                png_ptr->background.green, g);
            back_1.blue = nndetailImagePng_png_gamma_8bit_correct(
                png_ptr->background.blue, g);
          }
          else {
            back_1.red = (png_byte)png_ptr->background.red;
            back_1.green = (png_byte)png_ptr->background.green;
            back_1.blue = (png_byte)png_ptr->background.blue;
          }
        }
        for (i = 0; i < num_palette; i++) {
          if (i < (int)png_ptr->num_trans && png_ptr->trans_alpha[i] != 0xff) {
            if (png_ptr->trans_alpha[i] == 0) {
              palette[i] = back;
            }
            else {
              png_byte v, w;
              v = png_ptr->gamma_to_1[palette[i].red];
              {
                png_uint_16 temp =
                    (png_uint_16)((png_uint_16)(v) *
                                      (png_uint_16)(png_ptr->trans_alpha[i]) +
                                  (png_uint_16)(back_1.red) *
                                      (png_uint_16)(255 -
                                                    (png_uint_16)(png_ptr
                                                                      ->trans_alpha
                                                                          [i])) +
                                  128);
                (w) = (png_byte)(((temp + (temp >> 8)) >> 8) & 0xff);
              };
              palette[i].red = png_ptr->gamma_from_1[w];
              v = png_ptr->gamma_to_1[palette[i].green];
              {
                png_uint_16 temp =
                    (png_uint_16)((png_uint_16)(v) *
                                      (png_uint_16)(png_ptr->trans_alpha[i]) +
                                  (png_uint_16)(back_1.green) *
                                      (png_uint_16)(255 -
                                                    (png_uint_16)(png_ptr
                                                                      ->trans_alpha
                                                                          [i])) +
                                  128);
                (w) = (png_byte)(((temp + (temp >> 8)) >> 8) & 0xff);
              };
              palette[i].green = png_ptr->gamma_from_1[w];
              v = png_ptr->gamma_to_1[palette[i].blue];
              {
                png_uint_16 temp =
                    (png_uint_16)((png_uint_16)(v) *
                                      (png_uint_16)(png_ptr->trans_alpha[i]) +
                                  (png_uint_16)(back_1.blue) *
                                      (png_uint_16)(255 -
                                                    (png_uint_16)(png_ptr
                                                                      ->trans_alpha
                                                                          [i])) +
                                  128);
                (w) = (png_byte)(((temp + (temp >> 8)) >> 8) & 0xff);
              };
              palette[i].blue = png_ptr->gamma_from_1[w];
            }
          }
          else {
            palette[i].red = png_ptr->gamma_table[palette[i].red];
            palette[i].green = png_ptr->gamma_table[palette[i].green];
            palette[i].blue = png_ptr->gamma_table[palette[i].blue];
          }
        }
        png_ptr->transformations &= ~(PNG_COMPOSE | PNG_GAMMA);
      }
      else {
        int gs_sig, g_sig;
        png_fixed_point g = PNG_FP_1;
        png_fixed_point gs = PNG_FP_1;
        switch (png_ptr->background_gamma_type) {
        case PNG_BACKGROUND_GAMMA_SCREEN:
          g = png_ptr->screen_gamma;
          break;
        case PNG_BACKGROUND_GAMMA_FILE:
          g = nndetailImagePng_png_reciprocal(png_ptr->colorspace.gamma);
          gs = nndetailImagePng_png_reciprocal2(png_ptr->colorspace.gamma,
                                                png_ptr->screen_gamma);
          break;
        case PNG_BACKGROUND_GAMMA_UNIQUE:
          g = nndetailImagePng_png_reciprocal(png_ptr->background_gamma);
          gs = nndetailImagePng_png_reciprocal2(png_ptr->background_gamma,
                                                png_ptr->screen_gamma);
          break;
        default:
          nndetailImagePng_png_error(png_ptr, "invalid background gamma type");
        }
        g_sig = nndetailImagePng_png_gamma_significant(g);
        gs_sig = nndetailImagePng_png_gamma_significant(gs);
        if (g_sig != 0) {
          png_ptr->background_1.gray = nndetailImagePng_png_gamma_correct(
              png_ptr, png_ptr->background.gray, g);
        }
        if (gs_sig != 0) {
          png_ptr->background.gray = nndetailImagePng_png_gamma_correct(
              png_ptr, png_ptr->background.gray, gs);
        }
        if ((png_ptr->background.red != png_ptr->background.green) ||
            (png_ptr->background.red != png_ptr->background.blue) ||
            (png_ptr->background.red != png_ptr->background.gray)) {
          if (g_sig != 0) {
            png_ptr->background_1.red = nndetailImagePng_png_gamma_correct(
                png_ptr, png_ptr->background.red, g);
            png_ptr->background_1.green = nndetailImagePng_png_gamma_correct(
                png_ptr, png_ptr->background.green, g);
            png_ptr->background_1.blue = nndetailImagePng_png_gamma_correct(
                png_ptr, png_ptr->background.blue, g);
          }
          if (gs_sig != 0) {
            png_ptr->background.red = nndetailImagePng_png_gamma_correct(
                png_ptr, png_ptr->background.red, gs);
            png_ptr->background.green = nndetailImagePng_png_gamma_correct(
                png_ptr, png_ptr->background.green, gs);
            png_ptr->background.blue = nndetailImagePng_png_gamma_correct(
                png_ptr, png_ptr->background.blue, gs);
          }
        }
        else {
          png_ptr->background_1.red = png_ptr->background_1.green =
              png_ptr->background_1.blue = png_ptr->background_1.gray;
          png_ptr->background.red = png_ptr->background.green =
              png_ptr->background.blue = png_ptr->background.gray;
        }
        png_ptr->background_gamma_type = PNG_BACKGROUND_GAMMA_SCREEN;
      }
    }
    else if (png_ptr->color_type == PNG_COLOR_TYPE_PALETTE &&
             ((png_ptr->transformations & PNG_EXPAND) == 0 ||
              (png_ptr->transformations & PNG_RGB_TO_GRAY) == 0)) {
      png_colorp palette = png_ptr->palette;
      int num_palette = png_ptr->num_palette;
      int i;
      for (i = 0; i < num_palette; i++) {
        palette[i].red = png_ptr->gamma_table[palette[i].red];
        palette[i].green = png_ptr->gamma_table[palette[i].green];
        palette[i].blue = png_ptr->gamma_table[palette[i].blue];
      }
      png_ptr->transformations &= ~PNG_GAMMA;
    }
  }
  else if ((png_ptr->transformations & PNG_COMPOSE) != 0 &&
           (png_ptr->color_type == PNG_COLOR_TYPE_PALETTE)) {
    int i;
    int istop = (int)png_ptr->num_trans;
    png_color back;
    png_colorp palette = png_ptr->palette;
    back.red = (png_byte)png_ptr->background.red;
    back.green = (png_byte)png_ptr->background.green;
    back.blue = (png_byte)png_ptr->background.blue;
    for (i = 0; i < istop; i++) {
      if (png_ptr->trans_alpha[i] == 0) {
        palette[i] = back;
      }
      else if (png_ptr->trans_alpha[i] != 0xff) {
        {
          png_uint_16 temp =
              (png_uint_16)((png_uint_16)(palette[i].red) *
                                (png_uint_16)(png_ptr->trans_alpha[i]) +
                            (png_uint_16)(back.red) *
                                (png_uint_16)(255 -
                                              (png_uint_16)(png_ptr->trans_alpha
                                                                [i])) +
                            128);
          (palette[i].red) = (png_byte)(((temp + (temp >> 8)) >> 8) & 0xff);
        };
        {
          png_uint_16 temp =
              (png_uint_16)((png_uint_16)(palette[i].green) *
                                (png_uint_16)(png_ptr->trans_alpha[i]) +
                            (png_uint_16)(back.green) *
                                (png_uint_16)(255 -
                                              (png_uint_16)(png_ptr->trans_alpha
                                                                [i])) +
                            128);
          (palette[i].green) = (png_byte)(((temp + (temp >> 8)) >> 8) & 0xff);
        };
        {
          png_uint_16 temp =
              (png_uint_16)((png_uint_16)(palette[i].blue) *
                                (png_uint_16)(png_ptr->trans_alpha[i]) +
                            (png_uint_16)(back.blue) *
                                (png_uint_16)(255 -
                                              (png_uint_16)(png_ptr->trans_alpha
                                                                [i])) +
                            128);
          (palette[i].blue) = (png_byte)(((temp + (temp >> 8)) >> 8) & 0xff);
        };
      }
    }
    png_ptr->transformations &= ~PNG_COMPOSE;
  }
  if ((png_ptr->transformations & PNG_SHIFT) != 0 &&
      (png_ptr->transformations & PNG_EXPAND) == 0 &&
      (png_ptr->color_type == PNG_COLOR_TYPE_PALETTE)) {
    int i;
    int istop = png_ptr->num_palette;
    int shift = 8 - png_ptr->sig_bit.red;
    png_ptr->transformations &= ~PNG_SHIFT;
    if (shift > 0 && shift < 8) {
      for (i = 0; i < istop; ++i) {
        int component = png_ptr->palette[i].red;
        component >>= shift;
        png_ptr->palette[i].red = (png_byte)component;
      }
    }
    shift = 8 - png_ptr->sig_bit.green;
    if (shift > 0 && shift < 8) {
      for (i = 0; i < istop; ++i) {
        int component = png_ptr->palette[i].green;
        component >>= shift;
        png_ptr->palette[i].green = (png_byte)component;
      }
    }
    shift = 8 - png_ptr->sig_bit.blue;
    if (shift > 0 && shift < 8) {
      for (i = 0; i < istop; ++i) {
        int component = png_ptr->palette[i].blue;
        component >>= shift;
        png_ptr->palette[i].blue = (png_byte)component;
      }
    }
  }
}
