#pragma once

#include "nn/lmem/unit_heap.hpp"
#include "nn/os/managers.hpp"
#include "nn/os/virtual_address_tree.hpp"

namespace nn::os {

void InitializeVirtualAddressMemory();

namespace detail {

struct VirtualAddressNodeAllocator {
  uintptr_t begin;
  uintptr_t mapped_end;
  uintptr_t reserved_end;
  size_t chunk_size;
  alignas(8) unsigned char heap_header[144];
  lmem::detail::HeapHead* heap;
};

struct VirtualAddressMemoryImplementation {
  uintptr_t base;
  size_t size;
  VirtualAddressNode* root;
  VirtualAddressNodeAllocator allocator;
};

void InitializeVirtualAddressManager(VammManager* manager) asm(
  "_ZN2nn2os6detail11VammManager19InitializeIfEnabledEv");
void InitializeVirtualAddressImplementation(
  VirtualAddressMemoryImplementation* implementation,
  uintptr_t base, size_t size);
VirtualAddressNode* AllocateVirtualAddressNode(
  VirtualAddressNodeAllocator* allocator);

}
}
