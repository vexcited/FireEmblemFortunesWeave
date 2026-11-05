#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/codec/video_decoder.hpp"
#include "nn/codec/video_shim.hpp"
#include "nn/os/system_event.hpp"
#include "nn/tipc/tipc_message.hpp"

namespace nn::os {

uint32_t GetCurrentProcessHandle();

}

namespace nn::codec::video::detail {

enum VideoCodecType : uint32_t {
  VideoCodecType_H264 = 0,
  VideoCodecType_Vp9 = 1,
  VideoCodecType_Av1 = 3,
  VideoCodecType_Vp8 = 4,
};

// The service only accepts the out of memory failure as recoverable when a
// decoder is created, every other failure aborts.
inline void AbortUnlessDecoderCreated(Result result) {
  if (result.IsFailure()) {
    NN_ABORT_UNLESS((result.value & 0x3fffff) == 0xfa66f);
  }
}

inline uint32_t DestroyDecoderSession(ipc::VideoDecService* service) {
  uint8_t* message = tipc::GetMessageBuffer();
  tipc::WriteMessage<uint64_t>(message, 0, 0x83);
  const uint32_t result = tipc::SendSyncRequest(service);

  if (result == 0) {
    tipc::WriteMessage<uint64_t>(message, 0, 0x83);
  }

  return result;
}

template <typename Derived, VideoCodecType CodecType>
class VideoDecoderHolderBase : public codec::detail::VideoDecoderStorage {
public:
  template <typename... Configuration>
  [[gnu::noinline]] Result InitializeByTransferMemory(void* buffer,
    size_t size, unsigned long inputBufferSize, uint16_t width,
    uint16_t height, uint32_t option, VideoDecoderInputFormat inputFormat,
    VideoDecoderOutputFormat outputFormat, VideoDecoderOutputMode outputMode,
    Configuration... configuration) {
    ipc::VideoDecService* service = nullptr;
    NN_RESULT_DO(
      ShimLibraryGlobal::GetInstance().CreateVideoDecService(&service));

    bool isInitialized = false;
    uint32_t result;

    {
      gsdrv::UniqueNativeHandle transferMemory;
      result = CreateTransferMemory(&transferMemory, buffer, size).value;

      if (result == 0) {
        uint8_t* message = tipc::GetMessageBuffer();
        tipc::WriteMessage<uint64_t>(message, 16, size);
        tipc::WriteMessage<uint64_t>(message, 0, 0x80000006000000d9);
        tipc::WriteMessage<uint32_t>(message, 8, 2);
        tipc::WriteMessage<uint32_t>(message, 12,
          transferMemory.GetHandle());
        tipc::WriteMessage<uint32_t>(message, 24, CodecType);
        tipc::WriteMessage<int32_t>(message, 28, int32_t(inputFormat));
        tipc::WriteMessage<int32_t>(message, 32, int32_t(outputFormat));
        tipc::WriteMessage<int32_t>(message, 36, int32_t(outputMode));
        result = tipc::Invoke(service, message, 0x1000000d9);

        if (result == 0) {
          result = static_cast<Derived*>(this)->ConfigureImpl(service,
            inputBufferSize, width, height, option, configuration...).value;

          if (result == 0) {
            session = service;
            isInitialized = true;
          }
          else {
            NN_ABORT_UNLESS_RESULT_SUCCESS(
              Result{DestroyDecoderSession(service)});
          }
        }
      }
    }

    if (!isInitialized) {
      ShimLibraryGlobal::GetInstance().DestroyVideoDecService(service);
    }

    return {result};
  }

  template <typename... Configuration>
  [[gnu::noinline]] Result InitializeByRemoteMemory(
    unsigned long inputBufferSize, uint16_t width, uint16_t height,
    uint32_t option, VideoDecoderInputFormat inputFormat,
    VideoDecoderOutputFormat outputFormat, VideoDecoderOutputMode outputMode,
    Configuration... configuration) {
    ipc::VideoDecService* service = nullptr;
    NN_RESULT_DO(
      ShimLibraryGlobal::GetInstance().CreateVideoDecService(&service));

    const uint32_t process = os::GetCurrentProcessHandle();
    uint8_t* message = tipc::GetMessageBuffer();
    tipc::WriteMessage<int32_t>(message, 24, int32_t(outputFormat));
    tipc::WriteMessage<int32_t>(message, 28, int32_t(outputMode));
    tipc::WriteMessage<uint64_t>(message, 0, 0x80000004000000e2);
    tipc::WriteMessage<uint32_t>(message, 8, 2);
    tipc::WriteMessage<uint32_t>(message, 12, process);
    tipc::WriteMessage<uint32_t>(message, 16, CodecType);
    tipc::WriteMessage<int32_t>(message, 20, int32_t(inputFormat));
    uint32_t result = tipc::Invoke(service, message, 0x1000000e2);

    if (result == 0) {
      result = static_cast<Derived*>(this)->ConfigureImpl(service,
        inputBufferSize, width, height, option, configuration...).value;

      if (result == 0) {
        session = service;
        return {0};
      }

      NN_ABORT_UNLESS_RESULT_SUCCESS(Result{DestroyDecoderSession(service)});
    }

    ShimLibraryGlobal::GetInstance().DestroyVideoDecService(service);
    return {result};
  }

protected:
  void ResetOutputQueue() {
    for (uint32_t& entry : outputQueue) {
      entry = 0;
    }

    outputQueueHead = 0;
    outputQueueCount = 0;
  }

