#include "nn/hid/detail/hid_abort.hpp"
#include "nn/hid/detail/hid_api.hpp"
#include "nn/hid/detail/hid_server.hpp"
#include "nn/hid/detail/hid_utility.hpp"

namespace nn::hid::detail {

Result SendKeyboardLockKeyEvent(
  util::BitFlagSet<32, KeyboardLockKeyEvent> bitFlagSet) {
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  return proxy->SendKeyboardLockKeyEvent(
    utility::GetAppletResourceUserId(), bitFlagSet);
}

}
