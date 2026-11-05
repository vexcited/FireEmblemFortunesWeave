#include "nn/hid/detail/hid_abort.hpp"
#include "nn/hid/detail/hid_api.hpp"
#include "nn/hid/detail/hid_server.hpp"
#include "nn/hid/detail/hid_utility.hpp"
#include "nn/os/system_event.hpp"

namespace nn::hid::utility {

void ConvertFirmwareVersionToStringType(
  system::FirmwareVersionString* pOutString,
  const system::FirmwareVersion& version,
  const util::BitFlagSet<32, system::DeviceType>& deviceType);

}

namespace nn::hid::system::detail {

namespace {

Result AttachReadableEvent(os::SystemEventType* pEvent,
  sf::NativeHandle& handle, os::EventClearMode clearMode, Result result) {
  if (result.IsSuccess()) {
    os::AttachReadableHandleToSystemEvent(pEvent, handle.GetOsHandle(),
      handle.IsManaged(), clearMode);
    handle.Detach();
  }

  return result;
}

template <typename Config>
Result GetButtonConfigImpl(Config* pOutConfig, const UniquePadId& id,
  Result (IHidSystemServer::*pGetter)(Config*, UniquePadId)) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  Config config = {};
  NN_RESULT_DO((proxy.Get()->*pGetter)(&config, id));
  *pOutConfig = config;
  return Result();
}

}

Result GetFirmwareVersionString(FirmwareVersionString* pOutString,
  UniquePadId id) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  FirmwareVersion version = {};
  NN_RESULT_DO(proxy->GetFirmwareVersion(&version, id));
  util::BitFlagSet<32, DeviceType> deviceType = {};
  NN_RESULT_DO(proxy->GetDeviceType(&deviceType, id));
  utility::ConvertFirmwareVersionToStringType(pOutString, version,
    deviceType);
  return Result();
}

Result GetAvailableFirmwareVersionString(FirmwareVersionString* pOutString,
  UniquePadId id) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  FirmwareVersion version = {};
  NN_RESULT_DO(proxy->GetAvailableFirmwareVersion(&version, id));
  util::BitFlagSet<32, DeviceType> deviceType = {};
  NN_RESULT_DO(proxy->GetDeviceType(&deviceType, id));
  utility::ConvertFirmwareVersionToStringType(pOutString, version,
    deviceType);
  return Result();
}

Result GetButtonConfig(hidconfig::ButtonConfigEmbedded* pOutConfig,
  const UniquePadId& id) {
  return GetButtonConfigImpl(pOutConfig, id,
    &IHidSystemServer::GetButtonConfigEmbedded);
}

Result GetButtonConfig(hidconfig::ButtonConfigFull* pOutConfig,
  const UniquePadId& id) {
  return GetButtonConfigImpl(pOutConfig, id,
    &IHidSystemServer::GetButtonConfigFull);
}

Result GetButtonConfig(hidconfig::ButtonConfigLeft* pOutConfig,
  const UniquePadId& id) {
  return GetButtonConfigImpl(pOutConfig, id,
    &IHidSystemServer::GetButtonConfigLeft);
}

Result GetButtonConfig(hidconfig::ButtonConfigRight* pOutConfig,
  const UniquePadId& id) {
  return GetButtonConfigImpl(pOutConfig, id,
    &IHidSystemServer::GetButtonConfigRight);
}

Result BindInteractiveAreaChangedEvent(os::SystemEventType* pEvent) {
  sf::SharedPointer<IHidSystemServer> proxy;
  NN_RESULT_DO(server::CreateHidSystemServerProxy(&proxy));
  sf::NativeHandle handle;
  return AttachReadableEvent(pEvent, handle, os::EventClearMode_AutoClear,
    proxy->AcquireInteractiveAreaChangedEventHandle(&handle,
      utility::GetAppletResourceUserId()));
}

Result BindJoyDetachOnBluetoothOffEvent(os::SystemEventType* pEvent,
  os::EventClearMode clearMode) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  sf::NativeHandle handle;
  return AttachReadableEvent(pEvent, handle, clearMode,
    proxy->AcquireJoyDetachOnBluetoothOffEventHandle(&handle,
      utility::GetAppletResourceUserId()));
}

Result BindNfcActivateEvent(NpadIdType& id, os::SystemEventType* pEvent,
  os::EventClearMode clearMode) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  sf::NativeHandle handle;
  return AttachReadableEvent(pEvent, handle, clearMode,
    proxy->AcquireNfcActivateEventHandle(&handle, id));
}

Result GetUniquePadsFromNpad(int* pOutCount, UniquePadId* pOutIds, int count,
  const NpadIdType& id) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  int64_t outCount = 0;
  NN_RESULT_DO(proxy->GetUniquePadsFromNpad(&outCount,
    sf::OutArray<UniquePadId>(pOutIds, count), id));
  *pOutCount = static_cast<int>(outCount);
  return Result();
}

Result GetAbstractedPadIdDataFromNpad(int* pOutCount, long* pOutData,
  int count, const NpadIdType& id) {
  sf::SharedPointer<IHidSystemServer> proxy;
  NN_RESULT_DO(server::CreateHidSystemServerProxy(&proxy));
  int64_t outCount = 0;
  NN_RESULT_DO(proxy->GetAbstractedPadIdDataFromNpad(&outCount,
    sf::OutArray<int64_t>(pOutData, count), id));
  *pOutCount = static_cast<int>(outCount);
  return Result();
}

Result BindPlayReportControllerUsageUpdateEvent(os::SystemEventType* pEvent,
  os::EventClearMode clearMode) {
  sf::SharedPointer<IHidSystemServer> proxy;
  NN_RESULT_DO(server::CreateHidSystemServerProxy(&proxy));
  sf::NativeHandle handle;
  return AttachReadableEvent(pEvent, handle, clearMode,
    proxy->AcquirePlayReportControllerUsageUpdateEvent(&handle));
}

Result GetPlayReportControllerUsages(int* pOutCount,
  PlayReportControllerUsage* pOutUsages, int count) {
  sf::SharedPointer<IHidSystemServer> proxy;
  NN_RESULT_DO(server::CreateHidSystemServerProxy(&proxy));
  int64_t outCount = 0;
  NN_RESULT_DO(proxy->GetPlayReportControllerUsages(&outCount,
    sf::OutArray<PlayReportControllerUsage>(pOutUsages, count)));
  *pOutCount = static_cast<int>(outCount);
  return Result();
}

Result BindPlayReportRegisteredDeviceUpdateEvent(os::SystemEventType* pEvent,
  os::EventClearMode clearMode) {
  sf::SharedPointer<IHidSystemServer> proxy;
  NN_RESULT_DO(server::CreateHidSystemServerProxy(&proxy));
  sf::NativeHandle handle;
  return AttachReadableEvent(pEvent, handle, clearMode,
    proxy->AcquirePlayReportRegisteredDeviceUpdateEvent(&handle));
}

Result BindSleepButtonEvent(os::SystemEventType* pEvent,
  os::EventClearMode clearMode) {
  sf::SharedPointer<IHidSystemServer> proxy;
  NN_RESULT_DO(server::CreateHidSystemServerProxy(&proxy));
  sf::NativeHandle handle;
  return AttachReadableEvent(pEvent, handle, clearMode,
    proxy->AcquireSleepButtonEventHandle(&handle, 0));
}

}
