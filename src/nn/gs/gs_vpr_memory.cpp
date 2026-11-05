#include "nn/codec/video_server_context.hpp"
#include "nn/diag/diag_abort.hpp"

namespace nn::gs::sdk {

struct VprMemoryHandle {
  uint32_t value;
};

Result CreateVprMemory(VprMemoryHandle* pOutHandle, size_t size) {
  uint32_t handle;
  NN_RESULT_DO(gsv::GetUserSession()->Invoke(0x20000008b, 0x20000008b,
    [&](uint8_t* message) {
      tipc::WriteMessage<uint64_t>(message, 8, size);
    },
    [&](const uint8_t* message) {
      handle = tipc::ReadMessage<uint32_t>(message, 12);
    }));

  pOutHandle->value = handle;
  return Result{0};
}

void DestroyVprMemory(VprMemoryHandle handle) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(gsv::GetUserSession()->Invoke(0x10000008c,
    0x10000008c,
    [&](uint8_t* message) {
      tipc::WriteMessage<uint32_t>(message, 8, handle.value);
    },
    [](const uint8_t*) {}));
}

}
