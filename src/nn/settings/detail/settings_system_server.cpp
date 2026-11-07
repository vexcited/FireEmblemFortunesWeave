#include <algorithm>
#include <cstring>

#include "nn/applet/applet_keyboard_layout.hpp"
#include "nn/diag/diag_abort.hpp"
#include "nn/os/system_event.hpp"
#include "nn/settings/detail/settings_api.hpp"
#include "nn/settings/detail/settings_result.hpp"

namespace nn::settings::detail {

namespace {

const LanguageCode AvailableLanguageCodes[] = {
  {"ja"}, {"en-US"}, {"fr"}, {"de"}, {"it"}, {"es"}, {"ko"}, {"nl"}, {"pt"},
  {"ru"}, {"en-GB"}, {"fr-CA"}, {"es-419"}, {"zh-Hans"}, {"zh-Hant"},
  {"pt-BR"}, {"pl"}, {"th"},
};

const int AvailableLanguageCodeCount = 18;

const uint8_t KeyboardLayoutMax = 16;

}

Result GetDebugModeFlag(bool* pOutValue) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetDebugModeFlag(sf::Out<bool>(pOutValue));
}

Result GetAccountSettings(system::AccountSettings* pOutValue) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetAccountSettings(sf::Out<system::AccountSettings>(pOutValue));
}

Result SetAccountSettings(const system::AccountSettings& value) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->SetAccountSettings(value);
}

Result GetAccountIdentificationSettings(
  int* pOutValue, system::AccountIdentificationSettings* pOutValue2,
  unsigned long size) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetAccountIdentificationSettings(
    sf::Out<int>(pOutValue),
    sf::OutArray<system::AccountIdentificationSettings>(pOutValue2, size));
}

Result SetAccountIdentificationSettings(
  const system::AccountIdentificationSettings* pValues, unsigned long size) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->SetAccountIdentificationSettings(
    sf::InArray<system::AccountIdentificationSettings>(pValues, size));
}

Result GetAccountUserSettings(
  int* pOutValue, system::AccountUserSettings* pOutValue2, int count) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetAccountUserSettings(
    sf::Out<int>(pOutValue),
    sf::OutArray<system::AccountUserSettings>(pOutValue2, count));
}

Result SetAccountUserSettings(
  const system::AccountUserSettings* pValues, int count) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->SetAccountUserSettings(
    sf::InArray<system::AccountUserSettings>(pValues, count));
}

Result DeleteSettingsPerAccount(const account::Uid& uid) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->DeleteSettingsPerAccount(uid);
}

Result GetAppletParameterSet(system::AppletParameterSet* pOutValue) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetAppletParameterSet(
    sf::Out<system::AppletParameterSet>(pOutValue));
}

Result SetAppletParameterSet(const system::AppletParameterSet& value) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->SetAppletParameterSet(value);
}

Result GetAudioVolume(system::AudioVolume* pOutValue, int count) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetAudioVolume(
    sf::OutArray<system::AudioVolume>(pOutValue, count));
}

Result SetAudioVolume(const system::AudioVolume& value, int value2) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->SetAudioVolume(value, value2);
}

Result GetAudioOutputMode(int* pOutValue, int count) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetAudioOutputMode(sf::Out<int>(pOutValue), count);
}

Result SetAudioOutputMode(int value, int value2) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->SetAudioOutputMode(value, value2);
}

Result GetSpeakerAutoMuteFlag(bool* pOutValue) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetSpeakerAutoMuteFlag(sf::Out<bool>(pOutValue));
}

Result SetSpeakerAutoMuteFlag(bool value) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->SetSpeakerAutoMuteFlag(value);
}

Result GetHeadphoneVolumeWarningCount(int* pOutValue) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetHeadphoneVolumeWarningCount(sf::Out<int>(pOutValue));
}

Result SetHeadphoneVolumeWarningCount(int value) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->SetHeadphoneVolumeWarningCount(value);
}

Result GetForceMonauralOutputFlag(bool* pOutValue) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetForceMonauralOutputFlag(sf::Out<bool>(pOutValue));
}

Result SetForceMonauralOutputFlag(bool value) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->SetForceMonauralOutputFlag(value);
}

Result GetUsbAudioVolumeSettings(
  int* pOutValue, system::UsbAudioVolumeSettings* pOutValue2, int count) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetUsbAudioVolumeSettings(
    sf::Out<int>(pOutValue),
    sf::OutArray<system::UsbAudioVolumeSettings>(pOutValue2, count));
}

Result SetUsbAudioVolumeSettings(
  const system::UsbAudioVolumeSettings* pValues, int count) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->SetUsbAudioVolumeSettings(
    sf::InArray<system::UsbAudioVolumeSettings>(pValues, count));
}

Result GetPrioritizedOutputAudioDeviceSettings(
  system::PrioritizedOutputAudioDeviceSettings* pOutValue) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetPrioritizedOutputAudioDeviceSettings(
    sf::Out<system::PrioritizedOutputAudioDeviceSettings>(pOutValue));
}

Result SetPrioritizedOutputAudioDeviceSettings(
  const system::PrioritizedOutputAudioDeviceSettings& value) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->SetPrioritizedOutputAudioDeviceSettings(value);
}

Result GetPrioritizedInputAudioDeviceSettings(
  system::PrioritizedInputAudioDeviceSettings* pOutValue) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetPrioritizedInputAudioDeviceSettings(
    sf::Out<system::PrioritizedInputAudioDeviceSettings>(pOutValue));
}

