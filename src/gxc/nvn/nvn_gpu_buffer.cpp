#include "gxc/nvn/nvn_gpu_buffer.hpp"

#include "gxc/nvn/nvn_device.hpp"

namespace gxc {

namespace {

constexpr int kUniformBufferAlignment = 4;

}

NvnGpuBuffer::NvnGpuBuffer(const GpuBufferDesc& desc)
  : type_(desc.type), size_(desc.size) {
  NvnDevice* device = GetNvnDevice(*this);
  NVNbufferBuilder builder = {};
  nvnBufferBuilderSetDefaults(&builder);
  nvnBufferBuilderSetDevice(&builder, device->GetNative());

  int alignment = 16;
  if (type_ == GpuBufferType::kStorage) {
    alignment = 32;
  }
  else if (type_ == GpuBufferType::kUniform) {
    nvnDeviceGetInteger(device->GetNative(), kUniformBufferAlignment,
      &alignment);
  }

  memory_ = desc.memoryPool->AllocateMemory(size_, alignment);
  nvnBufferBuilderSetStorage(&builder, memory_.GetPool(),
    memory_.GetOffset(), size_);
  nvnBufferInitialize(&buffer_, &builder);
}

NvnGpuBuffer::~NvnGpuBuffer() {
  nvnBufferFinalize(&buffer_);
}

uint64_t NvnGpuBuffer::GetAddress() const {
  return nvnBufferGetAddress(&buffer_);
}

void* NvnGpuBuffer::Map() {
  return nvnBufferMap(&buffer_);
}

void NvnGpuBuffer::Unmap() {}

Backend NvnGpuBuffer::GetBackend() const {
  return Backend::kNvn;
}

GpuBufferType NvnGpuBuffer::GetType() const {
  return type_;
}

size_t NvnGpuBuffer::GetSize() const {
  return size_;
}

}
