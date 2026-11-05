#include "nn/diag/unexpected_default.hpp"
#include "nn/hid/detail/hid_abort.hpp"
#include "nn/hid/detail/hid_server.hpp"
#include "nn/os/system_event.hpp"

namespace nn::hid::system::detail {

namespace {

template <typename Acquire>
Result BindSystemEvent(os::SystemEventType* pEvent,
  os::EventClearMode clearMode, Acquire acquire) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);

  sf::NativeHandle handle;
  NN_RESULT_DO(acquire(proxy, &handle));

  os::AttachReadableHandleToSystemEvent(pEvent, handle.GetOsHandle(),
    handle.IsManaged(), clearMode);
  handle.Detach();
  return {};
}

}

Result GetNpadJoyHoldType(NpadJoyHoldType* pOutType,
  const applet::AppletResourceUserId& aruid) {
  sf::SharedPointer<IHidSystemServer> proxy;
  NN_RESULT_DO(server::CreateHidSystemServerProxy(&proxy));

  int64_t value = 0;
  NN_RESULT_DO(proxy->GetNpadJoyHoldType(aruid, &value));
  switch (value) {
    case 0:
    case 1:
      *pOutType = static_cast<NpadJoyHoldType>(value);
      return {};
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
}

Result GetRegisteredDevices(int* pOutCount, RegisteredDevice* pOutDevices,
  int count) {
  sf::SharedPointer<IHidSystemServer> proxy;
  NN_RESULT_DO(server::CreateHidSystemServerProxy(&proxy));

  int64_t outCount = 0;
  NN_RESULT_DO(proxy->GetRegisteredDevicesOld(&outCount,
    sf::OutArray<RegisteredDevice>(pOutDevices, count)));
  *pOutCount = outCount;
  return {};
}

Result GetRegisteredDevices(int* pOutCount,
  RegisteredDeviceForControllerSupport* pOutDevices, int count) {
  sf::SharedPointer<IHidSystemServer> proxy;
  NN_RESULT_DO(server::CreateHidSystemServerProxy(&proxy));

  int64_t outCount = 0;
  NN_RESULT_DO(proxy->GetRegisteredDevices(&outCount,
    sf::OutArray<RegisteredDeviceForControllerSupport>(pOutDevices, count)));
  *pOutCount = outCount;
  return {};
}

Result GetConnectableRegisteredDevices(int* pOutCount,
  RegisteredDevice* pOutDevices, int count) {
  sf::SharedPointer<IHidSystemServer> proxy;
  NN_RESULT_DO(server::CreateHidSystemServerProxy(&proxy));

  int64_t outCount = 0;
  NN_RESULT_DO(proxy->GetConnectableRegisteredDevices(&outCount,
    sf::OutArray<RegisteredDevice>(pOutDevices, count)));
  *pOutCount = outCount;
  return {};
}

Result BindConnectionTriggerTimeoutEvent(os::SystemEventType* pEvent,
  os::EventClearMode clearMode) {
  return BindSystemEvent(pEvent, clearMode,
    [](sf::SharedPointer<IHidSystemServer>& proxy, sf::NativeHandle* pOut) {
      return proxy->AcquireConnectionTriggerTimeoutEvent(pOut);
    });
}

Result SendConnectionTrigger(bluetooth::Address address) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  return proxy->SendConnectionTrigger(address);
}

Result SendConnectionTriggerWithoutTimeoutEvent(bluetooth::Address address) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  return proxy->SendConnectionTriggerWithoutTimeoutEvent(address);
}

Result CancelConnectionTrigger(const bluetooth::Address& address) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  return proxy->CancelConnectionTrigger(address);
}

Result BindDeviceRegisteredEventForControllerSupport(
  os::SystemEventType* pEvent, os::EventClearMode clearMode) {
  return BindSystemEvent(pEvent, clearMode,
    [](sf::SharedPointer<IHidSystemServer>& proxy, sf::NativeHandle* pOut) {
      return proxy->AcquireDeviceRegisteredEventForControllerSupport(pOut);
    });
}

int GetAllowedBluetoothLinksCount() {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);

  int64_t count = 0;
  if (proxy->GetAllowedBluetoothLinksCount(&count).IsFailure()) {
    return 0;
  }

  return count;
}

Result BindWirelessRegistrationStateChangedEvent(os::SystemEventType* pEvent,
  os::EventClearMode clearMode, const applet::AppletResourceUserId& aruid) {
  return BindSystemEvent(pEvent, clearMode,
    [&aruid](sf::SharedPointer<IHidSystemServer>& proxy,
      sf::NativeHandle* pOut) {
      return proxy->AcquireWirelessRegistrationStateChangedEvent(pOut, aruid);
    });
}

bool IsWirelessRegistrationStarted(const applet::AppletResourceUserId& aruid) {
  bool isStarted = false;
  sf::SharedPointer<IHidSystemServer> proxy;
  if (server::CreateHidSystemServerProxy(&proxy).IsFailure() ||
      proxy->IsWirelessRegistrationStarted(&isStarted, aruid).IsFailure()) {
    return false;
  }

  return isStarted;
}

bool IsWiredPairingEnabled(const applet::AppletResourceUserId& aruid) {
  sf::SharedPointer<IHidSystemServer> proxy;
  bool isEnabled = false;
  if (server::CreateHidSystemServerProxy(&proxy).IsFailure() ||
      proxy->IsWiredPairingEnabled(&isEnabled, aruid).IsFailure()) {
    return false;
  }

  return isEnabled;
}

int GetRegisteredDeviceCount(const applet::AppletResourceUserId& aruid) {
  int32_t count = 0;
  sf::SharedPointer<IHidSystemServer> proxy;
  int result = 0;
  if (server::CreateHidSystemServerProxy(&proxy).IsSuccess()) {
    result = proxy->GetRegisteredDeviceCount(&count, aruid).IsFailure()
      ? 0
      : count;
  }

  return result;
}

int GetRegisteredPalmaCount(const applet::AppletResourceUserId& aruid) {
  int32_t count = 0;
  sf::SharedPointer<IHidSystemServer> proxy;
  int result = 0;
  if (server::CreateHidSystemServerProxy(&proxy).IsSuccess()) {
    result = proxy->GetRegisteredPalmaCount(&count, aruid).IsFailure()
      ? 0
      : count;
  }

  return result;
}

}