Result SetPrioritizedInputAudioDeviceSettings(
  const system::PrioritizedInputAudioDeviceSettings& value) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->SetPrioritizedInputAudioDeviceSettings(value);
}

Result GetInputNoiseReductionForCommunicationFlag(bool* pOutValue) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetInputNoiseReductionForCommunicationFlag(
    sf::Out<bool>(pOutValue));
}

Result SetInputNoiseReductionForCommunicationFlag(const bool& value) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->SetInputNoiseReductionForCommunicationFlag(value);
}

Result GetBuiltInMicrophoneGain(float* pOutValue) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetBuiltInMicrophoneGain(sf::Out<float>(pOutValue));
}

Result SetBuiltInMicrophoneGain(float value) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->SetBuiltInMicrophoneGain(value);
}

Result GetBuiltInMicrophoneJackGain(float* pOutValue) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetBuiltInMicrophoneJackGain(sf::Out<float>(pOutValue));
}

Result SetBuiltInMicrophoneJackGain(float value) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->SetBuiltInMicrophoneJackGain(value);
}

Result GetUsbAudioInputDeviceGainSettings(
  int* pOutValue, system::UsbAudioInputDeviceGainSettings* pOutValue2,
  int count) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetUsbAudioInputDeviceGainSettings(
    sf::Out<int>(pOutValue),
    sf::OutArray<system::UsbAudioInputDeviceGainSettings>(pOutValue2, count));
}

Result SetUsbAudioInputDeviceGainSettings(
  const system::UsbAudioInputDeviceGainSettings* pValues, int count) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->SetUsbAudioInputDeviceGainSettings(
    sf::InArray<system::UsbAudioInputDeviceGainSettings>(pValues, count));
}

Result GetOunceProControllerMicrophoneJackGain(float* pOutValue) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetOunceProControllerMicrophoneJackGain(
    sf::Out<float>(pOutValue));
}

Result SetOunceProControllerMicrophoneJackGain(float value) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->SetOunceProControllerMicrophoneJackGain(value);
}

Result GetOunceProControllerAudioLowLatencyModeEnableFlag(bool* pOutValue) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetOunceProControllerAudioLowLatencyModeEnableFlag(
    sf::Out<bool>(pOutValue));
}

Result SetOunceProControllerAudioLowLatencyModeEnabled(bool value) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->SetOunceProControllerAudioLowLatencyModeEnabled(value);
}

Result GetBacklightSettings(system::BacklightSettings* pOutValue) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetBacklightSettings(
    sf::Out<system::BacklightSettings>(pOutValue));
}

Result SetBacklightSettings(const system::BacklightSettings& value) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->SetBacklightSettings(value);
}

Result GetBacklightSettings(system::BacklightSettingsEx* pOutValue) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetBacklightSettingsEx(
    sf::Out<system::BacklightSettingsEx>(pOutValue));
}

Result SetBacklightSettings(const system::BacklightSettingsEx& value) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->SetBacklightSettingsEx(value);
}

Result GetBatteryCareModeEnableFlag(bool* pOutValue) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetBatteryCareModeEnableFlag(sf::Out<bool>(pOutValue));
}

Result SetBatteryCareModeEnableFlag(bool value) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->SetBatteryCareModeEnableFlag(value);
}

Result GetBatteryLotForSystem(BatteryLot* pOutValue) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetBatteryLotForSystem(sf::Out<BatteryLot>(pOutValue));
}

Result GetBluetoothEnableFlag(bool* pOutValue) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetBluetoothEnableFlag(sf::Out<bool>(pOutValue));
}

Result SetBluetoothEnableFlag(bool value) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->SetBluetoothEnableFlag(value);
}

Result GetRequiresRunRepairTimeReviser(bool* pOutValue) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetRequiresRunRepairTimeReviser(sf::Out<bool>(pOutValue));
}

Result SetRequiresRunRepairTimeReviser(bool value) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->SetRequiresRunRepairTimeReviser(value);
}

Result GetInRepairProcessEnableFlag(bool* pOutValue) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetInRepairProcessEnableFlag(sf::Out<bool>(pOutValue));
}

Result SetInRepairProcessEnableFlag(bool value) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->SetInRepairProcessEnableFlag(value);
}

Result GetSaveDataPurgedForRepairFlag(bool* pOutValue) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetSaveDataPurgedForRepairFlag(sf::Out<bool>(pOutValue));
}

Result SetSaveDataPurgedForRepairFlag(bool value) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->SetSaveDataPurgedForRepairFlag(value);
}

Result GetPrimaryAlbumStorage(int* pOutValue) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetPrimaryAlbumStorage(sf::Out<int>(pOutValue));
}

Result SetPrimaryAlbumStorage(int value) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->SetPrimaryAlbumStorage(value);
}

Result GetChatTranscriptionSettings(
  int* pOutValue, system::ChatTranscriptionSettings* pOutValue2,
  unsigned long size) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetChatTranscriptionSettings(
    sf::Out<int>(pOutValue),
    sf::OutArray<system::ChatTranscriptionSettings>(pOutValue2, size));
}

Result SetChatTranscriptionSettings(
  const system::ChatTranscriptionSettings* pValues, unsigned long size) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->SetChatTranscriptionSettings(
    sf::InArray<system::ChatTranscriptionSettings>(pValues, size));
}

Result GetChatTranscriptionSettings(
  int* pOutValue, system::ChatTranscriptionSettingsEx* pOutValue2,
  unsigned long size) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetChatTranscriptionSettingsEx(
    sf::Out<int>(pOutValue),
    sf::OutArray<system::ChatTranscriptionSettingsEx>(pOutValue2, size));
}

