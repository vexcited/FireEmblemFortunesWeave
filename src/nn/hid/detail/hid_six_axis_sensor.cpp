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

namespace nn::hid::detail {

Result SetSevenSixAxisSensorFusionStrength(float value) {
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  return proxy->SetSevenSixAxisSensorFusionStrength(utility::GetAppletResourceUserId(), value);
}

namespace {

constexpr Result ResultAccelerometerOutOfRange = {0x34aca};
constexpr Result ResultAccelerometerPlayOutOfRange = {0x34cca};
constexpr Result ResultSixAxisSensorFusionRevisePowerOutOfRange = {0x34eca};

}

Result SetSixAxisSensorFusionParameters(
  const SixAxisSensorHandle& sixAxisSensorHandle, float revisePower,
  float reviseRange) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    utility::VerifyValidSixAxisSensorHandle(sixAxisSensorHandle));
  if (revisePower < 0.0f || revisePower > 1.0f) {
    return ResultSixAxisSensorFusionRevisePowerOutOfRange;
  }
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  return proxy->SetSixAxisSensorFusionParameters(
    utility::GetAppletResourceUserId(), sixAxisSensorHandle, revisePower,
    reviseRange);
}

Result GetSixAxisSensorFusionParameters(float* pOutRevisePower,
  float* pOutReviseRange, const SixAxisSensorHandle& sixAxisSensorHandle) {
  NN_ABORT_UNLESS_NOT_NULL(pOutRevisePower);
  NN_ABORT_UNLESS_NOT_NULL(pOutReviseRange);
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    utility::VerifyValidSixAxisSensorHandle(sixAxisSensorHandle));
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  float revisePower = 0.0f;
  float reviseRange = 0.0f;
  const Result result = proxy->GetSixAxisSensorFusionParameters(
    &revisePower, &reviseRange, utility::GetAppletResourceUserId(),
    sixAxisSensorHandle);
  if (result.IsSuccess()) {
    *pOutRevisePower = revisePower;
    *pOutReviseRange = reviseRange;
  }
  return result;
}

Result SetAccelerometerParameters(SixAxisSensorHandle sixAxisSensorHandle,
  float playRadius, float sensitivity) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    utility::VerifyValidSixAxisSensorHandle(sixAxisSensorHandle));
  if (playRadius < 0.0f) {
    return ResultAccelerometerOutOfRange;
  }
  if (sensitivity < 0.0f || sensitivity > 1.0f) {
    return ResultAccelerometerPlayOutOfRange;
  }
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  return proxy->SetAccelerometerParameters(
    utility::GetAppletResourceUserId(), sixAxisSensorHandle, playRadius,
    sensitivity);
}

Result GetAccelerometerParameters(float* pOutPlayRadius,
  float* pOutSensitivity, SixAxisSensorHandle sixAxisSensorHandle) {
  NN_ABORT_UNLESS_NOT_NULL(pOutPlayRadius);
  NN_ABORT_UNLESS_NOT_NULL(pOutSensitivity);
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    utility::VerifyValidSixAxisSensorHandle(sixAxisSensorHandle));
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  float playRadius = 0.0f;
  float sensitivity = 0.0f;
  const Result result = proxy->GetAccelerometerParameters(&playRadius,
    &sensitivity, utility::GetAppletResourceUserId(), sixAxisSensorHandle);
  if (result.IsSuccess()) {
    *pOutPlayRadius = playRadius;
    *pOutSensitivity = sensitivity;
  }
  return result;
}

Result ResetAccelerometerParameters(SixAxisSensorHandle sixAxisSensorHandle) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    utility::VerifyValidSixAxisSensorHandle(sixAxisSensorHandle));
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  return proxy->ResetAccelerometerParameters(
    utility::GetAppletResourceUserId(), sixAxisSensorHandle);
}

Result SetAccelerometerPlayMode(SixAxisSensorHandle sixAxisSensorHandle,
  debug::AccelerometerPlayMode mode) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    utility::VerifyValidSixAxisSensorHandle(sixAxisSensorHandle));
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  return proxy->SetAccelerometerPlayMode(
    utility::GetAppletResourceUserId(), sixAxisSensorHandle, mode);
}

Result GetAccelerometerPlayMode(debug::AccelerometerPlayMode* pOutMode,
  SixAxisSensorHandle sixAxisSensorHandle) {
  NN_ABORT_UNLESS_NOT_NULL(pOutMode);
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    utility::VerifyValidSixAxisSensorHandle(sixAxisSensorHandle));
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  debug::AccelerometerPlayMode mode = {};
  const Result result = proxy->GetAccelerometerPlayMode(&mode,
    utility::GetAppletResourceUserId(), sixAxisSensorHandle);
  if (result.IsSuccess()) {
    *pOutMode = mode;
  }
  return result;
}

Result ResetAccelerometerPlayMode(SixAxisSensorHandle sixAxisSensorHandle) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    utility::VerifyValidSixAxisSensorHandle(sixAxisSensorHandle));
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  return proxy->ResetAccelerometerPlayMode(
    utility::GetAppletResourceUserId(), sixAxisSensorHandle);
}

Result SetGyroscopeZeroDriftMode(SixAxisSensorHandle sixAxisSensorHandle,
  GyroscopeZeroDriftMode mode) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    utility::VerifyValidSixAxisSensorHandle(sixAxisSensorHandle));
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  return proxy->SetGyroscopeZeroDriftMode(
    utility::GetAppletResourceUserId(), sixAxisSensorHandle, mode);
}

Result GetGyroscopeZeroDriftMode(GyroscopeZeroDriftMode* pOutMode,
  SixAxisSensorHandle sixAxisSensorHandle) {
  NN_ABORT_UNLESS_NOT_NULL(pOutMode);
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    utility::VerifyValidSixAxisSensorHandle(sixAxisSensorHandle));
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  GyroscopeZeroDriftMode mode = {};
  const Result result = proxy->GetGyroscopeZeroDriftMode(&mode,
    utility::GetAppletResourceUserId(), sixAxisSensorHandle);
  if (result.IsSuccess()) {
    *pOutMode = mode;
  }
  return result;
}

Result ResetGyroscopeZeroDriftMode(SixAxisSensorHandle sixAxisSensorHandle) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    utility::VerifyValidSixAxisSensorHandle(sixAxisSensorHandle));
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  return proxy->ResetGyroscopeZeroDriftMode(
    utility::GetAppletResourceUserId(), sixAxisSensorHandle);
}

}
