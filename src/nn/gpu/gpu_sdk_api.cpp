#include <stddef.h>
#include <stdint.h>

#include "nn/gs/gs_native_window.hpp"
#include "nn/result.hpp"

namespace nn::gsv::imgdesc::impl::user::ounce {

struct GpuOunceUserImagePreference;

}

namespace nn::gpu::sdk {

struct GraphicsDeviceType;

struct GpuMemoryHandle {
  uint64_t value;
};

struct GpuAddressSpaceHandle {
  uint32_t value;
};

struct GpuAddressSpaceType {
  const GraphicsDeviceType* device;
  GpuAddressSpaceHandle handle;
};

struct GpuNativeImageType {
  const GraphicsDeviceType* device;
  void* memory;
  gs::NativeImageHandle handle;
};

using gsv::imgdesc::impl::user::ounce::GpuOunceUserImagePreference;

Result CreateNativeImageArray(GpuNativeImageType* image,
  const GraphicsDeviceType* device, void* memory, size_t memorySize,
  GpuMemoryHandle memoryHandle, size_t offset,
  const GpuOunceUserImagePreference& preference, size_t arrayLength);

GpuAddressSpaceHandle GetGpuAddressSpaceHandle(
  const GpuAddressSpaceType* addressSpace) {
  return addressSpace->handle;
}

gs::NativeImageHandle GetGpuNativeImageHandle(
  const GpuNativeImageType* image) {
  return image->handle;
}

Result CreateNativeImage(GpuNativeImageType* image,
  const GraphicsDeviceType* device, void* memory, size_t memorySize,
  GpuMemoryHandle memoryHandle, size_t offset,
  const GpuOunceUserImagePreference& preference) {
  return CreateNativeImageArray(image, device, memory, memorySize,
    memoryHandle, offset, preference, 1);
}

}

namespace nn::gpu::impl::user {

const int GpuAddressSpaceCountMax = 8;

int GetGpuAddressSpaceCountMax() {
  return GpuAddressSpaceCountMax;
}

}
