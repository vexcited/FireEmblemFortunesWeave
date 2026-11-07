#include "nn/hid/detail/hid_abort.hpp"
#include "nn/hid/detail/hid_api.hpp"
#include "nn/hid/detail/hid_npad_id.hpp"
#include "nn/hid/detail/hid_utility.hpp"

namespace nn::hid::system {

void GetAnalogStickState(AnalogStickState* pOutAnalogStickState,
  UniquePadId uniquePadId, AnalogStickPosition analogStickPosition) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::system::detail::GetAnalogStickState(
    pOutAnalogStickState, uniquePadId, analogStickPosition));
}

bool IsAnalogStickButtonPressed(
  UniquePadId uniquePadId, AnalogStickPosition analogStickPosition) {
  bool value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::IsAnalogStickButtonPressed(
      &value, uniquePadId, analogStickPosition));
  return value;
}

Result GetAnalogStickManualCalibrationStage(
  AnalogStickManualCalibrationStage* pOutAnalogStickManualCalibrationStage,
  UniquePadId uniquePadId, AnalogStickPosition analogStickPosition) {
  return hid::system::detail::GetAnalogStickManualCalibrationStage(
    pOutAnalogStickManualCalibrationStage, uniquePadId, analogStickPosition);
}

// Only a busy calibration aborts, other failures are ignored.
void StartAnalogStickManualCalibration(
  UniquePadId uniquePadId, AnalogStickPosition analogStickPosition) {
  const Result result = hid::system::detail::StartAnalogStickManualCalibration(
    uniquePadId, analogStickPosition);
  NN_ABORT_UNLESS(
    result.IsSuccess() || (result.value & 0x3fffff) != 0x14cca);
}

void ResetAnalogStickManualCalibration(
  UniquePadId uniquePadId, AnalogStickPosition analogStickPosition) {
  const Result result = hid::system::detail::ResetAnalogStickManualCalibration(
    uniquePadId, analogStickPosition);
  NN_ABORT_UNLESS(
    result.IsSuccess() || (result.value & 0x3fffff) != 0x14cca);
}

void RetryCurrentAnalogStickManualCalibrationStage(
  UniquePadId uniquePadId, AnalogStickPosition analogStickPosition) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::RetryCurrentAnalogStickManualCalibrationStage(
      uniquePadId, analogStickPosition));
}

void CancelAnalogStickManualCalibration(
  UniquePadId uniquePadId, AnalogStickPosition analogStickPosition) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::CancelAnalogStickManualCalibration(
      uniquePadId, analogStickPosition));
}

bool IsAnalogStickInReleasePosition(
  UniquePadId uniquePadId, AnalogStickPosition analogStickPosition) {
  bool value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::IsAnalogStickInReleasePosition(
      &value, uniquePadId, analogStickPosition));
  return value;
}

bool IsAnalogStickInCircumference(
  UniquePadId uniquePadId, AnalogStickPosition analogStickPosition) {
  bool value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::IsAnalogStickInCircumference(
      &value, uniquePadId, analogStickPosition));
  return value;
}

void InitializeFirmwareUpdate() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::InitializeFirmwareUpdate());
}

Result StartFirmwareUpdate(
  FirmwareUpdateDeviceHandle* pOutFirmwareUpdateDeviceHandle,
  UniquePadId uniquePadId) {
  return hid::system::detail::StartFirmwareUpdate(
    pOutFirmwareUpdateDeviceHandle, uniquePadId);
}

Result AbortFirmwareUpdate() {
  return hid::system::detail::AbortFirmwareUpdate();
}

Result GetFirmwareVersion(
  FirmwareVersion* pOutFirmwareVersion, UniquePadId uniquePadId) {
  return hid::system::detail::GetFirmwareVersion(
    pOutFirmwareVersion, uniquePadId);
}

Result GetFirmwareVersionString(
  FirmwareVersionString* pOutFirmwareVersionString, UniquePadId uniquePadId) {
  return hid::system::detail::GetFirmwareVersionString(
    pOutFirmwareVersionString, uniquePadId);
}

Result GetFirmwareVersionStringForUserSupportPage(
  FirmwareVersionString* pOutFirmwareVersionString, UniquePadId uniquePadId) {
  return hid::system::detail::GetFirmwareVersionStringForUserSupportPage(
    pOutFirmwareVersionString, uniquePadId);
}

Result GetAvailableFirmwareVersion(
  FirmwareVersion* pOutFirmwareVersion, UniquePadId uniquePadId) {
  return hid::system::detail::GetAvailableFirmwareVersion(
    pOutFirmwareVersion, uniquePadId);
}

Result GetAvailableFirmwareVersionString(
  FirmwareVersionString* pOutFirmwareVersionString, UniquePadId uniquePadId) {
  return hid::system::detail::GetAvailableFirmwareVersionString(
    pOutFirmwareVersionString, uniquePadId);
}

