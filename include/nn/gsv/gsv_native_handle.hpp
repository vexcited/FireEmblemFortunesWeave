#pragma once

#include <stdint.h>

#include "nn/gsdrv/gsdrv_tipc1.hpp"
#include "nn/gsdrv/gsdrv_unique_native_handle.hpp"
#include "nn/tipc/tipc_message.hpp"

namespace nn::gsv {

struct OutNativeHandle {
  gsdrv::UniqueNativeHandle* pointer;
};

// Replies carry the moved handle before the result word.
[[gnu::always_inline]] inline uint32_t ReceiveNativeHandle(
  const tipc::SessionHandle* copy, uint8_t* message,
  const OutNativeHandle& out, uint32_t command) {
  uint32_t result;

  {
    tipc::UniqueHandle handle;
    result = tipc::SendSyncRequest(copy);

    if (result == 0) {
      tipc::WriteMessage<uint64_t>(message, 0, 0x8000000100000000 | command);
      tipc::WriteMessage<uint32_t>(message, 8, 0x20);
      handle = tipc::UniqueHandle(tipc::ReadMessage<uint32_t>(message, 12));
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

}
