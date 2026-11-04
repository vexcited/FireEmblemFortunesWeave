#include "nn/fs/detail/fs_device_simulation.hpp"
#include "nn/fs/detail/fs_file_system_proxy_service_object.hpp"
#include "nn/fs/detail/fs_log.hpp"

namespace nn::fs {

namespace {

const uint32_t SdCardPort = 1;

}

namespace detail {

Result SetSdCardAccessibility(bool isAccessible) {
  auto fileSystemProxy = GetFileSystemProxyServiceObject();
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(fileSystemProxy->SetSdCardAccessibility(
    isAccessible));
  return ResultSuccess();
}

}

Result FormatSdCardDryRun() {
  auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(fileSystemProxy->FormatSdCardDryRun());
  return ResultSuccess();
}

bool IsExFatSupported() {
  auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
  bool isSupported = false;
  NN_FS_ABORT_UNLESS_RESULT_SUCCESS_WITH_LOG(
    fileSystemProxy->IsExFatSupported(nn::sf::Out<bool>(&isSupported)));
  return isSupported;
}

Result SetSdCardEncryptionSeed(const EncryptionSeed& seed) {
  auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(fileSystemProxy->SetSdCardEncryptionSeed(
    seed));
  return ResultSuccess();
}

void SetSdCardAccessibility(bool isAccessible) {
  NN_FS_ABORT_UNLESS_RESULT_SUCCESS_WITH_LOG(detail::SetSdCardAccessibility(
    isAccessible));
}

bool IsSdCardAccessible() {
  auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
  bool isAccessible = false;
  NN_FS_ABORT_UNLESS_RESULT_SUCCESS_WITH_LOG(
    fileSystemProxy->IsSdCardAccessible(nn::sf::Out<bool>(&isAccessible)));
  return isAccessible;
}

Result DetachSdCard() {
  auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(fileSystemProxy->DetachSdCard());
  return ResultSuccess();
}

Result SimulateSdCardDetectionEvent(SimulatingDeviceDetectionMode mode,
  bool signalEvent) {
  auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(
    fileSystemProxy->SimulateDeviceDetectionEvent(SdCardPort,
      static_cast<uint32_t>(mode), signalEvent));
  return ResultSuccess();
}

Result SetSdCardSimulationEvent(SimulatingDeviceTargetOperation operation,
  SimulatingDeviceAccessFailureEventType failureEventType) {
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(detail::SetDeviceSimulationEvent(
    detail::DevicePort_SdCard, operation, failureEventType, ResultSuccess(),
    false));
  return ResultSuccess();
}

Result SetSdCardSimulationEvent(SimulatingDeviceTargetOperation operation,
  SimulatingDeviceAccessFailureEventType failureEventType,
  bool isPersistent) {
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(detail::SetDeviceSimulationEvent(
    detail::DevicePort_SdCard, operation, failureEventType, ResultSuccess(),
    isPersistent));
  return ResultSuccess();
}

Result SetSdCardSimulationEvent(SimulatingDeviceTargetOperation operation,
  Result respondingFailureResult, bool isPersistent) {
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(detail::SetDeviceSimulationEvent(
    detail::DevicePort_SdCard, operation,
    SimulatingDeviceAccessFailureEventType::AccessFailure,
    respondingFailureResult, isPersistent));
  return ResultSuccess();
}

Result ClearSdCardSimulationEvent() {
  auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
  nn::sf::SharedPointer<fssrv::sf::IDeviceOperator> deviceOperator;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(fileSystemProxy->OpenDeviceOperator(
    nn::sf::Out<nn::sf::SharedPointer<fssrv::sf::IDeviceOperator>>(
      &deviceOperator)));
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(
    deviceOperator->ClearDeviceSimulationEvent(detail::DevicePort_SdCard));
  return ResultSuccess();
}

}
