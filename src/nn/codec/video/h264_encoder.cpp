#include "nn/codec/video_encoder.hpp"
#include "nn/codec/video_encoder_holder.hpp"

#include <string.h>
#include "nn/codec/video_image_pool.hpp"

namespace nn::codec {

namespace {

using Holder = video::detail::H264EncoderHolder<8>;

Holder* GetHolder(H264EncoderType* encoder) {
  return reinterpret_cast<Holder*>(encoder);
}

}

Result InitializeH264Encoder(unsigned long* outputBufferSize,
  H264EncoderType* encoder, void* buffer, unsigned long size, uint16_t width,
  uint16_t height, int frameRate, movie::BitRateMode bitRateMode,
  movie::AvcProfile profile, movie::AvcLevel level, int bitRate,
  int keyFrameInterval, int minQp, int maxQp, int sliceCount,
  bool isFrameSkipEnabled, bool isConstantQuality, int targetQuality,
  bool isLowLatency, VideoEncoderHardwareProfile hardwareProfile,
  int referenceFrameCount) {
  memset(encoder, 0, sizeof(*encoder));
  gsdrv::UniqueNativeHandle transferMemory;
  NN_RESULT_DO(
    video::detail::CreateTransferMemory(&transferMemory, buffer, size));
  return GetHolder(encoder)->Create(outputBufferSize,
    static_cast<gsdrv::UniqueNativeHandle&&>(transferMemory), size, width,
    height, frameRate, bitRateMode, profile, level, bitRate, keyFrameInterval,
    minQp, maxQp, sliceCount, isFrameSkipEnabled, isConstantQuality,
    targetQuality, isLowLatency, hardwareProfile, referenceFrameCount);
}

Result InitializeH264Encoder(unsigned long* outputBufferSize,
  H264EncoderType* encoder, gsdrv::WeakNativeHandle transferMemory,
  unsigned long size, uint16_t width, uint16_t height, int frameRate,
  movie::BitRateMode bitRateMode, movie::AvcProfile profile,
  movie::AvcLevel level, int bitRate, int keyFrameInterval, int minQp,
  int maxQp, int sliceCount, bool isFrameSkipEnabled, bool isConstantQuality,
  int targetQuality, bool isLowLatency,
  VideoEncoderHardwareProfile hardwareProfile, int referenceFrameCount) {
  memset(encoder, 0, sizeof(*encoder));
  return GetHolder(encoder)->Create(outputBufferSize, transferMemory, size,
    width, height, frameRate, bitRateMode, profile, level, bitRate,
    keyFrameInterval, minQp, maxQp, sliceCount, isFrameSkipEnabled,
    isConstantQuality, targetQuality, isLowLatency, hardwareProfile,
    referenceFrameCount);
}

void FinalizeH264Encoder(H264EncoderType* encoder) {
  detail::FinalizeVideoEncoder(encoder);
}

void UnregisterH264EncoderBuffer(H264EncoderType* encoder, uint32_t index) {
  encoder->buffers[index].isRegistered = 0;
}

Result SetH264EncoderProperties(H264EncoderType* encoder, int bitRate,
  int frameRate, int keyFrameInterval, int minQp, int maxQp, int sliceCount,
  int referenceFrameCount, int bFrameCount, int targetQuality,
  bool isConstantQuality) {
  return detail::SetVideoEncoderProperties(encoder, bitRate, frameRate,
    keyFrameInterval, minQp, maxQp, sliceCount, referenceFrameCount,
    bFrameCount, targetQuality, isConstantQuality);
}

Result AcquireH264EncoderInputBuffer(uint32_t* index,
  gs::NativeSyncHandle* syncHandle, H264EncoderType* encoder) {
  const uint32_t count = encoder->inputQueueCount;
  if (count == 0) {
    return {0x1cee6f};
  }

  const uint32_t head = encoder->inputQueueHead;
  const uint32_t buffer = encoder->inputQueue[head];
  encoder->inputQueueHead = (head + 1) % detail::VideoEncoderBufferCountMax;
  encoder->inputQueueCount = count - 1;
  *index = buffer;
  *syncHandle = encoder->syncHandles[buffer];
  return {0};
}

Result SubmitH264EncoderInputBuffer(H264EncoderType* encoder, uint32_t index,
  gs::NativeSyncHandle syncHandle, TimeSpan timestamp,
  bool isKeyFrameRequested) {
  return detail::SubmitVideoEncoderInputBuffer(encoder, index, syncHandle,
    timestamp, isKeyFrameRequested);
}

Result SubmitH264EncoderInputBuffer(H264EncoderType* encoder, uint32_t index,
  gs::NativeSyncHandle syncHandle, TimeSpan timestamp,
  bool isKeyFrameRequested, uint16_t left, uint16_t top, uint16_t width,
  uint16_t height) {
  return detail::SubmitVideoEncoderInputBuffer(encoder, index, syncHandle,
    timestamp, isKeyFrameRequested, left, top, width, height);
}

os::SystemEventType* GetH264EncoderOutputReadyEvent(
  H264EncoderType* encoder) {
  return &encoder->outputReadyEvent;
}

void RegisterH264EncoderBuffer(H264EncoderType* encoder, uint32_t index,
  VideoEncoderImagePoolType* pool, uint32_t imageIndex) {
  const gs::NativeImageHandle handle =
    gs::sdk::CalculateNativeImageHandle(pool->nativeImageHandle, 0);
  detail::VideoEncoderBuffer& buffer = encoder->buffers[index];
  NN_ABORT_UNLESS((buffer.isRegistered & 1) == 0);
  buffer.isRegistered = 1;
  buffer.nativeImageHandle = handle.value;
  buffer.imageIndex = imageIndex;

  const uint32_t count = encoder->inputQueueCount;
  NN_ABORT_UNLESS(count != detail::VideoEncoderBufferCountMax);
  encoder->inputQueueCount = count + 1;
  encoder->inputQueue[(encoder->inputQueueHead + count) %
    detail::VideoEncoderBufferCountMax] = index;
}

Result StartH264Encoder(H264EncoderType* encoder) {
  uint8_t* message = tipc::GetMessageBuffer();
  tipc::WriteMessage<uint64_t>(message, 0, 0x15);
  return {tipc::Invoke(encoder->session, message, 0x100000015)};
}

void StopH264Encoder(H264EncoderType* encoder) {
  uint8_t* message = tipc::GetMessageBuffer();
  tipc::WriteMessage<uint64_t>(message, 0, 0xde);
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    Result{tipc::Invoke(encoder->session, message, 0x1000000de)});
}

