#include "nn/image/image_png.hpp"

namespace nn::image {

namespace {

enum State {
  State_Initialized = 0,
  State_AllocatorSet = 1,
  State_DataSet = 2,
  State_Analyzed = 3,
};

}

PngDecoder::PngDecoder()
  : m_State(State_Initialized), m_pData(nullptr), m_DataSize(0),
    m_OutputPixelFormat(PixelFormat_Invalid),
    m_PixelFormat(PixelFormat_Invalid), m_Dimension(), m_RowStrideMin(0),
    m_Allocator(), m_Reader(), m_pWork(nullptr), m_Status(0) {}

PngDecoder::~PngDecoder() {
  if (m_pWork != nullptr) {
    m_Allocator.Free(m_pWork);
    m_pWork = nullptr;
  }
  m_Allocator.Finalize();
  m_Reader.Finalize();
}

inline void PngDecoder::DestroyReadStruct() {
  nndetailImagePng_png_destroy_read_struct(&m_pWork->pPng, &m_pWork->pInfo,
    nullptr);
  m_Reader.Finalize();
}

void PngDecoder::Initialize(
  detail::PngMemoryAllocator::AllocateFunction allocate,
  void* pAllocateArgument, detail::PngMemoryAllocator::FreeFunction free,
  void* pFreeArgument) {
  m_Allocator.Initialize(allocate, pAllocateArgument, free, pFreeArgument);
  m_State = State_AllocatorSet;
}

void PngDecoder::SetImageData(const void* pData, size_t size) {
  m_pData = pData;
  m_DataSize = size;
  if (m_State == State_Analyzed) {
    DestroyReadStruct();
  }
  m_State = State_DataSet;
}

void PngDecoder::SetOutputPixelFormat(PixelFormat format) {
  m_OutputPixelFormat = format;
  if (m_State == State_Analyzed) {
    DestroyReadStruct();
  }
  m_State = m_State > State_AllocatorSet ? State_DataSet :
    State_AllocatorSet;
}

Dimension PngDecoder::GetDimension() const {
  return m_Dimension;
}

PixelFormat PngDecoder::GetOutputPixelFormat() const {
  return m_OutputPixelFormat == PixelFormat_Invalid ? m_PixelFormat :
    m_OutputPixelFormat;
}

size_t PngDecoder::GetRowStrideMin() const {
  return m_RowStrideMin;
}

}
