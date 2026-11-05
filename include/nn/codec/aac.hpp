#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/lmem/frame_heap.hpp"

namespace nn::codec {

enum Mpeg4AudioObjectType {
  Mpeg4AudioObjectType_AacLc = 2,
  Mpeg4AudioObjectType_Sbr = 5,
  Mpeg4AudioObjectType_Ps = 29,
};

struct AacDecoderType {
  void* handle;
  void* workBuffer;
  lmem::FrameHeapState heapState;
  size_t workBufferSize;
  int32_t sampleRate;
  int32_t channelCount;
  int32_t objectType;
};

struct AacEncoderType {
  void* handle;
  void* workBuffer;
  size_t workBufferSize;
  bool isInitialized;
  int32_t sampleRate;
  int32_t channelCount;
  int32_t objectType;
  int32_t bitRate;
  int32_t frameSampleCount;
  size_t inputBufferSize;
  size_t outputBufferSize;
};

enum AacDecoderResult {
  AacDecoderResult_Success = 0,
  AacDecoderResult_UnsupportedAudioObjectType = 0x2002,
  AacDecoderResult_UnsupportedFormat = 0x2003,
  AacDecoderResult_UnsupportedChannelConfig = 0x2007,
  AacDecoderResult_UnsupportedSampleRate = 0x2008,
  AacDecoderResult_InvalidStream = 0xfffe,
  AacDecoderResult_Unknown = 0xffff,
};

enum AacEncoderResult {
  AacEncoderResult_Success = 0,
  AacEncoderResult_UnsupportedSampleRate = 256,
  AacEncoderResult_UnsupportedChannelCount = 257,
  AacEncoderResult_UnsupportedAudioObjectType = 258,
  AacEncoderResult_InvalidParameter = 64,
  AacEncoderResult_EncodeError = 96,
  AacEncoderResult_EndOfStream = 128,
};

static_assert(sizeof(AacDecoderType) == 56);
static_assert(sizeof(AacEncoderType) == 64);

size_t GetAacDecoderWorkBufferSize(int sampleRate, int channelCount,
  Mpeg4AudioObjectType type);
int GetAacDecoderSampleRate(const AacDecoderType* decoder);
int GetAacDecoderChannelCount(const AacDecoderType* decoder);
Mpeg4AudioObjectType GetAacDecoderMpeg4AudioObjectType(
  const AacDecoderType* decoder);
bool IsSupportedDownMix(int channelCount);
AacDecoderResult InitializeAacDecoder(AacDecoderType* decoder, int sampleRate,
  int channelCount, Mpeg4AudioObjectType type, void* buffer, size_t size);
AacDecoderResult InitializeAacDecoderForAnyType(AacDecoderType* decoder,
  int sampleRate, int channelCount, void* buffer, size_t size);
AacDecoderResult InitializeAacDecoderForAnyTypeWithDownmix(
  AacDecoderType* decoder, int sampleRate, int channelCount, void* buffer,
  size_t size);
void FinalizeAacDecoder(AacDecoderType* decoder);
AacDecoderResult DecodeAacInterleaved(AacDecoderType* decoder,
  size_t* consumedSize, int* sampleCount, int16_t* outputBuffer,
  size_t outputSize, const void* inputBuffer, size_t inputSize);

size_t GetAacEncoderWorkBufferSize(int sampleRate, int channelCount,
  Mpeg4AudioObjectType type);
size_t GetAacEncoderInputBufferSize(int channelCount,
  Mpeg4AudioObjectType type);
size_t GetAacEncoderOutputBufferSize(int channelCount,
  Mpeg4AudioObjectType type);
int GetAacEncoderSampleRate(const AacEncoderType* encoder);
int GetAacEncoderChannelCount(const AacEncoderType* encoder);
Mpeg4AudioObjectType GetAacEncoderMpeg4AudioObjectType(
  const AacEncoderType* encoder);
int GetAacEncoderBitRateMin(int sampleRate, int channelCount,
  Mpeg4AudioObjectType type);
int GetAacEncoderBitRateMax(int sampleRate, int channelCount,
  Mpeg4AudioObjectType type);
AacEncoderResult InitializeAacEncoder(AacEncoderType* encoder, int sampleRate,
  int channelCount, Mpeg4AudioObjectType type, int bitRate, void* buffer,
  size_t size);
void FinalizeAacEncoder(AacEncoderType* encoder);
int GetAacEncoderBitRate(const AacEncoderType* encoder);
void SetAacEncoderBitRate(AacEncoderType* encoder, int bitRate);
void ResetAacEncoder(AacEncoderType* encoder);
AacEncoderResult EncodeAacInterleaved(AacEncoderType* encoder,
  size_t* outputSize, void* outputBuffer, size_t outputBufferSize,
  const int16_t* inputBuffer, int sampleCount);
bool FlushAacEncoderRemainingData(AacEncoderType* encoder, size_t* outputSize,
  void* outputBuffer, size_t outputBufferSize);

namespace detail {

size_t GetAacDecoderWorkBufferSizeImpl(int sampleRate, int channelCount,
  Mpeg4AudioObjectType type);
void GetAudioSpecificConfig(uint8_t* buffer, size_t bufferSize,
  uint32_t* size, int sampleRate, int channelCount, Mpeg4AudioObjectType type,
  bool isFullSampleRate);

}
}

namespace nn::codec {

class IAacDecoder {
 public:
  virtual ~IAacDecoder() {}

  virtual size_t GetWorkBufferSize(int sampleRate, int channelCount,
    Mpeg4AudioObjectType type) const = 0;
  virtual bool IsInitialized() const = 0;
  virtual AacDecoderResult Initialize(int sampleRate, int channelCount,
    Mpeg4AudioObjectType type, void* buffer, size_t size) = 0;
  virtual void Finalize() = 0;
  virtual int GetSampleRate() const = 0;
  virtual int GetChannelCount() const = 0;
  virtual Mpeg4AudioObjectType GetMpeg4AudioObjectType() const = 0;
  virtual AacDecoderResult DecodeInterleaved(size_t* consumedSize,
    int* sampleCount, int16_t* outputBuffer, size_t outputSize,
    const void* inputBuffer, size_t inputSize) = 0;
};

class AacDecoder : public IAacDecoder {
 public:
  AacDecoder();
  ~AacDecoder() override;

  size_t GetWorkBufferSize(int sampleRate, int channelCount,
    Mpeg4AudioObjectType type) const override {
    return GetAacDecoderWorkBufferSize(sampleRate, channelCount, type);
  }

  bool IsInitialized() const override {
    return m_Decoder.workBuffer != nullptr;
  }

  AacDecoderResult Initialize(int sampleRate, int channelCount,
    Mpeg4AudioObjectType type, void* buffer, size_t size) override;

  void Finalize() override {
    FinalizeAacDecoder(&m_Decoder);
  }

  int GetSampleRate() const override {
    return GetAacDecoderSampleRate(&m_Decoder);
  }

  int GetChannelCount() const override {
    return GetAacDecoderChannelCount(&m_Decoder);
  }

  Mpeg4AudioObjectType GetMpeg4AudioObjectType() const override {
    return GetAacDecoderMpeg4AudioObjectType(&m_Decoder);
  }

  AacDecoderResult DecodeInterleaved(size_t* consumedSize, int* sampleCount,
    int16_t* outputBuffer, size_t outputSize, const void* inputBuffer,
    size_t inputSize) override {
    return DecodeAacInterleaved(&m_Decoder, consumedSize, sampleCount,
      outputBuffer, outputSize, inputBuffer, inputSize);
  }

 private:
  AacDecoderType m_Decoder;
};

}
