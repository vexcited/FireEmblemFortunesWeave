#include "nn/hid/detail/hid_abort.hpp"
#include "nn/hid/detail/hid_api.hpp"
#include "nn/hid/detail/hid_server.hpp"
#include "nn/hid/detail/hid_utility.hpp"

namespace nn::hid::detail {

Result GetPalmaConnectionHandle(
  PalmaConnectionHandle* pOutPalmaConnectionHandle, const NpadIdType& id) {
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  return proxy->GetPalmaConnectionHandle(
    pOutPalmaConnectionHandle, id, utility::GetAppletResourceUserId());
}

Result EnablePairedPalmaConnection() {
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  return proxy->EnablePairedPalmaConnection(
    utility::GetAppletResourceUserId(), 1);
}

Result DisablePairedPalmaConnection() {
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  return proxy->EnablePairedPalmaConnection(
    utility::GetAppletResourceUserId(), 0);
}

Result EnableAnyPalmaConnection() {
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  return proxy->EnableAnyPalmaConnection(utility::GetAppletResourceUserId(), 1);
}

Result DisableAnyPalmaConnection() {
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  return proxy->EnableAnyPalmaConnection(utility::GetAppletResourceUserId(), 0);
}

Result SetPalmaBoostMode(bool isEnabled) {
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  return proxy->SetPalmaBoostMode(isEnabled);
}

Result EnablePalmaBoostMode(bool isEnabled) {
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  return proxy->EnablePalmaBoostMode(
    utility::GetAppletResourceUserId(), isEnabled);
}

}
