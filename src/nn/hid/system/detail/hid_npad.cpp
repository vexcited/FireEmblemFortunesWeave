#include "nn/hid/detail/hid_abort.hpp"
#include "nn/hid/detail/hid_api.hpp"
#include "nn/hid/detail/hid_server.hpp"
#include "nn/hid/detail/hid_utility.hpp"

namespace nn::hid::system::detail {

Result GetInteractiveArea(InteractiveArea* pOutInteractiveArea) {
  sf::SharedPointer<IHidSystemServer> proxy;
  NN_RESULT_DO(server::CreateHidSystemServerProxy(&proxy));
  return proxy->GetInteractiveArea(pOutInteractiveArea);
}

Result IsJoyAttachedOnAllRail(bool* pOutBool) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  return proxy->IsJoyAttachedOnAllRail(pOutBool);
}

Result IsJoyConRailSupported(bool* pOutBool) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  bool value = {};
  const Result result = proxy->IsJoyConRailSupported(&value);
  if (result.IsSuccess()) {
    *pOutBool = value;
  }
  return result;
}

Result EnableJoyConRail() {
  sf::SharedPointer<IHidSystemServer> proxy;
  NN_RESULT_DO(server::CreateHidSystemServerProxy(&proxy));
  return proxy->EnableJoyConRail(1);
}

Result DisableJoyConRail() {
  sf::SharedPointer<IHidSystemServer> proxy;
  NN_RESULT_DO(server::CreateHidSystemServerProxy(&proxy));
  return proxy->EnableJoyConRail(0);
}

Result IsJoyConRailEnabled(bool* pOutBool) {
  sf::SharedPointer<IHidSystemServer> proxy;
  NN_RESULT_DO(server::CreateHidSystemServerProxy(&proxy));
  return proxy->IsJoyConRailEnabled(pOutBool);
}

Result IsInvertedControllerConnectedOnRail(bool* pOutBool) {
  sf::SharedPointer<IHidSystemServer> proxy;
  NN_RESULT_DO(server::CreateHidSystemServerProxy(&proxy));
  return proxy->IsInvertedControllerConnectedOnRail(pOutBool);
}

Result ApplyNpadSystemCommonPolicy() {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  return proxy->ApplyNpadSystemCommonPolicy(utility::GetAppletResourceUserId());
}

Result ApplyNpadSystemCommonPolicyFull() {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  return proxy->ApplyNpadSystemCommonPolicyFull(
    utility::GetAppletResourceUserId());
}

Result SetSupportedNpadStyleSetAll() {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  return proxy->SetSupportedNpadStyleSetAll(utility::GetAppletResourceUserId());
}

Result EnableAssigningSingleOnSlSrPress() {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  return proxy->EnableAssigningSingleOnSlSrPress(
    utility::GetAppletResourceUserId());
}

Result DisableAssigningSingleOnSlSrPress() {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  return proxy->DisableAssigningSingleOnSlSrPress(
    utility::GetAppletResourceUserId());
}

Result SetNpadPlayerLedBlinkingDevice(
  const NpadIdType& id, const util::BitFlagSet<32, DeviceType>& bitFlagSet) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  return proxy->SetNpadPlayerLedBlinkingDevice(
    utility::GetAppletResourceUserId(), id, bitFlagSet);
}

Result GetNpadFullKeyGripColor(util::Unorm8x4* pOutUnorm8x4,
  util::Unorm8x4* pOutUnorm8x42, const NpadIdType& id) {
  sf::SharedPointer<IHidSystemServer> proxy;
  NN_RESULT_DO(server::CreateHidSystemServerProxy(&proxy));
  return proxy->GetNpadFullKeyGripColor(pOutUnorm8x4, pOutUnorm8x42, id);
}

Result IsHandheldButtonPressedOnConsoleMode(bool* pOutBool) {
  sf::SharedPointer<IHidSystemServer> proxy;
  NN_RESULT_DO(server::CreateHidSystemServerProxy(&proxy));
  return proxy->IsHandheldButtonPressedOnConsoleMode(pOutBool);
}

Result HasBattery(bool* pOutBool, const NpadIdType& id) {
  sf::SharedPointer<IHidSystemServer> proxy;
  NN_RESULT_DO(server::CreateHidSystemServerProxy(&proxy));
  return proxy->HasBattery(pOutBool, id);
}

Result HasBattery(bool* pOutBool, bool* pOutBool2, const NpadIdType& id) {
  sf::SharedPointer<IHidSystemServer> proxy;
  NN_RESULT_DO(server::CreateHidSystemServerProxy(&proxy));
  return proxy->HasBattery(pOutBool, pOutBool2, id);
}

Result GetNpadInterfaceType(
  unsigned char* pOutUnsignedchar, const NpadIdType& id) {
  sf::SharedPointer<IHidSystemServer> proxy;
  NN_RESULT_DO(server::CreateHidSystemServerProxy(&proxy));
  return proxy->GetNpadInterfaceType(pOutUnsignedchar, id);
}

Result GetNpadInterfaceType(unsigned char* pOutUnsignedchar,
  unsigned char* pOutUnsignedchar2, const NpadIdType& id) {
  sf::SharedPointer<IHidSystemServer> proxy;
  NN_RESULT_DO(server::CreateHidSystemServerProxy(&proxy));
  return proxy->GetNpadInterfaceType(pOutUnsignedchar, pOutUnsignedchar2, id);
}

Result EnableNpadSystemExtState() {
  sf::SharedPointer<IHidSystemServer> proxy;
  NN_RESULT_DO(server::CreateHidSystemServerProxy(&proxy));
  return proxy->EnableNpadSystemExtState(utility::GetAppletResourceUserId(), 1);
}

