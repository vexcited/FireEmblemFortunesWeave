#pragma once

#include <stddef.h>

#include <memory>

#include "nn/fs/detail/fs_file_system_accessor.hpp"
#include "nn/fs/fs_istorage.hpp"

namespace nn::fs {

constexpr Result ResultAllocationMemoryFailedInRomOnFileA() {
  return detail::MakeResult(3380);
}

constexpr Result ResultAllocationMemoryFailedInRomOnFileB() {
  return detail::MakeResult(3381);
}

constexpr Result ResultAllocationMemoryFailedInRomOnFileC() {
  return detail::MakeResult(3382);
}

Result QueryMountRomOnFileCacheSize(size_t* outSize, FileHandle handle);
Result MountRomOnFile(const char* name, FileHandle handle, void* cacheBuffer,
  size_t cacheBufferSize);

namespace detail {

Result MountRomOnFileImpl(const char* name,
  std::unique_ptr<IStorage>&& storage, void* cacheBuffer,
  size_t cacheBufferSize);
Result QueryMountRomOnFileCacheSizeImpl(size_t* outSize, IStorage* storage);

}

}
