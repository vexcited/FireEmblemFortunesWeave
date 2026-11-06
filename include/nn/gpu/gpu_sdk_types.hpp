#pragma once

#include <stddef.h>
#include <stdint.h>

#include <atomic>

namespace nn::gpu::sdk {

struct GraphicsDeviceType {
  uint8_t id;
  uint8_t reserved[3];
  std::atomic<uint32_t> referenceCount;
};

struct GpuMemoryHandle {
  uint32_t value;
};

struct GpuAddressSpaceHandle {
  uint32_t value;
};

struct GpuAddressSpaceType {
  const GraphicsDeviceType* device;
  GpuAddressSpaceHandle handle;
  std::atomic<uint32_t> attachedCount;
  std::atomic<uint64_t> mappedSize;
};

enum class AddressSpaceSyncFlag : uint8_t {};
enum class GpuMemoryPermission : uint8_t {};
enum class GpuCacheability : uint8_t {};
enum class RawTextureMode : uint8_t {};
enum class PageTableAllocMode : uint8_t {};

struct GpuAddressSpaceCreationFlags {
  uint32_t value;
};

struct GpuAddressRange {
  uint64_t min;
  uint64_t max;
};

struct SdkDebugLabel {
  uint64_t value;
};

struct UserDebugLabel {
  uint64_t value[2];
};

struct SdkLibraryInfo {
  uint8_t data[64];
};

struct GpuMemoryInfo {
  uint8_t data[64];
};

struct GpuSegmentInfo {
  uint8_t data[64];
};

struct GpuPageInfo {
  uint8_t data[64];
};

struct PageTableEntryInfo {
  uint8_t data[40];
};

}
