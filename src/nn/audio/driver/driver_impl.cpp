#include <string.h>

#include "nn/audio/detail/audio_name_storage.hpp"
#include "nn/audio/driver/driver.hpp"
#include "nn/os/time.hpp"
#include "nn/os/transfer_memory.hpp"

namespace nn::os {

ThreadType* GetCurrentThread();

}

namespace nn::diag::detail {

[[noreturn]] void AbortImpl();

}

namespace nn::audio::driver::detail {
namespace {

constexpr Result ResultNotFound = {665};

bool IsSameName(const char* name, nn::util::string_view other) {
  return strlen(name) == other.size() &&
    memcmp(name, other.data(), other.size()) == 0;
}

bool IsValid(const PhysicalMemoryRegionDescriptor& descriptor) {
  return descriptor.name[0] != '\0' && descriptor.region.size != 0 &&
    descriptor.attributes._storage[0] != 0;
}

size_t FindGroup(Span<const PhysicalMemoryGroupDescriptor> groups,
  nn::util::string_view group) {
  size_t index = 0;
  for (; index < groups.size; ++index) {
    if (IsSameName(groups.data[index].name, group)) {
      break;
    }
  }
  return index;
}

const PhysicalMemoryRegionDescriptor* FindRegion(
  const PhysicalMemoryGroupDescriptor& group, nn::util::string_view name) {
  for (const PhysicalMemoryRegionDescriptor& region : group.regions) {
    if (IsValid(region) && IsSameName(region.name, name)) {
      return &region;
    }
  }
  return nullptr;
}

}

Result GetDeviceNameImpl(dd::DeviceName* device, nn::util::string_view group) {
  Span<const PhysicalMemoryGroupDescriptor> groups =
    GetPhysicalMemoryGroupDescriptor();
  size_t index = FindGroup(groups, group);
  if (index == groups.size) {
    return ResultNotFound;
  }
  *device = groups.data[index].device;
  return Result{0};
}

Result GetPhysicalMemoryRegionGroupNameImpl(
  audio::detail::NameStorage<63>* name, dd::DeviceName device) {
  Span<const PhysicalMemoryGroupDescriptor> groups =
    GetPhysicalMemoryGroupDescriptor();
  size_t index = 0;
  for (; index < groups.size; ++index) {
    if (groups.data[index].device == device) {
      break;
    }
  }
  if (index == groups.size) {
    return ResultNotFound;
  }
  audio::detail::CopyName(name, groups.data[index].name);
  return Result{0};
}

Result GetPhysicalMemoryRegionImpl(PhysicalMemoryRegion* region,
  nn::util::string_view group, nn::util::string_view name) {
  Span<const PhysicalMemoryGroupDescriptor> groups =
    GetPhysicalMemoryGroupDescriptor();
  size_t index = FindGroup(groups, group);
  if (index == groups.size) {
    return ResultNotFound;
  }
  const PhysicalMemoryRegionDescriptor* found =
    FindRegion(groups.data[index], name);
  if (found == nullptr) {
    return ResultNotFound;
  }
  *region = found->region;
  return Result{0};
}

Result GetPhysicalMemoryRegionAttributesImpl(
  PhysicalMemoryAttributeSet* attributes, nn::util::string_view group,
  nn::util::string_view name) {
  Span<const PhysicalMemoryGroupDescriptor> groups =
    GetPhysicalMemoryGroupDescriptor();
  size_t index = FindGroup(groups, group);
  if (index == groups.size) {
    return ResultNotFound;
  }
  const PhysicalMemoryRegionDescriptor* found =
    FindRegion(groups.data[index], name);
  if (found == nullptr) {
    return ResultNotFound;
  }
  *attributes = found->attributes;
  return Result{0};
}

Result GetPhysicalMemoryRegionEnvelopeImpl(PhysicalMemoryRegion* region,
  nn::util::string_view group, PhysicalMemoryAttributeSet mask,
  PhysicalMemoryAttributeSet value) {
  Span<const PhysicalMemoryGroupDescriptor> groups =
    GetPhysicalMemoryGroupDescriptor();
  size_t index = FindGroup(groups, group);
  if (index == groups.size) {
    return ResultNotFound;
  }
  uint32_t expected = value._storage[0] & mask._storage[0];
  int count = 0;
  uint64_t begin = ~uint64_t(0);
  uint64_t end = 0;
  for (const PhysicalMemoryRegionDescriptor& descriptor :
    groups.data[index].regions) {
    if (descriptor.name[0] == '\0' || descriptor.region.size == 0) {
      continue;
    }
    uint32_t attributes = descriptor.attributes._storage[0];
    if (attributes == 0 || (attributes & mask._storage[0]) != expected) {
      continue;
    }
    ++count;
    uint64_t regionEnd = descriptor.region.address + descriptor.region.size;
    if (descriptor.region.address < begin) {
      begin = descriptor.region.address;
    }
    if (end <= regionEnd) {
      end = regionEnd;
    }
  }
  if (count <= 0) {
    return ResultNotFound;
  }
  region->address = begin;
  region->size = end - begin;
  return Result{0};
}

bool IsCallingThreadImpl(const os::ThreadType* thread) {
  return os::GetCurrentThread() == thread;
}

void InvalidateDataCacheImpl(const void* address, size_t size) {
  os::FlushDataCache(address, size);
}

void StoreDataCacheImpl(const void* address, size_t size) {
  os::FlushDataCache(address, size);
}

void FlushDataCacheImpl(const void* address, size_t size) {
  os::FlushDataCache(address, size);
}

uint64_t GetPhysicalAddressImpl(void* address, size_t size) {
  nn::diag::detail::AbortImpl();
}

void* GetVirtualAddressImpl(uint64_t address, size_t size) {
  return reinterpret_cast<void*>(address);
}

TimeSpan GetSynchronizedTimeStampImpl() {
  return os::ConvertToTimeSpan(os::GetSystemTick());
}

void LogMemoryMapImpl() {
}

}
