#include "nn/hid/detail/hid_abort.hpp"
#include "nn/hid/detail/hid_api.hpp"
#include "nn/hid/detail/hid_npad_id.hpp"
#include "nn/hid/detail/hid_utility.hpp"

namespace nn::hid {

void InitializeConsoleSixAxisSensor() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::detail::InitializeConsoleSixAxisSensor());
}

void StartSixAxisSensor(
  const ConsoleSixAxisSensorHandle& consoleSixAxisSensorHandle) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::detail::StartSixAxisSensor(consoleSixAxisSensorHandle));
}

void StopSixAxisSensor(
  const ConsoleSixAxisSensorHandle& consoleSixAxisSensorHandle) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::detail::StopSixAxisSensor(consoleSixAxisSensorHandle));
}

void InitializeSevenSixAxisSensor(void* pOutVoid, unsigned long size) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::detail::InitializeSevenSixAxisSensor(pOutVoid, size));
}

void FinalizeSevenSixAxisSensor() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::detail::FinalizeSevenSixAxisSensor());
}

Result StartSevenSixAxisSensor() {
  return hid::detail::StartSevenSixAxisSensor();
}

void StopSevenSixAxisSensor() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::detail::StopSevenSixAxisSensor());
}

int GetSevenSixAxisSensorStates(
  SevenSixAxisSensorState* pOutSevenSixAxisSensorState, int count) {
  int value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::detail::GetSevenSixAxisSensorStates(
    &value, pOutSevenSixAxisSensorState, count));
  return value;
}

bool IsSevenSixAxisSensorAtRest() {
  bool value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::detail::IsSevenSixAxisSensorAtRest(&value));
  return value;
}

void ResetSevenSixAxisSensorTimestamp() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::detail::ResetSevenSixAxisSensorTimestamp());
}

Result SetSevenSixAxisSensorFusionStrength(float value) {
  return hid::detail::SetSevenSixAxisSensorFusionStrength(value);
}

Result GetSevenSixAxisSensorFusionStrength(float* pOutFloat) {
  return hid::detail::GetSevenSixAxisSensorFusionStrength(pOutFloat);
}

void StartSixAxisSensor(const SixAxisSensorHandle& sixAxisSensorHandle) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::detail::StartSixAxisSensor(sixAxisSensorHandle));
}

void StopSixAxisSensor(const SixAxisSensorHandle& sixAxisSensorHandle) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::detail::StopSixAxisSensor(sixAxisSensorHandle));
}

bool IsSixAxisSensorFusionEnabled(
  const SixAxisSensorHandle& sixAxisSensorHandle) {
  bool value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::detail::IsSixAxisSensorFusionEnabled(&value, sixAxisSensorHandle));
  return value;
}

void EnableSixAxisSensorFusion(
  const SixAxisSensorHandle& sixAxisSensorHandle, bool isEnabled) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::detail::EnableSixAxisSensorFusion(sixAxisSensorHandle, isEnabled));
}

void SetSixAxisSensorFusionParameters(
  const SixAxisSensorHandle& sixAxisSensorHandle, float value, float value2) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::detail::SetSixAxisSensorFusionParameters(
    sixAxisSensorHandle, value, value2));
}

void GetSixAxisSensorFusionParameters(float* pOutFloat, float* pOutFloat2,
  const SixAxisSensorHandle& sixAxisSensorHandle) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::detail::GetSixAxisSensorFusionParameters(
    pOutFloat, pOutFloat2, sixAxisSensorHandle));
}

void ResetSixAxisSensorFusionParameters(
  const SixAxisSensorHandle& sixAxisSensorHandle) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::detail::ResetSixAxisSensorFusionParameters(sixAxisSensorHandle));
}

void EnableSixAxisSensorPassthrough(
  const SixAxisSensorHandle& sixAxisSensorHandle, bool isEnabled) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::detail::EnableSixAxisSensorPassthrough(
    sixAxisSensorHandle, isEnabled));
}

bool IsSixAxisSensorPassthroughEnabled(
  const SixAxisSensorHandle& sixAxisSensorHandle) {
  bool value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::detail::IsSixAxisSensorPassthroughEnabled(
    &value, sixAxisSensorHandle));
  return value;
}

void SetGyroscopeZeroDriftMode(const SixAxisSensorHandle& sixAxisSensorHandle,
  const GyroscopeZeroDriftMode& gyroscopeZeroDriftMode) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::detail::SetGyroscopeZeroDriftMode(
    sixAxisSensorHandle, gyroscopeZeroDriftMode));
}

GyroscopeZeroDriftMode GetGyroscopeZeroDriftMode(
  const SixAxisSensorHandle& sixAxisSensorHandle) {
  GyroscopeZeroDriftMode value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::detail::GetGyroscopeZeroDriftMode(&value, sixAxisSensorHandle));
  return value;
}

void GetSixAxisSensorState(SixAxisSensorState* pOutSixAxisSensorState,
  const SixAxisSensorHandle& sixAxisSensorHandle) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::detail::GetSixAxisSensorState(
    pOutSixAxisSensorState, sixAxisSensorHandle));
}

int GetSixAxisSensorStates(SixAxisSensorState* pOutSixAxisSensorState,
  int count, const SixAxisSensorHandle& sixAxisSensorHandle) {
  int value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::detail::GetSixAxisSensorStates(
    &value, pOutSixAxisSensorState, count, sixAxisSensorHandle));
  return value;
}

bool IsSixAxisSensorAtRest(const SixAxisSensorHandle& sixAxisSensorHandle) {
  bool value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::detail::IsSixAxisSensorAtRest(&value, sixAxisSensorHandle));
  return value;
}

bool IsFirmwareUpdateAvailableForSixAxisSensor(
  const SixAxisSensorHandle& sixAxisSensorHandle) {
  bool value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::detail::IsFirmwareUpdateAvailableForSixAxisSensor(
      &value, sixAxisSensorHandle));
  return value;
}

Result StoreSixAxisSensorCalibrationParameter(
  const SixAxisSensorHandle& sixAxisSensorHandle,
  const SixAxisSensorCalibrationParameter& sixAxisSensorCalibrationParameter) {
  return hid::detail::StoreSixAxisSensorCalibrationParameter(
    sixAxisSensorHandle, sixAxisSensorCalibrationParameter);
}

Result LoadSixAxisSensorCalibrationParameter(
  SixAxisSensorCalibrationParameter* pOutSixAxisSensorCalibrationParameter,
  const SixAxisSensorHandle& sixAxisSensorHandle) {
  return hid::detail::LoadSixAxisSensorCalibrationParameter(
    pOutSixAxisSensorCalibrationParameter, sixAxisSensorHandle);
}

Result GetSixAxisSensorIcInformation(
  SixAxisSensorIcInformation* pOutSixAxisSensorIcInformation,
  const SixAxisSensorHandle& sixAxisSensorHandle) {
  return hid::detail::GetSixAxisSensorIcInformation(
    pOutSixAxisSensorIcInformation, sixAxisSensorHandle);
}

void ResetIsSixAxisSensorDeviceNewlyAssigned(
  const SixAxisSensorHandle& sixAxisSensorHandle) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::detail::ResetIsSixAxisSensorDeviceNewlyAssigned(sixAxisSensorHandle));
}

Result IsSensorFusionInitialized() {
  return hid::IsNpadImuEnabled();
}

Result FinalizeSensorFusion() {
  return hid::DisableNpadImu();
}

}
