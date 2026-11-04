#include "nn/hid/detail/hid_abort.hpp"
#include "nn/hid/detail/hid_api.hpp"
#include "nn/hid/detail/hid_npad_id.hpp"
#include "nn/hid/detail/hid_utility.hpp"

namespace nn::hid::system {

AppletResourceProperty GetAppletResourceProperty(
  const applet::AppletResourceUserId& appletResourceUserId) {
  AppletResourceProperty value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::system::detail::GetAppletResourceProperty(
    &value, appletResourceUserId));
  return value;
}

AppletDetailedUiType ConvertAppletDetailedUiTypeFromPlayReportType(
  unsigned int unsignedint) {
  AppletDetailedUiType value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::ConvertAppletDetailedUiTypeFromPlayReportType(
      &value, unsignedint));
  return value;
}

void InitializeGestureForSystemProcess(int count, int count2) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::InitializeGestureForSystemProcess(count, count2));
}

int GetGestureStates(GestureState* pOutGestureState, int count) {
  int value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::GetGestureStates(&value, pOutGestureState, count));
  return value;
}

void BindInteractiveAreaChangedEvent(os::SystemEventType* pOutSystemEventType) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::BindInteractiveAreaChangedEvent(pOutSystemEventType));
}

void BindJoyDetachOnBluetoothOffEvent(
  os::SystemEventType* pOutSystemEventType, os::EventClearMode eventClearMode) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::BindJoyDetachOnBluetoothOffEvent(
      pOutSystemEventType, eventClearMode));
}

bool IsJoyAttachedOnAllRail() {
  bool value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::IsJoyAttachedOnAllRail(&value));
  return value;
}

bool IsJoyConRailSupported() {
  bool value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::IsJoyConRailSupported(&value));
  return value;
}

void EnableJoyConRail() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::system::detail::EnableJoyConRail());
}

void DisableJoyConRail() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::system::detail::DisableJoyConRail());
}

bool IsJoyConRailEnabled() {
  bool value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::IsJoyConRailEnabled(&value));
  return value;
}

bool IsInvertedControllerConnectedOnRail() {
  bool value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::IsInvertedControllerConnectedOnRail(&value));
  return value;
}

void SendKeyboardLockKeyEvent(
  util::BitFlagSet<32, KeyboardLockKeyEvent> bitFlagSet) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::SendKeyboardLockKeyEvent(bitFlagSet));
}

void SetSystemKeyboardState(const SystemKeyboardState& systemKeyboardState,
  const applet::AppletResourceUserId& appletResourceUserId) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::system::detail::SetSystemKeyboardState(
    systemKeyboardState, appletResourceUserId));
}

void UnsetSystemKeyboardState() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::UnsetSystemKeyboardState());
}

int GetNpadCaptureButtonAssignmentOfCaller(
  NpadCaptureButtonAssignmentType* pOutNpadCaptureButtonAssignmentType,
  int count) {
  int value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::GetNpadCaptureButtonAssignmentOfCaller(
      &value, pOutNpadCaptureButtonAssignmentType, count));
  return value;
}

bool IsHandheldButtonPressedOnConsoleMode() {
  bool value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::IsHandheldButtonPressedOnConsoleMode(&value));
  return value;
}

void ApplyNpadSystemCommonPolicy() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::ApplyNpadSystemCommonPolicy());
}

void ApplyNpadSystemCommonPolicyFull() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::ApplyNpadSystemCommonPolicyFull());
}

void SetSupportedNpadStyleSetAll() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::SetSupportedNpadStyleSetAll());
}

void EnableAssigningSingleOnSlSrPress() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::EnableAssigningSingleOnSlSrPress());
}

void DisableAssigningSingleOnSlSrPress() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::DisableAssigningSingleOnSlSrPress());
}

void SetSupportedNpadStyleSetOfCallerApplet(
  util::BitFlagSet<32, NpadStyleTag> bitFlagSet) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::SetSupportedNpadStyleSetOfCallerApplet(bitFlagSet));
}

util::BitFlagSet<32, NpadStyleTag> GetSupportedNpadStyleSetOfCallerApplet() {
  util::BitFlagSet<32, NpadStyleTag> value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::GetSupportedNpadStyleSetOfCallerApplet(&value));
  return value;
}

void EnableNpadSystemExtState() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::EnableNpadSystemExtState());
}

void DisableNpadSystemExtState() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::DisableNpadSystemExtState());
}

int GetAbstractedPadIdDataFromNpad(
  long* pOutLong, int count, unsigned int unsignedint) {
  int value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::GetAbstractedPadIdDataFromNpad(
      &value, pOutLong, count, unsignedint));
  return value;
}

bool AttachAbstractedPadToNpad(long size, unsigned int unsignedint) {
  bool value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::AttachAbstractedPadToNpad(&value, size, unsignedint));
  return value;
}

