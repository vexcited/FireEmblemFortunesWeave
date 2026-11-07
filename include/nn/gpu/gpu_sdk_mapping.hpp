#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/gpu/gpu_sdk_types.hpp"
#include "nn/gs/gs_native_window.hpp"
#include "nn/gsv/gsv_user_image.hpp"
#include "nn/result.hpp"

extern "C" {

int NvRmMemHandleFromFd(int fd, uint32_t* pOutHandle);
uint32_t NvRmMemGetNativeImageHandle(uint32_t handle);
uint32_t NvRmMemGetVprMemoryHandle(uint32_t handle);
int NvRmMemHandleFree(uint32_t handle);
uint64_t NvRmMemGetSize(uint32_t handle);
uint32_t NvRmMemGetGpukMemoryHandle(uint32_t handle);
uint8_t NvRmMemGetUserAllocated(uint32_t handle);

}

namespace nn::gs::sdk {

struct VprMemoryHandle {
  uint32_t value;
};

}

namespace nn::gpu::sdk {

struct SparseMapRequest {
  uint64_t address;
  uint64_t size;
  GpuMemoryPermission permission;
  GpuCacheability cacheability;
  uint8_t reserved12;
  uint8_t kind;
  uint8_t compressionKind;
  RawTextureMode rawTextureMode;
  uint8_t reserved16[2];
  uint32_t memory;
  uint32_t reserved1c;
  uint64_t offset;
};

Result QueryUserPartitionGpuAddressRangeList(size_t* outCount,
  const GpuAddressSpaceType* addressSpace, GpuAddressRange* ranges,
  size_t count);
uint64_t GetGsvPartitionGpuAddressMin(const GpuAddressSpaceType* addressSpace);
uint64_t GetGsvPartitionGpuAddressMax(const GpuAddressSpaceType* addressSpace);
Result NormalMapGpuMemory4K(uint8_t* pOutKind,
  const GpuAddressSpaceType* addressSpace, uint64_t addressMin,
  uint64_t addressMax, GpuMemoryHandle memory, uint64_t offset,
  GpuMemoryPermission permission, GpuCacheability cacheability, uint8_t kind,
  uint8_t compressionKind, RawTextureMode rawTextureMode,
  AddressSpaceSyncFlag syncFlag);
Result NormalModifyMemoryKind4K(uint8_t* pOutKind,
  const GpuAddressSpaceType* addressSpace, uint64_t addressMin,
  uint64_t addressMax, uint8_t kind, uint8_t compressionKind,
  AddressSpaceSyncFlag syncFlag);
Result ExecuteSparseMapRequests(uint64_t* pOutCount, uint8_t* pOutKind,
  uint64_t count, const GpuAddressSpaceType* addressSpace,
  const SparseMapRequest* requests, uint64_t requestCount,
  AddressSpaceSyncFlag syncFlag);
Result NormalMapVprMemory(uint64_t* pOutAddress, uint64_t* pOutSize,
  uint8_t* pOutKind, const GpuAddressSpaceType* addressSpace,
  gs::sdk::VprMemoryHandle memory, GpuMemoryPermission permission,
  GpuCacheability cacheability, uint8_t kind, uint8_t compressionKind,
  RawTextureMode rawTextureMode, AddressSpaceSyncFlag syncFlag);
Result MapNativeImage(uint64_t* pOutAddressMin, uint64_t* pOutAddressMax,
  gsv::imgdesc::impl::user::ounce::GpuOunceUserImageDescriptor*
    pOutDescriptor,
  gsv::GpuOunceUserImageFlags* pOutFlags,
  const GpuAddressSpaceType* addressSpace, gs::NativeImageHandle image,
  GpuMemoryPermission permission);
Result NormalModifyVprMemoryKind(uint8_t* pOutKind,
  const GpuAddressSpaceType* addressSpace, uint64_t address, uint64_t size,
  uint8_t kind, uint8_t compressionKind, AddressSpaceSyncFlag syncFlag);

}
