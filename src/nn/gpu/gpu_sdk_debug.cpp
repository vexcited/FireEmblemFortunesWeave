#include <stddef.h>
#include <stdint.h>

#include "nn/result.hpp"

namespace nn::gs {

enum class NativeMemoryHandle : uint32_t {};

namespace external {

struct NvRmMemId {
  uint32_t value;
};

}

}

namespace nn::gpuk {

struct GpuMemoryHandle {
  uint64_t value;
};

struct MemorySize {
  uint64_t value;
};

}

namespace nn::gs::sdk {

Result CreateNativeMemoryWithGpukMemHandle(NativeMemoryHandle* pOutHandle,
  void* address, size_t size, gpuk::GpuMemoryHandle memory,
  gpuk::MemorySize memorySize);
Result DestroyNativeMemory(NativeMemoryHandle handle);
Result QueryNativeMemoryNvsNvRmMemIdForDebug(external::NvRmMemId* pOutId,
  uint64_t* pOutOffset, NativeMemoryHandle handle);

}

namespace nn::gpu::sdk {

struct GpuMemoryHandle {
  uint64_t value;
};

namespace util {

struct JobTrackerType;

void FinalizeJobTracker(JobTrackerType* /* tracker */) {}

}

Result CreateNativeMemoryForDebug(gs::NativeMemoryHandle* pOutHandle,
  void* address, size_t size, GpuMemoryHandle memory, size_t memorySize) {
  gs::NativeMemoryHandle handle = {};
  const Result result = gs::sdk::CreateNativeMemoryWithGpukMemHandle(&handle,
    address, size, {memory.value}, {memorySize});
  if (result.IsSuccess()) {
    *pOutHandle = handle;
  }

  return result;
}

Result DestroyNativeMemoryForDebug(gs::NativeMemoryHandle handle) {
  return gs::sdk::DestroyNativeMemory(handle);
}

Result QueryNativeMemoryNvRmMemIdForDebug(uint32_t* pOutId,
  gs::NativeMemoryHandle handle) {
  gs::external::NvRmMemId id = {};
  uint64_t offset = 0;
  const Result result = gs::sdk::QueryNativeMemoryNvsNvRmMemIdForDebug(&id,
    &offset, handle);
  if (result.IsSuccess()) {
    *pOutId = id.value;
  }

  return result;
}

}
