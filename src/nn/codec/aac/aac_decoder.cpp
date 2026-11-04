#include "nn/codec/aac.hpp"

namespace nn::codec {
namespace {

// Decoders initialized for any object type report HE-AAC v2.
constexpr int32_t ObjectTypeAny = 10000;

}

size_t GetAacDecoderWorkBufferSize(int sampleRate, int channelCount,
  Mpeg4AudioObjectType type) {
  return detail::GetAacDecoderWorkBufferSizeImpl(sampleRate, channelCount,
    type);
}

int GetAacDecoderSampleRate(const AacDecoderType* decoder) {
  return decoder->sampleRate;
}

int GetAacDecoderChannelCount(const AacDecoderType* decoder) {
  return decoder->channelCount;
}

Mpeg4AudioObjectType GetAacDecoderMpeg4AudioObjectType(
  const AacDecoderType* decoder) {
  if (decoder->objectType == ObjectTypeAny) {
    return Mpeg4AudioObjectType_Ps;
  }
  return static_cast<Mpeg4AudioObjectType>(decoder->objectType);
}

bool IsSupportedDownMix(int channelCount) {
  return channelCount == 6;
}

}
