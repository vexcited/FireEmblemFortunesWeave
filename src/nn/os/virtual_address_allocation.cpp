#include "nn/os/virtual_address_allocation.hpp"

#include "nn/os/reader_writer_lock.hpp"

namespace nn::os::detail {

extern unsigned char g_OsResourceManagerStorage[];

static VirtualAddressNode* Previous(VirtualAddressNode* node) {
  if (node->left) {
    node = node->left;

    while (node->right) {
      node = node->right;
    }

    return node;
  }

  VirtualAddressNode* parent = node->parent;

  while (parent && node == parent->left) {
    node = parent;
    parent = parent->parent;
  }

  return parent;
}

Result AllocateVirtualAddressRegion(VammManager* manager, uintptr_t* output,
  size_t size) {
  AcquireWriteLock(&manager->lock);
  auto* implementation = reinterpret_cast<VirtualAddressMemoryImplementation*>(
    manager->implementation);
  VirtualAddressNode* allocation =
    AllocateVirtualAddressNode(&implementation->allocator);

  if (!allocation) {
    ReleaseWriteLock(&manager->lock);
    return {0x1003};
  }

  VirtualAddressNode* upper = implementation->root;

  while (upper->right) {
    upper = upper->right;
  }

  uintptr_t alignment = size < 0x200000 ? 0x10000 : 0x200000;
  uintptr_t bias = alignment + 0xfff;

  while (VirtualAddressNode* lower = Previous(upper)) {
    uintptr_t end = lower->address + lower->size;
    uintptr_t limit = upper->address;

    if (limit - end - 0x2000 >= size) {
      uintptr_t address = (end + bias) & -alignment;

      if (address + size <= limit - 0x1000) {
        allocation->address = address;
        allocation->size = size;
        InsertVirtualAddressNode(&implementation->root, allocation);
        uintptr_t result = allocation->address;
        ReleaseWriteLock(&manager->lock);
        *output = result;
        return {0};
      }
    }

    upper = lower;
  }

  ReleaseWriteLock(&manager->lock);
  return {0x1803};
}

}

namespace nn::os {

Result AllocateAddressRegion(uintptr_t* output, size_t size) {
  auto* manager = reinterpret_cast<detail::VammManager*>(
    detail::g_OsResourceManagerStorage + 1104);
  return detail::AllocateVirtualAddressRegion(manager, output, size);
}

}
