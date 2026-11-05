#include "nn/fs/fs_rom.hpp"

#include <memory>

#include "nn/fs/detail/fs_file_system_accessor.hpp"
#include "nn/fs/detail/fs_file_system_proxy_service_object.hpp"
#include "nn/fs/detail/fs_file_system_service_object_adapter.hpp"
#include "nn/fs/detail/fs_log.hpp"
#include "nn/fs/detail/fs_storage_service_object_adapter.hpp"
#include "nn/fs/fs_path_utility.hpp"
#include "nn/fs/fs_romfs_file_system.hpp"
#include "nn/fs/fsa/fs_registrar.hpp"
#include "nn/util/optional.hpp"

#define NN_FS_ACCESS_LOG_TARGET_APPLICATION 1u

#define NN_FS_ACCESS_LOG_MOUNT(result, expression, ...) \
  do { \
    if (::nn::fs::detail::IsEnabledAccessLog( \
      NN_FS_ACCESS_LOG_TARGET_APPLICATION)) { \
      const ::nn::os::Tick fsStart_ = ::nn::os::GetSystemTick(); \
      result = (expression); \
      const ::nn::os::Tick fsEnd_ = ::nn::os::GetSystemTick(); \
      ::nn::fs::detail::OutputAccessLog(result, fsStart_, fsEnd_, \
        __FUNCTION__, nullptr, __VA_ARGS__); \
    } \
    else { \
      result = (expression); \
    } \
  } while (0)

#define NN_FS_ENABLE_MOUNT_ACCESS_LOG(name) \
  do { \
    if (::nn::fs::detail::IsEnabledAccessLog( \
      NN_FS_ACCESS_LOG_TARGET_APPLICATION)) { \
      ::nn::fs::detail::EnableFileSystemAccessorAccessLog(name); \
    } \
  } while (0)

namespace nn::fs::detail {

void EnableFileSystemAccessorAccessLog(const char* name);

}

