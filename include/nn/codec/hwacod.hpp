#pragma once

#include <stddef.h>
#include <stdint.h>

#include <array>
#include <atomic>
#include <variant>

#include "nn/os/time.hpp"
#include "nn/result.hpp"

namespace nn::os {

struct SystemEventType;

}

namespace nn::codec::hwacod {

struct StubDecoderParameter {
  int32_t sampleRate;
  int32_t channelCount;
  TimeSpan frameDuration;
};

struct OpusDecoderParameter {
  int32_t sampleRate;
  int32_t channelCount;
  TimeSpan frameDuration;
};

struct OpusMultiStreamDecoderParameter {
  int32_t sampleRate;
  int32_t channelCount;
  TimeSpan frameDuration;
  int32_t totalStreamCount;
  int32_t stereoStreamCount;
  std::array<uint8_t, 256> channelMapping;
};

using InstanceParameter = std::variant<std::monostate, StubDecoderParameter,
  OpusDecoderParameter, OpusMultiStreamDecoderParameter>;

static_assert(sizeof(InstanceParameter) == 288);

struct HardwareAudioCodecManagerType;

struct ListNode {
  ListNode() : previous(this), next(this) {}

  ListNode* previous;
  ListNode* next;
};

struct HardwareAudioCodecInstanceType {
  alignas(InstanceParameter) uint8_t parameter[sizeof(InstanceParameter)];
  HardwareAudioCodecManagerType* manager;
  ListNode inputList;
  ListNode processingList;
  ListNode outputList;
  int64_t processingTime;
  int32_t index = -1;
  bool isInitialized;
  std::atomic<bool> isResetRequested{false};
};

static_assert(sizeof(HardwareAudioCodecInstanceType) == 360);

Result InitializeHardwareAudioCodecInstance(
  HardwareAudioCodecInstanceType* instance,
  HardwareAudioCodecManagerType* manager, const InstanceParameter& parameter);
Result FinalizeHardwareAudioCodecInstance(
  HardwareAudioCodecInstanceType* instance);
Result SetHardwareAudioCodecInstanceInput(size_t* consumedSize,
  HardwareAudioCodecInstanceType* instance, const void* data, size_t size);
void ResetHardwareAudioCodecInstance(HardwareAudioCodecInstanceType* instance);
Result GetHardwareAudioCodecInstanceOutput(
  HardwareAudioCodecInstanceType* instance, size_t* outputSize, void* buffer,
  size_t bufferSize);
int GetHardwareAudioCodecInstanceInputDataCount(
  const HardwareAudioCodecInstanceType* instance);
int GetHardwareAudioCodecInstanceProcessingDataCount(
  const HardwareAudioCodecInstanceType* instance);
int GetHardwareAudioCodecInstanceOutputDataCount(
  const HardwareAudioCodecInstanceType* instance);
InstanceParameter GetHardwareAudioCodecInstanceParameter(
  const HardwareAudioCodecInstanceType* instance);
int64_t GetHardwareAudioCodecInstanceProcessingTime(
  const HardwareAudioCodecInstanceType* instance);

void FinalizeHardwareAudioCodecManager(
  HardwareAudioCodecManagerType* manager);
bool CanHardwareAudioCodecInstanceParameterInstantiate(
  const HardwareAudioCodecManagerType* manager,
  const InstanceParameter& parameter);
void ExecuteHardwareAudioCodecProcessing(
  HardwareAudioCodecManagerType* manager);
void UpdateHardwareAudioCodecProcessResult(
  HardwareAudioCodecManagerType* manager);
int GetHardwareAudioCodecTotalInstanceResourceCount(
  const HardwareAudioCodecManagerType* manager);
int GetHardwareAudioCodecFreeInstanceResourceCount(
  const HardwareAudioCodecManagerType* manager);
int GetHardwareAudioCodecUsingInstanceResourceCount(
  const HardwareAudioCodecManagerType* manager);
int GetHardwareAudioCodecTotalIoBufferCount(
  const HardwareAudioCodecManagerType* manager);
int GetHardwareAudioCodecFreeIoBufferCount(
  const HardwareAudioCodecManagerType* manager);
int GetHardwareAudioCodecUsingIoBufferCount(
  const HardwareAudioCodecManagerType* manager);

}
