#include "nn/applet/applet_types.hpp"
#include "nn/hid/detail/hid_abort.hpp"
#include "nn/hid/detail/hid_api.hpp"

namespace nn::hid::system {

void InitializeGestureForSystemProcess() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::InitializeGestureForSystemProcess(1920, 1080));
}

void InitializeTouchScreenForSystemProcess() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::InitializeTouchScreenForSystemProcess(1920, 1080));
}

InteractiveArea GetInteractiveArea() {
  InteractiveArea area = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::GetInteractiveArea(&area));
  return area;
}

TouchScreenConfigurationForNx GetTouchScreenDefaultConfigurationForNx() {
  TouchScreenConfigurationForNx configuration = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::GetTouchScreenDefaultConfiguration(&configuration));
  return configuration;
}

Result SetIsWiredPairingEnabled(bool isEnabled) {
  return hid::system::detail::SetIsWiredPairingEnabled(
    isEnabled, applet::GetAppletResourceUserId());
}

Result GetUniquePadBluetoothAddress(bluetooth::Address* pOutAddress,
  UniquePadId uniquePadId) {
  NN_ABORT_UNLESS_NOT_NULL(pOutAddress);
  return hid::system::detail::GetUniquePadBluetoothAddress(
    pOutAddress, uniquePadId);
}

// A failure reads as no button.
util::BitFlagSet<64, UniquePadButton> GetUniquePadButtonSet(
  const UniquePadId& uniquePadId) {
  util::BitFlagSet<64, UniquePadButton> buttons = {};
  if (hid::system::detail::GetUniquePadButtonSet(&buttons, uniquePadId)
      .IsFailure()) {
    return {};
  }
  return buttons;
}

void SendVibrationNotificationPattern(const VibrationDeviceHandle& handle,
  VibrationNotificationPattern pattern) {
  NN_ABORT_UNLESS(static_cast<unsigned int>(pattern) < 6);
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::SendVibrationNotificationPattern(handle, pattern));
}

bool IsEnabledShowingCursor() {
  bool isEnabled = false;
  const Result result =
    hid::system::detail::IsEnabledShowingCursor(&isEnabled);
  return result.IsSuccess() & isEnabled;
}

}
