#include "nn/codec/video_server_context.hpp"
#include "nn/diag/diag_abort.hpp"
#include "nn/gpu/gpu_impl_user.hpp"

namespace nn::gpu::impl::user {

// Packs up to eight characters of a name into one word.
uint64_t MakeDeviceName(const char* name);

}

namespace nn::gpu::sdk {

using impl::user::g_DeviceSession;

namespace {

constexpr Result ResultInvalidSize = {0x80f3};

}

Result CreateGraphicsDevice(GraphicsDeviceType* device, const char* name,
  size_t memorySize, SdkDebugLabel label) {
  const uint64_t deviceName = impl::user::MakeDeviceName(name);
  uint8_t id;
  NN_RESULT_DO(g_DeviceSession.Invoke(0x600000039, 0x200000039,
    [&](uint8_t* message) {
      tipc::WriteMessage<uint64_t>(message, 8, deviceName);
      tipc::WriteMessage<uint64_t>(message, 16, memorySize);
      tipc::WriteMessage<SdkDebugLabel>(message, 24, label);
    },
    [&](const uint8_t* message) {
      id = tipc::ReadMessage<uint8_t>(message, 12);
    }));

  device->id = id;
  device->reserved[0] = 0;
  device->reserved[1] = 0;
  device->reserved[2] = 0;
  device->referenceCount.store(0, std::memory_order_relaxed);
  return Result{0};
}

void DestroyGraphicsDevice(GraphicsDeviceType* device) {
  NN_ABORT_UNLESS(device->referenceCount.load(std::memory_order_relaxed) ==
    0);
  NN_ABORT_UNLESS_RESULT_SUCCESS(g_DeviceSession.Invoke(0x10000003a,
    0x10000003a,
    [&](uint8_t* message) {
      tipc::WriteMessage<uint8_t>(message, 8, device->id);
    },
    [](const uint8_t*) {}));
}

Result ReserveVprQueueProtectedMemory(const GraphicsDeviceType* /* device */,
  size_t size) {
  if ((size >> 32) != 0) {
    return ResultInvalidSize;
  }

  gsv::UserSession* session = gsv::GetUserSession();
  session->mutex.Lock();
  uint32_t result = gsv::UserSession::ResultNotConnected.value;
  if (session->session.handle != 0) {
    const tipc::SessionHandle copy = session->session;
    uint8_t* message = tipc::GetMessageBuffer();
    tipc::WriteMessage<uint32_t>(message, 8, static_cast<uint32_t>(size));
    tipc::WriteMessage<uint64_t>(message, 0, 0x1000001c4);
    result = tipc::Invoke(&copy, message, 0x1000001c4);
    if (result != 0) {
      gsdrv::tipc1::CheckIpcResult({result});
    }
  }
  session->mutex.Unlock();
  return {result};
}

}
