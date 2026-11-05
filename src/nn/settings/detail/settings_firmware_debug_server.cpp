#include "nn/diag/diag_abort.hpp"
#include "nn/settings/detail/settings_api.hpp"

namespace nn::settings::detail {

Result ReadSettings(
  unsigned long* pOutValue, unsigned char* buffer, unsigned long size,
  int value) {
  sf::SharedPointer<IFirmwareDebugSettingsServer> proxy;
  NN_RESULT_DO(CreateFirmwareDebugSettingsServerProxyForIpc(&proxy));
  return proxy->ReadSettings(
    sf::Out<unsigned long>(pOutValue), sf::OutBuffer(buffer, size), value);
}

Result ResetSettings(int value) {
  sf::SharedPointer<IFirmwareDebugSettingsServer> proxy;
  NN_RESULT_DO(CreateFirmwareDebugSettingsServerProxyForIpc(&proxy));
  return proxy->ResetSettings(value);
}

Result CommitSettings() {
  sf::SharedPointer<IFirmwareDebugSettingsServer> proxy;
  NN_RESULT_DO(CreateFirmwareDebugSettingsServerProxyForIpc(&proxy));
  return proxy->CommitSettings();
}

Result GetDeviceLockPinCodeContinuousVerificationFailureCount(int* pOutValue) {
  sf::SharedPointer<IFirmwareDebugSettingsServer> proxy;
  NN_RESULT_DO(CreateFirmwareDebugSettingsServerProxyForIpc(&proxy));
  return proxy->GetDeviceLockPinCodeContinuousVerificationFailureCount(
    sf::Out<int>(pOutValue));
}

Result SetDeviceLockPinCodeContinuousVerificationFailureCount(int value) {
  sf::SharedPointer<IFirmwareDebugSettingsServer> proxy;
  NN_RESULT_DO(CreateFirmwareDebugSettingsServerProxyForIpc(&proxy));
  return proxy->SetDeviceLockPinCodeContinuousVerificationFailureCount(value);
}

Result SetWebInspectorFlag(bool value) {
  sf::SharedPointer<IFirmwareDebugSettingsServer> proxy;
  NN_RESULT_DO(CreateFirmwareDebugSettingsServerProxyForIpc(&proxy));
  return proxy->SetWebInspectorFlag(value);
}

Result SetMemoryUsageRateFlag(bool value) {
  sf::SharedPointer<IFirmwareDebugSettingsServer> proxy;
  NN_RESULT_DO(CreateFirmwareDebugSettingsServerProxyForIpc(&proxy));
  return proxy->SetMemoryUsageRateFlag(value);
}

Result SetAllowedSslHosts(
  const system::AllowedSslHost* pValues, unsigned long size) {
  sf::SharedPointer<IFirmwareDebugSettingsServer> proxy;
  NN_RESULT_DO(CreateFirmwareDebugSettingsServerProxyForIpc(&proxy));
  return proxy->SetAllowedSslHosts(
    sf::InArray<system::AllowedSslHost>(pValues, size));
}

Result SetHostFsMountPoint(const system::HostFsMountPoint& value) {
  sf::SharedPointer<IFirmwareDebugSettingsServer> proxy;
  NN_RESULT_DO(CreateFirmwareDebugSettingsServerProxyForIpc(&proxy));
  return proxy->SetHostFsMountPoint(value);
}

Result SetHttpAuthConfigs(
  const system::HttpAuthConfig* pValues, unsigned long size) {
  sf::SharedPointer<IFirmwareDebugSettingsServer> proxy;
  NN_RESULT_DO(CreateFirmwareDebugSettingsServerProxyForIpc(&proxy));
  return proxy->SetHttpAuthConfigs(
    sf::InArray<system::HttpAuthConfig>(pValues, size));
}

}
