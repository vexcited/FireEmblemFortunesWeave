#include "nn/codec/video_server_context.hpp"
#include "nn/diag/diag_abort.hpp"

namespace nn::gs {

struct NativeMemoryHandle {
  uint32_t value;
};

namespace external {

struct NvRmMemId {
  uint32_t value;
};

}

}

namespace nn::gs::sdk {

Result QueryNativeMemoryNvsNvRmMemIdForDebug(external::NvRmMemId* pOutId,
  uint64_t* pOutOffset, NativeMemoryHandle handle) {
  uint32_t id;
  uint64_t offset;
  NN_RESULT_DO(gsv::GetUserSession()->Invoke(0x1000000cb, 0x4000000cb,
    [&](uint8_t* message) {
      tipc::WriteMessage<uint32_t>(message, 8, handle.value);
    },
    [&](const uint8_t* message) {
      id = tipc::ReadMessage<uint32_t>(message, 12);
      offset = tipc::ReadMessage<uint64_t>(message, 16);
    }));

  pOutId->value = id;
  *pOutOffset = offset;
  return Result();
}

}
