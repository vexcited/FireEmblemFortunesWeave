#include "nn/fs/fs_data.hpp"

#include <memory>

#include "nn/fs/detail/fs_file_system_accessor.hpp"
#include "nn/fs/detail/fs_file_system_proxy_service_object.hpp"
#include "nn/fs/detail/fs_log.hpp"
#include "nn/fs/detail/fs_storage_service_object_adapter.hpp"
#include "nn/fs/fs_romfs_file_system.hpp"
#include "nn/fs/fsa/fs_registrar.hpp"
#include "nn/ncm/ncm_result.hpp"

namespace nn::fs {

namespace {

typedef detail::StorageServiceObjectAdapter<fssrv::sf::IStorage>
  StorageServiceObjectAdapter;

const size_t MinimumDataCacheSize = 32;

[[gnu::noinline]] Result OpenDataStorageByDataId(std::unique_ptr<IStorage>* outStorage,
  ncm::DataId dataId, ncm::StorageId storageId) {
  auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
  nn::sf::SharedPointer<fssrv::sf::IStorage> storage;
  const Result result = fileSystemProxy->OpenDataStorageByDataId(
    nn::sf::Out<nn::sf::SharedPointer<fssrv::sf::IStorage>>(&storage),
    dataId, storageId);
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(
    IsResultIncluded(result, ncm::ResultContentNotFound()) ?
      ResultTargetNotFound() : result);
  std::unique_ptr<IStorage> adapter(
    new StorageServiceObjectAdapter(std::move(storage)));
  NN_FS_RESULT_THROW_UNLESS(adapter != nullptr,
    ResultAllocationMemoryFailedInDataA());
  *outStorage = std::move(adapter);
  return ResultSuccess();
}

[[gnu::noinline]] Result MountDataImpl(const char* name, ncm::DataId dataId,
  ncm::StorageId storageId, void* cacheBuffer, size_t cacheBufferSize,
  bool useCache, bool isDataCacheEnabled, bool isPathCacheEnabled,
  std::unique_ptr<fsa::IUnmountHookInvoker>&& unmountHookInvoker) {
  std::unique_ptr<IStorage> storage;
  NN_FS_RESULT_DO(OpenDataStorageByDataId(&storage, dataId, storageId));
  std::unique_ptr<RomFsFileSystem> fileSystem(new RomFsFileSystem());
  NN_FS_RESULT_THROW_UNLESS(fileSystem != nullptr,
    ResultAllocationMemoryFailedInDataB());
  NN_FS_RESULT_DO(fileSystem->Initialize(std::move(storage), cacheBuffer,
    cacheBufferSize, useCache));
  IStorage* baseStorage = fileSystem->GetBaseStorage();
  return fsa::Register(name, nullptr, std::move(fileSystem),
    std::unique_ptr<fsa::ICommonMountNameGenerator>(), isDataCacheEnabled,
    baseStorage, isPathCacheEnabled, std::move(unmountHookInvoker));
}

}

namespace detail {

Result QueryMountDataCacheSize(size_t* outSize, ncm::DataId dataId,
  ncm::StorageId storageId) {
  NN_FS_RESULT_THROW_UNLESS(outSize != nullptr, ResultNullptrArgument());
  std::unique_ptr<IStorage> storage;
  NN_FS_RESULT_DO(OpenDataStorageByDataId(&storage, dataId, storageId));
  size_t size = 0;
  NN_FS_RESULT_DO(RomFsFileSystem::GetRequiredWorkingMemorySize(&size,
    storage.get()));
  *outSize = size < MinimumDataCacheSize ? MinimumDataCacheSize : size;
  return ResultSuccess();
}

Result MountData(const char* name, ncm::DataId dataId,
  ncm::StorageId storageId) {
  NN_FS_RESULT_DO(CheckMountName(name));
  return MountDataImpl(name, dataId, storageId, nullptr, 0, false, false,
    false, std::unique_ptr<fsa::IUnmountHookInvoker>());
}

Result MountData(const char* name, ncm::DataId dataId,
  ncm::StorageId storageId, void* cacheBuffer, size_t cacheBufferSize) {
  NN_FS_RESULT_DO(CheckMountName(name));
  NN_FS_RESULT_THROW_UNLESS(cacheBuffer != nullptr, ResultNullptrArgument());
  return MountDataImpl(name, dataId, storageId, cacheBuffer, cacheBufferSize,
    true, false, false, std::unique_ptr<fsa::IUnmountHookInvoker>());
}

Result MountData(const char* name, ncm::DataId dataId,
  ncm::StorageId storageId, void* cacheBuffer, size_t cacheBufferSize,
  bool isDataCacheEnabled, bool isPathCacheEnabled) {
  NN_FS_RESULT_DO(CheckMountName(name));
  NN_FS_RESULT_THROW_UNLESS(cacheBuffer != nullptr, ResultNullptrArgument());
  return MountDataImpl(name, dataId, storageId, cacheBuffer, cacheBufferSize,
    true, isDataCacheEnabled, isPathCacheEnabled,
    std::unique_ptr<fsa::IUnmountHookInvoker>());
}

Result MountData(const char* name, ncm::DataId dataId,
  ncm::StorageId storageId, void* cacheBuffer, size_t cacheBufferSize,
  bool isDataCacheEnabled, bool isPathCacheEnabled,
  std::unique_ptr<fsa::IUnmountHookInvoker>&& unmountHookInvoker) {
  NN_FS_RESULT_DO(CheckMountName(name));
  NN_FS_RESULT_THROW_UNLESS(cacheBuffer != nullptr, ResultNullptrArgument());
  return MountDataImpl(name, dataId, storageId, cacheBuffer, cacheBufferSize,
    true, isDataCacheEnabled, isPathCacheEnabled,
    std::move(unmountHookInvoker));
}

}

}