Result SetChatTranscriptionSettings(
  const system::ChatTranscriptionSettingsEx* pValues, unsigned long size) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->SetChatTranscriptionSettingsEx(
    sf::InArray<system::ChatTranscriptionSettingsEx>(pValues, size));
}

Result BindChatTranscriptionSettingsChangedEvent(
  os::SystemEventType* pOutValue, os::EventClearMode eventClearMode) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  sf::NativeHandle handle;
  NN_RESULT_DO(proxy->BindChatTranscriptionSettingsChangedEvent(
    sf::Out<sf::NativeHandle>(&handle)));
  os::AttachReadableHandleToSystemEvent(pOutValue, handle.GetOsHandle(),
    handle.IsManaged(), eventClearMode);
  handle.Detach();
  return Result();
}

Result BindChatTranscriptionSettingsChangedEventForSettingApplet(
  os::SystemEventType* pOutValue, os::EventClearMode eventClearMode) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  sf::NativeHandle handle;
  NN_RESULT_DO(proxy->BindChatTranscriptionSettingsChangedEventForSettingApplet(
    sf::Out<sf::NativeHandle>(&handle)));
  os::AttachReadableHandleToSystemEvent(pOutValue, handle.GetOsHandle(),
    handle.IsManaged(), eventClearMode);
  handle.Detach();
  return Result();
}

Result GetExternalSteadyClockSourceId(util::Uuid* pOutValue) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetExternalSteadyClockSourceId(sf::Out<util::Uuid>(pOutValue));
}

Result SetExternalSteadyClockSourceId(const util::Uuid& value) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->SetExternalSteadyClockSourceId(value);
}

Result GetShutdownRtcValue(long* pOutValue) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetShutdownRtcValue(sf::Out<long>(pOutValue));
}

Result SetShutdownRtcValue(long value) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->SetShutdownRtcValue(value);
}

Result GetExternalSteadyClockInternalOffset(long* pOutValue) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetExternalSteadyClockInternalOffset(sf::Out<long>(pOutValue));
}

Result SetExternalSteadyClockInternalOffset(long value) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->SetExternalSteadyClockInternalOffset(value);
}

Result GetUserSystemClockContext(time::SystemClockContext* pOutValue) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetUserSystemClockContext(
    sf::Out<time::SystemClockContext>(pOutValue));
}

Result SetUserSystemClockContext(const time::SystemClockContext& value) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->SetUserSystemClockContext(value);
}

Result GetNetworkSystemClockContext(time::SystemClockContext* pOutValue) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetNetworkSystemClockContext(
    sf::Out<time::SystemClockContext>(pOutValue));
}

Result SetNetworkSystemClockContext(const time::SystemClockContext& value) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->SetNetworkSystemClockContext(value);
}

Result IsUserSystemClockAutomaticCorrectionEnabled(bool* pOutValue) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->IsUserSystemClockAutomaticCorrectionEnabled(
    sf::Out<bool>(pOutValue));
}

Result SetUserSystemClockAutomaticCorrectionEnabled(bool value) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->SetUserSystemClockAutomaticCorrectionEnabled(value);
}

Result GetUserSystemClockAutomaticCorrectionUpdatedTime(
  time::SteadyClockTimePoint* pOutValue) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetUserSystemClockAutomaticCorrectionUpdatedTime(
    sf::Out<time::SteadyClockTimePoint>(pOutValue));
}

Result SetUserSystemClockAutomaticCorrectionUpdatedTime(
  const time::SteadyClockTimePoint& value) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->SetUserSystemClockAutomaticCorrectionUpdatedTime(value);
}

Result GetManufacturingTimeStamp(time::SteadyClockTimePoint* pOutValue) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetManufacturingTimeStamp(
    sf::Out<time::SteadyClockTimePoint>(pOutValue));
}

Result SetManufacturingTimeStamp(const time::SteadyClockTimePoint& value) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->SetManufacturingTimeStamp(value);
}

Result GetColorFilterType(int* pOutValue) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetColorFilterType(sf::Out<int>(pOutValue));
}

Result SetColorFilterType(int value) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->SetColorFilterType(value);
}

Result IsColorInversionEnabled(bool* pOutValue) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->IsColorInversionEnabled(sf::Out<bool>(pOutValue));
}

Result SetColorInversionEnabled(bool value) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->SetColorInversionEnabled(value);
}

Result GetDeviceLockPinCodeLength(int* pOutValue) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetDeviceLockPinCodeLength(sf::Out<int>(pOutValue));
}

Result GetDeviceLockPinCode(char* pOutValue, int* pOutValue2, int count) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetDeviceLockPinCode(
    sf::Out<char>(pOutValue), sf::Out<int>(pOutValue2), count);
}

Result SetDeviceLockPinCode(const char* name, int count) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->SetDeviceLockPinCode(sf::InArray<char>(name, count));
}

Result GetDeviceLockEnableFlag(bool* pOutValue) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetDeviceLockEnableFlag(sf::Out<bool>(pOutValue));
}

Result GetDeviceLockStartPenaltyTime(time::PosixTime* pOutValue) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetDeviceLockStartPenaltyTime(
    sf::Out<time::PosixTime>(pOutValue));
}

Result SetDeviceLockStartPenaltyTime(const time::PosixTime& value) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->SetDeviceLockStartPenaltyTime(value);
}

