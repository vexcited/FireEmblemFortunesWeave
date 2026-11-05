#pragma once

#include <stdint.h>

#include <atomic>

#include "nn/codec/video_shim.hpp"
#include "nn/os/synchronization.hpp"
#include "nn/result.hpp"
#include "nn/tipc/tipc_message.hpp"

namespace nn::gsdrv::tipc1 {

using CheckIpcResultFunction = void (*)(Result result);

extern std::atomic<CheckIpcResultFunction> g_CheckIpcResultFunction;

inline void CheckIpcResult(Result result) {
  const CheckIpcResultFunction function =
    g_CheckIpcResultFunction.load(std::memory_order_acquire);

  if (function != nullptr) {
    function(result);
  }
}

}

namespace nn::gsv {

struct OutNativeHandle {
  gsdrv::UniqueNativeHandle* pointer;
};

// Requests to the user session are serialized by its mutex and report
// failures to the gsdrv result hook before returning them.
struct UserSession {
  static constexpr Result ResultNotConnected = {0x30af3};

  os::SdkMutexType mutex;
  tipc::SessionHandle session;

  Result Invoke(uint32_t command) {
    mutex.Lock();

    if (session.handle == 0) {
      mutex.Unlock();
      return ResultNotConnected;
    }

    const tipc::SessionHandle copy = session;
    uint8_t* message = tipc::GetMessageBuffer();
    tipc::WriteMessage<uint64_t>(message, 0, command);
    const uint32_t result =
      tipc::Invoke(&copy, message, 0x100000000 | command);

    if (result != 0) {
      gsdrv::tipc1::CheckIpcResult({result});
    }

    mutex.Unlock();
    return {result};
  }

  [[gnu::noinline]] Result OpenVideoDecServiceCreator(
    const OutNativeHandle& out, const bool& isResolutionUnlimitedModeEnabled,
    const VideoDecoderLibraryVersion& version) {
    mutex.Lock();

    if (session.handle == 0) {
      mutex.Unlock();
      return ResultNotConnected;
    }

    const tipc::SessionHandle copy = session;
    uint8_t* message = tipc::GetMessageBuffer();
    tipc::WriteMessage<uint64_t>(message, 0, 0x30000039a);
    tipc::WriteMessage<bool>(message, 8, isResolutionUnlimitedModeEnabled);
    tipc::WriteMessage<VideoDecoderLibraryVersion>(message, 12, version);
    const uint32_t result = ReceiveHandle(&copy, message, out, 0x39a);
    mutex.Unlock();
    return {result};
  }

  [[gnu::noinline]] Result OpenVideoEncServiceCreator(
    const OutNativeHandle& out) {
    mutex.Lock();

    if (session.handle == 0) {
      mutex.Unlock();
      return ResultNotConnected;
    }

    const tipc::SessionHandle copy = session;
    uint8_t* message = tipc::GetMessageBuffer();
    tipc::WriteMessage<uint64_t>(message, 0, 0x3fa);
    const uint32_t result = ReceiveHandle(&copy, message, out, 0x3fa);
    mutex.Unlock();
    return {result};
  }

  [[gnu::noinline]] Result OpenVideoDecServiceCreatorForSystem(
    const OutNativeHandle& out,
    const codec::video::detail::SystemUserName& name) {
    mutex.Lock();

    if (session.handle == 0) {
      mutex.Unlock();
      return ResultNotConnected;
    }

    const tipc::SessionHandle copy = session;
    uint8_t* message = tipc::GetMessageBuffer();
    tipc::WriteMessage<uint64_t>(message, 0, 0x100000398);
    tipc::WriteMessage<uint32_t>(message, 8, name);
    const uint32_t result = ReceiveHandle(&copy, message, out, 0x398);
    mutex.Unlock();
    return {result};
  }

  [[gnu::noinline]] Result OpenVideoEncServiceCreatorForSystem(
    const OutNativeHandle& out,
    const codec::video::detail::SystemUserName& name) {
    mutex.Lock();

    if (session.handle == 0) {
      mutex.Unlock();
      return ResultNotConnected;
    }

    const tipc::SessionHandle copy = session;
    uint8_t* message = tipc::GetMessageBuffer();
    tipc::WriteMessage<uint64_t>(message, 0, 0x1000003fc);
    tipc::WriteMessage<uint32_t>(message, 8, name);
    const uint32_t result = ReceiveHandle(&copy, message, out, 0x3fc);
    mutex.Unlock();
    return {result};
  }

private:
  // Replies carry the moved handle before the result word.
  [[gnu::always_inline]] static uint32_t ReceiveHandle(
    const tipc::SessionHandle* copy,
    uint8_t* message, const OutNativeHandle& out, uint32_t command) {
    uint32_t result;

    {
      tipc::UniqueHandle handle;
      result = tipc::SendSyncRequest(copy);

      if (result == 0) {
        tipc::WriteMessage<uint64_t>(message, 0,
          0x8000000100000000 | command);
        tipc::WriteMessage<uint32_t>(message, 8, 0x20);
        handle =
          tipc::UniqueHandle(tipc::ReadMessage<uint32_t>(message, 12));
        result = tipc::ReadMessage<uint32_t>(message, 16);

        if (result == 0) {
          *out.pointer = static_cast<tipc::UniqueHandle&&>(handle);
        }
      }
    }

    if (result != 0) {
      gsdrv::tipc1::CheckIpcResult({result});
    }

    return result;
  }
};

UserSession* GetUserSession();

}

namespace nn::codec::video::ipc {

struct VideoDecServiceCreator : tipc::ClientSession {};
struct VideoEncServiceCreator : tipc::ClientSession {};

}
