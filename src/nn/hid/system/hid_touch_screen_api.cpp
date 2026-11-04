#include "nn/hid/detail/hid_abort.hpp"
#include "nn/hid/detail/hid_api.hpp"
#include "nn/hid/detail/hid_npad_id.hpp"
#include "nn/hid/detail/hid_utility.hpp"

namespace nn::hid::system {

void InitializeTouchScreenForSystemProcess(int count, int count2) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::InitializeTouchScreenForSystemProcess(count, count2));
}

void SetTouchScreenMagnification(
  float value, float value2, float value3, float value4) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::SetTouchScreenMagnification(
      value, value2, value3, value4));
}

void SetTouchScreenOffset(float value, float value2) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::SetTouchScreenOffset(value, value2));
}

void SetTouchScreenDefaultConfigurationForNx(
  const TouchScreenConfigurationForNx& touchScreenConfigurationForNx) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::SetTouchScreenDefaultConfiguration(
      touchScreenConfigurationForNx));
}

Result GetTouchScreenFirmwareVersion(FirmwareVersion* pOutFirmwareVersion) {
  return hid::system::detail::GetTouchScreenFirmwareVersion(
    pOutFirmwareVersion);
}

void StartTouchScreenAutoTuneForSystemSettings() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::StartTouchScreenAutoTuneForSystemSettings());
}

void BindTouchScreenAutoTuneForSystemSettingsCompletedEvent(
  os::SystemEvent* pOutSystemEvent) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::BindTouchScreenAutoTuneForSystemSettingsCompletedEvent(
      pOutSystemEvent));
}

bool IsTouchScreenAutoTuneRequiredForRepairProviderReplacement() {
  bool value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::system::detail::
      IsTouchScreenAutoTuneRequiredForRepairProviderReplacement(&value));
  return value;
}

Result WakeTouchScreenUpAsync() {
  return hid::system::detail::WakeTouchScreenUpAsync();
}

Result PutTouchScreenToSleep() {
  return hid::system::detail::PutTouchScreenToSleep();
}

void BindTouchScreenAsyncWakeCompletedEvent(os::SystemEvent* pOutSystemEvent) {
  const applet::AppletResourceUserId aruid = applet::GetAppletResourceUserId();
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::BindTouchScreenAsyncWakeCompletedEvent(
      pOutSystemEvent, aruid));
}

Result GetDetectedEsdSystemEventType(os::SystemEventType* pOutSystemEventType) {
  return hid::system::detail::GetDetectedEsdSystemEventType(
    pOutSystemEventType);
}

Result ClearDetectedEsdEvent() {
  return hid::system::detail::ClearDetectedEsdEvent();
}

bool IsEsdDetected() {
  bool value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::system::detail::IsEsdDetected(&value));
  return value;
}

Result GetFetchedDisplayStatusReportSystemEventType(
  os::SystemEventType* pOutSystemEventType) {
  return hid::system::detail::GetFetchedDisplayStatusReportSystemEventType(
    pOutSystemEventType);
}

Result RequestToFetchDisplayStatusReport() {
  return hid::system::detail::RequestToFetchDisplayStatusReport();
}

Result GetDisplayStatusReport(DisplayStatusReport* pOutDisplayStatusReport) {
  return hid::system::detail::GetDisplayStatusReport(pOutDisplayStatusReport);
}

void EnableAppletToGetTouchScreen(
  const applet::AppletResourceUserId& appletResourceUserId, bool isEnabled) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::EnableAppletToGetTouchScreen(
      appletResourceUserId, isEnabled));
}

}
