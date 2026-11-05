#include <stddef.h>
#include <string.h>

#include <atomic>

#include "nn/diag/diag_abort.hpp"
#include "nn/gs/gs_native_window.hpp"
#include "nn/result.hpp"
#include "nn/syncpt/syncpt_sdk.hpp"

namespace nn::os {

size_t GetRemoteMemoryUsage();

}

namespace nn::gsdrv::tipc1 {

using CheckIpcResultFunction = void (*)(Result result);

extern std::atomic<CheckIpcResultFunction> g_CheckIpcResultFunction;

}

namespace nn::gs {

namespace sdk {

Result BootGraphicsSystem(void* buffer, size_t size);

}

namespace {

const uint32_t ResultOutOfRemoteMemoryValue = 0x82f3;

void CheckIpcResultForApplication(Result result) {
  if (result.GetInnerValueForDebug() == ResultOutOfRemoteMemoryValue) {
    os::GetRemoteMemoryUsage();
    NN_ABORT_UNLESS(false);
  }
}

void CheckIpcResultForApplet(Result) {}

// The native sync handle starts with the sync point handle.
syncpt::sdk::SyncPointHandle ToSyncPointHandle(const NativeSyncHandle& sync) {
  syncpt::sdk::SyncPointHandle handle;
  memcpy(&handle, &sync, sizeof(handle));
  return handle;
}

}

Result Initialize(void* buffer, size_t size) {
  return sdk::BootGraphicsSystem(buffer, size);
}

void Finalize() {}

void InstallIpcResultCheckForApplication() {
  gsdrv::tipc1::g_CheckIpcResultFunction.store(CheckIpcResultForApplication,
    std::memory_order_release);
}

void InstallIpcResultCheckForApplet() {
  gsdrv::tipc1::g_CheckIpcResultFunction.store(CheckIpcResultForApplet,
    std::memory_order_release);
}

void WaitNativeSync(const NativeSyncHandle& sync) {
  syncpt::sdk::WaitSyncPoint(ToSyncPointHandle(sync));
}

bool TimedWaitNativeSync(const NativeSyncHandle& sync, TimeSpan timeout) {
  return syncpt::sdk::TimedWaitSyncPoint(ToSyncPointHandle(sync), timeout);
}

bool TryWaitNativeSync(const NativeSyncHandle& sync) {
  return syncpt::sdk::TryWaitSyncPoint(ToSyncPointHandle(sync));
}

}
