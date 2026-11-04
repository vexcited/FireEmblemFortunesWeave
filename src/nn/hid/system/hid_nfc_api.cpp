#include "nn/hid/detail/hid_abort.hpp"
#include "nn/hid/detail/hid_api.hpp"
#include "nn/hid/detail/hid_npad_id.hpp"
#include "nn/hid/detail/hid_utility.hpp"

namespace nn::hid::system {

void BindNfcDeviceUpdateEvent(
  os::SystemEventType* pOutSystemEventType, os::EventClearMode eventClearMode) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::system::detail::BindNfcDeviceUpdateEvent(
    pOutSystemEventType, eventClearMode));
}

void BindNfcActivateEvent(unsigned int unsignedint,
  os::SystemEventType* pOutSystemEventType, os::EventClearMode eventClearMode) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::system::detail::BindNfcActivateEvent(
    unsignedint, pOutSystemEventType, eventClearMode));
}

bool IsNfcActivated(unsigned int unsignedint) {
  bool value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::IsNfcActivated(&value, unsignedint));
  return value;
}

void ActivateNfc(
  unsigned int unsignedint, applet::AppletResourceUserId appletResourceUserId) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::ActivateNfc(unsignedint, appletResourceUserId));
}

void DeactivateNfc(
  unsigned int unsignedint, applet::AppletResourceUserId appletResourceUserId) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::DeactivateNfc(unsignedint, appletResourceUserId));
}

Result GetMcuVersionForNfc(McuVersionDataForNfc* pOutMcuVersionDataForNfc,
  AbstractedPadId abstractedPadId) {
  return hid::system::detail::GetMcuVersionForNfc(
    pOutMcuVersionDataForNfc, abstractedPadId);
}

Result CheckNfcDevicePower(AbstractedPadId abstractedPadId) {
  return hid::system::detail::CheckNfcDevicePower(abstractedPadId);
}

Result SetNfcEvent(os::SystemEventType* pOutSystemEventType,
  os::SystemEventType* pOutSystemEventType2, AbstractedPadId abstractedPadId) {
  return hid::system::detail::SetNfcEvent(
    pOutSystemEventType, pOutSystemEventType2, abstractedPadId);
}

Result GetNfcInfo(NfcInfo* pOutNfcInfo, AbstractedPadId abstractedPadId) {
  return hid::system::detail::GetNfcInfo(pOutNfcInfo, abstractedPadId);
}

Result StartNfcDiscovery(const NfcDiscoveryParameter& nfcDiscoveryParameter,
  AbstractedPadId abstractedPadId) {
  return hid::system::detail::StartNfcDiscovery(
    nfcDiscoveryParameter, abstractedPadId);
}

Result StopNfcDiscovery(AbstractedPadId abstractedPadId) {
  return hid::system::detail::StopNfcDiscovery(abstractedPadId);
}

Result StartNtagRead(
  const NtagReadParameter& ntagReadParameter, AbstractedPadId abstractedPadId) {
  return hid::system::detail::StartNtagRead(ntagReadParameter, abstractedPadId);
}

Result StartNtagWrite(const NtagWriteParameter& ntagWriteParameter,
  AbstractedPadId abstractedPadId) {
  return hid::system::detail::StartNtagWrite(
    ntagWriteParameter, abstractedPadId);
}

Result SendNfcRawData(const NfcPassThruParameter& nfcPassThruParameter,
  AbstractedPadId abstractedPadId) {
  return hid::system::detail::SendNfcRawData(
    nfcPassThruParameter, abstractedPadId);
}

Result RegisterMifareKey(const MifareKeyWriteParameter& mifareKeyWriteParameter,
  AbstractedPadId abstractedPadId) {
  return hid::system::detail::RegisterMifareKey(
    mifareKeyWriteParameter, abstractedPadId);
}

Result ClearMifareKey(const MifareKeyClearParameter& mifareKeyClearParameter,
  AbstractedPadId abstractedPadId) {
  return hid::system::detail::ClearMifareKey(
    mifareKeyClearParameter, abstractedPadId);
}

Result StartMifareRead(const MifareReadParameter& mifareReadParameter,
  AbstractedPadId abstractedPadId) {
  return hid::system::detail::StartMifareRead(
    mifareReadParameter, abstractedPadId);
}

Result StartMifareWrite(const MifareWriteParameter& mifareWriteParameter,
  AbstractedPadId abstractedPadId) {
  return hid::system::detail::StartMifareWrite(
    mifareWriteParameter, abstractedPadId);
}

Result StartNtagReadPlus(const NtagReadPlusParameter& ntagReadPlusParameter,
  AbstractedPadId abstractedPadId) {
  return hid::system::detail::StartNtagReadPlus(
    ntagReadPlusParameter, abstractedPadId);
}

Result StartNtagWritePlus(const NtagWritePlusParameter& ntagWritePlusParameter,
  AbstractedPadId abstractedPadId) {
  return hid::system::detail::StartNtagWritePlus(
    ntagWritePlusParameter, abstractedPadId);
}

Result StartNtagSramAccess(
  const NtagSramAccessParameter& ntagSramAccessParameter,
  AbstractedPadId abstractedPadId) {
  return hid::system::detail::StartNtagSramAccess(
    ntagSramAccessParameter, abstractedPadId);
}

Result GetDataFormat(
  PeriodicDataFormat* pOutPeriodicDataFormat, AbstractedPadId abstractedPadId) {
  return hid::system::detail::GetDataFormat(
    pOutPeriodicDataFormat, abstractedPadId);
}

Result SetDataFormat(
  PeriodicDataFormat periodicDataFormat, AbstractedPadId abstractedPadId) {
  return hid::system::detail::SetDataFormat(
    periodicDataFormat, abstractedPadId);
}

Result GetMcuState(McuState* pOutMcuState, AbstractedPadId abstractedPadId) {
  return hid::system::detail::GetMcuState(pOutMcuState, abstractedPadId);
}

Result SetMcuState(McuState mcuState, AbstractedPadId abstractedPadId) {
  return hid::system::detail::SetMcuState(mcuState, abstractedPadId);
}

Result SetMcuStateImmediate(
  McuState mcuState, AbstractedPadId abstractedPadId) {
  return hid::system::detail::SetMcuStateImmediate(mcuState, abstractedPadId);
}

}