Result GetDeviceLockErrorCount(int* pOutValue) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetDeviceLockErrorCount(sf::Out<int>(pOutValue));
}

Result SetDeviceLockErrorCount(int value) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->SetDeviceLockErrorCount(value);
}

Result GetDeviceLockPinCodeLsbParity(
  int* pOutValue, bool* pOutValue2, int count) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetDeviceLockPinCodeLsbParity(
    sf::Out<int>(pOutValue), sf::Out<bool>(pOutValue2), count);
}

Result VerifyDeviceLockPinCode(bool* pOutValue, const char* name, int count) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->VerifyDeviceLockPinCode(
    sf::Out<bool>(pOutValue), sf::InArray<char>(name, count));
}

Result GetDeviceLockVeificationForbiddenFlag(bool* pOutValue) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetDeviceLockVeificationForbiddenFlag(sf::Out<bool>(pOutValue));
}

Result GetDeviceLockStartPenaltyTime(
  bool* pOutValue, time::ClockSnapshot* pOutValue2) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetDeviceLockStartPenaltyTimeEx(
    sf::Out<bool>(pOutValue), sf::Out<time::ClockSnapshot>(pOutValue2));
}

Result SetDeviceLockStartPenaltyTime(const time::ClockSnapshot& value) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->SetDeviceLockStartPenaltyTimeEx(value);
}

Result GetPinCodeReregistrationGuideAccounts(
  int* pOutValue, account::NetworkServiceAccountId* pOutValue2,
  unsigned long size) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetPinCodeReregistrationGuideAccounts(
    sf::Out<int>(pOutValue),
    sf::OutArray<account::NetworkServiceAccountId>(pOutValue2, size));
}

Result SetPinCodeReregistrationGuideAccounts(
  const account::NetworkServiceAccountId* pValues, unsigned long size) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->SetPinCodeReregistrationGuideAccounts(
    sf::InArray<account::NetworkServiceAccountId>(pValues, size));
}

Result GetAutoUpdateEnableFlag(bool* pOutValue) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetAutoUpdateEnableFlag(sf::Out<bool>(pOutValue));
}

Result SetAutoUpdateEnableFlag(bool value) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->SetAutoUpdateEnableFlag(value);
}

Result GetErrorReportSharePermission(int* pOutValue) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetErrorReportSharePermission(sf::Out<int>(pOutValue));
}

Result SetErrorReportSharePermission(int value) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->SetErrorReportSharePermission(value);
}

Result GetEulaVersions(
  int* pOutValue, system::EulaVersion* pOutValue2, int count) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetEulaVersions(
    sf::Out<int>(pOutValue),
    sf::OutArray<system::EulaVersion>(pOutValue2, count));
}

Result SetEulaVersions(const system::EulaVersion* pValues, int count) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->SetEulaVersions(
    sf::InArray<system::EulaVersion>(pValues, count));
}

Result BindFatalDirtyFlagEvent(
  os::SystemEventType* pOutValue, os::EventClearMode eventClearMode) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  sf::NativeHandle handle;
  NN_RESULT_DO(proxy->BindFatalDirtyFlagEvent(
    sf::Out<sf::NativeHandle>(&handle)));
  os::AttachReadableHandleToSystemEvent(pOutValue, handle.GetOsHandle(),
    handle.IsManaged(), eventClearMode);
  handle.Detach();
  return Result();
}

Result GetFatalDirtyFlags(
  util::BitFlagSet<128, system::FatalDirtyFlag>* pOutValue) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetFatalDirtyFlags(
    sf::Out<util::BitFlagSet<128, system::FatalDirtyFlag>>(pOutValue));
}

Result GetFirmwareVersion(system::FirmwareVersion* pOutValue) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetFirmwareVersion(sf::Out<system::FirmwareVersion>(pOutValue));
}

Result GetRebootlessSystemUpdateVersion(
  system::RebootlessSystemUpdateVersion* pOutValue) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetRebootlessSystemUpdateVersion(
    sf::Out<system::RebootlessSystemUpdateVersion>(pOutValue));
}

Result GetForceConsoleModeEnableFlag(bool* pOutValue) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetForceConsoleModeEnableFlag(sf::Out<bool>(pOutValue));
}

Result SetForceConsoleModeEnableFlag(bool value) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->SetForceConsoleModeEnableFlag(value);
}

Result SetBluetoothStackFlag(bool value) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->SetBluetoothStackFlag(value);
}

Result SetHidDebugOcdUsbFlag(bool value) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->SetHidDebugOcdUsbFlag(value);
}

Result SetHidDebugRailFlag(bool value) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->SetHidDebugRailFlag(value);
}

Result GetUsbFullKeyEnableFlag(bool* pOutValue) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetUsbFullKeyEnableFlag(sf::Out<bool>(pOutValue));
}

Result SetUsbFullKeyEnableFlag(bool value) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->SetUsbFullKeyEnableFlag(value);
}

Result GetVibrationMasterVolume(float* pOutValue) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetVibrationMasterVolume(sf::Out<float>(pOutValue));
}

Result SetVibrationMasterVolume(float value) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->SetVibrationMasterVolume(value);
}

Result GetHomeMenuScheme(system::HomeMenuScheme* pOutValue) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetHomeMenuScheme(sf::Out<system::HomeMenuScheme>(pOutValue));
}

Result GetHomeMenuSchemeModel(unsigned int* pOutValue) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetHomeMenuSchemeModel(sf::Out<unsigned int>(pOutValue));
}

