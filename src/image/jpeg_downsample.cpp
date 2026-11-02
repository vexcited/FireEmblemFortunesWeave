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
int jsimd_can_h2v1_downsample() asm(
    "_Z43nndetailImageJpeg_jsimd_can_h2v1_downsamplev");
int jsimd_can_h2v2_downsample() asm(
    "_Z43nndetailImageJpeg_jsimd_can_h2v2_downsamplev");
enum {
  JERR_CCIR601_NOTIMPL = 26,
  JERR_FRACT_SAMPLE_NOTIMPL = 39,
  JTRC_SMOOTH_NOTIMPL = 101,
};

static void start_pass_downsample(j_compress_ptr) {
}
static void expand_right_edge(JSAMPARRAY image_data, int num_rows,
                              JDIMENSION input_cols, JDIMENSION output_cols) {
  JSAMPROW ptr;
  JSAMPLE pixval;
  int count;
  int row;
  int numcols = (int)(output_cols - input_cols);
  if (numcols > 0) {
    for (row = 0; row < num_rows; row++) {
      ptr = image_data[row] + input_cols;
      pixval = ptr[-1];
      for (count = numcols; count > 0; count--) {
        *ptr++ = pixval;
      }
    }
  }
}
static void sep_downsample(j_compress_ptr cinfo, JSAMPIMAGE input_buf,
                           JDIMENSION in_row_index, JSAMPIMAGE output_buf,
                           JDIMENSION out_row_group_index) {
  my_downsample_ptr downsample = (my_downsample_ptr)cinfo->downsample;
  int ci;
  jpeg_component_info *compptr;
  JSAMPARRAY in_ptr, out_ptr;
  for (ci = 0, compptr = cinfo->comp_info; ci < cinfo->num_components;
       ci++, compptr++) {
    in_ptr = input_buf[ci] + in_row_index;
    out_ptr = output_buf[ci] + (out_row_group_index * compptr->v_samp_factor);
    (*downsample->methods[ci])(cinfo, compptr, in_ptr, out_ptr);
  }
}
static void int_downsample(j_compress_ptr cinfo, jpeg_component_info *compptr,
                           JSAMPARRAY input_data, JSAMPARRAY output_data) {
  int inrow, outrow, h_expand, v_expand, numpix, numpix2, h, v;
  JDIMENSION outcol, outcol_h;
  JDIMENSION output_cols = compptr->width_in_blocks * 8;
  JSAMPROW inptr, outptr;
  JLONG outvalue;
  h_expand = cinfo->max_h_samp_factor / compptr->h_samp_factor;
  v_expand = cinfo->max_v_samp_factor / compptr->v_samp_factor;
  numpix = h_expand * v_expand;
  numpix2 = numpix / 2;
  expand_right_edge(input_data, cinfo->max_v_samp_factor, cinfo->image_width,
                    output_cols * h_expand);
  inrow = 0;
  for (outrow = 0; outrow < compptr->v_samp_factor; outrow++) {
    outptr = output_data[outrow];
    for (outcol = 0, outcol_h = 0; outcol < output_cols;
         outcol++, outcol_h += h_expand) {
      outvalue = 0;
      for (v = 0; v < v_expand; v++) {
        inptr = input_data[inrow + v] + outcol_h;
        for (h = 0; h < h_expand; h++) {
          outvalue += (JLONG) static_cast<int>(*inptr++);
        }
      }
      *outptr++ = (JSAMPLE)((outvalue + numpix2) / numpix);
    }
    inrow += v_expand;
  }
}
static void fullsize_downsample(j_compress_ptr cinfo,
                                jpeg_component_info *compptr,
                                JSAMPARRAY input_data, JSAMPARRAY output_data) {
  jcopy_sample_rows(input_data, 0, output_data, 0, cinfo->max_v_samp_factor,
                    cinfo->image_width);
  expand_right_edge(output_data, cinfo->max_v_samp_factor, cinfo->image_width,
                    compptr->width_in_blocks * 8);
}
static void h2v1_downsample(j_compress_ptr cinfo, jpeg_component_info *compptr,
                            JSAMPARRAY input_data, JSAMPARRAY output_data) {
  int outrow;
  JDIMENSION outcol;
  JDIMENSION output_cols = compptr->width_in_blocks * 8;
  JSAMPROW inptr, outptr;
  int bias;
  expand_right_edge(input_data, cinfo->max_v_samp_factor, cinfo->image_width,
                    output_cols * 2);
  for (outrow = 0; outrow < compptr->v_samp_factor; outrow++) {
    outptr = output_data[outrow];
    inptr = input_data[outrow];
    bias = 0;
    for (outcol = 0; outcol < output_cols; outcol++) {
      *outptr++ = (JSAMPLE)((static_cast<int>(*inptr) +
                             static_cast<int>(inptr[1]) + bias) >>
                            1);
      bias ^= 1;
      inptr += 2;
    }
  }
}
static void h2v2_downsample(j_compress_ptr cinfo, jpeg_component_info *compptr,
                            JSAMPARRAY input_data, JSAMPARRAY output_data) {
  int inrow, outrow;
  JDIMENSION outcol;
  JDIMENSION output_cols = compptr->width_in_blocks * 8;
  JSAMPROW inptr0, inptr1, outptr;
  int bias;
  expand_right_edge(input_data, cinfo->max_v_samp_factor, cinfo->image_width,
                    output_cols * 2);
  inrow = 0;
  for (outrow = 0; outrow < compptr->v_samp_factor; outrow++) {
    outptr = output_data[outrow];
    inptr0 = input_data[inrow];
    inptr1 = input_data[inrow + 1];
    bias = 1;
    for (outcol = 0; outcol < output_cols; outcol++) {
      *outptr++ =
          (JSAMPLE)((static_cast<int>(*inptr0) + static_cast<int>(inptr0[1]) +
                     static_cast<int>(*inptr1) + static_cast<int>(inptr1[1]) +
                     bias) >>
                    2);
      bias ^= 3;
      inptr0 += 2;
      inptr1 += 2;
    }
    inrow += 2;
  }
}
static void h2v2_smooth_downsample(j_compress_ptr cinfo,
                                   jpeg_component_info *compptr,
                                   JSAMPARRAY input_data,
                                   JSAMPARRAY output_data) {
  int inrow, outrow;
  JDIMENSION colctr;
  JDIMENSION output_cols = compptr->width_in_blocks * 8;
  JSAMPROW inptr0, inptr1, above_ptr, below_ptr, outptr;
  JLONG membersum, neighsum, memberscale, neighscale;
  expand_right_edge(input_data - 1, cinfo->max_v_samp_factor + 2,
                    cinfo->image_width, output_cols * 2);
  memberscale = 16384 - cinfo->smoothing_factor * 80;
  neighscale = cinfo->smoothing_factor * 16;
  inrow = 0;
  for (outrow = 0; outrow < compptr->v_samp_factor; outrow++) {
    outptr = output_data[outrow];
    inptr0 = input_data[inrow];
    inptr1 = input_data[inrow + 1];
    above_ptr = input_data[inrow - 1];
    below_ptr = input_data[inrow + 2];
    membersum = static_cast<int>(*inptr0) + static_cast<int>(inptr0[1]) +
                static_cast<int>(*inptr1) + static_cast<int>(inptr1[1]);
    neighsum = static_cast<int>(*above_ptr) + static_cast<int>(above_ptr[1]) +
               static_cast<int>(*below_ptr) + static_cast<int>(below_ptr[1]) +
               static_cast<int>(*inptr0) + static_cast<int>(inptr0[2]) +
               static_cast<int>(*inptr1) + static_cast<int>(inptr1[2]);
    neighsum += neighsum;
    neighsum += static_cast<int>(*above_ptr) + static_cast<int>(above_ptr[2]) +
                static_cast<int>(*below_ptr) + static_cast<int>(below_ptr[2]);
    membersum = membersum * memberscale + neighsum * neighscale;
    *outptr++ = (JSAMPLE)((membersum + 32768) >> 16);
    inptr0 += 2;
    inptr1 += 2;
    above_ptr += 2;
    below_ptr += 2;
    for (colctr = output_cols - 2; colctr > 0; colctr--) {
      membersum = static_cast<int>(*inptr0) + static_cast<int>(inptr0[1]) +
                  static_cast<int>(*inptr1) + static_cast<int>(inptr1[1]);
      neighsum = static_cast<int>(*above_ptr) + static_cast<int>(above_ptr[1]) +
                 static_cast<int>(*below_ptr) + static_cast<int>(below_ptr[1]) +
                 static_cast<int>(inptr0[-1]) + static_cast<int>(inptr0[2]) +
                 static_cast<int>(inptr1[-1]) + static_cast<int>(inptr1[2]);
      neighsum += neighsum;
      neighsum +=
          static_cast<int>(above_ptr[-1]) + static_cast<int>(above_ptr[2]) +
          static_cast<int>(below_ptr[-1]) + static_cast<int>(below_ptr[2]);
      membersum = membersum * memberscale + neighsum * neighscale;
      *outptr++ = (JSAMPLE)((membersum + 32768) >> 16);
      inptr0 += 2;
      inptr1 += 2;
      above_ptr += 2;
      below_ptr += 2;
    }
    membersum = static_cast<int>(*inptr0) + static_cast<int>(inptr0[1]) +
                static_cast<int>(*inptr1) + static_cast<int>(inptr1[1]);
    neighsum = static_cast<int>(*above_ptr) + static_cast<int>(above_ptr[1]) +
               static_cast<int>(*below_ptr) + static_cast<int>(below_ptr[1]) +
               static_cast<int>(inptr0[-1]) + static_cast<int>(inptr0[1]) +
               static_cast<int>(inptr1[-1]) + static_cast<int>(inptr1[1]);
    neighsum += neighsum;
    neighsum +=
        static_cast<int>(above_ptr[-1]) + static_cast<int>(above_ptr[1]) +
        static_cast<int>(below_ptr[-1]) + static_cast<int>(below_ptr[1]);
    membersum = membersum * memberscale + neighsum * neighscale;
    *outptr = (JSAMPLE)((membersum + 32768) >> 16);
    inrow += 2;
  }
}
static void fullsize_smooth_downsample(j_compress_ptr cinfo,
                                       jpeg_component_info *compptr,
                                       JSAMPARRAY input_data,
                                       JSAMPARRAY output_data) {
  int outrow;
  JDIMENSION colctr;
  JDIMENSION output_cols = compptr->width_in_blocks * 8;
  JSAMPROW inptr, above_ptr, below_ptr, outptr;
  JLONG membersum, neighsum, memberscale, neighscale;
  int colsum, lastcolsum, nextcolsum;
  expand_right_edge(input_data - 1, cinfo->max_v_samp_factor + 2,
                    cinfo->image_width, output_cols);
  memberscale = 65536L - cinfo->smoothing_factor * 512L;
  neighscale = cinfo->smoothing_factor * 64;
  for (outrow = 0; outrow < compptr->v_samp_factor; outrow++) {
    outptr = output_data[outrow];
    inptr = input_data[outrow];
    above_ptr = input_data[outrow - 1];
    below_ptr = input_data[outrow + 1];
    colsum = static_cast<int>(*above_ptr++) + static_cast<int>(*below_ptr++) +
             static_cast<int>(*inptr);
    membersum = static_cast<int>(*inptr++);
    nextcolsum = static_cast<int>(*above_ptr) + static_cast<int>(*below_ptr) +
                 static_cast<int>(*inptr);
    neighsum = colsum + (colsum - membersum) + nextcolsum;
    membersum = membersum * memberscale + neighsum * neighscale;
    *outptr++ = (JSAMPLE)((membersum + 32768) >> 16);
    lastcolsum = colsum;
    colsum = nextcolsum;
    for (colctr = output_cols - 2; colctr > 0; colctr--) {
      membersum = static_cast<int>(*inptr++);
      above_ptr++;
      below_ptr++;
      nextcolsum = static_cast<int>(*above_ptr) + static_cast<int>(*below_ptr) +
                   static_cast<int>(*inptr);
      neighsum = lastcolsum + (colsum - membersum) + nextcolsum;
      membersum = membersum * memberscale + neighsum * neighscale;
      *outptr++ = (JSAMPLE)((membersum + 32768) >> 16);
      lastcolsum = colsum;
      colsum = nextcolsum;
    }
    membersum = static_cast<int>(*inptr);
    neighsum = lastcolsum + (colsum - membersum) + colsum;
    membersum = membersum * memberscale + neighsum * neighscale;
    *outptr = (JSAMPLE)((membersum + 32768) >> 16);
  }
}
extern "C" void nndetailImageJpeg_jinit_downsampler(j_compress_ptr cinfo) {
  my_downsample_ptr downsample;
  int ci;
  jpeg_component_info *compptr;
  boolean smoothok = 1;
  downsample = (my_downsample_ptr)(*cinfo->mem->alloc_small)(
      (j_common_ptr)cinfo, 1, sizeof(my_downsampler));
  cinfo->downsample = (PublicDownsampler *)downsample;
  downsample->pub.start_pass = start_pass_downsample;
  downsample->pub.downsample = sep_downsample;
  downsample->pub.need_context_rows = 0;
  if (cinfo->CCIR601_sampling) {
    ((cinfo)->err->msg_code = (JERR_CCIR601_NOTIMPL),
     (*(cinfo)->err->error_exit)((j_common_ptr)(cinfo)));
  }
  for (ci = 0, compptr = cinfo->comp_info; ci < cinfo->num_components;
       ci++, compptr++) {
    if (compptr->h_samp_factor == cinfo->max_h_samp_factor &&
        compptr->v_samp_factor == cinfo->max_v_samp_factor) {
      if (cinfo->smoothing_factor) {
        downsample->methods[ci] = fullsize_smooth_downsample;
        downsample->pub.need_context_rows = 1;
      }
      else {
        downsample->methods[ci] = fullsize_downsample;
      }
    }
    else if (compptr->h_samp_factor * 2 == cinfo->max_h_samp_factor &&
             compptr->v_samp_factor == cinfo->max_v_samp_factor) {
      smoothok = 0;
      if (jsimd_can_h2v1_downsample()) {
        downsample->methods[ci] = jsimd_h2v1_downsample;
      }
      else {
        downsample->methods[ci] = h2v1_downsample;
      }
    }
    else if (compptr->h_samp_factor * 2 == cinfo->max_h_samp_factor &&
             compptr->v_samp_factor * 2 == cinfo->max_v_samp_factor) {
      if (cinfo->smoothing_factor) {
        downsample->methods[ci] = h2v2_smooth_downsample;
        downsample->pub.need_context_rows = 1;
      }
      else {
        if (jsimd_can_h2v2_downsample()) {
          downsample->methods[ci] = jsimd_h2v2_downsample;
        }
        else {
          downsample->methods[ci] = h2v2_downsample;
        }
      }
    }
    else if ((cinfo->max_h_samp_factor % compptr->h_samp_factor) == 0 &&
             (cinfo->max_v_samp_factor % compptr->v_samp_factor) == 0) {
      smoothok = 0;
      downsample->methods[ci] = int_downsample;
    }
    else {
      ((cinfo)->err->msg_code = (JERR_FRACT_SAMPLE_NOTIMPL),
       (*(cinfo)->err->error_exit)((j_common_ptr)(cinfo)));
    }
  }
  if (cinfo->smoothing_factor && !smoothok) {
    ((cinfo)->err->msg_code = (JTRC_SMOOTH_NOTIMPL),
     (*(cinfo)->err->emit_message)((j_common_ptr)(cinfo), (0)));
  }
}

}

/*
  Adapted from libjpeg-turbo 1.5.0 jcsample.c, jdsample.c, and jerror.h.
  See licenses/libjpeg-turbo/README.ijg and SAMPLING_CHANGES.md.

  Copyright (C) 1991-1996, Thomas G. Lane.
  Copyright 2009 Pierre Ossman <ossman@cendio.se> for Cendio AB.
  Copyright (C) 2010, 2014-2016, D. R. Commander.
  Copyright (C) 2014, MIPS Technologies, Inc., California.
  Copyright (C) 2015, Google, Inc.
  Copyright (C) 1994-1997, Thomas G. Lane.
  Modified 1997-2009 by Guido Vollbeding.
*/
