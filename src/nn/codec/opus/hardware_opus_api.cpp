#include "nn/codec/hardware_opus.hpp"

namespace nn::codec {

OpusResult InitializeHardwareOpusDecoder(HardwareOpusDecoderType* decoder,
  int sampleRate, int channelCount, TimeSpan frameDuration,
  HardwareOpusDecoderManagerType* manager) {
  if (GetHardwareOpusDecoderManagerFreeDecoderResourceCount(manager) < 1) {
    return OpusResult_OutOfDecoderResource;
  }

  return opus::hw::InitializeHardwareOpusDecoderImpl(decoder, sampleRate,
    channelCount, frameDuration, manager);
}

TimeSpan GetHardwareOpusDecoderFrameDuration(
  const HardwareOpusDecoderType* decoder) {
  return opus::hw::GetHardwareOpusDecoderFrameDurationImpl(decoder);
}

OpusResult EnqueueOpusDataToHardwareOpusDecoder(
  HardwareOpusDecoderType* decoder, size_t* consumedSize, const void* data,
  size_t size) {
  if (GetHardwareOpusDecoderManagerFreeIoBufferCount(
    opus::hw::GetHardwareOpusDecoderManagerImpl(decoder)) < 1) {
    return OpusResult_OutOfIoBuffer;
  }

  return opus::hw::EnqueueOpusDataToHardwareOpusDecoderImpl(decoder,
    consumedSize, data, size);
}

HardwareOpusDecoderManagerType* GetHardwareOpusDecoderManager(
  HardwareOpusDecoderType* decoder) {
  return opus::hw::GetHardwareOpusDecoderManagerImpl(decoder);
}

OpusResult DequeuePcmInterleavedDataFromHardwareOpusDecoder(
  HardwareOpusDecoderType* decoder, int* sampleCount, int16_t* buffer,
  size_t bufferSize) {
  return opus::hw::DequeuePcmInterleavedDataFromHardwareOpusDecoderImpl(decoder,
    sampleCount, buffer, bufferSize);
}

int GetHardwareOpusDecoderWaitingDecodeRequestCount(
  const HardwareOpusDecoderType* decoder) {
  return opus::hw::GetHardwareOpusDecoderWaitingDecodeRequestCountImpl(decoder);
}

int GetHardwareOpusDecoderExecutingDecodeRequestCount(
  const HardwareOpusDecoderType* decoder) {
  return opus::hw::GetHardwareOpusDecoderExecutingDecodeRequestCountImpl(
    decoder);
}

int GetHardwareOpusDecoderCompletedDecodeRequestCount(
  const HardwareOpusDecoderType* decoder) {
  return opus::hw::GetHardwareOpusDecoderCompletedDecodeRequestCountImpl(
    decoder);
}

size_t GetHardwareOpusDecoderManagerWorkBufferSize(int sampleRate,
  int channelCount, TimeSpan frameDuration, int decoderCount,
  int ioBufferCount) {
  return opus::hw::GetHardwareOpusDecoderManagerWorkBufferSizeImpl(sampleRate,
    channelCount, frameDuration, decoderCount, ioBufferCount);
}

bool ValidateHardwareOpusDecoderManagerDecoderResource(
  const HardwareOpusDecoderManagerType* manager, int sampleRate,
  int channelCount, TimeSpan frameDuration) {
  return opus::hw::ValidateHardwareOpusDecoderManagerDecoderResourceImpl(
    manager, sampleRate, channelCount, frameDuration);
}

Result InitializeHardwareOpusDecoderManager(
  HardwareOpusDecoderManagerType* manager, os::SystemEventType* event,
  int sampleRate, int channelCount, TimeSpan frameDuration, int decoderCount,
  int ioBufferCount, void* workBuffer, size_t workBufferSize) {
  return opus::hw::InitializeHardwareOpusDecoderManagerImpl(manager, event,
    sampleRate, channelCount, frameDuration, decoderCount, ioBufferCount,
    workBuffer, workBufferSize);
}

void FinalizeHardwareOpusDecoderManager(
  HardwareOpusDecoderManagerType* manager) {
  opus::hw::FinalizeHardwareOpusDecoderManagerImpl(manager);
}

void ExecuteHardwareOpusDecoderDecoding(
  HardwareOpusDecoderManagerType* manager) {
  opus::hw::ExecuteHardwareOpusDecoderDecodingImpl(manager);
}

int GetHardwareOpusDecoderManagerTotalDecoderResourceCount(
  const HardwareOpusDecoderManagerType* manager) {
  return opus::hw::GetHardwareOpusDecoderManagerTotalDecoderResourceCountImpl(
    manager);
}

int GetHardwareOpusDecoderManagerFreeDecoderResourceCount(
  const HardwareOpusDecoderManagerType* manager) {
  return opus::hw::GetHardwareOpusDecoderManagerFreeDecoderResourceCountImpl(
    manager);
}

int GetHardwareOpusDecoderManagerUsingDecoderResourceCount(
  const HardwareOpusDecoderManagerType* manager) {
  return opus::hw::GetHardwareOpusDecoderManagerUsingDecoderResourceCountImpl(
    manager);
}

int GetHardwareOpusDecoderManagerTotalIoBufferCount(
  const HardwareOpusDecoderManagerType* manager) {
  return opus::hw::GetHardwareOpusDecoderManagerTotalIoBufferCountImpl(manager);
}

int GetHardwareOpusDecoderManagerFreeIoBufferCount(
  const HardwareOpusDecoderManagerType* manager) {
  return opus::hw::GetHardwareOpusDecoderManagerFreeIoBufferCountImpl(manager);
}

int GetHardwareOpusDecoderManagerUsingIoBufferCount(
  const HardwareOpusDecoderManagerType* manager) {
  return opus::hw::GetHardwareOpusDecoderManagerUsingIoBufferCountImpl(manager);
}

OpusResult InitializeHardwareOpusMultiStreamDecoder(
  HardwareOpusMultiStreamDecoderType* decoder, int sampleRate,
  int channelCount, int totalStreamCount, int stereoStreamCount,
  const uint8_t* channelMapping, TimeSpan frameDuration,
  HardwareOpusMultiStreamDecoderManagerType* manager) {
  if (GetHardwareOpusMultiStreamDecoderManagerFreeDecoderResourceCount(
    manager) < 1) {
    return OpusResult_OutOfDecoderResource;
  }

  return opus::hw::InitializeHardwareOpusMultiStreamDecoderImpl(decoder,
    sampleRate, channelCount, totalStreamCount, stereoStreamCount,
    channelMapping, frameDuration, manager);
}

TimeSpan GetHardwareOpusMultiStreamDecoderFrameDuration(
  const HardwareOpusMultiStreamDecoderType* decoder) {
  return opus::hw::GetHardwareOpusMultiStreamDecoderFrameDurationImpl(decoder);
}

OpusResult EnqueueOpusDataToHardwareOpusMultiStreamDecoder(
  HardwareOpusMultiStreamDecoderType* decoder, size_t* consumedSize,
  const void* data, size_t size) {
  if (GetHardwareOpusMultiStreamDecoderManagerFreeIoBufferCount(
    opus::hw::GetHardwareOpusMultiStreamDecoderManagerImpl(decoder)) < 1) {
    return OpusResult_OutOfIoBuffer;
  }

  return opus::hw::EnqueueOpusDataToHardwareOpusMultiStreamDecoderImpl(decoder,
    consumedSize, data, size);
}

HardwareOpusMultiStreamDecoderManagerType*
GetHardwareOpusMultiStreamDecoderManager(
  HardwareOpusMultiStreamDecoderType* decoder) {
  return opus::hw::GetHardwareOpusMultiStreamDecoderManagerImpl(decoder);
}

OpusResult DequeuePcmInterleavedDataFromHardwareOpusMultiStreamDecoder(
  HardwareOpusMultiStreamDecoderType* decoder, int* sampleCount,
  int16_t* buffer, size_t bufferSize) {
  return opus::hw::
    DequeuePcmInterleavedDataFromHardwareOpusMultiStreamDecoderImpl(decoder,
    sampleCount, buffer, bufferSize);
}

int GetHardwareOpusMultiStreamDecoderWaitingDecodeRequestCount(
  const HardwareOpusMultiStreamDecoderType* decoder) {
  return opus::hw::
    GetHardwareOpusMultiStreamDecoderWaitingDecodeRequestCountImpl(decoder);
}

int GetHardwareOpusMultiStreamDecoderExecutingDecodeRequestCount(
  const HardwareOpusMultiStreamDecoderType* decoder) {
  return opus::hw::
    GetHardwareOpusMultiStreamDecoderExecutingDecodeRequestCountImpl(decoder);
}

int GetHardwareOpusMultiStreamDecoderCompletedDecodeRequestCount(
  const HardwareOpusMultiStreamDecoderType* decoder) {
  return opus::hw::
    GetHardwareOpusMultiStreamDecoderCompletedDecodeRequestCountImpl(decoder);
}

size_t GetHardwareOpusMultiStreamDecoderManagerWorkBufferSize(int sampleRate,
  int channelCount, int totalStreamCount, int stereoStreamCount,
  TimeSpan frameDuration, int decoderCount, int ioBufferCount) {
  return opus::hw::GetHardwareOpusMultiStreamDecoderManagerWorkBufferSizeImpl(
    sampleRate, channelCount, totalStreamCount, stereoStreamCount,
    frameDuration, decoderCount, ioBufferCount);
}

bool ValidateHardwareOpusMultiStreamDecoderManagerDecoderResource(
  const HardwareOpusMultiStreamDecoderManagerType* manager, int sampleRate,
  int channelCount, int totalStreamCount, int stereoStreamCount,
  TimeSpan frameDuration) {
  return opus::hw::
    ValidateHardwareOpusMultiStreamDecoderManagerDecoderResourceImpl(manager,
    sampleRate, channelCount, totalStreamCount, stereoStreamCount,
    frameDuration);
}

Result InitializeHardwareOpusMultiStreamDecoderManager(
  HardwareOpusMultiStreamDecoderManagerType* manager,
  os::SystemEventType* event, int sampleRate, int channelCount,
  int totalStreamCount, int stereoStreamCount, TimeSpan frameDuration,
  int decoderCount, int ioBufferCount, void* workBuffer,
  size_t workBufferSize) {
  return opus::hw::InitializeHardwareOpusMultiStreamDecoderManagerImpl(manager,
    event, sampleRate, channelCount, totalStreamCount, stereoStreamCount,
    frameDuration, decoderCount, ioBufferCount, workBuffer, workBufferSize);
}

void FinalizeHardwareOpusMultiStreamDecoderManager(
  HardwareOpusMultiStreamDecoderManagerType* manager) {
  opus::hw::FinalizeHardwareOpusMultiStreamDecoderManagerImpl(manager);
}

void ExecuteHardwareOpusMultiStreamDecoderDecoding(
  HardwareOpusMultiStreamDecoderManagerType* manager) {
  opus::hw::ExecuteHardwareOpusMultiStreamDecoderDecodingImpl(manager);
}

int GetHardwareOpusMultiStreamDecoderManagerTotalDecoderResourceCount(
  const HardwareOpusMultiStreamDecoderManagerType* manager) {
  return opus::hw::
    GetHardwareOpusMultiStreamDecoderManagerTotalDecoderResourceCountImpl(
    manager);
}

int GetHardwareOpusMultiStreamDecoderManagerFreeDecoderResourceCount(
  const HardwareOpusMultiStreamDecoderManagerType* manager) {
  return opus::hw::
    GetHardwareOpusMultiStreamDecoderManagerFreeDecoderResourceCountImpl(
    manager);
}

int GetHardwareOpusMultiStreamDecoderManagerUsingDecoderResourceCount(
  const HardwareOpusMultiStreamDecoderManagerType* manager) {
  return opus::hw::
    GetHardwareOpusMultiStreamDecoderManagerUsingDecoderResourceCountImpl(
    manager);
}

int GetHardwareOpusMultiStreamDecoderManagerTotalIoBufferCount(
  const HardwareOpusMultiStreamDecoderManagerType* manager) {
  return opus::hw::
    GetHardwareOpusMultiStreamDecoderManagerTotalIoBufferCountImpl(manager);
}

int GetHardwareOpusMultiStreamDecoderManagerFreeIoBufferCount(
  const HardwareOpusMultiStreamDecoderManagerType* manager) {
  return opus::hw::
    GetHardwareOpusMultiStreamDecoderManagerFreeIoBufferCountImpl(manager);
}

int GetHardwareOpusMultiStreamDecoderManagerUsingIoBufferCount(
  const HardwareOpusMultiStreamDecoderManagerType* manager) {
  return opus::hw::
    GetHardwareOpusMultiStreamDecoderManagerUsingIoBufferCountImpl(manager);
}

}
