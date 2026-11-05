#include "nn/codec/video_decoder_holder.hpp"

namespace nn::codec::detail {

void FinalizeVideoDecoder(VideoDecoderStorage* decoder) {
  os::DestroySystemEvent(&decoder->submissionReadyEvent);
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    Result{video::detail::DestroyDecoderSession(decoder->session)});
  video::detail::ShimLibraryGlobal::GetInstance().DestroyVideoDecService(
    decoder->session);

  for (uint32_t& entry : decoder->outputQueue) {
    entry = 0;
  }

  decoder->outputQueueHead = 0;
  decoder->outputQueueCount = 0;

  for (VideoDecoderBuffer& buffer : decoder->buffers) {
    buffer.isRegistered = 0;
  }

  for (VideoDecoderOutputInfo& info : decoder->outputInfos) {
    info.isAvailable = 0;
  }

  decoder->session = nullptr;
}

void ReleaseVideoDecoderOutputBuffer(VideoDecoderStorage* decoder,
  uint32_t index, gs::NativeSyncHandle syncHandle) {
  VideoDecoderBuffer& buffer = decoder->buffers[index];

  if (buffer.isRegistered != 1) {
    return;
  }

  struct {
    uint8_t handle[4];
    uint32_t reserved0;
    uint8_t syncHandle[16];
    uint64_t reserved1;
  } request = {};

  __builtin_memcpy(request.handle, &buffer.nativeImageHandle, 4);
  __builtin_memcpy(request.syncHandle, &syncHandle, 16);
  uint8_t* message = tipc::GetMessageBuffer();
  __builtin_memcpy(message + 8, &request, sizeof(request));
  tipc::WriteMessage<uint64_t>(message, 0, 0x80000014a);
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    Result{tipc::Invoke(decoder->session, message, 0x90000014a)});

  __builtin_memcpy(&decoder->syncHandles[index], message + 12,
    sizeof(gs::NativeSyncHandle));
  const uint32_t count = decoder->outputQueueCount;
  NN_ABORT_UNLESS(count != VideoDecoderBufferCountMax);
  decoder->outputQueueCount = count + 1;
  decoder->outputQueue[(decoder->outputQueueHead + count) %
    VideoDecoderBufferCountMax] = index;
  decoder->outputInfos[index].isAvailable = 0;
}

namespace {

uint32_t FindBuffer(const VideoDecoderStorage* decoder, uint32_t handle) {
  for (uint32_t i = 0; i < VideoDecoderBufferCountMax; ++i) {
    const VideoDecoderBuffer& buffer = decoder->buffers[i];

    if (buffer.isRegistered == 1 && buffer.nativeImageHandle == handle) {
      return i;
    }
  }

  return 0;
}

}

// Decoded frame properties arrive in completion order, so the service is
// polled until the requested buffer has been reported.
Result GetVideoDecoderOutputBufferProperties(VideoDecoderStorage* decoder,
  uint16_t* width, uint16_t* height, uint16_t* stride, uint16_t* alignedHeight,
  TimeSpan* timestamp, bool* isKeyFrame, uint32_t index) {
  VideoDecoderOutputInfo& info = decoder->outputInfos[index];

  if ((info.isAvailable & 1) == 0) {
    do {
      uint8_t* message = tipc::GetMessageBuffer();
      tipc::WriteMessage<uint64_t>(message, 0, 0xe5);
      const uint32_t result =
        tipc::Invoke(decoder->session, message, 0x11000000e5);

      if (result != 0) {
        return {result};
      }

      struct {
        uint32_t handle;
        VideoDecoderOutputProperties properties;
      } reply;

      __builtin_memcpy(&reply, message + 12, sizeof(reply));
      VideoDecoderOutputInfo& reported =
        decoder->outputInfos[FindBuffer(decoder, reply.handle)];
      reported.properties = reply.properties;

      if ((reported.isAvailable & 1) == 0) {
        reported.isAvailable = 1;
      }
    } while (info.isAvailable != 1);
  }

  *width = info.properties.width;
  *height = info.properties.height;
  *stride = info.properties.stride;
  *alignedHeight = info.properties.alignedHeight;
  timestamp->nanoseconds = info.properties.timestamp;
  *isKeyFrame = info.properties.isKeyFrame;
  return {0};
}

}