Result IsFirmwareUpdateAvailable(bool* pOutBool, UniquePadId uniquePadId) {
  return hid::system::detail::IsFirmwareUpdateAvailable(pOutBool, uniquePadId);
}

Result CheckFirmwareUpdateRequired(
  FirmwareUpdateRequiredReason* pOutFirmwareUpdateRequiredReason,
  UniquePadId uniquePadId) {
  return hid::system::detail::CheckFirmwareUpdateRequired(
    pOutFirmwareUpdateRequiredReason, uniquePadId);
}

Result GetFirmwareUpdateState(FirmwareUpdateState* pOutFirmwareUpdateState,
  const FirmwareUpdateDeviceHandle& firmwareUpdateDeviceHandle) {
  return hid::system::detail::GetFirmwareUpdateState(
    pOutFirmwareUpdateState, firmwareUpdateDeviceHandle);
}

void SetFirmwareHotfixUpdateSkipEnabled(bool isEnabled) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::SetFirmwareHotfixUpdateSkipEnabled(isEnabled));
}

void InitializeUsbFirmwareUpdate() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::InitializeUsbFirmwareUpdate());
}

void FinalizeUsbFirmwareUpdate() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::FinalizeUsbFirmwareUpdate());
}

Result CheckUsbFirmwareUpdateRequired(
  FirmwareUpdateRequiredReason* pOutFirmwareUpdateRequiredReason) {
  return hid::system::detail::CheckUsbFirmwareUpdateRequired(
    pOutFirmwareUpdateRequiredReason);
}

Result StartUsbFirmwareUpdate() {
  return hid::system::detail::StartUsbFirmwareUpdate();
}

Result GetUsbFirmwareUpdateState(
  FirmwareUpdateState* pOutFirmwareUpdateState, int* pOutInt, int* pOutInt2) {
  return hid::system::detail::GetUsbFirmwareUpdateState(
    pOutFirmwareUpdateState, pOutInt, pOutInt2);
}

void BindUniquePadConnectionEvent(
  os::SystemEventType* pOutSystemEventType, os::EventClearMode eventClearMode) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::BindUniquePadConnectionEvent(
      pOutSystemEventType, eventClearMode));
}

int ListUniquePads(UniquePadId* pOutUniquePadId, int count) {
  int value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::ListUniquePads(&value, pOutUniquePadId, count));
  return value;
}

UniquePadType GetUniquePadType(UniquePadId uniquePadId) {
  UniquePadType value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::GetUniquePadType(&value, uniquePadId));
  return value;
}

Result GetUniquePadInterface(
  UniquePadInterface* pOutUniquePadInterface, UniquePadId uniquePadId) {
  return hid::system::detail::GetUniquePadInterface(
    pOutUniquePadInterface, uniquePadId);
}

Result GetUniquePadControllerNumber(int* pOutInt, UniquePadId uniquePadId) {
  return hid::system::detail::GetUniquePadControllerNumber(
    pOutInt, uniquePadId);
}

Result GetUniquePadSerialNumber(
  UniquePadSerialNumber* pOutUniquePadSerialNumber, UniquePadId uniquePadId) {
  return hid::system::detail::GetUniquePadSerialNumber(
    pOutUniquePadSerialNumber, uniquePadId);
}

Result DisconnectUniquePad(UniquePadId uniquePadId) {
  return hid::system::detail::DisconnectUniquePad(uniquePadId);
}

int ListSixAxisSensorHandles(
  UniqueSixAxisSensorHandle* pOutUniqueSixAxisSensorHandle,
  const UniquePadId& uniquePadId, int count) {
  int value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::system::detail::ListSixAxisSensorHandles(
    &value, pOutUniqueSixAxisSensorHandle, uniquePadId, count));
  return value;
}

Result GetConsoleUniqueSixAxisSensorHandle(
  UniqueSixAxisSensorHandle* pOutUniqueSixAxisSensorHandle) {
  return hid::system::detail::GetConsoleUniqueSixAxisSensorHandle(
    pOutUniqueSixAxisSensorHandle);
}

bool IsSixAxisSensorUserCalibrationSupported(
  const UniqueSixAxisSensorHandle& uniqueSixAxisSensorHandle) {
  bool value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::IsSixAxisSensorUserCalibrationSupported(
      &value, uniqueSixAxisSensorHandle));
  return value;
}

Result ResetSixAxisSensorCalibrationValues(
  const UniqueSixAxisSensorHandle& uniqueSixAxisSensorHandle) {
  return hid::system::detail::ResetSixAxisSensorCalibrationValues(
    uniqueSixAxisSensorHandle);
}

Result StartSixAxisSensorUserCalibration(
  const UniqueSixAxisSensorHandle& uniqueSixAxisSensorHandle) {
  return hid::system::detail::StartSixAxisSensorUserCalibration(
    uniqueSixAxisSensorHandle);
}

