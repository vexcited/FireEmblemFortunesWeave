#pragma once

#include <stddef.h>
#include <stdint.h>

#include <utility>

namespace nn::fs {

class IBufferManager {
public:
  typedef std::pair<uintptr_t, size_t> MemoryRange;
  typedef int64_t CacheHandle;

  struct BufferAttribute {
    int32_t level;
  };

  virtual ~IBufferManager() {}

  MemoryRange AllocateBuffer(size_t size, const BufferAttribute& attribute) {
    return DoAllocateBuffer(size, attribute);
  }

  void DeallocateBuffer(uintptr_t address, size_t size) {
    DoDeallocateBuffer(address, size);
  }

  CacheHandle RegisterCache(uintptr_t address, size_t size,
    const BufferAttribute& attribute) {
    return DoRegisterCache(address, size, attribute);
  }

  MemoryRange AcquireCache(CacheHandle handle) {
    return DoAcquireCache(handle);
  }

private:
  virtual MemoryRange DoAllocateBuffer(size_t size,
    const BufferAttribute& attribute) = 0;
  virtual void DoDeallocateBuffer(uintptr_t address, size_t size) = 0;
  virtual CacheHandle DoRegisterCache(uintptr_t address, size_t size,
    const BufferAttribute& attribute) = 0;
  virtual MemoryRange DoAcquireCache(CacheHandle handle) = 0;
};

}
