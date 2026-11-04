#include "nn/hid/detail/hid_abort.hpp"
#include "nn/hid/detail/hid_api.hpp"
#include "nn/hid/detail/hid_server.hpp"
#include "nn/hid/detail/hid_utility.hpp"

namespace nn::hid::detail {

Result GetGlGrButtonConfigState(
  bool* pOutBool, bool* pOutBool2, unsigned int unsignedint) {
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  return proxy->GetGlGrButtonConfigState(
    pOutBool, pOutBool2, unsignedint, utility::GetAppletResourceUserId());
}

}
