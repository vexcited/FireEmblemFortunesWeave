#include "nn/gpu/gpu_impl_user.hpp"

namespace nn::gpu::sdk {

using impl::user::g_WorkerSession;

Result EnsureGpuMemoryComptags(const GraphicsDeviceType* /* device */,
  GpuMemoryHandle handle) {
  return g_WorkerSession.Invoke(0x1000000bb, 0x1000000bb,
    [&](uint8_t* message) {
      tipc::WriteMessage<uint32_t>(message, 8, handle.value);
    },
    [](const uint8_t*) {});
}

Result SetGpuMemoryUserDebugLabel(const GraphicsDeviceType* /* device */,
  GpuMemoryHandle handle, const UserDebugLabel& label) {
  return g_WorkerSession.Invoke(0x5000000bc, 0x1000000bc,
    [&](uint8_t* message) {
      tipc::WriteMessage<uint32_t>(message, 8, handle.value);
      tipc::WriteMessage<UserDebugLabel>(message, 12, label);
    },
    [](const uint8_t*) {});
}

Result SetGpuMemorySdkDebugLabel(const GraphicsDeviceType* /* device */,
  GpuMemoryHandle handle, const SdkDebugLabel& label) {
  return g_WorkerSession.Invoke(0x3000000bd, 0x1000000bd,
    [&](uint8_t* message) {
      tipc::WriteMessage<uint32_t>(message, 8, handle.value);
      tipc::WriteMessage<SdkDebugLabel>(message, 12, label);
    },
    [](const uint8_t*) {});
}

Result SetGpuSegmentUserDebugLabel(const GpuAddressSpaceType* addressSpace,
  uint64_t address, uint64_t size, const UserDebugLabel& label) {
  return g_WorkerSession.Invoke(0x9000000e1, 0x1000000e1,
    [&](uint8_t* message) {
      tipc::WriteMessage<uint32_t>(message, 8, addressSpace->handle.value);
      tipc::WriteMessage<uint64_t>(message, 12, address);
      tipc::WriteMessage<uint64_t>(message, 20, size);
      tipc::WriteMessage<UserDebugLabel>(message, 28, label);
    },
    [](const uint8_t*) {});
}

Result SetGpuSegmentSdkDebugLabel(const GpuAddressSpaceType* addressSpace,
  uint64_t address, uint64_t size, const SdkDebugLabel& label) {
  return g_WorkerSession.Invoke(0x7000000e2, 0x1000000e2,
    [&](uint8_t* message) {
      tipc::WriteMessage<uint32_t>(message, 8, addressSpace->handle.value);
      tipc::WriteMessage<uint64_t>(message, 12, address);
      tipc::WriteMessage<uint64_t>(message, 20, size);
      tipc::WriteMessage<SdkDebugLabel>(message, 28, label);
    },
    [](const uint8_t*) {});
}

}
