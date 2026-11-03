#include "nn/os/virtual_address_memory.hpp"

#include "nn/os/reader_writer_lock.hpp"

extern "C" uint32_t svcGetInfo(uint64_t* value, uint32_t type,
  uint32_t handle, uint64_t subtype);
extern "C" uint32_t svcMapPhysicalMemory(uintptr_t address, size_t size);
extern "C" nn::os::detail::VirtualAddressMemoryImplementation
  VirtualAddressMemoryStorage;

namespace nn::os::detail {

extern unsigned char g_OsResourceManagerStorage[];
[[noreturn]] void Abort() asm("_ZN2nn4diag6detail9AbortImplEv");
[[noreturn]] void AbortResult(const uint32_t* result) asm(
  "_ZN2nn4diag6detail9AbortImplEPKNS_6ResultE");

static_assert(sizeof(VirtualAddressNodeAllocator) == 184);
static_assert(offsetof(VirtualAddressNodeAllocator, heap) == 176);
static_assert(sizeof(VirtualAddressMemoryImplementation) == 208);
static_assert(offsetof(VirtualAddressMemoryImplementation, allocator) == 24);

VirtualAddressNode* AllocateVirtualAddressNode(
  VirtualAddressNodeAllocator* allocator) {
  void* node = lmem::AllocateFromUnitHeap(allocator->heap);

  if (node) {
    return static_cast<VirtualAddressNode*>(node);
  }

  if (allocator->mapped_end >= allocator->reserved_end) {
    Abort();
  }

  uint32_t result = svcMapPhysicalMemory(allocator->mapped_end,
    allocator->chunk_size);

  if (!result) {
    size_t size = allocator->chunk_size;
    allocator->mapped_end += size;
    lmem::ExtendUnitHeapArea(allocator->heap, size);
  }
  else {
    uint32_t description = result & 0x3fffff;

    if (description != 0xce01 && description != 0xd001
        && description != 0x10801) {
      AbortResult(&result);
    }
  }

  return static_cast<VirtualAddressNode*>(
    lmem::AllocateFromUnitHeap(allocator->heap));
}

void InitializeVirtualAddressImplementation(
  VirtualAddressMemoryImplementation* implementation,
  uintptr_t base, size_t size) {
  implementation->base = base;
  implementation->size = size;
  implementation->allocator.begin = base;
  implementation->root = nullptr;
  implementation->allocator.reserved_end = base + 0x3fe00000;
  uint64_t chunk_size = 0;
  uint32_t result = svcGetInfo(&chunk_size, 33, 0xffff8001, 0);

  if (result) {
    AbortResult(&result);
  }

  implementation->allocator.chunk_size = chunk_size;
  result = svcMapPhysicalMemory(implementation->allocator.begin, chunk_size);

  if (result) {
    uint32_t description = result & 0x3fffff;

    if (description == 0xce01) {
      result = 0x1203;
    }
    else if (description == 0xd001 || description == 0x10801) {
      result = 0x1003;
    }

    AbortResult(&result);
  }

  auto& allocator = implementation->allocator;
  allocator.mapped_end = allocator.begin + allocator.chunk_size;
  allocator.heap = lmem::CreateUnitHeap(
    reinterpret_cast<void*>(allocator.begin), allocator.chunk_size,
    sizeof(VirtualAddressNode), 0, 8,
    reinterpret_cast<lmem::detail::HeapHead*>(allocator.heap_header));

  VirtualAddressNode* first = AllocateVirtualAddressNode(&allocator);
  first->address = implementation->base;
  first->size = 0x3fe00000;
  InsertVirtualAddressNode(&implementation->root, first);

  VirtualAddressNode* end = AllocateVirtualAddressNode(&allocator);
  end->address = implementation->base + implementation->size;
  end->size = 0;
  InsertVirtualAddressNode(&implementation->root, end);
}

void InitializeVirtualAddressManager(VammManager* manager) {
  AcquireWriteLock(&manager->lock);

  if (!manager->implementation) {
    uint64_t enabled = 0;
    uint32_t result = svcGetInfo(&enabled, 16, 0xffff8001, 0);

    if (!result && enabled) {
      InitializeVirtualAddressImplementation(&VirtualAddressMemoryStorage,
        manager->base, manager->size);
      manager->implementation =
        reinterpret_cast<uintptr_t>(&VirtualAddressMemoryStorage);
    }
  }

  ReleaseWriteLock(&manager->lock);
}

}

namespace nn::os {

void InitializeVirtualAddressMemory() {
  auto* manager = reinterpret_cast<detail::VammManager*>(
    detail::g_OsResourceManagerStorage + 1104);
  detail::InitializeVirtualAddressManager(manager);
}

}