Result BlankH264Encoder(H264EncoderType* encoder, TimeSpan timestamp,
  bool isKeyFrameRequested) {
  struct {
    int64_t timestamp;
    uint64_t isKeyFrameRequested;
  } request = {timestamp.nanoseconds, isKeyFrameRequested};

  uint8_t* message = tipc::GetMessageBuffer();
  tipc::WriteMessage<uint64_t>(message, 0, 0x40000007d);
  __builtin_memcpy(message + 8, &request, sizeof(request));
  return {tipc::Invoke(encoder->session, message, 0x10000007d)};
}

Result GetH264EncoderOutputBuffer(uint64_t* offset, uint64_t* size,
  uint64_t* flags, TimeSpan* timestamp, H264EncoderType* encoder,
  void* buffer, size_t bufferSize) {
  uint8_t* message = tipc::GetMessageBuffer();
  tipc::WriteMessage<uint64_t>(message, 0, 0x100007e);
  tipc::WriteBufferDescriptor(message, 8, buffer, bufferSize);
  const uint32_t result =
    tipc::Invoke(encoder->session, message, 0x90000007e);

  if (result == 0) {
    *offset = tipc::ReadMessage<uint64_t>(message, 12);
    *size = tipc::ReadMessage<uint64_t>(message, 20);
    *flags = tipc::ReadMessage<uint64_t>(message, 28);
    timestamp->nanoseconds = tipc::ReadMessage<int64_t>(message, 36) * 1000;
  }

  return {result};
}

}
