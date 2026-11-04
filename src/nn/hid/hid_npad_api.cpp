#include "nn/hid/detail/hid_abort.hpp"
#include "nn/hid/detail/hid_api.hpp"
#include "nn/hid/detail/hid_npad_id.hpp"
#include "nn/hid/detail/hid_utility.hpp"

namespace nn::hid {

bool IsFirmwareUpdateNeededForNotification() {
  bool value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::detail::IsFirmwareUpdateNeededForNotification(&value));
  return value;
}

void InitializeNpad() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::detail::InitializeNpad());
}

util::BitFlagSet<32, NpadStyleTag> GetSupportedNpadStyleSet() {
  util::BitFlagSet<32, NpadStyleTag> value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::detail::GetSupportedNpadStyleSet(&value));
  return value;
}

void SetSupportedNpadIdType(
  const unsigned int* pUnsignedint, unsigned long size) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::detail::SetSupportedNpadIdType(pUnsignedint, size));
}

void BindNpadStyleSetUpdateEvent(const NpadIdType& id,
  os::SystemEventType* pOutSystemEventType, os::EventClearMode eventClearMode) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::VerifyValidNpadId(id));
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::detail::BindNpadStyleSetUpdateEvent(
    id, pOutSystemEventType, eventClearMode));
}

util::BitFlagSet<32, NpadStyleTag> GetNpadStyleSet(const NpadIdType& id) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::VerifyValidNpadId(id));
  util::BitFlagSet<32, NpadStyleTag> value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::detail::GetNpadStyleSet(&value, id));
  return value;
}

void DisconnectNpad(const NpadIdType& id) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::VerifyValidNpadId(id));
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::detail::DisconnectNpad(id));
}

unsigned char GetPlayerLedPattern(const NpadIdType& id) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::VerifyValidNpadId(id));
  unsigned char value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::detail::GetPlayerLedPattern(&value, id));
  return value;
}

bool IsUnintendedHomeButtonInputProtectionEnabled(const NpadIdType& id) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::VerifyValidNpadId(id));
  bool value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::detail::IsUnintendedHomeButtonInputProtectionEnabled(&value, id));
  return value;
}

void EnableUnintendedHomeButtonInputProtection(
  const NpadIdType& id, bool isEnabled) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::VerifyValidNpadId(id));
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::detail::EnableUnintendedHomeButtonInputProtection(id, isEnabled));
}

void SetNpadCaptureButtonAssignment(
  util::BitFlagSet<32, NpadStyleTag> bitFlagSet,
  util::BitFlagSet<64, NpadButton> bitFlagSet2) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::detail::SetNpadCaptureButtonAssignment(bitFlagSet, bitFlagSet2));
}

void ClearNpadCaptureButtonAssignment() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::detail::ClearNpadCaptureButtonAssignment());
}

void GetNpadControllerColor(
  NpadControllerColor* pOutNpadControllerColor, const NpadIdType& id) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::VerifyValidNpadId(id));
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::detail::GetNpadControllerColor(pOutNpadControllerColor, id));
}

void GetNpadControllerColor(NpadControllerColor* pOutNpadControllerColor,
  NpadControllerColor* pOutNpadControllerColor2, const NpadIdType& id) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::VerifyValidNpadId(id));
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::detail::GetNpadControllerColor(
    pOutNpadControllerColor, pOutNpadControllerColor2, id));
}

void GetNpadJoyIconDecorationColor(
  NpadJoyIconDecorationColor* pOutNpadJoyIconDecorationColor,
  const NpadIdType& id) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::VerifyValidNpadId(id));
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::detail::GetNpadJoyIconDecorationColor(
    pOutNpadJoyIconDecorationColor, id));
}

void GetNpadJoyIconDecorationColor(
  NpadJoyIconDecorationColor* pOutNpadJoyIconDecorationColor,
  NpadJoyIconDecorationColor* pOutNpadJoyIconDecorationColor2,
  const NpadIdType& id) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::VerifyValidNpadId(id));
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::detail::GetNpadJoyIconDecorationColor(
    pOutNpadJoyIconDecorationColor, pOutNpadJoyIconDecorationColor2, id));
}

