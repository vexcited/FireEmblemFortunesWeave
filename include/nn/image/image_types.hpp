#pragma once

#include <stdint.h>

namespace nn::image {

enum JpegStatus : int32_t {
  JpegStatus_Ok = 0,
  JpegStatus_WrongFormat = -32,
  JpegStatus_UnsupportedFormat = -33,
  JpegStatus_OutputOverabounds = -66,
};

enum PixelFormat : int32_t {
  PixelFormat_Invalid,
  PixelFormat_Palette1,
  PixelFormat_Palette2,
  PixelFormat_Palette4,
  PixelFormat_Palette8,
  PixelFormat_Gray1,
  PixelFormat_Gray2,
  PixelFormat_Gray4,
  PixelFormat_Gray8,
  PixelFormat_Gray16,
  PixelFormat_Rgb8,
  PixelFormat_Rgb16,
  PixelFormat_GrayAlpha8,
  PixelFormat_GrayAlpha16,
  PixelFormat_Rgba8,
  PixelFormat_Rgba16,
};

int GetBitDepth(PixelFormat format);
int GetChannelCount(PixelFormat format);

struct Dimension {
  int32_t width;
  int32_t height;
};

}
