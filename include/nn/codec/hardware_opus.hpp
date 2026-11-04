#pragma once

#include "nn/codec/hwacod.hpp"
#include "nn/codec/opus.hpp"
#include "nn/os/synchronization.hpp"

namespace nn::codec {

namespace opus::hw {

struct DecoderManagerStorage {
  hwacod::HardwareAudioCodecManagerType* manager;
  hwacod::HardwareAudioCodecInstanceType* instances;
  size_t instanceCount;
  bool* isInstanceUsed;
  size_t decoderCount;
  os::SdkMutexType mutex;
};

}

struct HardwareOpusDecoderManagerType {
  opus::hw::DecoderManagerStorage* storage;
  void* workBuffer;
  size_t workBufferSize;
};

struct HardwareOpusMultiStreamDecoderManagerType {
  opus::hw::DecoderManagerStorage* storage;
  void* workBuffer;
  size_t workBufferSize;
};

// Decoders created through a manager keep the instance and the manager in
// the first two fields. Service based decoders store their session object
// and work buffer there instead, with a nonzero work buffer size.
struct HardwareOpusDecoderType {
  void* handle;
  void* context;
  size_t workBufferSize;
  int32_t sampleRate;
  int32_t channelCount;
  int64_t processingTime;
  bool isResetRequested;
};

struct HardwareOpusMultiStreamDecoderType {
  void* handle;
  void* context;
  size_t workBufferSize;
  int32_t sampleRate;
  int32_t channelCount;
  int32_t totalStreamCount;
  int32_t stereoStreamCount;
  int64_t processingTime;
  bool isResetRequested;
};

OpusResult InitializeHardwareOpusDecoder(HardwareOpusDecoderType* decoder,
  int sampleRate, int channelCount, TimeSpan frameDuration,
  HardwareOpusDecoderManagerType* manager);
TimeSpan GetHardwareOpusDecoderFrameDuration(
  const HardwareOpusDecoderType* decoder);
OpusResult EnqueueOpusDataToHardwareOpusDecoder(
  HardwareOpusDecoderType* decoder, size_t* consumedSize, const void* data,
  size_t size);
HardwareOpusDecoderManagerType* GetHardwareOpusDecoderManager(
  HardwareOpusDecoderType* decoder);
OpusResult DequeuePcmInterleavedDataFromHardwareOpusDecoder(
  HardwareOpusDecoderType* decoder, int* sampleCount, int16_t* buffer,
  size_t bufferSize);
int GetHardwareOpusDecoderWaitingDecodeRequestCount(
  const HardwareOpusDecoderType* decoder);
int GetHardwareOpusDecoderExecutingDecodeRequestCount(
  const HardwareOpusDecoderType* decoder);
int GetHardwareOpusDecoderCompletedDecodeRequestCount(
  const HardwareOpusDecoderType* decoder);
size_t GetHardwareOpusDecoderManagerWorkBufferSize(int sampleRate,
  int channelCount, TimeSpan frameDuration, int decoderCount,
  int ioBufferCount);
bool ValidateHardwareOpusDecoderManagerDecoderResource(
  const HardwareOpusDecoderManagerType* manager, int sampleRate,
  int channelCount, TimeSpan frameDuration);
Result InitializeHardwareOpusDecoderManager(
  HardwareOpusDecoderManagerType* manager, os::SystemEventType* event,
  int sampleRate, int channelCount, TimeSpan frameDuration, int decoderCount,
  int ioBufferCount, void* workBuffer, size_t workBufferSize);
void FinalizeHardwareOpusDecoderManager(
  HardwareOpusDecoderManagerType* manager);
void ExecuteHardwareOpusDecoderDecoding(
  HardwareOpusDecoderManagerType* manager);
int GetHardwareOpusDecoderManagerTotalDecoderResourceCount(
  const HardwareOpusDecoderManagerType* manager);
int GetHardwareOpusDecoderManagerFreeDecoderResourceCount(
  const HardwareOpusDecoderManagerType* manager);
int GetHardwareOpusDecoderManagerUsingDecoderResourceCount(
  const HardwareOpusDecoderManagerType* manager);
int GetHardwareOpusDecoderManagerTotalIoBufferCount(
  const HardwareOpusDecoderManagerType* manager);
int GetHardwareOpusDecoderManagerFreeIoBufferCount(
  const HardwareOpusDecoderManagerType* manager);
int GetHardwareOpusDecoderManagerUsingIoBufferCount(
  const HardwareOpusDecoderManagerType* manager);

OpusResult InitializeHardwareOpusMultiStreamDecoder(
  HardwareOpusMultiStreamDecoderType* decoder, int sampleRate,
  int channelCount, int totalStreamCount, int stereoStreamCount,
  const uint8_t* channelMapping, TimeSpan frameDuration,
  HardwareOpusMultiStreamDecoderManagerType* manager);
TimeSpan GetHardwareOpusMultiStreamDecoderFrameDuration(
  const HardwareOpusMultiStreamDecoderType* decoder);
OpusResult EnqueueOpusDataToHardwareOpusMultiStreamDecoder(
  HardwareOpusMultiStreamDecoderType* decoder, size_t* consumedSize,
  const void* data, size_t size);
HardwareOpusMultiStreamDecoderManagerType*
GetHardwareOpusMultiStreamDecoderManager(
  HardwareOpusMultiStreamDecoderType* decoder);
OpusResult DequeuePcmInterleavedDataFromHardwareOpusMultiStreamDecoder(
  HardwareOpusMultiStreamDecoderType* decoder, int* sampleCount,
  int16_t* buffer, size_t bufferSize);
int GetHardwareOpusMultiStreamDecoderWaitingDecodeRequestCount(
  const HardwareOpusMultiStreamDecoderType* decoder);
int GetHardwareOpusMultiStreamDecoderExecutingDecodeRequestCount(
  const HardwareOpusMultiStreamDecoderType* decoder);
int GetHardwareOpusMultiStreamDecoderCompletedDecodeRequestCount(
  const HardwareOpusMultiStreamDecoderType* decoder);
size_t GetHardwareOpusMultiStreamDecoderManagerWorkBufferSize(int sampleRate,
  int channelCount, int totalStreamCount, int stereoStreamCount,
  TimeSpan frameDuration, int decoderCount, int ioBufferCount);
bool ValidateHardwareOpusMultiStreamDecoderManagerDecoderResource(
  const HardwareOpusMultiStreamDecoderManagerType* manager, int sampleRate,
  int channelCount, int totalStreamCount, int stereoStreamCount,
  TimeSpan frameDuration);
Result InitializeHardwareOpusMultiStreamDecoderManager(
  HardwareOpusMultiStreamDecoderManagerType* manager,
  os::SystemEventType* event, int sampleRate, int channelCount,
  int totalStreamCount, int stereoStreamCount, TimeSpan frameDuration,
  int decoderCount, int ioBufferCount, void* workBuffer,
  size_t workBufferSize);
void FinalizeHardwareOpusMultiStreamDecoderManager(
  HardwareOpusMultiStreamDecoderManagerType* manager);
void ExecuteHardwareOpusMultiStreamDecoderDecoding(
  HardwareOpusMultiStreamDecoderManagerType* manager);
int GetHardwareOpusMultiStreamDecoderManagerTotalDecoderResourceCount(
  const HardwareOpusMultiStreamDecoderManagerType* manager);
int GetHardwareOpusMultiStreamDecoderManagerFreeDecoderResourceCount(
  const HardwareOpusMultiStreamDecoderManagerType* manager);
int GetHardwareOpusMultiStreamDecoderManagerUsingDecoderResourceCount(
  const HardwareOpusMultiStreamDecoderManagerType* manager);
int GetHardwareOpusMultiStreamDecoderManagerTotalIoBufferCount(
  const HardwareOpusMultiStreamDecoderManagerType* manager);
int GetHardwareOpusMultiStreamDecoderManagerFreeIoBufferCount(
  const HardwareOpusMultiStreamDecoderManagerType* manager);
int GetHardwareOpusMultiStreamDecoderManagerUsingIoBufferCount(
  const HardwareOpusMultiStreamDecoderManagerType* manager);


namespace opus::hw {

OpusResult InitializeHardwareOpusDecoderImpl(HardwareOpusDecoderType* decoder,
  int sampleRate, int channelCount, TimeSpan frameDuration,
  HardwareOpusDecoderManagerType* manager);
TimeSpan GetHardwareOpusDecoderFrameDurationImpl(
  const HardwareOpusDecoderType* decoder);
OpusResult EnqueueOpusDataToHardwareOpusDecoderImpl(
  HardwareOpusDecoderType* decoder, size_t* consumedSize, const void* data,
  size_t size);
HardwareOpusDecoderManagerType* GetHardwareOpusDecoderManagerImpl(
  HardwareOpusDecoderType* decoder);
OpusResult DequeuePcmInterleavedDataFromHardwareOpusDecoderImpl(
  HardwareOpusDecoderType* decoder, int* sampleCount, int16_t* buffer,
  size_t bufferSize);
int GetHardwareOpusDecoderWaitingDecodeRequestCountImpl(
  const HardwareOpusDecoderType* decoder);
int GetHardwareOpusDecoderExecutingDecodeRequestCountImpl(
  const HardwareOpusDecoderType* decoder);
int GetHardwareOpusDecoderCompletedDecodeRequestCountImpl(
  const HardwareOpusDecoderType* decoder);
size_t GetHardwareOpusDecoderManagerWorkBufferSizeImpl(int sampleRate,
  int channelCount, TimeSpan frameDuration, int decoderCount,
  int ioBufferCount);
bool ValidateHardwareOpusDecoderManagerDecoderResourceImpl(
  const HardwareOpusDecoderManagerType* manager, int sampleRate,
  int channelCount, TimeSpan frameDuration);
Result InitializeHardwareOpusDecoderManagerImpl(
  HardwareOpusDecoderManagerType* manager, os::SystemEventType* event,
  int sampleRate, int channelCount, TimeSpan frameDuration, int decoderCount,
  int ioBufferCount, void* workBuffer, size_t workBufferSize);
void FinalizeHardwareOpusDecoderManagerImpl(
  HardwareOpusDecoderManagerType* manager);
void ExecuteHardwareOpusDecoderDecodingImpl(
  HardwareOpusDecoderManagerType* manager);
int GetHardwareOpusDecoderManagerTotalDecoderResourceCountImpl(
  const HardwareOpusDecoderManagerType* manager);
int GetHardwareOpusDecoderManagerFreeDecoderResourceCountImpl(
  const HardwareOpusDecoderManagerType* manager);
int GetHardwareOpusDecoderManagerUsingDecoderResourceCountImpl(
  const HardwareOpusDecoderManagerType* manager);
int GetHardwareOpusDecoderManagerTotalIoBufferCountImpl(
  const HardwareOpusDecoderManagerType* manager);
int GetHardwareOpusDecoderManagerFreeIoBufferCountImpl(
  const HardwareOpusDecoderManagerType* manager);
int GetHardwareOpusDecoderManagerUsingIoBufferCountImpl(
  const HardwareOpusDecoderManagerType* manager);
OpusResult InitializeHardwareOpusMultiStreamDecoderImpl(
  HardwareOpusMultiStreamDecoderType* decoder, int sampleRate,
  int channelCount, int totalStreamCount, int stereoStreamCount,
  const uint8_t* channelMapping, TimeSpan frameDuration,
  HardwareOpusMultiStreamDecoderManagerType* manager);
TimeSpan GetHardwareOpusMultiStreamDecoderFrameDurationImpl(
  const HardwareOpusMultiStreamDecoderType* decoder);
OpusResult EnqueueOpusDataToHardwareOpusMultiStreamDecoderImpl(
  HardwareOpusMultiStreamDecoderType* decoder, size_t* consumedSize,
  const void* data, size_t size);
HardwareOpusMultiStreamDecoderManagerType*
GetHardwareOpusMultiStreamDecoderManagerImpl(
  HardwareOpusMultiStreamDecoderType* decoder);
OpusResult DequeuePcmInterleavedDataFromHardwareOpusMultiStreamDecoderImpl(
  HardwareOpusMultiStreamDecoderType* decoder, int* sampleCount,
  int16_t* buffer, size_t bufferSize);
int GetHardwareOpusMultiStreamDecoderWaitingDecodeRequestCountImpl(
  const HardwareOpusMultiStreamDecoderType* decoder);
int GetHardwareOpusMultiStreamDecoderExecutingDecodeRequestCountImpl(
  const HardwareOpusMultiStreamDecoderType* decoder);
int GetHardwareOpusMultiStreamDecoderCompletedDecodeRequestCountImpl(
  const HardwareOpusMultiStreamDecoderType* decoder);
size_t GetHardwareOpusMultiStreamDecoderManagerWorkBufferSizeImpl(
  int sampleRate, int channelCount, int totalStreamCount, int stereoStreamCount,
  TimeSpan frameDuration, int decoderCount, int ioBufferCount);
bool ValidateHardwareOpusMultiStreamDecoderManagerDecoderResourceImpl(
  const HardwareOpusMultiStreamDecoderManagerType* manager, int sampleRate,
  int channelCount, int totalStreamCount, int stereoStreamCount,
  TimeSpan frameDuration);
Result InitializeHardwareOpusMultiStreamDecoderManagerImpl(
  HardwareOpusMultiStreamDecoderManagerType* manager,
  os::SystemEventType* event, int sampleRate, int channelCount,
  int totalStreamCount, int stereoStreamCount, TimeSpan frameDuration,
  int decoderCount, int ioBufferCount, void* workBuffer,
  size_t workBufferSize);
void FinalizeHardwareOpusMultiStreamDecoderManagerImpl(
  HardwareOpusMultiStreamDecoderManagerType* manager);
void ExecuteHardwareOpusMultiStreamDecoderDecodingImpl(
  HardwareOpusMultiStreamDecoderManagerType* manager);
int GetHardwareOpusMultiStreamDecoderManagerTotalDecoderResourceCountImpl(
  const HardwareOpusMultiStreamDecoderManagerType* manager);
int GetHardwareOpusMultiStreamDecoderManagerFreeDecoderResourceCountImpl(
  const HardwareOpusMultiStreamDecoderManagerType* manager);
int GetHardwareOpusMultiStreamDecoderManagerUsingDecoderResourceCountImpl(
  const HardwareOpusMultiStreamDecoderManagerType* manager);
int GetHardwareOpusMultiStreamDecoderManagerTotalIoBufferCountImpl(
  const HardwareOpusMultiStreamDecoderManagerType* manager);
int GetHardwareOpusMultiStreamDecoderManagerFreeIoBufferCountImpl(
  const HardwareOpusMultiStreamDecoderManagerType* manager);
int GetHardwareOpusMultiStreamDecoderManagerUsingIoBufferCountImpl(
  const HardwareOpusMultiStreamDecoderManagerType* manager);

hwacod::HardwareAudioCodecManagerType* GetManagerType(
  HardwareOpusDecoderManagerType* manager);
const hwacod::HardwareAudioCodecManagerType* GetManagerType(
  const HardwareOpusDecoderManagerType* manager);
hwacod::HardwareAudioCodecInstanceType* AcquireInstanceType(
  HardwareOpusDecoderManagerType* manager);
void ReleaseInstanceType(HardwareOpusDecoderManagerType* manager,
  hwacod::HardwareAudioCodecInstanceType* instance);
void FinalizeHardwareOpusDecoderImpl(HardwareOpusDecoderType* decoder);
void ResetHardwareOpusDecoderImpl(HardwareOpusDecoderType* decoder);

hwacod::HardwareAudioCodecManagerType* GetManagerType(
  HardwareOpusMultiStreamDecoderManagerType* manager);
const hwacod::HardwareAudioCodecManagerType* GetManagerType(
  const HardwareOpusMultiStreamDecoderManagerType* manager);
hwacod::HardwareAudioCodecInstanceType* AcquireInstanceType(
  HardwareOpusMultiStreamDecoderManagerType* manager);
void ReleaseInstanceType(HardwareOpusMultiStreamDecoderManagerType* manager,
  hwacod::HardwareAudioCodecInstanceType* instance);
void FinalizeHardwareOpusMultiStreamDecoderImpl(
  HardwareOpusMultiStreamDecoderType* decoder);
void ResetHardwareOpusMultiStreamDecoderImpl(
  HardwareOpusMultiStreamDecoderType* decoder);

}
}
