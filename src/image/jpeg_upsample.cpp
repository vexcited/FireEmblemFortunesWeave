/*
  Adapted from libjpeg-turbo 1.5.0 jcsample.c, jdsample.c, and jerror.h.
  Copyright (C) 1991-1996, Thomas G. Lane.
  Copyright 2009 Pierre Ossman <ossman@cendio.se> for Cendio AB.
  Copyright (C) 2010, 2014-2016, D. R. Commander.
  Copyright (C) 2014, MIPS Technologies, Inc., California.
  Copyright (C) 2015, Google, Inc.
  Copyright (C) 1994-1997, Thomas G. Lane.
  Modified 1997-2009 by Guido Vollbeding.
  Original license: https://github.com/libjpeg-turbo/libjpeg-turbo/blob/1.5.0/README.ijg
  Full license text: include/image/jpeg_transform.hpp.
*/

#include "image/jpeg_color.hpp"
#include "image/jpeg_sampling.hpp"

namespace jpeg_sampling {

using JSAMPLE = uint8_t;
using UINT8 = uint8_t;
using JSAMPROW = uint8_t *;
using JSAMPARRAY = Rows;
using JSAMPIMAGE = Planes;
using JDIMENSION = uint32_t;
using JLONG = int64_t;
using boolean = int;
using j_common_ptr = void *;
using jpeg_component_info = Component;
using j_compress_ptr = Encoder *;
using j_decompress_ptr = Decoder *;
using my_downsampler = Downsampler;
using my_downsample_ptr = Downsampler *;
using my_upsampler = Upsampler;
using my_upsample_ptr = Upsampler *;
using downsample1_ptr = Downsample;

static void jcopy_sample_rows(Rows input, int input_row, Rows output,
                              int output_row, int rows, uint32_t columns) {
  nndetailImageJpeg_jcopy_sample_rows(input, input_row, output, output_row,
                                      rows, columns);
}
int jsimd_can_h2v1_upsample() asm(
    "_Z41nndetailImageJpeg_jsimd_can_h2v1_upsamplev");
void jsimd_h2v1_upsample(Decoder *, Component *, Rows, Rows *) asm(
    "_Z37nndetailImageJpeg_jsimd_h2v1_upsampleP22jpeg_decompress_structP19jpeg_"
    "component_infoPPhPS4_");
int jsimd_can_h2v2_upsample() asm(
    "_Z41nndetailImageJpeg_jsimd_can_h2v2_upsamplev");
void jsimd_h2v2_upsample(Decoder *, Component *, Rows, Rows *) asm(
    "_Z37nndetailImageJpeg_jsimd_h2v2_upsampleP22jpeg_decompress_structP19jpeg_"
    "component_infoPPhPS4_");
int jsimd_can_h2v1_fancy_upsample() asm(
    "_Z47nndetailImageJpeg_jsimd_can_h2v1_fancy_upsamplev");
void jsimd_h2v1_fancy_upsample(Decoder *, Component *, Rows, Rows *) asm(
    "_Z43nndetailImageJpeg_jsimd_h2v1_fancy_upsampleP22jpeg_decompress_"
    "structP19jpeg_component_infoPPhPS4_");
int jsimd_can_h2v2_fancy_upsample() asm(
    "_Z47nndetailImageJpeg_jsimd_can_h2v2_fancy_upsamplev");
void jsimd_h2v2_fancy_upsample(Decoder *, Component *, Rows, Rows *) asm(
    "_Z43nndetailImageJpeg_jsimd_h2v2_fancy_upsampleP22jpeg_decompress_"
    "structP19jpeg_component_infoPPhPS4_");

static long jround_up(long value, long multiple) {
  return (value + multiple - 1) / multiple * multiple;
}
enum {
  JERR_CCIR601_NOTIMPL = 26,
  JERR_FRACT_SAMPLE_NOTIMPL = 39,
};

static void h1v2_fancy_upsample(Decoder *cinfo, Component *compptr, Rows input,
                                Rows *output) {
  for (int row = 0; row < cinfo->max_v_samp_factor; row += 2) {
    for (uint32_t column = 0; column < compptr->downsampled_width; ++column) {
      int center = input[row / 2][column] * 3;
      (*output)[row][column] = (center + input[row / 2 - 1][column] + 1) >> 2;
      (*output)[row + 1][column] =
          (center + input[row / 2 + 1][column] + 1) >> 2;
    }
  }
}

static void start_pass_upsample(j_decompress_ptr cinfo) {
  my_upsample_ptr upsample = (my_upsample_ptr)cinfo->upsample;
  upsample->next_row_out = cinfo->max_v_samp_factor;
  upsample->rows_to_go = cinfo->output_height;
}
static void sep_upsample(j_decompress_ptr cinfo, JSAMPIMAGE input_buf,
                         JDIMENSION *in_row_group_ctr, JDIMENSION,
                         JSAMPARRAY output_buf, JDIMENSION *out_row_ctr,
                         JDIMENSION out_rows_avail) {
  my_upsample_ptr upsample = (my_upsample_ptr)cinfo->upsample;
  int ci;
  jpeg_component_info *compptr;
  JDIMENSION num_rows;
  if (upsample->next_row_out >= cinfo->max_v_samp_factor) {
    for (ci = 0, compptr = cinfo->comp_info; ci < cinfo->num_components;
         ci++, compptr++) {
      (*upsample->methods[ci])(
          cinfo, compptr,
          input_buf[ci] + (*in_row_group_ctr * upsample->rowgroup_height[ci]),
          upsample->color_buf + ci);
    }
    upsample->next_row_out = 0;
  }
  num_rows = (JDIMENSION)(cinfo->max_v_samp_factor - upsample->next_row_out);
  if (num_rows > upsample->rows_to_go) {
    num_rows = upsample->rows_to_go;
  }
  out_rows_avail -= *out_row_ctr;
  if (num_rows > out_rows_avail) {
    num_rows = out_rows_avail;
  }
  (*cinfo->cconvert->color_convert)(cinfo, upsample->color_buf,
                                    (JDIMENSION)upsample->next_row_out,
                                    output_buf + *out_row_ctr, (int)num_rows);
  *out_row_ctr += num_rows;
  upsample->rows_to_go -= num_rows;
  upsample->next_row_out += num_rows;
  if (upsample->next_row_out >= cinfo->max_v_samp_factor) {
    (*in_row_group_ctr)++;
  }
}
static void fullsize_upsample(j_decompress_ptr, jpeg_component_info *,
                              JSAMPARRAY input_data,
                              JSAMPARRAY *output_data_ptr) {
  *output_data_ptr = input_data;
}
static void noop_upsample(j_decompress_ptr, jpeg_component_info *, JSAMPARRAY,
                          JSAMPARRAY *output_data_ptr) {
  *output_data_ptr = nullptr;
}
static void int_upsample(j_decompress_ptr cinfo, jpeg_component_info *compptr,
                         JSAMPARRAY input_data, JSAMPARRAY *output_data_ptr) {
  my_upsample_ptr upsample = (my_upsample_ptr)cinfo->upsample;
  JSAMPARRAY output_data = *output_data_ptr;
  JSAMPROW inptr, outptr;
  JSAMPLE invalue;
  int h;
  JSAMPROW outend;
  int h_expand, v_expand;
  int inrow, outrow;
  h_expand = upsample->h_expand[compptr->component_index];
  v_expand = upsample->v_expand[compptr->component_index];
  inrow = outrow = 0;
  while (outrow < cinfo->max_v_samp_factor) {
    inptr = input_data[inrow];
    outptr = output_data[outrow];
    outend = outptr + cinfo->output_width;
    while (outptr < outend) {
      invalue = *inptr++;
      for (h = h_expand; h > 0; h--) {
        *outptr++ = invalue;
      }
    }
    if (v_expand > 1) {
      jcopy_sample_rows(output_data, outrow, output_data, outrow + 1,
                        v_expand - 1, cinfo->output_width);
    }
    inrow++;
    outrow += v_expand;
  }
}
static void h2v1_upsample(j_decompress_ptr cinfo, jpeg_component_info *,
                          JSAMPARRAY input_data, JSAMPARRAY *output_data_ptr) {
  JSAMPARRAY output_data = *output_data_ptr;
  JSAMPROW inptr, outptr;
  JSAMPLE invalue;
  JSAMPROW outend;
  int inrow;
  for (inrow = 0; inrow < cinfo->max_v_samp_factor; inrow++) {
    inptr = input_data[inrow];
    outptr = output_data[inrow];
    outend = outptr + cinfo->output_width;
    while (outptr < outend) {
      invalue = *inptr++;
      *outptr++ = invalue;
      *outptr++ = invalue;
    }
  }
}
static void h2v2_upsample(j_decompress_ptr cinfo, jpeg_component_info *,
                          JSAMPARRAY input_data, JSAMPARRAY *output_data_ptr) {
  JSAMPARRAY output_data = *output_data_ptr;
  JSAMPROW inptr, outptr;
  JSAMPLE invalue;
  JSAMPROW outend;
  int inrow, outrow;
  inrow = outrow = 0;
  while (outrow < cinfo->max_v_samp_factor) {
    inptr = input_data[inrow];
    outptr = output_data[outrow];
    outend = outptr + cinfo->output_width;
    while (outptr < outend) {
      invalue = *inptr++;
      *outptr++ = invalue;
      *outptr++ = invalue;
    }
    jcopy_sample_rows(output_data, outrow, output_data, outrow + 1, 1,
                      cinfo->output_width);
    inrow++;
    outrow += 2;
  }
}
static void h2v1_fancy_upsample(j_decompress_ptr cinfo,
                                jpeg_component_info *compptr,
                                JSAMPARRAY input_data,
                                JSAMPARRAY *output_data_ptr) {
  JSAMPARRAY output_data = *output_data_ptr;
  JSAMPROW inptr, outptr;
  int invalue;
  JDIMENSION colctr;
  int inrow;
  for (inrow = 0; inrow < cinfo->max_v_samp_factor; inrow++) {
    inptr = input_data[inrow];
    outptr = output_data[inrow];
    invalue = static_cast<int>(*inptr++);
    *outptr++ = (JSAMPLE)invalue;
    *outptr++ = (JSAMPLE)((invalue * 3 + static_cast<int>(*inptr) + 2) >> 2);
    for (colctr = compptr->downsampled_width - 2; colctr > 0; colctr--) {
      invalue = static_cast<int>(*inptr++) * 3;
      *outptr++ = (JSAMPLE)((invalue + static_cast<int>(inptr[-2]) + 1) >> 2);
      *outptr++ = (JSAMPLE)((invalue + static_cast<int>(*inptr) + 2) >> 2);
    }
    invalue = static_cast<int>(*inptr);
    *outptr++ = (JSAMPLE)((invalue * 3 + static_cast<int>(inptr[-1]) + 1) >> 2);
    *outptr++ = (JSAMPLE)invalue;
  }
}
static void h2v2_fancy_upsample(j_decompress_ptr cinfo,
                                jpeg_component_info *compptr,
                                JSAMPARRAY input_data,
                                JSAMPARRAY *output_data_ptr) {
  JSAMPARRAY output_data = *output_data_ptr;
  JSAMPROW inptr0, inptr1, outptr;
  int thiscolsum, lastcolsum, nextcolsum;
  JDIMENSION colctr;
  int inrow, outrow, v;
  inrow = outrow = 0;
  while (outrow < cinfo->max_v_samp_factor) {
    for (v = 0; v < 2; v++) {
      inptr0 = input_data[inrow];
      if (v == 0) {
        inptr1 = input_data[inrow - 1];
      }
      else {
        inptr1 = input_data[inrow + 1];
      }
      outptr = output_data[outrow++];
      thiscolsum =
          static_cast<int>(*inptr0++) * 3 + static_cast<int>(*inptr1++);
      nextcolsum =
          static_cast<int>(*inptr0++) * 3 + static_cast<int>(*inptr1++);
      *outptr++ = (JSAMPLE)((thiscolsum * 4 + 8) >> 4);
      *outptr++ = (JSAMPLE)((thiscolsum * 3 + nextcolsum + 7) >> 4);
      lastcolsum = thiscolsum;
      thiscolsum = nextcolsum;
      for (colctr = compptr->downsampled_width - 2; colctr > 0; colctr--) {
        nextcolsum =
            static_cast<int>(*inptr0++) * 3 + static_cast<int>(*inptr1++);
        *outptr++ = (JSAMPLE)((thiscolsum * 3 + lastcolsum + 8) >> 4);
        *outptr++ = (JSAMPLE)((thiscolsum * 3 + nextcolsum + 7) >> 4);
        lastcolsum = thiscolsum;
        thiscolsum = nextcolsum;
      }
      *outptr++ = (JSAMPLE)((thiscolsum * 3 + lastcolsum + 8) >> 4);
      *outptr++ = (JSAMPLE)((thiscolsum * 4 + 7) >> 4);
    }
    inrow++;
  }
}
extern "C" void nndetailImageJpeg_jinit_upsampler(j_decompress_ptr cinfo) {
  my_upsample_ptr upsample;
  int ci;
  jpeg_component_info *compptr;
  boolean need_buffer, do_fancy;
  int h_in_group, v_in_group, h_out_group, v_out_group;
  if (!cinfo->master->jinit_upsampler_no_alloc) {
    upsample = (my_upsample_ptr)(*cinfo->mem->alloc_small)(
        (j_common_ptr)cinfo, 1, sizeof(my_upsampler));
    cinfo->upsample = (PublicUpsampler *)upsample;
    upsample->pub.start_pass = start_pass_upsample;
    upsample->pub.upsample = sep_upsample;
    upsample->pub.need_context_rows = 0;
  }
  else {
    upsample = (my_upsample_ptr)cinfo->upsample;
  }
  if (cinfo->CCIR601_sampling) {
    ((cinfo)->err->msg_code = (JERR_CCIR601_NOTIMPL),
     (*(cinfo)->err->error_exit)((j_common_ptr)(cinfo)));
  }
  do_fancy = cinfo->do_fancy_upsampling && cinfo->min_DCT_scaled_size > 1;
  for (ci = 0, compptr = cinfo->comp_info; ci < cinfo->num_components;
       ci++, compptr++) {
    h_in_group = (compptr->h_samp_factor * compptr->DCT_scaled_size) /
                 cinfo->min_DCT_scaled_size;
    v_in_group = (compptr->v_samp_factor * compptr->DCT_scaled_size) /
                 cinfo->min_DCT_scaled_size;
    h_out_group = cinfo->max_h_samp_factor;
    v_out_group = cinfo->max_v_samp_factor;
    upsample->rowgroup_height[ci] = v_in_group;
    need_buffer = 1;
    if (!compptr->component_needed) {
      upsample->methods[ci] = noop_upsample;
      need_buffer = 0;
    }
    else if (h_in_group == h_out_group && v_in_group == v_out_group) {
      upsample->methods[ci] = fullsize_upsample;
      need_buffer = 0;
    }
    else if (h_in_group * 2 == h_out_group && v_in_group == v_out_group) {
      if (do_fancy && compptr->downsampled_width > 2) {
        if (jsimd_can_h2v1_fancy_upsample()) {
          upsample->methods[ci] = jsimd_h2v1_fancy_upsample;
        }
        else {
          upsample->methods[ci] = h2v1_fancy_upsample;
        }
      }
      else {
        if (jsimd_can_h2v1_upsample()) {
          upsample->methods[ci] = jsimd_h2v1_upsample;
        }
        else {
          upsample->methods[ci] = h2v1_upsample;
        }
      }
    }
    else if (h_in_group == h_out_group && v_in_group * 2 == v_out_group &&
             do_fancy) {
      upsample->methods[ci] = h1v2_fancy_upsample;
      upsample->pub.need_context_rows = 1;
    }
    else if (h_in_group * 2 == h_out_group && v_in_group * 2 == v_out_group) {
      if (do_fancy && compptr->downsampled_width > 2) {
        if (jsimd_can_h2v2_fancy_upsample()) {
          upsample->methods[ci] = jsimd_h2v2_fancy_upsample;
        }
        else {
          upsample->methods[ci] = h2v2_fancy_upsample;
        }
        upsample->pub.need_context_rows = 1;
      }
      else {
        if (jsimd_can_h2v2_upsample()) {
          upsample->methods[ci] = jsimd_h2v2_upsample;
        }
        else {
          upsample->methods[ci] = h2v2_upsample;
        }
      }
    }
    else if ((h_out_group % h_in_group) == 0 &&
             (v_out_group % v_in_group) == 0) {
      upsample->methods[ci] = int_upsample;
      upsample->h_expand[ci] = (UINT8)(h_out_group / h_in_group);
      upsample->v_expand[ci] = (UINT8)(v_out_group / v_in_group);
    }
    else {
      ((cinfo)->err->msg_code = (JERR_FRACT_SAMPLE_NOTIMPL),
       (*(cinfo)->err->error_exit)((j_common_ptr)(cinfo)));
    }
    if (need_buffer && !cinfo->master->jinit_upsampler_no_alloc) {
      upsample->color_buf[ci] = (*cinfo->mem->alloc_sarray)(
          (j_common_ptr)cinfo, 1,
          (JDIMENSION)jround_up((long)cinfo->output_width,
                                (long)cinfo->max_h_samp_factor),
          (JDIMENSION)cinfo->max_v_samp_factor);
    }
  }
}

}
