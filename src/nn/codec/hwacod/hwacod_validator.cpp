#include "nn/codec/hwacod/hwacod_shim.hpp"

namespace nn::codec::hwacod::detail {
namespace {

constexpr Result ResultInvalidArgument = {0x7d06f};
constexpr Result ResultInvalidSampleRate = {0x7d26f};
constexpr Result ResultInvalidChannelCount = {0x7d46f};
constexpr Result ResultInvalidFrameDuration = {0x7d66f};

inline bool IsValidOpusSampleRate(int sampleRate) {
  switch (sampleRate) {
    case 8000:
    case 12000:
    case 16000:
    case 24000:
    case 48000:
      return true;
    default:
      return false;
  }
}

inline bool IsValidOpusFrameDuration(TimeSpan frameDuration) {
  switch (frameDuration.nanoseconds / 1000) {
    case 2500:
    case 5000:
    case 10000:
    case 20000:
      return true;
    default:
      return false;
  }
}

}

Result ValidateInstanceParameter(const InstanceParameter& parameter) {
  switch (parameter.type) {
    case InstanceType_Stub: {
      if (parameter.sampleRate % 1000 != 0) {
        return ResultInvalidSampleRate;
      }
      if (parameter.channelCount < 1) {
        return ResultInvalidChannelCount;
      }
      // The stub decoder works on whole multiples of 10 milliseconds.
      const int64_t milliseconds = parameter.frameDuration.nanoseconds
        / 1000000;
      if (milliseconds % 10 != 0
        || parameter.frameDuration.nanoseconds < 1000000) {
        return ResultInvalidFrameDuration;
      }
      return {0};
    }
    case InstanceType_Opus:
      if (!IsValidOpusSampleRate(parameter.sampleRate)) {
        return ResultInvalidSampleRate;
      }
      if (parameter.channelCount < 1 || parameter.channelCount > 2) {
        return ResultInvalidChannelCount;
      }
      if (!IsValidOpusFrameDuration(parameter.frameDuration)) {
        return ResultInvalidFrameDuration;
      }
      return {0};
    case InstanceType_OpusMultiStream: {
      if (!IsValidOpusSampleRate(parameter.sampleRate)) {
        return ResultInvalidSampleRate;
      }
      const int channelCount = parameter.channelCount;
      if (channelCount < 1 || channelCount > 255) {
        return ResultInvalidChannelCount;
      }
      const int totalStreamCount = parameter.totalStreamCount;
      const int stereoStreamCount = parameter.stereoStreamCount;
      if (stereoStreamCount > totalStreamCount || totalStreamCount < 1
        || totalStreamCount > 255) {
        return ResultInvalidChannelCount;
      }
      const int streamCount = totalStreamCount + stereoStreamCount;
      if (channelCount < streamCount) {
        return ResultInvalidChannelCount;
      }
      if (streamCount > 255) {
        return ResultInvalidArgument;
      }
      // A mapping of 255 marks a silent output channel.
      for (int i = 0; i < channelCount; ++i) {
        const int mapping = parameter.channelMapping[i];
        if (mapping != 255 && mapping >= streamCount) {
          return ResultInvalidArgument;
        }
      }
      if (!IsValidOpusFrameDuration(parameter.frameDuration)) {
        return ResultInvalidFrameDuration;
      }
      return {0};
    }
    default:
      return ResultInvalidArgument;
  }
}

}
