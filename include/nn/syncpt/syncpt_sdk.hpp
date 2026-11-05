#pragma once

#include <stdint.h>

#include "nn/os/time.hpp"

namespace nn::syncpt::sdk {

struct SyncPointHandle {
  uint64_t value[2];
};

void WaitSyncPoint(const SyncPointHandle& handle);
bool TimedWaitSyncPoint(const SyncPointHandle& handle, TimeSpan timeout);
bool TryWaitSyncPoint(const SyncPointHandle& handle);
void MakeNvRmFenceFromSyncPointHandle(uint32_t* pOutId, uint32_t* pOutValue,
  const SyncPointHandle& handle);
SyncPointHandle MakeSyncPointHandleFromNvRmFence(uint32_t id, uint32_t value);

}
