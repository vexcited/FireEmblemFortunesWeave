#pragma once

#include "nn/os/virtual_address_memory.hpp"

namespace nn::os::detail {

void RemoveVirtualAddressNode(VirtualAddressMemoryImplementation* memory,
  VirtualAddressNode* node);

}
