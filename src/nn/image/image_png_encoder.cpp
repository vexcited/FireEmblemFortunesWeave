#include "nn/image/image_png.hpp"

namespace nn::image {

namespace {

enum State {
  State_Initialized = 0,
  State_AllocatorSet = 1,
  State_DataSet = 2,
};

}

PngEncoder::PngEncoder()
  : m_State(State_Initialized), m_pPixels(nullptr),
    m_PixelFormat(PixelFormat_Invalid), m_Dimension(), m_RowStride(0),
    m_Allocator(), m_Status(0) {}

PngEncoder::~PngEncoder() {
  m_Allocator.Finalize();
}

void PngEncoder::Initialize(
  detail::PngMemoryAllocator::AllocateFunction allocate,
  void* pAllocateArgument, detail::PngMemoryAllocator::FreeFunction free,
  void* pFreeArgument) {
  m_Allocator.Initialize(allocate, pAllocateArgument, free, pFreeArgument);
  m_State = State_AllocatorSet;
}

void PngEncoder::SetPixelData(const void* pPixels, size_t pixelsSize,
  PixelFormat format, Dimension dimension, size_t rowStride) {
  m_pPixels = pPixels;
  m_PixelFormat = format;
  m_Dimension = dimension;
  m_RowStride = rowStride;
  m_State = State_DataSet;
}

size_t PngEncoder::GetPngDataSizeMax() const {
  // Each row has a filter byte, the bound follows the zlib deflate bound.
  size_t rawSize = m_Dimension.height * (m_RowStride + 1);
  size_t deflateSize = rawSize + (rawSize + 7) / 8 + (rawSize + 63) / 64 + 11;
  return deflateSize + deflateSize / 8192 * 12 + 57;
}

}
