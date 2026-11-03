#pragma once

#include <stddef.h>
#include <stdint.h>

namespace nn::codec {

enum class VideoDecoderOutputFormat : int32_t;
enum class VideoEncoderInputFormat : int32_t;
enum class ImageTilingMode : int32_t;

struct VideoDecoderImagePreference {
  uint32_t reserved_00;
  uint32_t format;
  uint16_t width_minus_one;
  uint16_t height_minus_one;
  uint32_t reserved_0c;
  uint64_t reserved_10[6];
};

struct VideoEncoderImagePreference {
  uint32_t reserved_00;
  uint32_t format;
  uint16_t width_minus_one;
  uint16_t height_minus_one;
  uint32_t reserved_0c;
  uint64_t reserved_10[6];
};

static_assert(sizeof(VideoDecoderImagePreference) == 64);
static_assert(sizeof(VideoEncoderImagePreference) == 64);
static_assert(offsetof(VideoDecoderImagePreference, width_minus_one) == 8);
static_assert(offsetof(VideoEncoderImagePreference, width_minus_one) == 8);

VideoDecoderImagePreference MakeDecodeImagePreference(uint16_t width,
  uint16_t height, VideoDecoderOutputFormat format, ImageTilingMode tiling);
VideoEncoderImagePreference MakeEncodeImagePreference(uint16_t width,
  uint16_t height, VideoEncoderInputFormat format, ImageTilingMode tiling);

}