namespace nn::fs {

namespace {

typedef detail::StorageServiceObjectAdapter<fssrv::sf::IStorage>
  StorageServiceObjectAdapter;

const size_t MinimumRomCacheSize = 32;
const ApplicationId CurrentApplicationId = {0};

Result OpenDataStorage(std::unique_ptr<IStorage>* outStorage,
  ApplicationId applicationId, const util::optional<int>& programIndex) {
  auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
  nn::sf::SharedPointer<fssrv::sf::IStorage> storage;
  if (applicationId.value == CurrentApplicationId.value) {
    if (programIndex) {
      NN_FS_RESULT_DO(fileSystemProxy->OpenDataStorageWithProgramIndex(
        nn::sf::Out<nn::sf::SharedPointer<fssrv::sf::IStorage>>(&storage),
        *programIndex));
    }
    else {
      NN_FS_RESULT_DO(fileSystemProxy->OpenDataStorageByCurrentProcess(
        nn::sf::Out<nn::sf::SharedPointer<fssrv::sf::IStorage>>(&storage)));
    }
  }
  else {
    NN_FS_RESULT_THROW_UNLESS(!programIndex, ResultNotImplemented());
    NN_FS_RESULT_DO(fileSystemProxy->OpenDataStorageByProgramId(
      nn::sf::Out<nn::sf::SharedPointer<fssrv::sf::IStorage>>(&storage),
      applicationId.value));
  }
  std::unique_ptr<IStorage> adapter(
    new StorageServiceObjectAdapter(std::move(storage)));
  NN_FS_RESULT_THROW_UNLESS(adapter != nullptr,
    ResultAllocationMemoryFailedInRomA());
  *outStorage = std::move(adapter);
  return ResultSuccess();
}

Result OpenDataFileSystem(std::unique_ptr<fsa::IFileSystem>* outFileSystem,
  ApplicationId applicationId, const util::optional<int>& programIndex) {
  auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
  nn::sf::SharedPointer<fssrv::sf::IFileSystem> fileSystem;
  if (applicationId.value == CurrentApplicationId.value) {
    if (programIndex) {
      NN_FS_RESULT_DO(fileSystemProxy->OpenDataFileSystemWithProgramIndex(
        nn::sf::Out<nn::sf::SharedPointer<fssrv::sf::IFileSystem>>(
          &fileSystem), *programIndex));
    }
    else {
      NN_FS_RESULT_DO(fileSystemProxy->OpenDataFileSystemByCurrentProcess(
        nn::sf::Out<nn::sf::SharedPointer<fssrv::sf::IFileSystem>>(
          &fileSystem)));
    }
  }
  else {
    NN_FS_RESULT_THROW_UNLESS(!programIndex, ResultNotImplemented());
    NN_FS_RESULT_DO(fileSystemProxy->OpenDataFileSystemByProgramId(
      nn::sf::Out<nn::sf::SharedPointer<fssrv::sf::IFileSystem>>(&fileSystem),
      applicationId.value));
  }
  std::unique_ptr<fsa::IFileSystem> adapter(
    new detail::FileSystemServiceObjectAdapter(std::move(fileSystem)));
  NN_FS_RESULT_THROW_UNLESS(adapter != nullptr,
    ResultAllocationMemoryFailedInRomB());
  *outFileSystem = std::move(adapter);
  return ResultSuccess();
}

__attribute__((noinline)) Result QueryMountRomCacheSizeImpl(size_t* outSize,
  ApplicationId applicationId, const util::optional<int>& programIndex) {
  NN_FS_RESULT_THROW_UNLESS(outSize != nullptr, ResultNullptrArgument());
  std::unique_ptr<IStorage> storage;
  const Result result = OpenDataStorage(&storage, applicationId,
    programIndex);
  if (IsSuccess(result)) {
    size_t size = 0;
    NN_FS_RESULT_DO(RomFsFileSystem::GetRequiredWorkingMemorySize(&size,
      storage.get()));
    *outSize = size;
  }
  else if (IsResultIncluded(result, ResultTargetNotFound())) {
    std::unique_ptr<fsa::IFileSystem> fileSystem;
    NN_FS_RESULT_DO(OpenDataFileSystem(&fileSystem, applicationId,
      programIndex));
    *outSize = 0;
  }
  else {
    return result;
  }
  if (*outSize < MinimumRomCacheSize) {
    *outSize = MinimumRomCacheSize;
  }
  return ResultSuccess();
}

[[gnu::always_inline]] inline Result RegisterRomFileSystem(const char* name,
  std::unique_ptr<IStorage>&& storage, void* cacheBuffer,
  size_t cacheBufferSize, bool useCache) {
  std::unique_ptr<RomFsFileSystem> fileSystem(new RomFsFileSystem());
  NN_FS_RESULT_THROW_UNLESS(fileSystem != nullptr,
    ResultAllocationMemoryFailedInRomC());
  NN_FS_RESULT_DO(fileSystem->Initialize(std::move(storage), cacheBuffer,
    cacheBufferSize, useCache));
  IStorage* baseStorage = fileSystem->GetBaseStorage();
  return fsa::Register(name, nullptr, std::move(fileSystem),
    std::unique_ptr<fsa::ICommonMountNameGenerator>(), true, baseStorage,
    true);
}

Result MountRomImpl(const char* name, ApplicationId applicationId,
  void* cacheBuffer, size_t cacheBufferSize,
  const util::optional<int>& programIndex, bool useCache) {
  NN_FS_RESULT_THROW_UNLESS(cacheBuffer != nullptr || !useCache,
    ResultNullptrArgument());
  std::unique_ptr<IStorage> storage;
  const Result result = OpenDataStorage(&storage, applicationId,
    programIndex);
  if (IsSuccess(result)) {
    return RegisterRomFileSystem(name, std::move(storage), cacheBuffer,
      cacheBufferSize, useCache);
  }
  NN_FS_RESULT_THROW_UNLESS(IsResultIncluded(result, ResultTargetNotFound()),
    result);
  std::unique_ptr<fsa::IFileSystem> fileSystem;
  NN_FS_RESULT_DO(OpenDataFileSystem(&fileSystem, applicationId,
    programIndex));
  return fsa::Register(name, std::move(fileSystem));
}

bool CanMountRomImpl(ApplicationId applicationId,
  const util::optional<int>& programIndex) {
  std::unique_ptr<IStorage> storage;
  Result result = OpenDataStorage(&storage, applicationId, programIndex);
  if (IsResultIncluded(result, ResultTargetNotFound())) {
    std::unique_ptr<fsa::IFileSystem> fileSystem;
    result = OpenDataFileSystem(&fileSystem, applicationId, programIndex);
  }
  return IsSuccess(result);
}

}

Result QueryMountRomCacheSize(size_t* outSize) {
  Result result;
  NN_FS_ACCESS_LOG_APPLICATION(result,
    QueryMountRomCacheSizeImpl(outSize, CurrentApplicationId,
      util::optional<int>()),
    ", size: %zu",
    outSize != nullptr && IsSuccess(result) ? *outSize : 0);
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);
  return ResultSuccess();
}

Result QueryMountRomCacheSize(size_t* outSize, ApplicationId applicationId) {
  Result result;
  NN_FS_ACCESS_LOG_APPLICATION(result,
    QueryMountRomCacheSizeImpl(outSize, applicationId,
      util::optional<int>()),
    ", applicationid: 0x%lX, size: %zu", applicationId.value,
    outSize != nullptr && IsSuccess(result) ? *outSize : 0);
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);
  return ResultSuccess();
}

Result QueryMountRomCacheSize(size_t* outSize, int programIndex) {
  Result result;
  NN_FS_ACCESS_LOG_APPLICATION(result,
    QueryMountRomCacheSizeImpl(outSize, CurrentApplicationId,
      util::optional<int>(programIndex)),
    ", program_index: %d, size: %zu", programIndex,
    outSize != nullptr && IsSuccess(result) ? *outSize : 0);
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);
  return ResultSuccess();
}

