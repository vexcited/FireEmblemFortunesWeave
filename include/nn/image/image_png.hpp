#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/image/detail/image_png_util.hpp"
#include "nn/image/image_types.hpp"

namespace nn::image {

namespace detail {

struct PngReadWork;

}

class PngDecoder {
public:
  PngDecoder();
  virtual ~PngDecoder();

  void Initialize(detail::PngMemoryAllocator::AllocateFunction allocate,
    void* pAllocateArgument, detail::PngMemoryAllocator::FreeFunction free,
    void* pFreeArgument);
  void SetImageData(const void* pData, size_t size);
  void SetOutputPixelFormat(PixelFormat format);
  JpegStatus Analyze();
  Dimension GetDimension() const;
  PixelFormat GetOutputPixelFormat() const;
  size_t GetRowStrideMin() const;
  JpegStatus Decode(void* pOutPixels, size_t pixelsSize, size_t rowStride);

private:
  void DestroyReadStruct();

  int m_State;
  const void* m_pData;
  size_t m_DataSize;
  PixelFormat m_OutputPixelFormat;
  PixelFormat m_PixelFormat;
  Dimension m_Dimension;
  size_t m_RowStrideMin;
  detail::PngMemoryAllocator m_Allocator;
  detail::PngStreamReader m_Reader;
  detail::PngReadWork* m_pWork;
  int m_Status;
};

class PngEncoder {
public:
  PngEncoder();
  virtual ~PngEncoder();

  void Initialize(detail::PngMemoryAllocator::AllocateFunction allocate,
    void* pAllocateArgument, detail::PngMemoryAllocator::FreeFunction free,
    void* pFreeArgument);
  void SetPixelData(const void* pPixels, size_t pixelsSize,
    PixelFormat format, Dimension dimension, size_t rowStride);
  size_t GetPngDataSizeMax() const;
  JpegStatus Encode(size_t* pOutSize, void* pOutData, size_t size);

private:
  int m_State;
  const void* m_pPixels;
  PixelFormat m_PixelFormat;
  Dimension m_Dimension;
  size_t m_RowStride;
  detail::PngMemoryAllocator m_Allocator;
  int m_Status;
};

}
