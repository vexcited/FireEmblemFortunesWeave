#include <stddef.h>
#include <stdint.h>

#include "nn/os/address_space.hpp"
#include "nn/result.hpp"

namespace nn::os::detail {

extern uint8_t g_OsResourceManagerStorage[];

uintptr_t AddressSpaceAllocatorDefaultGenerateRandom(uintptr_t maximum);

using MapFunction = Result (*)(uint32_t handle, const void* address,
  size_t size);
using UnmapFunction = void (*)(uint32_t handle, const void* address,
  size_t size);

struct RemoteRegionManager {
  uint64_t reserved_00;
  AddressAllocator allocator;

  Result MapAtRandomAddress(void** pOutAddress, MapFunction map,
    UnmapFunction unmap, uint32_t handle, size_t size, size_t alignment);
};

namespace {

constexpr uint32_t ResultOutOfAddressSpace = 0x3f403;

// The map fails with this when the region got taken in the meantime.
constexpr uint32_t ResultInvalidCurrentMemory = 0x3ec03;

constexpr size_t LargePageSize = 0x200000;
constexpr size_t GuardSize = 0x10000;
constexpr size_t StackRegionAllocatorOffset = 0x4a8;
constexpr int MapRetryCount = 64;

enum class MapState {
  Mapped,
  Failed,
  Exhausted,
};

[[gnu::always_inline]] inline MapState TryMapAtRandomAddress(
  uintptr_t* pOutAddress, Result* pOutResult, AddressAllocator& allocator,
  MapFunction map, uint32_t handle, size_t size, size_t alignment) {
  for (int i = 0; i < MapRetryCount; i++) {
    const uintptr_t address = allocator.AllocateSpace(size, alignment, 0,
      AddressSpaceAllocatorDefaultGenerateRandom);
    if (address == 0) {
      *pOutResult = {ResultOutOfAddressSpace};
      return MapState::Failed;
    }

    const Result result = map(handle, reinterpret_cast<const void*>(address),
      size);
    if (result.IsSuccess()) {
      *pOutAddress = address;
      return MapState::Mapped;
    }

    if (result.GetInnerValueForDebug() != ResultInvalidCurrentMemory) {
      *pOutResult = result;
      return MapState::Failed;
    }
  }

  return MapState::Exhausted;
}

}

// Large regions first try large page alignment. A region whose guard
// space is already used is unmapped and still reported as done.
Result RemoteRegionManager::MapAtRandomAddress(void** pOutAddress,
  MapFunction map, UnmapFunction unmap, uint32_t handle, size_t size,
  size_t alignment) {
  uintptr_t address = 0;
  Result result = {ResultOutOfAddressSpace};
  MapState state = MapState::Exhausted;
  if (size >= LargePageSize) {
    state = TryMapAtRandomAddress(&address, &result, allocator, map, handle,
      size, LargePageSize);
  }

  if (state == MapState::Exhausted) {
    if (alignment == LargePageSize || size < alignment) {
      return {ResultOutOfAddressSpace};
    }

    state = TryMapAtRandomAddress(&address, &result, allocator, map, handle,
      size, alignment);
  }

  if (state == MapState::Failed) {
    return result;
  }

  if (state == MapState::Exhausted) {
    return {ResultOutOfAddressSpace};
  }

  auto* pStackAllocator = reinterpret_cast<AddressAllocator*>(
    g_OsResourceManagerStorage + StackRegionAllocatorOffset);
  if (pStackAllocator->CheckGuardSpace(address, size, GuardSize)) {
    *pOutAddress = reinterpret_cast<void*>(address);
    return {0};
  }

  unmap(handle, reinterpret_cast<const void*>(address), size);
  return {0};
}

}
