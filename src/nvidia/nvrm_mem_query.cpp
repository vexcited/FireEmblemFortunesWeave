#include <stddef.h>
#include <stdint.h>

#include <atomic>

#include "nn/diag/diag_abort.hpp"
#include "nn/gpu/gpu_sdk_types.hpp"
#include "nn/os/mutex.hpp"
#include "nn/os/startup_support.hpp"
#include "nn/result.hpp"

namespace nn::gs {

struct NativeMemoryHandle {
  uint32_t value;
};

}

namespace nn::gpu::sdk {

Result CreateNativeMemoryForDebug(gs::NativeMemoryHandle* pOutMemory,
  void* address, size_t size, GpuMemoryHandle memory, size_t offset);
Result QueryNativeMemoryNvRmMemIdForDebug(uint32_t* pOutId,
  gs::NativeMemoryHandle memory);
void DestroyNativeMemoryForDebug(gs::NativeMemoryHandle memory);

}

enum NvError : int32_t {
  NvSuccess = 0,
  NvError_BadAddress = 3,
  NvError_BadParameter = 4,
  NvError_AccessDenied = 9,
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

struct NvRmMemObject;

struct NvRmMemAllocator {
  uint8_t reserved[0x18];
  void (*free)(NvRmMemAllocator* allocator, NvRmMemObject* object);
};

struct NvRmMemObject {
  uint8_t reserved[0x50];
  NvRmMemAllocator* allocator;
  std::atomic<int32_t> referenceCount;
  uint32_t reserved5c;
  void* address;
  uint64_t size;
  uint32_t attributes;
  uint32_t kind;
  uint32_t nativeHandle;
  uint32_t gpukHandle;
  nn::gs::NativeMemoryHandle debugMemory;
  uint32_t debugId;
};

struct NvRmMemHandleParams {
  uint64_t heap;
  uint64_t size;
  uint8_t isCached;
  uint64_t alignment;
  uint64_t reserved20;
  uint32_t coherency;
  uint32_t attributes;
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
[[gnu::visibility("hidden")]] void NvRmMemRemoveHandle(NvRmMemObject* object,
  void** pTable);
[[gnu::visibility("hidden")]] void NvRmMemDestroyObject(NvRmMemObject* object);

namespace {

const uint64_t NvRmMemHeapAlignment = 0x1000;
const uint32_t NvRmMemMapFlag_Fixed = 1 << 6;
const uint64_t NvRmMemPageMask = 0xfffff000;

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

// Takes a reference unless the object is already being freed.
bool TryRetain(NvRmMemObject* object) {
  int32_t count = object->referenceCount.load(std::memory_order_acquire);
  while (count > 0) {
    if (object->referenceCount.compare_exchange_strong(count, count + 1)) {
      return true;
    }
  }

  return false;
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

extern "C" NvError NvRmMemHandleFromId(int32_t id,
  uint32_t* pOutHandle) {
  if (pOutHandle == nullptr) {
    return NvError_BadAddress;
  }

  OpenGpukDevice();

  NvRmMemObject** slot = nullptr;
  NvRmMemObject* object = nullptr;
  bool isRetained = false;

  nn::os::LockMutex(&g_NvRmMemHandleMutex);
  NvRmMemLookupHandle(id, &slot, g_NvRmMemHandleTable);
  if (slot != nullptr) {
    object = *slot;
    isRetained = TryRetain(object);
  }

  nn::os::UnlockMutex(&g_NvRmMemHandleMutex);

  if (!isRetained || object == nullptr) {
    return NvError_BadParameter;
  }

  *pOutHandle = id;
  return NvSuccess;
}

extern "C" NvError NvRmMemHandleFree(uint32_t handle) {
  OpenGpukDevice();
  if (handle == 0) {
    return NvSuccess;
  }

  NvRmMemObject* object = LookupObject(handle);
  if (object == nullptr) {
    return NvError_BadParameter;
  }

  if (object->referenceCount.fetch_sub(1) != 1) {
    return NvSuccess;
  }

  NvRmMemAllocator* allocator = object->allocator;

  nn::os::LockMutex(&g_NvRmMemHandleMutex);
  NvRmMemRemoveHandle(object, &g_NvRmMemHandleTable);
  nn::os::UnlockMutex(&g_NvRmMemHandleMutex);

  NvRmMemDestroyObject(object);
  allocator->free(allocator, object);
  return NvSuccess;
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

// The id is created once through a debug native memory and cached.
extern "C" uint32_t NvRmMemGetNvRmMemIdForDebug(uint32_t handle) {
  NvRmMemObject* object = LookupObject(handle);
  if (object == nullptr) {
    return 0;
  }

  if (object->kind != NvRmMemKind_User && object->kind != NvRmMemKind_Gpuk) {
    return 0;
  }

  const uint32_t cachedId = object->debugId;
  nn::gs::NativeMemoryHandle memory = {};
  uint32_t id = 0;
  if (cachedId != 0) {
    return cachedId;
  }

  if (nn::gpu::sdk::CreateNativeMemoryForDebug(&memory, object->address,
    object->size, {object->gpukHandle}, 0).IsSuccess() &&
    nn::gpu::sdk::QueryNativeMemoryNvRmMemIdForDebug(&id, memory)
    .IsSuccess()) {
    object->debugMemory = memory;
    object->debugId = id;
    return id;
  }

  if (memory.value != 0) {
    nn::gpu::sdk::DestroyNativeMemoryForDebug(memory);
  }

  return 0;
}

// Mappings cover whole pages, a fixed mapping needs an address to start
// with.
extern "C" NvError NvRmMemMap(uint32_t handle, uint64_t offset, uint64_t size,
  uint32_t flags, void** pOutAddress) {
  if (handle == 0 || pOutAddress == nullptr) {
    return NvError_BadParameter;
  }

  OpenGpukDevice();
  if ((flags & NvRmMemMapFlag_Fixed) != 0 && *pOutAddress == nullptr) {
    return NvError_AccessDenied;
  }

  NvRmMemObject* object = LookupObject(handle);
  if (object == nullptr) {
    *pOutAddress = nullptr;
    return NvError_AccessDenied;
  }

  auto* base = static_cast<uint8_t*>(object->address);
  if (base == nullptr) {
    *pOutAddress = nullptr;
    return NvSuccess;
  }

  const uint64_t pageOffset = offset & NvRmMemPageMask;
  const uint32_t span = (static_cast<uint32_t>(offset & 0xfff) +
    static_cast<uint32_t>(size) + 0xfff) & NvRmMemPageMask;
  if (span + pageOffset > object->size) {
    *pOutAddress = nullptr;
    return NvError_AccessDenied;
  }

  *pOutAddress = base + pageOffset;
  return NvSuccess;
}

extern "C" NvError NvRmMemQueryHandleParams(uint32_t handle, uint32_t,
  NvRmMemHandleParams* pOutParams) {
  if (handle == 0 || pOutParams == nullptr) {
    return NvError_BadParameter;
  }

  NvRmMemObject* object = LookupObject(handle);
  if (object == nullptr) {
    return NvError_BadParameter;
  }

  switch (object->kind) {
    case 0:
      return NvError_BadParameter;
    case NvRmMemKind_Gpuk:
    case NvRmMemKind_User:
      pOutParams->isCached = 0;
      pOutParams->reserved20 = 0;
      pOutParams->heap = NvRmHeap_External;
      pOutParams->coherency = 3;
      pOutParams->size = object->size;
      pOutParams->alignment = object->nativeHandle;
      pOutParams->attributes = object->attributes;
      return NvSuccess;
    case 3:
    case NvRmMemKind_NativeImage:
    case NvRmMemKind_Vpr:
      pOutParams->heap = object->kind == NvRmMemKind_Vpr ? NvRmHeap_Vpr :
        NvRmHeap_External;
      pOutParams->isCached = 0;
      pOutParams->coherency = 0;
      pOutParams->size = object->size;
      pOutParams->alignment = NvRmMemHeapAlignment;
      pOutParams->reserved20 = 0;
      pOutParams->attributes = 1;
      return NvSuccess;
    default:
      return NvSuccess;
  }
}
