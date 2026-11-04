#include "nn/hid/detail/hid_abort.hpp"
#include "nn/hid/detail/hid_api.hpp"
#include "nn/hid/detail/hid_server.hpp"
#include "nn/hid/detail/hid_utility.hpp"

namespace nn::hid::detail {

Result IsFirmwareUpdateNeededForNotification(bool* pOutBool) {
  NN_ABORT_UNLESS_NOT_NULL(pOutBool);
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  bool value = {};
  const Result result = proxy->IsFirmwareUpdateNeededForNotification(
    &value, 1, utility::GetAppletResourceUserId());
  if (result.IsSuccess()) {
    *pOutBool = value;
  }
  return result;
}

}
