#pragma once

#include "gxc/gpu_buffer.hpp"
#include "gxc/gpu_memory_pool.hpp"
#include "gxc/nvn/nvn.hpp"

namespace gxc {

struct GpuBufferDesc {
  GpuBufferType type;
  size_t size;
  GpuMemoryPool* memoryPool;
};

class NvnGpuBuffer final : public GpuBuffer {
public:
  explicit NvnGpuBuffer(const GpuBufferDesc& desc);
  ~NvnGpuBuffer() override;

  Backend GetBackend() const override;
  GpuBufferType GetType() const override;
  size_t GetSize() const override;
  uint64_t GetAddress() const override;
  void* Map() override;
  void Unmap() override;

private:
  GpuBufferType type_;
  size_t size_;
  NVNbuffer buffer_;
  GpuMemory memory_;
};

static_assert(sizeof(NvnGpuBuffer) == 0x80);

}