void SetControlPadRestrictionType(util::BitFlagSet<32, NpadStyleTag> bitFlagSet,
  ControlPadRestrictionType controlPadRestrictionType) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::detail::SetControlPadRestrictionType(
    bitFlagSet, controlPadRestrictionType));
}

void EnableControlPadRestriction(
  const util::BitFlagSet<32, NpadStyleTag>& bitFlagSet, bool isEnabled) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::detail::EnableControlPadRestriction(bitFlagSet, isEnabled));
}

int GetNpadStates(
  NpadFullKeyState* pOutNpadFullKeyState, int count, const NpadIdType& id) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::VerifyValidNpadId(id));
  int value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::detail::GetNpadStates(&value, pOutNpadFullKeyState, count, id));
  return value;
}

int GetNpadStates(
  NpadHandheldState* pOutNpadHandheldState, int count, const NpadIdType& id) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::VerifyValidNpadId(id));
  int value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::detail::GetNpadStates(&value, pOutNpadHandheldState, count, id));
  return value;
}

int GetNpadStates(NpadHandheldLarkState* pOutNpadHandheldLarkState, int count,
  const NpadIdType& id) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::VerifyValidNpadId(id));
  int value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::detail::GetNpadStates(&value, pOutNpadHandheldLarkState, count, id));
  return value;
}

NpadJoyAssignmentMode GetNpadJoyAssignment(const NpadIdType& id) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::VerifyValidNpadId(id));
  NpadJoyAssignmentMode value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::detail::GetNpadJoyAssignment(&value, id));
  return value;
}

void SetNpadJoyAssignmentModeSingle(const NpadIdType& id) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::VerifyValidNpadId(id));
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::detail::SetNpadJoyAssignmentModeSingle(id));
}

void SetNpadJoyAssignmentModeSingle(
  const NpadIdType& id, NpadJoyDeviceType npadJoyDeviceType) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::VerifyValidNpadId(id));
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::detail::SetNpadJoyAssignmentModeSingle(id, npadJoyDeviceType));
}

bool SetNpadJoyAssignmentModeSingle(unsigned int* pOutUnsignedint,
  const NpadIdType& id, NpadJoyDeviceType npadJoyDeviceType) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::VerifyValidNpadId(id));
  bool value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::detail::SetNpadJoyAssignmentModeSingle(
    &value, pOutUnsignedint, id, npadJoyDeviceType));
  return value;
}

void SetNpadJoyAssignmentModeDual(const NpadIdType& id) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::VerifyValidNpadId(id));
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::detail::SetNpadJoyAssignmentModeDual(id));
}

void MergeSingleJoyAsDualJoy(const NpadIdType& id, const NpadIdType& id2) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::VerifyValidNpadId(id));
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::detail::MergeSingleJoyAsDualJoy(id, id2));
}

void SwapNpadAssignment(const NpadIdType& id, const NpadIdType& id2) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::VerifyValidNpadId(id));
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::detail::SwapNpadAssignment(id, id2));
}

void SetNpadJoyHoldType(NpadJoyHoldType npadJoyHoldType) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::detail::SetNpadJoyHoldType(npadJoyHoldType));
}

NpadJoyHoldType GetNpadJoyHoldType() {
  NpadJoyHoldType value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::detail::GetNpadJoyHoldType(&value));
  return value;
}

void StartLrAssignmentMode() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::detail::StartLrAssignmentMode());
}

void StopLrAssignmentMode() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::detail::StopLrAssignmentMode());
}

void SetNpadHandheldActivationMode(
  NpadHandheldActivationMode npadHandheldActivationMode) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::detail::SetNpadHandheldActivationMode(npadHandheldActivationMode));
}

NpadHandheldActivationMode GetNpadHandheldActivationMode() {
  NpadHandheldActivationMode value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::detail::GetNpadHandheldActivationMode(&value));
  return value;
}

void SetNpadCommunicationMode(NpadCommunicationMode npadCommunicationMode) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::detail::SetNpadCommunicationMode(npadCommunicationMode));
}

