#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/image/image_types.hpp"

namespace nn {

class MemoryResource;

}

namespace nn::image {

class ExifBuilder;

enum JpegSamplingRatio : int32_t {
  JpegSamplingRatio_444,
  JpegSamplingRatio_422,
  JpegSamplingRatio_420,
};

class JpegDecoder {
public:
  explicit JpegDecoder(MemoryResource* pAllocator);
  virtual ~JpegDecoder();

  void SetImageData(const void* pData, size_t size);
  void SetResolutionDenominator(int denominator);
  void SetPixelFormat(PixelFormat format);
  JpegStatus Analyze();
  Dimension GetAnalyzedDimension() const;
  const void* GetAnalyzedExifData(size_t* pOutSize) const;
  JpegStatus Decode(void* pOutPixels, size_t pixelsSize, int lineAlignment);

  static JpegStatus DecodeWithPreconfiguredDecoder(void* pOutPixels,
    size_t pixelsSize, int lineAlignment, const void* pData, size_t size,
    const JpegDecoder& decoder);
  static JpegStatus GetExifData(const void** ppOutExifData,
    size_t* pOutExifSize, const void* pData, size_t size);

private:
  MemoryResource* m_pAllocator;
  int m_State;
  const void* m_pData;
  size_t m_DataSize;
  int m_ResolutionDenominator;
  PixelFormat m_PixelFormat;
  Dimension m_Dimension;
  bool m_HasExif;
  const void* m_pExifData;
  uint16_t m_ExifSize;
};

class JpegEncoder {
public:
  explicit JpegEncoder(MemoryResource* pAllocator);
  virtual ~JpegEncoder();

  void SetPixelData(const void* pPixels, PixelFormat format,
    const Dimension& dimension, int lineAlignment);
  void SetQuality(int quality);
  void SetSamplingRatio(JpegSamplingRatio samplingRatio);
  JpegStatus Analyze();
  JpegStatus Encode(size_t* pOutSize, void* pOutData, size_t size,
    ExifBuilder* pExifBuilder);

private:
  MemoryResource* m_pAllocator;
  int m_State;
  const void* m_pPixels;
  PixelFormat m_PixelFormat;
  Dimension m_Dimension;
  int m_LineAlignment;
  int m_Quality;
  JpegSamplingRatio m_SamplingRatio;
};

namespace detail {

JpegStatus DecodeJpegImpl(void* pOutPixels, Dimension dimension,
  int lineAlignment, int resolutionDenominator, PixelFormat format,
  const void* pData, size_t size, MemoryResource* pAllocator);

}

}