void DetachAbstractedPadAll() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::system::detail::DetachAbstractedPadAll());
}

bool CheckAbstractedPadConnection(long size) {
  return hid::system::detail::CheckAbstractedPadConnection(size).IsSuccess();
}

NpadJoyHoldType GetNpadJoyHoldType(
  const applet::AppletResourceUserId& appletResourceUserId) {
  NpadJoyHoldType value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::GetNpadJoyHoldType(&value, appletResourceUserId));
  return value;
}

Result GetLastActiveNpadController(unsigned int* pOutUnsignedint) {
  return hid::detail::GetLastActiveNpadController(pOutUnsignedint);
}

Result GetAllowedBluetoothLinksCount() {
  return hid::system::detail::GetAllowedBluetoothLinksCount();
}

Result GetRegisteredPalmaCount() {
  const applet::AppletResourceUserId aruid = applet::GetAppletResourceUserId();
  return hid::system::detail::GetRegisteredPalmaCount(aruid);
}

Result SetSuppressedTouchStateMode(bool isEnabled) {
  return hid::system::detail::SetSuppressedTouchStateMode(isEnabled);
}

Result GetDeviceType(
  util::BitFlagSet<32, DeviceType>* pOutBitFlagSet, UniquePadId uniquePadId) {
  return hid::system::detail::GetDeviceType(pOutBitFlagSet, uniquePadId);
}

Result GetAppletDetailedUiType(
  AppletDetailedUiType* pOutAppletDetailedUiType, UniquePadId uniquePadId) {
  return hid::system::detail::GetAppletDetailedUiType(
    pOutAppletDetailedUiType, uniquePadId);
}

void EnableUsbFullKeyController(bool isEnabled) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::EnableUsbFullKeyController(isEnabled));
}

bool IsUsbFullKeyControllerEnabled() {
  bool value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::IsUsbFullKeyControllerEnabled(&value));
  return value;
}

bool IsUsbConnected(UniquePadId uniquePadId) {
  bool value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::IsUsbConnected(&value, uniquePadId));
  return value;
}

void SetAppletResourceUserId(
  const applet::AppletResourceUserId& appletResourceUserId) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::SetAppletResourceUserId(appletResourceUserId));
}

void RegisterAppletResourceUserId(
  const applet::AppletResourceUserId& appletResourceUserId, bool isEnabled,
  applet::ApplicationSpec applicationSpec) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::RegisterAppletResourceUserId(
      appletResourceUserId, isEnabled, applicationSpec));
}

void UnregisterAppletResourceUserId(
  const applet::AppletResourceUserId& appletResourceUserId) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::UnregisterAppletResourceUserId(appletResourceUserId));
}

void EnableAppletToGetInput(
  const applet::AppletResourceUserId& appletResourceUserId, bool isEnabled) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::system::detail::EnableAppletToGetInput(
    appletResourceUserId, isEnabled));
}

void EnableAppletToGetPadInput(
  const applet::AppletResourceUserId& appletResourceUserId, bool isEnabled) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::system::detail::EnableAppletToGetPadInput(
    appletResourceUserId, isEnabled));
}

void InitializeAudioControl() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::system::detail::InitializeAudioControl());
}

int GetAudioControlStates(AudioControlState* pOutAudioControlState, int count) {
  int value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::system::detail::GetAudioControlStates(
    &value, pOutAudioControlState, count));
  return value;
}

void BindAudioControlStateChangeEvent(
  os::SystemEventType* pOutSystemEventType, os::EventClearMode eventClearMode) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::BindAudioControlStateChangeEvent(
      pOutSystemEventType, eventClearMode));
}

void BindCaptureButtonEvent(
  os::SystemEventType* pOutSystemEventType, os::EventClearMode eventClearMode) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::system::detail::BindCaptureButtonEvent(
    pOutSystemEventType, eventClearMode));
}

void InitializeCaptureButton() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::InitializeCaptureButton());
}

int GetCaptureButtonStates(
  CaptureButtonState* pOutCaptureButtonState, int count) {
  int value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::system::detail::GetCaptureButtonStates(
    &value, pOutCaptureButtonState, count));
  return value;
}

void BindAwakeRequestEvent(
  os::SystemEvent* pOutSystemEvent, os::EventClearMode eventClearMode) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::system::detail::BindAwakeRequestEvent(
    pOutSystemEvent, eventClearMode));
}

void BindCButtonEvent(
  os::SystemEventType* pOutSystemEventType, os::EventClearMode eventClearMode) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::BindCButtonEvent(pOutSystemEventType, eventClearMode));
}

void InitializeCButton() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::system::detail::InitializeCButton());
}

int GetCButtonStates(CButtonState* pOutCButtonState, int count) {
  int value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::GetCButtonStates(&value, pOutCButtonState, count));
  return value;
}