Result GetChineseTraditionalInputMethod(
  ChineseTraditionalInputMethod* pOutValue) {
  if (pOutValue == nullptr) {
    return ResultNullChineseTraditionalInputMethodBuffer;
  }

  ChineseTraditionalInputMethod value = {};
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  NN_RESULT_DO(proxy->GetChineseTraditionalInputMethod(
    sf::Out<ChineseTraditionalInputMethod>(&value)));
  *pOutValue = value;
  return ResultSuccess;
}

Result SetChineseTraditionalInputMethod(
  ChineseTraditionalInputMethod chineseTraditionalInputMethod) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->SetChineseTraditionalInputMethod(chineseTraditionalInputMethod);
}

Result GetKeyboardLayout(KeyboardLayout* pOutValue) {
  if (pOutValue == nullptr) {
    return ResultNullKeyboardLayoutBuffer;
  }

  KeyboardLayout value = {};
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  NN_RESULT_DO(proxy->GetKeyboardLayout(sf::Out<KeyboardLayout>(&value)));
  *pOutValue = value;
  return ResultSuccess;
}

Result SetKeyboardLayout(KeyboardLayout keyboardLayout) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->SetKeyboardLayout(keyboardLayout);
}

Result GetApplicationOwnKeyboardLayout(
  bool* pOutIsSet, KeyboardLayout* pOutValue) {
  if (pOutValue == nullptr) {
    return ResultNullKeyboardLayoutBuffer;
  }

  uint32_t value = 0;
  if (applet::GetDesirableKeyboardLayout(&value)) {
    const uint8_t layout = static_cast<uint8_t>(value);
    if (layout <= KeyboardLayoutMax) {
      *pOutIsSet = true;
      *pOutValue = static_cast<KeyboardLayout>(layout);
      return ResultSuccess;
    }
  }

  *pOutIsSet = false;
  return ResultSuccess;
}

Result SetApplicationOwnKeyboardLayout(KeyboardLayout value) {
  applet::SetDesirableKeyboardLayout(static_cast<uint8_t>(value));
  return ResultSuccess;
}

Result SetLanguageCode(const LanguageCode& value) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->SetLanguageCode(value);
}

Result GetAvailableLanguageCodes(
  int* pOutCount, LanguageCode* pOutValues, int count) {
  if (pOutCount == nullptr) {
    return ResultNullLanguageCodeCountBuffer;
  }
  if (pOutValues == nullptr) {
    return ResultNullLanguageCodeBuffer;
  }

  const int length = std::min(std::max(count, 0), AvailableLanguageCodeCount);
  if (count > 0) {
    std::memcpy(
      pOutValues, AvailableLanguageCodes, sizeof(LanguageCode) * length);
  }
  *pOutCount = length;
  return ResultSuccess;
}

Result GetAvailableLanguageCodeCount(int* pOutCount) {
  if (pOutCount == nullptr) {
    return ResultNullLanguageCodeCountBuffer;
  }

  *pOutCount = AvailableLanguageCodeCount;
  return ResultSuccess;
}

Result GetPanelCrcMode(system::CrcMode* pOutValue) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetPanelCrcMode(sf::Out<system::CrcMode>(pOutValue));
}

Result SetPanelCrcMode(system::CrcMode crcMode) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->SetPanelCrcMode(crcMode);
}

Result GetLcdFlags(util::BitFlagSet<32, system::LcdFlag>* pOutValue) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetLcdFlags(
    sf::Out<util::BitFlagSet<32, system::LcdFlag>>(pOutValue));
}

Result SetLcdFlags(util::BitFlagSet<32, system::LcdFlag> bitFlagSet) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->SetLcdFlags(bitFlagSet);
}

Result GetMiiAuthorId(util::Uuid* pOutValue) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetMiiAuthorId(sf::Out<util::Uuid>(pOutValue));
}

Result GetMouseEnableFlag(bool* pOutValue) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetMouseEnableFlag(sf::Out<bool>(pOutValue));
}

Result SetMouseEnableFlag(bool value) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->SetMouseEnableFlag(value);
}

Result GetMousePointerSpeedScale(float* pOutValue) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetMousePointerSpeedScale(sf::Out<float>(pOutValue));
}

Result SetMousePointerSpeedScale(float value) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->SetMousePointerSpeedScale(value);
}

Result GetNetworkSettings(
  int* pOutValue, system::NetworkSettings* pOutValue2, int count) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetNetworkSettings(
    sf::Out<int>(pOutValue),
    sf::OutArray<system::NetworkSettings>(pOutValue2, count));
}

Result SetNetworkSettings(const system::NetworkSettings* pValues, int count) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->SetNetworkSettings(
    sf::InArray<system::NetworkSettings>(pValues, count));
}

Result GetNotificationSettings(system::NotificationSettings* pOutValue) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetNotificationSettings(
    sf::Out<system::NotificationSettings>(pOutValue));
}

Result SetNotificationSettings(const system::NotificationSettings& value) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->SetNotificationSettings(value);
}

Result GetAccountNotificationSettings(
  int* pOutValue, system::AccountNotificationSettings* pOutValue2,
  unsigned long size) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetAccountNotificationSettings(
    sf::Out<int>(pOutValue),
    sf::OutArray<system::AccountNotificationSettings>(pOutValue2, size));
}

Result SetAccountNotificationSettings(
  const system::AccountNotificationSettings* pValues, unsigned long size) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->SetAccountNotificationSettings(
    sf::InArray<system::AccountNotificationSettings>(pValues, size));
}

