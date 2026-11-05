#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/codec/video_encoder.hpp"
#include "nn/codec/video_image_pool.hpp"
#include "nn/codec/video_shim.hpp"
#include "nn/os/system_event.hpp"
#include "nn/tipc/tipc_message.hpp"

namespace nn::gs {

extern const NativeSyncHandle EmptyNativeSyncHandle;

}

namespace nn::movie {

enum class BitRateMode : int32_t;
enum class AvcProfile : int32_t;
enum class AvcLevel : int32_t;

}

namespace nn::codec {

enum class VideoEncoderHardwareProfile : int32_t;

}

namespace nn::codec::video::detail {

inline uint32_t GetNativeHandle(const gsdrv::UniqueNativeHandle& handle) {
  return handle.GetHandle();
}

inline uint32_t GetNativeHandle(const gsdrv::WeakNativeHandle& handle) {
  return handle.value;
}

template <unsigned BufferCount>
class H264EncoderHolder : public codec::detail::VideoEncoderStorage {
public:
  template <typename Handle>
  [[gnu::noinline]] Result Create(unsigned long* outputBufferSize,
    Handle&& transferMemory, unsigned long size, uint16_t width,
    uint16_t height, int frameRate, movie::BitRateMode bitRateMode,
    movie::AvcProfile profile, movie::AvcLevel level, int bitRate,
    int keyFrameInterval, int minQp, int maxQp, int sliceCount,
    bool isFrameSkipEnabled, bool isConstantQuality, int targetQuality,
    bool isLowLatency, VideoEncoderHardwareProfile hardwareProfile,
    int referenceFrameCount) {
    static const char pConfigurationData[] = "video/avc";

    ResetInputQueue();
    ipc::VideoEncService* service = nullptr;
    uint32_t result =
      ShimLibraryGlobal::GetInstance().CreateVideoEncService(&service).value;

    if (result != 0) {
      ResetInputQueue();
      return {result};
    }

    uint8_t* message = tipc::GetMessageBuffer();
    tipc::WriteMessage<uint64_t>(message, 16, size);
    tipc::WriteMessage<uint32_t>(message, 24, 0);
    tipc::WriteMessage<uint64_t>(message, 0, 0x8000000300000074);
    tipc::WriteMessage<uint32_t>(message, 8, 2);
    tipc::WriteMessage<uint32_t>(message, 12,
      GetNativeHandle(transferMemory));
    result = tipc::Invoke(service, message, 0x100000074);

    if (result == 0) {
      result = Configure(service, pConfigurationData,
        sizeof(pConfigurationData), width, height, frameRate, bitRateMode,
        profile, level, bitRate, keyFrameInterval, minQp, maxQp, sliceCount,
        isFrameSkipEnabled, isConstantQuality, targetQuality, isLowLatency,
        hardwareProfile, referenceFrameCount);

      if (result == 0) {
        result = Start(outputBufferSize, service);

        if (result == 0) {
          return {0};
        }
      }

      NN_ABORT_UNLESS_RESULT_SUCCESS(Result{DestroyEncoderSession(service)});
    }

    ShimLibraryGlobal::GetInstance().DestroyVideoEncService(service);
    ResetInputQueue();
    return {result};
  }

private:
  void ResetInputQueue() {
    for (uint32_t& entry : inputQueue) {
      entry = 0;
    }

    inputQueueHead = 0;
    inputQueueCount = 0;
  }

  static uint32_t DestroyEncoderSession(ipc::VideoEncService* service) {
    uint8_t* message = tipc::GetMessageBuffer();
    tipc::WriteMessage<uint64_t>(message, 0, 0x80);
    const uint32_t result = tipc::SendSyncRequest(service);

    if (result == 0) {
      tipc::WriteMessage<uint64_t>(message, 0, 0x80);
    }

    return result;
  }

  [[gnu::always_inline]] static uint32_t Configure(
    ipc::VideoEncService* service, const void* configuration,
    size_t configurationSize, uint16_t width, uint16_t height, int frameRate,
    movie::BitRateMode bitRateMode, movie::AvcProfile profile,
    movie::AvcLevel level, int bitRate, int keyFrameInterval, int minQp,
    int maxQp, int sliceCount, bool isFrameSkipEnabled,
    bool isConstantQuality, int targetQuality, bool isLowLatency,
    VideoEncoderHardwareProfile hardwareProfile, int referenceFrameCount) {
    struct {
      uint16_t width;
      uint16_t reserved0;
      uint16_t height;
      uint16_t reserved1;
      int32_t frameRate;
      int32_t bitRateMode;
      int32_t targetQuality;
      int32_t profile;
      int32_t level;
      int32_t hardwareProfile;
      int32_t bitRate;
      int32_t keyFrameInterval;
      int32_t minQp;
      int32_t maxQp;
      int32_t sliceCount;
      bool isConstantQuality;
      bool isFrameSkipEnabled;
      bool isLowLatency;
      uint8_t reserved2;
      int32_t referenceFrameCount;
      uint32_t reserved3;
    } request = {width, 0, height, 0, frameRate, int32_t(bitRateMode),
      targetQuality, int32_t(profile), int32_t(level),
      int32_t(hardwareProfile), bitRate, keyFrameInterval, minQp, maxQp,
      sliceCount, isConstantQuality, isFrameSkipEnabled, isLowLatency, 0,
      referenceFrameCount, 0};

    uint8_t* message = tipc::GetMessageBuffer();
    tipc::WriteMessage<uint64_t>(message, 0, 0x1000100075);
    tipc::WriteBufferDescriptor(message, 8, configuration, configurationSize);
    __builtin_memcpy(message + 20, &request, sizeof(request));
    return tipc::Invoke(service, message, 0x100000075);
  }

  [[gnu::always_inline]] uint32_t Start(unsigned long* outputBufferSize,
    ipc::VideoEncService* service) {
    for (codec::detail::VideoEncoderBuffer& buffer : buffers) {
      buffer.isRegistered = 0;
    }

    for (gs::NativeSyncHandle& syncHandle : syncHandles) {
      syncHandle = gs::EmptyNativeSyncHandle;
    }

    uint8_t* message = tipc::GetMessageBuffer();
    tipc::WriteMessage<uint64_t>(message, 0, 0x14);
    uint32_t result = tipc::SendSyncRequest(service);

    if (result == 0) {
      result = tipc::ReadMessage<uint32_t>(message, 16);
      tipc::WriteMessage<uint64_t>(message, 0, 0x8000000100000014);
      tipc::WriteMessage<uint32_t>(message, 8, 2);
    }

    if (result != 0) {
      return result;
    }

    os::AttachReadableHandleToSystemEvent(&outputReadyEvent,
      tipc::ReadMessage<uint32_t>(message, 12), true,
      os::EventClearMode_AutoClear);

    message = tipc::GetMessageBuffer();
    tipc::WriteMessage<uint64_t>(message, 0, 0x76);
    result = tipc::Invoke(service, message, 0x500000076);

    if (result != 0) {
      os::DestroySystemEvent(&outputReadyEvent);
      return result;
    }

    session = service;
    *outputBufferSize = tipc::ReadMessage<int32_t>(message, 12);
    return 0;
  }
};

}
