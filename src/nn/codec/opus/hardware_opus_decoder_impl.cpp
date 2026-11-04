#include <string.h>

#include <new>

#include "nn/codec/hardware_opus.hpp"

namespace nn::diag::detail {

[[noreturn]] void AbortImpl(const Result* result);

}

namespace nn::codec::opus::hw {
namespace {

// The hardware audio codec results live in module 111 between descriptions
// 32 and 63, and descriptions 33 to 43 match the Opus results in order.
bool IsHardwareAudioCodecResult(Result result) {
  return (result.value & 0x3fc1ff) == 0x406f;


}

// The original build keeps this conversion out of line.
__attribute__((noinline)) OpusResult ConvertResult(Result result) {
  if (result.IsSuccess()) {
    return OpusResult_Success;
  }
  if (IsHardwareAudioCodecResult(result)) {
    const uint32_t index = ((result.value & 0x7e6f) - 0x426f) >> 9;
    if (index <= 10) {
      return static_cast<OpusResult>(index + 1);
    }
  }
  return OpusResult_InternalError;
}

OpusResult HandleResult(Result result) {
  if (!IsHardwareAudioCodecResult(result)) {
    nn::diag::detail::AbortImpl(&result);
  }
  return ConvertResult(result);
}

inline hwacod::HardwareAudioCodecInstanceType* GetInstance(
  const HardwareOpusDecoderType* decoder) {
  return static_cast<hwacod::HardwareAudioCodecInstanceType*>(
    decoder->handle);
}

inline hwacod::HardwareAudioCodecManagerType* GetCodecManager(
  const HardwareOpusDecoderManagerType* manager) {
  return manager->storage->manager;
}

inline HardwareOpusDecoderManagerType* GetManager(
  const HardwareOpusDecoderType* decoder) {
  return static_cast<HardwareOpusDecoderManagerType*>(decoder->context);
}

inline hwacod::HardwareAudioCodecInstanceType* GetInstance(
  const HardwareOpusMultiStreamDecoderType* decoder) {
  return static_cast<hwacod::HardwareAudioCodecInstanceType*>(
    decoder->handle);
}

inline hwacod::HardwareAudioCodecManagerType* GetCodecManager(
  const HardwareOpusMultiStreamDecoderManagerType* manager) {
  return manager->storage->manager;
}

inline HardwareOpusMultiStreamDecoderManagerType* GetManager(
  const HardwareOpusMultiStreamDecoderType* decoder) {
  return static_cast<HardwareOpusMultiStreamDecoderManagerType*>(
    decoder->context);
}

}

__attribute__((no_builtin("memset"))) OpusResult
InitializeHardwareOpusDecoderImpl(HardwareOpusDecoderType* decoder,
  int sampleRate, int channelCount, TimeSpan frameDuration,
  HardwareOpusDecoderManagerType* manager) {
  void* storage = AcquireInstanceType(manager);
  if (storage == nullptr) {
    return OpusResult_OutOfDecoderResource;
  }

  memset(storage, 0, sizeof(hwacod::HardwareAudioCodecInstanceType));
  auto* instance = new (storage) hwacod::HardwareAudioCodecInstanceType;

  const hwacod::OpusDecoderParameter parameter = {
    sampleRate, channelCount, frameDuration,
  };
  const Result result = hwacod::InitializeHardwareAudioCodecInstance(instance,
    GetManagerType(manager), parameter);
  if (result.IsFailure()) {
    return HandleResult(result);
  }

  decoder->handle = instance;
  decoder->context = manager;
  decoder->workBufferSize = 0;
  decoder->sampleRate = sampleRate;
  decoder->channelCount = channelCount;
  decoder->processingTime = 0;
  decoder->isResetRequested = false;
  return OpusResult_Success;
}

void FinalizeHardwareOpusDecoderImpl(HardwareOpusDecoderType* decoder) {
  hwacod::HardwareAudioCodecInstanceType* instance = GetInstance(decoder);
  ReleaseInstanceType(GetManager(decoder), instance);
  hwacod::FinalizeHardwareAudioCodecInstance(instance);
  decoder->handle = nullptr;
  decoder->context = nullptr;
  decoder->workBufferSize = 0;
  decoder->sampleRate = 0;
  decoder->channelCount = 0;
  decoder->processingTime = 0;
}

void ResetHardwareOpusDecoderImpl(HardwareOpusDecoderType* decoder) {
  hwacod::ResetHardwareAudioCodecInstance(GetInstance(decoder));
}

TimeSpan GetHardwareOpusDecoderFrameDurationImpl(
  const HardwareOpusDecoderType* decoder) {
  hwacod::InstanceParameter parameter = {};
  parameter = hwacod::GetHardwareAudioCodecInstanceParameter(
    GetInstance(decoder));
  return std::get_if<hwacod::OpusDecoderParameter>(&parameter)->frameDuration;
}

OpusResult EnqueueOpusDataToHardwareOpusDecoderImpl(
  HardwareOpusDecoderType* decoder, size_t* consumedSize, const void* data,
  size_t size) {
  const Result result = hwacod::SetHardwareAudioCodecInstanceInput(
    consumedSize, GetInstance(decoder), data, size);
  if (result.IsFailure()) {
    return HandleResult(result);
  }
  return OpusResult_Success;
}

OpusResult DequeuePcmInterleavedDataFromHardwareOpusDecoderImpl(
  HardwareOpusDecoderType* decoder, int* sampleCount, int16_t* buffer,
  size_t bufferSize) {
  hwacod::UpdateHardwareAudioCodecProcessResult(
    GetManagerType(GetManager(decoder)));

  hwacod::HardwareAudioCodecInstanceType* instance = GetInstance(decoder);
  size_t outputSize = 0;
  const Result result = hwacod::GetHardwareAudioCodecInstanceOutput(instance,
    &outputSize, buffer, bufferSize);
  if (result.IsFailure()) {
    return HandleResult(result);
  }

  *sampleCount = outputSize / (sizeof(int16_t) * decoder->channelCount);
  decoder->processingTime =
    hwacod::GetHardwareAudioCodecInstanceProcessingTime(instance) / 1000;
  return OpusResult_Success;
}

HardwareOpusDecoderManagerType* GetHardwareOpusDecoderManagerImpl(
  HardwareOpusDecoderType* decoder) {
  if (decoder->workBufferSize != 0) {
    return nullptr;
  }
  return GetManager(decoder);
}

int GetHardwareOpusDecoderWaitingDecodeRequestCountImpl(
  const HardwareOpusDecoderType* decoder) {
  return hwacod::GetHardwareAudioCodecInstanceInputDataCount(
    GetInstance(decoder));
}

int GetHardwareOpusDecoderExecutingDecodeRequestCountImpl(
  const HardwareOpusDecoderType* decoder) {
  hwacod::HardwareAudioCodecInstanceType* instance = GetInstance(decoder);
  hwacod::UpdateHardwareAudioCodecProcessResult(
    GetManagerType(GetManager(decoder)));
  return hwacod::GetHardwareAudioCodecInstanceProcessingDataCount(instance);
}

int GetHardwareOpusDecoderCompletedDecodeRequestCountImpl(
  const HardwareOpusDecoderType* decoder) {
  hwacod::HardwareAudioCodecInstanceType* instance = GetInstance(decoder);
  hwacod::UpdateHardwareAudioCodecProcessResult(
    GetManagerType(GetManager(decoder)));
  return hwacod::GetHardwareAudioCodecInstanceOutputDataCount(instance);
}

void FinalizeHardwareOpusDecoderManagerImpl(
  HardwareOpusDecoderManagerType* manager) {
  hwacod::FinalizeHardwareAudioCodecManager(GetCodecManager(manager));
  manager->storage = nullptr;
  manager->workBuffer = nullptr;
  manager->workBufferSize = 0;
}

void ExecuteHardwareOpusDecoderDecodingImpl(
  HardwareOpusDecoderManagerType* manager) {
  hwacod::ExecuteHardwareAudioCodecProcessing(GetCodecManager(manager));
}

int GetHardwareOpusDecoderManagerTotalDecoderResourceCountImpl(
  const HardwareOpusDecoderManagerType* manager) {
  return hwacod::GetHardwareAudioCodecTotalInstanceResourceCount(
    GetCodecManager(manager));
}

int GetHardwareOpusDecoderManagerFreeDecoderResourceCountImpl(
  const HardwareOpusDecoderManagerType* manager) {
  return hwacod::GetHardwareAudioCodecFreeInstanceResourceCount(
    GetCodecManager(manager));
}

int GetHardwareOpusDecoderManagerUsingDecoderResourceCountImpl(
  const HardwareOpusDecoderManagerType* manager) {
  return hwacod::GetHardwareAudioCodecUsingInstanceResourceCount(
    GetCodecManager(manager));
}

int GetHardwareOpusDecoderManagerTotalIoBufferCountImpl(
  const HardwareOpusDecoderManagerType* manager) {
  return hwacod::GetHardwareAudioCodecTotalIoBufferCount(
    GetCodecManager(manager));
}

int GetHardwareOpusDecoderManagerFreeIoBufferCountImpl(
  const HardwareOpusDecoderManagerType* manager) {
  hwacod::HardwareAudioCodecManagerType* codecManager =
    GetCodecManager(manager);
  hwacod::UpdateHardwareAudioCodecProcessResult(codecManager);
  return hwacod::GetHardwareAudioCodecFreeIoBufferCount(codecManager);
}

int GetHardwareOpusDecoderManagerUsingIoBufferCountImpl(
  const HardwareOpusDecoderManagerType* manager) {
  hwacod::HardwareAudioCodecManagerType* codecManager =
    GetCodecManager(manager);
  hwacod::UpdateHardwareAudioCodecProcessResult(codecManager);
  return hwacod::GetHardwareAudioCodecUsingIoBufferCount(codecManager);
}


__attribute__((no_builtin("memset"))) OpusResult
InitializeHardwareOpusMultiStreamDecoderImpl(
  HardwareOpusMultiStreamDecoderType* decoder, int sampleRate,
  int channelCount, int totalStreamCount, int stereoStreamCount,
  const uint8_t* channelMapping, TimeSpan frameDuration,
  HardwareOpusMultiStreamDecoderManagerType* manager) {
  void* storage = AcquireInstanceType(manager);
  if (storage == nullptr) {
    return OpusResult_OutOfDecoderResource;
  }

  memset(storage, 0, sizeof(hwacod::HardwareAudioCodecInstanceType));
  auto* instance = new (storage) hwacod::HardwareAudioCodecInstanceType;

  std::array<uint8_t, 256> mapping = {};
  memcpy(mapping.data(), channelMapping, channelCount);

  const hwacod::OpusMultiStreamDecoderParameter parameter = {
    sampleRate, channelCount, frameDuration, totalStreamCount,
    stereoStreamCount, mapping,
  };
  const Result result = hwacod::InitializeHardwareAudioCodecInstance(instance,
    GetManagerType(manager), parameter);
  if (result.IsFailure()) {
    return HandleResult(result);
  }

  decoder->handle = instance;
  decoder->context = manager;
  decoder->workBufferSize = 0;
  decoder->sampleRate = sampleRate;
  decoder->channelCount = channelCount;
  decoder->totalStreamCount = totalStreamCount;
  decoder->stereoStreamCount = stereoStreamCount;
  decoder->processingTime = 0;
  decoder->isResetRequested = false;
  return OpusResult_Success;
}

void FinalizeHardwareOpusMultiStreamDecoderImpl(
  HardwareOpusMultiStreamDecoderType* decoder) {
  hwacod::HardwareAudioCodecInstanceType* instance = GetInstance(decoder);
  ReleaseInstanceType(GetManager(decoder), instance);
  hwacod::FinalizeHardwareAudioCodecInstance(instance);
  decoder->handle = nullptr;
  decoder->context = nullptr;
  decoder->workBufferSize = 0;
  decoder->sampleRate = 0;
  decoder->channelCount = 0;
  decoder->totalStreamCount = 0;
  decoder->stereoStreamCount = 0;
  decoder->processingTime = 0;
  decoder->isResetRequested = false;
}

void ResetHardwareOpusMultiStreamDecoderImpl(
  HardwareOpusMultiStreamDecoderType* decoder) {
  hwacod::ResetHardwareAudioCodecInstance(GetInstance(decoder));
}

TimeSpan GetHardwareOpusMultiStreamDecoderFrameDurationImpl(
  const HardwareOpusMultiStreamDecoderType* decoder) {
  hwacod::InstanceParameter parameter = {};
  parameter = hwacod::GetHardwareAudioCodecInstanceParameter(
    GetInstance(decoder));
  return std::get_if<hwacod::OpusMultiStreamDecoderParameter>(&parameter)
    ->frameDuration;
}

OpusResult EnqueueOpusDataToHardwareOpusMultiStreamDecoderImpl(
  HardwareOpusMultiStreamDecoderType* decoder, size_t* consumedSize,
  const void* data, size_t size) {
  const Result result = hwacod::SetHardwareAudioCodecInstanceInput(
    consumedSize, GetInstance(decoder), data, size);
  if (result.IsFailure()) {
    return HandleResult(result);
  }
  return OpusResult_Success;
}

OpusResult DequeuePcmInterleavedDataFromHardwareOpusMultiStreamDecoderImpl(
  HardwareOpusMultiStreamDecoderType* decoder, int* sampleCount,
  int16_t* buffer, size_t bufferSize) {
  hwacod::UpdateHardwareAudioCodecProcessResult(
    GetManagerType(GetManager(decoder)));

  hwacod::HardwareAudioCodecInstanceType* instance = GetInstance(decoder);
  size_t outputSize = 0;
  const Result result = hwacod::GetHardwareAudioCodecInstanceOutput(instance,
    &outputSize, buffer, bufferSize);
  if (result.IsFailure()) {
    return HandleResult(result);
  }

  *sampleCount = outputSize / (sizeof(int16_t) * decoder->channelCount);
  decoder->processingTime =
    hwacod::GetHardwareAudioCodecInstanceProcessingTime(instance) / 1000;
  return OpusResult_Success;
}

HardwareOpusMultiStreamDecoderManagerType*
GetHardwareOpusMultiStreamDecoderManagerImpl(
  HardwareOpusMultiStreamDecoderType* decoder) {
  if (decoder->workBufferSize != 0) {
    return nullptr;
  }
  return GetManager(decoder);
}

int GetHardwareOpusMultiStreamDecoderWaitingDecodeRequestCountImpl(
  const HardwareOpusMultiStreamDecoderType* decoder) {
  return hwacod::GetHardwareAudioCodecInstanceInputDataCount(
    GetInstance(decoder));
}

int GetHardwareOpusMultiStreamDecoderExecutingDecodeRequestCountImpl(
  const HardwareOpusMultiStreamDecoderType* decoder) {
  hwacod::HardwareAudioCodecInstanceType* instance = GetInstance(decoder);
  hwacod::UpdateHardwareAudioCodecProcessResult(
    GetManagerType(GetManager(decoder)));
  return hwacod::GetHardwareAudioCodecInstanceProcessingDataCount(instance);
}

int GetHardwareOpusMultiStreamDecoderCompletedDecodeRequestCountImpl(
  const HardwareOpusMultiStreamDecoderType* decoder) {
  hwacod::HardwareAudioCodecInstanceType* instance = GetInstance(decoder);
  hwacod::UpdateHardwareAudioCodecProcessResult(
    GetManagerType(GetManager(decoder)));
  return hwacod::GetHardwareAudioCodecInstanceOutputDataCount(instance);
}

void FinalizeHardwareOpusMultiStreamDecoderManagerImpl(
  HardwareOpusMultiStreamDecoderManagerType* manager) {
  hwacod::FinalizeHardwareAudioCodecManager(GetCodecManager(manager));
  manager->storage = nullptr;
  manager->workBuffer = nullptr;
  manager->workBufferSize = 0;
}

void ExecuteHardwareOpusMultiStreamDecoderDecodingImpl(
  HardwareOpusMultiStreamDecoderManagerType* manager) {
  hwacod::ExecuteHardwareAudioCodecProcessing(GetCodecManager(manager));
}

int GetHardwareOpusMultiStreamDecoderManagerTotalDecoderResourceCountImpl(
  const HardwareOpusMultiStreamDecoderManagerType* manager) {
  return hwacod::GetHardwareAudioCodecTotalInstanceResourceCount(
    GetCodecManager(manager));
}

int GetHardwareOpusMultiStreamDecoderManagerFreeDecoderResourceCountImpl(
  const HardwareOpusMultiStreamDecoderManagerType* manager) {
  return hwacod::GetHardwareAudioCodecFreeInstanceResourceCount(
    GetCodecManager(manager));
}

int GetHardwareOpusMultiStreamDecoderManagerUsingDecoderResourceCountImpl(
  const HardwareOpusMultiStreamDecoderManagerType* manager) {
  return hwacod::GetHardwareAudioCodecUsingInstanceResourceCount(
    GetCodecManager(manager));
}

int GetHardwareOpusMultiStreamDecoderManagerTotalIoBufferCountImpl(
  const HardwareOpusMultiStreamDecoderManagerType* manager) {
  return hwacod::GetHardwareAudioCodecTotalIoBufferCount(
    GetCodecManager(manager));
}

int GetHardwareOpusMultiStreamDecoderManagerFreeIoBufferCountImpl(
  const HardwareOpusMultiStreamDecoderManagerType* manager) {
  hwacod::HardwareAudioCodecManagerType* codecManager =
    GetCodecManager(manager);
  hwacod::UpdateHardwareAudioCodecProcessResult(codecManager);
  return hwacod::GetHardwareAudioCodecFreeIoBufferCount(codecManager);
}

int GetHardwareOpusMultiStreamDecoderManagerUsingIoBufferCountImpl(
  const HardwareOpusMultiStreamDecoderManagerType* manager) {
  hwacod::HardwareAudioCodecManagerType* codecManager =
    GetCodecManager(manager);
  hwacod::UpdateHardwareAudioCodecProcessResult(codecManager);
  return hwacod::GetHardwareAudioCodecUsingIoBufferCount(codecManager);
}

}