Result SetHandheldAsFullKeyEmulation(bool isEnabled) {
  return hid::system::detail::SetHandheldAsFullKeyEmulation(isEnabled);
}

Result GetFullKeyEmulationRecommendedChangedEvent(
  os::SystemEventType* pOutSystemEventType, os::EventClearMode eventClearMode) {
  return hid::system::detail::GetFullKeyEmulationRecommendedChangedEvent(
    pOutSystemEventType, eventClearMode);
}

Result IsFullKeyEmulationRecommended() {
  return hid::system::detail::IsFullKeyEmulationRecommended();
}

Result IsFullKeyEmulationTarget(unsigned int unsignedint) {
  return hid::system::detail::IsFullKeyEmulationTarget(unsignedint);
}

bool GetJcmsUsedFlag(unsigned int unsignedint, JcmsType jcmsType) {
  bool value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::GetJcmsUsedFlag(&value, unsignedint, jcmsType));
  return value;
}

void ClearJcmsUsedFlag(unsigned int unsignedint, JcmsType jcmsType) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::ClearJcmsUsedFlag(unsignedint, jcmsType));
}

void InitializeMainUnitFunctionPolicy() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::InitializeMainUnitFunctionPolicy());
}

void FinalizeMainUnitFunctionPolicy() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::FinalizeMainUnitFunctionPolicy());
}

void StoreSelectorUiPresentationPolicy(
  SelectorUiPresentationPolicy selectorUiPresentationPolicy) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::StoreSelectorUiPresentationPolicy(
      selectorUiPresentationPolicy));
}

SelectorUiPresentationPolicy FetchSelectorUiPresentationPolicy() {
  SelectorUiPresentationPolicy value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::FetchSelectorUiPresentationPolicy(&value));
  return value;
}

void EnableInputOnHorizontalPlaneOnly(bool isEnabled) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::EnableInputOnHorizontalPlaneOnly(isEnabled));
}

void EnableHandheldHids() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::system::detail::EnableHandheldHids());
}

void DisableHandheldHids() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::system::detail::DisableHandheldHids());
}

bool IsHandheldHidsEnabled() {
  bool value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::IsHandheldHidsEnabled(&value));
  return value;
}

void BindHomeButtonEvent(
  os::SystemEventType* pOutSystemEventType, os::EventClearMode eventClearMode) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::system::detail::BindHomeButtonEvent(
    pOutSystemEventType, eventClearMode));
}

void InitializeHomeButton() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::system::detail::InitializeHomeButton());
}

int GetHomeButtonStates(HomeButtonState* pOutHomeButtonState, int count) {
  int value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::system::detail::GetHomeButtonStates(
    &value, pOutHomeButtonState, count));
  return value;
}

int GetNpadsWithNfc(unsigned int* pOutUnsignedint, int count) {
  int value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::GetNpadsWithNfc(&value, pOutUnsignedint, count));
  return value;
}

Result GetAbstractedPadIdForNpadWithNfc(
  AbstractedPadId* pOutAbstractedPadId, unsigned int unsignedint) {
  return hid::system::detail::GetAbstractedPadIdForNpadWithNfc(
    pOutAbstractedPadId, unsignedint);
}

Result PrepareHidsForNotificationWake(
  UniquePadId* pOutUniquePadId, unsigned long size) {
  return hid::system::detail::PrepareHidsForNotificationWake(
    pOutUniquePadId, size);
}

void BindPlayReportControllerUsageUpdateEvent(
  os::SystemEventType* pOutSystemEventType, os::EventClearMode eventClearMode) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::BindPlayReportControllerUsageUpdateEvent(
      pOutSystemEventType, eventClearMode));
}

int GetPlayReportControllerUsages(
  PlayReportControllerUsage* pOutPlayReportControllerUsage, int count) {
  int value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::GetPlayReportControllerUsages(
      &value, pOutPlayReportControllerUsage, count));
  return value;
}

void GetPlayReportPairingCount(int* pOutInt, int* pOutInt2, int* pOutInt3) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::system::detail::GetPlayReportPairingCount(
    pOutInt, pOutInt2, pOutInt3));
}

void BindSleepButtonEvent(
  os::SystemEventType* pOutSystemEventType, os::EventClearMode eventClearMode) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::system::detail::BindSleepButtonEvent(
    pOutSystemEventType, eventClearMode));
}

void InitializeSleepButton() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::system::detail::InitializeSleepButton());
}

int GetSleepButtonStates(SleepButtonState* pOutSleepButtonState, int count) {
  int value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::system::detail::GetSleepButtonStates(
    &value, pOutSleepButtonState, count));
  return value;
}

Result SetConnectionLimitForSplay(unsigned char unsignedchar) {
  return hid::system::detail::SetConnectionLimitForSplay(unsignedchar);
}

void ClearConnectionLimitForSplay() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::ClearConnectionLimitForSplay());
}

}