Result GetSixAxisSensorUserCalibrationStage(
  SixAxisSensorUserCalibrationStage* pOutSixAxisSensorUserCalibrationStage,
  const UniqueSixAxisSensorHandle& uniqueSixAxisSensorHandle) {
  return hid::system::detail::GetSixAxisSensorUserCalibrationStage(
    pOutSixAxisSensorUserCalibrationStage, uniqueSixAxisSensorHandle);
}

Result CancelSixAxisSensorUserCalibration(
  const UniqueSixAxisSensorHandle& uniqueSixAxisSensorHandle) {
  return hid::system::detail::CancelSixAxisSensorUserCalibration(
    uniqueSixAxisSensorHandle);
}

bool IsSixAxisSensorAccurateUserCalibrationSupported(
  const UniqueSixAxisSensorHandle& uniqueSixAxisSensorHandle) {
  bool value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::IsSixAxisSensorAccurateUserCalibrationSupported(
      &value, uniqueSixAxisSensorHandle));
  return value;
}

Result StartSixAxisSensorAccurateUserCalibration(
  const UniqueSixAxisSensorHandle& uniqueSixAxisSensorHandle) {
  return hid::system::detail::StartSixAxisSensorAccurateUserCalibration(
    uniqueSixAxisSensorHandle);
}

void CancelSixAxisSensorAccurateUserCalibration(
  const UniqueSixAxisSensorHandle& uniqueSixAxisSensorHandle) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::CancelSixAxisSensorAccurateUserCalibration(
      uniqueSixAxisSensorHandle));
}

Result GetSixAxisSensorAccurateUserCalibrationState(
  SixAxisSensorAccurateUserCalibrationState*
    pOutSixAxisSensorAccurateUserCalibrationState,
  const UniqueSixAxisSensorHandle& uniqueSixAxisSensorHandle) {
  return hid::system::detail::GetSixAxisSensorAccurateUserCalibrationState(
    pOutSixAxisSensorAccurateUserCalibrationState, uniqueSixAxisSensorHandle);
}

Result GetLastActiveUniquePad(UniquePadId* pOutUniquePadId) {
  return hid::system::detail::GetLastActiveUniquePad(pOutUniquePadId);
}

Result GetUniquePadColor(
  ControllerColor* pOutControllerColor, UniquePadId uniquePadId) {
  return hid::system::detail::GetUniquePadColor(
    pOutControllerColor, uniquePadId);
}

Result GetUniquePadColor12(
  ControllerColor12* pOutControllerColor12, UniquePadId uniquePadId) {
  return hid::system::detail::GetUniquePadColor12(
    pOutControllerColor12, uniquePadId);
}

Result GetUniquePadSkuType(
  unsigned char* pOutUnsignedchar, UniquePadId uniquePadId) {
  return hid::system::detail::GetUniquePadSkuType(
    pOutUnsignedchar, uniquePadId);
}

void BindUniquePadConnectionEventOnHandheldForNs(
  os::SystemEventType* pOutSystemEventType, os::EventClearMode eventClearMode) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::BindUniquePadConnectionEventOnHandheldForNs(
      pOutSystemEventType, eventClearMode));
}

int ListOunceJoyConGripUniquePads(UniquePadId* pOutUniquePadId, int count) {
  int value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::ListOunceJoyConGripUniquePads(
      &value, pOutUniquePadId, count));
  return value;
}

Result GetOunceJoyConUniquePadIdsFromGripId(int* pOutInt,
  UniquePadId* pOutUniquePadId, int count, UniquePadId uniquePadId) {
  return hid::system::detail::GetOunceJoyConUniquePadIdsFromGripId(
    pOutInt, pOutUniquePadId, count, uniquePadId);
}

void BeginPermitVibrationSession() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::detail::BeginPermitVibrationSession());
}

void EndPermitVibrationSession() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::detail::EndPermitVibrationSession());
}

void PermitVibration(bool isEnabled) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::detail::PermitVibration(isEnabled));
}

void SetAruidValidForVibration(
  const applet::AppletResourceUserId& appletResourceUserId, bool isEnabled) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::system::detail::SetAruidValidForVibration(
    appletResourceUserId, isEnabled));
}

void EnableAppletToGetSixAxisSensor(
  const applet::AppletResourceUserId& appletResourceUserId, bool isEnabled) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::EnableAppletToGetSixAxisSensor(
      appletResourceUserId, isEnabled));
}

void SetForceHandheldStyleVibration(bool isEnabled) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::SetForceHandheldStyleVibration(isEnabled));
}

bool IsFirmwareAvailableForNotification(UniquePadId uniquePadId) {
  bool value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::IsFirmwareAvailableForNotification(
      &value, uniquePadId));
  return value;
}

}
