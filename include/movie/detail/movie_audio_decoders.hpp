#pragma once

#include <stddef.h>
#include <stdint.h>

#include "movie/movie_decoder_types.hpp"
#include "movie/movie_result.hpp"
#include "nn/codec/aac.hpp"
#include "nn/movie/detail/movie_message.hpp"

namespace nn::movie {

class MediaProperty;

}

struct OpusMSDecoder;

namespace movie::detail {

class IAudioDecoder {
public:
  virtual ~IAudioDecoder() {}

  virtual MovieResult Initialize(
    nn::movie::detail::AllocatorInfo* allocatorInfo,
    AudioDecoderOutputFormat outputFormat) = 0;
  virtual void Finalize() = 0;
  virtual MovieResult Configure(const nn::movie::MediaProperty* property,
    const char* configuration, size_t size) = 0;
  virtual MovieResult GetAudioFrameRequirements(
    nn::movie::MediaProperty* pOut) = 0;
  virtual MovieResult Decode(size_t* pOutConsumedSize,
    size_t* pOutSampleCount, int16_t* outputBuffer, size_t outputSize,
    const void* inputBuffer, size_t inputSize) = 0;
  virtual MovieResult GetAudioFrameProperties(
    nn::movie::MediaProperty* pOut) = 0;
  virtual MovieResult Flush() = 0;
};

class AacAudioDecoder : public IAudioDecoder {
public:
  AacAudioDecoder();
  ~AacAudioDecoder() override;

  MovieResult Initialize(nn::movie::detail::AllocatorInfo* allocatorInfo,
    AudioDecoderOutputFormat outputFormat) override;
  void Finalize() override;
  MovieResult Configure(const nn::movie::MediaProperty* property,
    const char* configuration, size_t size) override;
  MovieResult GetAudioFrameRequirements(
    nn::movie::MediaProperty* pOut) override;
  MovieResult Decode(size_t* pOutConsumedSize, size_t* pOutSampleCount,
    int16_t* outputBuffer, size_t outputSize, const void* inputBuffer,
    size_t inputSize) override;
  MovieResult GetAudioFrameProperties(nn::movie::MediaProperty* pOut) override;
  MovieResult Flush() override;

  MovieResult ConvertAacDecoderErrorCodeToResult(
    nn::codec::AacDecoderResult result) const;
  int GetMaxSampleCount(nn::codec::Mpeg4AudioObjectType type) const;

private:
  nn::codec::AacDecoder m_Decoder;
  void* m_pWorkBuffer;
  size_t m_WorkBufferSize;
  bool m_IsConfigured;
  int32_t m_ChannelCount;
  int32_t m_ObjectType;
  int32_t m_SampleRate;
  int32_t m_BitRate;
  bool m_IsDownmixed;
  size_t m_MaxInputSize;
  size_t m_InputBufferSize;
  size_t m_OutputBufferSize;
  AudioDecoderOutputFormat m_OutputFormat;
  nn::movie::detail::AllocatorInfo* m_pAllocatorInfo;
};

class OpusAudioDecoder : public IAudioDecoder {
public:
  OpusAudioDecoder();
  ~OpusAudioDecoder() override;

  MovieResult Initialize(nn::movie::detail::AllocatorInfo* allocatorInfo,
    AudioDecoderOutputFormat outputFormat) override;
  void Finalize() override;
  MovieResult Configure(const nn::movie::MediaProperty* property,
    const char* configuration, size_t size) override;
  MovieResult GetAudioFrameRequirements(
    nn::movie::MediaProperty* pOut) override;
  MovieResult Decode(size_t* pOutConsumedSize, size_t* pOutSampleCount,
    int16_t* outputBuffer, size_t outputSize, const void* inputBuffer,
    size_t inputSize) override;
  MovieResult GetAudioFrameProperties(nn::movie::MediaProperty* pOut) override;
  MovieResult Flush() override;

  MovieResult ConvertOpusDecoderErrorCodeToResult(int error) const;

private:
  bool m_IsConfigured;
  int32_t m_ChannelCount;
  int32_t m_SampleRate;
  int32_t m_BitRate;
  size_t m_MaxInputSize;
  size_t m_InputBufferSize;
  size_t m_OutputBufferSize;
  AudioDecoderOutputFormat m_OutputFormat;
  nn::movie::detail::AllocatorInfo* m_pAllocatorInfo;
  uint64_t m_Reserved[2];
  OpusMSDecoder* m_pDecoder;
  uint64_t m_Reserved2[2];
  bool m_IsPreSkipped;
  bool m_IsEndOfStream;
};

}
