#include "nn/hid/detail/hid_abort.hpp"
#include "nn/hid/detail/hid_api.hpp"
#include "nn/hid/detail/hid_server.hpp"
#include "nn/hid/detail/hid_utility.hpp"

namespace nn::hid::system::detail {

Result GetVibrationMasterVolume(float* pOutFloat) {
  sf::SharedPointer<IHidSystemServer> proxy;
  NN_RESULT_DO(server::CreateHidSystemServerProxy(&proxy));
  return proxy->GetVibrationMasterVolume(pOutFloat);
}

Result SendVibrationNotificationPattern(
  const VibrationDeviceHandle& vibrationDeviceHandle, int count) {
  sf::SharedPointer<IHidSystemServer> proxy;
  NN_RESULT_DO(server::CreateHidSystemServerProxy(&proxy));
  return proxy->SendVibrationNotificationPattern(
    utility::GetAppletResourceUserId(), vibrationDeviceHandle, count);
}

Result SetAruidValidForVibration(
  const applet::AppletResourceUserId& appletResourceUserId, bool isEnabled) {
  sf::SharedPointer<IHidSystemServer> proxy;
  NN_RESULT_DO(server::CreateHidSystemServerProxy(&proxy));
  return proxy->SetAruidValidForVibration(appletResourceUserId, isEnabled);
}

Result SetForceHandheldStyleVibration(bool isEnabled) {
  sf::SharedPointer<IHidSystemServer> proxy;
  NN_RESULT_DO(server::CreateHidSystemServerProxy(&proxy));
  return proxy->SetForceHandheldStyleVibration(isEnabled);
}

}
