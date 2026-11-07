#include "nn/hid/detail/hid_abort.hpp"
#include "nn/hid/detail/hid_api.hpp"
#include "nn/hid/detail/hid_server.hpp"
#include "nn/hid/detail/hid_utility.hpp"

namespace nn::hid::system::detail {

Result GetConsoleUniqueSixAxisSensorHandle(
  UniqueSixAxisSensorHandle* pOutUniqueSixAxisSensorHandle) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  return proxy->GetConsoleUniqueSixAxisSensorHandle(
    pOutUniqueSixAxisSensorHandle);
}

Result IsSixAxisSensorUserCalibrationSupported(
  bool* pOutBool, UniqueSixAxisSensorHandle uniqueSixAxisSensorHandle) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  bool value = {};
  const Result result = proxy->IsSixAxisSensorUserCalibrationSupported(
    &value, uniqueSixAxisSensorHandle);
  if (result.IsSuccess()) {
    *pOutBool = value;
  }
  return result;
}

Result ResetSixAxisSensorCalibrationValues(
  UniqueSixAxisSensorHandle uniqueSixAxisSensorHandle) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  return proxy->ResetSixAxisSensorCalibrationValues(uniqueSixAxisSensorHandle);
}

Result StartSixAxisSensorUserCalibration(
  UniqueSixAxisSensorHandle uniqueSixAxisSensorHandle) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  return proxy->StartSixAxisSensorUserCalibration(uniqueSixAxisSensorHandle);
}

Result CancelSixAxisSensorUserCalibration(
  UniqueSixAxisSensorHandle uniqueSixAxisSensorHandle) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  return proxy->CancelSixAxisSensorUserCalibration(uniqueSixAxisSensorHandle);
}

Result IsSixAxisSensorAccurateUserCalibrationSupported(
  bool* pOutBool, const UniqueSixAxisSensorHandle& uniqueSixAxisSensorHandle) {
  sf::SharedPointer<IHidSystemServer> proxy;
  NN_RESULT_DO(server::CreateHidSystemServerProxy(&proxy));
  return proxy->IsSixAxisSensorAccurateUserCalibrationSupported(
    pOutBool, uniqueSixAxisSensorHandle, utility::GetAppletResourceUserId());
}

Result StartSixAxisSensorAccurateUserCalibration(
  const UniqueSixAxisSensorHandle& uniqueSixAxisSensorHandle) {
  sf::SharedPointer<IHidSystemServer> proxy;
  NN_RESULT_DO(server::CreateHidSystemServerProxy(&proxy));
  return proxy->StartSixAxisSensorAccurateUserCalibration(
    uniqueSixAxisSensorHandle, utility::GetAppletResourceUserId());
}

Result CancelSixAxisSensorAccurateUserCalibration(
  const UniqueSixAxisSensorHandle& uniqueSixAxisSensorHandle) {
  sf::SharedPointer<IHidSystemServer> proxy;
  NN_RESULT_DO(server::CreateHidSystemServerProxy(&proxy));
  return proxy->CancelSixAxisSensorAccurateUserCalibration(
    uniqueSixAxisSensorHandle, utility::GetAppletResourceUserId());
}

Result EnableAppletToGetSixAxisSensor(
  const applet::AppletResourceUserId& appletResourceUserId, bool isEnabled) {
  sf::SharedPointer<IHidSystemServer> proxy;
  NN_RESULT_DO(server::CreateHidSystemServerProxy(&proxy));
  return proxy->EnableAppletToGetSixAxisSensor(appletResourceUserId, isEnabled);
}

}

namespace nn::hid::system::detail {

Result GetSixAxisSensorAccurateUserCalibrationState(SixAxisSensorAccurateUserCalibrationState* pOutSixAxisSensorAccurateUserCalibrationState, const UniqueSixAxisSensorHandle& uniqueSixAxisSensorHandle) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  SixAxisSensorAccurateUserCalibrationState value = {};
  const Result result = proxy->GetSixAxisSensorAccurateUserCalibrationState(&value, uniqueSixAxisSensorHandle, utility::GetAppletResourceUserId());
  *pOutSixAxisSensorAccurateUserCalibrationState = value;
  return result;
}

}
