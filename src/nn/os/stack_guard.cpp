#include "nn/os/stack_guard.hpp"
#include "nn/os/managers.hpp"

namespace nn::os::detail {

extern uint8_t ResourceManagerStorage[1288]
  asm("_ZN2nn2os6detail26g_OsResourceManagerStorageE");

void EnterCriticalSection(uint32_t* lock)
  asm("_ZN2nn2os6detail23InternalCriticalSection5EnterEv");
void LeaveCriticalSection(uint32_t* lock)
  asm("_ZN2nn2os6detail23InternalCriticalSection5LeaveEv");

static_assert(sizeof(StackGuardManager) == 104);
static_assert(offsetof(StackGuardManager, allocator) == 8);

static uintptr_t Divide(uintptr_t value, uintptr_t divisor) {
  // ARM64 UDIV returns zero for a zero divisor.
  return divisor ? value / divisor : 0;
}

static uintptr_t QueryRange(void* allocator, uintptr_t table,
  uintptr_t address, size_t size) {
  using Query = uintptr_t (*)(void*, uintptr_t, size_t);
  auto query = *reinterpret_cast<Query*>(table);
  return query(allocator, address, size);
}

template<class Address, class Size>
Address AddressSpaceAllocatorBase<Address, Size>::AllocateSpace(
  Size size, Size alignment, Address offset,
  Address (*generate_random)(Address)) {
  if (first_page == limit_page) {
    return 0;
  }

  Size rounded = size + 4095;
  Size pages = rounded >> 12;
  Address offset_page = offset >> 12;
  Address required = offset_page + pages;

  if (required > limit_page - guard_pages) {
    return 0;
  }

  Size alignment_pages = alignment >> 12;
  Address lower = first_page + guard_pages;
  Address maximum = Divide(limit_page - required - guard_pages,
    alignment_pages);
  Address minimum = 0;

  if (offset_page <= lower) {
    minimum = Divide(alignment_pages + ~offset_page + lower,
      alignment_pages);

    if (minimum > maximum) {
      return 0;
    }
  }

  Address choices = maximum - minimum;
  Size rounded_size = rounded & ~Size(4095);

  for (unsigned attempt = 0; attempt < 512; ++attempt) {
    EnterCriticalSection(&lock);
    Address page = offset_page +
      (generate_random(choices) + minimum) * alignment_pages;
    bool overlap = false;

    for (size_t index = 0; index < forbidden_count; ++index) {
      if (page + pages > forbidden_begin[index] &&
          forbidden_end[index] > page) {
        overlap = true;
        break;
      }
    }

    if (!overlap && (QueryRange(this, vtable,
        (page - guard_pages) << 12,
        rounded_size + (guard_pages << 13)) & 1)) {
      LeaveCriticalSection(&lock);
      return page << 12;
    }

    LeaveCriticalSection(&lock);
  }

  return 0;
}

template<class Address, class Size>
Address AddressSpaceAllocatorBase<Address, Size>::
  GetNextNonOverlappedNodeUnsafe(Address page, Size pages) {
  return QueryRange(this, vtable, page << 12, pages << 12);
}

template<class Address, class Size>
bool AddressSpaceAllocatorBase<Address, Size>::CheckGuardSpace(
  Address address, Size size, Size guard_size) {
  return (QueryRange(this, vtable, address - guard_size, guard_size) & 1) &&
    (QueryRange(this, vtable, address + size, guard_size) & 1);
}

template uintptr_t AddressAllocator::AllocateSpace(size_t, size_t,
  uintptr_t, uintptr_t (*)(uintptr_t));
template uintptr_t AddressAllocator::GetNextNonOverlappedNodeUnsafe(
  uintptr_t, size_t);
template bool AddressAllocator::CheckGuardSpace(uintptr_t, size_t, size_t);

uintptr_t AddressSpaceAllocatorDefaultGenerateRandom(uintptr_t maximum) {
  uint64_t value = reinterpret_cast<RngManager*>(ResourceManagerStorage)
    ->GenerateRandomU64();
  uintptr_t divisor = maximum + 1;
  return value - Divide(value, divisor) * divisor;
}

int StackGuardManager::MapAtRandomAddress(void** output,
  bool (*map)(const void*, const void*, size_t),
  void (*unmap)(const void*, const void*, size_t),
  const void* source, size_t size) {
  for (unsigned attempt = 0; attempt < 64; ++attempt) {
    uintptr_t address = allocator.AllocateSpace(size, 4096, 0,
      AddressSpaceAllocatorDefaultGenerateRandom);

    if (!address) {
      return 1;
    }

    auto* target = reinterpret_cast<void*>(address);

    if (map(target, source, size)) {
      auto* global = reinterpret_cast<AddressAllocator*>(
        ResourceManagerStorage + 192);

      if (global->CheckGuardSpace(address, size, 0x10000)) {
        *output = target;
        return 0;
      }

      unmap(target, source, size);
    }
  }

  return 2;
}

}
