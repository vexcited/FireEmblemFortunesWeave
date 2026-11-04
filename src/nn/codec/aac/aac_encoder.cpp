#include "nn/codec/aac.hpp"

namespace nn::detail {

[[noreturn]] void UnexpectedDefaultImpl();

}

namespace nn::codec {

size_t GetAacEncoderWorkBufferSize(int sampleRate, int channelCount,
  Mpeg4AudioObjectType type) {
  static const size_t AacLcSizes[] = {
    122384, 142944, 163504, 184064, 204632, 225192, 0, 266312,
  };
  static const size_t SbrSizes[] = {
    179344, 219408, 259472, 299536, 339608, 379672, 0, 459800,
  };

  switch (type) {
    case Mpeg4AudioObjectType_AacLc:
      return AacLcSizes[channelCount - 1];
    case Mpeg4AudioObjectType_Sbr:
      return SbrSizes[channelCount - 1];
    case Mpeg4AudioObjectType_Ps:
      return 253624;
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
}

size_t GetAacEncoderInputBufferSize(int channelCount,
  Mpeg4AudioObjectType type) {
  switch (type) {
    case Mpeg4AudioObjectType_AacLc:
      return static_cast<size_t>(channelCount * 1024) * sizeof(int16_t);
    case Mpeg4AudioObjectType_Sbr:
    case Mpeg4AudioObjectType_Ps:
      return static_cast<size_t>(channelCount * 2048) * sizeof(int16_t);
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
}

size_t GetAacEncoderOutputBufferSize(int channelCount,
  Mpeg4AudioObjectType type) {
  // The low frequency effects channel of 5.1 does not add output size.
  const int effectiveChannelCount =
    channelCount >= 6 ? channelCount - 1 : channelCount;
  return static_cast<size_t>(effectiveChannelCount) * 768;
}

int GetAacEncoderSampleRate(const AacEncoderType* encoder) {
  return encoder->sampleRate;
}

int GetAacEncoderChannelCount(const AacEncoderType* encoder) {
  return encoder->channelCount;
}

Mpeg4AudioObjectType GetAacEncoderMpeg4AudioObjectType(
  const AacEncoderType* encoder) {
  return static_cast<Mpeg4AudioObjectType>(encoder->objectType);
}

int GetAacEncoderBitRateMin(int sampleRate, int channelCount,
  Mpeg4AudioObjectType type) {
  switch (type) {
    case Mpeg4AudioObjectType_AacLc:
      return static_cast<int>(((channelCount - 1.0) * 3750.0 + 23250.0)
        * sampleRate / 96000.0);
    case Mpeg4AudioObjectType_Sbr:
      switch (sampleRate) {
        case 64000:
        case 88200: {
          static const int BitRates[] = {
            24008, 32008, 60016, 80024, 92336, 100032, 0, 133376,
          };
          return BitRates[channelCount - 1];
        }
        case 96000: {
          static const int BitRates[] = {
            32008, 36008, 80016, 106692, 123104, 133360, 0, 177816,
          };
          return BitRates[channelCount - 1];
        }
        case 16000:
        case 22050:
        case 24000:
        case 32000: {
          static const int BitRates[] = {
            8008, 16008, 26679, 40018, 43264, 45736, 0, 61568,
          };
          return BitRates[channelCount - 1];
        }
        case 44100: {
          static const int BitRates[] = {
            11377, 16008, 28442, 40018, 43756, 47404, 0, 63204,
          };
          return BitRates[channelCount - 1];
        }
        case 48000: {
          static const int BitRates[] = {
            12008, 16008, 30018, 40026, 46184, 50032, 0, 66708,
          };
          return BitRates[channelCount - 1];
        }
        default:
          nn::detail::UnexpectedDefaultImpl();
      }
    case Mpeg4AudioObjectType_Ps:
      switch (sampleRate) {
        case 16000:
        case 22050:
        case 24000:
        case 32000:
          return 8008;
        case 44100:
          return 11377;
        case 48000:
          return 12008;
        case 64000:
        case 88200:
          return 24008;
        case 96000:
          return 32008;
        default:
          nn::detail::UnexpectedDefaultImpl();
      }
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
}

int GetAacEncoderBitRateMax(int sampleRate, int channelCount,
  Mpeg4AudioObjectType type) {
  switch (type) {
    case Mpeg4AudioObjectType_AacLc: {
      // The low frequency effects channel of 5.1 does not add bit rate.
      const int effectiveChannelCount =
        channelCount > 5 ? channelCount - 1 : channelCount;
      return static_cast<int>(effectiveChannelCount * 576000.0 * sampleRate
        / 96000.0);
    }
    case Mpeg4AudioObjectType_Sbr:
      switch (sampleRate) {
        case 16000: {
          static const int BitRates[] = {
            48000, 96000, 119976, 159968, 184584, 199952, 0, 266608,
          };
          return BitRates[channelCount - 1];
        }
        case 22050:
        case 24000:
        case 32000:
        case 44100:
        case 48000: {
          static const int BitRates[] = {
            63992, 127992, 159976, 213304, 246120, 266624, 0, 355504,
          };
          return BitRates[channelCount - 1];
        }
        case 64000:
        case 88200:
        case 96000: {
          static const int BitRates[] = {
            159984, 255984, 399968, 533280, 615328, 666624, 0, 888832,
          };
          return BitRates[channelCount - 1];
        }
        default:
          nn::detail::UnexpectedDefaultImpl();
      }
    case Mpeg4AudioObjectType_Ps:
      switch (sampleRate) {
        case 16000:
          return 47992;
        case 22050:
        case 24000:
        case 32000:
        case 44100:
        case 48000:
          return 63992;
        case 64000:
        case 88200:
        case 96000:
          return 159984;
        default:
          nn::detail::UnexpectedDefaultImpl();
      }
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
}

}
