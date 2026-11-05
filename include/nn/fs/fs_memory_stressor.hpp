#pragma once

#include <stddef.h>

#include "nn/result.hpp"

namespace nn::fs {

struct MemoryStressorHandle {
  void* handle;
};

Result OpenMemoryStressor(MemoryStressorHandle* outHandle);
void CloseMemoryStressor(MemoryStressorHandle handle);
Result SetPooledBufferFreeSize(MemoryStressorHandle handle, size_t size);

}
