#pragma once

#include <stdint.h>

#include "nn/codec/video_decoder.hpp"

namespace nn::codec::video::ipc {

struct VideoEncService : tipc::ClientSession {};

}

namespace nn::codec {

namespace detail {

constexpr int VideoEncoderBufferCountMax = 8;

struct VideoEncoderBuffer {
  uint8_t isRegistered;
  uint32_t nativeImageHandle;
  uint32_t imageIndex;
};

struct VideoEncoderStorage {
  video::ipc::VideoEncService* session;
  os::SystemEventType outputReadyEvent;
  VideoEncoderBuffer buffers[VideoEncoderBufferCountMax];
  uint32_t inputQueue[VideoEncoderBufferCountMax];
  uint32_t inputQueueHead;
  uint32_t inputQueueCount;
  gs::NativeSyncHandle syncHandles[VideoEncoderBufferCountMax];
};

static_assert(sizeof(VideoEncoderStorage) == 320);

void FinalizeVideoEncoder(VideoEncoderStorage* encoder);
Result SetVideoEncoderProperties(VideoEncoderStorage* encoder, int bitRate,
  int frameRate, int keyFrameInterval, int minQp, int maxQp, int sliceCount,
  int referenceFrameCount, int bFrameCount, int targetQuality,
  bool isConstantQuality);
Result SubmitVideoEncoderInputBuffer(VideoEncoderStorage* encoder,
  uint32_t index, gs::NativeSyncHandle syncHandle, TimeSpan timestamp,
  bool isKeyFrameRequested);
Result SubmitVideoEncoderInputBuffer(VideoEncoderStorage* encoder,
  uint32_t index, gs::NativeSyncHandle syncHandle, TimeSpan timestamp,
  bool isKeyFrameRequested, uint16_t left, uint16_t top, uint16_t width,
  uint16_t height);

}

struct H264EncoderType : detail::VideoEncoderStorage {};

}
