#include "memory/heap_manager.hpp"

namespace fw::memory::detail {

struct MemoryInfo {
  uint64_t words[7];
};

void ConstructAllocator(nn::mem::StandardAllocator* allocator)
  asm("_ZN2nn3mem17StandardAllocatorC1Ev");
void InitializeAllocator(nn::mem::StandardAllocator* allocator,
                         void* address, size_t size, bool mode)
  asm("_ZN2nn3mem17StandardAllocator10InitializeEPvmb");
void QueryMemoryInfo(MemoryInfo* info)
  asm("_ZN2nn2os15QueryMemoryInfoEPNS0_10MemoryInfoE");
bool IsVirtualAddressMemoryEnabled()
  asm("_ZN2nn2os29IsVirtualAddressMemoryEnabledEv");
uint32_t AllocateAddressRegion(uintptr_t* address, size_t size)
  asm("_ZN2nn2os21AllocateAddressRegionEPmm");
uint32_t AllocateMemoryPages(uintptr_t address, size_t size)
  asm("_ZN2nn2os19AllocateMemoryPagesEmm");
void FreeMemoryPages(uintptr_t address, size_t size)
  asm("_ZN2nn2os15FreeMemoryPagesEmm");
void FreeAddressRegion(uintptr_t address)
  asm("_ZN2nn2os17FreeAddressRegionEm");
uint32_t SetMemoryHeapSize(size_t size)
  asm("_ZN2nn2os17SetMemoryHeapSizeEm");
uint32_t AllocateMemoryBlock(uintptr_t* address, size_t size)
  asm("_ZN2nn2os19AllocateMemoryBlockEPmm");
[[noreturn]] void Abort(const uint32_t* result)
  asm("_ZN2nn4diag6detail9AbortImplEPKNS_6ResultE");
void* SetDefaultResource(void* resource)
  asm("_ZNSt3__13pmr20set_default_resourceEPNS0_15memory_resourceE");

static uint32_t ReadConfigWord(const unsigned char* storage) {
  uint32_t value;
  __builtin_memcpy(&value, storage, sizeof(value));
  return value;
}

}

namespace fw::memory {

using namespace detail;

extern uintptr_t g_default_memory_resource;
extern unsigned char g_default_memory_resource_vtable[];

void HeapManager::Construct() {
  ConstructAllocator(&primary);
  __builtin_memset(pools, 0, sizeof(pools));

  for (HeapPool& pool : pools) {
    ConstructAllocator(&pool.allocator);
    pool.backing = nullptr;
  }

  allocation_failed = 0;
  failed_pool_name = nullptr;
  failed_pool_size = 0;
  total_free_size = 0;
  allocatable_size = 0;
}

void HeapManager::Initialize() {
  MemoryInfo info;
  QueryMemoryInfo(&info);
  __builtin_memcpy(unknown_00, &info, sizeof(info));

  if (IsVirtualAddressMemoryEnabled()) {
    uintptr_t region;
    uint32_t result = AllocateAddressRegion(&region, 0xf80000000);

    if (result == 0) {
      MemoryInfo probe_info;
      QueryMemoryInfo(&probe_info);
      size_t size = (probe_info.words[0] - probe_info.words[1])
        & ~size_t{0x1fffff};

      if (AllocateMemoryPages(region, size) == 0) {
        FreeMemoryPages(region, size);
      }

      FreeAddressRegion(region);
    }
  }

  size_t available = info.words[0] - info.words[1];
  size_t aligned_available = available & ~size_t{0x1fffff};
  uint32_t kinds[9];
  size_t sizes[9];

  for (size_t i = 0; i < 9; ++i) {
    kinds[i] = ReadConfigWord(g_heap_configs[i].unknown_08);
    sizes[i] = g_heap_configs[i].size;
  }

  if (IsVirtualAddressMemoryEnabled()) {
    InitializeAllocator(&primary, nullptr, 0x900000000, false);
  }
  else {
    uint32_t result = SetMemoryHeapSize(aligned_available);

    if (result != 0) {
      Abort(&result);
    }

    uintptr_t block = 0;
    result = AllocateMemoryBlock(&block, aligned_available);

    if (result != 0) {
      Abort(&result);
    }

    InitializeAllocator(&primary, reinterpret_cast<void*>(block),
                        aligned_available, false);
  }

  // Preserve the unsigned wraparound when available memory is below 128 MiB.
  size_t capacity = available - size_t{0x22a000000}
      < size_t{0} - size_t{0x222000000}
    ? size_t{0x222000000} : aligned_available - size_t{0x8000000};
  size_t reserved = 0;

  for (size_t i = 0; i < 9; ++i) {
    if (kinds[i] == 0) {
      reserved += sizes[i];
    }
  }

  g_heap_configs[1].size += capacity - reserved;

  for (size_t i = 0; i < 9; ++i) {
    HeapConfig& config = g_heap_configs[i];

    if (ReadConfigWord(config.unknown_08) != 0) {
      continue;
    }

    uint32_t mode = ReadConfigWord(config.unknown_18);

    if (mode == 0) {
      continue;
    }

    size_t size = config.size;
    void* backing = primary.Allocate(size, 0x1000);
    InitializeAllocator(&pools[i].allocator, backing, size, mode == 2);
    pools[i].backing = backing;
  }

  g_default_memory_resource =
    reinterpret_cast<uintptr_t>(g_default_memory_resource_vtable);
  SetDefaultResource(&g_default_memory_resource);
}

}
