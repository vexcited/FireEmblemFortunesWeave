#include <string.h>

#include <new>

#include "nn/codec/hardware_opus.hpp"
#include "nn/codec/hwacod/hwacod_shim.hpp"
#include "nn/diag/diag_abort.hpp"

namespace nn::codec::hwacod {

Result InitializeHardwareAudioCodecManager(
  HardwareAudioCodecManagerType* manager, os::SystemEventType* event,
  void* buffer, size_t size, const InstanceParameter& parameter,
  int instanceCount, int ioBufferCount,
  HardwareAudioCodecManagerProperties properties);

}

namespace nn::codec::opus::hw {

namespace {

// The manager work buffer holds the storage, the codec manager aligned to
// 64 bytes, one instance and one usage flag per decoder, then the codec
// manager work buffer.
const size_t StorageAlignment = 8;
const size_t CodecManagerAlignment = 64;
const size_t CodecManagerSize = 1216;
const size_t ManagerWorkBufferOverhead = StorageAlignment - 1 +
  CodecManagerAlignment - 1 + sizeof(DecoderManagerStorage) +
  CodecManagerSize;

const hwacod::HardwareAudioCodecManagerProperties ManagerProperties = {7};

uintptr_t AlignUp(uintptr_t value, size_t alignment) {
  return (value + alignment - 1) & ~(alignment - 1);
}

hwacod::OpusMultiStreamDecoderParameter MakeMultiStreamParameter(
  int sampleRate, int channelCount, int totalStreamCount,
  int stereoStreamCount, TimeSpan frameDuration) {
  return {sampleRate, channelCount, frameDuration, totalStreamCount,
    stereoStreamCount, {}};
}

template<typename Manager>
Result InitializeManager(Manager* manager, os::SystemEventType* event,
  const hwacod::InstanceParameter& parameter, int decoderCount,
  int ioBufferCount, void* workBuffer, size_t workBufferSize) {
  DecoderManagerStorage* storage = reinterpret_cast<DecoderManagerStorage*>(
    AlignUp(reinterpret_cast<uintptr_t>(workBuffer), StorageAlignment));
  manager->storage = storage;
  manager->workBuffer = workBuffer;
  manager->workBufferSize = workBufferSize;

  char* codecManager = reinterpret_cast<char*>(AlignUp(
    reinterpret_cast<uintptr_t>(storage + 1), CodecManagerAlignment));
  *storage = {};
  storage->decoderCount = decoderCount;
  storage->manager =
    reinterpret_cast<hwacod::HardwareAudioCodecManagerType*>(codecManager);
  storage->instances =
    reinterpret_cast<hwacod::HardwareAudioCodecInstanceType*>(
      codecManager + CodecManagerSize);
  storage->instanceCount = decoderCount;
  storage->isInstanceUsed =
    reinterpret_cast<bool*>(storage->instances + decoderCount);
  // The flags are cleared bytewise, which reloads the flag pointer.
  for (size_t i = 0; i < static_cast<size_t>(decoderCount); i++) {
    reinterpret_cast<char*>(storage->isInstanceUsed)[i] = 0;
  }

  char* codecWorkBuffer =
    reinterpret_cast<char*>(storage->isInstanceUsed + decoderCount);
  memset(storage->manager, 0, CodecManagerSize);
  new (storage->manager) hwacod::shim::HardwareAudioCodecManager();
  // The original passes the distance to the end of the buffer reversed.
  size_t codecWorkBufferSize = codecWorkBuffer -
    (static_cast<char*>(workBuffer) + workBufferSize);
  return hwacod::InitializeHardwareAudioCodecManager(storage->manager, event,
    codecWorkBuffer, codecWorkBufferSize, parameter, decoderCount,
    ioBufferCount, ManagerProperties);
}

}

size_t GetHardwareOpusDecoderManagerWorkBufferSizeImpl(int sampleRate,
  int channelCount, TimeSpan frameDuration, int decoderCount,
  int ioBufferCount) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hwacod::ValidateHardwareAudioCodecInstanceParameter(
      hwacod::InstanceParameter(hwacod::OpusDecoderParameter{sampleRate,
        channelCount, frameDuration})));
  return hwacod::CalcHardwareAudioCodecManagerWorkBufferSize(
    hwacod::InstanceParameter(hwacod::OpusDecoderParameter{sampleRate,
      channelCount, frameDuration}), decoderCount, ioBufferCount) +
    decoderCount * (sizeof(hwacod::HardwareAudioCodecInstanceType) +
      sizeof(bool)) + ManagerWorkBufferOverhead;
}

