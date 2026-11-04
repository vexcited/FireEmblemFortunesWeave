#pragma once

#include <stdint.h>

#include "nn/result.hpp"
#include "nn/sf/native_handle.hpp"
#include "nn/sf/sf_buffers.hpp"
#include "nn/sf/shared_pointer.hpp"

namespace nn::codec::hwacod::shim {

class IHardwareAudioCodecService;

}

namespace nn::codec::detail {

struct HardwareOpusDecoderParameterInternal {
  int32_t sampleRate;
  int32_t channelCount;
  uint32_t option;
  uint32_t reserved;
};

struct HardwareOpusMultiStreamDecoderParameterInternal {
  int32_t sampleRate;
  int32_t channelCount;
  int32_t totalStreamCount;
  int32_t stereoStreamCount;
  uint32_t option;
  uint32_t reserved;
  uint8_t channelMapping[256];
};

static_assert(sizeof(HardwareOpusMultiStreamDecoderParameterInternal) == 280);

class IHardwareOpusDecoder : public sf::IServiceObject {
public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual void DecodeInterleavedOld() = 0;
  virtual void SetContext() = 0;
  virtual void DecodeInterleavedForMultiStreamOld() = 0;
  virtual void SetContextForMultiStream() = 0;
  virtual void DecodeInterleavedWithPerfOld() = 0;
  virtual void DecodeInterleavedForMultiStreamWithPerfOld() = 0;
  virtual void DecodeInterleavedWithPerfAndResetOld() = 0;
  virtual void DecodeInterleavedForMultiStreamWithPerfAndResetOld() = 0;
  virtual Result DecodeInterleaved(sf::Out<int32_t> consumedSize,
    sf::Out<int64_t> processingTime, sf::Out<int32_t> sampleCount,
    const sf::OutBuffer& output, const sf::InBuffer& input,
    bool isResetRequested) = 0;
  virtual Result DecodeInterleavedForMultiStream(
    sf::Out<int32_t> consumedSize, sf::Out<int64_t> processingTime,
    sf::Out<int32_t> sampleCount, const sf::OutBuffer& output,
    const sf::InBuffer& input, bool isResetRequested) = 0;
};

class IHardwareOpusDecoderManager : public sf::IServiceObject {
public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual void OpenHardwareOpusDecoder() = 0;
  virtual void GetWorkBufferSize() = 0;
  virtual void OpenHardwareOpusDecoderForMultiStream() = 0;
  virtual void GetWorkBufferSizeForMultiStream() = 0;
  virtual Result OpenHardwareOpusDecoderEx(
    const sf::Out<sf::SharedPointer<IHardwareOpusDecoder>>& decoder,
    const HardwareOpusDecoderParameterInternal& parameter,
    sf::NativeHandle&& workBuffer, uint32_t workBufferSize) = 0;
  virtual void GetWorkBufferSizeEx() = 0;
  virtual Result OpenHardwareOpusDecoderForMultiStreamEx(
    const sf::Out<sf::SharedPointer<IHardwareOpusDecoder>>& decoder,
    const HardwareOpusMultiStreamDecoderParameterInternal& parameter,
    sf::NativeHandle&& workBuffer, uint32_t workBufferSize) = 0;
  virtual void GetWorkBufferSizeForMultiStreamEx() = 0;
  virtual Result GetWorkBufferSizeExEx(sf::Out<int32_t> size,
    const HardwareOpusDecoderParameterInternal& parameter) = 0;
  virtual Result GetWorkBufferSizeForMultiStreamExEx(sf::Out<int32_t> size,
    const HardwareOpusMultiStreamDecoderParameterInternal& parameter) = 0;
  virtual Result GetHardwareAudioCodecService(
    const sf::Out<sf::SharedPointer<hwacod::shim::IHardwareAudioCodecService>>&
      service) = 0;
};

}

namespace nn::codec::opus::hw::server {

sf::SharedPointer<detail::IHardwareOpusDecoderManager>
GetHardwareOpusDecoderManagerByHipc();

}
