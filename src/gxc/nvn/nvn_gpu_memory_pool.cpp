#include "gxc/nvn/nvn_gpu_memory_pool.hpp"

#include "gxc/memory.hpp"
#include "gxc/nvn/nvn_device.hpp"

namespace gxc {

namespace {

constexpr size_t kPageSize = 0x1000;
constexpr int kBlockShift = 8;

void* AllocateDefault(size_t size, void*) {
  return Allocate(size, 16);
}

void FreeDefault(void* pointer, void*) {
  Free(pointer);
}

void* AllocateHeap(size_t size, void* userData) {
  return Allocate(static_cast<NvnGpuMemoryPool*>(userData)->GetHeap(), size,
    16);
}

void FreeHeap(void* pointer, void* userData) {
  Free(static_cast<NvnGpuMemoryPool*>(userData)->GetHeap(), pointer);
}

}

NvnGpuMemoryPool::NvnGpuMemoryPool(const GpuMemoryPoolDesc& desc)
  : heap_(desc.heap) {
  NvnDevice* device = GetNvnDevice(*this);
  NVNmemoryPoolBuilder builder = {};
  nvnMemoryPoolBuilderSetDefaults(&builder);
  nvnMemoryPoolBuilderSetDevice(&builder, device->GetNative());
  nvnMemoryPoolBuilderSetFlags(&builder, desc.flags);

  size_t size = (desc.size + kPageSize - 1) & ~(kPageSize - 1);
  if (GetDefaultHeap() == heap_) {
    storage_ = gxc::Allocate(size, kPageSize);
  }
  else {
    storage_ = gxc::Allocate(heap_, size, kPageSize);
  }

  size_ = size;
  nvnMemoryPoolBuilderSetStorage(&builder, storage_, size);
  nvnMemoryPoolInitialize(&pool_, &builder);

  if (GetDefaultHeap() == heap_) {
    allocator_.Initialize(AllocateDefault, nullptr, FreeDefault, nullptr,
      true);
  }
  else {
    allocator_.Initialize(AllocateHeap, this, FreeHeap, this, true);
  }

  allocator_.SetAllocationMode(
    nn::mem::NumberLineAllocator::AllocationMode_BestFit);
  allocator_.AddRange(0, static_cast<int>(size_ >> kBlockShift));
}

NvnGpuMemoryPool::~NvnGpuMemoryPool() {
  allocator_.Finalize();
  nvnMemoryPoolFinalize(&pool_);
  if (GetDefaultHeap() == heap_) {
    gxc::Free(storage_);
  }
  else {
    gxc::Free(heap_, storage_);
  }
}

GpuAllocation NvnGpuMemoryPool::Allocate(size_t size, size_t alignment) {
  int first = 0;
  int count = (size + 255) >> kBlockShift;
  int blocks = alignment >> kBlockShift;
  bool allocated = blocks >= 2 ? allocator_.Allocate(&first, count, blocks) :
    allocator_.Allocate(&first, count);
  if (!allocated) {
    return GpuAllocation();
  }

  return GpuAllocation(this, &pool_,
    static_cast<ptrdiff_t>(first) << kBlockShift);
}

void NvnGpuMemoryPool::Free(GpuAllocation allocation) {
  if (allocation.offset != -1) {
    allocator_.Free(allocation.offset >> kBlockShift);
  }
}

GpuMemory NvnGpuMemoryPool::AllocateMemory(size_t size, size_t alignment) {
  GpuAllocation allocation = Allocate(size, alignment);
  return GpuMemory(this, &pool_, allocation.offset);
}

Backend NvnGpuMemoryPool::GetBackend() const {
  return Backend::kNvn;
}

}