bool ValidateHardwareOpusDecoderManagerDecoderResourceImpl(
  const HardwareOpusDecoderManagerType* manager, int sampleRate,
  int channelCount, TimeSpan frameDuration) {
  return hwacod::CanHardwareAudioCodecInstanceParameterInstantiate(
    manager->storage->manager,
    hwacod::InstanceParameter(hwacod::OpusDecoderParameter{sampleRate,
      channelCount, frameDuration}));
}

Result InitializeHardwareOpusDecoderManagerImpl(
  HardwareOpusDecoderManagerType* manager, os::SystemEventType* event,
  int sampleRate, int channelCount, TimeSpan frameDuration, int decoderCount,
  int ioBufferCount, void* workBuffer, size_t workBufferSize) {
  return InitializeManager(manager, event,
    hwacod::InstanceParameter(hwacod::OpusDecoderParameter{sampleRate,
      channelCount, frameDuration}), decoderCount, ioBufferCount, workBuffer,
    workBufferSize);
}

size_t GetHardwareOpusMultiStreamDecoderManagerWorkBufferSizeImpl(
  int sampleRate, int channelCount, int totalStreamCount,
  int stereoStreamCount, TimeSpan frameDuration, int decoderCount,
  int ioBufferCount) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hwacod::ValidateHardwareAudioCodecInstanceParameter(
      hwacod::InstanceParameter(MakeMultiStreamParameter(sampleRate,
        channelCount, totalStreamCount, stereoStreamCount, frameDuration))));
  return hwacod::CalcHardwareAudioCodecManagerWorkBufferSize(
    hwacod::InstanceParameter(MakeMultiStreamParameter(sampleRate,
      channelCount, totalStreamCount, stereoStreamCount, frameDuration)),
    decoderCount, ioBufferCount) +
    decoderCount * (sizeof(hwacod::HardwareAudioCodecInstanceType) +
      sizeof(bool)) + ManagerWorkBufferOverhead;
}

bool ValidateHardwareOpusMultiStreamDecoderManagerDecoderResourceImpl(
  const HardwareOpusMultiStreamDecoderManagerType* manager, int sampleRate,
  int channelCount, int totalStreamCount, int stereoStreamCount,
  TimeSpan frameDuration) {
  return hwacod::CanHardwareAudioCodecInstanceParameterInstantiate(
    manager->storage->manager,
    hwacod::InstanceParameter(MakeMultiStreamParameter(sampleRate,
      channelCount, totalStreamCount, stereoStreamCount, frameDuration)));
}

Result InitializeHardwareOpusMultiStreamDecoderManagerImpl(
  HardwareOpusMultiStreamDecoderManagerType* manager,
  os::SystemEventType* event, int sampleRate, int channelCount,
  int totalStreamCount, int stereoStreamCount, TimeSpan frameDuration,
  int decoderCount, int ioBufferCount, void* workBuffer,
  size_t workBufferSize) {
  return InitializeManager(manager, event,
    hwacod::InstanceParameter(MakeMultiStreamParameter(sampleRate,
      channelCount, totalStreamCount, stereoStreamCount, frameDuration)),
    decoderCount, ioBufferCount, workBuffer, workBufferSize);
}

}
