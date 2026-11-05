#pragma once

#include "nn/diag/diag_abort.hpp"
#include "nn/gpu/gpu_sdk_types.hpp"
#include "nn/gpuk/gpuk_kuser.hpp"
#include "nn/os/synchronization.hpp"

namespace nn::gpu::impl::user {

constexpr int GpuAddressSpaceCountMax = 8;

using sdk::GpuAddressRange;

// Address spaces are tracked by handle, each slot caches the partitions the
// server reported when the address space was created.
struct GpuAddressSpaceManager {
  os::SdkMutexType mutex;
  uint8_t reserved0[0xc];
  bool isUsed[GpuAddressSpaceCountMax];
  uint32_t handles[GpuAddressSpaceCountMax];
  uint8_t reserved1[0x20];
  GpuAddressRange userPartitions[GpuAddressSpaceCountMax];
  GpuAddressRange gsvPartitions[GpuAddressSpaceCountMax];

  bool TryReuseAddressSpace(uint32_t* outHandle, int flags);
  Result CreateAddressSpace(uint32_t* outHandle, int flags);

  int FindIndex(uint32_t handle) const {
    NN_ABORT_UNLESS(handle != 0);
    for (int i = 0; i < GpuAddressSpaceCountMax; ++i) {
      if (handles[i] == handle) {
        return i;
      }
    }
    ::nn::diag::detail::AbortImpl();
  }
};

// The device and worker sessions and the address space manager are shared by
// every graphics device.
extern gpuk::impl::kuser::KUserWorkerSession g_DeviceSession;
extern gpuk::impl::kuser::KUserWorkerSession g_WorkerSession;
extern GpuAddressSpaceManager g_GpuAddressSpaceManager;

static_assert(sizeof(GpuAddressSpaceManager) == 0x158);

}
