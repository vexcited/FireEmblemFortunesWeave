#include <stddef.h>
#include <stdint.h>
#include <string.h>

#include "nn/applet/applet_types.hpp"
#include "nn/gs/gs_native_window.hpp"
#include "nn/syncpt/syncpt_sdk.hpp"
#include "nn/result.hpp"

extern "C" {

struct NvRmFence {
  uint32_t syncPointId;
  uint32_t value;
};

struct NvRmSync;

#pragma pack(push, 4)

struct NvRmMemHandleAttr {
  const uint32_t* heaps;
  uint32_t heapCount;
  uint32_t alignment;
  uint32_t coherency;
  uint32_t size;
  uint32_t tags;
  uint32_t reserved0[8];
  void* allocator;
  void* memory;
  uint32_t reserved1[4];
  uint32_t kind;
  uint32_t surfaceId;
};

#pragma pack(pop)

void* NvOsGetCurrentAllocator();
int NvRmMemHandleAllocAttr(void* device, const NvRmMemHandleAttr* attr,
  uint32_t* pOutHandle);

int NvRmMemHandleFromFd(int fd, uint32_t* pOutHandle);
void NvRmMemHandleFree(uint32_t handle);
int NvRmMemMap(uint32_t handle, size_t offset, size_t size, uint32_t flags,
  void** pOutAddress);
void NvRmMemUnmap(uint32_t handle, void* address, size_t size);
int NvRmMemHandleExportForAruid(uint32_t handle, uint64_t aruid);
void NvRmMemHandleRemoveExportForAruid(uint32_t handle, uint64_t aruid);
uint32_t NvRmMemGetId(uint32_t handle);
size_t NvRmMemGetSize(uint32_t handle);
int NvRmMemHandleFromId(uint32_t id, uint32_t* pOutHandle);
uint64_t NvRmMemGetGpukMemoryHandle(uint32_t handle);
uint64_t NvRmMemGetVprMemoryHandle(uint32_t handle);
NvRmSync* NvRmSyncCreateFromSyncpoints(const NvRmFence* fences,
  uint32_t count);
int NvRmSyncWait(NvRmSync* sync, int32_t timeout);
void NvRmSyncClose(NvRmSync* sync);

}

namespace nn::gs::external {

struct NvRmMemHandle {
  uint32_t value;
};

struct NvRmMemId {
  uint32_t value;
};

struct NvRmFenceRec {
  uint32_t syncPointId;
  uint32_t value;
};

namespace {

const Result ResultNvRmFailure = {0x3200f3};
const Result ResultMapFailure = {0x280f3};

}

Result CreateFromFd(NvRmMemHandle* pOutHandle, int fd) {
  uint32_t handle = 0;
  if (NvRmMemHandleFromFd(fd, &handle) != 0) {
    return ResultNvRmFailure;
  }
  pOutHandle->value = handle;
  return Result();
}

void CloseNvRmMemHandle(NvRmMemHandle handle) {
  NvRmMemHandleFree(handle.value);
}

Result MapNvRmMem(void** pOutAddress, NvRmMemHandle handle, size_t offset,
  size_t size) {
  void* address = nullptr;
  if (NvRmMemMap(handle.value, offset, size, 0, &address) != 0 ||
    address == nullptr) {
    return ResultMapFailure;
  }
  *pOutAddress = address;
  return Result();
}

void UnmapNvRmMem(NvRmMemHandle handle, void* address, size_t size) {
  NvRmMemUnmap(handle.value, address, size);
}

Result InsertNvRmMemHandleImporter(NvRmMemHandle handle,
  applet::AppletResourceUserId aruid) {
  if (NvRmMemHandleExportForAruid(handle.value, aruid.lower) != 0) {
    return ResultNvRmFailure;
  }
  return Result();
}

void RemoveNvRmMemHandleImporter(NvRmMemHandle handle,
  applet::AppletResourceUserId aruid) {
  NvRmMemHandleRemoveExportForAruid(handle.value, aruid.lower);
}

NvRmMemId GetNvRmMemId(NvRmMemHandle handle) {
  return {NvRmMemGetId(handle.value)};
}

size_t GetNvRmMemSize(NvRmMemHandle handle) {
  return NvRmMemGetSize(handle.value);
}

Result ImportNvRmMemHandle(NvRmMemHandle* pOutHandle, NvRmMemId id) {
  uint32_t handle = 0;
  if (NvRmMemHandleFromId(id.value, &handle) != 0) {
    return ResultNvRmFailure;
  }
  pOutHandle->value = handle;
  return Result();
}

uint64_t GetNvRmMemGpuMemoryHandle(NvRmMemHandle handle) {
  return NvRmMemGetGpukMemoryHandle(handle.value);
}

uint64_t GetNvRmMemVprMemoryHandle(NvRmMemHandle handle) {
  return NvRmMemGetVprMemoryHandle(handle.value);
}

Result CreateNvRmMemHandle(NvRmMemHandle* pOutHandle, void* memory,
  size_t size) {
  NvRmMemHandleAttr attr = {};
  attr.alignment = 0x1000;
  attr.coherency = 1;
  attr.size = static_cast<uint32_t>(size);
  attr.allocator = NvOsGetCurrentAllocator();
  attr.memory = memory;
  attr.kind = 3;
  attr.surfaceId = 0xffffffff;

  uint32_t handle = 0;
  if (NvRmMemHandleAllocAttr(nullptr, &attr, &handle) != 0) {
    return ResultNvRmFailure;
  }
  pOutHandle->value = handle;
  return Result();
}

// Protected memory comes from heap 5.
Result CreateNvRmMemHandleWithProtectedMemory(NvRmMemHandle* pOutHandle,
  void* memory, size_t size) {
  const uint32_t heap = 5;
  NvRmMemHandleAttr attr = {};
  attr.heaps = &heap;
  attr.heapCount = 1;
  attr.alignment = 0x1000;
  attr.coherency = 1;
  attr.size = static_cast<uint32_t>(size);
  attr.allocator = NvOsGetCurrentAllocator();
  attr.memory = memory;
  attr.kind = 3;
  attr.surfaceId = 0xffffffff;

  uint32_t handle = 0;
  if (NvRmMemHandleAllocAttr(nullptr, &attr, &handle) != 0) {
    return ResultNvRmFailure;
  }
  pOutHandle->value = handle;
  return Result();
}

void WaitNvRmFenceRec(const NvRmFenceRec& fence) {
  NvRmFence fences[] = {{fence.syncPointId, fence.value}};
  NvRmSync* sync = NvRmSyncCreateFromSyncpoints(fences, 1);
  if (sync != nullptr) {
    NvRmSyncWait(sync, -1);
    NvRmSyncClose(sync);
  }
}

// The native sync handle starts with the sync point handle.
NvRmFenceRec GetNvRmFenceFromNativeSyncHandle(const NativeSyncHandle& sync) {
  NvRmFenceRec fence = {};
  syncpt::sdk::SyncPointHandle handle;
  memcpy(&handle, &sync, sizeof(handle));
  syncpt::sdk::MakeNvRmFenceFromSyncPointHandle(&fence.syncPointId,
    &fence.value, handle);
  return fence;
}

}
