#include "nn/fs/detail/fs_log.hpp"
#include "nn/fs/fs_data.hpp"

namespace nn::fs {

Result QueryMountSystemDataCacheSize(size_t* outSize,
  ncm::SystemDataId systemDataId) {
  Result result;
  NN_FS_ACCESS_LOG_SYSTEM(result,
    detail::QueryMountDataCacheSize(outSize, ncm::DataId{systemDataId.value},
      ncm::StorageId::BuiltInSystem),
    ", systemdataid: 0x%lX, size: %zu", systemDataId.value,
    outSize != nullptr && IsSuccess(result) ? *outSize : 0);
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);
  return ResultSuccess();
}

Result MountSystemData(const char* name, ncm::SystemDataId systemDataId) {
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(detail::MountData(name,
    ncm::DataId{systemDataId.value}, ncm::StorageId::BuiltInSystem));
  return ResultSuccess();
}

Result MountSystemData(const char* name, ncm::SystemDataId systemDataId,
  void* cacheBuffer, size_t cacheBufferSize) {
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(detail::MountData(name,
    ncm::DataId{systemDataId.value}, ncm::StorageId::BuiltInSystem,
    cacheBuffer, cacheBufferSize));
  return ResultSuccess();
}

}
