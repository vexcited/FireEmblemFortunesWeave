#include "nn/os/virtual_memory_pages.hpp"

#include "nn/os/reader_writer_lock.hpp"
#include "nn/os/virtual_address_removal.hpp"

extern "C" uint32_t svcMapPhysicalMemory(uintptr_t address, size_t size);
extern "C" uint32_t svcUnmapPhysicalMemory(uintptr_t address, size_t size);

namespace nn::os::detail {

extern unsigned char g_OsResourceManagerStorage[];
[[noreturn]] void AbortVirtualMemoryResult(const uint32_t* result)
  asm("_ZN2nn4diag6detail9AbortImplEPKNS_6ResultE");

static VirtualAddressMemoryImplementation* Implementation(VammManager* manager) {
  return reinterpret_cast<VirtualAddressMemoryImplementation*>(
    manager->implementation);
}

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

static bool Contains(VirtualAddressNode* root, uintptr_t address, size_t size) {
  VirtualAddressNode* upper = nullptr;

  while (root) {
    if (address == root->address) {
      return size <= root->size;
    }

    if (address < root->address) {
      upper = root;
      root = root->left;
    }
    else {
      root = root->right;
    }
  }

  if (!upper) {
    return false;
  }

  VirtualAddressNode* lower = Previous(upper);

  if (!lower || address + size < address) {
    return false;
  }

  return lower->address <= address
    && address + size <= lower->address + lower->size;
}

static Result TranslateResult(uint32_t result, bool unmapping) {
  if (!result) {
    return {0};
  }

  uint32_t description = result & 0x3fffff;

  if (description == 0xce01) {
    return {0x1203};
  }

  if (description == 0xd001 || description == 0x10801) {
    return {0x1003};
  }

  if (unmapping && description == 0xd401) {
    return {0x803};
  }

  AbortVirtualMemoryResult(&result);
}

Result AllocateVirtualMemory(VammManager* manager, uintptr_t* output,
  size_t size) {
  AcquireWriteLock(&manager->lock);
  auto* implementation = Implementation(manager);
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

  while (VirtualAddressNode* lower = Previous(upper)) {
    uintptr_t end = lower->address + lower->size;
    uintptr_t limit = upper->address;
    uintptr_t address = (end + alignment + 0xfff) & -alignment;

    if (limit - end - 0x2000 >= size && address + size <= limit - 0x1000) {
      allocation->address = address;
      allocation->size = size;
      InsertVirtualAddressNode(&implementation->root, allocation);
      Result result = TranslateResult(
        svcMapPhysicalMemory(allocation->address, size), false);

      if (!result.value) {
        uintptr_t value = allocation->address;
        ReleaseWriteLock(&manager->lock);
        *output = value;
        return result;
      }

      RemoveVirtualAddressNode(Implementation(manager), allocation);
      ReleaseWriteLock(&manager->lock);
      return result;
    }

    upper = lower;
  }

  ReleaseWriteLock(&manager->lock);
  return {0x1803};
}

Result AllocateVirtualMemoryPages(VammManager* manager, uintptr_t address,
  size_t size) {
  AcquireReadLock(&manager->lock);
  Result result{0xe03};

  if (Contains(Implementation(manager)->root, address, size)) {
    result = TranslateResult(svcMapPhysicalMemory(address, size), false);
  }

  ReleaseReadLock(&manager->lock);
  return result;
}

Result FreeVirtualAddressRegion(VammManager* manager, uintptr_t address) {
  AcquireWriteLock(&manager->lock);
  VirtualAddressNode* node = Implementation(manager)->root;

  while (node && address != node->address) {
    node = address < node->address ? node->left : node->right;
  }

  Result result{0xe03};

  if (node) {
    result = TranslateResult(svcUnmapPhysicalMemory(address, node->size), true);

    if (!result.value) {
      RemoveVirtualAddressNode(Implementation(manager), node);
    }
  }

  ReleaseWriteLock(&manager->lock);
  return result;
}

Result FreeVirtualMemoryPages(VammManager* manager, uintptr_t address,
  size_t size) {
  AcquireReadLock(&manager->lock);
  Result result{0xe03};

  if (Contains(Implementation(manager)->root, address, size)) {
    result = TranslateResult(svcUnmapPhysicalMemory(address, size), true);
  }

  ReleaseReadLock(&manager->lock);
  return result;
}

}

namespace nn::os {

static detail::VammManager* Manager() {
  return reinterpret_cast<detail::VammManager*>(
    detail::g_OsResourceManagerStorage + 1104);
}

Result AllocateMemory(uintptr_t* output, size_t size) {
  return detail::AllocateVirtualMemory(Manager(), output, size);
}

Result AllocateMemoryPages(uintptr_t address, size_t size) {
  return detail::AllocateVirtualMemoryPages(Manager(), address, size);
}

Result FreeAddressRegion(uintptr_t address) {
  return detail::FreeVirtualAddressRegion(Manager(), address);
}

Result FreeMemoryPages(uintptr_t address, size_t size) {
  return detail::FreeVirtualMemoryPages(Manager(), address, size);
}

}
