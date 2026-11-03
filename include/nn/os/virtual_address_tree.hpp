#pragma once

#include <stddef.h>
#include <stdint.h>

namespace nn::os::detail {

struct VirtualAddressNode {
  VirtualAddressNode* left;
  VirtualAddressNode* right;
  VirtualAddressNode* parent;
  uint32_t red;
  uint32_t reserved1c;
  uintptr_t address;
  size_t size;
};

void InsertVirtualAddressNode(VirtualAddressNode** root,
  VirtualAddressNode* node);

}
