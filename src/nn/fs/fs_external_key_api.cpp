#include "nn/fs/detail/fs_file_system_proxy_service_object.hpp"
#include "nn/fs/detail/fs_log.hpp"

namespace nn::fs {

Result RegisterExternalKey(const RightsId& rightsId,
  const ExternalKeySource& keySource) {
  auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(fileSystemProxy->RegisterExternalKey(
    rightsId, keySource));
  return ResultSuccess();
}

Result UnregisterExternalKey(const RightsId& rightsId) {
  auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(fileSystemProxy->UnregisterExternalKey(
    rightsId));
  return ResultSuccess();
}

Result UnregisterAllExternalKey() {
  auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(
    fileSystemProxy->UnregisterAllExternalKey());
  return ResultSuccess();
}

Result TestExternalKey(const RightsId& rightsId,
  const ExternalKeySource& keySource) {
  auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(fileSystemProxy->TestExternalKey(rightsId,
    keySource));
  return ResultSuccess();
}

}
