#include "image/jpeg_simd_color.hpp"

namespace jpeg_simd_color {

uint32_t simd_features = 7;

static uint8_t clamp_sample(int value) {
  if (value < 0) {
    return 0;
  }
  if (value > 255) {
    return 255;
  }
  return static_cast<uint8_t>(value);
}

template <int Stride, int Red, int Green, int Blue>
static void rgb_to_ycc(uint32_t width, Rows input, Planes output,
                       uint32_t output_row, int rows) {
  for (int row = 0; row < rows; ++row, ++output_row) {
    const auto *pixels = input[row];
    auto *y = output[0][output_row];
    auto *cb = output[1][output_row];
    auto *cr = output[2][output_row];
    for (uint32_t column = 0; column < width; ++column) {
      int red = pixels[Red];
      int green = pixels[Green];
      int blue = pixels[Blue];
      y[column] = (19595 * red + 38470 * green + 7471 * blue + 32768) >> 16;
      cb[column] = (8421375 - 11059 * red - 21709 * green + 32768 * blue) >> 16;
      cr[column] = (8421375 + 32768 * red - 27439 * green - 5329 * blue) >> 16;
      pixels += Stride;
    }
  }
}

template <int Stride, int Red, int Green, int Blue>
static void ycc_to_rgb(uint32_t width, Planes input, uint32_t input_row,
                       Rows output, int rows) {
  for (int row = 0; row < rows; ++row, ++input_row) {
    const auto *y = input[0][input_row];
    const auto *cb = input[1][input_row];
    const auto *cr = input[2][input_row];
    auto *pixels = output[row];
    for (uint32_t column = 0; column < width; ++column) {
      int blue_difference = cb[column] - 128;
      int red_difference = cr[column] - 128;
      auto red =
          clamp_sample(y[column] + ((22971 * red_difference + 8192) >> 14));
      auto green = clamp_sample(
          y[column] +
          ((-11277 * blue_difference - 23401 * red_difference + 16384) >> 15));
      auto blue =
          clamp_sample(y[column] + ((29033 * blue_difference + 8192) >> 14));
      if constexpr (Stride == 2) {
        uint16_t packed =
            ((red & 0xf8) << 8) | ((green & 0xfc) << 3) | (blue >> 3);
        pixels[0] = static_cast<uint8_t>(packed);
        pixels[1] = static_cast<uint8_t>(packed >> 8);
      }
      else {
        if constexpr (Stride == 4) {
          pixels[6 - Red - Green - Blue] = 255;
        }
        pixels[Red] = red;
        pixels[Green] = green;
        pixels[Blue] = blue;
      }
      pixels += Stride;
    }
  }
}

void jsimd_extrgb_ycc_convert_neon(uint32_t width, Rows input, Planes output,
                                   uint32_t output_row, int rows) {
  rgb_to_ycc<3, 0, 1, 2>(width, input, output, output_row, rows);
}

void jsimd_extrgb_ycc_convert_neon_slowld3(uint32_t width, Rows input,
                                           Planes output, uint32_t output_row,
                                           int rows) {
  rgb_to_ycc<3, 0, 1, 2>(width, input, output, output_row, rows);
}

void jsimd_extbgr_ycc_convert_neon(uint32_t width, Rows input, Planes output,
                                   uint32_t output_row, int rows) {
  rgb_to_ycc<3, 2, 1, 0>(width, input, output, output_row, rows);
}

void jsimd_extbgr_ycc_convert_neon_slowld3(uint32_t width, Rows input,
                                           Planes output, uint32_t output_row,
                                           int rows) {
  rgb_to_ycc<3, 2, 1, 0>(width, input, output, output_row, rows);
}

void jsimd_extrgbx_ycc_convert_neon(uint32_t width, Rows input, Planes output,
                                    uint32_t output_row, int rows) {
  rgb_to_ycc<4, 0, 1, 2>(width, input, output, output_row, rows);
}

void jsimd_extbgrx_ycc_convert_neon(uint32_t width, Rows input, Planes output,
                                    uint32_t output_row, int rows) {
  rgb_to_ycc<4, 2, 1, 0>(width, input, output, output_row, rows);
}

void jsimd_extxbgr_ycc_convert_neon(uint32_t width, Rows input, Planes output,
                                    uint32_t output_row, int rows) {
  rgb_to_ycc<4, 3, 2, 1>(width, input, output, output_row, rows);
}

void jsimd_extxrgb_ycc_convert_neon(uint32_t width, Rows input, Planes output,
                                    uint32_t output_row, int rows) {
  rgb_to_ycc<4, 1, 2, 3>(width, input, output, output_row, rows);
}

void jsimd_ycc_extrgb_convert_neon(uint32_t width, Planes input,
                                   uint32_t input_row, Rows output, int rows) {
  ycc_to_rgb<3, 0, 1, 2>(width, input, input_row, output, rows);
}

void jsimd_ycc_extrgb_convert_neon_slowst3(uint32_t width, Planes input,
                                           uint32_t input_row, Rows output,
                                           int rows) {
  ycc_to_rgb<3, 0, 1, 2>(width, input, input_row, output, rows);
}

void jsimd_ycc_extbgr_convert_neon(uint32_t width, Planes input,
                                   uint32_t input_row, Rows output, int rows) {
  ycc_to_rgb<3, 2, 1, 0>(width, input, input_row, output, rows);
}

void jsimd_ycc_extbgr_convert_neon_slowst3(uint32_t width, Planes input,
                                           uint32_t input_row, Rows output,
                                           int rows) {
  ycc_to_rgb<3, 2, 1, 0>(width, input, input_row, output, rows);
}

void jsimd_ycc_extrgbx_convert_neon(uint32_t width, Planes input,
                                    uint32_t input_row, Rows output, int rows) {
  ycc_to_rgb<4, 0, 1, 2>(width, input, input_row, output, rows);
}

void jsimd_ycc_extbgrx_convert_neon(uint32_t width, Planes input,
                                    uint32_t input_row, Rows output, int rows) {
  ycc_to_rgb<4, 2, 1, 0>(width, input, input_row, output, rows);
}

void jsimd_ycc_extxbgr_convert_neon(uint32_t width, Planes input,
                                    uint32_t input_row, Rows output, int rows) {
  ycc_to_rgb<4, 3, 2, 1>(width, input, input_row, output, rows);
}

void jsimd_ycc_extxrgb_convert_neon(uint32_t width, Planes input,
                                    uint32_t input_row, Rows output, int rows) {
  ycc_to_rgb<4, 1, 2, 3>(width, input, input_row, output, rows);
}

void jsimd_ycc_rgb565_convert_neon(uint32_t width, Planes input,
                                   uint32_t input_row, Rows output, int rows) {
  ycc_to_rgb<2, 0, 0, 0>(width, input, input_row, output, rows);
}

void rgb_ycc_convert(Encoder *encoder, Rows input, Planes output,
                     uint32_t output_row, int rows) {
  using Kernel = void (*)(uint32_t, Rows, Planes, uint32_t, int);
  Kernel kernel;
  switch (encoder->in_color_space) {
    case 7:
    case 12:
      kernel = jsimd_extrgbx_ycc_convert_neon;
      break;
    case 9:
    case 13:
      kernel = jsimd_extbgrx_ycc_convert_neon;
      break;
    case 10:
    case 14:
      kernel = jsimd_extxbgr_ycc_convert_neon;
      break;
    case 11:
    case 15:
      kernel = jsimd_extxrgb_ycc_convert_neon;
      break;
    case 8:
      kernel = (simd_features & 1) ? jsimd_extbgr_ycc_convert_neon
                                   : jsimd_extbgr_ycc_convert_neon_slowld3;
      break;
    default:
      kernel = (simd_features & 1) ? jsimd_extrgb_ycc_convert_neon
                                   : jsimd_extrgb_ycc_convert_neon_slowld3;
      break;
  }
  kernel(encoder->image_width, input, output, output_row, rows);
}

void ycc_rgb_convert(Decoder *decoder, Planes input, uint32_t input_row,
                     Rows output, int rows) {
  using Kernel = void (*)(uint32_t, Planes, uint32_t, Rows, int);
  Kernel kernel;
  switch (decoder->out_color_space) {
    case 7:
    case 12:
      kernel = jsimd_ycc_extrgbx_convert_neon;
      break;
    case 9:
    case 13:
      kernel = jsimd_ycc_extbgrx_convert_neon;
      break;
    case 10:
    case 14:
      kernel = jsimd_ycc_extxbgr_convert_neon;
      break;
    case 11:
    case 15:
      kernel = jsimd_ycc_extxrgb_convert_neon;
      break;
    case 8:
      kernel = (simd_features & 2) ? jsimd_ycc_extbgr_convert_neon
                                   : jsimd_ycc_extbgr_convert_neon_slowst3;
      break;
    default:
      kernel = (simd_features & 2) ? jsimd_ycc_extrgb_convert_neon
                                   : jsimd_ycc_extrgb_convert_neon_slowst3;
      break;
  }
  kernel(decoder->output_width, input, input_row, output, rows);
}

void ycc_rgb565_convert(Decoder *decoder, Planes input, uint32_t input_row,
                        Rows output, int rows) {
  jsimd_ycc_rgb565_convert_neon(decoder->output_width, input, input_row, output,
                                rows);
}

}

/*
  Adapted from libjpeg-turbo 1.5.0 jsimd_arm64.c and jsimd_arm64_neon.S.
  Assembly kernels are expressed as C++ integer operations.
  SDK export names and observed ABI offsets replace upstream declarations.
  See licenses/libjpeg-turbo/SIMD_LICENSE.txt and SIMD_COLOR_CHANGES.md.
*/