Result GetNfcEnableFlag(bool* pOutValue) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetNfcEnableFlag(sf::Out<bool>(pOutValue));
}

Result SetNfcEnableFlag(bool value) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->SetNfcEnableFlag(value);
}

Result GetPlatformRegion(int* pOutValue) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetPlatformRegion(sf::Out<int>(pOutValue));
}

Result SetPlatformRegion(int value) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->SetPlatformRegion(value);
}

Result GetProductModel(int* pOutValue) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetProductModel(sf::Out<int>(pOutValue));
}

Result ConvertToProductModelName(
  system::ProductModelName* pOutValue, system::ProductModel productModel) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->ConvertToProductModelName(
    sf::Out<system::ProductModelName>(pOutValue), productModel);
}

Result ConvertToProductModel(
  system::ProductModel* pOutValue, const system::ProductModelName& value) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  system::ProductModel productModel = {};
  NN_RESULT_DO(proxy->ConvertToProductModel(
    sf::Out<system::ProductModel>(&productModel), value));
  *pOutValue = productModel;
  return Result();
}

Result GetPtmBatteryLot(BatteryLot* pOutValue) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetPtmBatteryLot(sf::Out<BatteryLot>(pOutValue));
}

Result SetPtmBatteryLot(const BatteryLot& value) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->SetPtmBatteryLot(value);
}

Result GetPtmBatteryVersion(unsigned char* buffer) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetPtmBatteryVersion(sf::Out<unsigned char>(buffer));
}

Result SetPtmBatteryVersion(unsigned char value) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->SetPtmBatteryVersion(value);
}

Result GetPtmFuelGaugeParameter(system::PtmFuelGaugeParameter* pOutValue) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetPtmFuelGaugeParameter(
    sf::Out<system::PtmFuelGaugeParameter>(pOutValue));
}

Result SetPtmFuelGaugeParameter(const system::PtmFuelGaugeParameter& value) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->SetPtmFuelGaugeParameter(value);
}

Result GetPtmCycleCountReliability(
  system::PtmCycleCountReliability* pOutValue) {
  if (pOutValue == nullptr) {
    return ResultNullPtmCycleCountReliabilityBuffer;
  }

  system::PtmCycleCountReliability value = {};
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  NN_RESULT_DO(proxy->GetPtmCycleCountReliability(
    sf::Out<system::PtmCycleCountReliability>(&value)));
  *pOutValue = value;
  return ResultSuccess;
}

Result SetPtmCycleCountReliability(
  system::PtmCycleCountReliability ptmCycleCountReliability) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->SetPtmCycleCountReliability(ptmCycleCountReliability);
}

Result GetPtmQhClearCount(int* pOutValue) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetPtmQhClearCount(sf::Out<int>(pOutValue));
}

Result SetPtmQhClearCount(int value) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->SetPtmQhClearCount(value);
}

Result GetPushNotificationActivityModeOnSleep(int* pOutValue) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetPushNotificationActivityModeOnSleep(sf::Out<int>(pOutValue));
}

Result SetPushNotificationActivityModeOnSleep(int value) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->SetPushNotificationActivityModeOnSleep(value);
}

Result GetPushNotificationDirtyFlags(
  util::BitFlagSet<64, system::PushNotificationDirtyFlag>* pOutValue) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetPushNotificationDirtyFlags(
    sf::Out<util::BitFlagSet<64, system::PushNotificationDirtyFlag>>(pOutValue));
}

Result GetQuickShutdownForManufacturingEnableFlag(bool* pOutValue) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetQuickShutdownForManufacturingEnableFlag(
    sf::Out<bool>(pOutValue));
}

Result SetQuickShutdownForManufacturingEnableFlag(bool value) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->SetQuickShutdownForManufacturingEnableFlag(value);
}

Result SetRegionCode(int value) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->SetRegionCode(value);
}

Result GetSerialNumber(system::SerialNumber* pOutValue) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetSerialNumber(sf::Out<system::SerialNumber>(pOutValue));
}

Result GetServiceDiscoveryControlSettings(
  system::ServiceDiscoveryControlSettings* pOutValue) {
  if (pOutValue == nullptr) {
    return ResultNullServiceDiscoveryControlSettingsBuffer;
  }

  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetServiceDiscoveryControlSettings(
    sf::Out<system::ServiceDiscoveryControlSettings>(pOutValue));
}

Result SetServiceDiscoveryControlSettings(
  const system::ServiceDiscoveryControlSettings& value) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->SetServiceDiscoveryControlSettings(value);
}

Result GetSleepSettings(system::SleepSettings* pOutValue) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetSleepSettings(sf::Out<system::SleepSettings>(pOutValue));
}

Result SetSleepSettings(const system::SleepSettings& value) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->SetSleepSettings(value);
}

Result GetSleepSettings(system::SleepSettingsEx* pOutValue) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetSleepSettingsEx(sf::Out<system::SleepSettingsEx>(pOutValue));
}

Result SetSleepSettings(const system::SleepSettingsEx& value) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->SetSleepSettingsEx(value);
}

Result GetLockScreenFlag(bool* pOutValue) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetLockScreenFlag(sf::Out<bool>(pOutValue));
}

Result SetLockScreenFlag(bool value) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->SetLockScreenFlag(value);
}

Result GetColorSetId(int* pOutValue) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetColorSetId(sf::Out<int>(pOutValue));
}

Result SetColorSetId(int value) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->SetColorSetId(value);
}

Result GetBatteryPercentageFlag(bool* pOutValue) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetBatteryPercentageFlag(sf::Out<bool>(pOutValue));
}

