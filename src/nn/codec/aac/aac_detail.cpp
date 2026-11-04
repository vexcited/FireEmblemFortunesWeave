#include "nn/codec/aac.hpp"

namespace nn::diag::detail {

[[noreturn]] void AbortImpl();

}

namespace nn::codec::detail {
namespace {

uint32_t GetSamplingFrequencyIndex(int sampleRate) {
  switch (sampleRate) {
    case 96000:
      return 0;
    case 88200:
      return 1;
    case 64000:
      return 2;
    case 48000:
      return 3;
    case 44100:
      return 4;
    case 32000:
      return 5;
    case 24000:
      return 6;
    case 22050:
      return 7;
    case 16000:
      return 8;
    case 12000:
      return 9;
    case 11025:
      return 10;
    case 8000:
      return 11;
    case 7350:
      return 12;
    default:
      return 15;
  }
}

}

size_t GetAacDecoderWorkBufferSizeImpl(int sampleRate, int channelCount,
  Mpeg4AudioObjectType type) {
  size_t size = 171584 + static_cast<size_t>(channelCount) * 13072;
  if (type == Mpeg4AudioObjectType_Ps || type == Mpeg4AudioObjectType_Sbr) {
    size += 8584 + static_cast<size_t>(channelCount + 1) * 10160;
  }
  return size;
}

void GetAudioSpecificConfig(uint8_t* buffer, size_t bufferSize,
  uint32_t* size, int sampleRate, int channelCount, Mpeg4AudioObjectType type,
  bool isFullSampleRate) {
  if (bufferSize < sizeof(uint32_t)) {
    nn::diag::detail::AbortImpl();
  }

  // SBR is signaled implicitly, so the configuration describes the AAC LC
  // core running at half the sample rate.
  const bool isSbr =
    type == Mpeg4AudioObjectType_Sbr || type == Mpeg4AudioObjectType_Ps;
  const int coreSampleRate =
    isFullSampleRate || !isSbr ? sampleRate : sampleRate / 2;
  const uint32_t objectType = isSbr ? Mpeg4AudioObjectType_AacLc : type;
  const uint8_t channelConfiguration = channelCount == 8 ? 7 : channelCount;

  const uint32_t config = objectType << 27
    | GetSamplingFrequencyIndex(coreSampleRate) << 23
    | static_cast<uint32_t>(channelConfiguration) << 19;
  *reinterpret_cast<uint32_t*>(buffer) = __builtin_bswap32(config);
  *size = sizeof(uint32_t);
}

}
