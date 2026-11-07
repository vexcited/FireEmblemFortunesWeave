#pragma once

#include "nn/diag/diag_abort.hpp"
#include "nn/gpu/gpu_sdk_types.hpp"
#include "nn/gpuk/gpuk_kuser.hpp"
#include "nn/os/synchronization.hpp"
#include "nn/os/system_event.hpp"
#include "nn/os/time.hpp"

namespace nn::gpu::impl::user {

constexpr int GpuAddressSpaceCountMax = 8;

using sdk::GpuAddressRange;

// Address spaces are tracked by handle, each slot caches the partitions the
// server reported when the address space was created.
struct GpuAddressSpaceManager {
  os::SdkMutexType mutex;
  uint8_t reserved0[4];
  gpuk::impl::kuser::KUserWorkerSession* pDeviceSession;
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

// Server jobs signal one of 64 system events. A request reserves an event,
// waits for it once the reply is in and gives it back.
struct JobEventPool {
  static constexpr int EventCountMax = 64;

  // The callback receives the address of the context.
  Result (*createEvent)(void* context, gsdrv::UniqueNativeHandle* pOutHandle,
    int index);
  void* context;
  os::SdkMutexType mutex;
  os::SdkConditionVariableType condition;
  std::atomic<uint64_t> usedMask;
  std::atomic<uint64_t> createdMask;
  os::SystemEventType events[EventCountMax];

  void Initialize(gpuk::impl::kuser::KUserWorkerSession* session);

  // Creates the event on first use. Returns false once the deadline passed.
  bool TryAcquire(int* pOutIndex, os::Tick deadline);

  static uint64_t MakeLowMask(int count) {
    if (count <= 0) {
      return 0;
    }
    return count >= EventCountMax ? ~uint64_t{0} : ~(~uint64_t{0} << count);
  }

  [[gnu::always_inline]] int Acquire() {
    int index = 0;
    while (!TryAcquire(&index, os::Tick{os::GetSystemTickOrdered().value +
      os::ConvertToTick(TimeSpan{1000000000}).value})) {
    }
    return index;
  }

  [[gnu::always_inline]] void Wait(int index) {
    while (!os::TimedWaitSystemEvent(&events[index], TimeSpan{1000000000})) {
    }
  }

  [[gnu::always_inline]] void Release(int index) {
    NN_ABORT_UNLESS((createdMask.load(std::memory_order_relaxed) &
      (MakeLowMask(index + 1) ^ MakeLowMask(index))) != 0);
    mutex.Lock();
    usedMask.fetch_and(~(uint64_t{1} << index), std::memory_order_release);
    condition.Broadcast();
    mutex.Unlock();
  }
};

// The device and worker sessions and the address space manager are shared by
// every graphics device.
extern gpuk::impl::kuser::KUserWorkerSession g_DeviceSession;
extern gpuk::impl::kuser::KUserWorkerSession g_WorkerSession;
extern GpuAddressSpaceManager g_GpuAddressSpaceManager;
extern JobEventPool g_JobEventPool;

static_assert(sizeof(GpuAddressSpaceManager) == 0x158);
static_assert(sizeof(JobEventPool) == 0xc28);

}
