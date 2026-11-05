#pragma once

#include <stddef.h>

#include <memory>

#include "nn/fs/fsa/fs_iunmount_hook_invoker.hpp"
#include "nn/ncm/ncm_ids.hpp"
#include "nn/result.hpp"

namespace nn::fs {

namespace detail {

Result QueryMountDataCacheSize(size_t* outSize, ncm::DataId dataId,
  ncm::StorageId storageId);
Result MountData(const char* name, ncm::DataId dataId,
  ncm::StorageId storageId);
Result MountData(const char* name, ncm::DataId dataId,
  ncm::StorageId storageId, void* cacheBuffer, size_t cacheBufferSize);
Result MountData(const char* name, ncm::DataId dataId,
  ncm::StorageId storageId, void* cacheBuffer, size_t cacheBufferSize,
  bool isDataCacheEnabled, bool isPathCacheEnabled);
Result MountData(const char* name, ncm::DataId dataId,
  ncm::StorageId storageId, void* cacheBuffer, size_t cacheBufferSize,
  bool isDataCacheEnabled, bool isPathCacheEnabled,
  std::unique_ptr<fsa::IUnmountHookInvoker>&& unmountHookInvoker);

}

Result QueryMountSystemDataCacheSize(size_t* outSize,
  ncm::SystemDataId systemDataId);
Result MountSystemData(const char* name, ncm::SystemDataId systemDataId);
Result MountSystemData(const char* name, ncm::SystemDataId systemDataId,
  void* cacheBuffer, size_t cacheBufferSize);

}
