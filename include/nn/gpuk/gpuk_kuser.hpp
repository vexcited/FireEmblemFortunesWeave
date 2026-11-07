#pragma once

#include <stdint.h>

#include "nn/gsdrv/gsdrv_tipc1.hpp"
#include "nn/gsv/gsv_native_handle.hpp"
#include "nn/os/synchronization.hpp"
#include "nn/result.hpp"
#include "nn/tipc/tipc_message.hpp"

namespace nn::gpuk::impl {

struct InstanceHandle {
  uint32_t value;
};

}

namespace nn::gpuk::impl::kuser {

// Requests to a worker session are serialized by its mutex and report
// failures to the gsdrv result hook before returning them.
struct KUserWorkerSession {
  static constexpr Result ResultNotConnected = {0x30af3};

  os::SdkMutexType mutex;
  tipc::SessionHandle session;

  template <typename WriteRequest, typename ReadReply>
  [[gnu::always_inline]] Result Invoke(uint64_t requestHeader,
    uint64_t replyHeader, WriteRequest writeRequest, ReadReply readReply) {
    mutex.Lock();

    if (session.handle == 0) {
      mutex.Unlock();
      return ResultNotConnected;
    }

    const tipc::SessionHandle copy = session;
    uint8_t* message = tipc::GetMessageBuffer();
    writeRequest(message);
    tipc::WriteMessage<uint64_t>(message, 0, requestHeader);
    const uint32_t result = tipc::Invoke(&copy, message, replyHeader);

    if (result != 0) {
      gsdrv::tipc1::CheckIpcResult({result});
      mutex.Unlock();
      return {result};
    }

    readReply(message);
    mutex.Unlock();
    return {0};
  }

  [[gnu::noinline]] Result OpenJobEvent(const gsv::OutNativeHandle& out,
    const int& index) {
    mutex.Lock();

    if (session.handle == 0) {
      mutex.Unlock();
      return ResultNotConnected;
    }

    const tipc::SessionHandle copy = session;
    uint8_t* message = tipc::GetMessageBuffer();
    tipc::WriteMessage<uint64_t>(message, 0, 0x10000001c);
    tipc::WriteMessage<uint32_t>(message, 8, index);
    const uint32_t result =
      gsv::ReceiveNativeHandle(&copy, message, out, 0x1c);
    mutex.Unlock();
    return {result};
  }

  [[gnu::noinline]] Result OpenWorkerSession(
    const gsv::OutNativeHandle& out) {
    mutex.Lock();

    if (session.handle == 0) {
      mutex.Unlock();
      return ResultNotConnected;
    }

    const tipc::SessionHandle copy = session;
    uint8_t* message = tipc::GetMessageBuffer();
    tipc::WriteMessage<uint64_t>(message, 0, 0x26);
    const uint32_t result =
      gsv::ReceiveNativeHandle(&copy, message, out, 0x26);
    mutex.Unlock();
    return {result};
  }
};

}
