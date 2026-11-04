#include "nn/codec/video_image_pool.hpp"

namespace nn::codec {

void CalculateDecoderImagePoolBuffer(size_t* size, size_t* alignment,
  const VideoDecoderImagePreference& preference, uint32_t imageCount) {
  detail::CalculateImagePoolBuffer(size, alignment, preference, imageCount);
}

Result InitializeDecoderImagePool(VideoDecoderImagePoolType* pool,
  void* buffer, size_t bufferSize,
  const VideoDecoderImagePreference& preference, uint32_t imageCount) {
  *pool = {};
  return detail::InitializeImagePool(pool, buffer, bufferSize, preference,
    imageCount);
}

Result InitializeDecoderAliasImagePool(VideoDecoderImagePoolType* pool,
  gs::NativeImageHandle handle, uint32_t imageCount) {
  *pool = {};
  return detail::InitializeAliasImagePool(pool, handle, imageCount);
}

void FinalizeDecoderImagePool(VideoDecoderImagePoolType* pool) {
  detail::FinalizeImagePool(pool);
}

gs::NativeImageHandle GetDecoderImagePoolNativeImageHandle(
  const VideoDecoderImagePoolType* pool, uint32_t index) {
  return gs::sdk::CalculateNativeImageHandle(pool->nativeImageHandle, index);
}

Result ReadDecoderOutputImageNv12(const VideoDecoderImagePoolType* pool,
  uint32_t index, uint16_t x, uint16_t y, uint16_t width, uint16_t height,
  void* luma, size_t lumaSize, size_t lumaStride, void* chroma,
  size_t chromaSize, size_t chromaStride) {
  return detail::ReadOutputImageNv12(pool, index, x, y, width, height, luma,
    lumaSize, lumaStride, chroma, chromaSize, chromaStride);
}

Result ReadDecoderOutputImageRgba(const VideoDecoderImagePoolType* pool,
  uint32_t index, uint16_t x, uint16_t y, uint16_t width, uint16_t height,
  void* buffer, size_t bufferSize, size_t stride) {
  return detail::ReadOutputImageRgba(pool, index, x, y, width, height,
    buffer, bufferSize, stride);
}

// High dynamic range images use the same conversion as eight bit ones.
Result ReadDecoderOutputImageRgbaHdr(const VideoDecoderImagePoolType* pool,
  uint32_t index, uint16_t x, uint16_t y, uint16_t width, uint16_t height,
  void* buffer, size_t bufferSize, size_t stride) {
  return detail::ReadOutputImageRgba(pool, index, x, y, width, height,
    buffer, bufferSize, stride);
}

Result ReadDecoderOutputImageRgbaHdrFloat(
  const VideoDecoderImagePoolType* pool, uint32_t index, uint16_t x,
  uint16_t y, uint16_t width, uint16_t height, void* buffer,
  size_t bufferSize, size_t stride) {
  return detail::ReadOutputImageRgbaHdrFloat(pool, index, x, y, width,
    height, buffer, bufferSize, stride);
}

void CalculateEncoderImagePoolBuffer(size_t* size, size_t* alignment,
  const VideoEncoderImagePreference& preference, uint32_t imageCount) {
  detail::CalculateImagePoolBuffer(size, alignment, preference, imageCount);
}

Result InitializeEncoderImagePool(VideoEncoderImagePoolType* pool,
  void* buffer, size_t bufferSize,
  const VideoEncoderImagePreference& preference, uint32_t imageCount) {
  *pool = {};
  return detail::InitializeImagePool(pool, buffer, bufferSize, preference,
    imageCount);
}

Result InitializeEncoderImagePool(VideoEncoderImagePoolType* pool,
  gsdrv::WeakNativeHandle handle, size_t bufferSize,
  const VideoEncoderImagePreference& preference, uint32_t imageCount) {
  *pool = {};
  return detail::InitializeImagePool(pool, handle, bufferSize, preference,
    imageCount);
}

Result InitializeEncoderAliasImagePool(VideoEncoderImagePoolType* pool,
  gs::NativeImageHandle handle, uint32_t imageCount) {
  *pool = {};
  return detail::InitializeAliasImagePool(pool, handle, imageCount);
}

void FinalizeEncoderImagePool(VideoEncoderImagePoolType* pool) {
  detail::FinalizeImagePool(pool);
}

gs::NativeImageHandle GetEncoderImagePoolNativeImageHandle(
  const VideoEncoderImagePoolType* pool, uint32_t index) {
  return gs::sdk::CalculateNativeImageHandle(pool->nativeImageHandle, index);
}

Result WriteEncoderInputImageNv12(const VideoEncoderImagePoolType* pool,
  uint32_t index, const void* luma, size_t lumaSize, size_t lumaStride,
  const void* chroma, size_t chromaSize, size_t chromaStride, uint16_t x,
  uint16_t y, uint16_t width, uint16_t height) {
  return detail::WriteInputImageNv12(pool, index, luma, lumaSize, lumaStride,
    chroma, chromaSize, chromaStride, x, y, width, height);
}

Result WriteEncoderInputImageRgba(const VideoEncoderImagePoolType* pool,
  uint32_t index, const void* buffer, size_t bufferSize, size_t stride,
  uint16_t x, uint16_t y, uint16_t width, uint16_t height) {
  return detail::WriteInputImageRgba(pool, index, buffer, bufferSize, stride,
    x, y, width, height);
}

}
