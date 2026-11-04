#include "nn/hid/detail/hid_abort.hpp"
#include "nn/hid/detail/hid_api.hpp"
#include "nn/hid/detail/hid_server.hpp"
#include "nn/hid/detail/hid_utility.hpp"

namespace nn::hid::system::detail {

Result InitializeFirmwareUpdate() {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  return proxy->InitializeFirmwareUpdate();
}

Result StartFirmwareUpdate(
  FirmwareUpdateDeviceHandle* pOutFirmwareUpdateDeviceHandle,
  UniquePadId uniquePadId) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  return proxy->StartFirmwareUpdate(
    pOutFirmwareUpdateDeviceHandle, uniquePadId);
}

Result AbortFirmwareUpdate() {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  return proxy->AbortFirmwareUpdate();
}

Result GetFirmwareVersion(
  FirmwareVersion* pOutFirmwareVersion, UniquePadId uniquePadId) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  return proxy->GetFirmwareVersion(pOutFirmwareVersion, uniquePadId);
}

Result GetFirmwareVersionStringForUserSupportPage(
  FirmwareVersionString* pOutFirmwareVersionString, UniquePadId uniquePadId) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  return proxy->GetFirmwareVersionStringForUserSupportPage(
    pOutFirmwareVersionString, uniquePadId);
}

Result GetAvailableFirmwareVersion(
  FirmwareVersion* pOutFirmwareVersion, UniquePadId uniquePadId) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  return proxy->GetAvailableFirmwareVersion(pOutFirmwareVersion, uniquePadId);
}

Result IsFirmwareUpdateAvailable(bool* pOutBool, UniquePadId uniquePadId) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  bool value = {};
  const Result result = proxy->IsFirmwareUpdateAvailable(&value, uniquePadId);
  if (result.IsSuccess()) {
    *pOutBool = value;
  }
  return result;
}

Result SetFirmwareHotfixUpdateSkipEnabled(bool isEnabled) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  return proxy->SetFirmwareHotfixUpdateSkipEnabled(isEnabled);
}

Result InitializeUsbFirmwareUpdate() {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  return proxy->InitializeUsbFirmwareUpdate(utility::GetAppletResourceUserId());
}

Result FinalizeUsbFirmwareUpdate() {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  return proxy->FinalizeUsbFirmwareUpdate(utility::GetAppletResourceUserId());
}

Result StartUsbFirmwareUpdate() {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  return proxy->StartUsbFirmwareUpdate(utility::GetAppletResourceUserId());
}

Result GetUsbFirmwareUpdateState(
  FirmwareUpdateState* pOutFirmwareUpdateState, int* pOutInt, int* pOutInt2) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  return proxy->GetUsbFirmwareUpdateState(utility::GetAppletResourceUserId(),
    pOutFirmwareUpdateState, pOutInt, pOutInt2);
}

Result IsFirmwareAvailableForNotification(
  bool* pOutBool, UniquePadId uniquePadId) {
  NN_ABORT_UNLESS_NOT_NULL(pOutBool);
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  bool value = {};
  const Result result = proxy->IsFirmwareAvailableForNotification(
    &value, 1, uniquePadId, utility::GetAppletResourceUserId());
  if (result.IsSuccess()) {
    *pOutBool = value;
  }
  return result;
}

}