Result SetBatteryPercentageFlag(bool value) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->SetBatteryPercentageFlag(value);
}

Result GetInitialLaunchSettings(system::InitialLaunchSettings* pOutValue) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetInitialLaunchSettings(
    sf::Out<system::InitialLaunchSettings>(pOutValue));
}

Result SetInitialLaunchSettings(const system::InitialLaunchSettings& value) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->SetInitialLaunchSettings(value);
}

Result SetDeviceNickName(const system::DeviceNickName& value) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->SetDeviceNickName(value);
}

Result GetAppletLaunchFlags(
  util::BitFlagSet<32, system::AppletLaunchFlag>* pOutValue) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetAppletLaunchFlags(
    sf::Out<util::BitFlagSet<32, system::AppletLaunchFlag>>(pOutValue));
}

Result SetAppletLaunchFlags(
  const util::BitFlagSet<32, system::AppletLaunchFlag>& value) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->SetAppletLaunchFlags(value);
}

Result GetQuestFlagForSystemApplication(bool* pOutValue) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetQuestFlagForSystemApplication(sf::Out<bool>(pOutValue));
}

Result SetQuestFlag(bool value) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->SetQuestFlag(value);
}

Result GetFieldTestingFlag(bool* pOutValue) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetFieldTestingFlag(sf::Out<bool>(pOutValue));
}

Result SetFieldTestingFlag(bool value) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->SetFieldTestingFlag(value);
}

Result GetWirelessCertificationHtmlFileSize(unsigned long* pOutValue) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetWirelessCertificationHtmlFileSize(
    sf::Out<unsigned long>(pOutValue));
}

Result GetWirelessCertificationHtmlFile(
  unsigned long* pOutValue, unsigned char* buffer, unsigned long size) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetWirelessCertificationHtmlFile(
    sf::Out<unsigned long>(pOutValue), sf::OutBuffer(buffer, size));
}

Result GetWirelessCertificationJpegFileSize(unsigned long* pOutValue) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetWirelessCertificationJpegFileSize(
    sf::Out<unsigned long>(pOutValue));
}

Result GetWirelessCertificationJpegFile(
  unsigned long* pOutValue, unsigned char* buffer, unsigned long size) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetWirelessCertificationJpegFile(
    sf::Out<unsigned long>(pOutValue), sf::OutBuffer(buffer, size));
}

Result GetHighContrastFlag(bool* pOutValue) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetHighContrastFlag(sf::Out<bool>(pOutValue));
}

Result SetHighContrastFlag(bool value) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->SetHighContrastFlag(value);
}

Result SetTextToSpeechFlag(bool value) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->SetTextToSpeechFlag(value);
}

Result GetTextMagnificationRatio(float* pOutValue) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetTextMagnificationRatio(sf::Out<float>(pOutValue));
}

Result SetTextMagnificationRatio(float value) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->SetTextMagnificationRatio(value);
}

Result GetTitleIconKeepFlag(bool* pOutValue) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetTitleIconKeepFlag(sf::Out<bool>(pOutValue));
}

Result SetTitleIconKeepFlag(bool value) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->SetTitleIconKeepFlag(value);
}

Result GetBoldTextFlag(bool* pOutValue) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetBoldTextFlag(sf::Out<bool>(pOutValue));
}

Result SetBoldTextFlag(bool value) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->SetBoldTextFlag(value);
}

Result GetSpeechToTextFlag(bool* pOutValue) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetSpeechToTextFlag(sf::Out<bool>(pOutValue));
}

Result SetSpeechToTextFlag(bool value) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->SetSpeechToTextFlag(value);
}

Result SetTextToSpeechVoiceTypeForUi(int value) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->SetTextToSpeechVoiceTypeForUi(value);
}

Result GetKeyRemapEnableFlagOnQuickSettings(bool* pOutValue) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetKeyRemapEnableFlagOnQuickSettings(sf::Out<bool>(pOutValue));
}

Result SetKeyRemapEnableFlagOnQuickSettings(bool value) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->SetKeyRemapEnableFlagOnQuickSettings(value);
}

Result SetTextToSpeechVoiceVolume(float value) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->SetTextToSpeechVoiceVolume(value);
}

Result SetTextToSpeechVoiceSpeed(float value) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->SetTextToSpeechVoiceSpeed(value);
}

Result GetAirPlaneModeRestoreFlagSet(
  util::BitFlagSet<32, system::AirPlaneModeRestoreFlag>* pOutValue) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetAirPlaneModeRestoreFlagSet(
    sf::Out<util::BitFlagSet<32, system::AirPlaneModeRestoreFlag>>(pOutValue));
}

Result SetAirPlaneModeRestoreFlagSet(
  util::BitFlagSet<32, system::AirPlaneModeRestoreFlag> bitFlagSet) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->SetAirPlaneModeRestoreFlagSet(bitFlagSet);
}

Result BindTelemetryDirtyFlagEvent(
  os::SystemEventType* pOutValue, os::EventClearMode eventClearMode) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  sf::NativeHandle handle;
  NN_RESULT_DO(proxy->BindTelemetryDirtyFlagEvent(
    sf::Out<sf::NativeHandle>(&handle)));
  os::AttachReadableHandleToSystemEvent(pOutValue, handle.GetOsHandle(),
    handle.IsManaged(), eventClearMode);
  handle.Detach();
  return Result();
}

