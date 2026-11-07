#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/result.hpp"

namespace nn::svc {

struct MemoryInfo {
  uint64_t baseAddress;
  uint64_t size;
  uint32_t state;
  uint32_t attribute;
  uint32_t permission;
  uint32_t ipcCount;
  uint32_t deviceCount;
  uint32_t padding;
};

static_assert(sizeof(MemoryInfo) == 40);

Result QueryMemory(MemoryInfo* pOutInfo, uint32_t* pOutPageInfo,
  uintptr_t address);
Result OutputDebugString(const char* string, size_t length);
Result SetMemoryAttribute(uintptr_t address, size_t size, uint32_t mask,
  uint32_t attribute);

}
