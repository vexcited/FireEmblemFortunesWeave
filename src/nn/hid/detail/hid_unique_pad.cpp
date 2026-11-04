#include "nn/hid/detail/hid_abort.hpp"
#include "nn/hid/detail/hid_api.hpp"
#include "nn/hid/detail/hid_server.hpp"
#include "nn/hid/detail/hid_utility.hpp"

namespace nn::hid::detail {

Result GetPlayerLedPattern(
  unsigned char* pOutUnsignedchar, const NpadIdType& id) {
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  unsigned char value;
  const Result result = proxy->GetPlayerLedPattern(&value, id);
  if (result.IsSuccess()) {
    *pOutUnsignedchar = value;
  }
  return result;
}

}
