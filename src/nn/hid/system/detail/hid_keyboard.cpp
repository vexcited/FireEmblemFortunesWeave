#include "nn/hid/detail/hid_abort.hpp"
#include "nn/hid/detail/hid_api.hpp"
#include "nn/hid/detail/hid_server.hpp"
#include "nn/hid/detail/hid_utility.hpp"

namespace nn::hid::system::detail {

Result SendKeyboardLockKeyEvent(
  util::BitFlagSet<32, KeyboardLockKeyEvent> bitFlagSet) {
  sf::SharedPointer<IHidSystemServer> proxy;
  NN_RESULT_DO(server::CreateHidSystemServerProxy(&proxy));
  return proxy->SendKeyboardLockKeyEvent(bitFlagSet);
}

Result SetSystemKeyboardState(const SystemKeyboardState& systemKeyboardState,
  const applet::AppletResourceUserId& appletResourceUserId) {
  sf::SharedPointer<IHidSystemServer> proxy;
  NN_RESULT_DO(server::CreateHidSystemServerProxy(&proxy));
  return proxy->SetSystemKeyboardState(
    systemKeyboardState, appletResourceUserId);
}

Result UnsetSystemKeyboardState() {
  sf::SharedPointer<IHidSystemServer> proxy;
  NN_RESULT_DO(server::CreateHidSystemServerProxy(&proxy));
  return proxy->UnsetSystemKeyboardState();
}

}
