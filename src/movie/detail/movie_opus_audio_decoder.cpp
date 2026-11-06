#include "movie/detail/movie_audio_decoders.hpp"
#include "nn/movie/movie_media_property.hpp"
#include "opus/include/opus_multistream.h"

namespace movie::detail {

OpusAudioDecoder::OpusAudioDecoder()
  : m_IsConfigured(false), m_ChannelCount(0), m_SampleRate(0), m_BitRate(0),
    m_MaxInputSize(0), m_InputBufferSize(0), m_OutputBufferSize(0),
    m_OutputFormat(static_cast<AudioDecoderOutputFormat>(2)),
    m_pAllocatorInfo(nullptr), m_Reserved{}, m_pDecoder(nullptr),
    m_Reserved2{}, m_IsPreSkipped(false), m_IsEndOfStream(false) {
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

}
