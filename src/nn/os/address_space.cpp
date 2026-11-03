#include "nn/os/address_space.hpp"

extern "C" uint32_t svcGetInfo(uint64_t*, uint32_t, uint32_t, uint64_t);
extern "C" uint32_t svcQueryMemory(void*, uint32_t*, uintptr_t);

namespace nn::os::detail {

extern const uintptr_t BaseAllocatorVtable[]
  asm("_ZTVN2nn2os6detail25AddressSpaceAllocatorBaseImmEE");
extern const uintptr_t AllocatorVtable[]
  asm("_ZTVN2nn2os6detail21AddressSpaceAllocatorE");

void InitializeCriticalSection(uint32_t* lock)
  asm("_ZN2nn2os6detail23InternalCriticalSection10InitializeEv");
[[noreturn]] void AbortResult(const uint32_t* result)
  asm("_ZN2nn4diag6detail9AbortImplEPKNS_6ResultE");
void ConstructAllocator(AddressAllocator*, uintptr_t, uintptr_t, size_t,
  const AddressSpaceAllocatorForbiddenRegion*, size_t)
  asm("_ZN2nn2os6detail25AddressSpaceAllocatorBaseImmEC2Emmm"
      "PKNS1_36AddressSpaceAllocatorForbiddenRegionEm");

static_assert(sizeof(AddressAllocator) == 96);
static_assert(sizeof(RegionAllocator) == 104);
static_assert(offsetof(AddressAllocator, forbidden_count) == 88);

template<class Address, class Size>
AddressSpaceAllocatorBase<Address, Size>::AddressSpaceAllocatorBase(
  Address begin, Address end, Size guard_size,
  const AddressSpaceAllocatorForbiddenRegion* forbidden, size_t count) {
  vtable = uintptr_t(BaseAllocatorVtable + 2);
  InitializeCriticalSection(&lock);
  forbidden_count = 0;
  first_page = 0;
  limit_page = 0;
  guard_pages = 0;

  if (begin != end) {
    Size padding = (guard_size + 4095) >> 12;
    first_page = begin >> 12;
    limit_page = (end >> 12) + padding;
    guard_pages = padding;

    for (size_t index = 0; index < count; ++index) {
      if (forbidden[index].size) {
        size_t slot = forbidden_count++;
        forbidden_begin[slot] = (forbidden[index].address >> 12) - padding;
        forbidden_end[slot] =
          ((forbidden[index].address + forbidden[index].size) >> 12) +
          padding;
      }
    }
  }
}

template struct AddressSpaceAllocatorBase<uintptr_t, size_t>;

static uint64_t QueryInfo(uint32_t type, uint32_t handle) {
  uint64_t value = 0;
  uint32_t result = svcGetInfo(&value, type, handle, 0);

  if (result) {
    AbortResult(&result);
  }

  return value;
}

static void InitializeRegionAllocator(RegionAllocator* storage,
  uint32_t address_type, uint32_t size_type) {
  uintptr_t begin = QueryInfo(address_type, 0xffff8001);
  uintptr_t base = QueryInfo(address_type, 0xffff8001);
  uintptr_t end = base + QueryInfo(size_type, 0xffff8001);
  ConstructAllocator(&storage->allocator, begin, end, 0x10000, nullptr, 0);
  storage->allocator.vtable = uintptr_t(AllocatorVtable + 2);
}

void InitializeStackRegionAllocator(RegionAllocator* storage) {
  InitializeRegionAllocator(storage, 14, 15);
}

void InitializeRemoteRegionAllocator(RegionAllocator* storage) {
  InitializeRegionAllocator(storage, 29, 30);
}

void QueryAddressSpaceRegions(AddressSpaceAllocatorForbiddenRegion* regions,
  uint32_t process_handle) {
  regions[0].address = QueryInfo(4, process_handle);
  regions[0].size = QueryInfo(5, process_handle);
  regions[1].address = QueryInfo(2, process_handle);
  regions[1].size = QueryInfo(3, process_handle);
  regions[2].address = QueryInfo(29, process_handle);
  regions[2].size = QueryInfo(30, process_handle);
  regions[3].address = QueryInfo(12, process_handle);
  regions[3].size = QueryInfo(13, process_handle);
}

bool IsAddressRangeAvailable(const AddressAllocator*, uintptr_t address,
  size_t size) {
  struct MemoryInfo {
    uintptr_t address;
    size_t size;
    uint32_t state;
    uint32_t attributes;
    uint32_t permission;
    uint32_t ipc_references;
    uint32_t device_references;
    uint32_t reserved;
  } info;
  uint32_t page = 0;
  svcQueryMemory(&info, &page, address);
  return info.state == 0 &&
    address + size - 1 <= info.address + info.size - 1;
}

}
