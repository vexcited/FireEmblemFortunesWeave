#pragma once

#include "nn/os/virtual_address_memory.hpp"
#include "nn/result.hpp"

namespace nn::os {

Result AllocateAddressRegion(uintptr_t* output, size_t size);

namespace detail {

Result AllocateVirtualAddressRegion(VammManager* manager, uintptr_t* output,
  size_t size) asm(
  "_ZN2nn2os6detail11VammManager21AllocateAddressRegionEPmm");

}
}