Result MountRom(const char* name, void* cacheBuffer, size_t cacheBufferSize) {
  auto mount = [=]() -> Result {
    NN_FS_RESULT_DO(detail::CheckMountName(name));
    NN_FS_RESULT_THROW_UNLESS(cacheBuffer != nullptr,
      ResultNullptrArgument());
    return MountRomImpl(name, CurrentApplicationId, cacheBuffer,
      cacheBufferSize, util::optional<int>(), true);
  };
  Result result;
  NN_FS_ACCESS_LOG_MOUNT(result, mount(), ", name: \"%s\", size: %zu", name,
    cacheBufferSize);
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);
  NN_FS_ENABLE_MOUNT_ACCESS_LOG(name);
  return ResultSuccess();
}

Result MountRom(const char* name, ApplicationId applicationId,
  void* cacheBuffer, size_t cacheBufferSize) {
  auto mount = [=]() -> Result {
    NN_FS_RESULT_DO(detail::CheckMountName(name));
    NN_FS_RESULT_THROW_UNLESS(cacheBuffer != nullptr,
      ResultNullptrArgument());
    return MountRomImpl(name, applicationId, cacheBuffer, cacheBufferSize,
      util::optional<int>(), true);
  };
  Result result;
  NN_FS_ACCESS_LOG_MOUNT(result, mount(), ", name: \"%s\"", name);
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);
  NN_FS_ENABLE_MOUNT_ACCESS_LOG(name);
  return ResultSuccess();
}

Result MountRom(const char* name) {
  auto mount = [=]() -> Result {
    NN_FS_RESULT_DO(detail::CheckMountNameAcceptingReservedMountName(name));
    return MountRomImpl(name, CurrentApplicationId, nullptr, 0,
      util::optional<int>(), false);
  };
  Result result;
  NN_FS_ACCESS_LOG_MOUNT(result, mount(),
    ", name: \"%s\", without_file_system_cache_tag: true", name);
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);
  NN_FS_ENABLE_MOUNT_ACCESS_LOG(name);
  return ResultSuccess();
}

Result MountRom(const char* name, int programIndex, void* cacheBuffer,
  size_t cacheBufferSize) {
  auto mount = [=]() -> Result {
    NN_FS_RESULT_DO(detail::CheckMountName(name));
    NN_FS_RESULT_THROW_UNLESS(cacheBuffer != nullptr,
      ResultNullptrArgument());
    return MountRomImpl(name, CurrentApplicationId, cacheBuffer,
      cacheBufferSize, util::optional<int>(programIndex), true);
  };
  Result result;
  NN_FS_ACCESS_LOG_MOUNT(result, mount(),
    ", name: \"%s\", program_index: %d, size: %zu", name, programIndex,
    cacheBufferSize);
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);
  NN_FS_ENABLE_MOUNT_ACCESS_LOG(name);
  return ResultSuccess();
}

Result MountNcaForDebug(const char* name, const char* path,
  detail::FileSystemProxyType type, void* cacheBuffer,
  size_t cacheBufferSize) {
  auto mount = [=]() -> Result {
    NN_FS_RESULT_DO(detail::CheckMountName(name));
    NN_FS_RESULT_THROW_UNLESS(cacheBuffer != nullptr,
      ResultNullptrArgument());
    std::unique_ptr<IStorage> storage;
    {
      auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
      nn::sf::SharedPointer<fssrv::sf::IStorage> sfStorage;
      fssrv::sf::FspPath sfPath = {};
      NN_FS_RESULT_DO(ConvertToFspPath(&sfPath, path));
      NN_FS_RESULT_DO(fileSystemProxy->OpenDataStorageByPath(
        nn::sf::Out<nn::sf::SharedPointer<fssrv::sf::IStorage>>(&sfStorage),
        sfPath, 0, static_cast<uint32_t>(type)));
      storage.reset(new StorageServiceObjectAdapter(std::move(sfStorage)));
      NN_FS_RESULT_THROW_UNLESS(storage != nullptr,
        ResultAllocationMemoryFailedInRomA());
    }
    return RegisterRomFileSystem(name, std::move(storage), cacheBuffer,
      cacheBufferSize, true);
  };
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(mount());
  return ResultSuccess();
}

bool CanMountRomForDebug() {
  Result result;
  NN_FS_ACCESS_LOG_APPLICATION(result, ResultSuccess(), "");
  static_cast<void>(result);
  return CanMountRomImpl(CurrentApplicationId, util::optional<int>());
}

bool CanMountRom(ApplicationId applicationId) {
  return CanMountRomImpl(applicationId, util::optional<int>());
}

bool CanMountRomForDebug(int programIndex) {
  Result result;
  NN_FS_ACCESS_LOG_APPLICATION(result, ResultSuccess(), ", program_index: %d",
    programIndex);
  static_cast<void>(result);
  return CanMountRomImpl(CurrentApplicationId,
    util::optional<int>(programIndex));
}

}
