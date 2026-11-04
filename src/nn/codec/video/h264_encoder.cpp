#include "nn/codec/video_encoder.hpp"

namespace nn::codec {

void FinalizeH264Encoder(H264EncoderType* encoder) {
  detail::FinalizeVideoEncoder(encoder);
}

void UnregisterH264EncoderBuffer(H264EncoderType* encoder, uint32_t index) {
  encoder->buffers[index].isRegistered = false;
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

}
