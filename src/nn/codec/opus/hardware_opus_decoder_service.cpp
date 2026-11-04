#include "nn/codec/hardware_opus.hpp"
#include "nn/codec/hardware_opus_service.hpp"
#include "nn/codec/opus_impl.hpp"
#include "nn/os/transfer_memory.hpp"

namespace nn::diag::detail {

[[noreturn]] void AbortImpl(const Result* result);

}

namespace nn::codec {
namespace {

size_t g_WorkBufferSizeCache[5][2][2];

size_t* FindWorkBufferSizeCache(int sampleRate, int channelCount,
  int option) {
  int index;
  switch (sampleRate) {
    case 48000:
      index = 0;
      break;
    case 24000:
      index = 1;
      break;
    case 16000:
      index = 2;
      break;
    case 12000:
      index = 3;
      break;
    case 8000:
      index = 4;
      break;
    default:
      return nullptr;
  }

  const unsigned channelIndex = channelCount - 1;
  if ((channelIndex | option) > 1) {
    return nullptr;
  }
  return &g_WorkBufferSizeCache[index][channelIndex][option];
}

inline void AbortUnlessSuccess(Result result) {
  if (result.IsFailure()) {
    nn::diag::detail::AbortImpl(&result);
  }
}

// Opening a decoder fails with this result when the service runs out of
// decoder resources.
inline bool IsOutOfResource(Result result) {
  return (result.value & 0x3fffff) == 0x3026f;
}

inline bool IsInvalidOpusData(Result result) {
  return (result.value & 0x3fffff) == 0x226f;
}

inline size_t AlignWorkBufferSize(int size) {
  return (size + 0xfff) & ~0xfff;
}

inline detail::IHardwareOpusDecoder* GetService(void* handle) {
  return static_cast<detail::IHardwareOpusDecoder*>(handle);
}

}

size_t GetHardwareOpusDecoderWorkBufferSize(int sampleRate, int channelCount,
  int option) {
  if (const size_t* cache =
    FindWorkBufferSizeCache(sampleRate, channelCount, option)) {
    if (*cache != 0) {
      return *cache;
    }
  }

  sf::SharedPointer<detail::IHardwareOpusDecoderManager> manager =
    opus::hw::server::GetHardwareOpusDecoderManagerByHipc();
  const detail::HardwareOpusDecoderParameterInternal parameter = {
    sampleRate, channelCount, static_cast<uint32_t>(option), 0,
  };
  int32_t size = 0;
  AbortUnlessSuccess(
    manager->GetWorkBufferSizeExEx(sf::Out<int32_t>(&size), parameter));

  const size_t workBufferSize = AlignWorkBufferSize(size);
  if (size_t* cache =
    FindWorkBufferSizeCache(sampleRate, channelCount, option)) {
    *cache = workBufferSize;
  }
  return workBufferSize;
}

size_t GetHardwareOpusDecoderWorkBufferSize(int sampleRate,
  int channelCount) {
  return GetHardwareOpusDecoderWorkBufferSize(sampleRate, channelCount, 0);
}

OpusResult InitializeHardwareOpusDecoder(HardwareOpusDecoderType* decoder,
  int sampleRate, int channelCount, void* workBuffer, size_t workBufferSize,
  int option) {
  sf::SharedPointer<detail::IHardwareOpusDecoderManager> manager =
    opus::hw::server::GetHardwareOpusDecoderManagerByHipc();
  const detail::HardwareOpusDecoderParameterInternal parameter = {
    sampleRate, channelCount, static_cast<uint32_t>(option), 0,
  };

  os::FlushDataCache(workBuffer, workBufferSize);
  os::TransferMemoryType transferMemory = {};
  AbortUnlessSuccess(os::CreateTransferMemory(&transferMemory, workBuffer,
    workBufferSize, os::MemoryPermission_None));

  sf::SharedPointer<detail::IHardwareOpusDecoder> service;
  Result result;
  {
    sf::NativeHandle handle(os::DetachTransferMemory(&transferMemory), true);
    result = manager->OpenHardwareOpusDecoderEx(
      sf::Out<sf::SharedPointer<detail::IHardwareOpusDecoder>>(&service),
      parameter, static_cast<sf::NativeHandle&&>(handle),
      static_cast<uint32_t>(workBufferSize));
  }

  OpusResult opusResult = OpusResult_Success;
  if (result.IsFailure()) {
    if (!IsOutOfResource(result)) {
      AbortUnlessSuccess(result);
    }
    service.Reset();
    opusResult = OpusResult_DecoderInitializationFailure;
  }
  else {
    decoder->handle = service.Detach();
    decoder->context = workBuffer;
    decoder->workBufferSize = workBufferSize;
    decoder->sampleRate = sampleRate;
    decoder->channelCount = channelCount;
    decoder->processingTime = 0;
    decoder->isResetRequested = false;
  }

  if (transferMemory.state != 0) {
    os::DestroyTransferMemory(&transferMemory);
  }
  return opusResult;
}

void FinalizeHardwareOpusDecoder(HardwareOpusDecoderType* decoder) {
  if (GetHardwareOpusDecoderManager(decoder) != nullptr) {
    opus::hw::FinalizeHardwareOpusDecoderImpl(decoder);
    return;
  }

  GetService(decoder->handle)->Release();
  decoder->handle = nullptr;
  decoder->context = nullptr;
  decoder->workBufferSize = 0;
  decoder->sampleRate = 0;
  decoder->channelCount = 0;
}

int GetHardwareOpusDecoderSampleRate(const HardwareOpusDecoderType* decoder) {
  return decoder->sampleRate;
}

int GetHardwareOpusDecoderChannelCount(
  const HardwareOpusDecoderType* decoder) {
  return decoder->channelCount;
}

OpusResult DecodeOpusInterleavedWithHardware(HardwareOpusDecoderType* decoder,
  size_t* consumedSize, int* sampleCount, int16_t* output, size_t outputSize,
  const void* input, size_t inputSize) {
  if (inputSize < sizeof(opus::OpusPacketHeader)) {
    return OpusResult_InsufficientOpusBuffer;
  }

  const uint8_t* packet = static_cast<const uint8_t*>(input);
  opus::OpusPacketHeader header = {};
  opus::GetOpusPacketHeader(&header, packet);
  const size_t packetSize =
    header.packetSize + sizeof(opus::OpusPacketHeader);
  if (inputSize < packetSize) {
    return OpusResult_InsufficientOpusBuffer;
  }

  int packetSampleCount = 0;
  const OpusResult opusResult = GetOpusPacketSampleCountInPacket(
    &packetSampleCount, packet, inputSize, decoder->sampleRate);
  if (opusResult != OpusResult_Success) {
    return opusResult;
  }

  const size_t requiredSize = static_cast<size_t>(
    decoder->channelCount * packetSampleCount) * sizeof(int16_t);
  if (outputSize < requiredSize) {
    return OpusResult_InsufficientPcmBuffer;
  }

  const bool isResetRequested = decoder->isResetRequested;
  decoder->isResetRequested = false;
  int32_t consumed = 0;
  int32_t decoded = 0;
  int64_t processingTime = 0;
  const Result result = GetService(decoder->handle)->DecodeInterleaved(
    sf::Out<int32_t>(&consumed), sf::Out<int64_t>(&processingTime),
    sf::Out<int32_t>(&decoded), sf::OutBuffer(output, requiredSize),
    sf::InBuffer(input, packetSize), isResetRequested);
  if (result.IsFailure()) {
    if (!IsInvalidOpusData(result)) {
      AbortUnlessSuccess(result);
    }
    return OpusResult_BrokenData;
  }

  *consumedSize = consumed;
  *sampleCount = decoded;
  decoder->processingTime = processingTime;
  return OpusResult_Success;
}

TimeSpan GetHardwareOpusDecoderProcessingTime(
  const HardwareOpusDecoderType* decoder) {
  return {decoder->processingTime * 1000};
}

void ResetHardwareOpusDecoder(HardwareOpusDecoderType* decoder) {
  if (GetHardwareOpusDecoderManager(decoder) != nullptr) {
    opus::hw::ResetHardwareOpusDecoderImpl(decoder);
    return;
  }
  decoder->isResetRequested = true;
}

size_t GetHardwareOpusMultiStreamDecoderWorkBufferSize(int sampleRate,
  int channelCount, int totalStreamCount, int stereoStreamCount, int option) {
  sf::SharedPointer<detail::IHardwareOpusDecoderManager> manager =
    opus::hw::server::GetHardwareOpusDecoderManagerByHipc();
  detail::HardwareOpusMultiStreamDecoderParameterInternal parameter = {};
  parameter.sampleRate = sampleRate;
  parameter.channelCount = channelCount;
  parameter.totalStreamCount = totalStreamCount;
  parameter.stereoStreamCount = stereoStreamCount;
  parameter.option = option;
  int32_t size = 0;
  AbortUnlessSuccess(manager->GetWorkBufferSizeForMultiStreamExEx(
    sf::Out<int32_t>(&size), parameter));
  return AlignWorkBufferSize(size);
}

size_t GetHardwareOpusMultiStreamDecoderWorkBufferSize(int sampleRate,
  int channelCount, int totalStreamCount, int stereoStreamCount) {
  sf::SharedPointer<detail::IHardwareOpusDecoderManager> manager =
    opus::hw::server::GetHardwareOpusDecoderManagerByHipc();
  detail::HardwareOpusMultiStreamDecoderParameterInternal parameter = {};
  parameter.sampleRate = sampleRate;
  parameter.channelCount = channelCount;
  parameter.totalStreamCount = totalStreamCount;
  parameter.stereoStreamCount = stereoStreamCount;
  parameter.option = 0;
  int32_t size = 0;
  AbortUnlessSuccess(manager->GetWorkBufferSizeForMultiStreamExEx(
    sf::Out<int32_t>(&size), parameter));
  return AlignWorkBufferSize(size);
}

OpusResult InitializeHardwareOpusMultiStreamDecoder(
  HardwareOpusMultiStreamDecoderType* decoder, int sampleRate,
  int channelCount, int totalStreamCount, int stereoStreamCount,
  const uint8_t* channelMapping, void* workBuffer, size_t workBufferSize,
  int option) {
  sf::SharedPointer<detail::IHardwareOpusDecoderManager> manager =
    opus::hw::server::GetHardwareOpusDecoderManagerByHipc();
  detail::HardwareOpusMultiStreamDecoderParameterInternal parameter = {};
  parameter.sampleRate = sampleRate;
  parameter.channelCount = channelCount;
  parameter.totalStreamCount = totalStreamCount;
  parameter.stereoStreamCount = stereoStreamCount;
  parameter.option = option;
  for (int i = 0; i < channelCount; ++i) {
    parameter.channelMapping[i] = channelMapping[i];
  }

  os::FlushDataCache(workBuffer, workBufferSize);
  os::TransferMemoryType transferMemory = {};
  AbortUnlessSuccess(os::CreateTransferMemory(&transferMemory, workBuffer,
    workBufferSize, os::MemoryPermission_None));

  sf::SharedPointer<detail::IHardwareOpusDecoder> service;
  Result result;
  {
    sf::NativeHandle handle(os::DetachTransferMemory(&transferMemory), true);
    result = manager->OpenHardwareOpusDecoderForMultiStreamEx(
      sf::Out<sf::SharedPointer<detail::IHardwareOpusDecoder>>(&service),
      parameter, static_cast<sf::NativeHandle&&>(handle),
      static_cast<uint32_t>(workBufferSize));
  }

  OpusResult opusResult = OpusResult_Success;
  if (result.IsFailure()) {
    if (!IsOutOfResource(result)) {
      AbortUnlessSuccess(result);
    }
    service.Reset();
    opusResult = OpusResult_DecoderInitializationFailure;
  }
  else {
    decoder->handle = service.Detach();
    decoder->context = workBuffer;
    decoder->workBufferSize = workBufferSize;
    decoder->sampleRate = sampleRate;
    decoder->channelCount = channelCount;
    decoder->totalStreamCount = totalStreamCount;
    decoder->stereoStreamCount = stereoStreamCount;
    decoder->processingTime = 0;
    decoder->isResetRequested = false;
  }

  if (transferMemory.state != 0) {
    os::DestroyTransferMemory(&transferMemory);
  }
  return opusResult;
}

void FinalizeHardwareOpusMultiStreamDecoder(
  HardwareOpusMultiStreamDecoderType* decoder) {
  if (GetHardwareOpusMultiStreamDecoderManager(decoder) != nullptr) {
    opus::hw::FinalizeHardwareOpusMultiStreamDecoderImpl(decoder);
    return;
  }

  GetService(decoder->handle)->Release();
  decoder->handle = nullptr;
  decoder->context = nullptr;
  decoder->workBufferSize = 0;
  decoder->sampleRate = 0;
  decoder->channelCount = 0;
  decoder->totalStreamCount = 0;
  decoder->stereoStreamCount = 0;
}

int GetHardwareOpusMultiStreamDecoderSampleRate(
  const HardwareOpusMultiStreamDecoderType* decoder) {
  return decoder->sampleRate;
}

int GetHardwareOpusMultiStreamDecoderChannelCount(
  const HardwareOpusMultiStreamDecoderType* decoder) {
  return decoder->channelCount;
}

int GetHardwareOpusMultiStreamDecoderTotalStreamCount(
  const HardwareOpusMultiStreamDecoderType* decoder) {
  return decoder->totalStreamCount;
}

int GetHardwareOpusMultiStreamDecoderStereoStreamCount(
  const HardwareOpusMultiStreamDecoderType* decoder) {
  return decoder->stereoStreamCount;
}

OpusResult DecodeOpusMultiStreamInterleavedWithHardware(
  HardwareOpusMultiStreamDecoderType* decoder, size_t* consumedSize,
  int* sampleCount, int16_t* output, size_t outputSize, const void* input,
  size_t inputSize) {
  if (inputSize < sizeof(opus::OpusPacketHeader)) {
    return OpusResult_InsufficientOpusBuffer;
  }

  const uint8_t* packet = static_cast<const uint8_t*>(input);
  opus::OpusPacketHeader header = {};
  opus::GetOpusPacketHeader(&header, packet);
  const size_t packetSize =
    header.packetSize + sizeof(opus::OpusPacketHeader);
  if (inputSize < packetSize) {
    return OpusResult_InsufficientOpusBuffer;
  }

  int packetSampleCount = 0;
  const OpusResult opusResult = GetOpusPacketSampleCountInPacket(
    &packetSampleCount, packet, inputSize, decoder->sampleRate);
  if (opusResult != OpusResult_Success) {
    return opusResult;
  }

  const size_t requiredSize = static_cast<size_t>(
    decoder->channelCount * packetSampleCount) * sizeof(int16_t);
  if (outputSize < requiredSize) {
    return OpusResult_InsufficientPcmBuffer;
  }

  const bool isResetRequested = decoder->isResetRequested;
  decoder->isResetRequested = false;
  int32_t consumed = 0;
  int32_t decoded = 0;
  int64_t processingTime = 0;
  const Result result =
    GetService(decoder->handle)->DecodeInterleavedForMultiStream(
      sf::Out<int32_t>(&consumed), sf::Out<int64_t>(&processingTime),
      sf::Out<int32_t>(&decoded), sf::OutBuffer(output, requiredSize),
      sf::InBuffer(input, packetSize), isResetRequested);
  if (result.IsFailure()) {
    if (!IsInvalidOpusData(result)) {
      AbortUnlessSuccess(result);
    }
    return OpusResult_BrokenData;
  }

  *consumedSize = consumed;
  *sampleCount = decoded;
  decoder->processingTime = processingTime;
  return OpusResult_Success;
}

TimeSpan GetHardwareOpusMultiStreamDecoderProcessingTime(
  const HardwareOpusMultiStreamDecoderType* decoder) {
  return {decoder->processingTime * 1000};
}

void ResetHardwareOpusMultiStreamDecoder(
  HardwareOpusMultiStreamDecoderType* decoder) {
  if (GetHardwareOpusMultiStreamDecoderManager(decoder) != nullptr) {
    opus::hw::ResetHardwareOpusMultiStreamDecoderImpl(decoder);
    return;
  }
  decoder->isResetRequested = true;
}

}
