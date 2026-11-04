#include "nn/hid/detail/hid_abort.hpp"
#include "nn/hid/detail/hid_api.hpp"
#include "nn/hid/detail/hid_server.hpp"
#include "nn/hid/detail/hid_utility.hpp"

namespace nn::hid::system::detail {

Result GetTouchScreenDefaultConfiguration(
  TouchScreenConfigurationForNx* pOutTouchScreenConfigurationForNx) {
  sf::SharedPointer<IHidSystemServer> proxy;
  NN_RESULT_DO(server::CreateHidSystemServerProxy(&proxy));
  return proxy->GetTouchScreenDefaultConfiguration(
    pOutTouchScreenConfigurationForNx);
}

Result GetTouchScreenFirmwareVersion(FirmwareVersion* pOutFirmwareVersion) {
  sf::SharedPointer<IHidSystemServer> proxy;
  NN_RESULT_DO(server::CreateHidSystemServerProxy(&proxy));
  return proxy->GetTouchScreenFirmwareVersion(pOutFirmwareVersion);
}

Result StartTouchScreenAutoTuneForSystemSettings() {
  sf::SharedPointer<IHidSystemServer> proxy;
  NN_RESULT_DO(server::CreateHidSystemServerProxy(&proxy));
  return proxy->StartTouchScreenAutoTuneForSystemSettings();
}

Result ClearDetectedEsdEvent() {
  sf::SharedPointer<IHidSystemServer> proxy;
  NN_RESULT_DO(server::CreateHidSystemServerProxy(&proxy));
  return proxy->ClearDetectedEsdEvent();
}

Result IsEsdDetected(bool* pOutBool) {
  sf::SharedPointer<IHidSystemServer> proxy;
  NN_RESULT_DO(server::CreateHidSystemServerProxy(&proxy));
  return proxy->IsEsdDetected(pOutBool);
}

Result RequestToFetchDisplayStatusReport() {
  sf::SharedPointer<IHidSystemServer> proxy;
  NN_RESULT_DO(server::CreateHidSystemServerProxy(&proxy));
  return proxy->RequestToFetchDisplayStatusReport();
}

Result GetDisplayStatusReport(DisplayStatusReport* pOutDisplayStatusReport) {
  sf::SharedPointer<IHidSystemServer> proxy;
  NN_RESULT_DO(server::CreateHidSystemServerProxy(&proxy));
  return proxy->GetDisplayStatusReport(pOutDisplayStatusReport);
}

Result EnableAppletToGetTouchScreen(
  const applet::AppletResourceUserId& appletResourceUserId, bool isEnabled) {
  sf::SharedPointer<IHidSystemServer> proxy;
  NN_RESULT_DO(server::CreateHidSystemServerProxy(&proxy));
  return proxy->EnableAppletToGetTouchScreen(appletResourceUserId, isEnabled);
}

}

namespace nn::hid::system::detail {

Result SetTouchScreenMagnification(float value, float value2, float value3, float value4) {
  sf::SharedPointer<IHidSystemServer> proxy;
  NN_RESULT_DO(server::CreateHidSystemServerProxy(&proxy));
  return proxy->SetTouchScreenMagnification(value, value2, value3, value4);
}

Result SetTouchScreenOffset(float value, float value2) {
  sf::SharedPointer<IHidSystemServer> proxy;
  NN_RESULT_DO(server::CreateHidSystemServerProxy(&proxy));
  return proxy->SetTouchScreenOffset(value, value2);
}

}
