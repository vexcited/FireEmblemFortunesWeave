#include "nn/fs/fs_access_failure.hpp"
#include "nn/fs/detail/fs_file_system_proxy_service_object.hpp"
#include "nn/fs/detail/fs_log.hpp"

namespace nn::fs {

namespace {

constexpr Result ResultAccessFailureTargetNotFound() {
  return detail::MakeResult(3006);
}

}

Result GetAccessFailureDetectionEvent(os::SystemEvent* outEvent) {
  auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
  nn::sf::NativeHandle handle;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(
    fileSystemProxy->GetAccessFailureDetectionEvent(
      nn::sf::Out<nn::sf::NativeHandle>(&handle)));
  outEvent->AttachReadableHandle(handle.GetOsHandle(), handle.IsManaged(),
    os::EventClearMode_ManualClear);
  handle.Detach();
  return ResultSuccess();
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
  if (IsResultIncluded(result, ResultAccessFailureTargetNotFound())) {
    return;
  }
  NN_FS_ABORT_UNLESS_RESULT_SUCCESS_WITH_LOG(result);
}

void AbandonAccessFailure(uint64_t processId) {
  auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
  NN_FS_ABORT_UNLESS_RESULT_SUCCESS_WITH_LOG(
    fileSystemProxy->AbandonAccessFailure(processId));
}

Result OpenAccessFailureResolver(
  std::unique_ptr<AccessFailureResolver>* outResolver, uint64_t processId,
  bool notifyOnDeepRetry) {
  auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
  nn::sf::SharedPointer<fssrv::sf::IEventNotifier> notifier;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(
    fileSystemProxy->OpenAccessFailureDetectionEventNotifier(
      nn::sf::Out<nn::sf::SharedPointer<fssrv::sf::IEventNotifier>>(
        &notifier), processId, notifyOnDeepRetry));
  outResolver->reset(new AccessFailureResolver(notifier, processId));
  NN_FS_RESULT_THROW_UNLESS_WITH_ABORT_CHECK(*outResolver != nullptr,
    ResultAllocationMemoryFailedNew());
  return ResultSuccess();
}

}
