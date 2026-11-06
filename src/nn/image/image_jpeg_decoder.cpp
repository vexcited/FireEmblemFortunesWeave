#include "nn/diag/diag_abort.hpp"
#include "nn/diag/unexpected_default.hpp"
#include "nn/image/detail/image_jpeg_header.hpp"
#include "nn/image/image_jpeg.hpp"

namespace nn::image {

namespace {

enum State {
  State_Initialized = 0,
  State_DataSet = 1,
  State_Analyzed = 2,
};

}

JpegDecoder::JpegDecoder(MemoryResource* pAllocator)
  : m_pAllocator(pAllocator), m_State(State_Initialized),
    m_ResolutionDenominator(1), m_PixelFormat(PixelFormat_Rgba8) {}

JpegDecoder::~JpegDecoder() {}

void JpegDecoder::SetImageData(const void* pData, size_t size) {
  m_pData = pData;
  m_DataSize = size;
  m_State = State_DataSet;
}

void JpegDecoder::SetResolutionDenominator(int denominator) {
  m_ResolutionDenominator = denominator;
  m_State = m_pData != nullptr ? State_DataSet : State_Initialized;
}

void JpegDecoder::SetPixelFormat(PixelFormat format) {
  switch (format) {
    case PixelFormat_Rgb8:
    case PixelFormat_Rgba8:
      break;
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
  m_PixelFormat = format;
  m_State = m_pData != nullptr ? State_DataSet : State_Initialized;
}

JpegStatus JpegDecoder::Analyze() {
  NN_ABORT_UNLESS(m_State >= State_DataSet);

  detail::JpegHeader header = {};
  JpegStatus status = detail::ExtractJpegHeader(&header, m_pData, m_DataSize,
    m_ResolutionDenominator);
  if (status != JpegStatus_Ok) {
    return status;
  }

  m_Dimension = header.dimension;
  m_HasExif = header.hasExif;
  if (m_HasExif == true) {
    m_pExifData = header.pExifData;
    m_ExifSize = header.exifSize;
  }
  m_State = State_Analyzed;
  return JpegStatus_Ok;
}

Dimension JpegDecoder::GetAnalyzedDimension() const {
  return m_Dimension;
}

const void* JpegDecoder::GetAnalyzedExifData(size_t* pOutSize) const {
  if (m_HasExif == true) {
    *pOutSize = m_ExifSize;
    return m_pExifData;
  }
  return nullptr;
}

JpegStatus JpegDecoder::Decode(void* pOutPixels, size_t pixelsSize,
  int lineAlignment) {
  NN_ABORT_UNLESS(m_State >= State_Analyzed);
  return detail::DecodeJpegImpl(pOutPixels, m_Dimension, lineAlignment,
    m_ResolutionDenominator, m_PixelFormat, m_pData, m_DataSize,
    m_pAllocator);
}

JpegStatus JpegDecoder::DecodeWithPreconfiguredDecoder(void* pOutPixels,
  size_t pixelsSize, int lineAlignment, const void* pData, size_t size,
  const JpegDecoder& decoder) {
  NN_ABORT_UNLESS(decoder.m_State >= State_Analyzed);
  return detail::DecodeJpegImpl(pOutPixels, decoder.m_Dimension,
    lineAlignment, decoder.m_ResolutionDenominator, decoder.m_PixelFormat,
    pData, size, decoder.m_pAllocator);
}

JpegStatus JpegDecoder::GetExifData(const void** ppOutExifData,
  size_t* pOutExifSize, const void* pData, size_t size) {
  return detail::ExtractExifRegion(ppOutExifData, pOutExifSize, pData, size);
}

}
