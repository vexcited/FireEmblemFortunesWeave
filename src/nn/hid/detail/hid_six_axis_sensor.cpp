#include "nn/hid/detail/hid_abort.hpp"
#include "nn/hid/detail/hid_api.hpp"
#include "nn/hid/detail/hid_server.hpp"
#include "nn/hid/detail/hid_utility.hpp"

namespace nn::hid::detail {

Result StartSixAxisSensor(
  const ConsoleSixAxisSensorHandle& consoleSixAxisSensorHandle) {
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  return proxy->StartSixAxisSensor(
    utility::GetAppletResourceUserId(), consoleSixAxisSensorHandle);
}

Result StopSixAxisSensor(
  const ConsoleSixAxisSensorHandle& consoleSixAxisSensorHandle) {
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  return proxy->StopSixAxisSensor(
    utility::GetAppletResourceUserId(), consoleSixAxisSensorHandle);
}

Result StartSevenSixAxisSensor() {
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  return proxy->StartSevenSixAxisSensor(utility::GetAppletResourceUserId());
}

Result StopSevenSixAxisSensor() {
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  return proxy->StopSevenSixAxisSensor(utility::GetAppletResourceUserId());
}

Result ResetSevenSixAxisSensorTimestamp() {
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  return proxy->ResetSevenSixAxisSensorTimestamp(
    utility::GetAppletResourceUserId());
}

Result GetSevenSixAxisSensorFusionStrength(float* pOutFloat) {
  NN_ABORT_UNLESS_NOT_NULL(pOutFloat);
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  float value = {};
  const Result result = proxy->GetSevenSixAxisSensorFusionStrength(
    &value, utility::GetAppletResourceUserId());
  if (result.IsSuccess()) {
    *pOutFloat = value;
  }
  return result;
}

Result StartSixAxisSensor(const SixAxisSensorHandle& sixAxisSensorHandle) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    utility::VerifyValidSixAxisSensorHandle(sixAxisSensorHandle));
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  return proxy->StartSixAxisSensor(
    utility::GetAppletResourceUserId(), sixAxisSensorHandle);
}

Result StopSixAxisSensor(const SixAxisSensorHandle& sixAxisSensorHandle) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    utility::VerifyValidSixAxisSensorHandle(sixAxisSensorHandle));
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  return proxy->StopSixAxisSensor(
    utility::GetAppletResourceUserId(), sixAxisSensorHandle);
}

Result IsSixAxisSensorFusionEnabled(
  bool* pOutBool, const SixAxisSensorHandle& sixAxisSensorHandle) {
  NN_ABORT_UNLESS_NOT_NULL(pOutBool);
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    utility::VerifyValidSixAxisSensorHandle(sixAxisSensorHandle));
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  bool value = {};
  const Result result = proxy->IsSixAxisSensorFusionEnabled(
    &value, utility::GetAppletResourceUserId(), sixAxisSensorHandle);
  if (result.IsSuccess()) {
    *pOutBool = value;
  }
  return result;
}

Result EnableSixAxisSensorFusion(
  const SixAxisSensorHandle& sixAxisSensorHandle, bool isEnabled) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    utility::VerifyValidSixAxisSensorHandle(sixAxisSensorHandle));
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  return proxy->EnableSixAxisSensorFusion(
    utility::GetAppletResourceUserId(), sixAxisSensorHandle, isEnabled);
}

Result ResetSixAxisSensorFusionParameters(
  const SixAxisSensorHandle& sixAxisSensorHandle) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    utility::VerifyValidSixAxisSensorHandle(sixAxisSensorHandle));
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  return proxy->ResetSixAxisSensorFusionParameters(
    utility::GetAppletResourceUserId(), sixAxisSensorHandle);
}

Result EnableSixAxisSensorPassthrough(
  const SixAxisSensorHandle& sixAxisSensorHandle, bool isEnabled) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    utility::VerifyValidSixAxisSensorHandle(sixAxisSensorHandle));
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  return proxy->EnableSixAxisSensorPassthrough(
    utility::GetAppletResourceUserId(), sixAxisSensorHandle, isEnabled);
}

Result IsSixAxisSensorPassthroughEnabled(
  bool* pOutBool, const SixAxisSensorHandle& sixAxisSensorHandle) {
  NN_ABORT_UNLESS_NOT_NULL(pOutBool);
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    utility::VerifyValidSixAxisSensorHandle(sixAxisSensorHandle));
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  bool value = {};
  const Result result = proxy->IsSixAxisSensorPassthroughEnabled(
    &value, utility::GetAppletResourceUserId(), sixAxisSensorHandle);
  if (result.IsSuccess()) {
    *pOutBool = value;
  }
  return result;
}

Result IsSixAxisSensorAtRest(
  bool* pOutBool, const SixAxisSensorHandle& sixAxisSensorHandle) {
  NN_ABORT_UNLESS_NOT_NULL(pOutBool);
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    utility::VerifyValidSixAxisSensorHandle(sixAxisSensorHandle));
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  bool value = {};
  const Result result = proxy->IsSixAxisSensorAtRest(
    &value, utility::GetAppletResourceUserId(), sixAxisSensorHandle);
  if (result.IsSuccess()) {
    *pOutBool = value;
  }
  return result;
}

Result StoreSixAxisSensorCalibrationParameter(
  const SixAxisSensorHandle& sixAxisSensorHandle,
  const SixAxisSensorCalibrationParameter& sixAxisSensorCalibrationParameter) {
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  return proxy->StoreSixAxisSensorCalibrationParameter(
    utility::GetAppletResourceUserId(), sixAxisSensorHandle,
    sixAxisSensorCalibrationParameter);
}

Result LoadSixAxisSensorCalibrationParameter(
  SixAxisSensorCalibrationParameter* pOutSixAxisSensorCalibrationParameter,
  const SixAxisSensorHandle& sixAxisSensorHandle) {
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  return proxy->LoadSixAxisSensorCalibrationParameter(
    utility::GetAppletResourceUserId(), pOutSixAxisSensorCalibrationParameter,
    sixAxisSensorHandle);
}

Result GetSixAxisSensorIcInformation(
  SixAxisSensorIcInformation* pOutSixAxisSensorIcInformation,
  const SixAxisSensorHandle& sixAxisSensorHandle) {
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  return proxy->GetSixAxisSensorIcInformation(
    utility::GetAppletResourceUserId(), pOutSixAxisSensorIcInformation,
    sixAxisSensorHandle);
}

Result ResetIsSixAxisSensorDeviceNewlyAssigned(
  const SixAxisSensorHandle& sixAxisSensorHandle) {
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  return proxy->ResetIsSixAxisSensorDeviceNewlyAssigned(
    utility::GetAppletResourceUserId(), sixAxisSensorHandle);
}

}
