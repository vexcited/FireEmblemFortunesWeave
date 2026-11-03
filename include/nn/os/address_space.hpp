#pragma once

#include <stddef.h>
#include <stdint.h>

namespace nn::os::detail {

struct AddressSpaceAllocatorForbiddenRegion {
  uintptr_t address;
  size_t size;
};

template<class Address, class Size>
struct AddressSpaceAllocatorBase {
  uintptr_t vtable;
  uint32_t lock;
  uint32_t reserved_0c;
  Address first_page;
  Address limit_page;
  Size guard_pages;
  Address forbidden_begin[3];
  Address forbidden_end[3];
  size_t forbidden_count;

  AddressSpaceAllocatorBase(Address begin, Address end, Size guard_size,
    const AddressSpaceAllocatorForbiddenRegion* forbidden, size_t count);
};

using AddressAllocator = AddressSpaceAllocatorBase<uintptr_t, size_t>;

struct RegionAllocator {
  uint64_t reserved_00;
  AddressAllocator allocator;
};

void InitializeStackRegionAllocator(RegionAllocator* allocator);
void InitializeRemoteRegionAllocator(RegionAllocator* allocator);
void QueryAddressSpaceRegions(AddressSpaceAllocatorForbiddenRegion* regions,
  uint32_t process_handle);
bool IsAddressRangeAvailable(const AddressAllocator* allocator,
  uintptr_t address, size_t size);

}
