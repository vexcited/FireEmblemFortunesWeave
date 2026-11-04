#include <memory>

#include "nn/fs/detail/fs_event_notifier_object_adapter.hpp"
#include "nn/fs/detail/fs_file_system_proxy_service_object.hpp"
#include "nn/fs/detail/fs_log.hpp"

namespace nn::fs {

namespace {

constexpr Result ResultAllocationMemoryFailedInEventNotifier() {
  return detail::MakeResult(3225);
}

typedef nn::sf::SharedPointer<fssrv::sf::IEventNotifier> EventNotifierObject;

}

Result OpenGameCardDetectionEventNotifier(
  std::unique_ptr<IEventNotifier>* outNotifier) {
  auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
  EventNotifierObject notifier;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(
    fileSystemProxy->OpenGameCardDetectionEventNotifier(
      nn::sf::Out<EventNotifierObject>(&notifier)));
  outNotifier->reset(
    new detail::EventNotifierObjectAdapter(static_cast<EventNotifierObject&&>(
      notifier)));
  NN_FS_RESULT_THROW_UNLESS_WITH_ABORT_CHECK(*outNotifier != nullptr,
    ResultAllocationMemoryFailedInEventNotifier());
  return ResultSuccess();
}

Result OpenGameCardAwakenReadyEventNotifier(
  std::unique_ptr<IEventNotifier>* outNotifier) {
  auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
  EventNotifierObject notifier;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(
    fileSystemProxy->OpenGameCardAwakenReadyEventNotifier(
      nn::sf::Out<EventNotifierObject>(&notifier)));
  outNotifier->reset(
    new detail::EventNotifierObjectAdapter(static_cast<EventNotifierObject&&>(
      notifier)));
  NN_FS_RESULT_THROW_UNLESS_WITH_ABORT_CHECK(*outNotifier != nullptr,
    ResultAllocationMemoryFailedInEventNotifier());
  return ResultSuccess();
}

Result OpenSdCardAwakenReadyEventNotifier(
  std::unique_ptr<IEventNotifier>* outNotifier) {
  auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
  EventNotifierObject notifier;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(
    fileSystemProxy->OpenSdCardAwakenReadyEventNotifier(
      nn::sf::Out<EventNotifierObject>(&notifier)));
  outNotifier->reset(
    new detail::EventNotifierObjectAdapter(static_cast<EventNotifierObject&&>(
      notifier)));
  NN_FS_RESULT_THROW_UNLESS_WITH_ABORT_CHECK(*outNotifier != nullptr,
    ResultAllocationMemoryFailedInEventNotifier());
  return ResultSuccess();
}

Result OpenSystemDataUpdateEventNotifier(
  std::unique_ptr<IEventNotifier>* outNotifier) {
  auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
  EventNotifierObject notifier;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(
    fileSystemProxy->OpenSystemDataUpdateEventNotifier(
      nn::sf::Out<EventNotifierObject>(&notifier)));
  outNotifier->reset(
    new detail::EventNotifierObjectAdapter(static_cast<EventNotifierObject&&>(
      notifier)));
  NN_FS_RESULT_THROW_UNLESS_WITH_ABORT_CHECK(*outNotifier != nullptr,
    ResultAllocationMemoryFailedInEventNotifier());
  return ResultSuccess();
}

Result OpenAccessFailureDetectionEventNotifier(
  std::unique_ptr<IEventNotifier>* outNotifier, uint64_t processId,
  bool notifyOnDeepRetry) {
  auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
  EventNotifierObject notifier;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(
    fileSystemProxy->OpenAccessFailureDetectionEventNotifier(
      nn::sf::Out<EventNotifierObject>(&notifier), processId,
      notifyOnDeepRetry));
  outNotifier->reset(
    new detail::EventNotifierObjectAdapter(static_cast<EventNotifierObject&&>(
      notifier)));
  NN_FS_RESULT_THROW_UNLESS_WITH_ABORT_CHECK(*outNotifier != nullptr,
    ResultAllocationMemoryFailedInEventNotifier());
  return ResultSuccess();
}

}
