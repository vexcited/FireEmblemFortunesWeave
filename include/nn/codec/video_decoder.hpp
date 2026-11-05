#pragma once

#include <stdint.h>

#include "nn/codec/video_image_pool.hpp"
#include "nn/diag/diag_abort.hpp"
#include "nn/os/system_event.hpp"
#include "nn/os/time.hpp"
#include "nn/result.hpp"
#include "nn/tipc/tipc_message.hpp"

namespace nn::gs {

struct NativeSyncHandle {
  uint64_t value[2];
};

}

namespace nn::codec::video::ipc {

struct VideoDecService : tipc::ClientSession {};

}

namespace nn::codec {

enum class VideoDecoderInputFormat : int32_t;
enum class VideoDecoderOutputMode : int32_t;

struct EncryptionProperty {
  uint8_t data[0x838];
};

namespace detail {

constexpr int VideoDecoderBufferCountMax = 8;

struct VideoDecoderBuffer {
  uint8_t isRegistered;
  uint32_t nativeImageHandle;
};

struct VideoDecoderOutputProperties {
  uint32_t width;
  uint32_t height;
  uint32_t stride;
  uint32_t alignedHeight;
  int64_t timestamp;
  bool isKeyFrame;
};

struct VideoDecoderOutputInfo {
  uint8_t isAvailable;
  VideoDecoderOutputProperties properties;
};

static_assert(sizeof(VideoDecoderOutputInfo) == 40);

struct VideoDecoderStorage {
  video::ipc::VideoDecService* session;
  os::SystemEventType submissionReadyEvent;
  VideoDecoderBuffer buffers[VideoDecoderBufferCountMax];
  uint32_t outputQueue[VideoDecoderBufferCountMax];
  uint32_t outputQueueHead;
  uint32_t outputQueueCount;
  gs::NativeSyncHandle syncHandles[VideoDecoderBufferCountMax];
  VideoDecoderOutputInfo outputInfos[VideoDecoderBufferCountMax];
};

static_assert(sizeof(VideoDecoderStorage) == 608);

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

inline void RegisterVideoDecoderBuffer(VideoDecoderStorage* decoder,
  uint32_t index, VideoDecoderImagePoolType* pool, uint32_t imageIndex) {
  const gs::NativeImageHandle handle =
    gs::sdk::CalculateNativeImageHandle(pool->nativeImageHandle, imageIndex);
  VideoDecoderBuffer& buffer = decoder->buffers[index];
  NN_ABORT_UNLESS((buffer.isRegistered & 1) == 0);
  buffer.nativeImageHandle = handle.value;
  buffer.isRegistered = 1;

  struct {
    uint64_t handle;
    uint64_t reserved;
  } request = {handle.value, 0};

  uint8_t* message = tipc::GetMessageBuffer();
  tipc::WriteMessage<uint64_t>(message, 0, 0x400000147);
  __builtin_memcpy(message + 8, &request, sizeof(request));
  const uint32_t result = tipc::Invoke(decoder->session, message, 0x900000147);

  if (result != 0) {
    buffer.isRegistered = 0;
    NN_ABORT_UNLESS((result & 0x3fffff) != 0xfa26f);
    NN_ABORT_UNLESS(result == 0);
  }

  __builtin_memcpy(&decoder->syncHandles[index], message + 12,
    sizeof(gs::NativeSyncHandle));
  const uint32_t count = decoder->outputQueueCount;
  NN_ABORT_UNLESS(count != VideoDecoderBufferCountMax);
  decoder->outputQueueCount = count + 1;
  decoder->outputQueue[(decoder->outputQueueHead + count) %
    VideoDecoderBufferCountMax] = index;
}

inline void UnregisterVideoDecoderBuffer(VideoDecoderStorage* decoder,
  uint32_t index) {
  VideoDecoderBuffer& buffer = decoder->buffers[index];

  struct {
    uint8_t handle[4];
    uint8_t reserved[28];
  } request = {};

  uint8_t* message = tipc::GetMessageBuffer();
  tipc::WriteMessage<uint64_t>(message, 0, 0x8000000e4);
  __builtin_memcpy(request.handle, &buffer.nativeImageHandle, 4);
  __builtin_memcpy(message + 8, &request, sizeof(request));
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    Result{tipc::Invoke(decoder->session, message, 0x1000000e4)});
  buffer.isRegistered = 0;
}

inline Result StartVideoDecoder(VideoDecoderStorage* decoder) {
  uint8_t* message = tipc::GetMessageBuffer();
  tipc::WriteMessage<uint64_t>(message, 0, 0x16);
  return {tipc::Invoke(decoder->session, message, 0x100000016)};
}

inline void StopVideoDecoder(VideoDecoderStorage* decoder) {
  uint8_t* message = tipc::GetMessageBuffer();
  tipc::WriteMessage<uint64_t>(message, 0, 0xdf);
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    Result{tipc::Invoke(decoder->session, message, 0x1000000df)});
}

inline Result FlushVideoDecoder(VideoDecoderStorage* decoder) {
  uint8_t* message = tipc::GetMessageBuffer();
  tipc::WriteMessage<uint64_t>(message, 0, 0x18);
  return {tipc::Invoke(decoder->session, message, 0x100000018)};
}

inline Result SubmitVideoDecoderInputBuffer(uint64_t* id,
  VideoDecoderStorage* decoder, const void* buffer, size_t size,
  TimeSpan timestamp, bool isEndOfStream) {
  uint8_t* message = tipc::GetMessageBuffer();
  tipc::WriteMessage<uint64_t>(message, 0, 0x30010007d);
  tipc::WriteBufferDescriptor(message, 8, buffer, size);
  tipc::WriteMessage<int64_t>(message, 20, timestamp.nanoseconds / 1000);
  tipc::WriteMessage<bool>(message, 28, isEndOfStream);
  const uint32_t result =
    tipc::Invoke(decoder->session, message, 0x30000007d);

  if (result == 0) {
    *id = tipc::ReadMessage<uint64_t>(message, 12);
  }

  return {result};
}

inline Result SubmitEncryptedVideoDecoderInputBuffer(uint64_t* id,
  VideoDecoderStorage* decoder, const EncryptionProperty* property,
  const void* buffer, size_t size, TimeSpan timestamp, bool isEndOfStream) {
  uint8_t* message = tipc::GetMessageBuffer();
  tipc::WriteMessage<uint64_t>(message, 0, 0x3002001a0);
  tipc::WriteBufferDescriptor(message, 8, buffer, size);
  tipc::WriteBufferDescriptor(message, 20, property, sizeof(*property));
  tipc::WriteMessage<int64_t>(message, 32, timestamp.nanoseconds / 1000);
  tipc::WriteMessage<bool>(message, 40, isEndOfStream);
  const uint32_t result =
    tipc::Invoke(decoder->session, message, 0x3000001a0);

  if (result == 0) {
    *id = tipc::ReadMessage<uint64_t>(message, 12);
  }

  return {result};
}

}

struct Av1DecoderType : detail::VideoDecoderStorage {};
struct H264DecoderType : detail::VideoDecoderStorage {};
struct Vp8DecoderType : detail::VideoDecoderStorage {};
struct Vp9DecoderType : detail::VideoDecoderStorage {};

}
