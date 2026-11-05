#pragma once

#include <stddef.h>

#include "nn/fs/fs_file_system_proxy_types.hpp"
#include "nn/fs/fs_result.hpp"
#include "nn/ncm/ncm_ids.hpp"

namespace nn::fs {

constexpr Result ResultAllocationMemoryFailedInRomA() {
  return detail::MakeResult(3234);
}

constexpr Result ResultAllocationMemoryFailedInRomB() {
  return detail::MakeResult(3235);
}

constexpr Result ResultAllocationMemoryFailedInRomC() {
  return detail::MakeResult(3239);
}

Result QueryMountRomCacheSize(size_t* outSize);
Result QueryMountRomCacheSize(size_t* outSize, ApplicationId applicationId);
Result QueryMountRomCacheSize(size_t* outSize, int programIndex);
Result MountRom(const char* name, void* cacheBuffer, size_t cacheBufferSize);
Result MountRom(const char* name, ApplicationId applicationId,
  void* cacheBuffer, size_t cacheBufferSize);
Result MountRom(const char* name);
Result MountRom(const char* name, int programIndex, void* cacheBuffer,
  size_t cacheBufferSize);
Result MountNcaForDebug(const char* name, const char* path,
  detail::FileSystemProxyType type, void* cacheBuffer,
  size_t cacheBufferSize);
bool CanMountRomForDebug();
bool CanMountRom(ApplicationId applicationId);
bool CanMountRomForDebug(int programIndex);

}
