#include <stddef.h>
#include <stdint.h>

#include "nn/diag/diag_abort.hpp"
#include "nn/os/memory_permission.hpp"
#include "nn/os/synchronization.hpp"
#include "nn/result.hpp"

namespace nn::gsdrv {

struct WeakNativeHandle {
  uint32_t value;
};

// The owning handle is read through its weak view by the memory manager.
struct UniqueNativeHandle : WeakNativeHandle {};

}

namespace nn::gpuk {

struct GpuMemoryHandle {
  uint32_t value;
};

struct MemorySize {
  uint64_t value;
};

}

namespace nn::gs {

namespace cpu {

enum MemoryCacheability : uint8_t {
  MemoryCacheability_Cached,
};

}

struct NativeMemoryHandle {
  uint32_t value;
};

namespace sdk {

struct VprMemoryHandle {
  uint32_t value;
};

}

}

namespace nn::gs::sdk {

namespace detail {

class NativeMemoryManager {
public:
  Result Create(NativeMemoryHandle* pOutHandle, void* address, size_t size);
  Result CreateByTransferMemory(NativeMemoryHandle* pOutHandle,
    void* address, size_t size, os::MemoryPermission permission);
  Result CreateWithTransferMemoryUnsafe(NativeMemoryHandle* pOutHandle,
    const gsdrv::WeakNativeHandle& handle, void* address, size_t size,
    os::MemoryPermission permission);
  Result CreateWithProtectedMemory(NativeMemoryHandle* pOutHandle,
    size_t size);
  Result CreateWithGpukMemHandle(NativeMemoryHandle* pOutHandle,
    void* address, size_t size, gpuk::GpuMemoryHandle gpuMemoryHandle,
    gpuk::MemorySize memorySize);
  Result CreateWithVprMemHandleGpuShared(NativeMemoryHandle* pOutHandle,
    VprMemoryHandle vprMemory, size_t offset, size_t size);

  void Lock() {
    m_Mutex.Lock();
  }

  void Unlock() {
    m_Mutex.Unlock();
  }

private:
  os::SdkMutexType m_Mutex;
};

}

using detail::NativeMemoryManager;

namespace {

NativeMemoryManager g_NativeMemoryManager;

}

Result CreateNativeMemory(NativeMemoryHandle* pOutHandle, void* address,
  size_t size, os::MemoryPermission, cpu::MemoryCacheability cacheability) {
  NN_ABORT_UNLESS(cacheability == cpu::MemoryCacheability_Cached);
  NativeMemoryHandle handle = {};
  NN_RESULT_DO(g_NativeMemoryManager.Create(&handle, address, size));
  *pOutHandle = handle;
  return Result();
}

Result CreateNativeMemoryByTransferMemory(NativeMemoryHandle* pOutHandle,
  void* address, size_t size, os::MemoryPermission permission,
  cpu::MemoryCacheability cacheability) {
  NN_ABORT_UNLESS(cacheability == cpu::MemoryCacheability_Cached);
  NativeMemoryHandle handle = {};
  NN_RESULT_DO(g_NativeMemoryManager.CreateByTransferMemory(&handle, address,
    size, permission));
  *pOutHandle = handle;
  return Result();
}

Result CreateNativeMemoryWithTransferMemory(NativeMemoryHandle* pOutHandle,
  gsdrv::UniqueNativeHandle&& transferMemory, size_t size,
  os::MemoryPermission permission) {
  NativeMemoryHandle handle = {};
  g_NativeMemoryManager.Lock();
  Result result = g_NativeMemoryManager.CreateWithTransferMemoryUnsafe(
    &handle, transferMemory, nullptr, size, permission);
  g_NativeMemoryManager.Unlock();
  NN_RESULT_DO(result);
  *pOutHandle = handle;
  return Result();
}

Result CreateNativeMemoryWithTransferMemory(NativeMemoryHandle* pOutHandle,
  gsdrv::WeakNativeHandle transferMemory, size_t size,
  os::MemoryPermission permission) {
  NativeMemoryHandle handle = {};
  g_NativeMemoryManager.Lock();
  Result result = g_NativeMemoryManager.CreateWithTransferMemoryUnsafe(
    &handle, transferMemory, nullptr, size, permission);
  g_NativeMemoryManager.Unlock();
  NN_RESULT_DO(result);
  *pOutHandle = handle;
  return Result();
}

Result CreateNativeMemoryWithProtectedMemory(NativeMemoryHandle* pOutHandle,
  size_t size) {
  NativeMemoryHandle handle = {};
  NN_RESULT_DO(g_NativeMemoryManager.CreateWithProtectedMemory(&handle,
    size));
  *pOutHandle = handle;
  return Result();
}

Result CreateNativeMemoryWithGpukMemHandle(NativeMemoryHandle* pOutHandle,
  void* address, size_t size, gpuk::GpuMemoryHandle gpuMemoryHandle,
  gpuk::MemorySize memorySize) {
  NativeMemoryHandle handle = {};
  NN_RESULT_DO(g_NativeMemoryManager.CreateWithGpukMemHandle(&handle, address,
    size, gpuMemoryHandle, memorySize));
  *pOutHandle = handle;
  return Result();
}

Result CreateNativeMemoryWithVprMemHandleGpuShared(
  NativeMemoryHandle* pOutHandle, VprMemoryHandle vprMemory, size_t offset,
  size_t size) {
  NativeMemoryHandle handle = {};
  NN_RESULT_DO(g_NativeMemoryManager.CreateWithVprMemHandleGpuShared(&handle,
    vprMemory, offset, size));
  *pOutHandle = handle;
  return Result();
}

}
