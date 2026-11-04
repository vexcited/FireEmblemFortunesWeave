#include "nn/hid/detail/hid_abort.hpp"
#include "nn/hid/detail/hid_api.hpp"
#include "nn/hid/detail/hid_npad_id.hpp"
#include "nn/hid/detail/hid_utility.hpp"

namespace nn::hid {

bool IsVibrationPermitted() {
  bool value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::detail::IsVibrationPermitted(&value));
  return value;
}

void BeginForcedVibrationSession() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::detail::BeginPermitVibrationSession());
}

void EndForcedVibrationSession() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::detail::EndPermitVibrationSession());
}

void InitializeVibrationDevice(
  const VibrationDeviceHandle& vibrationDeviceHandle) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::detail::InitializeVibrationDevice(vibrationDeviceHandle));
}

void SendVibrationValue(const VibrationDeviceHandle& vibrationDeviceHandle,
  const VibrationValue& vibrationValue) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::detail::SendVibrationValue(vibrationDeviceHandle, vibrationValue));
}

bool IsVibrationDeviceMounted(
  const VibrationDeviceHandle& vibrationDeviceHandle) {
  bool value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::detail::IsVibrationDeviceMounted(&value, vibrationDeviceHandle));
  return value;
}

bool IsOunceVibrationDeviceMounted(
  const VibrationDeviceHandle& vibrationDeviceHandle) {
  bool value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::detail::IsOunceVibrationDeviceMounted(&value, vibrationDeviceHandle));
  return value;
}

Result CalculateVibrationFileSize(
  const VibrationValueArrayInfo& vibrationValueArrayInfo) {
  return hid::detail::CalculateVibrationFileSize(vibrationValueArrayInfo);
}

void SendVibrationGcErmCommand(
  const VibrationDeviceHandle& vibrationDeviceHandle,
  const VibrationGcErmCommand& vibrationGcErmCommand) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::detail::SendVibrationGcErmCommand(
    vibrationDeviceHandle, vibrationGcErmCommand));
}

}
