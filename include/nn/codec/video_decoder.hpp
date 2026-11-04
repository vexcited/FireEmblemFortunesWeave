#pragma once

#include <stdint.h>

#include "nn/os/system_event.hpp"
#include "nn/os/time.hpp"
#include "nn/result.hpp"

namespace nn::gs {

struct NativeSyncHandle {
  uint64_t value[2];
};

}

namespace nn::codec {

namespace detail {

constexpr int VideoDecoderBufferCountMax = 8;

struct VideoDecoderBuffer {
  bool isRegistered;
  uint32_t nativeImageHandle;
};

struct VideoDecoderStorage {
  void* session;
  os::SystemEventType submissionReadyEvent;
  VideoDecoderBuffer buffers[VideoDecoderBufferCountMax];
  uint32_t outputQueue[VideoDecoderBufferCountMax];
  uint32_t outputQueueHead;
  uint32_t outputQueueCount;
  gs::NativeSyncHandle syncHandles[VideoDecoderBufferCountMax];
};

static_assert(sizeof(VideoDecoderStorage) == 288);

void FinalizeVideoDecoder(VideoDecoderStorage* decoder);
void ReleaseVideoDecoderOutputBuffer(VideoDecoderStorage* decoder,
  uint32_t index, gs::NativeSyncHandle syncHandle);
Result GetVideoDecoderOutputBufferProperties(VideoDecoderStorage* decoder,
  uint16_t* width, uint16_t* height, uint16_t* stride, uint16_t* alignedHeight,
  TimeSpan* timestamp, bool* isKeyFrame, uint32_t index);

// Decoded frames are handed out in the order the service completed them.
inline Result AcquireVideoDecoderOutputBuffer(uint32_t* index,
  gs::NativeSyncHandle* syncHandle, VideoDecoderStorage* decoder) {
  const uint32_t count = decoder->outputQueueCount;
  if (count == 0) {
    return {0x1c286f};
  }

  const uint32_t head = decoder->outputQueueHead;
  const uint32_t buffer = decoder->outputQueue[head];
  decoder->outputQueueHead = (head + 1) % VideoDecoderBufferCountMax;
  decoder->outputQueueCount = count - 1;
  *index = buffer;
  *syncHandle = decoder->syncHandles[buffer];
  return {0};
}

}

struct Av1DecoderType : detail::VideoDecoderStorage {};
struct H264DecoderType : detail::VideoDecoderStorage {};
struct Vp8DecoderType : detail::VideoDecoderStorage {};
struct Vp9DecoderType : detail::VideoDecoderStorage {};

}