NpadCommunicationMode GetNpadCommunicationMode() {
  NpadCommunicationMode value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::detail::GetNpadCommunicationMode(&value));
  return value;
}

Result GetNpadOfHighestBatteryLevel(
  unsigned int* pOutUnsignedint, const unsigned int* pUnsignedint, int count) {
  return hid::detail::GetNpadOfHighestBatteryLevel(
    pOutUnsignedint, pUnsignedint, count);
}

int GetNpadStates(
  NpadJoyDualState* pOutNpadJoyDualState, int count, const NpadIdType& id) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::VerifyValidNpadId(id));
  int value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::detail::GetNpadStates(&value, pOutNpadJoyDualState, count, id));
  return value;
}

int GetNpadStates(
  NpadJoyLeftState* pOutNpadJoyLeftState, int count, const NpadIdType& id) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::VerifyValidNpadId(id));
  int value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::detail::GetNpadStates(&value, pOutNpadJoyLeftState, count, id));
  return value;
}

int GetNpadStates(
  NpadJoyRightState* pOutNpadJoyRightState, int count, const NpadIdType& id) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::VerifyValidNpadId(id));
  int value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::detail::GetNpadStates(&value, pOutNpadJoyRightState, count, id));
  return value;
}

int GetNpadStates(
  NpadGcState* pOutNpadGcState, int count, const NpadIdType& id) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::VerifyValidNpadId(id));
  int value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::detail::GetNpadStates(&value, pOutNpadGcState, count, id));
  return value;
}

int GetNpadStates(
  NpadLagerState* pOutNpadLagerState, int count, const NpadIdType& id) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::VerifyValidNpadId(id));
  int value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::detail::GetNpadStates(&value, pOutNpadLagerState, count, id));
  return value;
}

NpadLagerType GetNpadLagerType(const NpadIdType& id) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::VerifyValidNpadId(id));
  NpadLagerType value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::detail::GetNpadLagerType(&value, id));
  return value;
}

int GetNpadStates(
  NpadLarkState* pOutNpadLarkState, int count, const NpadIdType& id) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::VerifyValidNpadId(id));
  int value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::detail::GetNpadStates(&value, pOutNpadLarkState, count, id));
  return value;
}

int GetNpadStates(
  NpadLuciaState* pOutNpadLuciaState, int count, const NpadIdType& id) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::VerifyValidNpadId(id));
  int value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::detail::GetNpadStates(&value, pOutNpadLuciaState, count, id));
  return value;
}

int GetNpadStates(
  NpadPalmaState* pOutNpadPalmaState, int count, const NpadIdType& id) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::VerifyValidNpadId(id));
  int value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::detail::GetNpadStates(&value, pOutNpadPalmaState, count, id));
  return value;
}

void EnableUsbFullKeyController(bool isEnabled) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::detail::EnableUsbFullKeyControllerForApplication(isEnabled));
}

bool IsUsbFullKeyControllerEnabled() {
  bool value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::detail::IsUsbFullKeyControllerEnabledForApplication(&value));
  return value;
}

bool IsUsbFullKeyControllerConnected(const NpadIdType& id) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::VerifyValidNpadId(id));
  bool value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::detail::IsUsbFullKeyControllerConnectedForApplication(&value, id));
  return value;
}

bool GetNpadIdType(unsigned int* pOutUnsignedint, NmouseHandle nmouseHandle) {
  return hid::detail::GetNpadIdType(pOutUnsignedint, nmouseHandle).IsSuccess();
}

GcStyleControllerType GetGcStyleControllerType(const NpadIdType& id) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::VerifyValidNpadId(id));
  GcStyleControllerType value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::detail::GetGcStyleControllerType(&value, id));
  return value;
}

void GetGlGrButtonConfigState(
  bool* pOutBool, bool* pOutBool2, unsigned int unsignedint) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::detail::GetGlGrButtonConfigState(pOutBool, pOutBool2, unsignedint));
}

void SetSceneIdForPrivateApp(int count) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::detail::SetSceneIdForPrivateApp(count));
}

int GetSceneIdForPrivateApp() {
  int value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::detail::GetSceneIdForPrivateApp(&value));
  return value;
}

}
