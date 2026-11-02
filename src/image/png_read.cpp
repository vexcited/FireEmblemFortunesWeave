#include "image/png_read.hpp"

using png_byte = uint8_t;
using png_bytep = uint8_t *;
using png_bytepp = uint8_t **;
using png_const_bytep = const uint8_t *;
using png_uint_16 = uint16_t;
using png_uint_16p = uint16_t *;
using png_uint_16pp = uint16_t **;
using png_const_uint_16pp = const uint16_t *const *;
using png_uint_32 = uint32_t;
using png_int_32 = int32_t;
using png_size_t = size_t;
using png_structrp = fw::image::PngReadState *;
using png_row_infop = fw::image::PngRowInfo *;
using png_colorp = fw::image::PngColor *;
using png_const_colorp = const fw::image::PngColor *;
using png_color_16 = fw::image::PngColor16;
using png_color_16p = fw::image::PngColor16 *;
using png_const_color_16p = const fw::image::PngColor16 *;
using png_color_8p = fw::image::PngColor8 *;
using png_const_color_8p = const fw::image::PngColor8 *;

extern "C" {

[[noreturn]] void nndetailImagePng_png_error(png_structrp, const char *);
void nndetailImagePng_png_warning(png_structrp, const char *);
void *nndetailImagePng_png_malloc(png_structrp, size_t);
void nndetailImagePng_png_riffle_palette_neon(png_structrp);
int nndetailImagePng_png_do_expand_palette_rgba8_neon(png_structrp,
                                                      png_row_infop,
                                                      png_const_bytep,
                                                      const png_bytepp,
                                                      const png_bytepp);
int nndetailImagePng_png_do_expand_palette_rgb8_neon(png_structrp,
                                                     png_row_infop,
                                                     png_const_bytep,
                                                     const png_bytepp,
                                                     const png_bytepp);
void nndetailImagePng_png_do_check_palette_indexes(png_structrp, png_row_infop);
}

constexpr unsigned PNG_BACKGROUND_IS_GRAY = 0x800U;
constexpr unsigned PNG_BGR = 0x0001U;
constexpr unsigned PNG_PACK = 0x0004U;
constexpr unsigned PNG_SHIFT = 0x0008U;
constexpr unsigned PNG_SWAP_BYTES = 0x0010U;
constexpr unsigned PNG_INVERT_MONO = 0x0020U;
constexpr unsigned PNG_QUANTIZE = 0x0040U;
constexpr unsigned PNG_COMPOSE = 0x0080U;
constexpr unsigned PNG_EXPAND_16 = 0x0200U;
constexpr unsigned PNG_16_TO_8 = 0x0400U;
constexpr unsigned PNG_EXPAND = 0x1000U;
constexpr unsigned PNG_GAMMA = 0x2000U;
constexpr unsigned PNG_GRAY_TO_RGB = 0x4000U;
constexpr unsigned PNG_FILLER = 0x8000U;
constexpr unsigned PNG_PACKSWAP = 0x10000U;
constexpr unsigned PNG_SWAP_ALPHA = 0x20000U;
constexpr unsigned PNG_STRIP_ALPHA = 0x40000U;
constexpr unsigned PNG_INVERT_ALPHA = 0x80000U;
constexpr unsigned PNG_USER_TRANSFORM = 0x100000U;
constexpr unsigned PNG_RGB_TO_GRAY_ERR = 0x200000U;
constexpr unsigned PNG_RGB_TO_GRAY_WARN = 0x400000U;
constexpr unsigned PNG_RGB_TO_GRAY = 0x600000U;
constexpr unsigned PNG_ENCODE_ALPHA = 0x800000U;
constexpr unsigned PNG_EXPAND_tRNS = 0x2000000U;
constexpr unsigned PNG_SCALE_16_TO_8 = 0x4000000U;
constexpr unsigned PNG_FLAG_ROW_INIT = 0x0040U;
constexpr unsigned PNG_FLAG_FILLER_AFTER = 0x0080U;
constexpr unsigned PNG_FLAG_OPTIMIZE_ALPHA = 0x2000U;
constexpr unsigned PNG_FLAG_DETECT_UNINITIALIZED = 0x4000U;
constexpr unsigned PNG_COLOR_MASK_PALETTE = 1;
constexpr unsigned PNG_COLOR_MASK_COLOR = 2;
constexpr unsigned PNG_COLOR_MASK_ALPHA = 4;
constexpr unsigned PNG_COLOR_TYPE_GRAY = 0;
constexpr unsigned PNG_COLOR_TYPE_PALETTE =
    (PNG_COLOR_MASK_COLOR | PNG_COLOR_MASK_PALETTE);
constexpr unsigned PNG_COLOR_TYPE_RGB = (PNG_COLOR_MASK_COLOR);
constexpr unsigned PNG_COLOR_TYPE_RGB_ALPHA =
    (PNG_COLOR_MASK_COLOR | PNG_COLOR_MASK_ALPHA);
constexpr unsigned PNG_COLOR_TYPE_GRAY_ALPHA = (PNG_COLOR_MASK_ALPHA);

