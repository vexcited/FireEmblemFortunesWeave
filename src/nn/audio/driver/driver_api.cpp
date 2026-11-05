#include "nn/audio/driver/driver.hpp"

namespace nn::audio::driver {
namespace {

constexpr Result ResultNullArgument = {0xc8899};

}

void InvalidateDataCache(const void* address, size_t size) {
  detail::InvalidateDataCacheImpl(address, size);
}

void StoreDataCache(const void* address, size_t size) {
  detail::StoreDataCacheImpl(address, size);
}

void FlushDataCache(const void* address, size_t size) {
  detail::FlushDataCacheImpl(address, size);
}

Result GetDeviceName(dd::DeviceName* device, nn::util::string_view group) {
  if (device == nullptr) {
    return ResultNullArgument;
  }
  Result result = detail::GetDeviceNameImpl(device, group);
  if (result.IsFailure()) {
    return result;
  }
  return Result{0};
}

Result GetPhysicalMemoryRegionGroupName(audio::detail::NameStorage<63>* name,
  dd::DeviceName device) {
  if (name == nullptr) {
    return ResultNullArgument;
  }
  Result result = detail::GetPhysicalMemoryRegionGroupNameImpl(name, device);
  if (result.IsFailure()) {
    return result;
  }
  return Result{0};
}

Result GetPhysicalMemoryRegion(PhysicalMemoryRegion* region,
  nn::util::string_view group, nn::util::string_view name) {
  if (region == nullptr) {
    return ResultNullArgument;
  }
  Result result = detail::GetPhysicalMemoryRegionImpl(region, group, name);
  if (result.IsFailure()) {
    return result;
  }
  return Result{0};
}

Result GetPhysicalMemoryRegionAttributes(
  PhysicalMemoryAttributeSet* attributes, nn::util::string_view group,
  nn::util::string_view name) {
  if (attributes == nullptr) {
    return ResultNullArgument;
  }
  Result result =
    detail::GetPhysicalMemoryRegionAttributesImpl(attributes, group, name);
  if (result.IsFailure()) {
    return result;
  }
  return Result{0};
}

Result GetPhysicalMemoryRegionEnvelope(PhysicalMemoryRegion* region,
  nn::util::string_view group, PhysicalMemoryAttributeSet mask,
  PhysicalMemoryAttributeSet value) {
  if (region == nullptr) {
    return ResultNullArgument;
  }
  Result result =
    detail::GetPhysicalMemoryRegionEnvelopeImpl(region, group, mask, value);
  if (result.IsFailure()) {
    return result;
  }
  return Result{0};
}

uint64_t GetPhysicalAddress(void* address, size_t size) {
  return detail::GetPhysicalAddressImpl(address, size);
}

uint64_t GetPhysicalAddress(const void* address, size_t size) {
  return detail::GetPhysicalAddressImpl(const_cast<void*>(address), size);
}

void* GetVirtualAddress(uint64_t address, size_t size) {
  return detail::GetVirtualAddressImpl(address, size);
}

const void* GetConstVirtualAddress(uint64_t address, size_t size) {
  return detail::GetVirtualAddressImpl(address, size);
}

TimeSpan GetSynchronizedTimeStamp() {
  return detail::GetSynchronizedTimeStampImpl();
}

bool IsCallingThread(const os::ThreadType* thread) {
  return detail::IsCallingThreadImpl(thread);
}

void LogMemoryMap() {
  detail::LogMemoryMapImpl();
}

}
