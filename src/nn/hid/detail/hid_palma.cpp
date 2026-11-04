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

namespace nn::hid::detail {

Result InitializePalma(const PalmaConnectionHandle& palmaConnectionHandle) {
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  return proxy->InitializePalma(palmaConnectionHandle);
}

Result PlayPalmaActivity(const PalmaConnectionHandle& palmaConnectionHandle, const unsigned short& value) {
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  return proxy->PlayPalmaActivity(palmaConnectionHandle, value);
}

Result SetPalmaFrModeType(const PalmaConnectionHandle& palmaConnectionHandle, const PalmaFrModeType& palmaFrModeType) {
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  return proxy->SetPalmaFrModeType(palmaConnectionHandle, palmaFrModeType);
}

Result ReadPalmaStep(const PalmaConnectionHandle& palmaConnectionHandle) {
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  return proxy->ReadPalmaStep(palmaConnectionHandle);
}

Result EnablePalmaStep(const PalmaConnectionHandle& palmaConnectionHandle, bool isEnabled) {
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  return proxy->EnablePalmaStep(palmaConnectionHandle, isEnabled);
}

Result ResetPalmaStep(const PalmaConnectionHandle& palmaConnectionHandle) {
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  return proxy->ResetPalmaStep(palmaConnectionHandle);
}

Result ReadPalmaUniqueCode(const PalmaConnectionHandle& palmaConnectionHandle) {
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  return proxy->ReadPalmaUniqueCode(palmaConnectionHandle);
}

Result SetPalmaUniqueCodeInvalid(const PalmaConnectionHandle& palmaConnectionHandle) {
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  return proxy->SetPalmaUniqueCodeInvalid(palmaConnectionHandle);
}

Result SetPalmaDataBaseIdentificationVersion(const PalmaConnectionHandle& palmaConnectionHandle, int count) {
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  return proxy->SetPalmaDataBaseIdentificationVersion(palmaConnectionHandle, count);
}

Result GetPalmaDataBaseIdentificationVersion(const PalmaConnectionHandle& palmaConnectionHandle) {
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  return proxy->GetPalmaDataBaseIdentificationVersion(palmaConnectionHandle);
}

Result SuspendPalmaFeature(const PalmaConnectionHandle& palmaConnectionHandle, const util::BitFlagSet<32, PalmaFeature>& bitFlagSet) {
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  return proxy->SuspendPalmaFeature(palmaConnectionHandle, bitFlagSet);
}

Result ReadPalmaPlayLog(const PalmaConnectionHandle& palmaConnectionHandle, const unsigned short& value) {
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  return proxy->ReadPalmaPlayLog(palmaConnectionHandle, value);
}

Result ResetPalmaPlayLog(const PalmaConnectionHandle& palmaConnectionHandle, const unsigned short& value) {
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  return proxy->ResetPalmaPlayLog(palmaConnectionHandle, value);
}

Result PairPalma(const PalmaConnectionHandle& palmaConnectionHandle) {
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  return proxy->PairPalma(palmaConnectionHandle);
}

Result CancelWritePalmaWaveEntry(const PalmaConnectionHandle& palmaConnectionHandle) {
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  return proxy->CancelWritePalmaWaveEntry(palmaConnectionHandle);
}

Result GetPalmaBluetoothAddress(bluetooth::Address* pOutAddress, const PalmaConnectionHandle& palmaConnectionHandle) {
  sf::SharedPointer<IHidServer> proxy;
  NN_RESULT_DO(server::CreateHidServerProxy(&proxy));
  return proxy->GetPalmaBluetoothAddress(pOutAddress, palmaConnectionHandle);
}

}
