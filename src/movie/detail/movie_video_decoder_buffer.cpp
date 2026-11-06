#include "movie/detail/movie_video_decoder_buffer.hpp"
#include "nn/diag/diag_abort.hpp"

namespace nn::codec {

Result CalculateDecoderImagePoolBuffer(size_t* pOutSize,
  size_t* pOutAlignment, const VideoDecoderImagePreference& preference,
  uint32_t imageCount);
Result InitializeDecoderImagePool(VideoDecoderImagePoolType* pool,
  void* buffer, size_t size, const VideoDecoderImagePreference& preference,
  uint32_t imageCount);
void FinalizeDecoderImagePool(VideoDecoderImagePoolType* pool);
Result ReadDecoderOutputImageNv12(const VideoDecoderImagePoolType* pool,
  uint32_t index, uint16_t x, uint16_t y, uint16_t width, uint16_t height,
  void* luma, size_t lumaStride, size_t lumaSize, void* chroma,
  size_t chromaStride, size_t chromaSize);
Result ReadDecoderOutputImageRgbaHdr(const VideoDecoderImagePoolType* pool,
  uint32_t index, uint16_t x, uint16_t y, uint16_t width, uint16_t height,
  void* buffer, size_t stride, size_t size);
Result ReadDecoderOutputImageRgba(const VideoDecoderImagePoolType* pool,
  uint32_t index, uint16_t x, uint16_t y, uint16_t width, uint16_t height,
  void* buffer, size_t stride, size_t size);

}

namespace movie::detail {

namespace {

constexpr uint32_t ImageCount = 1;
constexpr auto Format_Rgba =
  static_cast<nn::codec::VideoDecoderOutputFormat>(2);
constexpr auto Format_Nv12 =
  static_cast<nn::codec::VideoDecoderOutputFormat>(3);
constexpr auto Format_RgbaHdr =
  static_cast<nn::codec::VideoDecoderOutputFormat>(4);

}

nn::codec::VideoDecoderImagePreference
VideoDecoderBuffer::CalculateImagePreference(uint16_t width, uint16_t height,
  nn::codec::VideoDecoderOutputFormat format,
  nn::codec::ImageTilingMode tilingMode) {
  return nn::codec::MakeDecodeImagePreference(width, height, format,
    tilingMode);
}

void VideoDecoderBuffer::CalculateBufferRequirement(size_t* pOutSize,
  size_t* pOutAlignment, uint16_t width, uint16_t height,
  nn::codec::VideoDecoderOutputFormat format,
  nn::codec::ImageTilingMode tilingMode) {
  nn::codec::VideoDecoderImagePreference preference =
    CalculateImagePreference(width, height, format, tilingMode);
  NN_ABORT_UNLESS_RESULT_SUCCESS(nn::codec::CalculateDecoderImagePoolBuffer(
    pOutSize, pOutAlignment, preference, ImageCount));
}

void VideoDecoderBuffer::Initialize(void* buffer, size_t size,
  uint16_t width, uint16_t height, nn::codec::VideoDecoderOutputFormat format,
  nn::codec::ImageTilingMode tilingMode) {
  nn::codec::VideoDecoderImagePreference preference =
    CalculateImagePreference(width, height, format, tilingMode);
  NN_ABORT_UNLESS_RESULT_SUCCESS(nn::codec::InitializeDecoderImagePool(
    &m_Pool, buffer, size, preference, ImageCount));
  m_Width = width;
  m_Height = height;
  m_TilingMode = tilingMode;
  m_Format = format;
}

void VideoDecoderBuffer::Finalize() {
  nn::codec::FinalizeDecoderImagePool(&m_Pool);
}

void VideoDecoderBuffer::ReadBuffer(void* buffer) const {
  if (m_Format == Format_Rgba) {
    size_t stride = m_Width * 4;
    NN_ABORT_UNLESS_RESULT_SUCCESS(nn::codec::ReadDecoderOutputImageRgba(
      &m_Pool, 0, 0, 0, m_Width, m_Height, buffer, stride,
      stride * m_Height));
  }
  else if (m_Format == Format_RgbaHdr) {
    size_t stride = m_Width * 4;
    NN_ABORT_UNLESS_RESULT_SUCCESS(nn::codec::ReadDecoderOutputImageRgbaHdr(
      &m_Pool, 0, 0, 0, m_Width, m_Height, buffer, stride,
      stride * m_Height));
  }
  else if (m_Format == Format_Nv12) {
    uint32_t lumaSize = m_Width * m_Height;
    NN_ABORT_UNLESS_RESULT_SUCCESS(nn::codec::ReadDecoderOutputImageNv12(
      &m_Pool, 0, 0, 0, m_Width, m_Height, buffer, m_Width, lumaSize,
      static_cast<uint8_t*>(buffer) + lumaSize, m_Width, lumaSize / 2));
  }
  else {
    nn::diag::detail::AbortImpl();
  }
}

}
