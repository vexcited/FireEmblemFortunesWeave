#include "gxc/gpu_memory_pool.hpp"

namespace gxc {

GpuAllocation::GpuAllocation() {}

GpuAllocation::GpuAllocation(GpuMemoryPool* owner, const NVNmemoryPool* pool,
  ptrdiff_t offset)
  : owner(owner), pool(pool), offset(offset) {}

bool GpuMemory::IsValid() const {
  return allocation_.owner != nullptr && allocation_.pool != nullptr &&
    allocation_.offset != -1;
}

GpuMemory::GpuMemory() {}

GpuMemory::GpuMemory(GpuMemoryPool* owner, const NVNmemoryPool* pool,
  ptrdiff_t offset)
  : allocation_(owner, pool, offset) {}

GpuMemory::~GpuMemory() {
  if (IsValid()) {
    allocation_.owner->Free(allocation_);
    allocation_ = GpuAllocation();
  }
}

GpuMemory::GpuMemory(GpuMemory&& other) : allocation_(other.allocation_) {
  other.allocation_ = GpuAllocation();
}

GpuMemory& GpuMemory::operator=(GpuMemory&& other) {
  allocation_ = other.allocation_;
  other.allocation_ = GpuAllocation();
  return *this;
}

}
