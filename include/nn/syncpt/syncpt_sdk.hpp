#pragma once

#include <stdint.h>

#include "nn/os/time.hpp"

namespace nn::syncpt::sdk {

struct SyncPointHandle {
  uint64_t value[2];
};

struct SyncReportRequest {
  uint64_t value[2];
};

struct SyncCounterId {
  uint32_t value;
};

enum SyncValueMode : uint8_t {
  SyncValueMode_Absolute,
  SyncValueMode_Relative,
};

enum LibraryOptions : int32_t {};

struct SyncPointEventType;
struct DebugSyncCounterType;
struct DebugSyncDeviceType;

void WaitSyncPoint(const SyncPointHandle& handle);
bool TimedWaitSyncPoint(const SyncPointHandle& handle, TimeSpan timeout);
bool TryWaitSyncPoint(const SyncPointHandle& handle);
void MakeNvRmFenceFromSyncPointHandle(uint32_t* pOutId, uint32_t* pOutValue,
  const SyncPointHandle& handle);
SyncPointHandle MakeSyncPointHandleFromNvRmFence(uint32_t id, uint32_t value);

}