Result GetTelemetryDirtyFlags(
  util::BitFlagSet<128, system::TelemetryDirtyFlag>* pOutValue) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetTelemetryDirtyFlags(
    sf::Out<util::BitFlagSet<128, system::TelemetryDirtyFlag>>(pOutValue));
}

Result GetDeviceTimeZoneLocationName(time::LocationName* pOutValue) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetDeviceTimeZoneLocationName(
    sf::Out<time::LocationName>(pOutValue));
}

Result SetDeviceTimeZoneLocationName(const time::LocationName& value) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->SetDeviceTimeZoneLocationName(value);
}

Result GetDeviceTimeZoneLocationUpdatedTime(
  time::SteadyClockTimePoint* pOutValue) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetDeviceTimeZoneLocationUpdatedTime(
    sf::Out<time::SteadyClockTimePoint>(pOutValue));
}

Result SetDeviceTimeZoneLocationUpdatedTime(
  const time::SteadyClockTimePoint& value) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->SetDeviceTimeZoneLocationUpdatedTime(value);
}

Result GetTvSettings(system::TvSettings* pOutValue) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetTvSettings(sf::Out<system::TvSettings>(pOutValue));
}

Result SetTvSettings(const system::TvSettings& value) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->SetTvSettings(value);
}

Result GetEdid(system::Edid* pOutValue) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetEdid(sf::Out<system::Edid>(pOutValue));
}

Result SetEdid(const system::Edid& value) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->SetEdid(value);
}

Result GetTvHdrSettings(
  int* pOutValue, system::TvHdrSettings* pOutValue2, unsigned long size) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetTvHdrSettings(
    sf::Out<int>(pOutValue),
    sf::OutArray<system::TvHdrSettings>(pOutValue2, size));
}

Result SetTvHdrSettings(
  const system::TvHdrSettings* pValues, unsigned long size) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->SetTvHdrSettings(
    sf::InArray<system::TvHdrSettings>(pValues, size));
}

Result GetTvHdrSettingsEx(
  int* pOutValue, system::TvHdrSettingsEx* pOutValue2, unsigned long size) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetTvHdrSettingsEx(
    sf::Out<int>(pOutValue),
    sf::OutArray<system::TvHdrSettingsEx>(pOutValue2, size));
}

Result SetTvHdrSettingsEx(
  const system::TvHdrSettingsEx* pValues, unsigned long size) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->SetTvHdrSettingsEx(
    sf::InArray<system::TvHdrSettingsEx>(pValues, size));
}

Result GetUsb30HostEnableFlag(bool* pOutValue) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetUsb30HostEnableFlag(sf::Out<bool>(pOutValue));
}

Result SetUsb30HostEnableFlag(bool value) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->SetUsb30HostEnableFlag(value);
}

Result GetUsb30DeviceEnableFlag(bool* pOutValue) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetUsb30DeviceEnableFlag(sf::Out<bool>(pOutValue));
}

Result SetUsb30DeviceEnableFlag(bool value) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->SetUsb30DeviceEnableFlag(value);
}

Result BindVphymDirtyFlagEvent(
  os::SystemEventType* pOutValue, os::EventClearMode eventClearMode) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  sf::NativeHandle handle;
  NN_RESULT_DO(proxy->BindVphymDirtyFlagEvent(
    sf::Out<sf::NativeHandle>(&handle)));
  os::AttachReadableHandleToSystemEvent(pOutValue, handle.GetOsHandle(),
    handle.IsManaged(), eventClearMode);
  handle.Detach();
  return Result();
}

Result GetVphymDirtyFlags(
  util::BitFlagSet<128, system::VphymDirtyFlag>* pOutValue) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetVphymDirtyFlags(
    sf::Out<util::BitFlagSet<128, system::VphymDirtyFlag>>(pOutValue));
}

Result GetWebInspectorFlag(bool* pOutValue) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetWebInspectorFlag(sf::Out<bool>(pOutValue));
}

Result GetMemoryUsageRateFlag(bool* pOutValue) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetMemoryUsageRateFlag(sf::Out<bool>(pOutValue));
}

Result GetAllowedSslHosts(
  int* pOutCount, system::AllowedSslHost* pOutValues, unsigned long count) {
  NN_ABORT_UNLESS_NOT_NULL(pOutCount);
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetAllowedSslHosts(sf::Out<int>(pOutCount),
    sf::OutArray<system::AllowedSslHost>(pOutValues, count));
}

Result GetHostFsMountPoint(system::HostFsMountPoint* pOutValue) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetHostFsMountPoint(
    sf::Out<system::HostFsMountPoint>(pOutValue));
}

Result GetHttpAuthConfigs(
  int* pOutCount, system::HttpAuthConfig* pOutValues, unsigned long count) {
  NN_ABORT_UNLESS_NOT_NULL(pOutCount);
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetHttpAuthConfigs(sf::Out<int>(pOutCount),
    sf::OutArray<system::HttpAuthConfig>(pOutValues, count));
}

Result GetWirelessLanEnableFlag(bool* pOutValue) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetWirelessLanEnableFlag(sf::Out<bool>(pOutValue));
}

Result SetWirelessLanEnableFlag(bool value) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->SetWirelessLanEnableFlag(value);
}

Result GetZoomFlag(bool* pOutValue) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->GetZoomFlag(sf::Out<bool>(pOutValue));
}

Result SetZoomFlag(bool value) {
  sf::SharedPointer<ISystemSettingsServer> proxy;
  NN_RESULT_DO(CreateSystemSettingsServerProxyForIpc(&proxy));
  return proxy->SetZoomFlag(value);
}

}
