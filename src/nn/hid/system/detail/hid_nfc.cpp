#include "nn/hid/detail/hid_abort.hpp"
#include "nn/hid/detail/hid_api.hpp"
#include "nn/hid/detail/hid_server.hpp"
#include "nn/hid/detail/hid_utility.hpp"

namespace nn::hid::system::detail {

Result ActivateNfc(
  unsigned int& id, applet::AppletResourceUserId appletResourceUserId) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  return proxy->ActivateNfc(id, 1, appletResourceUserId);
}

Result DeactivateNfc(
  unsigned int& id, applet::AppletResourceUserId appletResourceUserId) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  return proxy->ActivateNfc(id, 0, appletResourceUserId);
}

Result IsNfcActivated(bool* pOutBool, unsigned int& id) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  return proxy->IsNfcActivated(pOutBool, id);
}

Result GetMcuVersionForNfc(McuVersionDataForNfc* pOutMcuVersionDataForNfc,
  AbstractedPadId abstractedPadId) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  return proxy->GetMcuVersionForNfc(pOutMcuVersionDataForNfc, abstractedPadId);
}

Result CheckNfcDevicePower(AbstractedPadId abstractedPadId) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  return proxy->CheckNfcDevicePower(abstractedPadId);
}

Result GetNfcInfo(NfcInfo* pOutNfcInfo, AbstractedPadId abstractedPadId) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  return proxy->GetNfcInfo(pOutNfcInfo, abstractedPadId);
}

Result StopNfcDiscovery(AbstractedPadId abstractedPadId) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  return proxy->StopNfcDiscovery(abstractedPadId);
}

Result StartNtagRead(
  const NtagReadParameter& ntagReadParameter, AbstractedPadId abstractedPadId) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  return proxy->StartNtagRead(ntagReadParameter, abstractedPadId);
}

Result StartNtagWrite(const NtagWriteParameter& ntagWriteParameter,
  AbstractedPadId abstractedPadId) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  return proxy->StartNtagWrite(ntagWriteParameter, abstractedPadId);
}

Result SendNfcRawData(const NfcPassThruParameter& nfcPassThruParameter,
  AbstractedPadId abstractedPadId) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  return proxy->SendNfcRawData(nfcPassThruParameter, abstractedPadId);
}

Result RegisterMifareKey(const MifareKeyWriteParameter& mifareKeyWriteParameter,
  AbstractedPadId abstractedPadId) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  return proxy->RegisterMifareKey(mifareKeyWriteParameter, abstractedPadId);
}

Result StartMifareRead(const MifareReadParameter& mifareReadParameter,
  AbstractedPadId abstractedPadId) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  return proxy->StartMifareRead(mifareReadParameter, abstractedPadId);
}

Result StartMifareWrite(const MifareWriteParameter& mifareWriteParameter,
  AbstractedPadId abstractedPadId) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  return proxy->StartMifareWrite(mifareWriteParameter, abstractedPadId);
}

Result StartNtagReadPlus(const NtagReadPlusParameter& ntagReadPlusParameter,
  AbstractedPadId abstractedPadId) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  return proxy->StartNtagReadPlus(ntagReadPlusParameter, abstractedPadId);
}

Result StartNtagWritePlus(const NtagWritePlusParameter& ntagWritePlusParameter,
  AbstractedPadId abstractedPadId) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  return proxy->StartNtagWritePlus(ntagWritePlusParameter, abstractedPadId);
}

Result StartNtagSramAccess(
  const NtagSramAccessParameter& ntagSramAccessParameter,
  AbstractedPadId abstractedPadId) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  return proxy->StartNtagSramAccess(ntagSramAccessParameter, abstractedPadId);
}

Result GetDataFormat(
  PeriodicDataFormat* pOutPeriodicDataFormat, AbstractedPadId abstractedPadId) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  PeriodicDataFormat value = {};
  const Result result = proxy->GetDataFormat(&value, abstractedPadId);
  if (result.IsSuccess()) {
    *pOutPeriodicDataFormat = value;
  }
  return result;
}

Result SetDataFormat(
  PeriodicDataFormat periodicDataFormat, AbstractedPadId abstractedPadId) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  return proxy->SetDataFormat(periodicDataFormat, abstractedPadId);
}

Result GetMcuState(McuState* pOutMcuState, AbstractedPadId abstractedPadId) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  McuState value = {};
  const Result result = proxy->GetMcuState(&value, abstractedPadId);
  if (result.IsSuccess()) {
    *pOutMcuState = value;
  }
  return result;
}

Result SetMcuState(McuState mcuState, AbstractedPadId abstractedPadId) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  return proxy->SetMcuState(mcuState, abstractedPadId);
}

Result SetMcuStateImmediate(
  McuState mcuState, AbstractedPadId abstractedPadId) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  return proxy->SetMcuStateImmediate(mcuState, abstractedPadId);
}

}
