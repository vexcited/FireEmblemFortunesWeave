#include "nn/diag/diag_abort.hpp"
#include "nn/diag/unexpected_default.hpp"
#include "nn/image/image_jpeg.hpp"

namespace nn::image {

namespace {

enum State {
  State_Initialized = 0,
  State_DataSet = 1,
  State_Analyzed = 2,
};

const int DefaultQuality = 100;

}

JpegEncoder::JpegEncoder(MemoryResource* pAllocator)
  : m_pAllocator(pAllocator), m_State(State_Initialized),
    m_Quality(DefaultQuality), m_SamplingRatio(JpegSamplingRatio_420) {}

JpegEncoder::~JpegEncoder() {}

void JpegEncoder::SetPixelData(const void* pPixels, PixelFormat format,
  const Dimension& dimension, int lineAlignment) {
  switch (format) {
    case PixelFormat_Rgb8:
    case PixelFormat_Rgba8:
      break;
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
  m_pPixels = pPixels;
  m_PixelFormat = format;
  m_Dimension = dimension;
  m_LineAlignment = lineAlignment;
  m_State = State_DataSet;
}

void JpegEncoder::SetQuality(int quality) {
  m_Quality = quality;
  m_State = m_pPixels != nullptr ? State_DataSet : State_Initialized;
}

void JpegEncoder::SetSamplingRatio(JpegSamplingRatio samplingRatio) {
  m_SamplingRatio = samplingRatio;
  m_State = m_pPixels != nullptr ? State_DataSet : State_Initialized;
}

JpegStatus JpegEncoder::Analyze() {
  NN_ABORT_UNLESS(m_State >= State_DataSet);
  m_State = State_Analyzed;
  return JpegStatus_Ok;
}

}
