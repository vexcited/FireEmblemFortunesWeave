#include "nn/diag/diag_abort.hpp"
#include "nn/settings/detail/settings_api.hpp"

namespace nn::settings::detail {

namespace {

const int KeyCodeMapVersion = 4;

}

Result GetFirmwareVersionForDebug(oe::FirmwareVersionForDebug* pOutValue) {
  sf::SharedPointer<ISettingsServer> proxy;
  NN_RESULT_DO(CreateSettingsServerProxyForIpc(&proxy));
  return proxy->GetFirmwareVersionForDebug(
    sf::Out<oe::FirmwareVersionForDebug>(pOutValue));
}

Result GetKeyCodeMap(kpr::KeyCodeMap* pOutValue) {
  sf::SharedPointer<ISettingsServer> proxy;
  NN_RESULT_DO(CreateSettingsServerProxyForIpc(&proxy));
  return proxy->GetKeyCodeMap(
    sf::Out<kpr::KeyCodeMap>(pOutValue), KeyCodeMapVersion);
}

Result GetLanguageCode(LanguageCode* pOutValue) {
  sf::SharedPointer<ISettingsServer> proxy;
  NN_RESULT_DO(CreateSettingsServerProxyForIpc(&proxy));
  return proxy->GetLanguageCode(sf::Out<LanguageCode>(pOutValue));
}

Result GetRegionCode(int* pOutValue) {
  sf::SharedPointer<ISettingsServer> proxy;
  NN_RESULT_DO(CreateSettingsServerProxyForIpc(&proxy));
  return proxy->GetRegionCode(sf::Out<int>(pOutValue));
}

Result GetDeviceNickName(system::DeviceNickName* pOutValue) {
  sf::SharedPointer<ISettingsServer> proxy;
  NN_RESULT_DO(CreateSettingsServerProxyForIpc(&proxy));
  return proxy->GetDeviceNickName(sf::Out<system::DeviceNickName>(pOutValue));
}

Result GetQuestFlagForApplication(bool* pOutValue) {
  sf::SharedPointer<ISettingsServer> proxy;
  NN_RESULT_DO(CreateSettingsServerProxyForIpc(&proxy));
  return proxy->GetQuestFlagForApplication(sf::Out<bool>(pOutValue));
}

Result GetTextToSpeechFlag(bool* pOutValue) {
  sf::SharedPointer<ISettingsServer> proxy;
  NN_RESULT_DO(CreateSettingsServerProxyForIpc(&proxy));
  return proxy->GetTextToSpeechFlag(sf::Out<bool>(pOutValue));
}

Result GetTextToSpeechVoiceTypeForUi(int* pOutValue) {
  sf::SharedPointer<ISettingsServer> proxy;
  NN_RESULT_DO(CreateSettingsServerProxyForIpc(&proxy));
  return proxy->GetTextToSpeechVoiceTypeForUi(sf::Out<int>(pOutValue));
}

Result GetTextToSpeechVoiceVolume(float* pOutValue) {
  sf::SharedPointer<ISettingsServer> proxy;
  NN_RESULT_DO(CreateSettingsServerProxyForIpc(&proxy));
  return proxy->GetTextToSpeechVoiceVolume(sf::Out<float>(pOutValue));
}

Result GetTextToSpeechVoiceSpeed(float* pOutValue) {
  sf::SharedPointer<ISettingsServer> proxy;
  NN_RESULT_DO(CreateSettingsServerProxyForIpc(&proxy));
  return proxy->GetTextToSpeechVoiceSpeed(sf::Out<float>(pOutValue));
}

}
