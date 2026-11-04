#include "nn/hid/detail/hid_abort.hpp"
#include "nn/hid/detail/hid_api.hpp"
#include "nn/hid/detail/hid_server.hpp"
#include "nn/hid/detail/hid_utility.hpp"

namespace nn::hid::system::detail {

Result EnableAutoTransitionPointerToNone(
  applet::AppletResourceUserId appletResourceUserId, bool isEnabled) {
  sf::SharedPointer<IHidSystemServer> proxy;
  NN_RESULT_DO(server::CreateHidSystemServerProxy(&proxy));
  return proxy->EnableAutoTransitionPointerToNone(
    isEnabled, appletResourceUserId);
}

Result EnableAutoTransitionPointerToNone(bool isEnabled) {
  const applet::AppletResourceUserId aruid = utility::GetAppletResourceUserId();
  sf::SharedPointer<IHidSystemServer> proxy;
  NN_RESULT_DO(server::CreateHidSystemServerProxy(&proxy));
  return proxy->EnableAutoTransitionPointerToNone(isEnabled, aruid);
}

Result IgnoreAutoTransitionPointerToNone(bool isEnabled) {
  sf::SharedPointer<IHidSystemServer> proxy;
  NN_RESULT_DO(server::CreateHidSystemServerProxy(&proxy));
  return proxy->IgnoreAutoTransitionPointerToNone(isEnabled);
}

Result GetNmousePointerSpeedScale(float* pOutFloat) {
  sf::SharedPointer<IHidSystemServer> proxy;
  NN_RESULT_DO(server::CreateHidSystemServerProxy(&proxy));
  return proxy->GetNmousePointerSpeedScale(
    pOutFloat, utility::GetAppletResourceUserId());
}

Result EnableNmouseMovementAdjustment(bool isEnabled) {
  sf::SharedPointer<IHidSystemServer> proxy;
  NN_RESULT_DO(server::CreateHidSystemServerProxy(&proxy));
  return proxy->EnableNmouseMovementAdjustment(
    isEnabled, utility::GetAppletResourceUserId());
}

Result IsEnabledNmouseMovementAdjustment(bool* pOutBool) {
  sf::SharedPointer<IHidSystemServer> proxy;
  NN_RESULT_DO(server::CreateHidSystemServerProxy(&proxy));
  return proxy->IsEnabledNmouseMovementAdjustment(
    pOutBool, utility::GetAppletResourceUserId());
}

Result SetOverlayNmousePointerRanges(int count, int count2) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  return proxy->SetOverlayNmousePointerRanges(
    utility::GetAppletResourceUserId(), count, count2);
}

}
