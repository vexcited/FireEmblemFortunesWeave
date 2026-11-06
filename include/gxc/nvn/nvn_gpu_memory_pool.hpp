#pragma once

#include "gxc/gpu_memory_pool.hpp"
#include "gxc/nvn/nvn.hpp"
#include "nn/mem/number_line_allocator.hpp"

namespace gxc {

struct GpuMemoryPoolDesc {
  size_t size;
  int flags;
  int heap;
};

class NvnGpuMemoryPool final : public GpuMemoryPool {
public:
  explicit NvnGpuMemoryPool(const GpuMemoryPoolDesc& desc);
  ~NvnGpuMemoryPool() override;

  Backend GetBackend() const override;
  GpuAllocation Allocate(size_t size, size_t alignment) override;
  void Free(GpuAllocation allocation) override;
  GpuMemory AllocateMemory(size_t size, size_t alignment) override;

  int GetHeap() const {
    return heap_;
  }

private:
  NVNmemoryPool pool_;
  nn::mem::NumberLineAllocator allocator_;
  void* storage_ = nullptr;
  size_t size_ = 0;
  int heap_;
};

static_assert(sizeof(NvnGpuMemoryPool) == 0x160);

}
