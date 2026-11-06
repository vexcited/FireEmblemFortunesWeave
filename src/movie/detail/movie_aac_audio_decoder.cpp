#include "movie/detail/movie_audio_decoders.hpp"
#include "movie/detail/movie_utils.hpp"
#include "nn/movie/detail/movie_std_lib_allocator.hpp"
#include "nn/movie/movie_media_property.hpp"

namespace nn::movie::detail {

void* AllocateMemory(size_t alignment, size_t size,
  AllocatorInfo* allocatorInfo);

}

namespace movie::detail {

namespace {

constexpr MovieResult ResultInvalidConfiguration =
  static_cast<MovieResult>(46);

constexpr size_t InputSizeMin = 0x2000;
constexpr size_t InputBytesPerChannel = 768;
constexpr size_t WorkBufferSize = 0x60000;
constexpr size_t WorkBufferAlignment = 16;

}

AacAudioDecoder::AacAudioDecoder()
  : m_pWorkBuffer(nullptr), m_WorkBufferSize(0), m_IsConfigured(false),
    m_ChannelCount(0), m_DecoderSampleRate(0), m_SampleRate(0), m_BitRate(0),
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

MovieResult AacAudioDecoder::Configure(const nn::movie::MediaProperty* property,
  const char* configuration, size_t size) {
  int32_t channelCount = 0;
  int32_t sampleRate = 0;
  if (!property->GetInt32(&channelCount, "channel-count") ||
    !property->GetInt32(&sampleRate, "sample-rate")) {
    return ResultInvalidConfiguration;
  }

  size_t maxInputSize = 0;
  if (!property->GetSize(&maxInputSize, "max-input-size") ||
    maxInputSize < InputSizeMin) {
    maxInputSize = InputSizeMin;
  }

  m_ChannelCount = channelCount;
  m_MaxInputSize = maxInputSize;
  m_InputBufferSize = InputBytesPerChannel * channelCount;
  m_DecoderSampleRate = sampleRate;
  m_SampleRate = sampleRate;
  int sampleByteSize = GetAudioSampleByteSize(m_OutputFormat);
  if (m_IsConfigured) {
    Finalize();
  }

  m_WorkBufferSize = WorkBufferSize;
  m_pWorkBuffer = nn::movie::detail::AllocateMemory(WorkBufferAlignment,
    WorkBufferSize, m_pAllocatorInfo);
  if (m_pWorkBuffer == nullptr) {
    return MovieResult_OutOfMemory;
  }

  int32_t downmix = 0;
  if (property->GetInt32(&downmix, "Downmix-Aac-Audio") && downmix == 1) {
    m_IsDownmixed = true;
  }

  nn::codec::AacDecoderResult result;
  if (m_IsDownmixed) {
    result = nn::codec::InitializeAacDecoderForAnyTypeWithDownmix(
      m_Decoder.GetBase(), m_DecoderSampleRate, m_ChannelCount, m_pWorkBuffer,
      m_WorkBufferSize);
  }
  else {
    result = nn::codec::InitializeAacDecoderForAnyType(m_Decoder.GetBase(),
      m_DecoderSampleRate, m_ChannelCount, m_pWorkBuffer, m_WorkBufferSize);
  }

  if (result != nn::codec::AacDecoderResult_Success) {
    return ConvertAacDecoderErrorCodeToResult(result);
  }

  nn::codec::Mpeg4AudioObjectType type = m_Decoder.GetMpeg4AudioObjectType();
  m_OutputBufferSize = m_ChannelCount * GetMaxSampleCount(type) *
    sampleByteSize;
  m_IsConfigured = true;
  return MovieResult_Success;
}

MovieResult AacAudioDecoder::Decode(size_t* pOutConsumedSize,
  size_t* pOutSampleCount, int16_t* outputBuffer, size_t outputSize,
  const void* inputBuffer, size_t inputSize) {
  int sampleCount = 0;
  nn::codec::AacDecoderResult result = m_Decoder.DecodeInterleaved(
    pOutConsumedSize, &sampleCount, outputBuffer, outputSize, inputBuffer,
    inputSize);
  if (result != nn::codec::AacDecoderResult_Success) {
    return ConvertAacDecoderErrorCodeToResult(result);
  }

  int sampleRate = m_Decoder.GetSampleRate();
  if (sampleRate != m_SampleRate) {
    m_SampleRate = sampleRate;
  }

  int channelCount = m_Decoder.GetChannelCount();
  if (channelCount != m_ChannelCount) {
    m_ChannelCount = channelCount;
  }

  *pOutSampleCount = sampleCount;
  return MovieResult_Success;
}

MovieResult AacAudioDecoder::Flush() {
  if (!m_IsConfigured) {
    return MovieResult_Success;
  }

  if (m_Decoder.IsInitialized()) {
    m_Decoder.Finalize();
  }

  nn::codec::AacDecoderResult result;
  if (m_IsDownmixed) {
    result = nn::codec::InitializeAacDecoderForAnyTypeWithDownmix(
      m_Decoder.GetBase(), m_DecoderSampleRate, m_ChannelCount, m_pWorkBuffer,
      m_WorkBufferSize);
  }
  else {
    result = nn::codec::InitializeAacDecoderForAnyType(m_Decoder.GetBase(),
      m_DecoderSampleRate, m_ChannelCount, m_pWorkBuffer, m_WorkBufferSize);
  }

  return ConvertAacDecoderErrorCodeToResult(result);
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
