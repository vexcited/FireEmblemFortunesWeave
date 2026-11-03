#pragma once

#include "nn/os/virtual_address_memory.hpp"
#include "nn/result.hpp"

namespace nn::os {

Result AllocateMemory(uintptr_t* output, size_t size);
Result AllocateMemoryPages(uintptr_t address, size_t size);
Result FreeAddressRegion(uintptr_t address);
Result FreeMemoryPages(uintptr_t address, size_t size);

namespace detail {

Result AllocateVirtualMemory(VammManager* manager, uintptr_t* output,
  size_t size) asm("_ZN2nn2os6detail11VammManager14AllocateMemoryEPmm");
Result AllocateVirtualMemoryPages(VammManager* manager, uintptr_t address,
  size_t size) asm("_ZN2nn2os6detail11VammManager19AllocateMemoryPagesEmm");
Result FreeVirtualAddressRegion(VammManager* manager, uintptr_t address)
  asm("_ZN2nn2os6detail11VammManager17FreeAddressRegionEm");
Result FreeVirtualMemoryPages(VammManager* manager, uintptr_t address,
  size_t size) asm("_ZN2nn2os6detail11VammManager15FreeMemoryPagesEmm");

}
}
