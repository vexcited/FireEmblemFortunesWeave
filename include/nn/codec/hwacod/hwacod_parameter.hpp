#pragma once

#include <string.h>

#include "nn/codec/hwacod/hwacod_shim.hpp"

namespace nn::codec::hwacod::detail {

inline InstanceParameter ConvertInstanceParameter(
  const hwacod::InstanceParameter& parameter) {
  InstanceParameter internal = {};
  switch (parameter.index()) {
    case 1: {
      const auto& stub = *std::get_if<StubDecoderParameter>(&parameter);
      internal.type = InstanceType_Stub;
      internal.sampleRate = stub.sampleRate;
      internal.channelCount = stub.channelCount;
      internal.frameDuration = stub.frameDuration;
      break;
    }
    case 2: {
      const auto& opus = *std::get_if<OpusDecoderParameter>(&parameter);
      internal.type = InstanceType_Opus;
      internal.sampleRate = opus.sampleRate;
      internal.channelCount = opus.channelCount;
      internal.frameDuration = opus.frameDuration;
      break;
    }
    case 3: {
      const auto& multiStream =
        *std::get_if<OpusMultiStreamDecoderParameter>(&parameter);
      internal.type = InstanceType_OpusMultiStream;
      internal.sampleRate = multiStream.sampleRate;
      internal.channelCount = multiStream.channelCount;
      internal.frameDuration = multiStream.frameDuration;
      internal.totalStreamCount = multiStream.totalStreamCount;
      internal.stereoStreamCount = multiStream.stereoStreamCount;
      memcpy(internal.channelMapping, multiStream.channelMapping.data(),
        sizeof(internal.channelMapping));
      break;
    }
    default:
      break;
  }
  return internal;
}

inline Result ValidateParameter(const hwacod::InstanceParameter& parameter) {
  return ValidateInstanceParameter(ConvertInstanceParameter(parameter));
}

}
