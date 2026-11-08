#include <stdint.h>

#include "nn/diag/diag_abort.hpp"
#include "nn/os/mutex.hpp"
#include "nn/os/startup_support.hpp"

enum NvError : int32_t {
  NvSuccess = 0,
  NvError_BadParameter = 4,
};

enum NvRmHeap : uint32_t {
  NvRmHeap_External = 2,
  NvRmHeap_Vpr = 5,
};

enum NvRmMemKind : uint32_t {
  NvRmMemKind_Gpuk = 1,
  NvRmMemKind_User = 2,
  NvRmMemKind_NativeImage = 4,
  NvRmMemKind_Vpr = 5,
};

struct NvRmMemObject {
  uint8_t reserved[0x68];
  uint64_t size;
  uint32_t reserved70;
  uint32_t kind;
  uint32_t nativeHandle;
  uint32_t gpukHandle;
};

struct NvRmMemHeapParams {
  uint64_t size;
  uint64_t freeSize;
  uint64_t alignment;
};

void* NvOsDrvGpuGetGpukDevice();

[[gnu::visibility("hidden")]] extern nn::os::MutexType g_NvRmMemmgrMutex;
[[gnu::visibility("hidden")]] extern void* g_NvRmMemGpukDevice;
[[gnu::visibility("hidden")]] extern nn::os::MutexType g_NvRmMemHandleMutex;
[[gnu::visibility("hidden")]] extern void* g_NvRmMemHandleTable;
[[gnu::visibility("hidden")]] extern int64_t g_NvRmMemVprHeapSize;

[[gnu::visibility("hidden")]] void NvRmMemLookupHandle(uint32_t handle,
  NvRmMemObject*** pOutSlot, void* table);
[[gnu::visibility("hidden")]] NvError NvRmMemQueryImpl(void* table,
  void* query);

namespace {

const uint64_t NvRmMemHeapAlignment = 0x1000;

void OpenGpukDevice() {
  if (g_NvRmMemGpukDevice != nullptr) {
    return;
  }

  nn::os::LockMutex(&g_NvRmMemmgrMutex);
  if (g_NvRmMemGpukDevice == nullptr) {
    g_NvRmMemGpukDevice = NvOsDrvGpuGetGpukDevice();
    NN_ABORT_UNLESS(g_NvRmMemGpukDevice != nullptr);
  }

  nn::os::UnlockMutex(&g_NvRmMemmgrMutex);
}

NvRmMemObject* LookupObject(uint32_t handle) {
  NvRmMemObject** slot = nullptr;

  nn::os::LockMutex(&g_NvRmMemHandleMutex);
  NvRmMemLookupHandle(handle, &slot, g_NvRmMemHandleTable);
  nn::os::UnlockMutex(&g_NvRmMemHandleMutex);

  return slot != nullptr ? *slot : nullptr;
}

uint64_t GetHeapSize(uint32_t heap) {
  if (heap == NvRmHeap_Vpr) {
    const int64_t size = g_NvRmMemVprHeapSize;
    return size < 0 ? 0 : size;
  }

  if (heap == NvRmHeap_External) {
    nn::os::MemoryInfo info = {};
    nn::os::QueryMemoryInfo(&info);
    return info.total_memory_size;
  }

  return 0;
}

}

// The memory manager has no ioctl file on this platform, the call only
// opens the gpuk device once.
extern "C" int32_t NvRm_MemmgrGetIoctlFile() {
  OpenGpukDevice();
  return -1;
}

extern "C" uint64_t NvRmMemGetSize(uint32_t handle) {
  NvRmMemObject* object = LookupObject(handle);
  return object != nullptr ? object->size : 0;
}

extern "C" NvError NvRmMemQueryHeaps(const uint32_t* heap,
  uint32_t* pOutIsPresent) {
  if (heap == nullptr || pOutIsPresent == nullptr) {
    return NvError_BadParameter;
  }

  const uint32_t kind = *heap;
  *pOutIsPresent = 0;
  *pOutIsPresent = GetHeapSize(kind) != 0;
  return NvSuccess;
}

extern "C" NvError NvRmMemQueryHeapSize(const uint32_t* heap,
  uint64_t* pOutSize) {
  if (heap == nullptr || pOutSize == nullptr) {
    return NvError_BadParameter;
  }

  *pOutSize = GetHeapSize(*heap);
  return NvSuccess;
}

extern "C" NvError NvRmMemQueryHeapParams(uint32_t heap, uintptr_t,
  uintptr_t, NvRmMemHeapParams* pOutParams) {
  if (heap != NvRmHeap_External || pOutParams == nullptr) {
    return NvError_BadParameter;
  }

  nn::os::MemoryInfo info = {};
  nn::os::QueryMemoryInfo(&info);
  pOutParams->size = info.total_memory_size;
  pOutParams->freeSize = info.total_memory_size - info.used_memory_size;
  pOutParams->alignment = NvRmMemHeapAlignment;
  return NvSuccess;
}

extern "C" NvError NvRmMemQueryHeapManager(uint32_t* pOutManager) {
  OpenGpukDevice();
  *pOutManager = 1;
  return NvSuccess;
}

extern "C" bool NvRmMemGetUserAllocated(uint32_t handle) {
  NvRmMemObject* object = LookupObject(handle);
  return object != nullptr && object->kind == NvRmMemKind_User;
}

extern "C" uint32_t NvRmMemGetGpukMemoryHandle(uint32_t handle) {
  NvRmMemObject* object = LookupObject(handle);
  if (object == nullptr) {
    return 0;
  }

  if (object->kind != NvRmMemKind_User && object->kind != NvRmMemKind_Gpuk) {
    return 0;
  }

  return object->gpukHandle;
}

extern "C" uint32_t NvRmMemGetNativeImageHandle(uint32_t handle) {
  NvRmMemObject* object = LookupObject(handle);
  if (object == nullptr || object->kind != NvRmMemKind_NativeImage) {
    return 0;
  }

  return object->nativeHandle;
}

extern "C" uint32_t NvRmMemGetVprMemoryHandle(uint32_t handle) {
  NvRmMemObject* object = LookupObject(handle);
  if (object == nullptr || object->kind != NvRmMemKind_Vpr) {
    return 0;
  }

  return object->nativeHandle;
}

extern "C" NvError NvRmMemQuery(void* query) {
  void* table = g_NvRmMemHandleTable;

  nn::os::LockMutex(&g_NvRmMemHandleMutex);
  const NvError result = NvRmMemQueryImpl(table, query);
  nn::os::UnlockMutex(&g_NvRmMemHandleMutex);

  return result;
}
