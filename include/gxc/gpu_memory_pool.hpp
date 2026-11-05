#pragma once

#include <cstddef>

#include "gxc/device_child.hpp"
#include "gxc/nvn/nvn.hpp"

namespace gxc {

class GpuMemoryPool;

struct [[gnu::visibility("hidden")]] GpuAllocation {
  GpuAllocation();
  GpuAllocation(GpuMemoryPool* owner, const NVNmemoryPool* pool,
    ptrdiff_t offset);

  GpuMemoryPool* owner = nullptr;
  const NVNmemoryPool* pool = nullptr;
  ptrdiff_t offset = -1;
};

// Owning handle of a pool allocation, it frees the range on destruction.
class [[gnu::visibility("hidden")]] GpuMemory {
public:
  GpuMemory();
  GpuMemory(GpuMemoryPool* owner, const NVNmemoryPool* pool,
    ptrdiff_t offset);
  GpuMemory(GpuMemory&& other);
  ~GpuMemory();

  // The target is overwritten without being freed.
  GpuMemory& operator=(GpuMemory&& other);

  bool IsValid() const;

  const NVNmemoryPool* GetPool() const {
    return allocation_.pool;
  }

  ptrdiff_t GetOffset() const {
    return allocation_.offset;
  }

private:
  GpuAllocation allocation_;
};

class GpuMemoryPool : public DeviceChild {
public:
  virtual GpuAllocation Allocate(size_t size, size_t alignment) = 0;
  virtual void Free(GpuAllocation allocation) = 0;
  virtual GpuMemory AllocateMemory(size_t size, size_t alignment) = 0;
};

}
