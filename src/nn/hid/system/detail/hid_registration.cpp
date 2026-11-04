#include "nn/hid/detail/hid_abort.hpp"
#include "nn/hid/detail/hid_api.hpp"
#include "nn/hid/detail/hid_server.hpp"
#include "nn/hid/detail/hid_utility.hpp"

namespace nn::hid::system::detail {

Result StartWirelessRegistration(
  const applet::AppletResourceUserId& appletResourceUserId) {
  sf::SharedPointer<IHidSystemServer> proxy;
  NN_RESULT_DO(server::CreateHidSystemServerProxy(&proxy));
  return proxy->StartWirelessRegistration(appletResourceUserId);
}

void StopWirelessRegistration(
  const applet::AppletResourceUserId& appletResourceUserId) {
  sf::SharedPointer<IHidSystemServer> proxy;
  if (server::CreateHidSystemServerProxy(&proxy).IsSuccess()) {
    proxy->StopWirelessRegistration(appletResourceUserId);
  }
}

void ClearRegisteredDevices(
  const applet::AppletResourceUserId& appletResourceUserId) {
  sf::SharedPointer<IHidSystemServer> proxy;
  if (server::CreateHidSystemServerProxy(&proxy).IsSuccess()) {
    proxy->ClearRegisteredDevices(appletResourceUserId);
  }
}

void SetIsWiredPairingEnabled(
  bool isEnabled, const applet::AppletResourceUserId& appletResourceUserId) {
  sf::SharedPointer<IHidSystemServer> proxy;
  if (server::CreateHidSystemServerProxy(&proxy).IsSuccess()) {
    proxy->SetIsWiredPairingEnabled(isEnabled, appletResourceUserId);
  }
}

}
