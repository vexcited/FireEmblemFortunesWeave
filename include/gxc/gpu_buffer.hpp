#pragma once

#include <cstddef>
#include <cstdint>

#include "gxc/device_child.hpp"

namespace gxc {

enum class GpuBufferType : int {
  kVertex,
  kIndex,
  kUnknown2,
  kUniform,
  kStorage,
};

class GpuBuffer : public Resource {
public:
  virtual GpuBufferType GetType() const = 0;
  virtual size_t GetSize() const = 0;
  virtual uint64_t GetAddress() const = 0;
  virtual void* Map() = 0;
  virtual void Unmap() = 0;

protected:
  void* unknown10_;
  void* unknown18_ = nullptr;
  void* unknown20_ = nullptr;
};

}