Result DisableNpadSystemExtState() {
  sf::SharedPointer<IHidSystemServer> proxy;
  NN_RESULT_DO(server::CreateHidSystemServerProxy(&proxy));
  return proxy->EnableNpadSystemExtState(utility::GetAppletResourceUserId(), 0);
}

Result AttachAbstractedPadToNpad(
  bool* pOutBool, long size, const NpadIdType& id) {
  sf::SharedPointer<IHidSystemServer> proxy;
  NN_RESULT_DO(server::CreateHidSystemServerProxy(&proxy));
  return proxy->AttachAbstractedPadToNpad(pOutBool, size, id);
}

Result DetachAbstractedPadAll() {
  sf::SharedPointer<IHidSystemServer> proxy;
  NN_RESULT_DO(server::CreateHidSystemServerProxy(&proxy));
  return proxy->DetachAbstractedPadAll();
}

Result CheckAbstractedPadConnection(long size) {
  sf::SharedPointer<IHidSystemServer> proxy;
  NN_RESULT_DO(server::CreateHidSystemServerProxy(&proxy));
  return proxy->CheckAbstractedPadConnection(size);
}

Result GetDeviceType(
  util::BitFlagSet<32, DeviceType>* pOutBitFlagSet, UniquePadId uniquePadId) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  return proxy->GetDeviceType(pOutBitFlagSet, uniquePadId);
}

Result IsUsbFullKeyControllerEnabled(bool* pOutBool) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  return proxy->IsUsbFullKeyControllerEnabled(pOutBool);
}

Result EnableUsbFullKeyController(bool isEnabled) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  return proxy->EnableUsbFullKeyController(isEnabled);
}

Result IsUsbConnected(bool* pOutBool, UniquePadId uniquePadId) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  return proxy->IsUsbConnected(pOutBool, uniquePadId);
}

Result InitializeAudioControl() {
  sf::SharedPointer<IHidSystemServer> proxy;
  NN_RESULT_DO(server::CreateHidSystemServerProxy(&proxy));
  return proxy->InitializeAudioControl();
}

Result FinalizeAudioControl() {
  sf::SharedPointer<IHidSystemServer> proxy;
  NN_RESULT_DO(server::CreateHidSystemServerProxy(&proxy));
  return proxy->FinalizeAudioControl();
}

Result SetAllNpadCustomButtonConfigEnabled(bool isEnabled) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  return proxy->SetAllNpadCustomButtonConfigEnabled(isEnabled);
}

Result StoreSelectorUiPresentationPolicy(
  SelectorUiPresentationPolicy selectorUiPresentationPolicy) {
  sf::SharedPointer<IHidSystemServer> proxy;
  NN_RESULT_DO(server::CreateHidSystemServerProxy(&proxy));
  return proxy->StoreSelectorUiPresentationPolicy(
    selectorUiPresentationPolicy, utility::GetAppletResourceUserId());
}

Result EnableInputOnHorizontalPlaneOnly(bool isEnabled) {
  sf::SharedPointer<IHidSystemServer> proxy;
  NN_RESULT_DO(server::CreateHidSystemServerProxy(&proxy));
  return proxy->EnableInputOnHorizontalPlaneOnly(
    utility::GetAppletResourceUserId(), isEnabled);
}

Result EnableHandheldHids() {
  sf::SharedPointer<IHidSystemServer> proxy;
  NN_RESULT_DO(server::CreateHidSystemServerProxy(&proxy));
  return proxy->EnableHandheldHids();
}

Result DisableHandheldHids() {
  sf::SharedPointer<IHidSystemServer> proxy;
  NN_RESULT_DO(server::CreateHidSystemServerProxy(&proxy));
  return proxy->DisableHandheldHids();
}

Result IsHandheldHidsEnabled(bool* pOutBool) {
  sf::SharedPointer<IHidSystemServer> proxy;
  NN_RESULT_DO(server::CreateHidSystemServerProxy(&proxy));
  return proxy->IsHandheldHidsEnabled(pOutBool);
}

Result GetAbstractedPadIdForNpadWithNfc(
  AbstractedPadId* pOutAbstractedPadId, unsigned int unsignedint) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  AbstractedPadId value = {};
  const Result result =
    proxy->GetAbstractedPadIdForNpadWithNfc(&value, unsignedint, 0);
  if (result.IsSuccess()) {
    *pOutAbstractedPadId = value;
  }
  return result;
}

Result GetPlayReportPairingCount(int* pOutInt, int* pOutInt2, int* pOutInt3) {
  sf::SharedPointer<IHidSystemServer> proxy;
  NN_RESULT_DO(server::CreateHidSystemServerProxy(&proxy));
  return proxy->GetPlayReportPairingCount(pOutInt, pOutInt2, pOutInt3);
}

Result SetConnectionLimitForSplay(unsigned char unsignedchar) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  return proxy->SetConnectionLimitForSplay(unsignedchar);
}

Result ClearConnectionLimitForSplay() {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  return proxy->ClearConnectionLimitForSplay();
}

}

namespace nn::hid::system::detail {

Result GetAnalogStickManualCalibrationStage(AnalogStickManualCalibrationStage* pOutAnalogStickManualCalibrationStage, UniquePadId uniquePadId, AnalogStickPosition analogStickPosition) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  AnalogStickManualCalibrationStage value = {};
  const Result result = proxy->GetAnalogStickManualCalibrationStage(&value, uniquePadId, analogStickPosition);
  if (result.IsSuccess()) {
    *pOutAnalogStickManualCalibrationStage = value;
  }
  return result;
}

Result SetVibrationMasterVolume(float value) {
  sf::SharedPointer<IHidSystemServer> proxy;
  NN_RESULT_DO(server::CreateHidSystemServerProxy(&proxy));
  return proxy->SetVibrationMasterVolume(value);
}

}