static void png_do_unpack(png_row_infop row_info, png_bytep row)
{

  if (row_info->bit_depth < 8) {
    png_uint_32 i;
    png_uint_32 row_width = row_info->width;
    switch (row_info->bit_depth) {
    case 1: {
      png_bytep sp = row + (size_t)((row_width - 1) >> 3);
      png_bytep dp = row + (size_t)row_width - 1;
      png_uint_32 shift = 7U - ((row_width + 7U) & 0x07);
      for (i = 0; i < row_width; i++) {
        *dp = (png_byte)((*sp >> shift) & 0x01);
        if (shift == 7) {
          shift = 0;
          sp--;
        }
        else {
          shift++;
        }
        dp--;
      }
      break;
    }
    case 2: {
      png_bytep sp = row + (size_t)((row_width - 1) >> 2);
      png_bytep dp = row + (size_t)row_width - 1;
      png_uint_32 shift = ((3U - ((row_width + 3U) & 0x03)) << 1);
      for (i = 0; i < row_width; i++) {
        *dp = (png_byte)((*sp >> shift) & 0x03);
        if (shift == 6) {
          shift = 0;
          sp--;
        }
        else {
          shift += 2;
        }
        dp--;
      }
      break;
    }
    case 4: {
      png_bytep sp = row + (size_t)((row_width - 1) >> 1);
      png_bytep dp = row + (size_t)row_width - 1;
      png_uint_32 shift = ((1U - ((row_width + 1U) & 0x01)) << 2);
      for (i = 0; i < row_width; i++) {
        *dp = (png_byte)((*sp >> shift) & 0x0f);
        if (shift == 4) {
          shift = 0;
          sp--;
        }
        else {
          shift = 4;
        }
        dp--;
      }
      break;
    }
    default:
      break;
    }
    row_info->bit_depth = 8;
    row_info->pixel_depth = (png_byte)(8 * row_info->channels);
    row_info->row_bytes = row_width * row_info->channels;
  }
}
static void png_do_unshift(png_row_infop row_info, png_bytep row,
                           png_const_color_8p sig_bits)
{
  int color_type;

  color_type = row_info->color_type;
  if (color_type != PNG_COLOR_TYPE_PALETTE) {
    int shift[4];
    int channels = 0;
    int bit_depth = row_info->bit_depth;
    if ((color_type & PNG_COLOR_MASK_COLOR) != 0) {
      shift[channels++] = bit_depth - sig_bits->red;
      shift[channels++] = bit_depth - sig_bits->green;
      shift[channels++] = bit_depth - sig_bits->blue;
    }
    else {
      shift[channels++] = bit_depth - sig_bits->gray;
    }
    if ((color_type & PNG_COLOR_MASK_ALPHA) != 0) {
      shift[channels++] = bit_depth - sig_bits->alpha;
    }
    {
      int c, have_shift;
      for (c = have_shift = 0; c < channels; ++c) {
        if (shift[c] <= 0 || shift[c] >= bit_depth) {
          shift[c] = 0;
        }
        else {
          have_shift = 1;
        }
      }
      if (have_shift == 0) {
        return;
      }
    }
    switch (bit_depth) {
    default:
      break;
    case 2: {
      png_bytep bp = row;
      png_bytep bp_end = bp + row_info->row_bytes;
      while (bp < bp_end) {
        int b = (*bp >> 1) & 0x55;
        *bp++ = (png_byte)b;
      }
      break;
    }
    case 4: {
      png_bytep bp = row;
      png_bytep bp_end = bp + row_info->row_bytes;
      int gray_shift = shift[0];
      int mask = 0xf >> gray_shift;
      mask |= mask << 4;
      while (bp < bp_end) {
        int b = (*bp >> gray_shift) & mask;
        *bp++ = (png_byte)b;
      }
      break;
    }
    case 8: {
      png_bytep bp = row;
      png_bytep bp_end = bp + row_info->row_bytes;
      int channel = 0;
      while (bp < bp_end) {
        int b = *bp >> shift[channel];
        if (++channel >= channels) {
          channel = 0;
        }
        *bp++ = (png_byte)b;
      }
      break;
    }
    case 16: {
      png_bytep bp = row;
      png_bytep bp_end = bp + row_info->row_bytes;
      int channel = 0;
      while (bp < bp_end) {
        int value = (bp[0] << 8) + bp[1];
        value >>= shift[channel];
        if (++channel >= channels) {
          channel = 0;
        }
        *bp++ = (png_byte)(value >> 8);
        *bp++ = (png_byte)value;
      }
      break;
    }
    }
  }
}
static void png_do_scale_16_to_8(png_row_infop row_info, png_bytep row)
{

  if (row_info->bit_depth == 16) {
    png_bytep sp = row;
    png_bytep dp = row;
    png_bytep ep = sp + row_info->row_bytes;
    while (sp < ep) {
      png_int_32 tmp = *sp++;
      tmp += (((int)*sp++ - tmp + 128) * 65535) >> 24;
      *dp++ = (png_byte)tmp;
    }
    row_info->bit_depth = 8;
    row_info->pixel_depth = (png_byte)(8 * row_info->channels);
    row_info->row_bytes = row_info->width * row_info->channels;
  }
}
static void png_do_chop(png_row_infop row_info, png_bytep row)
{

  if (row_info->bit_depth == 16) {
    png_bytep sp = row;
    png_bytep dp = row;
    png_bytep ep = sp + row_info->row_bytes;
    while (sp < ep) {
      *dp++ = *sp;
      sp += 2;
    }
    row_info->bit_depth = 8;
    row_info->pixel_depth = (png_byte)(8 * row_info->channels);
    row_info->row_bytes = row_info->width * row_info->channels;
  }
}
static void png_do_read_swap_alpha(png_row_infop row_info, png_bytep row)
{
  png_uint_32 row_width = row_info->width;

  if (row_info->color_type == PNG_COLOR_TYPE_RGB_ALPHA) {
    if (row_info->bit_depth == 8) {
      png_bytep sp = row + row_info->row_bytes;
      png_bytep dp = sp;
      png_byte save;
      png_uint_32 i;
      for (i = 0; i < row_width; i++) {
        save = *(--sp);
        *(--dp) = *(--sp);
        *(--dp) = *(--sp);
        *(--dp) = *(--sp);
        *(--dp) = save;
      }
    }
    else {
      png_bytep sp = row + row_info->row_bytes;
      png_bytep dp = sp;
      png_byte save[2];
      png_uint_32 i;
      for (i = 0; i < row_width; i++) {
        save[0] = *(--sp);
        save[1] = *(--sp);
        *(--dp) = *(--sp);
        *(--dp) = *(--sp);
        *(--dp) = *(--sp);
        *(--dp) = *(--sp);
        *(--dp) = *(--sp);
        *(--dp) = *(--sp);
        *(--dp) = save[0];
        *(--dp) = save[1];
      }
    }
  }
  else if (row_info->color_type == PNG_COLOR_TYPE_GRAY_ALPHA) {
    if (row_info->bit_depth == 8) {
      png_bytep sp = row + row_info->row_bytes;
      png_bytep dp = sp;
      png_byte save;
      png_uint_32 i;
      for (i = 0; i < row_width; i++) {
        save = *(--sp);
        *(--dp) = *(--sp);
        *(--dp) = save;
      }
    }
    else {
      png_bytep sp = row + row_info->row_bytes;
      png_bytep dp = sp;
      png_byte save[2];
      png_uint_32 i;
      for (i = 0; i < row_width; i++) {
        save[0] = *(--sp);
        save[1] = *(--sp);
        *(--dp) = *(--sp);
        *(--dp) = *(--sp);
        *(--dp) = save[0];
        *(--dp) = save[1];
      }
    }
  }
}
static void png_do_read_invert_alpha(png_row_infop row_info, png_bytep row)
{
  png_uint_32 row_width;

  row_width = row_info->width;
  if (row_info->color_type == PNG_COLOR_TYPE_RGB_ALPHA) {
    if (row_info->bit_depth == 8) {
      png_bytep sp = row + row_info->row_bytes;
      png_bytep dp = sp;
      png_uint_32 i;
      for (i = 0; i < row_width; i++) {
        *(--dp) = (png_byte)(255 - *(--sp));
        sp -= 3;
        dp = sp;
      }
    }
    else {
      png_bytep sp = row + row_info->row_bytes;
      png_bytep dp = sp;
      png_uint_32 i;
      for (i = 0; i < row_width; i++) {
        *(--dp) = (png_byte)(255 - *(--sp));
        *(--dp) = (png_byte)(255 - *(--sp));
        sp -= 6;
        dp = sp;
      }
    }
  }
  else if (row_info->color_type == PNG_COLOR_TYPE_GRAY_ALPHA) {
    if (row_info->bit_depth == 8) {
      png_bytep sp = row + row_info->row_bytes;
      png_bytep dp = sp;
      png_uint_32 i;
      for (i = 0; i < row_width; i++) {
        *(--dp) = (png_byte)(255 - *(--sp));
        *(--dp) = *(--sp);
      }
    }
    else {
      png_bytep sp = row + row_info->row_bytes;
      png_bytep dp = sp;
      png_uint_32 i;
      for (i = 0; i < row_width; i++) {
        *(--dp) = (png_byte)(255 - *(--sp));
        *(--dp) = (png_byte)(255 - *(--sp));
        sp -= 2;
        dp = sp;
      }
    }
  }
}
static void png_do_read_filler(png_row_infop row_info, png_bytep row,
                               png_uint_32 filler, png_uint_32 flags)
{
  png_uint_32 i;
  png_uint_32 row_width = row_info->width;
  png_byte hi_filler = (png_byte)(filler >> 8);
  png_byte lo_filler = (png_byte)filler;

  if (row_info->color_type == PNG_COLOR_TYPE_GRAY) {
    if (row_info->bit_depth == 8) {
      if ((flags & PNG_FLAG_FILLER_AFTER) != 0) {
        png_bytep sp = row + (size_t)row_width;
        png_bytep dp = sp + (size_t)row_width;
        for (i = 1; i < row_width; i++) {
          *(--dp) = lo_filler;
          *(--dp) = *(--sp);
        }
        *(--dp) = lo_filler;
        row_info->channels = 2;
        row_info->pixel_depth = 16;
        row_info->row_bytes = row_width * 2;
      }
      else {
        png_bytep sp = row + (size_t)row_width;
        png_bytep dp = sp + (size_t)row_width;
        for (i = 0; i < row_width; i++) {
          *(--dp) = *(--sp);
          *(--dp) = lo_filler;
        }
        row_info->channels = 2;
        row_info->pixel_depth = 16;
        row_info->row_bytes = row_width * 2;
      }
    }
    else if (row_info->bit_depth == 16) {
      if ((flags & PNG_FLAG_FILLER_AFTER) != 0) {
        png_bytep sp = row + (size_t)row_width * 2;
        png_bytep dp = sp + (size_t)row_width * 2;
        for (i = 1; i < row_width; i++) {
          *(--dp) = lo_filler;
          *(--dp) = hi_filler;
          *(--dp) = *(--sp);
          *(--dp) = *(--sp);
        }
        *(--dp) = lo_filler;
        *(--dp) = hi_filler;
        row_info->channels = 2;
        row_info->pixel_depth = 32;
        row_info->row_bytes = row_width * 4;
      }
      else {
        png_bytep sp = row + (size_t)row_width * 2;
        png_bytep dp = sp + (size_t)row_width * 2;
        for (i = 0; i < row_width; i++) {
          *(--dp) = *(--sp);
          *(--dp) = *(--sp);
          *(--dp) = lo_filler;
          *(--dp) = hi_filler;
        }
        row_info->channels = 2;
        row_info->pixel_depth = 32;
        row_info->row_bytes = row_width * 4;
      }
    }
  }
  else if (row_info->color_type == PNG_COLOR_TYPE_RGB) {
    if (row_info->bit_depth == 8) {
      if ((flags & PNG_FLAG_FILLER_AFTER) != 0) {
        png_bytep sp = row + (size_t)row_width * 3;
        png_bytep dp = sp + (size_t)row_width;
        for (i = 1; i < row_width; i++) {
          *(--dp) = lo_filler;
          *(--dp) = *(--sp);
          *(--dp) = *(--sp);
          *(--dp) = *(--sp);
        }
        *(--dp) = lo_filler;
        row_info->channels = 4;
        row_info->pixel_depth = 32;
        row_info->row_bytes = row_width * 4;
      }
      else {
        png_bytep sp = row + (size_t)row_width * 3;
        png_bytep dp = sp + (size_t)row_width;
        for (i = 0; i < row_width; i++) {
          *(--dp) = *(--sp);
          *(--dp) = *(--sp);
          *(--dp) = *(--sp);
          *(--dp) = lo_filler;
        }
        row_info->channels = 4;
        row_info->pixel_depth = 32;
        row_info->row_bytes = row_width * 4;
      }
    }
    else if (row_info->bit_depth == 16) {
      if ((flags & PNG_FLAG_FILLER_AFTER) != 0) {
        png_bytep sp = row + (size_t)row_width * 6;
        png_bytep dp = sp + (size_t)row_width * 2;
        for (i = 1; i < row_width; i++) {
          *(--dp) = lo_filler;
          *(--dp) = hi_filler;
          *(--dp) = *(--sp);
          *(--dp) = *(--sp);
          *(--dp) = *(--sp);
          *(--dp) = *(--sp);
          *(--dp) = *(--sp);
          *(--dp) = *(--sp);
        }
        *(--dp) = lo_filler;
        *(--dp) = hi_filler;
        row_info->channels = 4;
        row_info->pixel_depth = 64;
        row_info->row_bytes = row_width * 8;
      }
      else {
        png_bytep sp = row + (size_t)row_width * 6;
        png_bytep dp = sp + (size_t)row_width * 2;
        for (i = 0; i < row_width; i++) {
          *(--dp) = *(--sp);
          *(--dp) = *(--sp);
          *(--dp) = *(--sp);
          *(--dp) = *(--sp);
          *(--dp) = *(--sp);
          *(--dp) = *(--sp);
          *(--dp) = lo_filler;
          *(--dp) = hi_filler;
        }
        row_info->channels = 4;
        row_info->pixel_depth = 64;
        row_info->row_bytes = row_width * 8;
      }
    }
  }
}
static void png_do_gray_to_rgb(png_row_infop row_info, png_bytep row)
{
  png_uint_32 i;
  png_uint_32 row_width = row_info->width;

  if (row_info->bit_depth >= 8 &&
      (row_info->color_type & PNG_COLOR_MASK_COLOR) == 0) {
    if (row_info->color_type == PNG_COLOR_TYPE_GRAY) {
      if (row_info->bit_depth == 8) {
        png_bytep sp = row + (size_t)row_width - 1;
        png_bytep dp = sp + (size_t)row_width * 2;
        for (i = 0; i < row_width; i++) {
          *(dp--) = *sp;
          *(dp--) = *sp;
          *(dp--) = *(sp--);
        }
      }
      else {
        png_bytep sp = row + (size_t)row_width * 2 - 1;
        png_bytep dp = sp + (size_t)row_width * 4;
        for (i = 0; i < row_width; i++) {
          *(dp--) = *sp;
          *(dp--) = *(sp - 1);
          *(dp--) = *sp;
          *(dp--) = *(sp - 1);
          *(dp--) = *(sp--);
          *(dp--) = *(sp--);
        }
      }
    }
    else if (row_info->color_type == PNG_COLOR_TYPE_GRAY_ALPHA) {
      if (row_info->bit_depth == 8) {
        png_bytep sp = row + (size_t)row_width * 2 - 1;
        png_bytep dp = sp + (size_t)row_width * 2;
        for (i = 0; i < row_width; i++) {
          *(dp--) = *(sp--);
          *(dp--) = *sp;
          *(dp--) = *sp;
          *(dp--) = *(sp--);
        }
      }
      else {
        png_bytep sp = row + (size_t)row_width * 4 - 1;
        png_bytep dp = sp + (size_t)row_width * 4;
        for (i = 0; i < row_width; i++) {
          *(dp--) = *(sp--);
          *(dp--) = *(sp--);
          *(dp--) = *sp;
          *(dp--) = *(sp - 1);
          *(dp--) = *sp;
          *(dp--) = *(sp - 1);
          *(dp--) = *(sp--);
          *(dp--) = *(sp--);
        }
      }
    }
    row_info->channels = (png_byte)(row_info->channels + 2);
    row_info->color_type |= PNG_COLOR_MASK_COLOR;
    row_info->pixel_depth =
        (png_byte)(row_info->channels * row_info->bit_depth);
    row_info->row_bytes =
        ((row_info->pixel_depth) >= 8
             ? ((size_t)(row_width) * (((size_t)(row_info->pixel_depth)) >> 3))
             : ((((size_t)(row_width) * ((size_t)(row_info->pixel_depth))) +
                 7) >>
                3));
  }
}
static int png_do_rgb_to_gray(png_structrp png_ptr, png_row_infop row_info,
                              png_bytep row)
{
  int rgb_error = 0;

  if ((row_info->color_type & PNG_COLOR_MASK_PALETTE) == 0 &&
      (row_info->color_type & PNG_COLOR_MASK_COLOR) != 0) {
    png_uint_32 rc = png_ptr->rgb_to_gray_red_coeff;
    png_uint_32 gc = png_ptr->rgb_to_gray_green_coeff;
    png_uint_32 bc = 32768 - rc - gc;
    png_uint_32 row_width = row_info->width;
    int have_alpha = (row_info->color_type & PNG_COLOR_MASK_ALPHA) != 0;
    if (row_info->bit_depth == 8) {
      if (png_ptr->gamma_from_1 != NULL && png_ptr->gamma_to_1 != NULL) {
        png_bytep sp = row;
        png_bytep dp = row;
        png_uint_32 i;
        for (i = 0; i < row_width; i++) {
          png_byte red = *(sp++);
          png_byte green = *(sp++);
          png_byte blue = *(sp++);
          if (red != green || red != blue) {
            red = png_ptr->gamma_to_1[red];
            green = png_ptr->gamma_to_1[green];
            blue = png_ptr->gamma_to_1[blue];
            rgb_error |= 1;
            *(dp++) = png_ptr->gamma_from_1[(rc * red + gc * green + bc * blue +
                                             16384) >>
                                            15];
          }
          else {
            if (png_ptr->gamma_table != NULL) {
              red = png_ptr->gamma_table[red];
            }
            *(dp++) = red;
          }
          if (have_alpha != 0) {
            *(dp++) = *(sp++);
          }
        }
      }
      else {
        png_bytep sp = row;
        png_bytep dp = row;
        png_uint_32 i;
        for (i = 0; i < row_width; i++) {
          png_byte red = *(sp++);
          png_byte green = *(sp++);
          png_byte blue = *(sp++);
          if (red != green || red != blue) {
            rgb_error |= 1;
            *(dp++) = (png_byte)((rc * red + gc * green + bc * blue) >> 15);
          }
          else {
            *(dp++) = red;
          }
          if (have_alpha != 0) {
            *(dp++) = *(sp++);
          }
        }
      }
    }
    else {
      if (png_ptr->gamma_16_to_1 != NULL && png_ptr->gamma_16_from_1 != NULL) {
        png_bytep sp = row;
        png_bytep dp = row;
        png_uint_32 i;
        for (i = 0; i < row_width; i++) {
          png_uint_16 red, green, blue, w;
          png_byte hi, lo;
          hi = *(sp)++;
          lo = *(sp)++;
          red = (png_uint_16)((hi << 8) | (lo));
          hi = *(sp)++;
          lo = *(sp)++;
          green = (png_uint_16)((hi << 8) | (lo));
          hi = *(sp)++;
          lo = *(sp)++;
          blue = (png_uint_16)((hi << 8) | (lo));
          if (red == green && red == blue) {
            if (png_ptr->gamma_16_table != NULL) {
              w = png_ptr->gamma_16_table[(red & 0xff) >> png_ptr->gamma_shift]
                                         [red >> 8];
            }
            else {
              w = red;
            }
          }
          else {
            png_uint_16 red_1 =
                png_ptr->gamma_16_to_1[(red & 0xff) >> png_ptr->gamma_shift]
                                      [red >> 8];
            png_uint_16 green_1 =
                png_ptr->gamma_16_to_1[(green & 0xff) >> png_ptr->gamma_shift]
                                      [green >> 8];
            png_uint_16 blue_1 =
                png_ptr->gamma_16_to_1[(blue & 0xff) >> png_ptr->gamma_shift]
                                      [blue >> 8];
            png_uint_16 gray16 = (png_uint_16)((rc * red_1 + gc * green_1 +
                                                bc * blue_1 + 16384) >>
                                               15);
            w = png_ptr->gamma_16_from_1[(gray16 & 0xff) >>
                                         png_ptr->gamma_shift][gray16 >> 8];
            rgb_error |= 1;
          }
          *(dp++) = (png_byte)((w >> 8) & 0xff);
          *(dp++) = (png_byte)(w & 0xff);
          if (have_alpha != 0) {
            *(dp++) = *(sp++);
            *(dp++) = *(sp++);
          }
        }
      }
      else {
        png_bytep sp = row;
        png_bytep dp = row;
        png_uint_32 i;
        for (i = 0; i < row_width; i++) {
          png_uint_16 red, green, blue, gray16;
          png_byte hi, lo;
          hi = *(sp)++;
          lo = *(sp)++;
          red = (png_uint_16)((hi << 8) | (lo));
          hi = *(sp)++;
          lo = *(sp)++;
          green = (png_uint_16)((hi << 8) | (lo));
          hi = *(sp)++;
          lo = *(sp)++;
          blue = (png_uint_16)((hi << 8) | (lo));
          if (red != green || red != blue) {
            rgb_error |= 1;
          }
          gray16 =
              (png_uint_16)((rc * red + gc * green + bc * blue + 16384) >> 15);
          *(dp++) = (png_byte)((gray16 >> 8) & 0xff);
          *(dp++) = (png_byte)(gray16 & 0xff);
          if (have_alpha != 0) {
            *(dp++) = *(sp++);
            *(dp++) = *(sp++);
          }
        }
      }
    }
    row_info->channels = (png_byte)(row_info->channels - 2);
    row_info->color_type =
        (png_byte)(row_info->color_type & ~PNG_COLOR_MASK_COLOR);
    row_info->pixel_depth =
        (png_byte)(row_info->channels * row_info->bit_depth);
    row_info->row_bytes =
        ((row_info->pixel_depth) >= 8
             ? ((size_t)(row_width) * (((size_t)(row_info->pixel_depth)) >> 3))
             : ((((size_t)(row_width) * ((size_t)(row_info->pixel_depth))) +
                 7) >>
                3));
  }
  return rgb_error;
}
static void png_do_compose(png_row_infop row_info, png_bytep row,
                           png_structrp png_ptr)
{
  png_const_bytep gamma_table = png_ptr->gamma_table;
  png_const_bytep gamma_from_1 = png_ptr->gamma_from_1;
  png_const_bytep gamma_to_1 = png_ptr->gamma_to_1;
  png_const_uint_16pp gamma_16 = png_ptr->gamma_16_table;
  png_const_uint_16pp gamma_16_from_1 = png_ptr->gamma_16_from_1;
  png_const_uint_16pp gamma_16_to_1 = png_ptr->gamma_16_to_1;
  int gamma_shift = png_ptr->gamma_shift;
  int optimize = (png_ptr->flags & PNG_FLAG_OPTIMIZE_ALPHA) != 0;
  png_bytep sp;
  png_uint_32 i;
  png_uint_32 row_width = row_info->width;
  int shift;

  switch (row_info->color_type) {
  case PNG_COLOR_TYPE_GRAY: {
    switch (row_info->bit_depth) {
    case 1: {
      sp = row;
      shift = 7;
      for (i = 0; i < row_width; i++) {
        if ((png_uint_16)((*sp >> shift) & 0x01) == png_ptr->trans_color.gray) {
          unsigned int tmp = *sp & (0x7f7f >> (7 - shift));
          tmp |= (unsigned int)(png_ptr->background.gray << shift);
          *sp = (png_byte)(tmp & 0xff);
        }
        if (shift == 0) {
          shift = 7;
          sp++;
        }
        else {
          shift--;
        }
      }
      break;
    }
    case 2: {
      if (gamma_table != NULL) {
        sp = row;
        shift = 6;
        for (i = 0; i < row_width; i++) {
          if ((png_uint_16)((*sp >> shift) & 0x03) ==
              png_ptr->trans_color.gray) {
            unsigned int tmp = *sp & (0x3f3f >> (6 - shift));
            tmp |= (unsigned int)png_ptr->background.gray << shift;
            *sp = (png_byte)(tmp & 0xff);
          }
          else {
            unsigned int p = (*sp >> shift) & 0x03;
            unsigned int g =
                (gamma_table[p | (p << 2) | (p << 4) | (p << 6)] >> 6) & 0x03;
            unsigned int tmp = *sp & (0x3f3f >> (6 - shift));
            tmp |= (unsigned int)(g << shift);
            *sp = (png_byte)(tmp & 0xff);
          }
          if (shift == 0) {
            shift = 6;
            sp++;
          }
          else {
            shift -= 2;
          }
        }
      }
      else {
        sp = row;
        shift = 6;
        for (i = 0; i < row_width; i++) {
          if ((png_uint_16)((*sp >> shift) & 0x03) ==
              png_ptr->trans_color.gray) {
            unsigned int tmp = *sp & (0x3f3f >> (6 - shift));
            tmp |= (unsigned int)png_ptr->background.gray << shift;
            *sp = (png_byte)(tmp & 0xff);
          }
          if (shift == 0) {
            shift = 6;
            sp++;
          }
          else {
            shift -= 2;
          }
        }
      }
      break;
    }
    case 4: {
      if (gamma_table != NULL) {
        sp = row;
        shift = 4;
        for (i = 0; i < row_width; i++) {
          if ((png_uint_16)((*sp >> shift) & 0x0f) ==
              png_ptr->trans_color.gray) {
            unsigned int tmp = *sp & (0x0f0f >> (4 - shift));
            tmp |= (unsigned int)(png_ptr->background.gray << shift);
            *sp = (png_byte)(tmp & 0xff);
          }
          else {
            unsigned int p = (*sp >> shift) & 0x0f;
            unsigned int g = (gamma_table[p | (p << 4)] >> 4) & 0x0f;
            unsigned int tmp = *sp & (0x0f0f >> (4 - shift));
            tmp |= (unsigned int)(g << shift);
            *sp = (png_byte)(tmp & 0xff);
          }
          if (shift == 0) {
            shift = 4;
            sp++;
          }
          else {
            shift -= 4;
          }
        }
      }
      else {
        sp = row;
        shift = 4;
        for (i = 0; i < row_width; i++) {
          if ((png_uint_16)((*sp >> shift) & 0x0f) ==
              png_ptr->trans_color.gray) {
            unsigned int tmp = *sp & (0x0f0f >> (4 - shift));
            tmp |= (unsigned int)(png_ptr->background.gray << shift);
            *sp = (png_byte)(tmp & 0xff);
          }
          if (shift == 0) {
            shift = 4;
            sp++;
          }
          else {
            shift -= 4;
          }
        }
      }
      break;
    }
    case 8: {
      if (gamma_table != NULL) {
        sp = row;
        for (i = 0; i < row_width; i++, sp++) {
          if (*sp == png_ptr->trans_color.gray) {
            *sp = (png_byte)png_ptr->background.gray;
          }
          else {
            *sp = gamma_table[*sp];
          }
        }
      }
      else {
        sp = row;
        for (i = 0; i < row_width; i++, sp++) {
          if (*sp == png_ptr->trans_color.gray) {
            *sp = (png_byte)png_ptr->background.gray;
          }
        }
      }
      break;
    }
    case 16: {
      if (gamma_16 != NULL) {
        sp = row;
        for (i = 0; i < row_width; i++, sp += 2) {
          png_uint_16 v;
          v = (png_uint_16)(((*sp) << 8) + *(sp + 1));
          if (v == png_ptr->trans_color.gray) {
            *sp = (png_byte)((png_ptr->background.gray >> 8) & 0xff);
            *(sp + 1) = (png_byte)(png_ptr->background.gray & 0xff);
          }
          else {
            v = gamma_16[*(sp + 1) >> gamma_shift][*sp];
            *sp = (png_byte)((v >> 8) & 0xff);
            *(sp + 1) = (png_byte)(v & 0xff);
          }
        }
      }
      else {
        sp = row;
        for (i = 0; i < row_width; i++, sp += 2) {
          png_uint_16 v;
          v = (png_uint_16)(((*sp) << 8) + *(sp + 1));
          if (v == png_ptr->trans_color.gray) {
            *sp = (png_byte)((png_ptr->background.gray >> 8) & 0xff);
            *(sp + 1) = (png_byte)(png_ptr->background.gray & 0xff);
          }
        }
      }
      break;
    }
    default:
      break;
    }
    break;
  }
  case PNG_COLOR_TYPE_RGB: {
    if (row_info->bit_depth == 8) {
      if (gamma_table != NULL) {
        sp = row;
        for (i = 0; i < row_width; i++, sp += 3) {
          if (*sp == png_ptr->trans_color.red &&
              *(sp + 1) == png_ptr->trans_color.green &&
              *(sp + 2) == png_ptr->trans_color.blue) {
            *sp = (png_byte)png_ptr->background.red;
            *(sp + 1) = (png_byte)png_ptr->background.green;
            *(sp + 2) = (png_byte)png_ptr->background.blue;
          }
          else {
            *sp = gamma_table[*sp];
            *(sp + 1) = gamma_table[*(sp + 1)];
            *(sp + 2) = gamma_table[*(sp + 2)];
          }
        }
      }
      else {
        sp = row;
        for (i = 0; i < row_width; i++, sp += 3) {
          if (*sp == png_ptr->trans_color.red &&
              *(sp + 1) == png_ptr->trans_color.green &&
              *(sp + 2) == png_ptr->trans_color.blue) {
            *sp = (png_byte)png_ptr->background.red;
            *(sp + 1) = (png_byte)png_ptr->background.green;
            *(sp + 2) = (png_byte)png_ptr->background.blue;
          }
        }
      }
    }
    else {
      if (gamma_16 != NULL) {
        sp = row;
        for (i = 0; i < row_width; i++, sp += 6) {
          png_uint_16 r = (png_uint_16)(((*sp) << 8) + *(sp + 1));
          png_uint_16 g = (png_uint_16)(((*(sp + 2)) << 8) + *(sp + 3));
          png_uint_16 b = (png_uint_16)(((*(sp + 4)) << 8) + *(sp + 5));
          if (r == png_ptr->trans_color.red &&
              g == png_ptr->trans_color.green &&
              b == png_ptr->trans_color.blue) {
            *sp = (png_byte)((png_ptr->background.red >> 8) & 0xff);
            *(sp + 1) = (png_byte)(png_ptr->background.red & 0xff);
            *(sp + 2) = (png_byte)((png_ptr->background.green >> 8) & 0xff);
            *(sp + 3) = (png_byte)(png_ptr->background.green & 0xff);
            *(sp + 4) = (png_byte)((png_ptr->background.blue >> 8) & 0xff);
            *(sp + 5) = (png_byte)(png_ptr->background.blue & 0xff);
          }
          else {
            png_uint_16 v = gamma_16[*(sp + 1) >> gamma_shift][*sp];
            *sp = (png_byte)((v >> 8) & 0xff);
            *(sp + 1) = (png_byte)(v & 0xff);
            v = gamma_16[*(sp + 3) >> gamma_shift][*(sp + 2)];
            *(sp + 2) = (png_byte)((v >> 8) & 0xff);
            *(sp + 3) = (png_byte)(v & 0xff);
            v = gamma_16[*(sp + 5) >> gamma_shift][*(sp + 4)];
            *(sp + 4) = (png_byte)((v >> 8) & 0xff);
            *(sp + 5) = (png_byte)(v & 0xff);
          }
        }
      }
      else {
        sp = row;
        for (i = 0; i < row_width; i++, sp += 6) {
          png_uint_16 r = (png_uint_16)(((*sp) << 8) + *(sp + 1));
          png_uint_16 g = (png_uint_16)(((*(sp + 2)) << 8) + *(sp + 3));
          png_uint_16 b = (png_uint_16)(((*(sp + 4)) << 8) + *(sp + 5));
          if (r == png_ptr->trans_color.red &&
              g == png_ptr->trans_color.green &&
              b == png_ptr->trans_color.blue) {
            *sp = (png_byte)((png_ptr->background.red >> 8) & 0xff);
            *(sp + 1) = (png_byte)(png_ptr->background.red & 0xff);
            *(sp + 2) = (png_byte)((png_ptr->background.green >> 8) & 0xff);
            *(sp + 3) = (png_byte)(png_ptr->background.green & 0xff);
            *(sp + 4) = (png_byte)((png_ptr->background.blue >> 8) & 0xff);
            *(sp + 5) = (png_byte)(png_ptr->background.blue & 0xff);
          }
        }
      }
    }
    break;
  }
  case PNG_COLOR_TYPE_GRAY_ALPHA: {
    if (row_info->bit_depth == 8) {
      if (gamma_to_1 != NULL && gamma_from_1 != NULL && gamma_table != NULL) {
        sp = row;
        for (i = 0; i < row_width; i++, sp += 2) {
          png_uint_16 a = *(sp + 1);
          if (a == 0xff) {
            *sp = gamma_table[*sp];
          }
          else if (a == 0) {
            *sp = (png_byte)png_ptr->background.gray;
          }
          else {
            png_byte v, w;
            v = gamma_to_1[*sp];
            {
              png_uint_16 temp =
                  (png_uint_16)((png_uint_16)(v) * (png_uint_16)(a) +
                                (png_uint_16)(png_ptr->background_1.gray) *
                                    (png_uint_16)(255 - (png_uint_16)(a)) +
                                128);
              (w) = (png_byte)(((temp + (temp >> 8)) >> 8) & 0xff);
            };
            if (optimize == 0) {
              w = gamma_from_1[w];
            }
            *sp = w;
          }
        }
      }
      else {
        sp = row;
        for (i = 0; i < row_width; i++, sp += 2) {
          png_byte a = *(sp + 1);
          if (a == 0) {
            *sp = (png_byte)png_ptr->background.gray;
          }
          else if (a < 0xff) {
            png_uint_16 temp =
                (png_uint_16)((png_uint_16)(*sp) * (png_uint_16)(a) +
                              (png_uint_16)(png_ptr->background.gray) *
                                  (png_uint_16)(255 - (png_uint_16)(a)) +
                              128);
            (*sp) = (png_byte)(((temp + (temp >> 8)) >> 8) & 0xff);
          };
        }
      }
    }
    else {
      if (gamma_16 != NULL && gamma_16_from_1 != NULL &&
          gamma_16_to_1 != NULL) {
        sp = row;
        for (i = 0; i < row_width; i++, sp += 4) {
          png_uint_16 a = (png_uint_16)(((*(sp + 2)) << 8) + *(sp + 3));
          if (a == (png_uint_16)0xffff) {
            png_uint_16 v;
            v = gamma_16[*(sp + 1) >> gamma_shift][*sp];
            *sp = (png_byte)((v >> 8) & 0xff);
            *(sp + 1) = (png_byte)(v & 0xff);
          }
          else if (a == 0) {
            *sp = (png_byte)((png_ptr->background.gray >> 8) & 0xff);
            *(sp + 1) = (png_byte)(png_ptr->background.gray & 0xff);
          }
          else {
            png_uint_16 g, v, w;
            g = gamma_16_to_1[*(sp + 1) >> gamma_shift][*sp];
            {
              png_uint_32 temp =
                  (png_uint_32)((png_uint_32)(g) * (png_uint_32)(a) +
                                (png_uint_32)(png_ptr->background_1.gray) *
                                    (65535 - (png_uint_32)(a)) +
                                32768);
              (v) = (png_uint_16)(0xffff & ((temp + (temp >> 16)) >> 16));
            };
            if (optimize != 0) {
              w = v;
            }
            else {
              w = gamma_16_from_1[(v & 0xff) >> gamma_shift][v >> 8];
            }
            *sp = (png_byte)((w >> 8) & 0xff);
            *(sp + 1) = (png_byte)(w & 0xff);
          }
        }
      }
      else {
        sp = row;
        for (i = 0; i < row_width; i++, sp += 4) {
          png_uint_16 a = (png_uint_16)(((*(sp + 2)) << 8) + *(sp + 3));
          if (a == 0) {
            *sp = (png_byte)((png_ptr->background.gray >> 8) & 0xff);
            *(sp + 1) = (png_byte)(png_ptr->background.gray & 0xff);
          }
          else if (a < 0xffff) {
            png_uint_16 g, v;
            g = (png_uint_16)(((*sp) << 8) + *(sp + 1));
            {
              png_uint_32 temp =
                  (png_uint_32)((png_uint_32)(g) * (png_uint_32)(a) +
                                (png_uint_32)(png_ptr->background.gray) *
                                    (65535 - (png_uint_32)(a)) +
                                32768);
              (v) = (png_uint_16)(0xffff & ((temp + (temp >> 16)) >> 16));
            };
            *sp = (png_byte)((v >> 8) & 0xff);
            *(sp + 1) = (png_byte)(v & 0xff);
          }
        }
      }
    }
    break;
  }
  case PNG_COLOR_TYPE_RGB_ALPHA: {
    if (row_info->bit_depth == 8) {
      if (gamma_to_1 != NULL && gamma_from_1 != NULL && gamma_table != NULL) {
        sp = row;
        for (i = 0; i < row_width; i++, sp += 4) {
          png_byte a = *(sp + 3);
          if (a == 0xff) {
            *sp = gamma_table[*sp];
            *(sp + 1) = gamma_table[*(sp + 1)];
            *(sp + 2) = gamma_table[*(sp + 2)];
          }
          else if (a == 0) {
            *sp = (png_byte)png_ptr->background.red;
            *(sp + 1) = (png_byte)png_ptr->background.green;
            *(sp + 2) = (png_byte)png_ptr->background.blue;
          }
          else {
            png_byte v, w;
            v = gamma_to_1[*sp];
            {
              png_uint_16 temp =
                  (png_uint_16)((png_uint_16)(v) * (png_uint_16)(a) +
                                (png_uint_16)(png_ptr->background_1.red) *
                                    (png_uint_16)(255 - (png_uint_16)(a)) +
                                128);
              (w) = (png_byte)(((temp + (temp >> 8)) >> 8) & 0xff);
            };
            if (optimize == 0) {
              w = gamma_from_1[w];
            }
            *sp = w;
            v = gamma_to_1[*(sp + 1)];
            {
              png_uint_16 temp =
                  (png_uint_16)((png_uint_16)(v) * (png_uint_16)(a) +
                                (png_uint_16)(png_ptr->background_1.green) *
                                    (png_uint_16)(255 - (png_uint_16)(a)) +
                                128);
              (w) = (png_byte)(((temp + (temp >> 8)) >> 8) & 0xff);
            };
            if (optimize == 0) {
              w = gamma_from_1[w];
            }
            *(sp + 1) = w;
            v = gamma_to_1[*(sp + 2)];
            {
              png_uint_16 temp =
                  (png_uint_16)((png_uint_16)(v) * (png_uint_16)(a) +
                                (png_uint_16)(png_ptr->background_1.blue) *
                                    (png_uint_16)(255 - (png_uint_16)(a)) +
                                128);
              (w) = (png_byte)(((temp + (temp >> 8)) >> 8) & 0xff);
            };
            if (optimize == 0) {
              w = gamma_from_1[w];
            }
            *(sp + 2) = w;
          }
        }
      }
      else {
        sp = row;
        for (i = 0; i < row_width; i++, sp += 4) {
          png_byte a = *(sp + 3);
          if (a == 0) {
            *sp = (png_byte)png_ptr->background.red;
            *(sp + 1) = (png_byte)png_ptr->background.green;
            *(sp + 2) = (png_byte)png_ptr->background.blue;
          }
          else if (a < 0xff) {
            {
              png_uint_16 temp =
                  (png_uint_16)((png_uint_16)(*sp) * (png_uint_16)(a) +
                                (png_uint_16)(png_ptr->background.red) *
                                    (png_uint_16)(255 - (png_uint_16)(a)) +
                                128);
              (*sp) = (png_byte)(((temp + (temp >> 8)) >> 8) & 0xff);
            };
            {
              png_uint_16 temp =
                  (png_uint_16)((png_uint_16)(*(sp + 1)) * (png_uint_16)(a) +
                                (png_uint_16)(png_ptr->background.green) *
                                    (png_uint_16)(255 - (png_uint_16)(a)) +
                                128);
              (*(sp + 1)) = (png_byte)(((temp + (temp >> 8)) >> 8) & 0xff);
            };
            {
              png_uint_16 temp =
                  (png_uint_16)((png_uint_16)(*(sp + 2)) * (png_uint_16)(a) +
                                (png_uint_16)(png_ptr->background.blue) *
                                    (png_uint_16)(255 - (png_uint_16)(a)) +
                                128);
              (*(sp + 2)) = (png_byte)(((temp + (temp >> 8)) >> 8) & 0xff);
            };
          }
        }
      }
    }
    else {
      if (gamma_16 != NULL && gamma_16_from_1 != NULL &&
          gamma_16_to_1 != NULL) {
        sp = row;
        for (i = 0; i < row_width; i++, sp += 8) {
          png_uint_16 a = (png_uint_16)(((png_uint_16)(*(sp + 6)) << 8) +
                                        (png_uint_16)(*(sp + 7)));
          if (a == (png_uint_16)0xffff) {
            png_uint_16 v;
            v = gamma_16[*(sp + 1) >> gamma_shift][*sp];
            *sp = (png_byte)((v >> 8) & 0xff);
            *(sp + 1) = (png_byte)(v & 0xff);
            v = gamma_16[*(sp + 3) >> gamma_shift][*(sp + 2)];
            *(sp + 2) = (png_byte)((v >> 8) & 0xff);
            *(sp + 3) = (png_byte)(v & 0xff);
            v = gamma_16[*(sp + 5) >> gamma_shift][*(sp + 4)];
            *(sp + 4) = (png_byte)((v >> 8) & 0xff);
            *(sp + 5) = (png_byte)(v & 0xff);
          }
          else if (a == 0) {
            *sp = (png_byte)((png_ptr->background.red >> 8) & 0xff);
            *(sp + 1) = (png_byte)(png_ptr->background.red & 0xff);
            *(sp + 2) = (png_byte)((png_ptr->background.green >> 8) & 0xff);
            *(sp + 3) = (png_byte)(png_ptr->background.green & 0xff);
            *(sp + 4) = (png_byte)((png_ptr->background.blue >> 8) & 0xff);
            *(sp + 5) = (png_byte)(png_ptr->background.blue & 0xff);
          }
          else {
            png_uint_16 v, w;
            v = gamma_16_to_1[*(sp + 1) >> gamma_shift][*sp];
            {
              png_uint_32 temp =
                  (png_uint_32)((png_uint_32)(v) * (png_uint_32)(a) +
                                (png_uint_32)(png_ptr->background_1.red) *
                                    (65535 - (png_uint_32)(a)) +
                                32768);
              (w) = (png_uint_16)(0xffff & ((temp + (temp >> 16)) >> 16));
            };
            if (optimize == 0) {
              w = gamma_16_from_1[((w & 0xff) >> gamma_shift)][w >> 8];
            }
            *sp = (png_byte)((w >> 8) & 0xff);
            *(sp + 1) = (png_byte)(w & 0xff);
            v = gamma_16_to_1[*(sp + 3) >> gamma_shift][*(sp + 2)];
            {
              png_uint_32 temp =
                  (png_uint_32)((png_uint_32)(v) * (png_uint_32)(a) +
                                (png_uint_32)(png_ptr->background_1.green) *
                                    (65535 - (png_uint_32)(a)) +
                                32768);
              (w) = (png_uint_16)(0xffff & ((temp + (temp >> 16)) >> 16));
            };
            if (optimize == 0) {
              w = gamma_16_from_1[((w & 0xff) >> gamma_shift)][w >> 8];
            }
            *(sp + 2) = (png_byte)((w >> 8) & 0xff);
            *(sp + 3) = (png_byte)(w & 0xff);
            v = gamma_16_to_1[*(sp + 5) >> gamma_shift][*(sp + 4)];
            {
              png_uint_32 temp =
                  (png_uint_32)((png_uint_32)(v) * (png_uint_32)(a) +
                                (png_uint_32)(png_ptr->background_1.blue) *
                                    (65535 - (png_uint_32)(a)) +
                                32768);
              (w) = (png_uint_16)(0xffff & ((temp + (temp >> 16)) >> 16));
            };
            if (optimize == 0) {
              w = gamma_16_from_1[((w & 0xff) >> gamma_shift)][w >> 8];
            }
            *(sp + 4) = (png_byte)((w >> 8) & 0xff);
            *(sp + 5) = (png_byte)(w & 0xff);
          }
        }
      }
      else {
        sp = row;
        for (i = 0; i < row_width; i++, sp += 8) {
          png_uint_16 a = (png_uint_16)(((png_uint_16)(*(sp + 6)) << 8) +
                                        (png_uint_16)(*(sp + 7)));
          if (a == 0) {
            *sp = (png_byte)((png_ptr->background.red >> 8) & 0xff);
            *(sp + 1) = (png_byte)(png_ptr->background.red & 0xff);
            *(sp + 2) = (png_byte)((png_ptr->background.green >> 8) & 0xff);
            *(sp + 3) = (png_byte)(png_ptr->background.green & 0xff);
            *(sp + 4) = (png_byte)((png_ptr->background.blue >> 8) & 0xff);
            *(sp + 5) = (png_byte)(png_ptr->background.blue & 0xff);
          }
          else if (a < 0xffff) {
            png_uint_16 v;
            png_uint_16 r = (png_uint_16)(((*sp) << 8) + *(sp + 1));
            png_uint_16 g = (png_uint_16)(((*(sp + 2)) << 8) + *(sp + 3));
            png_uint_16 b = (png_uint_16)(((*(sp + 4)) << 8) + *(sp + 5));
            {
              png_uint_32 temp =
                  (png_uint_32)((png_uint_32)(r) * (png_uint_32)(a) +
                                (png_uint_32)(png_ptr->background.red) *
                                    (65535 - (png_uint_32)(a)) +
                                32768);
              (v) = (png_uint_16)(0xffff & ((temp + (temp >> 16)) >> 16));
            };
            *sp = (png_byte)((v >> 8) & 0xff);
            *(sp + 1) = (png_byte)(v & 0xff);
            {
              png_uint_32 temp =
                  (png_uint_32)((png_uint_32)(g) * (png_uint_32)(a) +
                                (png_uint_32)(png_ptr->background.green) *
                                    (65535 - (png_uint_32)(a)) +
                                32768);
              (v) = (png_uint_16)(0xffff & ((temp + (temp >> 16)) >> 16));
            };
            *(sp + 2) = (png_byte)((v >> 8) & 0xff);
            *(sp + 3) = (png_byte)(v & 0xff);
            {
              png_uint_32 temp =
                  (png_uint_32)((png_uint_32)(b) * (png_uint_32)(a) +
                                (png_uint_32)(png_ptr->background.blue) *
                                    (65535 - (png_uint_32)(a)) +
                                32768);
              (v) = (png_uint_16)(0xffff & ((temp + (temp >> 16)) >> 16));
            };
            *(sp + 4) = (png_byte)((v >> 8) & 0xff);
            *(sp + 5) = (png_byte)(v & 0xff);
          }
        }
      }
    }
    break;
  }
  default:
    break;
  }
}
static void png_do_gamma(png_row_infop row_info, png_bytep row,
                         png_structrp png_ptr)
{
  png_const_bytep gamma_table = png_ptr->gamma_table;
  png_const_uint_16pp gamma_16_table = png_ptr->gamma_16_table;
  int gamma_shift = png_ptr->gamma_shift;
  png_bytep sp;
  png_uint_32 i;
  png_uint_32 row_width = row_info->width;

  if (((row_info->bit_depth <= 8 && gamma_table != NULL) ||
       (row_info->bit_depth == 16 && gamma_16_table != NULL))) {
    switch (row_info->color_type) {
    case PNG_COLOR_TYPE_RGB: {
      if (row_info->bit_depth == 8) {
        sp = row;
        for (i = 0; i < row_width; i++) {
          *sp = gamma_table[*sp];
          sp++;
          *sp = gamma_table[*sp];
          sp++;
          *sp = gamma_table[*sp];
          sp++;
        }
      }
      else {
        sp = row;
        for (i = 0; i < row_width; i++) {
          png_uint_16 v;
          v = gamma_16_table[*(sp + 1) >> gamma_shift][*sp];
          *sp = (png_byte)((v >> 8) & 0xff);
          *(sp + 1) = (png_byte)(v & 0xff);
          sp += 2;
          v = gamma_16_table[*(sp + 1) >> gamma_shift][*sp];
          *sp = (png_byte)((v >> 8) & 0xff);
          *(sp + 1) = (png_byte)(v & 0xff);
          sp += 2;
          v = gamma_16_table[*(sp + 1) >> gamma_shift][*sp];
          *sp = (png_byte)((v >> 8) & 0xff);
          *(sp + 1) = (png_byte)(v & 0xff);
          sp += 2;
        }
      }
      break;
    }
    case PNG_COLOR_TYPE_RGB_ALPHA: {
      if (row_info->bit_depth == 8) {
        sp = row;
        for (i = 0; i < row_width; i++) {
          *sp = gamma_table[*sp];
          sp++;
          *sp = gamma_table[*sp];
          sp++;
          *sp = gamma_table[*sp];
          sp++;
          sp++;
        }
      }
      else {
        sp = row;
        for (i = 0; i < row_width; i++) {
          png_uint_16 v = gamma_16_table[*(sp + 1) >> gamma_shift][*sp];
          *sp = (png_byte)((v >> 8) & 0xff);
          *(sp + 1) = (png_byte)(v & 0xff);
          sp += 2;
          v = gamma_16_table[*(sp + 1) >> gamma_shift][*sp];
          *sp = (png_byte)((v >> 8) & 0xff);
          *(sp + 1) = (png_byte)(v & 0xff);
          sp += 2;
          v = gamma_16_table[*(sp + 1) >> gamma_shift][*sp];
          *sp = (png_byte)((v >> 8) & 0xff);
          *(sp + 1) = (png_byte)(v & 0xff);
          sp += 4;
        }
      }
      break;
    }
    case PNG_COLOR_TYPE_GRAY_ALPHA: {
      if (row_info->bit_depth == 8) {
        sp = row;
        for (i = 0; i < row_width; i++) {
          *sp = gamma_table[*sp];
          sp += 2;
        }
      }
      else {
        sp = row;
        for (i = 0; i < row_width; i++) {
          png_uint_16 v = gamma_16_table[*(sp + 1) >> gamma_shift][*sp];
          *sp = (png_byte)((v >> 8) & 0xff);
          *(sp + 1) = (png_byte)(v & 0xff);
          sp += 4;
        }
      }
      break;
    }
    case PNG_COLOR_TYPE_GRAY: {
      if (row_info->bit_depth == 2) {
        sp = row;
        for (i = 0; i < row_width; i += 4) {
          int a = *sp & 0xc0;
          int b = *sp & 0x30;
          int c = *sp & 0x0c;
          int d = *sp & 0x03;
          *sp = (png_byte)(((((int)gamma_table[a | (a >> 2) | (a >> 4) |
                                               (a >> 6)])) &
                            0xc0) |
                           ((((int)gamma_table[(b << 2) | b | (b >> 2) |
                                               (b >> 4)]) >>
                             2) &
                            0x30) |
                           ((((int)gamma_table[(c << 4) | (c << 2) | c |
                                               (c >> 2)]) >>
                             4) &
                            0x0c) |
                           ((((int)gamma_table[(d << 6) | (d << 4) | (d << 2) |
                                               d]) >>
                             6)));
          sp++;
        }
      }
      if (row_info->bit_depth == 4) {
        sp = row;
        for (i = 0; i < row_width; i += 2) {
          int msb = *sp & 0xf0;
          int lsb = *sp & 0x0f;
          *sp = (png_byte)((((int)gamma_table[msb | (msb >> 4)]) & 0xf0) |
                           (((int)gamma_table[(lsb << 4) | lsb]) >> 4));
          sp++;
        }
      }
      else if (row_info->bit_depth == 8) {
        sp = row;
        for (i = 0; i < row_width; i++) {
          *sp = gamma_table[*sp];
          sp++;
        }
      }
      else if (row_info->bit_depth == 16) {
        sp = row;
        for (i = 0; i < row_width; i++) {
          png_uint_16 v = gamma_16_table[*(sp + 1) >> gamma_shift][*sp];
          *sp = (png_byte)((v >> 8) & 0xff);
          *(sp + 1) = (png_byte)(v & 0xff);
          sp += 2;
        }
      }
      break;
    }
    default:
      break;
    }
  }
}
static void png_do_encode_alpha(png_row_infop row_info, png_bytep row,
                                png_structrp png_ptr)
{
  png_uint_32 row_width = row_info->width;

  if ((row_info->color_type & PNG_COLOR_MASK_ALPHA) != 0) {
    if (row_info->bit_depth == 8) {
      png_bytep table = png_ptr->gamma_from_1;
      if (table != NULL) {
        int step = (row_info->color_type & PNG_COLOR_MASK_COLOR) ? 4 : 2;
        row += step - 1;
        for (; row_width > 0; --row_width, row += step) {
          *row = table[*row];
        }
        return;
      }
    }
    else if (row_info->bit_depth == 16) {
      png_uint_16pp table = png_ptr->gamma_16_from_1;
      int gamma_shift = png_ptr->gamma_shift;
      if (table != NULL) {
        int step = (row_info->color_type & PNG_COLOR_MASK_COLOR) ? 8 : 4;
        row += step - 2;
        for (; row_width > 0; --row_width, row += step) {
          png_uint_16 v;
          v = table[*(row + 1) >> gamma_shift][*row];
          *row = (png_byte)((v >> 8) & 0xff);
          *(row + 1) = (png_byte)(v & 0xff);
        }
        return;
      }
    }
  }
  nndetailImagePng_png_warning(png_ptr, "png_do_encode_alpha: unexpected call");
}
static void png_do_expand_palette(png_structrp png_ptr, png_row_infop row_info,
                                  png_bytep row, png_const_colorp palette,
                                  png_const_bytep trans_alpha, int num_trans)
{
  int shift, value;
  png_bytep sp, dp;
  png_uint_32 i;
  png_uint_32 row_width = row_info->width;

  if (row_info->color_type == PNG_COLOR_TYPE_PALETTE) {
    if (row_info->bit_depth < 8) {
      switch (row_info->bit_depth) {
      case 1: {
        sp = row + (size_t)((row_width - 1) >> 3);
        dp = row + (size_t)row_width - 1;
        shift = 7 - (int)((row_width + 7) & 0x07);
        for (i = 0; i < row_width; i++) {
          if ((*sp >> shift) & 0x01) {
            *dp = 1;
          }
          else {
            *dp = 0;
          }
          if (shift == 7) {
            shift = 0;
            sp--;
          }
          else {
            shift++;
          }
          dp--;
        }
        break;
      }
      case 2: {
        sp = row + (size_t)((row_width - 1) >> 2);
        dp = row + (size_t)row_width - 1;
        shift = (int)((3 - ((row_width + 3) & 0x03)) << 1);
        for (i = 0; i < row_width; i++) {
          value = (*sp >> shift) & 0x03;
          *dp = (png_byte)value;
          if (shift == 6) {
            shift = 0;
            sp--;
          }
          else {
            shift += 2;
          }
          dp--;
        }
        break;
      }
      case 4: {
        sp = row + (size_t)((row_width - 1) >> 1);
        dp = row + (size_t)row_width - 1;
        shift = (int)((row_width & 0x01) << 2);
        for (i = 0; i < row_width; i++) {
          value = (*sp >> shift) & 0x0f;
          *dp = (png_byte)value;
          if (shift == 4) {
            shift = 0;
            sp--;
          }
          else {
            shift += 4;
          }
          dp--;
        }
        break;
      }
      default:
        break;
      }
      row_info->bit_depth = 8;
      row_info->pixel_depth = 8;
      row_info->row_bytes = row_width;
    }
    if (row_info->bit_depth == 8) {
      {
        if (num_trans > 0) {
          sp = row + (size_t)row_width - 1;
          dp = row + ((size_t)row_width << 2) - 1;
          i = 0;
          if (png_ptr->riffled_palette != NULL) {
            i = nndetailImagePng_png_do_expand_palette_rgba8_neon(
                png_ptr, row_info, row, &sp, &dp);
          }
          for (; i < row_width; i++) {
            if ((int)(*sp) >= num_trans) {
              *dp-- = 0xff;
            }
            else {
              *dp-- = trans_alpha[*sp];
            }
            *dp-- = palette[*sp].blue;
            *dp-- = palette[*sp].green;
            *dp-- = palette[*sp].red;
            sp--;
          }
          row_info->bit_depth = 8;
          row_info->pixel_depth = 32;
          row_info->row_bytes = row_width * 4;
          row_info->color_type = 6;
          row_info->channels = 4;
        }
        else {
          sp = row + (size_t)row_width - 1;
          dp = row + (size_t)(row_width * 3) - 1;
          i = 0;
          i = nndetailImagePng_png_do_expand_palette_rgb8_neon(
              png_ptr, row_info, row, &sp, &dp);
          for (; i < row_width; i++) {
            *dp-- = palette[*sp].blue;
            *dp-- = palette[*sp].green;
            *dp-- = palette[*sp].red;
            sp--;
          }
          row_info->bit_depth = 8;
          row_info->pixel_depth = 24;
          row_info->row_bytes = row_width * 3;
          row_info->color_type = 2;
          row_info->channels = 3;
        }
      }
    }
  }
}
static void png_do_expand(png_row_infop row_info, png_bytep row,
                          png_const_color_16p trans_color)
{
  int shift, value;
  png_bytep sp, dp;
  png_uint_32 i;
  png_uint_32 row_width = row_info->width;

  if (row_info->color_type == PNG_COLOR_TYPE_GRAY) {
    unsigned int gray = trans_color != NULL ? trans_color->gray : 0;
    if (row_info->bit_depth < 8) {
      switch (row_info->bit_depth) {
      case 1: {
        gray = (gray & 0x01) * 0xff;
        sp = row + (size_t)((row_width - 1) >> 3);
        dp = row + (size_t)row_width - 1;
        shift = 7 - (int)((row_width + 7) & 0x07);
        for (i = 0; i < row_width; i++) {
          if ((*sp >> shift) & 0x01) {
            *dp = 0xff;
          }
          else {
            *dp = 0;
          }
          if (shift == 7) {
            shift = 0;
            sp--;
          }
          else {
            shift++;
          }
          dp--;
        }
        break;
      }
      case 2: {
        gray = (gray & 0x03) * 0x55;
        sp = row + (size_t)((row_width - 1) >> 2);
        dp = row + (size_t)row_width - 1;
        shift = (int)((3 - ((row_width + 3) & 0x03)) << 1);
        for (i = 0; i < row_width; i++) {
          value = (*sp >> shift) & 0x03;
          *dp = (png_byte)(value | (value << 2) | (value << 4) | (value << 6));
          if (shift == 6) {
            shift = 0;
            sp--;
          }
          else {
            shift += 2;
          }
          dp--;
        }
        break;
      }
      case 4: {
        gray = (gray & 0x0f) * 0x11;
        sp = row + (size_t)((row_width - 1) >> 1);
        dp = row + (size_t)row_width - 1;
        shift = (int)((1 - ((row_width + 1) & 0x01)) << 2);
        for (i = 0; i < row_width; i++) {
          value = (*sp >> shift) & 0x0f;
          *dp = (png_byte)(value | (value << 4));
          if (shift == 4) {
            shift = 0;
            sp--;
          }
          else {
            shift = 4;
          }
          dp--;
        }
        break;
      }
      default:
        break;
      }
      row_info->bit_depth = 8;
      row_info->pixel_depth = 8;
      row_info->row_bytes = row_width;
    }
    if (trans_color != NULL) {
      if (row_info->bit_depth == 8) {
        gray = gray & 0xff;
        sp = row + (size_t)row_width - 1;
        dp = row + ((size_t)row_width << 1) - 1;
        for (i = 0; i < row_width; i++) {
          if ((*sp & 0xffU) == gray) {
            *dp-- = 0;
          }
          else {
            *dp-- = 0xff;
          }
          *dp-- = *sp--;
        }
      }
      else if (row_info->bit_depth == 16) {
        unsigned int gray_high = (gray >> 8) & 0xff;
        unsigned int gray_low = gray & 0xff;
        sp = row + row_info->row_bytes - 1;
        dp = row + (row_info->row_bytes << 1) - 1;
        for (i = 0; i < row_width; i++) {
          if ((*(sp - 1) & 0xffU) == gray_high && (*(sp) & 0xffU) == gray_low) {
            *dp-- = 0;
            *dp-- = 0;
          }
          else {
            *dp-- = 0xff;
            *dp-- = 0xff;
          }
          *dp-- = *sp--;
          *dp-- = *sp--;
        }
      }
      row_info->color_type = PNG_COLOR_TYPE_GRAY_ALPHA;
      row_info->channels = 2;
      row_info->pixel_depth = (png_byte)(row_info->bit_depth << 1);
      row_info->row_bytes =
          ((row_info->pixel_depth) >= 8
               ? ((size_t)(row_width) *
                  (((size_t)(row_info->pixel_depth)) >> 3))
               : ((((size_t)(row_width) * ((size_t)(row_info->pixel_depth))) +
                   7) >>
                  3));
    }
  }
  else if (row_info->color_type == PNG_COLOR_TYPE_RGB && trans_color != NULL) {
    if (row_info->bit_depth == 8) {
      png_byte red = (png_byte)(trans_color->red & 0xff);
      png_byte green = (png_byte)(trans_color->green & 0xff);
      png_byte blue = (png_byte)(trans_color->blue & 0xff);
      sp = row + (size_t)row_info->row_bytes - 1;
      dp = row + ((size_t)row_width << 2) - 1;
      for (i = 0; i < row_width; i++) {
        if (*(sp - 2) == red && *(sp - 1) == green && *(sp) == blue) {
          *dp-- = 0;
        }
        else {
          *dp-- = 0xff;
        }
        *dp-- = *sp--;
        *dp-- = *sp--;
        *dp-- = *sp--;
      }
    }
    else if (row_info->bit_depth == 16) {
      png_byte red_high = (png_byte)((trans_color->red >> 8) & 0xff);
      png_byte green_high = (png_byte)((trans_color->green >> 8) & 0xff);
      png_byte blue_high = (png_byte)((trans_color->blue >> 8) & 0xff);
      png_byte red_low = (png_byte)(trans_color->red & 0xff);
      png_byte green_low = (png_byte)(trans_color->green & 0xff);
      png_byte blue_low = (png_byte)(trans_color->blue & 0xff);
      sp = row + row_info->row_bytes - 1;
      dp = row + ((size_t)row_width << 3) - 1;
      for (i = 0; i < row_width; i++) {
        if (*(sp - 5) == red_high && *(sp - 4) == red_low &&
            *(sp - 3) == green_high && *(sp - 2) == green_low &&
            *(sp - 1) == blue_high && *(sp) == blue_low) {
          *dp-- = 0;
          *dp-- = 0;
        }
        else {
          *dp-- = 0xff;
          *dp-- = 0xff;
        }
        *dp-- = *sp--;
        *dp-- = *sp--;
        *dp-- = *sp--;
        *dp-- = *sp--;
        *dp-- = *sp--;
        *dp-- = *sp--;
      }
    }
    row_info->color_type = PNG_COLOR_TYPE_RGB_ALPHA;
    row_info->channels = 4;
    row_info->pixel_depth = (png_byte)(row_info->bit_depth << 2);
    row_info->row_bytes =
        ((row_info->pixel_depth) >= 8
             ? ((size_t)(row_width) * (((size_t)(row_info->pixel_depth)) >> 3))
             : ((((size_t)(row_width) * ((size_t)(row_info->pixel_depth))) +
                 7) >>
                3));
  }
}
static void png_do_expand_16(png_row_infop row_info, png_bytep row)
{
  if (row_info->bit_depth == 8 &&
      row_info->color_type != PNG_COLOR_TYPE_PALETTE) {
    png_byte *sp = row + row_info->row_bytes;
    png_byte *dp = sp + row_info->row_bytes;
    while (dp > sp) {
      dp[-2] = dp[-1] = *--sp;
      dp -= 2;
    }
    row_info->row_bytes *= 2;
    row_info->bit_depth = 16;
    row_info->pixel_depth = (png_byte)(row_info->channels * 16);
  }
}
static void png_do_quantize(png_row_infop row_info, png_bytep row,
                            png_const_bytep palette_lookup,
                            png_const_bytep quantize_lookup)
{
  png_bytep sp, dp;
  png_uint_32 i;
  png_uint_32 row_width = row_info->width;

  if (row_info->bit_depth == 8) {
    if (row_info->color_type == PNG_COLOR_TYPE_RGB && palette_lookup) {
      int r, g, b, p;
      sp = row;
      dp = row;
      for (i = 0; i < row_width; i++) {
        r = *sp++;
        g = *sp++;
        b = *sp++;
        p = (((r >> (8 - 5)) & ((1 << 5) - 1)) << (5 + 5)) |
            (((g >> (8 - 5)) & ((1 << 5) - 1)) << (5)) |
            ((b >> (8 - 5)) & ((1 << 5) - 1));
        *dp++ = palette_lookup[p];
      }
      row_info->color_type = PNG_COLOR_TYPE_PALETTE;
      row_info->channels = 1;
      row_info->pixel_depth = row_info->bit_depth;
      row_info->row_bytes =
          ((row_info->pixel_depth) >= 8
               ? ((size_t)(row_width) *
                  (((size_t)(row_info->pixel_depth)) >> 3))
               : ((((size_t)(row_width) * ((size_t)(row_info->pixel_depth))) +
                   7) >>
                  3));
    }
    else if (row_info->color_type == PNG_COLOR_TYPE_RGB_ALPHA &&
             palette_lookup != NULL) {
      int r, g, b, p;
      sp = row;
      dp = row;
      for (i = 0; i < row_width; i++) {
        r = *sp++;
        g = *sp++;
        b = *sp++;
        sp++;
        p = (((r >> (8 - 5)) & ((1 << 5) - 1)) << (5 + 5)) |
            (((g >> (8 - 5)) & ((1 << 5) - 1)) << (5)) |
            ((b >> (8 - 5)) & ((1 << 5) - 1));
        *dp++ = palette_lookup[p];
      }
      row_info->color_type = PNG_COLOR_TYPE_PALETTE;
      row_info->channels = 1;
      row_info->pixel_depth = row_info->bit_depth;
      row_info->row_bytes =
          ((row_info->pixel_depth) >= 8
               ? ((size_t)(row_width) *
                  (((size_t)(row_info->pixel_depth)) >> 3))
               : ((((size_t)(row_width) * ((size_t)(row_info->pixel_depth))) +
                   7) >>
                  3));
    }
    else if (row_info->color_type == PNG_COLOR_TYPE_PALETTE &&
             quantize_lookup) {
      sp = row;
      for (i = 0; i < row_width; i++, sp++) {
        *sp = quantize_lookup[*sp];
      }
    }
  }
}
void nndetailImagePng_png_do_read_transformations(png_structrp png_ptr,
                                                  png_row_infop row_info)
{

  if (png_ptr->row_buf == NULL) {
    nndetailImagePng_png_error(png_ptr, "NULL row buffer");
  }
  if ((png_ptr->flags & PNG_FLAG_DETECT_UNINITIALIZED) != 0 &&
      (png_ptr->flags & PNG_FLAG_ROW_INIT) == 0) {
    nndetailImagePng_png_error(png_ptr, "Uninitialized row");
  }
  if ((png_ptr->transformations & PNG_EXPAND) != 0) {
    if (row_info->color_type == PNG_COLOR_TYPE_PALETTE) {
      if ((png_ptr->num_trans > 0) && (png_ptr->bit_depth == 8)) {
        if (png_ptr->riffled_palette == NULL) {
          png_ptr->riffled_palette =
              (png_bytep)nndetailImagePng_png_malloc(png_ptr, 256 * 4);
          nndetailImagePng_png_riffle_palette_neon(png_ptr);
        }
      }
      png_do_expand_palette(png_ptr, row_info, png_ptr->row_buf + 1,
                            png_ptr->palette, png_ptr->trans_alpha,
                            png_ptr->num_trans);
    }
    else {
      if (png_ptr->num_trans != 0 &&
          (png_ptr->transformations & PNG_EXPAND_tRNS) != 0) {
        png_do_expand(row_info, png_ptr->row_buf + 1, &(png_ptr->trans_color));
      }
      else {
        png_do_expand(row_info, png_ptr->row_buf + 1, NULL);
      }
    }
  }
  if ((png_ptr->transformations & PNG_STRIP_ALPHA) != 0 &&
      (png_ptr->transformations & PNG_COMPOSE) == 0 &&
      (row_info->color_type == PNG_COLOR_TYPE_RGB_ALPHA ||
       row_info->color_type == PNG_COLOR_TYPE_GRAY_ALPHA)) {
    nndetailImagePng_png_do_strip_channel(row_info, png_ptr->row_buf + 1, 0);
  }
  if ((png_ptr->transformations & PNG_RGB_TO_GRAY) != 0) {
    int rgb_error = png_do_rgb_to_gray(png_ptr, row_info, png_ptr->row_buf + 1);
    if (rgb_error != 0) {
      png_ptr->rgb_to_gray_status = 1;
      if ((png_ptr->transformations & PNG_RGB_TO_GRAY) ==
          PNG_RGB_TO_GRAY_WARN) {
        nndetailImagePng_png_warning(png_ptr,
                                     "png_do_rgb_to_gray found nongray pixel");
      }
      if ((png_ptr->transformations & PNG_RGB_TO_GRAY) == PNG_RGB_TO_GRAY_ERR) {
        nndetailImagePng_png_error(png_ptr,
                                   "png_do_rgb_to_gray found nongray pixel");
      }
    }
  }
  if ((png_ptr->transformations & PNG_GRAY_TO_RGB) != 0 &&
      (png_ptr->mode & PNG_BACKGROUND_IS_GRAY) == 0) {
    png_do_gray_to_rgb(row_info, png_ptr->row_buf + 1);
  }
  if ((png_ptr->transformations & PNG_COMPOSE) != 0) {
    png_do_compose(row_info, png_ptr->row_buf + 1, png_ptr);
  }
  if ((png_ptr->transformations & PNG_GAMMA) != 0 &&
      (png_ptr->transformations & PNG_RGB_TO_GRAY) == 0 &&
      !((png_ptr->transformations & PNG_COMPOSE) != 0 &&
        ((png_ptr->num_trans != 0) ||
         (png_ptr->color_type & PNG_COLOR_MASK_ALPHA) != 0)) &&
      (png_ptr->color_type != PNG_COLOR_TYPE_PALETTE)) {
    png_do_gamma(row_info, png_ptr->row_buf + 1, png_ptr);
  }
  if ((png_ptr->transformations & PNG_STRIP_ALPHA) != 0 &&
      (png_ptr->transformations & PNG_COMPOSE) != 0 &&
      (row_info->color_type == PNG_COLOR_TYPE_RGB_ALPHA ||
       row_info->color_type == PNG_COLOR_TYPE_GRAY_ALPHA)) {
    nndetailImagePng_png_do_strip_channel(row_info, png_ptr->row_buf + 1, 0);
  }
  if ((png_ptr->transformations & PNG_ENCODE_ALPHA) != 0 &&
      (row_info->color_type & PNG_COLOR_MASK_ALPHA) != 0) {
    png_do_encode_alpha(row_info, png_ptr->row_buf + 1, png_ptr);
  }
  if ((png_ptr->transformations & PNG_SCALE_16_TO_8) != 0) {
    png_do_scale_16_to_8(row_info, png_ptr->row_buf + 1);
  }
  if ((png_ptr->transformations & PNG_16_TO_8) != 0) {
    png_do_chop(row_info, png_ptr->row_buf + 1);
  }
  if ((png_ptr->transformations & PNG_QUANTIZE) != 0) {
    png_do_quantize(row_info, png_ptr->row_buf + 1, png_ptr->palette_lookup,
                    png_ptr->quantize_index);
    if (row_info->row_bytes == 0) {
      nndetailImagePng_png_error(png_ptr,
                                 "png_do_quantize returned rowbytes=0");
    }
  }
  if ((png_ptr->transformations & PNG_EXPAND_16) != 0) {
    png_do_expand_16(row_info, png_ptr->row_buf + 1);
  }
  if ((png_ptr->transformations & PNG_GRAY_TO_RGB) != 0 &&
      (png_ptr->mode & PNG_BACKGROUND_IS_GRAY) != 0) {
    png_do_gray_to_rgb(row_info, png_ptr->row_buf + 1);
  }
  if ((png_ptr->transformations & PNG_INVERT_MONO) != 0) {
    nndetailImagePng_png_do_invert(row_info, png_ptr->row_buf + 1);
  }
  if ((png_ptr->transformations & PNG_INVERT_ALPHA) != 0) {
    png_do_read_invert_alpha(row_info, png_ptr->row_buf + 1);
  }
  if ((png_ptr->transformations & PNG_SHIFT) != 0) {
    png_do_unshift(row_info, png_ptr->row_buf + 1, &(png_ptr->shift));
  }
  if ((png_ptr->transformations & PNG_PACK) != 0) {
    png_do_unpack(row_info, png_ptr->row_buf + 1);
  }
  if (row_info->color_type == PNG_COLOR_TYPE_PALETTE &&
      png_ptr->num_palette_max >= 0) {
    nndetailImagePng_png_do_check_palette_indexes(png_ptr, row_info);
  }
  if ((png_ptr->transformations & PNG_BGR) != 0) {
    nndetailImagePng_png_do_bgr(row_info, png_ptr->row_buf + 1);
  }
  if ((png_ptr->transformations & PNG_PACKSWAP) != 0) {
    nndetailImagePng_png_do_packswap(row_info, png_ptr->row_buf + 1);
  }
  if ((png_ptr->transformations & PNG_FILLER) != 0) {
    png_do_read_filler(row_info, png_ptr->row_buf + 1,
                       (png_uint_32)png_ptr->filler, png_ptr->flags);
  }
  if ((png_ptr->transformations & PNG_SWAP_ALPHA) != 0) {
    png_do_read_swap_alpha(row_info, png_ptr->row_buf + 1);
  }
  if ((png_ptr->transformations & PNG_SWAP_BYTES) != 0) {
    nndetailImagePng_png_do_swap(row_info, png_ptr->row_buf + 1);
  }
  if ((png_ptr->transformations & PNG_USER_TRANSFORM) != 0) {
    if (png_ptr->read_user_transform_fn != NULL) {
      (*(png_ptr->read_user_transform_fn))(png_ptr, row_info,
                                           png_ptr->row_buf + 1);
    }
    if (png_ptr->user_transform_depth != 0) {
      row_info->bit_depth = png_ptr->user_transform_depth;
    }
    if (png_ptr->user_transform_channels != 0) {
      row_info->channels = png_ptr->user_transform_channels;
    }
    row_info->pixel_depth =
        (png_byte)(row_info->bit_depth * row_info->channels);
    row_info->row_bytes = ((row_info->pixel_depth) >= 8
                               ? ((size_t)(row_info->width) *
                                  (((size_t)(row_info->pixel_depth)) >> 3))
                               : ((((size_t)(row_info->width) *
                                    ((size_t)(row_info->pixel_depth))) +
                                   7) >>
                                  3));
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
