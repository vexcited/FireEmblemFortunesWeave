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

static_assert(sizeof(AacDecoderType) == 56);
static_assert(sizeof(AacEncoderType) == 64);

size_t GetAacDecoderWorkBufferSize(int sampleRate, int channelCount,
  Mpeg4AudioObjectType type);
int GetAacDecoderSampleRate(const AacDecoderType* decoder);
int GetAacDecoderChannelCount(const AacDecoderType* decoder);
Mpeg4AudioObjectType GetAacDecoderMpeg4AudioObjectType(
  const AacDecoderType* decoder);
bool IsSupportedDownMix(int channelCount);

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

namespace detail {

size_t GetAacDecoderWorkBufferSizeImpl(int sampleRate, int channelCount,
  Mpeg4AudioObjectType type);
void GetAudioSpecificConfig(uint8_t* buffer, size_t bufferSize,
  uint32_t* size, int sampleRate, int channelCount, Mpeg4AudioObjectType type,
  bool isFullSampleRate);

}
}