  [[gnu::always_inline]] Result Configure(ipc::VideoDecService* service,
    unsigned long inputBufferSize, uint16_t width, uint16_t height,
    uint32_t option, const void* configuration, size_t configurationSize) {
    struct {
      uint16_t width;
      uint16_t reserved0;
      uint16_t height;
      uint16_t reserved1;
      uint32_t option;
      uint32_t inputBufferSize;
      uint8_t reserved2[16];
    } request = {width, 0, height, 0, option, uint32_t(inputBufferSize), {}};

    uint8_t* message = tipc::GetMessageBuffer();
    tipc::WriteMessage<uint64_t>(message, 0, 0x800100075);
    tipc::WriteBufferDescriptor(message, 8, configuration, configurationSize);
    __builtin_memcpy(message + 20, &request, sizeof(request));
    uint32_t result = tipc::Invoke(service, message, 0x300000075);

    if (result != 0) {
      return {result};
    }

    ResetOutputQueue();

    for (codec::detail::VideoDecoderBuffer& buffer : buffers) {
      buffer.isRegistered = 0;
    }

    for (codec::detail::VideoDecoderOutputInfo& info : outputInfos) {
      info.isAvailable = 0;
    }

    message = tipc::GetMessageBuffer();
    tipc::WriteMessage<uint64_t>(message, 0, 0x13);
    result = tipc::SendSyncRequest(service);

    if (result == 0) {
      result = tipc::ReadMessage<uint32_t>(message, 16);
      tipc::WriteMessage<uint64_t>(message, 0, 0x8000000100000013);
      tipc::WriteMessage<uint32_t>(message, 8, 2);
    }

    if (result != 0) {
      ResetOutputQueue();
      return {result};
    }

    os::AttachReadableHandleToSystemEvent(&submissionReadyEvent,
      tipc::ReadMessage<uint32_t>(message, 12), true,
      os::EventClearMode_AutoClear);
    session = service;
    return {0};
  }
};

template <unsigned BufferCount>
class Av1DecoderHolder
  : public VideoDecoderHolderBase<Av1DecoderHolder<BufferCount>,
      VideoCodecType_Av1> {
public:
  [[gnu::noinline]] Result ConfigureImpl(ipc::VideoDecService* service,
    unsigned long inputBufferSize, uint16_t width, uint16_t height,
    uint32_t option) {
    static const char pConfigurationData[] = "video/av1";
    return this->Configure(service, inputBufferSize, width, height, option,
      pConfigurationData, sizeof(pConfigurationData));
  }
};

template <unsigned BufferCount>
class Vp8DecoderHolder
  : public VideoDecoderHolderBase<Vp8DecoderHolder<BufferCount>,
      VideoCodecType_Vp8> {
public:
  [[gnu::noinline]] Result ConfigureImpl(ipc::VideoDecService* service,
    unsigned long inputBufferSize, uint16_t width, uint16_t height,
    uint32_t option) {
    static const char pConfigurationData[] = "video/vp8";
    return this->Configure(service, inputBufferSize, width, height, option,
      pConfigurationData, sizeof(pConfigurationData));
  }
};

template <unsigned BufferCount>
class Vp9DecoderHolder
  : public VideoDecoderHolderBase<Vp9DecoderHolder<BufferCount>,
      VideoCodecType_Vp9> {
public:
  [[gnu::noinline]] Result ConfigureImpl(ipc::VideoDecService* service,
    unsigned long inputBufferSize, uint16_t width, uint16_t height,
    uint32_t option) {
    static const char pConfigurationData[] = "video/vp9";
    return this->Configure(service, inputBufferSize, width, height, option,
      pConfigurationData, sizeof(pConfigurationData));
  }
};

template <unsigned BufferCount>
class H264DecoderHolder
  : public VideoDecoderHolderBase<H264DecoderHolder<BufferCount>,
      VideoCodecType_H264> {
public:
  [[gnu::noinline]] Result ConfigureImpl(ipc::VideoDecService* service,
    unsigned long inputBufferSize, uint16_t width, uint16_t height,
    uint32_t option, const void* configuration, size_t configurationSize) {
    return this->Configure(service, inputBufferSize, width, height, option,
      configuration, configurationSize);
  }
};

}
