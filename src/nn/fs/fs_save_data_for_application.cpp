#include "nn/fs/detail/fs_log.hpp"
#include "nn/fs/fs_save_data.hpp"

namespace nn::fs {

namespace {

// Also used by the cache storage creation, so it stays out of line.
[[gnu::noinline]] Result GetCacheStorageTargetMediaImpl(CacheStorageTargetMedia* outValue,
  ncm::ApplicationId applicationId) {
  if (IsSdCardAccessible()) {
    SaveDataFilter filter = {};
    NN_FS_RESULT_DO(SaveDataFilter::Make(&filter, applicationId.value,
      SaveDataType::Cache, util::optional<UserId>(),
      util::optional<uint64_t>(), util::optional<uint16_t>()));
    SaveDataInfo info = {};
    const Result result = detail::FindSaveDataWithFilter(&info,
      SaveDataSpaceId::SdUser, filter);
    if (IsSuccess(result)) {
      *outValue = CacheStorageTargetMedia_SdCard;
      return ResultSuccess();
    }
    if (!IsResultIncluded(result, ResultTargetNotFound())) {
      return result;
    }
  }
  SaveDataFilter filter = {};
  NN_FS_RESULT_DO(SaveDataFilter::Make(&filter, applicationId.value,
    SaveDataType::Cache, util::optional<UserId>(),
    util::optional<uint64_t>(), util::optional<uint16_t>()));
  SaveDataInfo info = {};
  const Result result = detail::FindSaveDataWithFilter(&info,
    SaveDataSpaceId::User, filter);
  if (IsSuccess(result) || IsResultIncluded(result, ResultTargetNotFound())) {
    *outValue = IsSuccess(result) ? CacheStorageTargetMedia_Nand :
      CacheStorageTargetMedia_None;
    return ResultSuccess();
  }
  return result;
}

}

Result GetCacheStorageTargetMedia(CacheStorageTargetMedia* outValue,
  ncm::ApplicationId applicationId) {
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(GetCacheStorageTargetMediaImpl(outValue,
    applicationId));
  return ResultSuccess();
}

Result CleanUpTemporaryStorage() {
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(detail::CleanUpTemporaryStorageImpl());
  return ResultSuccess();
}

}
