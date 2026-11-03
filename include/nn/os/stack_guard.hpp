#pragma once

#include "nn/os/address_space.hpp"

namespace nn::os::detail {

struct StackGuardManager {
  uint64_t reserved_00;
  AddressAllocator allocator;

  int MapAtRandomAddress(void** output,
    bool (*map)(const void*, const void*, size_t),
    void (*unmap)(const void*, const void*, size_t),
    const void* source, size_t size);
};

uintptr_t AddressSpaceAllocatorDefaultGenerateRandom(uintptr_t maximum);

}
