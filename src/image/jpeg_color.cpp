#include "image/jpeg_color.hpp"

namespace jpeg_color {

using JSAMPLE = uint8_t;
using JSAMPROW = uint8_t *;
using JSAMPARRAY = Rows;
using JSAMPIMAGE = Planes;
using JDIMENSION = uint32_t;
using JLONG = int64_t;
using INT16 = int16_t;
using boolean = int;
using j_decompress_ptr = Decoder *;
using j_common_ptr = Decoder *;
using jpeg_color_deconverter = Deconverter;

enum {
  JCS_UNKNOWN,
  JCS_GRAYSCALE,
  JCS_RGB,
  JCS_YCbCr,
  JCS_CMYK,
  JCS_YCCK,
  JCS_EXT_RGB,
  JCS_EXT_RGBX,
  JCS_EXT_BGR,
  JCS_EXT_BGRX,
  JCS_EXT_XBGR,
  JCS_EXT_XRGB,
  JCS_EXT_RGBA,
  JCS_EXT_BGRA,
  JCS_EXT_ABGR,
  JCS_EXT_ARGB,
  JCS_RGB565
};

extern "C" void nndetailImageJpeg_jcopy_sample_rows(Rows input, int input_row,
                                                    Rows output, int output_row,
                                                    int rows, uint32_t columns);

extern "C" void *memcpy(void *output, const void *input, size_t size);

extern "C" void nndetailImageJpeg_jcopy_sample_rows(Rows input, int input_row,
                                                    Rows output, int output_row,
                                                    int rows,
                                                    uint32_t columns) {
  if (rows < 1) {
    return;
  }
  input += input_row;
  output += output_row;
  for (int row = 0; row < rows; ++row) {
    memcpy(output[row], input[row], columns);
  }
}

int jsimd_can_ycc_rgb() asm("_Z35nndetailImageJpeg_jsimd_can_ycc_rgbv");
int jsimd_can_ycc_rgb565() asm("_Z38nndetailImageJpeg_jsimd_can_ycc_rgb565v");
void jsimd_ycc_rgb_convert(Decoder *, Planes, uint32_t, Rows, int) asm(
    "_Z39nndetailImageJpeg_jsimd_ycc_rgb_convert"
    "P22jpeg_decompress_structPPPhjS2_i");
void jsimd_ycc_rgb565_convert(Decoder *, Planes, uint32_t, Rows, int) asm(
    "_Z42nndetailImageJpeg_jsimd_ycc_rgb565_convert"
    "P22jpeg_decompress_structPPPhjS2_i");

static const int rgb_red[17] = {-1, -1, 0, -1, -1, -1, 0, 0, 2,
                                2,  3,  1, 0,  2,  3,  1, -1};
static const int rgb_green[17] = {-1, -1, 1, -1, -1, -1, 1, 1, 1,
                                  1,  2,  2, 1,  1,  2,  2, -1};
static const int rgb_blue[17] = {-1, -1, 2, -1, -1, -1, 2, 2, 0,
                                 0,  1,  3, 2,  0,  1,  3, -1};
static const int rgb_pixelsize[17] = {-1, -1, 3, -1, -1, -1, 3, 4, 3,
                                      4,  4,  4, 4,  4,  4,  4, -1};
typedef struct {
  Deconverter pub;
  int *Cr_r_tab;
  int *Cb_b_tab;
  JLONG *Cr_g_tab;
  JLONG *Cb_g_tab;
  JLONG *rgb_y_tab;
} my_color_deconverter;
typedef my_color_deconverter *my_cconvert_ptr;
inline static void ycc_rgb_convert_internal(j_decompress_ptr cinfo,
                                            JSAMPIMAGE input_buf,
                                            JDIMENSION input_row,
                                            JSAMPARRAY output_buf,
                                            int num_rows) {
  my_cconvert_ptr cconvert = (my_cconvert_ptr)cinfo->cconvert;
  int y, cb, cr;
  JSAMPROW outptr;
  JSAMPROW inptr0, inptr1, inptr2;
  JDIMENSION col;
  JDIMENSION num_cols = cinfo->output_width;
  JSAMPLE *range_limit = cinfo->sample_range_limit;
  int *Crrtab = cconvert->Cr_r_tab;
  int *Cbbtab = cconvert->Cb_b_tab;
  JLONG *Crgtab = cconvert->Cr_g_tab;
  JLONG *Cbgtab = cconvert->Cb_g_tab;
  while (--num_rows >= 0) {
    inptr0 = input_buf[0][input_row];
    inptr1 = input_buf[1][input_row];
    inptr2 = input_buf[2][input_row];
    input_row++;
    outptr = *output_buf++;
    for (col = 0; col < num_cols; col++) {
      y = static_cast<int>(inptr0[col]);
      cb = static_cast<int>(inptr1[col]);
      cr = static_cast<int>(inptr2[col]);
      outptr[0] = range_limit[y + Crrtab[cr]];
      outptr[1] = range_limit[y + ((int)((Cbgtab[cb] + Crgtab[cr]) >> (16)))];
      outptr[2] = range_limit[y + Cbbtab[cb]];
      outptr += 3;
    }
  }
}
inline static void gray_rgb_convert_internal(j_decompress_ptr cinfo,
                                             JSAMPIMAGE input_buf,
                                             JDIMENSION input_row,
                                             JSAMPARRAY output_buf,
                                             int num_rows) {
  JSAMPROW inptr, outptr;
  JDIMENSION col;
  JDIMENSION num_cols = cinfo->output_width;
  while (--num_rows >= 0) {
    inptr = input_buf[0][input_row++];
    outptr = *output_buf++;
    for (col = 0; col < num_cols; col++) {
      outptr[0] = outptr[1] = outptr[2] = inptr[col];
      outptr += 3;
    }
  }
}
inline static void rgb_rgb_convert_internal(j_decompress_ptr cinfo,
                                            JSAMPIMAGE input_buf,
                                            JDIMENSION input_row,
                                            JSAMPARRAY output_buf,
                                            int num_rows) {
  JSAMPROW inptr0, inptr1, inptr2;
  JSAMPROW outptr;
  JDIMENSION col;
  JDIMENSION num_cols = cinfo->output_width;
  while (--num_rows >= 0) {
    inptr0 = input_buf[0][input_row];
    inptr1 = input_buf[1][input_row];
    inptr2 = input_buf[2][input_row];
    input_row++;
    outptr = *output_buf++;
    for (col = 0; col < num_cols; col++) {
      outptr[0] = inptr0[col];
      outptr[1] = inptr1[col];
      outptr[2] = inptr2[col];
      outptr += 3;
    }
  }
}
inline static void ycc_extrgb_convert_internal(j_decompress_ptr cinfo,
                                               JSAMPIMAGE input_buf,
                                               JDIMENSION input_row,
                                               JSAMPARRAY output_buf,
                                               int num_rows) {
  my_cconvert_ptr cconvert = (my_cconvert_ptr)cinfo->cconvert;
  int y, cb, cr;
  JSAMPROW outptr;
  JSAMPROW inptr0, inptr1, inptr2;
  JDIMENSION col;
  JDIMENSION num_cols = cinfo->output_width;
  JSAMPLE *range_limit = cinfo->sample_range_limit;
  int *Crrtab = cconvert->Cr_r_tab;
  int *Cbbtab = cconvert->Cb_b_tab;
  JLONG *Crgtab = cconvert->Cr_g_tab;
  JLONG *Cbgtab = cconvert->Cb_g_tab;
  while (--num_rows >= 0) {
    inptr0 = input_buf[0][input_row];
    inptr1 = input_buf[1][input_row];
    inptr2 = input_buf[2][input_row];
    input_row++;
    outptr = *output_buf++;
    for (col = 0; col < num_cols; col++) {
      y = static_cast<int>(inptr0[col]);
      cb = static_cast<int>(inptr1[col]);
      cr = static_cast<int>(inptr2[col]);
      outptr[0] = range_limit[y + Crrtab[cr]];
      outptr[1] = range_limit[y + ((int)((Cbgtab[cb] + Crgtab[cr]) >> (16)))];
      outptr[2] = range_limit[y + Cbbtab[cb]];
      outptr += 3;
    }
  }
}
inline static void gray_extrgb_convert_internal(j_decompress_ptr cinfo,
                                                JSAMPIMAGE input_buf,
                                                JDIMENSION input_row,
                                                JSAMPARRAY output_buf,
                                                int num_rows) {
  JSAMPROW inptr, outptr;
  JDIMENSION col;
  JDIMENSION num_cols = cinfo->output_width;
  while (--num_rows >= 0) {
    inptr = input_buf[0][input_row++];
    outptr = *output_buf++;
    for (col = 0; col < num_cols; col++) {
      outptr[0] = outptr[1] = outptr[2] = inptr[col];
      outptr += 3;
    }
  }
}
inline static void rgb_extrgb_convert_internal(j_decompress_ptr cinfo,
                                               JSAMPIMAGE input_buf,
                                               JDIMENSION input_row,
                                               JSAMPARRAY output_buf,
                                               int num_rows) {
  JSAMPROW inptr0, inptr1, inptr2;
  JSAMPROW outptr;
  JDIMENSION col;
  JDIMENSION num_cols = cinfo->output_width;
  while (--num_rows >= 0) {
    inptr0 = input_buf[0][input_row];
    inptr1 = input_buf[1][input_row];
    inptr2 = input_buf[2][input_row];
    input_row++;
    outptr = *output_buf++;
    for (col = 0; col < num_cols; col++) {
      outptr[0] = inptr0[col];
      outptr[1] = inptr1[col];
      outptr[2] = inptr2[col];
      outptr += 3;
    }
  }
}
inline static void ycc_extrgbx_convert_internal(j_decompress_ptr cinfo,
                                                JSAMPIMAGE input_buf,
                                                JDIMENSION input_row,
                                                JSAMPARRAY output_buf,
                                                int num_rows) {
  my_cconvert_ptr cconvert = (my_cconvert_ptr)cinfo->cconvert;
  int y, cb, cr;
  JSAMPROW outptr;
  JSAMPROW inptr0, inptr1, inptr2;
  JDIMENSION col;
  JDIMENSION num_cols = cinfo->output_width;
  JSAMPLE *range_limit = cinfo->sample_range_limit;
  int *Crrtab = cconvert->Cr_r_tab;
  int *Cbbtab = cconvert->Cb_b_tab;
  JLONG *Crgtab = cconvert->Cr_g_tab;
  JLONG *Cbgtab = cconvert->Cb_g_tab;
  while (--num_rows >= 0) {
    inptr0 = input_buf[0][input_row];
    inptr1 = input_buf[1][input_row];
    inptr2 = input_buf[2][input_row];
    input_row++;
    outptr = *output_buf++;
    for (col = 0; col < num_cols; col++) {
      y = static_cast<int>(inptr0[col]);
      cb = static_cast<int>(inptr1[col]);
      cr = static_cast<int>(inptr2[col]);
      outptr[0] = range_limit[y + Crrtab[cr]];
      outptr[1] = range_limit[y + ((int)((Cbgtab[cb] + Crgtab[cr]) >> (16)))];
      outptr[2] = range_limit[y + Cbbtab[cb]];
      outptr[3] = 0xFF;
      outptr += 4;
    }
  }
}
inline static void gray_extrgbx_convert_internal(j_decompress_ptr cinfo,
                                                 JSAMPIMAGE input_buf,
                                                 JDIMENSION input_row,
                                                 JSAMPARRAY output_buf,
                                                 int num_rows) {
  JSAMPROW inptr, outptr;
  JDIMENSION col;
  JDIMENSION num_cols = cinfo->output_width;
  while (--num_rows >= 0) {
    inptr = input_buf[0][input_row++];
    outptr = *output_buf++;
    for (col = 0; col < num_cols; col++) {
      outptr[0] = outptr[1] = outptr[2] = inptr[col];
      outptr[3] = 0xFF;
      outptr += 4;
    }
  }
}
inline static void rgb_extrgbx_convert_internal(j_decompress_ptr cinfo,
                                                JSAMPIMAGE input_buf,
                                                JDIMENSION input_row,
                                                JSAMPARRAY output_buf,
                                                int num_rows) {
  JSAMPROW inptr0, inptr1, inptr2;
  JSAMPROW outptr;
  JDIMENSION col;
  JDIMENSION num_cols = cinfo->output_width;
  while (--num_rows >= 0) {
    inptr0 = input_buf[0][input_row];
    inptr1 = input_buf[1][input_row];
    inptr2 = input_buf[2][input_row];
    input_row++;
    outptr = *output_buf++;
    for (col = 0; col < num_cols; col++) {
      outptr[0] = inptr0[col];
      outptr[1] = inptr1[col];
      outptr[2] = inptr2[col];
      outptr[3] = 0xFF;
      outptr += 4;
    }
  }
}
inline static void ycc_extbgr_convert_internal(j_decompress_ptr cinfo,
                                               JSAMPIMAGE input_buf,
                                               JDIMENSION input_row,
                                               JSAMPARRAY output_buf,
                                               int num_rows) {
  my_cconvert_ptr cconvert = (my_cconvert_ptr)cinfo->cconvert;
  int y, cb, cr;
  JSAMPROW outptr;
  JSAMPROW inptr0, inptr1, inptr2;
  JDIMENSION col;
  JDIMENSION num_cols = cinfo->output_width;
  JSAMPLE *range_limit = cinfo->sample_range_limit;
  int *Crrtab = cconvert->Cr_r_tab;
  int *Cbbtab = cconvert->Cb_b_tab;
  JLONG *Crgtab = cconvert->Cr_g_tab;
  JLONG *Cbgtab = cconvert->Cb_g_tab;
  while (--num_rows >= 0) {
    inptr0 = input_buf[0][input_row];
    inptr1 = input_buf[1][input_row];
    inptr2 = input_buf[2][input_row];
    input_row++;
    outptr = *output_buf++;
    for (col = 0; col < num_cols; col++) {
      y = static_cast<int>(inptr0[col]);
      cb = static_cast<int>(inptr1[col]);
      cr = static_cast<int>(inptr2[col]);
      outptr[2] = range_limit[y + Crrtab[cr]];
      outptr[1] = range_limit[y + ((int)((Cbgtab[cb] + Crgtab[cr]) >> (16)))];
      outptr[0] = range_limit[y + Cbbtab[cb]];
      outptr += 3;
    }
  }
}
inline static void gray_extbgr_convert_internal(j_decompress_ptr cinfo,
                                                JSAMPIMAGE input_buf,
                                                JDIMENSION input_row,
                                                JSAMPARRAY output_buf,
                                                int num_rows) {
  JSAMPROW inptr, outptr;
  JDIMENSION col;
  JDIMENSION num_cols = cinfo->output_width;
  while (--num_rows >= 0) {
    inptr = input_buf[0][input_row++];
    outptr = *output_buf++;
    for (col = 0; col < num_cols; col++) {
      outptr[2] = outptr[1] = outptr[0] = inptr[col];
      outptr += 3;
    }
  }
}
inline static void rgb_extbgr_convert_internal(j_decompress_ptr cinfo,
                                               JSAMPIMAGE input_buf,
                                               JDIMENSION input_row,
                                               JSAMPARRAY output_buf,
                                               int num_rows) {
  JSAMPROW inptr0, inptr1, inptr2;
  JSAMPROW outptr;
  JDIMENSION col;
  JDIMENSION num_cols = cinfo->output_width;
  while (--num_rows >= 0) {
    inptr0 = input_buf[0][input_row];
    inptr1 = input_buf[1][input_row];
    inptr2 = input_buf[2][input_row];
    input_row++;
    outptr = *output_buf++;
    for (col = 0; col < num_cols; col++) {
      outptr[2] = inptr0[col];
      outptr[1] = inptr1[col];
      outptr[0] = inptr2[col];
      outptr += 3;
    }
  }
}
inline static void ycc_extbgrx_convert_internal(j_decompress_ptr cinfo,
                                                JSAMPIMAGE input_buf,
                                                JDIMENSION input_row,
                                                JSAMPARRAY output_buf,
                                                int num_rows) {
  my_cconvert_ptr cconvert = (my_cconvert_ptr)cinfo->cconvert;
  int y, cb, cr;
  JSAMPROW outptr;
  JSAMPROW inptr0, inptr1, inptr2;
  JDIMENSION col;
  JDIMENSION num_cols = cinfo->output_width;
  JSAMPLE *range_limit = cinfo->sample_range_limit;
  int *Crrtab = cconvert->Cr_r_tab;
  int *Cbbtab = cconvert->Cb_b_tab;
  JLONG *Crgtab = cconvert->Cr_g_tab;
  JLONG *Cbgtab = cconvert->Cb_g_tab;
  while (--num_rows >= 0) {
    inptr0 = input_buf[0][input_row];
    inptr1 = input_buf[1][input_row];
    inptr2 = input_buf[2][input_row];
    input_row++;
    outptr = *output_buf++;
    for (col = 0; col < num_cols; col++) {
      y = static_cast<int>(inptr0[col]);
      cb = static_cast<int>(inptr1[col]);
      cr = static_cast<int>(inptr2[col]);
      outptr[2] = range_limit[y + Crrtab[cr]];
      outptr[1] = range_limit[y + ((int)((Cbgtab[cb] + Crgtab[cr]) >> (16)))];
      outptr[0] = range_limit[y + Cbbtab[cb]];
      outptr[3] = 0xFF;
      outptr += 4;
    }
  }
}
inline static void gray_extbgrx_convert_internal(j_decompress_ptr cinfo,
                                                 JSAMPIMAGE input_buf,
                                                 JDIMENSION input_row,
                                                 JSAMPARRAY output_buf,
                                                 int num_rows) {
  JSAMPROW inptr, outptr;
  JDIMENSION col;
  JDIMENSION num_cols = cinfo->output_width;
  while (--num_rows >= 0) {
    inptr = input_buf[0][input_row++];
    outptr = *output_buf++;
    for (col = 0; col < num_cols; col++) {
      outptr[2] = outptr[1] = outptr[0] = inptr[col];
      outptr[3] = 0xFF;
      outptr += 4;
    }
  }
}
inline static void rgb_extbgrx_convert_internal(j_decompress_ptr cinfo,
                                                JSAMPIMAGE input_buf,
                                                JDIMENSION input_row,
                                                JSAMPARRAY output_buf,
                                                int num_rows) {
  JSAMPROW inptr0, inptr1, inptr2;
  JSAMPROW outptr;
  JDIMENSION col;
  JDIMENSION num_cols = cinfo->output_width;
  while (--num_rows >= 0) {
    inptr0 = input_buf[0][input_row];
    inptr1 = input_buf[1][input_row];
    inptr2 = input_buf[2][input_row];
    input_row++;
    outptr = *output_buf++;
    for (col = 0; col < num_cols; col++) {
      outptr[2] = inptr0[col];
      outptr[1] = inptr1[col];
      outptr[0] = inptr2[col];
      outptr[3] = 0xFF;
      outptr += 4;
    }
  }
}
inline static void ycc_extxbgr_convert_internal(j_decompress_ptr cinfo,
                                                JSAMPIMAGE input_buf,
                                                JDIMENSION input_row,
                                                JSAMPARRAY output_buf,
                                                int num_rows) {
  my_cconvert_ptr cconvert = (my_cconvert_ptr)cinfo->cconvert;
  int y, cb, cr;
  JSAMPROW outptr;
  JSAMPROW inptr0, inptr1, inptr2;
  JDIMENSION col;
  JDIMENSION num_cols = cinfo->output_width;
  JSAMPLE *range_limit = cinfo->sample_range_limit;
  int *Crrtab = cconvert->Cr_r_tab;
  int *Cbbtab = cconvert->Cb_b_tab;
  JLONG *Crgtab = cconvert->Cr_g_tab;
  JLONG *Cbgtab = cconvert->Cb_g_tab;
  while (--num_rows >= 0) {
    inptr0 = input_buf[0][input_row];
    inptr1 = input_buf[1][input_row];
    inptr2 = input_buf[2][input_row];
    input_row++;
    outptr = *output_buf++;
    for (col = 0; col < num_cols; col++) {
      y = static_cast<int>(inptr0[col]);
      cb = static_cast<int>(inptr1[col]);
      cr = static_cast<int>(inptr2[col]);
      outptr[3] = range_limit[y + Crrtab[cr]];
      outptr[2] = range_limit[y + ((int)((Cbgtab[cb] + Crgtab[cr]) >> (16)))];
      outptr[1] = range_limit[y + Cbbtab[cb]];
      outptr[0] = 0xFF;
      outptr += 4;
    }
  }
}
inline static void gray_extxbgr_convert_internal(j_decompress_ptr cinfo,
                                                 JSAMPIMAGE input_buf,
                                                 JDIMENSION input_row,
                                                 JSAMPARRAY output_buf,
                                                 int num_rows) {
  JSAMPROW inptr, outptr;
  JDIMENSION col;
  JDIMENSION num_cols = cinfo->output_width;
  while (--num_rows >= 0) {
    inptr = input_buf[0][input_row++];
    outptr = *output_buf++;
    for (col = 0; col < num_cols; col++) {
      outptr[3] = outptr[2] = outptr[1] = inptr[col];
      outptr[0] = 0xFF;
      outptr += 4;
    }
  }
}
inline static void rgb_extxbgr_convert_internal(j_decompress_ptr cinfo,
                                                JSAMPIMAGE input_buf,
                                                JDIMENSION input_row,
                                                JSAMPARRAY output_buf,
                                                int num_rows) {
  JSAMPROW inptr0, inptr1, inptr2;
  JSAMPROW outptr;
  JDIMENSION col;
  JDIMENSION num_cols = cinfo->output_width;
  while (--num_rows >= 0) {
    inptr0 = input_buf[0][input_row];
    inptr1 = input_buf[1][input_row];
    inptr2 = input_buf[2][input_row];
    input_row++;
    outptr = *output_buf++;
    for (col = 0; col < num_cols; col++) {
      outptr[3] = inptr0[col];
      outptr[2] = inptr1[col];
      outptr[1] = inptr2[col];
      outptr[0] = 0xFF;
      outptr += 4;
    }
  }
}
inline static void ycc_extxrgb_convert_internal(j_decompress_ptr cinfo,
                                                JSAMPIMAGE input_buf,
                                                JDIMENSION input_row,
                                                JSAMPARRAY output_buf,
                                                int num_rows) {
  my_cconvert_ptr cconvert = (my_cconvert_ptr)cinfo->cconvert;
  int y, cb, cr;
  JSAMPROW outptr;
  JSAMPROW inptr0, inptr1, inptr2;
  JDIMENSION col;
  JDIMENSION num_cols = cinfo->output_width;
  JSAMPLE *range_limit = cinfo->sample_range_limit;
  int *Crrtab = cconvert->Cr_r_tab;
  int *Cbbtab = cconvert->Cb_b_tab;
  JLONG *Crgtab = cconvert->Cr_g_tab;
  JLONG *Cbgtab = cconvert->Cb_g_tab;
  while (--num_rows >= 0) {
    inptr0 = input_buf[0][input_row];
    inptr1 = input_buf[1][input_row];
    inptr2 = input_buf[2][input_row];
    input_row++;
    outptr = *output_buf++;
    for (col = 0; col < num_cols; col++) {
      y = static_cast<int>(inptr0[col]);
      cb = static_cast<int>(inptr1[col]);
      cr = static_cast<int>(inptr2[col]);
      outptr[1] = range_limit[y + Crrtab[cr]];
      outptr[2] = range_limit[y + ((int)((Cbgtab[cb] + Crgtab[cr]) >> (16)))];
      outptr[3] = range_limit[y + Cbbtab[cb]];
      outptr[0] = 0xFF;
      outptr += 4;
    }
  }
}
inline static void gray_extxrgb_convert_internal(j_decompress_ptr cinfo,
                                                 JSAMPIMAGE input_buf,
                                                 JDIMENSION input_row,
                                                 JSAMPARRAY output_buf,
                                                 int num_rows) {
  JSAMPROW inptr, outptr;
  JDIMENSION col;
  JDIMENSION num_cols = cinfo->output_width;
  while (--num_rows >= 0) {
    inptr = input_buf[0][input_row++];
    outptr = *output_buf++;
    for (col = 0; col < num_cols; col++) {
      outptr[1] = outptr[2] = outptr[3] = inptr[col];
      outptr[0] = 0xFF;
      outptr += 4;
    }
  }
}
inline static void rgb_extxrgb_convert_internal(j_decompress_ptr cinfo,
                                                JSAMPIMAGE input_buf,
                                                JDIMENSION input_row,
                                                JSAMPARRAY output_buf,
                                                int num_rows) {
  JSAMPROW inptr0, inptr1, inptr2;
  JSAMPROW outptr;
  JDIMENSION col;
  JDIMENSION num_cols = cinfo->output_width;
  while (--num_rows >= 0) {
    inptr0 = input_buf[0][input_row];
    inptr1 = input_buf[1][input_row];
    inptr2 = input_buf[2][input_row];
    input_row++;
    outptr = *output_buf++;
    for (col = 0; col < num_cols; col++) {
      outptr[1] = inptr0[col];
      outptr[2] = inptr1[col];
      outptr[3] = inptr2[col];
      outptr[0] = 0xFF;
      outptr += 4;
    }
  }
}
static void build_ycc_rgb_table(j_decompress_ptr cinfo) {
  my_cconvert_ptr cconvert = (my_cconvert_ptr)cinfo->cconvert;
  int i;
  JLONG x;
  cconvert->Cr_r_tab = (int *)(*cinfo->mem->alloc_small)(
      (j_common_ptr)cinfo, 1, (255 + 1) * sizeof(int));
  cconvert->Cb_b_tab = (int *)(*cinfo->mem->alloc_small)(
      (j_common_ptr)cinfo, 1, (255 + 1) * sizeof(int));
  cconvert->Cr_g_tab = (JLONG *)(*cinfo->mem->alloc_small)(
      (j_common_ptr)cinfo, 1, (255 + 1) * sizeof(JLONG));
  cconvert->Cb_g_tab = (JLONG *)(*cinfo->mem->alloc_small)(
      (j_common_ptr)cinfo, 1, (255 + 1) * sizeof(JLONG));
  for (i = 0, x = -128; i <= 255; i++, x++) {
    cconvert->Cr_r_tab[i] = (int)((((JLONG)((1.40200) * (1L << 16) + 0.5)) * x +
                                   ((JLONG)1 << (16 - 1))) >>
                                  (16));
    cconvert->Cb_b_tab[i] = (int)((((JLONG)((1.77200) * (1L << 16) + 0.5)) * x +
                                   ((JLONG)1 << (16 - 1))) >>
                                  (16));
    cconvert->Cr_g_tab[i] = (-((JLONG)((0.71414) * (1L << 16) + 0.5))) * x;
    cconvert->Cb_g_tab[i] =
        (-((JLONG)((0.34414) * (1L << 16) + 0.5))) * x + ((JLONG)1 << (16 - 1));
  }
}
static void ycc_rgb_convert(j_decompress_ptr cinfo, JSAMPIMAGE input_buf,
                            JDIMENSION input_row, JSAMPARRAY output_buf,
                            int num_rows) {
  switch (cinfo->out_color_space) {
    case JCS_EXT_RGB:
      ycc_extrgb_convert_internal(cinfo, input_buf, input_row, output_buf,
                                  num_rows);
      break;
    case JCS_EXT_RGBX:
    case JCS_EXT_RGBA:
      ycc_extrgbx_convert_internal(cinfo, input_buf, input_row, output_buf,
                                   num_rows);
      break;
    case JCS_EXT_BGR:
      ycc_extbgr_convert_internal(cinfo, input_buf, input_row, output_buf,
                                  num_rows);
      break;
    case JCS_EXT_BGRX:
    case JCS_EXT_BGRA:
      ycc_extbgrx_convert_internal(cinfo, input_buf, input_row, output_buf,
                                   num_rows);
      break;
    case JCS_EXT_XBGR:
    case JCS_EXT_ABGR:
      ycc_extxbgr_convert_internal(cinfo, input_buf, input_row, output_buf,
                                   num_rows);
      break;
    case JCS_EXT_XRGB:
    case JCS_EXT_ARGB:
      ycc_extxrgb_convert_internal(cinfo, input_buf, input_row, output_buf,
                                   num_rows);
      break;
    default:
      ycc_rgb_convert_internal(cinfo, input_buf, input_row, output_buf,
                               num_rows);
      break;
  }
}
static void build_rgb_y_table(j_decompress_ptr cinfo) {
  my_cconvert_ptr cconvert = (my_cconvert_ptr)cinfo->cconvert;
  JLONG *rgb_y_tab;
  JLONG i;
  cconvert->rgb_y_tab = rgb_y_tab = (JLONG *)(*cinfo->mem->alloc_small)(
      (j_common_ptr)cinfo, 1, ((3 * (255 + 1)) * sizeof(JLONG)));
  for (i = 0; i <= 255; i++) {
    rgb_y_tab[i + 0] = ((JLONG)((0.29900) * (1L << 16) + 0.5)) * i;
    rgb_y_tab[i + (1 * (255 + 1))] =
        ((JLONG)((0.58700) * (1L << 16) + 0.5)) * i;
    rgb_y_tab[i + (2 * (255 + 1))] =
        ((JLONG)((0.11400) * (1L << 16) + 0.5)) * i + ((JLONG)1 << (16 - 1));
  }
}
static void rgb_gray_convert(j_decompress_ptr cinfo, JSAMPIMAGE input_buf,
                             JDIMENSION input_row, JSAMPARRAY output_buf,
                             int num_rows) {
  my_cconvert_ptr cconvert = (my_cconvert_ptr)cinfo->cconvert;
  int r, g, b;
  JLONG *ctab = cconvert->rgb_y_tab;
  JSAMPROW outptr;
  JSAMPROW inptr0, inptr1, inptr2;
  JDIMENSION col;
  JDIMENSION num_cols = cinfo->output_width;
  while (--num_rows >= 0) {
    inptr0 = input_buf[0][input_row];
    inptr1 = input_buf[1][input_row];
    inptr2 = input_buf[2][input_row];
    input_row++;
    outptr = *output_buf++;
    for (col = 0; col < num_cols; col++) {
      r = static_cast<int>(inptr0[col]);
      g = static_cast<int>(inptr1[col]);
      b = static_cast<int>(inptr2[col]);
      outptr[col] = (JSAMPLE)((ctab[r + 0] + ctab[g + (1 * (255 + 1))] +
                               ctab[b + (2 * (255 + 1))]) >>
                              16);
    }
  }
}
static void null_convert(j_decompress_ptr cinfo, JSAMPIMAGE input_buf,
                         JDIMENSION input_row, JSAMPARRAY output_buf,
                         int num_rows) {
  JSAMPROW inptr, inptr0, inptr1, inptr2, inptr3, outptr;
  JDIMENSION col;
  int num_components = cinfo->num_components;
  JDIMENSION num_cols = cinfo->output_width;
  int ci;
  if (num_components == 3) {
    while (--num_rows >= 0) {
      inptr0 = input_buf[0][input_row];
      inptr1 = input_buf[1][input_row];
      inptr2 = input_buf[2][input_row];
      input_row++;
      outptr = *output_buf++;
      for (col = 0; col < num_cols; col++) {
        *outptr++ = inptr0[col];
        *outptr++ = inptr1[col];
        *outptr++ = inptr2[col];
      }
    }
  }
  else if (num_components == 4) {
    while (--num_rows >= 0) {
      inptr0 = input_buf[0][input_row];
      inptr1 = input_buf[1][input_row];
      inptr2 = input_buf[2][input_row];
      inptr3 = input_buf[3][input_row];
      input_row++;
      outptr = *output_buf++;
      for (col = 0; col < num_cols; col++) {
        *outptr++ = inptr0[col];
        *outptr++ = inptr1[col];
        *outptr++ = inptr2[col];
        *outptr++ = inptr3[col];
      }
    }
  }
  else {
    while (--num_rows >= 0) {
      for (ci = 0; ci < num_components; ci++) {
        inptr = input_buf[ci][input_row];
        outptr = *output_buf;
        for (col = 0; col < num_cols; col++) {
          outptr[ci] = inptr[col];
          outptr += num_components;
        }
      }
      output_buf++;
      input_row++;
    }
  }
}
static void grayscale_convert(j_decompress_ptr cinfo, JSAMPIMAGE input_buf,
                              JDIMENSION input_row, JSAMPARRAY output_buf,
                              int num_rows) {
  nndetailImageJpeg_jcopy_sample_rows(input_buf[0], (int)input_row, output_buf,
                                      0, num_rows, cinfo->output_width);
}
static void gray_rgb_convert(j_decompress_ptr cinfo, JSAMPIMAGE input_buf,
                             JDIMENSION input_row, JSAMPARRAY output_buf,
                             int num_rows) {
  switch (cinfo->out_color_space) {
    case JCS_EXT_RGB:
      gray_extrgb_convert_internal(cinfo, input_buf, input_row, output_buf,
                                   num_rows);
      break;
    case JCS_EXT_RGBX:
    case JCS_EXT_RGBA:
      gray_extrgbx_convert_internal(cinfo, input_buf, input_row, output_buf,
                                    num_rows);
      break;
    case JCS_EXT_BGR:
      gray_extbgr_convert_internal(cinfo, input_buf, input_row, output_buf,
                                   num_rows);
      break;
    case JCS_EXT_BGRX:
    case JCS_EXT_BGRA:
      gray_extbgrx_convert_internal(cinfo, input_buf, input_row, output_buf,
                                    num_rows);
      break;
    case JCS_EXT_XBGR:
    case JCS_EXT_ABGR:
      gray_extxbgr_convert_internal(cinfo, input_buf, input_row, output_buf,
                                    num_rows);
      break;
    case JCS_EXT_XRGB:
    case JCS_EXT_ARGB:
      gray_extxrgb_convert_internal(cinfo, input_buf, input_row, output_buf,
                                    num_rows);
      break;
    default:
      gray_rgb_convert_internal(cinfo, input_buf, input_row, output_buf,
                                num_rows);
      break;
  }
}
static void rgb_rgb_convert(j_decompress_ptr cinfo, JSAMPIMAGE input_buf,
                            JDIMENSION input_row, JSAMPARRAY output_buf,
                            int num_rows) {
  switch (cinfo->out_color_space) {
    case JCS_EXT_RGB:
      rgb_extrgb_convert_internal(cinfo, input_buf, input_row, output_buf,
                                  num_rows);
      break;
    case JCS_EXT_RGBX:
    case JCS_EXT_RGBA:
      rgb_extrgbx_convert_internal(cinfo, input_buf, input_row, output_buf,
                                   num_rows);
      break;
    case JCS_EXT_BGR:
      rgb_extbgr_convert_internal(cinfo, input_buf, input_row, output_buf,
                                  num_rows);
      break;
    case JCS_EXT_BGRX:
    case JCS_EXT_BGRA:
      rgb_extbgrx_convert_internal(cinfo, input_buf, input_row, output_buf,
                                   num_rows);
      break;
    case JCS_EXT_XBGR:
    case JCS_EXT_ABGR:
      rgb_extxbgr_convert_internal(cinfo, input_buf, input_row, output_buf,
                                   num_rows);
      break;
    case JCS_EXT_XRGB:
    case JCS_EXT_ARGB:
      rgb_extxrgb_convert_internal(cinfo, input_buf, input_row, output_buf,
                                   num_rows);
      break;
    default:
      rgb_rgb_convert_internal(cinfo, input_buf, input_row, output_buf,
                               num_rows);
      break;
  }
}
static void ycck_cmyk_convert(j_decompress_ptr cinfo, JSAMPIMAGE input_buf,
                              JDIMENSION input_row, JSAMPARRAY output_buf,
                              int num_rows) {
  my_cconvert_ptr cconvert = (my_cconvert_ptr)cinfo->cconvert;
  int y, cb, cr;
  JSAMPROW outptr;
  JSAMPROW inptr0, inptr1, inptr2, inptr3;
  JDIMENSION col;
  JDIMENSION num_cols = cinfo->output_width;
  JSAMPLE *range_limit = cinfo->sample_range_limit;
  int *Crrtab = cconvert->Cr_r_tab;
  int *Cbbtab = cconvert->Cb_b_tab;
  JLONG *Crgtab = cconvert->Cr_g_tab;
  JLONG *Cbgtab = cconvert->Cb_g_tab;
  while (--num_rows >= 0) {
    inptr0 = input_buf[0][input_row];
    inptr1 = input_buf[1][input_row];
    inptr2 = input_buf[2][input_row];
    inptr3 = input_buf[3][input_row];
    input_row++;
    outptr = *output_buf++;
    for (col = 0; col < num_cols; col++) {
      y = static_cast<int>(inptr0[col]);
      cb = static_cast<int>(inptr1[col]);
      cr = static_cast<int>(inptr2[col]);
      outptr[0] = range_limit[255 - (y + Crrtab[cr])];
      outptr[1] =
          range_limit[255 - (y + ((int)((Cbgtab[cb] + Crgtab[cr]) >> (16))))];
      outptr[2] = range_limit[255 - (y + Cbbtab[cb])];
      outptr[3] = inptr3[col];
      outptr += 4;
    }
  }
}
static const JLONG dither_matrix[4] = {0x0008020A, 0x0C040E06, 0x030B0109,
                                       0x0F070D05};
inline static void ycc_rgb565_convert_le(j_decompress_ptr cinfo,
                                         JSAMPIMAGE input_buf,
                                         JDIMENSION input_row,
                                         JSAMPARRAY output_buf, int num_rows) {
  my_cconvert_ptr cconvert = (my_cconvert_ptr)cinfo->cconvert;
  int y, cb, cr;
  JSAMPROW outptr;
  JSAMPROW inptr0, inptr1, inptr2;
  JDIMENSION col;
  JDIMENSION num_cols = cinfo->output_width;
  JSAMPLE *range_limit = cinfo->sample_range_limit;
  int *Crrtab = cconvert->Cr_r_tab;
  int *Cbbtab = cconvert->Cb_b_tab;
  JLONG *Crgtab = cconvert->Cr_g_tab;
  JLONG *Cbgtab = cconvert->Cb_g_tab;
  while (--num_rows >= 0) {
    JLONG rgb;
    unsigned int r, g, b;
    inptr0 = input_buf[0][input_row];
    inptr1 = input_buf[1][input_row];
    inptr2 = input_buf[2][input_row];
    input_row++;
    outptr = *output_buf++;
    if ((((size_t)(outptr)) & 3)) {
      y = static_cast<int>(*inptr0++);
      cb = static_cast<int>(*inptr1++);
      cr = static_cast<int>(*inptr2++);
      r = range_limit[y + Crrtab[cr]];
      g = range_limit[y + ((int)((Cbgtab[cb] + Crgtab[cr]) >> (16)))];
      b = range_limit[y + Cbbtab[cb]];
      rgb = ((((r) << 8) & 0xF800) | (((g) << 3) & 0x7E0) | ((b) >> 3));
      *(INT16 *)outptr = (INT16)rgb;
      outptr += 2;
      num_cols--;
    }
    for (col = 0; col < (num_cols >> 1); col++) {
      y = static_cast<int>(*inptr0++);
      cb = static_cast<int>(*inptr1++);
      cr = static_cast<int>(*inptr2++);
      r = range_limit[y + Crrtab[cr]];
      g = range_limit[y + ((int)((Cbgtab[cb] + Crgtab[cr]) >> (16)))];
      b = range_limit[y + Cbbtab[cb]];
      rgb = ((((r) << 8) & 0xF800) | (((g) << 3) & 0x7E0) | ((b) >> 3));
      y = static_cast<int>(*inptr0++);
      cb = static_cast<int>(*inptr1++);
      cr = static_cast<int>(*inptr2++);
      r = range_limit[y + Crrtab[cr]];
      g = range_limit[y + ((int)((Cbgtab[cb] + Crgtab[cr]) >> (16)))];
      b = range_limit[y + Cbbtab[cb]];
      rgb =
          ((((((r) << 8) & 0xF800) | (((g) << 3) & 0x7E0) | ((b) >> 3)) << 16) |
           rgb);
      ((*(int *)(outptr)) = rgb);
      outptr += 4;
    }
    if (num_cols & 1) {
      y = static_cast<int>(*inptr0);
      cb = static_cast<int>(*inptr1);
      cr = static_cast<int>(*inptr2);
      r = range_limit[y + Crrtab[cr]];
      g = range_limit[y + ((int)((Cbgtab[cb] + Crgtab[cr]) >> (16)))];
      b = range_limit[y + Cbbtab[cb]];
      rgb = ((((r) << 8) & 0xF800) | (((g) << 3) & 0x7E0) | ((b) >> 3));
      *(INT16 *)outptr = (INT16)rgb;
    }
  }
}
inline static void ycc_rgb565D_convert_le(j_decompress_ptr cinfo,
                                          JSAMPIMAGE input_buf,
                                          JDIMENSION input_row,
                                          JSAMPARRAY output_buf, int num_rows) {
  my_cconvert_ptr cconvert = (my_cconvert_ptr)cinfo->cconvert;
  int y, cb, cr;
  JSAMPROW outptr;
  JSAMPROW inptr0, inptr1, inptr2;
  JDIMENSION col;
  JDIMENSION num_cols = cinfo->output_width;
  JSAMPLE *range_limit = cinfo->sample_range_limit;
  int *Crrtab = cconvert->Cr_r_tab;
  int *Cbbtab = cconvert->Cb_b_tab;
  JLONG *Crgtab = cconvert->Cr_g_tab;
  JLONG *Cbgtab = cconvert->Cb_g_tab;
  JLONG d0 = dither_matrix[cinfo->output_scanline & 0x3];
  while (--num_rows >= 0) {
    JLONG rgb;
    unsigned int r, g, b;
    inptr0 = input_buf[0][input_row];
    inptr1 = input_buf[1][input_row];
    inptr2 = input_buf[2][input_row];
    input_row++;
    outptr = *output_buf++;
    if ((((size_t)(outptr)) & 3)) {
      y = static_cast<int>(*inptr0++);
      cb = static_cast<int>(*inptr1++);
      cr = static_cast<int>(*inptr2++);
      r = range_limit[((y + Crrtab[cr]) + ((d0) & 0xFF))];
      g = range_limit[((y + ((int)((Cbgtab[cb] + Crgtab[cr]) >> (16)))) +
                       (((d0) & 0xFF) >> 1))];
      b = range_limit[((y + Cbbtab[cb]) + ((d0) & 0xFF))];
      rgb = ((((r) << 8) & 0xF800) | (((g) << 3) & 0x7E0) | ((b) >> 3));
      *(INT16 *)outptr = (INT16)rgb;
      outptr += 2;
      num_cols--;
    }
    for (col = 0; col < (num_cols >> 1); col++) {
      y = static_cast<int>(*inptr0++);
      cb = static_cast<int>(*inptr1++);
      cr = static_cast<int>(*inptr2++);
      r = range_limit[((y + Crrtab[cr]) + ((d0) & 0xFF))];
      g = range_limit[((y + ((int)((Cbgtab[cb] + Crgtab[cr]) >> (16)))) +
                       (((d0) & 0xFF) >> 1))];
      b = range_limit[((y + Cbbtab[cb]) + ((d0) & 0xFF))];
      d0 = ((((d0) & 0xFF) << 24) | (((d0) >> 8) & 0x00FFFFFF));
      rgb = ((((r) << 8) & 0xF800) | (((g) << 3) & 0x7E0) | ((b) >> 3));
      y = static_cast<int>(*inptr0++);
      cb = static_cast<int>(*inptr1++);
      cr = static_cast<int>(*inptr2++);
      r = range_limit[((y + Crrtab[cr]) + ((d0) & 0xFF))];
      g = range_limit[((y + ((int)((Cbgtab[cb] + Crgtab[cr]) >> (16)))) +
                       (((d0) & 0xFF) >> 1))];
      b = range_limit[((y + Cbbtab[cb]) + ((d0) & 0xFF))];
      d0 = ((((d0) & 0xFF) << 24) | (((d0) >> 8) & 0x00FFFFFF));
      rgb =
          ((((((r) << 8) & 0xF800) | (((g) << 3) & 0x7E0) | ((b) >> 3)) << 16) |
           rgb);
      ((*(int *)(outptr)) = rgb);
      outptr += 4;
    }
    if (num_cols & 1) {
      y = static_cast<int>(*inptr0);
      cb = static_cast<int>(*inptr1);
      cr = static_cast<int>(*inptr2);
      r = range_limit[((y + Crrtab[cr]) + ((d0) & 0xFF))];
      g = range_limit[((y + ((int)((Cbgtab[cb] + Crgtab[cr]) >> (16)))) +
                       (((d0) & 0xFF) >> 1))];
      b = range_limit[((y + Cbbtab[cb]) + ((d0) & 0xFF))];
      rgb = ((((r) << 8) & 0xF800) | (((g) << 3) & 0x7E0) | ((b) >> 3));
      *(INT16 *)outptr = (INT16)rgb;
    }
  }
}
inline static void rgb_rgb565_convert_le(j_decompress_ptr cinfo,
                                         JSAMPIMAGE input_buf,
                                         JDIMENSION input_row,
                                         JSAMPARRAY output_buf, int num_rows) {
  JSAMPROW outptr;
  JSAMPROW inptr0, inptr1, inptr2;
  JDIMENSION col;
  JDIMENSION num_cols = cinfo->output_width;
  while (--num_rows >= 0) {
    JLONG rgb;
    unsigned int r, g, b;
    inptr0 = input_buf[0][input_row];
    inptr1 = input_buf[1][input_row];
    inptr2 = input_buf[2][input_row];
    input_row++;
    outptr = *output_buf++;
    if ((((size_t)(outptr)) & 3)) {
      r = static_cast<int>(*inptr0++);
      g = static_cast<int>(*inptr1++);
      b = static_cast<int>(*inptr2++);
      rgb = ((((r) << 8) & 0xF800) | (((g) << 3) & 0x7E0) | ((b) >> 3));
      *(INT16 *)outptr = (INT16)rgb;
      outptr += 2;
      num_cols--;
    }
    for (col = 0; col < (num_cols >> 1); col++) {
      r = static_cast<int>(*inptr0++);
      g = static_cast<int>(*inptr1++);
      b = static_cast<int>(*inptr2++);
      rgb = ((((r) << 8) & 0xF800) | (((g) << 3) & 0x7E0) | ((b) >> 3));
      r = static_cast<int>(*inptr0++);
      g = static_cast<int>(*inptr1++);
      b = static_cast<int>(*inptr2++);
      rgb =
          ((((((r) << 8) & 0xF800) | (((g) << 3) & 0x7E0) | ((b) >> 3)) << 16) |
           rgb);
      ((*(int *)(outptr)) = rgb);
      outptr += 4;
    }
    if (num_cols & 1) {
      r = static_cast<int>(*inptr0);
      g = static_cast<int>(*inptr1);
      b = static_cast<int>(*inptr2);
      rgb = ((((r) << 8) & 0xF800) | (((g) << 3) & 0x7E0) | ((b) >> 3));
      *(INT16 *)outptr = (INT16)rgb;
    }
  }
}
inline static void rgb_rgb565D_convert_le(j_decompress_ptr cinfo,
                                          JSAMPIMAGE input_buf,
                                          JDIMENSION input_row,
                                          JSAMPARRAY output_buf, int num_rows) {
  JSAMPROW outptr;
  JSAMPROW inptr0, inptr1, inptr2;
  JDIMENSION col;
  JSAMPLE *range_limit = cinfo->sample_range_limit;
  JDIMENSION num_cols = cinfo->output_width;
  JLONG d0 = dither_matrix[cinfo->output_scanline & 0x3];
  while (--num_rows >= 0) {
    JLONG rgb;
    unsigned int r, g, b;
    inptr0 = input_buf[0][input_row];
    inptr1 = input_buf[1][input_row];
    inptr2 = input_buf[2][input_row];
    input_row++;
    outptr = *output_buf++;
    if ((((size_t)(outptr)) & 3)) {
      r = range_limit[((static_cast<int>(*inptr0++)) + ((d0) & 0xFF))];
      g = range_limit[((static_cast<int>(*inptr1++)) + (((d0) & 0xFF) >> 1))];
      b = range_limit[((static_cast<int>(*inptr2++)) + ((d0) & 0xFF))];
      rgb = ((((r) << 8) & 0xF800) | (((g) << 3) & 0x7E0) | ((b) >> 3));
      *(INT16 *)outptr = (INT16)rgb;
      outptr += 2;
      num_cols--;
    }
    for (col = 0; col < (num_cols >> 1); col++) {
      r = range_limit[((static_cast<int>(*inptr0++)) + ((d0) & 0xFF))];
      g = range_limit[((static_cast<int>(*inptr1++)) + (((d0) & 0xFF) >> 1))];
      b = range_limit[((static_cast<int>(*inptr2++)) + ((d0) & 0xFF))];
      d0 = ((((d0) & 0xFF) << 24) | (((d0) >> 8) & 0x00FFFFFF));
      rgb = ((((r) << 8) & 0xF800) | (((g) << 3) & 0x7E0) | ((b) >> 3));
      r = range_limit[((static_cast<int>(*inptr0++)) + ((d0) & 0xFF))];
      g = range_limit[((static_cast<int>(*inptr1++)) + (((d0) & 0xFF) >> 1))];
      b = range_limit[((static_cast<int>(*inptr2++)) + ((d0) & 0xFF))];
      d0 = ((((d0) & 0xFF) << 24) | (((d0) >> 8) & 0x00FFFFFF));
      rgb =
          ((((((r) << 8) & 0xF800) | (((g) << 3) & 0x7E0) | ((b) >> 3)) << 16) |
           rgb);
      ((*(int *)(outptr)) = rgb);
      outptr += 4;
    }
    if (num_cols & 1) {
      r = range_limit[((static_cast<int>(*inptr0)) + ((d0) & 0xFF))];
      g = range_limit[((static_cast<int>(*inptr1)) + (((d0) & 0xFF) >> 1))];
      b = range_limit[((static_cast<int>(*inptr2)) + ((d0) & 0xFF))];
      rgb = ((((r) << 8) & 0xF800) | (((g) << 3) & 0x7E0) | ((b) >> 3));
      *(INT16 *)outptr = (INT16)rgb;
    }
  }
}
inline static void gray_rgb565_convert_le(j_decompress_ptr cinfo,
                                          JSAMPIMAGE input_buf,
                                          JDIMENSION input_row,
                                          JSAMPARRAY output_buf, int num_rows) {
  JSAMPROW inptr, outptr;
  JDIMENSION col;
  JDIMENSION num_cols = cinfo->output_width;
  while (--num_rows >= 0) {
    JLONG rgb;
    unsigned int g;
    inptr = input_buf[0][input_row++];
    outptr = *output_buf++;
    if ((((size_t)(outptr)) & 3)) {
      g = *inptr++;
      rgb = ((((g) << 8) & 0xF800) | (((g) << 3) & 0x7E0) | ((g) >> 3));
      *(INT16 *)outptr = (INT16)rgb;
      outptr += 2;
      num_cols--;
    }
    for (col = 0; col < (num_cols >> 1); col++) {
      g = *inptr++;
      rgb = ((((g) << 8) & 0xF800) | (((g) << 3) & 0x7E0) | ((g) >> 3));
      g = *inptr++;
      rgb =
          ((((((g) << 8) & 0xF800) | (((g) << 3) & 0x7E0) | ((g) >> 3)) << 16) |
           rgb);
      ((*(int *)(outptr)) = rgb);
      outptr += 4;
    }
    if (num_cols & 1) {
      g = *inptr;
      rgb = ((((g) << 8) & 0xF800) | (((g) << 3) & 0x7E0) | ((g) >> 3));
      *(INT16 *)outptr = (INT16)rgb;
    }
  }
}
inline static void gray_rgb565D_convert_le(j_decompress_ptr cinfo,
                                           JSAMPIMAGE input_buf,
                                           JDIMENSION input_row,
                                           JSAMPARRAY output_buf,
                                           int num_rows) {
  JSAMPROW inptr, outptr;
  JDIMENSION col;
  JSAMPLE *range_limit = cinfo->sample_range_limit;
  JDIMENSION num_cols = cinfo->output_width;
  JLONG d0 = dither_matrix[cinfo->output_scanline & 0x3];
  while (--num_rows >= 0) {
    JLONG rgb;
    unsigned int g;
    inptr = input_buf[0][input_row++];
    outptr = *output_buf++;
    if ((((size_t)(outptr)) & 3)) {
      g = *inptr++;
      g = range_limit[((g) + ((d0) & 0xFF))];
      rgb = ((((g) << 8) & 0xF800) | (((g) << 3) & 0x7E0) | ((g) >> 3));
      *(INT16 *)outptr = (INT16)rgb;
      outptr += 2;
      num_cols--;
    }
    for (col = 0; col < (num_cols >> 1); col++) {
      g = *inptr++;
      g = range_limit[((g) + ((d0) & 0xFF))];
      rgb = ((((g) << 8) & 0xF800) | (((g) << 3) & 0x7E0) | ((g) >> 3));
      d0 = ((((d0) & 0xFF) << 24) | (((d0) >> 8) & 0x00FFFFFF));
      g = *inptr++;
      g = range_limit[((g) + ((d0) & 0xFF))];
      rgb =
          ((((((g) << 8) & 0xF800) | (((g) << 3) & 0x7E0) | ((g) >> 3)) << 16) |
           rgb);
      d0 = ((((d0) & 0xFF) << 24) | (((d0) >> 8) & 0x00FFFFFF));
      ((*(int *)(outptr)) = rgb);
      outptr += 4;
    }
    if (num_cols & 1) {
      g = *inptr;
      g = range_limit[((g) + ((d0) & 0xFF))];
      rgb = ((((g) << 8) & 0xF800) | (((g) << 3) & 0x7E0) | ((g) >> 3));
      *(INT16 *)outptr = (INT16)rgb;
    }
  }
}
static void ycc_rgb565_convert(j_decompress_ptr cinfo, JSAMPIMAGE input_buf,
                               JDIMENSION input_row, JSAMPARRAY output_buf,
                               int num_rows) {
  ycc_rgb565_convert_le(cinfo, input_buf, input_row, output_buf, num_rows);
}
static void ycc_rgb565D_convert(j_decompress_ptr cinfo, JSAMPIMAGE input_buf,
                                JDIMENSION input_row, JSAMPARRAY output_buf,
                                int num_rows) {
  ycc_rgb565D_convert_le(cinfo, input_buf, input_row, output_buf, num_rows);
}
static void rgb_rgb565_convert(j_decompress_ptr cinfo, JSAMPIMAGE input_buf,
                               JDIMENSION input_row, JSAMPARRAY output_buf,
                               int num_rows) {
  rgb_rgb565_convert_le(cinfo, input_buf, input_row, output_buf, num_rows);
}
static void rgb_rgb565D_convert(j_decompress_ptr cinfo, JSAMPIMAGE input_buf,
                                JDIMENSION input_row, JSAMPARRAY output_buf,
                                int num_rows) {
  rgb_rgb565D_convert_le(cinfo, input_buf, input_row, output_buf, num_rows);
}
static void gray_rgb565_convert(j_decompress_ptr cinfo, JSAMPIMAGE input_buf,
                                JDIMENSION input_row, JSAMPARRAY output_buf,
                                int num_rows) {
  gray_rgb565_convert_le(cinfo, input_buf, input_row, output_buf, num_rows);
}
static void gray_rgb565D_convert(j_decompress_ptr cinfo, JSAMPIMAGE input_buf,
                                 JDIMENSION input_row, JSAMPARRAY output_buf,
                                 int num_rows) {
  gray_rgb565D_convert_le(cinfo, input_buf, input_row, output_buf, num_rows);
}
static void start_pass_dcolor(j_decompress_ptr) {
}
extern "C" void
nndetailImageJpeg_jinit_color_deconverter(j_decompress_ptr cinfo) {
  my_cconvert_ptr cconvert;
  int ci;
  cconvert = (my_cconvert_ptr)(*cinfo->mem->alloc_small)(
      (j_common_ptr)cinfo, 1, sizeof(my_color_deconverter));
  cinfo->cconvert = (Deconverter *)cconvert;
  cconvert->pub.start_pass = start_pass_dcolor;
  switch (cinfo->jpeg_color_space) {
    case JCS_GRAYSCALE:
      if (cinfo->num_components != 1) {
        ((cinfo)->err->msg_code = (11), (cinfo)->err->error_exit(cinfo));
      }
      break;
    case JCS_RGB:
    case JCS_YCbCr:
      if (cinfo->num_components != 3) {
        ((cinfo)->err->msg_code = (11), (cinfo)->err->error_exit(cinfo));
      }
      break;
    case JCS_CMYK:
    case JCS_YCCK:
      if (cinfo->num_components != 4) {
        ((cinfo)->err->msg_code = (11), (cinfo)->err->error_exit(cinfo));
      }
      break;
    default:
      if (cinfo->num_components < 1) {
        ((cinfo)->err->msg_code = (11), (cinfo)->err->error_exit(cinfo));
      }
      break;
  }
  switch (cinfo->out_color_space) {
    case JCS_GRAYSCALE:
      cinfo->out_color_components = 1;
      if (cinfo->jpeg_color_space == JCS_GRAYSCALE ||
          cinfo->jpeg_color_space == JCS_YCbCr) {
        cconvert->pub.color_convert = grayscale_convert;
        for (ci = 1; ci < cinfo->num_components; ci++) {
          cinfo->comp_info[ci].component_needed = 0;
        }
      }
      else if (cinfo->jpeg_color_space == JCS_RGB) {
        cconvert->pub.color_convert = rgb_gray_convert;
        build_rgb_y_table(cinfo);
      }
      else {
        ((cinfo)->err->msg_code = (28), (cinfo)->err->error_exit(cinfo));
      }
      break;
    case JCS_RGB:
    case JCS_EXT_RGB:
    case JCS_EXT_RGBX:
    case JCS_EXT_BGR:
    case JCS_EXT_BGRX:
    case JCS_EXT_XBGR:
    case JCS_EXT_XRGB:
    case JCS_EXT_RGBA:
    case JCS_EXT_BGRA:
    case JCS_EXT_ABGR:
    case JCS_EXT_ARGB:
      cinfo->out_color_components = rgb_pixelsize[cinfo->out_color_space];
      if (cinfo->jpeg_color_space == JCS_YCbCr) {
        if (jsimd_can_ycc_rgb()) {
          cconvert->pub.color_convert = jsimd_ycc_rgb_convert;
        }
        else {
          cconvert->pub.color_convert = ycc_rgb_convert;
          build_ycc_rgb_table(cinfo);
        }
      }
      else if (cinfo->jpeg_color_space == JCS_GRAYSCALE) {
        cconvert->pub.color_convert = gray_rgb_convert;
      }
      else if (cinfo->jpeg_color_space == JCS_RGB) {
        if (rgb_red[cinfo->out_color_space] == 0 &&
            rgb_green[cinfo->out_color_space] == 1 &&
            rgb_blue[cinfo->out_color_space] == 2 &&
            rgb_pixelsize[cinfo->out_color_space] == 3) {
          cconvert->pub.color_convert = null_convert;
        }
        else {
          cconvert->pub.color_convert = rgb_rgb_convert;
        }
      }
      else {
        ((cinfo)->err->msg_code = (28), (cinfo)->err->error_exit(cinfo));
      }
      break;
    case JCS_RGB565:
      cinfo->out_color_components = 3;
      if (cinfo->dither_mode == 0) {
        if (cinfo->jpeg_color_space == JCS_YCbCr) {
          if (jsimd_can_ycc_rgb565()) {
            cconvert->pub.color_convert = jsimd_ycc_rgb565_convert;
          }
          else {
            cconvert->pub.color_convert = ycc_rgb565_convert;
            build_ycc_rgb_table(cinfo);
          }
        }
        else if (cinfo->jpeg_color_space == JCS_GRAYSCALE) {
          cconvert->pub.color_convert = gray_rgb565_convert;
        }
        else if (cinfo->jpeg_color_space == JCS_RGB) {
          cconvert->pub.color_convert = rgb_rgb565_convert;
        }
        else {
          ((cinfo)->err->msg_code = (28), (cinfo)->err->error_exit(cinfo));
        }
      }
      else {
        if (cinfo->jpeg_color_space == JCS_YCbCr) {
          cconvert->pub.color_convert = ycc_rgb565D_convert;
          build_ycc_rgb_table(cinfo);
        }
        else if (cinfo->jpeg_color_space == JCS_GRAYSCALE) {
          cconvert->pub.color_convert = gray_rgb565D_convert;
        }
        else if (cinfo->jpeg_color_space == JCS_RGB) {
          cconvert->pub.color_convert = rgb_rgb565D_convert;
        }
        else {
          ((cinfo)->err->msg_code = (28), (cinfo)->err->error_exit(cinfo));
        }
      }
      break;
    case JCS_CMYK:
      cinfo->out_color_components = 4;
      if (cinfo->jpeg_color_space == JCS_YCCK) {
        cconvert->pub.color_convert = ycck_cmyk_convert;
        build_ycc_rgb_table(cinfo);
      }
      else if (cinfo->jpeg_color_space == JCS_CMYK) {
        cconvert->pub.color_convert = null_convert;
      }
      else {
        ((cinfo)->err->msg_code = (28), (cinfo)->err->error_exit(cinfo));
      }
      break;
    default:
      if (cinfo->out_color_space == cinfo->jpeg_color_space) {
        cinfo->out_color_components = cinfo->num_components;
        cconvert->pub.color_convert = null_convert;
      }
      else {
        ((cinfo)->err->msg_code = (28), (cinfo)->err->error_exit(cinfo));
      }
      break;
  }
  if (cinfo->quantize_colors) {
    cinfo->output_components = 1;
  }
  else {
    cinfo->output_components = cinfo->out_color_components;
  }
}

}

/*
  Adapted from libjpeg-turbo 1.5.0 jdcolor.c, jdcolext.c, and jdcol565.c.
  ABI declarations and SDK names have been changed.
  See licenses/libjpeg-turbo/README.ijg and COLOR_CHANGES.md.

  Copyright (C) 1991-1997, Thomas G. Lane.
  Modified 2011 by Guido Vollbeding.
  Copyright 2009 Pierre Ossman <ossman@cendio.se> for Cendio AB
  Copyright (C) 2009, 2011-2012, 2014-2015, D. R. Commander.
  Copyright (C) 2009, 2011, 2015, D. R. Commander.
  Copyright (C) 2014-2015, D. R. Commander.
  Copyright (C) 2013, Linaro Limited.
*/
