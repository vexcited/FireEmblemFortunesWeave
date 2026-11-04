#include "nn/hid/detail/hid_abort.hpp"
#include "nn/hid/detail/hid_api.hpp"
#include "nn/hid/detail/hid_server.hpp"
#include "nn/hid/detail/hid_utility.hpp"

namespace nn::hid::detail {

Result SetSupportedNpadStyleSet(util::BitFlagSet<32, NpadStyleTag> bitFlagSet) {
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  return proxy->SetSupportedNpadStyleSet(
    utility::GetAppletResourceUserId(), bitFlagSet);
}

Result GetSupportedNpadStyleSet(
  util::BitFlagSet<32, NpadStyleTag>* pOutBitFlagSet) {
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  return proxy->GetSupportedNpadStyleSet(
    utility::GetAppletResourceUserId(), pOutBitFlagSet);
}

Result SetNpadJoyHoldType(NpadJoyHoldType npadJoyHoldType) {
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  return proxy->SetNpadJoyHoldType(
    utility::GetAppletResourceUserId(), npadJoyHoldType);
}

Result StartLrAssignmentMode() {
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  return proxy->StartLrAssignmentMode(utility::GetAppletResourceUserId());
}

Result StopLrAssignmentMode() {
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  return proxy->StopLrAssignmentMode(utility::GetAppletResourceUserId());
}

Result SetNpadHandheldActivationMode(
  NpadHandheldActivationMode npadHandheldActivationMode) {
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  return proxy->SetNpadHandheldActivationMode(
    utility::GetAppletResourceUserId(), npadHandheldActivationMode);
}

Result SetNpadCommunicationMode(NpadCommunicationMode npadCommunicationMode) {
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  return proxy->SetNpadCommunicationMode(
    utility::GetAppletResourceUserId(), npadCommunicationMode);
}

Result EnableUnintendedHomeButtonInputProtection(
  const NpadIdType& id, bool isEnabled) {
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  return proxy->EnableUnintendedHomeButtonInputProtection(
    utility::GetAppletResourceUserId(), id, isEnabled);
}

Result DisconnectNpad(const NpadIdType& id) {
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  return proxy->DisconnectNpad(utility::GetAppletResourceUserId(), id);
}

Result SetNpadJoyAssignmentModeSingle(const NpadIdType& id) {
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  return proxy->SetNpadJoyAssignmentModeSingle(
    utility::GetAppletResourceUserId(), id);
}

Result SetNpadJoyAssignmentModeSingle(
  const NpadIdType& id, NpadJoyDeviceType npadJoyDeviceType) {
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  return proxy->SetNpadJoyAssignmentModeSingle(
    utility::GetAppletResourceUserId(), id, npadJoyDeviceType);
}

Result SetNpadJoyAssignmentModeSingle(bool* pOutBool,
  unsigned int* pOutUnsignedint, const NpadIdType& id,
  NpadJoyDeviceType npadJoyDeviceType) {
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  return proxy->SetNpadJoyAssignmentModeSingle(pOutBool, pOutUnsignedint,
    utility::GetAppletResourceUserId(), id, npadJoyDeviceType);
}

Result SetNpadJoyAssignmentModeDual(const NpadIdType& id) {
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  return proxy->SetNpadJoyAssignmentModeDual(
    utility::GetAppletResourceUserId(), id);
}

Result MergeSingleJoyAsDualJoy(const NpadIdType& id, const NpadIdType& id2) {
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  return proxy->MergeSingleJoyAsDualJoy(
    utility::GetAppletResourceUserId(), id, id2);
}

Result SwapNpadAssignment(const NpadIdType& id, const NpadIdType& id2) {
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  return proxy->SwapNpadAssignment(utility::GetAppletResourceUserId(), id, id2);
}

Result SetNpadGcAnalogStick8bitRawValue(bool isEnabled) {
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  return proxy->SetNpadGcAnalogStick8bitRawValue(
    utility::GetAppletResourceUserId(), isEnabled);
}

Result SetNpadAnalogStickUseCenterClamp(bool isEnabled) {
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  return proxy->SetNpadAnalogStickUseCenterClamp(
    utility::GetAppletResourceUserId(), isEnabled);
}

Result SetNpadCaptureButtonAssignment(
  util::BitFlagSet<32, NpadStyleTag> bitFlagSet,
  util::BitFlagSet<64, NpadButton> bitFlagSet2) {
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  return proxy->SetNpadCaptureButtonAssignment(
    utility::GetAppletResourceUserId(), bitFlagSet, bitFlagSet2);
}

Result ClearNpadCaptureButtonAssignment() {
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  return proxy->ClearNpadCaptureButtonAssignment(
    utility::GetAppletResourceUserId());
}

Result IsUsbFullKeyControllerEnabledForApplication(bool* pOutBool) {
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  return proxy->IsUsbFullKeyControllerEnabledForApplication(pOutBool);
}

Result EnableUsbFullKeyControllerForApplication(bool isEnabled) {
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  return proxy->EnableUsbFullKeyControllerForApplication(isEnabled);
}

Result IsUsbFullKeyControllerConnectedForApplication(
  bool* pOutBool, const NpadIdType& id) {
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  return proxy->IsUsbFullKeyControllerConnectedForApplication(pOutBool, id);
}

Result GetSceneIdForPrivateApp(int* pOutInt) {
  sf::SharedPointer<IHidServer> proxy;
  server::CreateHidServerProxy(&proxy);
  int value = {};
  const Result result =
    proxy->GetSceneIdForPrivateApp(&value, utility::GetAppletResourceUserId());
  if (result.IsSuccess()) {
    *pOutInt = value;
  }
  return result;
}

}
