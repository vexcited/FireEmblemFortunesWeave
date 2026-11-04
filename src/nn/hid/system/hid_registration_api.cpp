#include "nn/hid/detail/hid_abort.hpp"
#include "nn/hid/detail/hid_api.hpp"
#include "nn/hid/detail/hid_npad_id.hpp"
#include "nn/hid/detail/hid_utility.hpp"

namespace nn::hid::system {

int GetRegisteredDevices(RegisteredDevice* pOutRegisteredDevice, int count) {
  int value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::system::detail::GetRegisteredDevices(
    &value, pOutRegisteredDevice, count));
  return value;
}

int GetRegisteredDevices(RegisteredDeviceForControllerSupport*
                           pOutRegisteredDeviceForControllerSupport,
  int count) {
  int value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::system::detail::GetRegisteredDevices(
    &value, pOutRegisteredDeviceForControllerSupport, count));
  return value;
}

int GetConnectableRegisteredDevices(
  RegisteredDevice* pOutRegisteredDevice, int count) {
  int value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::GetConnectableRegisteredDevices(
      &value, pOutRegisteredDevice, count));
  return value;
}

void BindConnectionTriggerTimeoutEvent(
  os::SystemEventType* pOutSystemEventType, os::EventClearMode eventClearMode) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::BindConnectionTriggerTimeoutEvent(
      pOutSystemEventType, eventClearMode));
}

Result SendConnectionTrigger(bluetooth::Address address) {
  return hid::system::detail::SendConnectionTrigger(address);
}

Result SendConnectionTriggerWithoutTimeoutEvent(bluetooth::Address address) {
  return hid::system::detail::SendConnectionTriggerWithoutTimeoutEvent(address);
}

Result CancelConnectionTrigger(const bluetooth::Address& address) {
  return hid::system::detail::CancelConnectionTrigger(address);
}

void BindDeviceRegisteredEventForControllerSupport(
  os::SystemEventType* pOutSystemEventType, os::EventClearMode eventClearMode) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::BindDeviceRegisteredEventForControllerSupport(
      pOutSystemEventType, eventClearMode));
}

void BindWirelessRegistrationStateChangedEvent(
  os::SystemEventType* pOutSystemEventType, os::EventClearMode eventClearMode) {
  const applet::AppletResourceUserId aruid = applet::GetAppletResourceUserId();
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::BindWirelessRegistrationStateChangedEvent(
      pOutSystemEventType, eventClearMode, aruid));
}

Result StartWirelessRegistration() {
  const applet::AppletResourceUserId aruid = applet::GetAppletResourceUserId();
  return hid::system::detail::StartWirelessRegistration(aruid);
}

void StopWirelessRegistration() {
  const applet::AppletResourceUserId aruid = applet::GetAppletResourceUserId();
  hid::system::detail::StopWirelessRegistration(aruid);
}

bool IsWirelessRegistrationStarted() {
  const applet::AppletResourceUserId aruid = applet::GetAppletResourceUserId();
  return hid::system::detail::IsWirelessRegistrationStarted(aruid);
}

void ClearRegisteredDevices() {
  const applet::AppletResourceUserId aruid = applet::GetAppletResourceUserId();
  hid::system::detail::ClearRegisteredDevices(aruid);
}

bool IsWiredPairingEnabled() {
  const applet::AppletResourceUserId aruid = applet::GetAppletResourceUserId();
  return hid::system::detail::IsWiredPairingEnabled(aruid);
}

Result GetRegisteredDeviceCount() {
  const applet::AppletResourceUserId aruid = applet::GetAppletResourceUserId();
  return hid::system::detail::GetRegisteredDeviceCount(aruid);
}

void BindPlayReportRegisteredDeviceUpdateEvent(
  os::SystemEventType* pOutSystemEventType, os::EventClearMode eventClearMode) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::BindPlayReportRegisteredDeviceUpdateEvent(
      pOutSystemEventType, eventClearMode));
}

}
