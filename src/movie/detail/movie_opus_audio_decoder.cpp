#include <cstring>

#include "movie/detail/movie_audio_decoders.hpp"
#include "movie/detail/movie_utils.hpp"
#include "nn/movie/movie_media_property.hpp"
#include "opus/include/opus_multistream.h"

namespace movie::detail {

namespace {

constexpr MovieResult ResultInvalidConfiguration =
  static_cast<MovieResult>(46);

constexpr size_t OpusHeadSize = 19;
constexpr size_t InputSizeMin = 0x2000;
constexpr int SamplesPerBufferMax = 1024;
constexpr int ChannelCountMax = 8;

const unsigned char DefaultOpusChannelLayout[] = {0, 1};

}

OpusAudioDecoder::OpusAudioDecoder()
  : m_IsConfigured(false), m_ChannelCount(0), m_SampleRate(0), m_BitRate(0),
    m_MaxInputSize(0), m_InputBufferSize(0), m_OutputBufferSize(0),
    m_OutputFormat(static_cast<AudioDecoderOutputFormat>(2)),
    m_pAllocatorInfo(nullptr), m_CodecDelay(0), m_SeekPreRoll(0),
    m_pDecoder(nullptr) {
}

OpusAudioDecoder::~OpusAudioDecoder() {
}

MovieResult OpusAudioDecoder::Initialize(
  nn::movie::detail::AllocatorInfo* allocatorInfo,
  AudioDecoderOutputFormat outputFormat) {
  if (m_pAllocatorInfo != nullptr) {
    return MovieResult_AlreadyInitialized;
  }

  m_pAllocatorInfo = allocatorInfo;
  m_OutputFormat = outputFormat;
  return MovieResult_Success;
}

void OpusAudioDecoder::Finalize() {
  if (m_pDecoder != nullptr) {
    opus_multistream_decoder_destroy(m_pDecoder);
    m_pDecoder = nullptr;
  }

  m_IsConfigured = false;
}

MovieResult OpusAudioDecoder::ConvertOpusDecoderErrorCodeToResult(
  int error) const {
  switch (error) {
    case OPUS_OK:
      return MovieResult_Success;
    case OPUS_BAD_ARG:
      return MovieResult_InvalidArgument;
    case OPUS_BUFFER_TOO_SMALL:
      return static_cast<MovieResult>(6);
    case OPUS_INTERNAL_ERROR:
      return MovieResult_Unknown;
    case OPUS_INVALID_PACKET:
      return static_cast<MovieResult>(9);
    case OPUS_UNIMPLEMENTED:
      return static_cast<MovieResult>(7);
    case OPUS_INVALID_STATE:
      return static_cast<MovieResult>(60);
    case OPUS_ALLOC_FAIL:
      return MovieResult_OutOfMemory;
    default:
      return MovieResult_Unknown;
  }
}

MovieResult OpusAudioDecoder::Configure(
  const nn::movie::MediaProperty* property, const char* configuration,
  size_t size) {
  if (size == 0) {
    return MovieResult_InvalidArgument;
  }

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

  m_MaxInputSize = maxInputSize;
  m_InputBufferSize = maxInputSize;
  m_ChannelCount = channelCount;
  m_SampleRate = sampleRate;
  m_OutputBufferSize = m_ChannelCount *
    static_cast<int64_t>(GetAudioSampleByteSize(m_OutputFormat)) *
    SamplesPerBufferMax;
  if (m_IsConfigured) {
    Finalize();
  }

  // The configuration starts with the OpusHead header.
  if (size < OpusHeadSize) {
    return ResultInvalidConfiguration;
  }

  const unsigned char* header =
    reinterpret_cast<const unsigned char*>(configuration);
  int headerChannelCount = header[9];
  if (headerChannelCount < 1 || headerChannelCount > ChannelCountMax) {
    return ResultInvalidConfiguration;
  }

  int16_t gain;
  std::memcpy(&gain, header + 16, sizeof(gain));
  int channelMapping = header[18];
  int streamCount;
  int coupledStreamCount;
  if (channelMapping == 0) {
    if (headerChannelCount > 2) {
      return ResultInvalidConfiguration;
    }

    streamCount = 1;
    coupledStreamCount = headerChannelCount == 2;
  }
  else {
    if (size < static_cast<size_t>(headerChannelCount) + 21) {
      return ResultInvalidConfiguration;
    }

    streamCount = header[19];
    coupledStreamCount = header[20];
    if (streamCount + coupledStreamCount != headerChannelCount) {
      return ResultInvalidConfiguration;
    }
  }

  m_Header.channelMapping = channelMapping;
  m_Header.gain = gain;
  m_Header.channelCount = headerChannelCount;
  m_Header.streamCount = streamCount;
  m_Header.coupledStreamCount = coupledStreamCount;
  int error = OPUS_INVALID_STATE;
  // Mapping families other than 0 pass the family value as the stream map.
  m_pDecoder = opus_multistream_decoder_create(m_SampleRate,
    m_Header.channelCount, m_Header.streamCount, m_Header.coupledStreamCount,
    m_Header.channelMapping != 0 ?
      reinterpret_cast<const unsigned char*>(&m_Header.channelMapping) :
      DefaultOpusChannelLayout,
    &error);
  if (m_pDecoder == nullptr) {
    return MovieResult_NotInitialized;
  }

  if (error != OPUS_OK) {
    return ConvertOpusDecoderErrorCodeToResult(error);
  }

  error = opus_multistream_decoder_ctl(m_pDecoder,
    OPUS_SET_GAIN(m_Header.gain));
  if (error != OPUS_OK) {
    return ConvertOpusDecoderErrorCodeToResult(error);
  }

  m_IsConfigured = true;
  if (!property->ContainsKey("csd-0")) {
    return MovieResult_Success;
  }

  size_t offset = 0;
  property->GetSize(&offset, "csd-0");
  if (offset == 0 || !property->ContainsKey("csd-1")) {
    return MovieResult_Success;
  }

  size_t codecDelaySize = 0;
  if (property->GetSize(&codecDelaySize, "csd-1") &&
    codecDelaySize >= sizeof(m_CodecDelay) &&
    offset + codecDelaySize <= size) {
    std::memcpy(&m_CodecDelay, configuration + offset, sizeof(m_CodecDelay));
  }
  else if (codecDelaySize == 0) {
    return MovieResult_Success;
  }

  if (property->ContainsKey("csd-2")) {
    property->GetSize(&offset, "csd-2");
  }

  return MovieResult_Success;
}

MovieResult OpusAudioDecoder::GetAudioFrameRequirements(
  nn::movie::MediaProperty* pOut) {
  pOut->SetInt32("channel-count", m_ChannelCount);
  pOut->SetInt32("sample-rate", m_SampleRate);
  pOut->SetSize("input-buf-size", m_InputBufferSize);
  pOut->SetSize("max-input-size", m_MaxInputSize);
  pOut->SetSize("output-buf-size", m_OutputBufferSize);
  return MovieResult_Success;
}

MovieResult OpusAudioDecoder::Decode(size_t* pOutConsumedSize,
  size_t* pOutSampleCount, int16_t* outputBuffer, size_t outputSize,
  const void* inputBuffer, size_t inputSize) {
  int sampleCount = opus_multistream_decode(m_pDecoder,
    static_cast<const unsigned char*>(inputBuffer), inputSize, outputBuffer,
    outputSize / (sizeof(int16_t) * m_ChannelCount), 0);
  *pOutSampleCount = sampleCount;
  *pOutConsumedSize = inputSize;
  return MovieResult_Success;
}

MovieResult OpusAudioDecoder::GetAudioFrameProperties(
  nn::movie::MediaProperty* pOut) {
  pOut->Clear();
  pOut->SetString("mime", "audio/opus", 10);
  pOut->SetInt32("channel-count", m_ChannelCount);
  pOut->SetInt32("sample-rate", m_SampleRate);
  pOut->SetInt32("bitrate", m_BitRate);
  return MovieResult_Success;
}

MovieResult OpusAudioDecoder::Flush() {
  if (!m_IsConfigured) {
    return MovieResult_Success;
  }

  int error = opus_multistream_decoder_init(m_pDecoder, m_SampleRate,
    m_Header.channelCount, m_Header.streamCount, m_Header.coupledStreamCount,
    m_Header.channelMapping > 0 ?
      reinterpret_cast<const unsigned char*>(&m_Header.channelMapping) :
      DefaultOpusChannelLayout);
  if (m_pDecoder == nullptr) {
    return MovieResult_NotInitialized;
  }

  if (error != OPUS_OK) {
    return ConvertOpusDecoderErrorCodeToResult(error);
  }

  return ConvertOpusDecoderErrorCodeToResult(opus_multistream_decoder_ctl(
    m_pDecoder, OPUS_SET_GAIN(m_Header.gain)));
}

}
