/*
  Scalar recovery of the libjpeg-turbo ARM64 downsampling kernels.
  Copyright (C) 2009-2011, Nokia Corporation and/or its subsidiary(-ies).
  Copyright (C) 2013-2014, Linaro Limited.
  Copyright (C) 2014-2016, D. R. Commander.
  Copyright (C) 2015-2016, Matthieu Darbois.
  Copyright (C) 2016, Siarhei Siamashka.
  Original license: https://github.com/libjpeg-turbo/libjpeg-turbo/blob/1.5.0/simd/jsimd_arm64_neon.S
  Full license text: include/image/jpeg_simd_color.hpp.
*/

#include "image/jpeg_sampling.hpp"

namespace jpeg_sampling {

void h2v1_downsample_neon(uint32_t width, int, int rows, uint32_t blocks,
                          Rows input, Rows output) {
  for (int row = 0; row < rows; ++row) {
    for (uint32_t column = 0; column < blocks * 8; ++column) {
      uint32_t left = column * 2;
      uint32_t right = left + 1;
      if (left >= width) {
        left = width - 1;
      }
      if (right >= width) {
        right = width - 1;
      }
      output[row][column] =
          (input[row][left] + input[row][right] + (column & 1)) >> 1;
    }
  }
}

void h2v2_downsample_neon(uint32_t width, int, int rows, uint32_t blocks,
                          Rows input, Rows output) {
  for (int row = 0; row < rows; ++row) {
    for (uint32_t column = 0; column < blocks * 8; ++column) {
      uint32_t left = column * 2;
      uint32_t right = left + 1;
      if (left >= width) {
        left = width - 1;
      }
      if (right >= width) {
        right = width - 1;
      }
      output[row][column] = (input[row * 2][left] + input[row * 2][right] +
                             input[row * 2 + 1][left] +
                             input[row * 2 + 1][right] + 1 + (column & 1)) >>
                            2;
    }
  }
}

void jsimd_h2v1_downsample(Encoder *encoder, Component *component, Rows input,
                           Rows output) {
  h2v1_downsample_neon(encoder->image_width, encoder->max_v_samp_factor,
                       component->v_samp_factor, component->width_in_blocks,
                       input, output);
}

void jsimd_h2v2_downsample(Encoder *encoder, Component *component, Rows input,
                           Rows output) {
  h2v2_downsample_neon(encoder->image_width, encoder->max_v_samp_factor,
                       component->v_samp_factor, component->width_in_blocks,
                       input, output);
}

}
