#include "movie/detail/movie_audio_decoders.hpp"
#include "nn/movie/detail/movie_std_lib_allocator.hpp"
#include "nn/movie/movie_media_property.hpp"

namespace movie::detail {

AacAudioDecoder::AacAudioDecoder()
  : m_pWorkBuffer(nullptr), m_WorkBufferSize(0), m_IsConfigured(false),
    m_ChannelCount(0), m_ObjectType(0), m_SampleRate(0), m_BitRate(0),
    m_IsDownmixed(false), m_MaxInputSize(0), m_InputBufferSize(0),
    m_OutputBufferSize(0),
    m_OutputFormat(static_cast<AudioDecoderOutputFormat>(2)),
    m_pAllocatorInfo(nullptr) {
}

AacAudioDecoder::~AacAudioDecoder() {
}

MovieResult AacAudioDecoder::Initialize(
  nn::movie::detail::AllocatorInfo* allocatorInfo,
  AudioDecoderOutputFormat outputFormat) {
  if (m_Decoder.IsInitialized()) {
    return MovieResult_AlreadyInitialized;
  }

  m_pAllocatorInfo = allocatorInfo;
  m_OutputFormat = outputFormat;
  m_IsDownmixed = false;
  return MovieResult_Success;
}

void AacAudioDecoder::Finalize() {
  if (m_Decoder.IsInitialized()) {
    m_Decoder.Finalize();
    if (m_pWorkBuffer != nullptr) {
      nn::movie::detail::FreeMemory(m_pWorkBuffer, m_pAllocatorInfo);
      m_pWorkBuffer = nullptr;
    }
  }

  m_IsConfigured = false;
}

MovieResult AacAudioDecoder::ConvertAacDecoderErrorCodeToResult(
  nn::codec::AacDecoderResult result) const {
  switch (static_cast<int>(result)) {
    case 0:
      return MovieResult_Success;
    case 2:
      return static_cast<MovieResult>(63);
    case 0x1002:
      return static_cast<MovieResult>(66);
    case 0x2001:
    case 0x200a:
      return MovieResult_InvalidArgument;
    case 0x2002:
      return static_cast<MovieResult>(67);
    case 0x2003:
      return static_cast<MovieResult>(68);
    case 0x2007:
      return static_cast<MovieResult>(72);
    case 0x2008:
      return static_cast<MovieResult>(73);
    case 0x200c:
      return static_cast<MovieResult>(6);
    case 0x4005:
      return static_cast<MovieResult>(81);
    case 0xfffe:
      return static_cast<MovieResult>(9);
    default:
      return static_cast<MovieResult>(64);
  }
}

int AacAudioDecoder::GetMaxSampleCount(
  nn::codec::Mpeg4AudioObjectType type) const {
  if (type == nn::codec::Mpeg4AudioObjectType_Sbr ||
    type == nn::codec::Mpeg4AudioObjectType_Ps) {
    return 2048;
  }

  return 1024;
}

MovieResult AacAudioDecoder::GetAudioFrameRequirements(
  nn::movie::MediaProperty* pOut) {
  pOut->SetInt32("channel-count", m_ChannelCount);
  pOut->SetInt32("sample-rate", m_SampleRate);
  pOut->SetSize("input-buf-size", m_InputBufferSize);
  pOut->SetSize("max-input-size", m_MaxInputSize);
  pOut->SetSize("output-buf-size", m_OutputBufferSize);
  return MovieResult_Success;
}

MovieResult AacAudioDecoder::GetAudioFrameProperties(
  nn::movie::MediaProperty* pOut) {
  pOut->Clear();
  pOut->SetString("mime", "audio/mp4a-latm", 15);
  pOut->SetInt32("channel-count", m_ChannelCount);
  pOut->SetInt32("sample-rate", m_SampleRate);
  pOut->SetInt32("bitrate", m_BitRate);
  return MovieResult_Success;
}

}
