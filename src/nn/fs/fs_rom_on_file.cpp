#include "nn/fs/fs_rom_on_file.hpp"

#include "nn/fs/detail/fs_log.hpp"
#include "nn/fs/fs_file_storage.hpp"
#include "nn/fs/fs_romfs_file_system.hpp"
#include "nn/fs/fsa/fs_registrar.hpp"

namespace nn::fs {

namespace {

const size_t MinimumRomCacheSize = 32;

}

namespace detail {

Result MountRomOnFileImpl(const char* name,
  std::unique_ptr<IStorage>&& storage, void* cacheBuffer,
  size_t cacheBufferSize) {
  std::unique_ptr<RomFsFileSystem> fileSystem(new RomFsFileSystem());
  NN_FS_RESULT_THROW_UNLESS(fileSystem != nullptr,
    ResultAllocationMemoryFailedInRomOnFileB());
  NN_FS_RESULT_DO(fileSystem->Initialize(std::move(storage), cacheBuffer,
    cacheBufferSize, true));
  return fsa::Register(name, std::move(fileSystem));
}

Result QueryMountRomOnFileCacheSizeImpl(size_t* outSize, IStorage* storage) {
  size_t size = 0;
  NN_FS_RESULT_DO(RomFsFileSystem::GetRequiredWorkingMemorySize(&size,
    storage));
  *outSize = size > MinimumRomCacheSize ? size : MinimumRomCacheSize;
  return ResultSuccess();
}

}

Result QueryMountRomOnFileCacheSize(size_t* outSize, FileHandle handle) {
  auto query = [=]() -> Result {
    NN_FS_RESULT_THROW_UNLESS(outSize != nullptr, ResultNullptrArgument());
    std::unique_ptr<FileHandleStorage> storage(new FileHandleStorage(handle));
    NN_FS_RESULT_THROW_UNLESS(storage != nullptr,
      ResultAllocationMemoryFailedInRomOnFileC());
    return detail::QueryMountRomOnFileCacheSizeImpl(outSize, storage.get());
  };
  Result result;
  NN_FS_ACCESS_LOG_SYSTEM(result, query(), ", file_handle: 0x%p, size: %zu",
    handle.handle, outSize != nullptr && IsSuccess(result) ? *outSize : 0);
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);
  return ResultSuccess();
}

Result MountRomOnFile(const char* name, FileHandle handle, void* cacheBuffer,
  size_t cacheBufferSize) {
  auto mount = [=]() -> Result {
    NN_FS_RESULT_DO(detail::CheckMountName(name));
    NN_FS_RESULT_THROW_UNLESS(cacheBuffer != nullptr,
      ResultNullptrArgument());
    std::unique_ptr<FileHandleStorage> storage(
      new FileHandleStorage(handle, false));
    NN_FS_RESULT_THROW_UNLESS(storage != nullptr,
      ResultAllocationMemoryFailedInRomOnFileA());
    return detail::MountRomOnFileImpl(name, std::move(storage), cacheBuffer,
      cacheBufferSize);
  };
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(mount());
  return ResultSuccess();
}

}
