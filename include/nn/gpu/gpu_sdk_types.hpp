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
  uint32_t attachedCount;
  void* pAttachment;
};

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

}
