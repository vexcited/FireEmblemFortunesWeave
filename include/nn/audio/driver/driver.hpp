#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/audio/audio_stream.hpp"
#include "nn/dd/dd_device_name.hpp"
#include "nn/os/time.hpp"
#include "nn/result.hpp"
#include "nn/span.hpp"
#include "nn/util/bit_flag_set.hpp"
#include "nn/util/string_view.hpp"

namespace nn::os {

struct ThreadType;

}

namespace nn::audio::driver {

struct PhysicalMemoryAttributeFlag {};

using PhysicalMemoryAttributeSet =
  nn::util::BitFlagSet<32, PhysicalMemoryAttributeFlag>;

struct PhysicalMemoryRegion {
  uint64_t address;
  uint64_t size;
};

namespace detail {

struct PhysicalMemoryRegionDescriptor {
  char name[64];
  PhysicalMemoryRegion region;
  PhysicalMemoryAttributeSet attributes;
};

struct PhysicalMemoryGroupDescriptor {
  char name[64];
  dd::DeviceName device;
  PhysicalMemoryRegionDescriptor regions[16];
};

static_assert(sizeof(PhysicalMemoryRegionDescriptor) == 88);
static_assert(sizeof(PhysicalMemoryGroupDescriptor) == 1480);

Span<const PhysicalMemoryGroupDescriptor> GetPhysicalMemoryGroupDescriptor();

Result GetDeviceNameImpl(dd::DeviceName* device, nn::util::string_view group);
Result GetPhysicalMemoryRegionGroupNameImpl(
  audio::detail::NameStorage<63>* name, dd::DeviceName device);
Result GetPhysicalMemoryRegionImpl(PhysicalMemoryRegion* region,
  nn::util::string_view group, nn::util::string_view name);
Result GetPhysicalMemoryRegionAttributesImpl(
  PhysicalMemoryAttributeSet* attributes, nn::util::string_view group,
  nn::util::string_view name);
Result GetPhysicalMemoryRegionEnvelopeImpl(PhysicalMemoryRegion* region,
  nn::util::string_view group, PhysicalMemoryAttributeSet mask,
  PhysicalMemoryAttributeSet value);
bool IsCallingThreadImpl(const os::ThreadType* thread);
void InvalidateDataCacheImpl(const void* address, size_t size);
void StoreDataCacheImpl(const void* address, size_t size);
void FlushDataCacheImpl(const void* address, size_t size);
uint64_t GetPhysicalAddressImpl(void* address, size_t size);
void* GetVirtualAddressImpl(uint64_t address, size_t size);
TimeSpan GetSynchronizedTimeStampImpl();
void LogMemoryMapImpl();

}

void InvalidateDataCache(const void* address, size_t size);
void StoreDataCache(const void* address, size_t size);
void FlushDataCache(const void* address, size_t size);
Result GetDeviceName(dd::DeviceName* device, nn::util::string_view group);
Result GetPhysicalMemoryRegionGroupName(audio::detail::NameStorage<63>* name,
  dd::DeviceName device);
Result GetPhysicalMemoryRegion(PhysicalMemoryRegion* region,
  nn::util::string_view group, nn::util::string_view name);
Result GetPhysicalMemoryRegionAttributes(
  PhysicalMemoryAttributeSet* attributes, nn::util::string_view group,
  nn::util::string_view name);
Result GetPhysicalMemoryRegionEnvelope(PhysicalMemoryRegion* region,
  nn::util::string_view group, PhysicalMemoryAttributeSet mask,
  PhysicalMemoryAttributeSet value);
uint64_t GetPhysicalAddress(void* address, size_t size);
uint64_t GetPhysicalAddress(const void* address, size_t size);
void* GetVirtualAddress(uint64_t address, size_t size);
const void* GetConstVirtualAddress(uint64_t address, size_t size);
TimeSpan GetSynchronizedTimeStamp();
bool IsCallingThread(const os::ThreadType* thread);
void LogMemoryMap();

}
