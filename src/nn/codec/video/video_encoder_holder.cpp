#include "nn/codec/video_encoder.hpp"
#include "nn/codec/video_shim.hpp"

namespace nn::codec::detail {

namespace {

struct InputBufferRequest {
  uint32_t nativeImageHandle;
  uint32_t imageIndex;
  gs::NativeSyncHandle syncHandle;
  int64_t timestamp;
  bool isKeyFrameRequested;
  uint8_t reserved0;
  uint16_t left;
  uint16_t top;
  uint16_t width;
  uint16_t height;
  uint8_t reserved1[22];
};

static_assert(sizeof(InputBufferRequest) == 64);

Result SubmitInputBuffer(VideoEncoderStorage* encoder, uint32_t index,
  const InputBufferRequest& request) {
  uint8_t* message = tipc::GetMessageBuffer();
  tipc::WriteMessage<uint64_t>(message, 0, 0x100000007c);
  __builtin_memcpy(message + 8, &request, sizeof(request));
  const uint32_t result =
    tipc::Invoke(encoder->session, message, 0x90000007c);

  if (result != 0) {
    return {result};
  }

  __builtin_memcpy(&encoder->syncHandles[index], message + 12,
    sizeof(gs::NativeSyncHandle));
  const uint32_t count = encoder->inputQueueCount;
  NN_ABORT_UNLESS(count != VideoEncoderBufferCountMax);
  encoder->inputQueueCount = count + 1;
  encoder->inputQueue[(encoder->inputQueueHead + count) %
    VideoEncoderBufferCountMax] = index;
  return {0};
}

}

void FinalizeVideoEncoder(VideoEncoderStorage* encoder) {
  os::DestroySystemEvent(&encoder->outputReadyEvent);

  uint8_t* message = tipc::GetMessageBuffer();
  tipc::WriteMessage<uint64_t>(message, 0, 0x80);
  const uint32_t result = tipc::SendSyncRequest(encoder->session);

  if (result == 0) {
    tipc::WriteMessage<uint64_t>(message, 0, 0x80);
  }

  NN_ABORT_UNLESS_RESULT_SUCCESS(Result{result});
  video::detail::ShimLibraryGlobal::GetInstance().DestroyVideoEncService(
    encoder->session);

  for (uint32_t& entry : encoder->inputQueue) {
    entry = 0;
  }

  encoder->inputQueueHead = 0;
  encoder->inputQueueCount = 0;

  for (VideoEncoderBuffer& buffer : encoder->buffers) {
    buffer.isRegistered = 0;
  }

  encoder->session = nullptr;
}

Result SetVideoEncoderProperties(VideoEncoderStorage* encoder, int bitRate,
  int frameRate, int keyFrameInterval, int minQp, int maxQp, int sliceCount,
  int referenceFrameCount, int bFrameCount, int targetQuality,
  bool isConstantQuality) {
  struct {
    int32_t bitRate;
    int32_t frameRate;
    int32_t keyFrameInterval;
    int32_t minQp;
    int32_t maxQp;
    int32_t sliceCount;
    int32_t referenceFrameCount;
    bool isConstantQuality;
    int32_t bFrameCount;
    int32_t targetQuality;
    uint8_t reserved[24];
  } request = {bitRate, frameRate, keyFrameInterval, minQp, maxQp, sliceCount,
    referenceFrameCount, isConstantQuality, bFrameCount, targetQuality, {}};

  uint8_t* message = tipc::GetMessageBuffer();
  __builtin_memcpy(message + 8, &request, sizeof(request));
  tipc::WriteMessage<uint64_t>(message, 0, 0x100000007f);
  return {tipc::Invoke(encoder->session, message, 0x10000007f)};
}

Result SubmitVideoEncoderInputBuffer(VideoEncoderStorage* encoder,
  uint32_t index, gs::NativeSyncHandle syncHandle, TimeSpan timestamp,
  bool isKeyFrameRequested) {
  const VideoEncoderBuffer& buffer = encoder->buffers[index];
  const InputBufferRequest request = {buffer.nativeImageHandle,
    buffer.imageIndex, syncHandle, timestamp.nanoseconds, isKeyFrameRequested,
    0, 0, 0, 0, 0, {}};
  return SubmitInputBuffer(encoder, index, request);
}

Result SubmitVideoEncoderInputBuffer(VideoEncoderStorage* encoder,
  uint32_t index, gs::NativeSyncHandle syncHandle, TimeSpan timestamp,
  bool isKeyFrameRequested, uint16_t left, uint16_t top, uint16_t width,
  uint16_t height) {
  const VideoEncoderBuffer& buffer = encoder->buffers[index];
  const InputBufferRequest request = {buffer.nativeImageHandle,
    buffer.imageIndex, syncHandle, timestamp.nanoseconds, isKeyFrameRequested,
    0, left, top, width, height, {}};
  return SubmitInputBuffer(encoder, index, request);
}

}
