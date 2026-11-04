#include "nn/hid/detail/hid_abort.hpp"
#include "nn/hid/detail/hid_api.hpp"
#include "nn/hid/detail/hid_server.hpp"
#include "nn/hid/detail/hid_utility.hpp"

namespace nn::hid::system::detail {

Result StartAnalogStickManualCalibration(
  UniquePadId uniquePadId, AnalogStickPosition analogStickPosition) {
  sf::SharedPointer<IHidSystemServer> proxy;
  NN_RESULT_DO(server::CreateHidSystemServerProxy(&proxy));
  return proxy->StartAnalogStickManualCalibration(
    uniquePadId, analogStickPosition);
}

Result RetryCurrentAnalogStickManualCalibrationStage(
  UniquePadId uniquePadId, AnalogStickPosition analogStickPosition) {
  sf::SharedPointer<IHidSystemServer> proxy;
  NN_RESULT_DO(server::CreateHidSystemServerProxy(&proxy));
  return proxy->RetryCurrentAnalogStickManualCalibrationStage(
    uniquePadId, analogStickPosition);
}

Result CancelAnalogStickManualCalibration(
  UniquePadId uniquePadId, AnalogStickPosition analogStickPosition) {
  sf::SharedPointer<IHidSystemServer> proxy;
  NN_RESULT_DO(server::CreateHidSystemServerProxy(&proxy));
  return proxy->CancelAnalogStickManualCalibration(
    uniquePadId, analogStickPosition);
}

Result ResetAnalogStickManualCalibration(
  UniquePadId uniquePadId, AnalogStickPosition analogStickPosition) {
  sf::SharedPointer<IHidSystemServer> proxy;
  NN_RESULT_DO(server::CreateHidSystemServerProxy(&proxy));
  return proxy->ResetAnalogStickManualCalibration(
    uniquePadId, analogStickPosition);
}

Result GetUniquePadType(
  UniquePadType* pOutUniquePadType, UniquePadId uniquePadId) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  UniquePadType value = {};
  const Result result = proxy->GetUniquePadType(&value, uniquePadId);
  if (result.IsSuccess()) {
    *pOutUniquePadType = value;
  }
  return result;
}

Result GetUniquePadControllerNumber(int* pOutInt, UniquePadId uniquePadId) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  int value = {};
  const Result result =
    proxy->GetUniquePadControllerNumber(&value, uniquePadId);
  if (result.IsSuccess()) {
    *pOutInt = value;
  }
  return result;
}

Result GetUniquePadSerialNumber(
  UniquePadSerialNumber* pOutUniquePadSerialNumber, UniquePadId uniquePadId) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  return proxy->GetUniquePadSerialNumber(
    pOutUniquePadSerialNumber, uniquePadId);
}

Result GetUniquePadBluetoothAddress(
  bluetooth::Address* pOutAddress, UniquePadId uniquePadId) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  return proxy->GetUniquePadBluetoothAddress(pOutAddress, uniquePadId);
}

Result DisconnectUniquePad(UniquePadId uniquePadId) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  return proxy->DisconnectUniquePad(uniquePadId);
}

Result GetAnalogStickState(AnalogStickState* pOutAnalogStickState,
  UniquePadId uniquePadId, AnalogStickPosition analogStickPosition) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  return proxy->GetAnalogStickState(
    pOutAnalogStickState, uniquePadId, analogStickPosition);
}

Result IsAnalogStickButtonPressed(bool* pOutBool, UniquePadId uniquePadId,
  AnalogStickPosition analogStickPosition) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  return proxy->IsAnalogStickButtonPressed(
    pOutBool, uniquePadId, analogStickPosition);
}

Result IsAnalogStickInReleasePosition(bool* pOutBool, UniquePadId uniquePadId,
  AnalogStickPosition analogStickPosition) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  return proxy->IsAnalogStickInReleasePosition(
    pOutBool, uniquePadId, analogStickPosition);
}

Result IsAnalogStickInCircumference(bool* pOutBool, UniquePadId uniquePadId,
  AnalogStickPosition analogStickPosition) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  return proxy->IsAnalogStickInCircumference(
    pOutBool, uniquePadId, analogStickPosition);
}

Result SetNotificationLedPattern(
  const NotificationLedPattern& notificationLedPattern,
  const UniquePadId& uniquePadId) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  return proxy->SetNotificationLedPattern(notificationLedPattern, uniquePadId);
}

Result SetNotificationLedPatternWithTimeout(
  const NotificationLedPattern& notificationLedPattern,
  const UniquePadId& uniquePadId, TimeSpan timeSpan) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  return proxy->SetNotificationLedPatternWithTimeout(
    notificationLedPattern, uniquePadId, timeSpan);
}

Result GetLastActiveUniquePad(UniquePadId* pOutUniquePadId) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  return proxy->GetLastActiveUniquePad(pOutUniquePadId);
}

Result GetUniquePadButtonSet(
  util::BitFlagSet<64, UniquePadButton>* pOutBitFlagSet,
  const UniquePadId& uniquePadId) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  return proxy->GetUniquePadButtonSet(pOutBitFlagSet, uniquePadId);
}

Result GetUniquePadColor(
  ControllerColor* pOutControllerColor, const UniquePadId& uniquePadId) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  return proxy->GetUniquePadColor(pOutControllerColor, uniquePadId);
}

Result GetUniquePadColor12(
  ControllerColor12* pOutControllerColor12, const UniquePadId& uniquePadId) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  return proxy->GetUniquePadColor12(pOutControllerColor12, uniquePadId);
}

Result GetUniquePadSkuType(
  unsigned char* pOutUnsignedchar, const UniquePadId& uniquePadId) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  return proxy->GetUniquePadSkuType(pOutUnsignedchar, uniquePadId);
}

}
