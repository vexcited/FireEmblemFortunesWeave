#include "nn/hid/detail/hid_abort.hpp"
#include "nn/hid/detail/hid_api.hpp"
#include "nn/hid/detail/hid_server.hpp"
#include "nn/hid/detail/hid_utility.hpp"

namespace nn::hid::detail {

Result EnableNxTouchScreenEmulationForTouchEnter(bool isEnabled) {
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  return proxy->EnableNxTouchScreenEmulationForTouchEnter(
    utility::GetAppletResourceUserId(), isEnabled);
}

}
