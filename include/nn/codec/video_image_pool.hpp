#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/codec/video_image.hpp"
#include "nn/result.hpp"

namespace nn::gs {

struct NativeImageHandle {
  uint32_t value;
};

namespace sdk {

NativeImageHandle CalculateNativeImageHandle(NativeImageHandle base,
  uint32_t index);

}
}

namespace nn::gsdrv {

struct WeakNativeHandle {
  uint32_t value;
};

}

namespace nn::codec {

struct VideoDecoderImagePoolType {
  uint32_t imageCount;
  gs::NativeImageHandle nativeImageHandle;
  void* buffer;
  size_t bufferSize;
};

struct VideoEncoderImagePoolType {
  uint32_t imageCount;
  gs::NativeImageHandle nativeImageHandle;
  void* buffer;
  size_t bufferSize;
};

namespace detail {

void CalculateImagePoolBuffer(size_t* size, size_t* alignment,
  const VideoDecoderImagePreference& preference, uint32_t imageCount);
Result InitializeImagePool(VideoDecoderImagePoolType* pool, void* buffer,
  size_t bufferSize, const VideoDecoderImagePreference& preference,
  uint32_t imageCount);
Result InitializeAliasImagePool(VideoDecoderImagePoolType* pool,
  gs::NativeImageHandle handle, uint32_t imageCount);
void FinalizeImagePool(VideoDecoderImagePoolType* pool);
Result ReadOutputImageNv12(const VideoDecoderImagePoolType* pool,
  uint32_t index, uint16_t x, uint16_t y, uint16_t width, uint16_t height,
  void* luma, size_t lumaSize, size_t lumaStride, void* chroma,
  size_t chromaSize, size_t chromaStride);
Result ReadOutputImageRgba(const VideoDecoderImagePoolType* pool,
  uint32_t index, uint16_t x, uint16_t y, uint16_t width, uint16_t height,
  void* buffer, size_t bufferSize, size_t stride);
Result ReadOutputImageRgbaHdrFloat(const VideoDecoderImagePoolType* pool,
  uint32_t index, uint16_t x, uint16_t y, uint16_t width, uint16_t height,
  void* buffer, size_t bufferSize, size_t stride);

void CalculateImagePoolBuffer(size_t* size, size_t* alignment,
  const VideoEncoderImagePreference& preference, uint32_t imageCount);
Result InitializeImagePool(VideoEncoderImagePoolType* pool, void* buffer,
  size_t bufferSize, const VideoEncoderImagePreference& preference,
  uint32_t imageCount);
Result InitializeImagePool(VideoEncoderImagePoolType* pool,
  gsdrv::WeakNativeHandle handle, size_t bufferSize,
  const VideoEncoderImagePreference& preference, uint32_t imageCount);
Result InitializeAliasImagePool(VideoEncoderImagePoolType* pool,
  gs::NativeImageHandle handle, uint32_t imageCount);
void FinalizeImagePool(VideoEncoderImagePoolType* pool);
Result WriteInputImageNv12(const VideoEncoderImagePoolType* pool,
  uint32_t index, const void* luma, size_t lumaSize, size_t lumaStride,
  const void* chroma, size_t chromaSize, size_t chromaStride, uint16_t x,
  uint16_t y, uint16_t width, uint16_t height);
Result WriteInputImageRgba(const VideoEncoderImagePoolType* pool,
  uint32_t index, const void* buffer, size_t bufferSize, size_t stride,
  uint16_t x, uint16_t y, uint16_t width, uint16_t height);

}
}
