#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/codec/video_image.hpp"
#include "nn/codec/video_image_pool.hpp"

namespace movie::detail {

// One decoder image pool of a single image, read back by the format it
// was created with.
class VideoDecoderBuffer {
public:
  static void CalculateBufferRequirement(size_t* pOutSize,
    size_t* pOutAlignment, uint16_t width, uint16_t height,
    nn::codec::VideoDecoderOutputFormat format,
    nn::codec::ImageTilingMode tilingMode);
  static nn::codec::VideoDecoderImagePreference CalculateImagePreference(
    uint16_t width, uint16_t height,
    nn::codec::VideoDecoderOutputFormat format,
    nn::codec::ImageTilingMode tilingMode);

  void Initialize(void* buffer, size_t size, uint16_t width, uint16_t height,
    nn::codec::VideoDecoderOutputFormat format,
    nn::codec::ImageTilingMode tilingMode);
  void Finalize();
  void ReadBuffer(void* buffer) const;

private:
  nn::codec::VideoDecoderImagePoolType m_Pool;
  uint64_t m_Reserved;
  uint16_t m_Width;
  uint16_t m_Height;
  nn::codec::ImageTilingMode m_TilingMode;
  nn::codec::VideoDecoderOutputFormat m_Format;
};

}
