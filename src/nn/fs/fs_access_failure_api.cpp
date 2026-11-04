#include "nn/fs/detail/fs_file_system_proxy_service_object.hpp"
#include "nn/fs/detail/fs_log.hpp"

namespace nn::fs {

namespace {

constexpr Result ResultTargetNotFound() {
  return detail::MakeResult(3006);
}

}

bool IsAccessFailureDetected(uint64_t processId) {
  auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
  bool isDetected = false;
  NN_FS_ABORT_UNLESS_RESULT_SUCCESS_WITH_LOG(
    fileSystemProxy->IsAccessFailureDetected(nn::sf::Out<bool>(&isDetected),
      processId));
  return isDetected;
}

void ResolveAccessFailure(uint64_t processId) {
  auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
  const Result result = fileSystemProxy->ResolveAccessFailure(processId);
  if (IsResultIncluded(result, ResultTargetNotFound())) {
    return;
  }
  NN_FS_ABORT_UNLESS_RESULT_SUCCESS_WITH_LOG(result);
}

void AbandonAccessFailure(uint64_t processId) {
  auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
  NN_FS_ABORT_UNLESS_RESULT_SUCCESS_WITH_LOG(
    fileSystemProxy->AbandonAccessFailure(processId));
}

}
