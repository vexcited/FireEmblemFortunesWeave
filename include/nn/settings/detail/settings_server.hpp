#pragma once

#include "nn/result.hpp"
#include "nn/settings/settings_types.hpp"
#include "nn/sf/sf_buffers.hpp"
#include "nn/sf/shared_pointer.hpp"

namespace nn::settings {

class ISettingsItemKeyIterator : public sf::IServiceObject {
 public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result GoNext() = 0;
  virtual Result GetKeySize(sf::Out<uint64_t> pOutSize) = 0;
  virtual Result GetKey(sf::Out<uint64_t> pOutSize,
    const sf::OutBuffer& outBuffer) = 0;
};

class ISettingsServer : public sf::IServiceObject {
 public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result GetLanguageCode(sf::Out<LanguageCode> pOutValue) = 0;
  virtual void Reserved5() = 0;
  virtual void Reserved6() = 0;
  virtual void Reserved7() = 0;
  virtual Result GetRegionCode(sf::Out<int> pOutValue) = 0;
  virtual void Reserved9() = 0;
  virtual void Reserved10() = 0;
  virtual void Reserved11() = 0;
  virtual Result GetQuestFlagForApplication(sf::Out<bool> pOutValue) = 0;
  virtual void Reserved13() = 0;
  virtual Result GetFirmwareVersionForDebug(
    sf::Out<oe::FirmwareVersionForDebug> pOutValue) = 0;
  virtual Result GetDeviceNickName(
    sf::Out<system::DeviceNickName> pOutValue) = 0;
  virtual Result GetKeyCodeMap(
    sf::Out<kpr::KeyCodeMap> pOutValue, int version) = 0;
  virtual Result GetTextToSpeechFlag(sf::Out<bool> pOutValue) = 0;
  virtual Result GetTextToSpeechVoiceTypeForUi(sf::Out<int> pOutValue) = 0;
  virtual Result GetTextToSpeechVoiceVolume(sf::Out<float> pOutValue) = 0;
  virtual Result GetTextToSpeechVoiceSpeed(sf::Out<float> pOutValue) = 0;
};

class ISystemSettingsServer : public sf::IServiceObject {
 public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result SetLanguageCode(LanguageCode value) = 0;
  virtual Result SetNetworkSettings(
    const sf::InArray<system::NetworkSettings>& values) = 0;
  virtual Result GetNetworkSettings(
    sf::Out<int> pOutValue,
    const sf::OutArray<system::NetworkSettings>& outValues) = 0;
  virtual Result GetFirmwareVersion(
    sf::Out<system::FirmwareVersion> pOutValue) = 0;
  virtual Result GetLockScreenFlag(sf::Out<bool> pOutValue) = 0;
  virtual Result SetLockScreenFlag(bool value) = 0;
  virtual Result GetBacklightSettings(
    sf::Out<system::BacklightSettings> pOutValue) = 0;
  virtual Result SetBacklightSettings(
    const system::BacklightSettings& value) = 0;
  virtual Result GetExternalSteadyClockSourceId(
    sf::Out<util::Uuid> pOutValue) = 0;
  virtual Result SetExternalSteadyClockSourceId(const util::Uuid& value) = 0;
  virtual Result GetUserSystemClockContext(
    sf::Out<time::SystemClockContext> pOutValue) = 0;
  virtual Result SetUserSystemClockContext(
    const time::SystemClockContext& value) = 0;
  virtual Result GetAccountSettings(
    sf::Out<system::AccountSettings> pOutValue) = 0;
  virtual Result SetAccountSettings(system::AccountSettings value) = 0;
  virtual Result GetAudioVolume(
    const sf::OutArray<system::AudioVolume>& outValues) = 0;
  virtual Result SetAudioVolume(
    const system::AudioVolume& value, int value2) = 0;
  virtual Result GetEulaVersions(
    sf::Out<int> pOutValue,
    const sf::OutArray<system::EulaVersion>& outValues) = 0;
  virtual Result SetEulaVersions(
    const sf::InArray<system::EulaVersion>& values) = 0;
  virtual Result GetColorSetId(sf::Out<int> pOutValue) = 0;
  virtual Result SetColorSetId(int value) = 0;
  virtual Result GetNotificationSettings(
    sf::Out<system::NotificationSettings> pOutValue) = 0;
  virtual Result SetNotificationSettings(
    const system::NotificationSettings& value) = 0;
  virtual Result GetAccountNotificationSettings(
    sf::Out<int> pOutValue,
    const sf::OutArray<system::AccountNotificationSettings>& outValues) = 0;
  virtual Result SetAccountNotificationSettings(
    const sf::InArray<system::AccountNotificationSettings>& values) = 0;
  virtual Result GetVibrationMasterVolume(sf::Out<float> pOutValue) = 0;
  virtual Result SetVibrationMasterVolume(float value) = 0;
  virtual Result GetSettingsItemValueSize(sf::Out<uint64_t> pOutSize,
    const SettingsName& name, const SettingsItemKey& key) = 0;
  virtual Result GetSettingsItemValue(sf::Out<uint64_t> pOutSize,
    const sf::OutBuffer& outBuffer, const SettingsName& name,
    const SettingsItemKey& key) = 0;
  virtual Result GetTvSettings(sf::Out<system::TvSettings> pOutValue) = 0;
  virtual Result SetTvSettings(const system::TvSettings& value) = 0;
  virtual Result GetEdid(sf::Out<system::Edid> pOutValue) = 0;
  virtual Result SetEdid(const system::Edid& value) = 0;
  virtual Result GetAudioOutputMode(sf::Out<int> pOutValue, int count) = 0;
  virtual Result SetAudioOutputMode(int value, int value2) = 0;
  virtual Result GetSpeakerAutoMuteFlag(sf::Out<bool> pOutValue) = 0;
  virtual Result SetSpeakerAutoMuteFlag(bool value) = 0;
  virtual Result GetQuestFlagForSystemApplication(sf::Out<bool> pOutValue) = 0;
  virtual Result SetQuestFlag(bool value) = 0;
  virtual Result GetDeviceTimeZoneLocationName(
    sf::Out<time::LocationName> pOutValue) = 0;
  virtual Result SetDeviceTimeZoneLocationName(
    const time::LocationName& value) = 0;
  virtual Result SetRegionCode(int value) = 0;
  virtual Result GetNetworkSystemClockContext(
    sf::Out<time::SystemClockContext> pOutValue) = 0;
  virtual Result SetNetworkSystemClockContext(
    const time::SystemClockContext& value) = 0;
  virtual Result IsUserSystemClockAutomaticCorrectionEnabled(
    sf::Out<bool> pOutValue) = 0;
  virtual Result SetUserSystemClockAutomaticCorrectionEnabled(bool value) = 0;
  virtual Result GetDebugModeFlag(sf::Out<bool> pOutValue) = 0;
  virtual Result GetPrimaryAlbumStorage(sf::Out<int> pOutValue) = 0;
  virtual Result SetPrimaryAlbumStorage(int value) = 0;
  virtual Result GetBatteryLotForSystem(sf::Out<BatteryLot> pOutValue) = 0;
  virtual Result GetSerialNumber(sf::Out<system::SerialNumber> pOutValue) = 0;
  virtual Result GetNfcEnableFlag(sf::Out<bool> pOutValue) = 0;
  virtual Result SetNfcEnableFlag(bool value) = 0;
  virtual Result GetSleepSettings(sf::Out<system::SleepSettings> pOutValue) = 0;
  virtual Result SetSleepSettings(const system::SleepSettings& value) = 0;
  virtual Result GetWirelessLanEnableFlag(sf::Out<bool> pOutValue) = 0;
  virtual Result SetWirelessLanEnableFlag(bool value) = 0;
  virtual void Reserved60() = 0;
  virtual Result SetDeviceNickName(const system::DeviceNickName& value) = 0;
  virtual Result GetProductModel(sf::Out<int> pOutValue) = 0;
  virtual Result BindTelemetryDirtyFlagEvent(
    sf::Out<os::SystemEventType> pOutValue,
    os::EventClearMode eventClearMode) = 0;
  virtual Result GetTelemetryDirtyFlags(
    sf::Out<util::BitFlagSet<128, system::TelemetryDirtyFlag>> pOutValue) = 0;
  virtual Result GetPtmBatteryLot(sf::Out<BatteryLot> pOutValue) = 0;
  virtual Result SetPtmBatteryLot(const BatteryLot& value) = 0;
  virtual Result GetPtmFuelGaugeParameter(
    sf::Out<system::PtmFuelGaugeParameter> pOutValue) = 0;
  virtual Result SetPtmFuelGaugeParameter(
    const system::PtmFuelGaugeParameter& value) = 0;
  virtual Result GetBluetoothEnableFlag(sf::Out<bool> pOutValue) = 0;
  virtual Result SetBluetoothEnableFlag(bool value) = 0;
  virtual Result GetMiiAuthorId(sf::Out<util::Uuid> pOutValue) = 0;
  virtual Result SetShutdownRtcValue(long value) = 0;
  virtual Result GetShutdownRtcValue(sf::Out<long> pOutValue) = 0;
  virtual Result BindFatalDirtyFlagEvent(
    sf::Out<os::SystemEventType> pOutValue,
    os::EventClearMode eventClearMode) = 0;
  virtual Result GetFatalDirtyFlags(
    sf::Out<util::BitFlagSet<128, system::FatalDirtyFlag>> pOutValue) = 0;
  virtual Result GetAutoUpdateEnableFlag(sf::Out<bool> pOutValue) = 0;
  virtual Result SetAutoUpdateEnableFlag(bool value) = 0;
  virtual Result GetBatteryPercentageFlag(sf::Out<bool> pOutValue) = 0;
  virtual Result SetBatteryPercentageFlag(bool value) = 0;
  virtual Result GetUsbFullKeyEnableFlag(sf::Out<bool> pOutValue) = 0;
  virtual Result SetUsbFullKeyEnableFlag(bool value) = 0;
  virtual Result SetExternalSteadyClockInternalOffset(long value) = 0;
  virtual Result GetExternalSteadyClockInternalOffset(
    sf::Out<long> pOutValue) = 0;
  virtual Result GetBacklightSettingsEx(
    sf::Out<system::BacklightSettingsEx> pOutValue) = 0;
  virtual Result SetBacklightSettingsEx(
    const system::BacklightSettingsEx& value) = 0;
  virtual Result GetHeadphoneVolumeWarningCount(sf::Out<int> pOutValue) = 0;
  virtual Result SetHeadphoneVolumeWarningCount(int value) = 0;
  virtual Result GetInRepairProcessEnableFlag(sf::Out<bool> pOutValue) = 0;
  virtual Result SetInRepairProcessEnableFlag(bool value) = 0;
  virtual Result GetPushNotificationActivityModeOnSleep(
    sf::Out<int> pOutValue) = 0;
  virtual Result SetPushNotificationActivityModeOnSleep(int value) = 0;
  virtual Result GetServiceDiscoveryControlSettings(
    sf::Out<system::ServiceDiscoveryControlSettings> pOutValue) = 0;
  virtual Result SetServiceDiscoveryControlSettings(
    system::ServiceDiscoveryControlSettings value) = 0;
  virtual Result GetErrorReportSharePermission(sf::Out<int> pOutValue) = 0;
  virtual Result SetErrorReportSharePermission(int value) = 0;
  virtual Result GetAppletLaunchFlags(
    sf::Out<util::BitFlagSet<32, system::AppletLaunchFlag>> pOutValue) = 0;
  virtual Result SetAppletLaunchFlags(
    util::BitFlagSet<32, system::AppletLaunchFlag> value) = 0;
  virtual Result GetKeyboardLayout(sf::Out<KeyboardLayout> pOutValue) = 0;
  virtual Result SetKeyboardLayout(KeyboardLayout keyboardLayout) = 0;
  virtual Result GetWebInspectorFlag(sf::Out<bool> pOutValue) = 0;
  virtual Result GetAllowedSslHosts(
    sf::Out<int> pOutValue,
    const sf::OutArray<system::AllowedSslHost>& outValues) = 0;
  virtual Result GetHostFsMountPoint(
    sf::Out<system::HostFsMountPoint> pOutValue) = 0;
  virtual Result GetRequiresRunRepairTimeReviser(sf::Out<bool> pOutValue) = 0;
  virtual Result SetRequiresRunRepairTimeReviser(bool value) = 0;
  virtual Result GetRebootlessSystemUpdateVersion(
    sf::Out<system::RebootlessSystemUpdateVersion> pOutValue) = 0;
  virtual Result GetDeviceTimeZoneLocationUpdatedTime(
    sf::Out<time::SteadyClockTimePoint> pOutValue) = 0;
  virtual Result SetDeviceTimeZoneLocationUpdatedTime(
    const time::SteadyClockTimePoint& value) = 0;
  virtual Result GetUserSystemClockAutomaticCorrectionUpdatedTime(
    sf::Out<time::SteadyClockTimePoint> pOutValue) = 0;
  virtual Result SetUserSystemClockAutomaticCorrectionUpdatedTime(
    const time::SteadyClockTimePoint& value) = 0;
  virtual Result GetPtmBatteryVersion(sf::Out<unsigned char> buffer) = 0;
  virtual Result SetPtmBatteryVersion(unsigned char value) = 0;
  virtual Result GetUsb30HostEnableFlag(sf::Out<bool> pOutValue) = 0;
  virtual Result SetUsb30HostEnableFlag(bool value) = 0;
  virtual Result GetUsb30DeviceEnableFlag(sf::Out<bool> pOutValue) = 0;
  virtual Result SetUsb30DeviceEnableFlag(bool value) = 0;
  virtual Result GetChineseTraditionalInputMethod(
    sf::Out<ChineseTraditionalInputMethod> pOutValue) = 0;
  virtual Result SetChineseTraditionalInputMethod(
    ChineseTraditionalInputMethod chineseTraditionalInputMethod) = 0;
  virtual Result GetPtmCycleCountReliability(
    sf::Out<system::PtmCycleCountReliability> pOutValue) = 0;
  virtual Result SetPtmCycleCountReliability(
    system::PtmCycleCountReliability ptmCycleCountReliability) = 0;
  virtual Result GetHomeMenuScheme(
    sf::Out<system::HomeMenuScheme> pOutValue) = 0;
  virtual Result GetZoomFlag(sf::Out<bool> pOutValue) = 0;
  virtual Result SetZoomFlag(bool value) = 0;
  virtual Result GetPlatformRegion(sf::Out<int> pOutValue) = 0;
  virtual Result SetPlatformRegion(int value) = 0;
  virtual Result GetHomeMenuSchemeModel(sf::Out<unsigned int> pOutValue) = 0;
  virtual Result GetMemoryUsageRateFlag(sf::Out<bool> pOutValue) = 0;
  virtual Result GetFieldTestingFlag(sf::Out<bool> pOutValue) = 0;
  virtual Result SetFieldTestingFlag(bool value) = 0;
  virtual Result GetPanelCrcMode(sf::Out<system::CrcMode> pOutValue) = 0;
  virtual Result SetPanelCrcMode(system::CrcMode crcMode) = 0;
  virtual Result GetWirelessCertificationHtmlFileSize(
    sf::Out<unsigned long> pOutValue) = 0;
  virtual Result GetWirelessCertificationHtmlFile(
    sf::Out<unsigned long> pOutValue, const sf::OutBuffer& outBuffer) = 0;
  virtual Result GetWirelessCertificationJpegFileSize(
    sf::Out<unsigned long> pOutValue) = 0;
  virtual Result GetWirelessCertificationJpegFile(
    sf::Out<unsigned long> pOutValue, const sf::OutBuffer& outBuffer) = 0;
  virtual Result GetHighContrastFlag(sf::Out<bool> pOutValue) = 0;
  virtual Result SetHighContrastFlag(bool value) = 0;
  virtual void Reserved137() = 0;
  virtual Result SetTextToSpeechFlag(bool value) = 0;
  virtual Result GetTextMagnificationRatio(sf::Out<float> pOutValue) = 0;
  virtual Result SetTextMagnificationRatio(float value) = 0;
  virtual Result GetForceMonauralOutputFlag(sf::Out<bool> pOutValue) = 0;
  virtual Result SetForceMonauralOutputFlag(bool value) = 0;
  virtual Result GetUsbAudioVolumeSettings(
    sf::Out<int> pOutValue,
    const sf::OutArray<system::UsbAudioVolumeSettings>& outValues) = 0;
  virtual Result SetUsbAudioVolumeSettings(
    const sf::InArray<system::UsbAudioVolumeSettings>& values) = 0;
  virtual Result GetTitleIconKeepFlag(sf::Out<bool> pOutValue) = 0;
  virtual Result SetTitleIconKeepFlag(bool value) = 0;
  virtual Result GetBoldTextFlag(sf::Out<bool> pOutValue) = 0;
  virtual Result SetBoldTextFlag(bool value) = 0;
  virtual Result GetSpeechToTextFlag(sf::Out<bool> pOutValue) = 0;
  virtual Result SetSpeechToTextFlag(bool value) = 0;
  virtual Result GetColorFilterType(sf::Out<int> pOutValue) = 0;
  virtual Result SetColorFilterType(int value) = 0;
  virtual Result GetPrioritizedOutputAudioDeviceSettings(
    sf::Out<system::PrioritizedOutputAudioDeviceSettings> pOutValue) = 0;
  virtual Result SetPrioritizedOutputAudioDeviceSettings(
    const system::PrioritizedOutputAudioDeviceSettings& value) = 0;
  virtual Result GetPrioritizedInputAudioDeviceSettings(
    sf::Out<system::PrioritizedInputAudioDeviceSettings> pOutValue) = 0;
  virtual Result SetPrioritizedInputAudioDeviceSettings(
    system::PrioritizedInputAudioDeviceSettings value) = 0;
  virtual void Reserved157() = 0;
  virtual Result SetTextToSpeechVoiceTypeForUi(int value) = 0;
  virtual Result GetLcdFlags(
    sf::Out<util::BitFlagSet<32, system::LcdFlag>> pOutValue) = 0;
  virtual Result SetLcdFlags(
    util::BitFlagSet<32, system::LcdFlag> bitFlagSet) = 0;
  virtual Result GetTvHdrSettings(
    sf::Out<int> pOutValue,
    const sf::OutArray<system::TvHdrSettings>& outValues) = 0;
  virtual Result SetTvHdrSettings(
    const sf::InArray<system::TvHdrSettings>& values) = 0;
  virtual Result IsColorInversionEnabled(sf::Out<bool> pOutValue) = 0;
  virtual Result SetColorInversionEnabled(bool value) = 0;
  virtual Result GetKeyRemapEnableFlagOnQuickSettings(
    sf::Out<bool> pOutValue) = 0;
  virtual Result SetKeyRemapEnableFlagOnQuickSettings(bool value) = 0;
  virtual Result GetAccountIdentificationSettings(
    sf::Out<int> pOutValue,
    const sf::OutArray<system::AccountIdentificationSettings>& outValues) = 0;
  virtual Result SetAccountIdentificationSettings(
    const sf::InArray<system::AccountIdentificationSettings>& values) = 0;
  virtual Result GetDeviceLockPinCodeLength(sf::Out<int> pOutValue) = 0;
  virtual Result GetDeviceLockPinCode(
    sf::Out<char> pOutValue, sf::Out<int> pOutValue2, int count) = 0;
  virtual Result SetDeviceLockPinCode(const sf::InArray<char>& values) = 0;
  virtual Result GetDeviceLockEnableFlag(sf::Out<bool> pOutValue) = 0;
  virtual Result GetDeviceLockStartPenaltyTime(
    sf::Out<time::PosixTime> pOutValue) = 0;
  virtual Result SetDeviceLockStartPenaltyTime(time::PosixTime value) = 0;
  virtual Result GetDeviceLockErrorCount(sf::Out<int> pOutValue) = 0;
  virtual Result SetDeviceLockErrorCount(int value) = 0;
  virtual Result GetBatteryCareModeEnableFlag(sf::Out<bool> pOutValue) = 0;
  virtual Result SetBatteryCareModeEnableFlag(bool value) = 0;
  virtual Result BindVphymDirtyFlagEvent(
    sf::Out<os::SystemEventType> pOutValue,
    os::EventClearMode eventClearMode) = 0;
  virtual Result GetVphymDirtyFlags(
    sf::Out<util::BitFlagSet<128, system::VphymDirtyFlag>> pOutValue) = 0;
  virtual Result GetInitialLaunchSettings(
    sf::Out<system::InitialLaunchSettings> pOutValue) = 0;
  virtual Result SetInitialLaunchSettings(
    const system::InitialLaunchSettings& value) = 0;
  virtual Result GetManufacturingTimeStamp(
    sf::Out<time::SteadyClockTimePoint> pOutValue) = 0;
  virtual Result SetManufacturingTimeStamp(
    const time::SteadyClockTimePoint& value) = 0;
  virtual Result GetInputNoiseReductionForCommunicationFlag(
    sf::Out<bool> pOutValue) = 0;
  virtual Result SetInputNoiseReductionForCommunicationFlag(
    const bool& value) = 0;
  virtual Result GetChatTranscriptionSettings(
    sf::Out<int> pOutValue,
    const sf::OutArray<system::ChatTranscriptionSettings>& outValues) = 0;
  virtual Result SetChatTranscriptionSettings(
    const sf::InArray<system::ChatTranscriptionSettings>& values) = 0;
  virtual Result GetBuiltInMicrophoneGain(sf::Out<float> pOutValue) = 0;
  virtual Result SetBuiltInMicrophoneGain(float value) = 0;
  virtual Result GetBuiltInMicrophoneJackGain(sf::Out<float> pOutValue) = 0;
  virtual Result SetBuiltInMicrophoneJackGain(float value) = 0;
  virtual Result GetUsbAudioInputDeviceGainSettings(
    sf::Out<int> pOutValue,
    const sf::OutArray<system::UsbAudioInputDeviceGainSettings>& outValues) = 0;
  virtual Result SetUsbAudioInputDeviceGainSettings(
    const sf::InArray<system::UsbAudioInputDeviceGainSettings>& values) = 0;
  virtual Result SetBluetoothStackFlag(bool value) = 0;
  virtual Result SetHidDebugOcdUsbFlag(bool value) = 0;
  virtual Result SetHidDebugRailFlag(bool value) = 0;
  virtual Result ConvertToProductModel(
    sf::Out<system::ProductModel> pOutValue,
    const system::ProductModelName& value) = 0;
  virtual Result ConvertToProductModelName(
    sf::Out<system::ProductModelName> pOutValue,
    system::ProductModel productModel) = 0;
  virtual Result GetSaveDataPurgedForRepairFlag(sf::Out<bool> pOutValue) = 0;
  virtual Result SetSaveDataPurgedForRepairFlag(bool value) = 0;
  virtual Result GetAppletParameterSet(
    sf::Out<system::AppletParameterSet> pOutValue) = 0;
  virtual Result SetAppletParameterSet(
    const system::AppletParameterSet& value) = 0;
  virtual Result BindChatTranscriptionSettingsChangedEvent(
    sf::Out<os::SystemEventType> pOutValue,
    os::EventClearMode eventClearMode) = 0;
  virtual void Reserved205() = 0;
  virtual Result GetMouseEnableFlag(sf::Out<bool> pOutValue) = 0;
  virtual Result SetMouseEnableFlag(bool value) = 0;
  virtual void Reserved208() = 0;
  virtual Result SetTextToSpeechVoiceVolume(float value) = 0;
  virtual void Reserved210() = 0;
  virtual Result SetTextToSpeechVoiceSpeed(float value) = 0;
  virtual Result GetSleepSettingsEx(
    sf::Out<system::SleepSettingsEx> pOutValue) = 0;
  virtual Result SetSleepSettingsEx(const system::SleepSettingsEx& value) = 0;
  virtual Result GetMousePointerSpeedScale(sf::Out<float> pOutValue) = 0;
  virtual Result SetMousePointerSpeedScale(float value) = 0;
  virtual Result BindPushNotificationDirtyFlagEvent(
    sf::Out<os::SystemEventType> pOutValue,
    os::EventClearMode eventClearMode) = 0;
  virtual Result GetPushNotificationDirtyFlags(
    sf::Out<util::BitFlagSet<64, system::PushNotificationDirtyFlag>> pOutValue) = 0;
  virtual Result GetTvHdrSettingsEx(
    sf::Out<int> pOutValue,
    const sf::OutArray<system::TvHdrSettingsEx>& outValues) = 0;
  virtual Result SetTvHdrSettingsEx(
    const sf::InArray<system::TvHdrSettingsEx>& values) = 0;
  virtual Result GetOunceProControllerMicrophoneJackGain(
    sf::Out<float> pOutValue) = 0;
  virtual Result SetOunceProControllerMicrophoneJackGain(float value) = 0;
  virtual Result GetPinCodeReregistrationGuideAccounts(
    sf::Out<int> pOutValue,
    const sf::OutArray<account::NetworkServiceAccountId>& outValues) = 0;
  virtual Result SetPinCodeReregistrationGuideAccounts(
    const sf::InArray<account::NetworkServiceAccountId>& values) = 0;
  virtual Result GetChatTranscriptionSettingsEx(
    sf::Out<int> pOutValue,
    const sf::OutArray<system::ChatTranscriptionSettingsEx>& outValues) = 0;
  virtual Result SetChatTranscriptionSettingsEx(
    const sf::InArray<system::ChatTranscriptionSettingsEx>& values) = 0;
  virtual Result GetDeviceLockPinCodeLsbParity(
    sf::Out<int> pOutValue, sf::Out<bool> pOutValue2, int count) = 0;
  virtual Result VerifyDeviceLockPinCode(
    sf::Out<bool> pOutValue, const sf::InArray<char>& values) = 0;
  virtual Result GetDeviceLockVeificationForbiddenFlag(
    sf::Out<bool> pOutValue) = 0;
  virtual Result GetDeviceLockStartPenaltyTimeEx(
    sf::Out<bool> pOutValue, sf::Out<time::ClockSnapshot> pOutValue2) = 0;
  virtual Result SetDeviceLockStartPenaltyTimeEx(
    const time::ClockSnapshot& value) = 0;
  virtual Result GetHttpAuthConfigs(
    sf::Out<int> pOutValue,
    const sf::OutArray<system::HttpAuthConfig>& outValues) = 0;
  virtual Result GetOunceProControllerAudioLowLatencyModeEnableFlag(
    sf::Out<bool> pOutValue) = 0;
  virtual Result SetOunceProControllerAudioLowLatencyModeEnabled(
    bool value) = 0;
  virtual Result BindChatTranscriptionSettingsChangedEventForSettingApplet(
    sf::Out<os::SystemEventType> pOutValue,
    os::EventClearMode eventClearMode) = 0;
  virtual Result GetAccountUserSettings(
    sf::Out<int> pOutValue,
    const sf::OutArray<system::AccountUserSettings>& outValues) = 0;
  virtual Result SetAccountUserSettings(
    const sf::InArray<system::AccountUserSettings>& values) = 0;
  virtual void Reserved237() = 0;
  virtual Result GetForceConsoleModeEnableFlag(sf::Out<bool> pOutValue) = 0;
  virtual Result SetForceConsoleModeEnableFlag(bool value) = 0;
  virtual Result GetPtmQhClearCount(sf::Out<int> pOutValue) = 0;
  virtual Result SetPtmQhClearCount(int value) = 0;
  virtual Result GetAirPlaneModeRestoreFlagSet(
    sf::Out<util::BitFlagSet<32, system::AirPlaneModeRestoreFlag>> pOutValue) = 0;
  virtual Result SetAirPlaneModeRestoreFlagSet(
    util::BitFlagSet<32, system::AirPlaneModeRestoreFlag> bitFlagSet) = 0;
  virtual Result DeleteSettingsPerAccount(const account::Uid& uid) = 0;
  virtual Result GetQuickShutdownForManufacturingEnableFlag(
    sf::Out<bool> pOutValue) = 0;
  virtual Result SetQuickShutdownForManufacturingEnableFlag(bool value) = 0;
};

class IFactorySettingsServer : public sf::IServiceObject {
 public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result GetConfigurationId1(
    sf::Out<factory::ConfigurationId1> pOutValue) = 0;
  virtual Result GetWirelessLanMacAddress(
    sf::Out<factory::MacAddress> pOutValue) = 0;
  virtual Result GetSerialNumber(sf::Out<factory::SerialNumber> pOutValue) = 0;
  virtual Result GetBatteryLotForFactory(sf::Out<BatteryLot> pOutValue) = 0;
  virtual Result GetCpDeviceKeyFileSize(sf::Out<unsigned long> pOutValue) = 0;
  virtual Result GetCpDeviceKeyFile(
    sf::Out<unsigned long> pOutValue, const sf::OutBuffer& outBuffer) = 0;
  virtual Result GetCpCertificateFileSize(sf::Out<unsigned long> pOutValue) = 0;
  virtual Result GetCpCertificateFile(
    sf::Out<unsigned long> pOutValue, const sf::OutBuffer& outBuffer) = 0;
  virtual Result GetRaCertificateFileSize(sf::Out<unsigned long> pOutValue) = 0;
  virtual Result GetRaCertificateFile(
    sf::Out<unsigned long> pOutValue, const sf::OutBuffer& outBuffer) = 0;
  virtual Result GetRaOemEkFileSize(sf::Out<unsigned long> pOutValue) = 0;
  virtual Result GetRaOemEkFile(
    sf::Out<unsigned long> pOutValue, const sf::OutBuffer& outBuffer) = 0;
  virtual Result GetRaPkaKekFileSize(sf::Out<unsigned long> pOutValue) = 0;
  virtual Result GetRaPkaKekFile(
    sf::Out<unsigned long> pOutValue, const sf::OutBuffer& outBuffer) = 0;
  virtual Result GetGcNxPkKekFileSize(sf::Out<unsigned long> pOutValue) = 0;
  virtual Result GetGcNxPkKekFile(
    sf::Out<unsigned long> pOutValue, const sf::OutBuffer& outBuffer) = 0;
  virtual Result GetGcUniqueImportKeyFileSize(
    sf::Out<unsigned long> pOutValue) = 0;
  virtual Result GetGcUniqueImportKeyFile(
    sf::Out<unsigned long> pOutValue, const sf::OutBuffer& outBuffer) = 0;
  virtual Result GetGcUniqueEncryptionKeyFileSize(
    sf::Out<unsigned long> pOutValue) = 0;
  virtual Result GetGcUniqueEncryptionKeyFile(
    sf::Out<unsigned long> pOutValue, const sf::OutBuffer& outBuffer) = 0;
  virtual Result GetGcCertificateFileSize(sf::Out<unsigned long> pOutValue) = 0;
  virtual Result GetGcCertificateFile(
    sf::Out<unsigned long> pOutValue, const sf::OutBuffer& outBuffer) = 0;
  virtual Result GetGcUniqueKeyAFileSize(sf::Out<unsigned long> pOutValue) = 0;
  virtual Result GetGcUniqueKeyAFile(
    sf::Out<unsigned long> pOutValue, const sf::OutBuffer& outBuffer) = 0;
  virtual Result GetGcUniqueKeyBFileSize(sf::Out<unsigned long> pOutValue) = 0;
  virtual Result GetGcUniqueKeyBFile(
    sf::Out<unsigned long> pOutValue, const sf::OutBuffer& outBuffer) = 0;
  virtual Result GetGcNxKeyFileSize(sf::Out<unsigned long> pOutValue) = 0;
  virtual Result GetGcNxKeyFile(
    sf::Out<unsigned long> pOutValue, const sf::OutBuffer& outBuffer) = 0;
  virtual Result GetGcNxCertificateFileSize(
    sf::Out<unsigned long> pOutValue) = 0;
  virtual Result GetGcNxCertificateFile(
    sf::Out<unsigned long> pOutValue, const sf::OutBuffer& outBuffer) = 0;
  virtual Result GetWirelessLanRegulatoryDomain(
    sf::Out<factory::WlanRegulatoryDomain> pOutValue) = 0;
  virtual Result GetDeviceId(sf::Out<factory::DeviceId> pOutValue) = 0;
  virtual Result GetBluetoothBdAddressSet(
    sf::Out<factory::BdAddressSet> pOutValue) = 0;
  virtual Result GetToolModel(sf::Out<int> pOutValue) = 0;
  virtual Result GetRadioForbidden(sf::Out<bool> pOutValue) = 0;
  virtual Result GetDisplayModuleId(
    sf::Out<factory::DisplayModuleId> pOutValue) = 0;
  virtual Result GetAnalogStickModuleTypeL(sf::Out<unsigned char> buffer) = 0;
  virtual Result GetAnalogStickModelParameterL(
    sf::Out<factory::AnalogStickModelParameter> pOutValue) = 0;
  virtual Result GetAnalogStickFactoryCalibrationL(
    sf::Out<factory::AnalogStickFactoryCalibration> pOutValue) = 0;
  virtual Result GetAnalogStickModuleTypeR(sf::Out<unsigned char> buffer) = 0;
  virtual Result GetAnalogStickModelParameterR(
    sf::Out<factory::AnalogStickModelParameter> pOutValue) = 0;
  virtual Result GetAnalogStickFactoryCalibrationR(
    sf::Out<factory::AnalogStickFactoryCalibration> pOutValue) = 0;
  virtual Result GetConsoleSixAxisSensorModuleType(
    sf::Out<unsigned char> buffer) = 0;
  virtual Result GetConsoleSixAxisSensorMountType(
    sf::Out<unsigned char> buffer) = 0;
  virtual Result GetConsoleSixAxisSensorFactoryCalibration(
    sf::Out<factory::ConsoleSixAxisSensorFactoryCalibration> pOutValue) = 0;
  virtual Result GetOta0DeviceKeyFileSize(sf::Out<unsigned long> pOutValue) = 0;
  virtual Result GetOta0DeviceKeyFile(
    sf::Out<unsigned long> pOutValue, const sf::OutBuffer& outBuffer) = 0;
  virtual Result GetOta0CertificateFileSize(
    sf::Out<unsigned long> pOutValue) = 0;
  virtual Result GetOta0CertificateFile(
    sf::Out<unsigned long> pOutValue, const sf::OutBuffer& outBuffer) = 0;
  virtual Result GetOta1DeviceKeyFileSize(sf::Out<unsigned long> pOutValue) = 0;
  virtual Result GetOta1DeviceKeyFile(
    sf::Out<unsigned long> pOutValue, const sf::OutBuffer& outBuffer) = 0;
  virtual Result GetOta1CertificateFileSize(
    sf::Out<unsigned long> pOutValue) = 0;
  virtual Result GetOta1CertificateFile(
    sf::Out<unsigned long> pOutValue, const sf::OutBuffer& outBuffer) = 0;
  virtual Result GetOta2DeviceKeyFileSize(sf::Out<unsigned long> pOutValue) = 0;
  virtual Result GetOta2DeviceKeyFile(
    sf::Out<unsigned long> pOutValue, const sf::OutBuffer& outBuffer) = 0;
  virtual Result GetOta2CertificateFileSize(
    sf::Out<unsigned long> pOutValue) = 0;
  virtual Result GetOta2CertificateFile(
    sf::Out<unsigned long> pOutValue, const sf::OutBuffer& outBuffer) = 0;
  virtual Result GetJc0CertificateFileSize(
    sf::Out<unsigned long> pOutValue) = 0;
  virtual Result GetJc0CertificateFile(
    sf::Out<unsigned long> pOutValue, const sf::OutBuffer& outBuffer) = 0;
  virtual Result GetJc0PrivateKeyFileSize(sf::Out<unsigned long> pOutValue) = 0;
  virtual Result GetJc0PrivateKeyFile(
    sf::Out<unsigned long> pOutValue, const sf::OutBuffer& outBuffer) = 0;
  virtual Result GetJc0PkKekFileSize(sf::Out<unsigned long> pOutValue) = 0;
  virtual Result GetJc0PkKekFile(
    sf::Out<unsigned long> pOutValue, const sf::OutBuffer& outBuffer) = 0;
  virtual Result GetJc1CertificateFileSize(
    sf::Out<unsigned long> pOutValue) = 0;
  virtual Result GetJc1CertificateFile(
    sf::Out<unsigned long> pOutValue, const sf::OutBuffer& outBuffer) = 0;
  virtual Result GetJc1PrivateKeyFileSize(sf::Out<unsigned long> pOutValue) = 0;
  virtual Result GetJc1PrivateKeyFile(
    sf::Out<unsigned long> pOutValue, const sf::OutBuffer& outBuffer) = 0;
  virtual Result GetJc1PkKekFileSize(sf::Out<unsigned long> pOutValue) = 0;
  virtual Result GetJc1PkKekFile(
    sf::Out<unsigned long> pOutValue, const sf::OutBuffer& outBuffer) = 0;
  virtual Result GetWirelessLanPowerTable(
    sf::Out<factory::WlanPowerTable> pOutValue) = 0;
  virtual Result GetConsoleSixAxisSensorFactoryAccelerationLog(
    sf::Out<factory::ConsoleSixAxisSensorFactoryAccelerationLog> pOutValue) = 0;
  virtual Result GetDrmCertificateFileSize(
    sf::Out<unsigned long> pOutValue) = 0;
  virtual Result GetDrmCertificateFile(
    sf::Out<unsigned long> pOutValue, const sf::OutBuffer& outBuffer) = 0;
  virtual Result GetCalibrationTimeStampUtc(
    sf::Out<time::PosixTime> pOutValue) = 0;
  virtual Result GetEncryptedSecretDeviceIdFileSize(
    sf::Out<unsigned long> pOutValue) = 0;
  virtual Result GetEncryptedSecretDeviceIdFile(
    sf::Out<unsigned long> pOutValue, const sf::OutBuffer& outBuffer) = 0;
  virtual Result GetEncryptedSecretDeviceIdEncryptionKeyFileSize(
    sf::Out<unsigned long> pOutValue) = 0;
  virtual Result GetEncryptedSecretDeviceIdEncryptionKeyFile(
    sf::Out<unsigned long> pOutValue, const sf::OutBuffer& outBuffer) = 0;
  virtual Result GetRegionCodeForFactory(sf::Out<int> pOutValue) = 0;
};

class IFirmwareDebugSettingsServer : public sf::IServiceObject {
 public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result SetSettingsItemValue(const SettingsName& name,
    const SettingsItemKey& key, const sf::InBuffer& buffer) = 0;
  virtual Result ResetSettingsItemValue(const SettingsName& name,
    const SettingsItemKey& key) = 0;
  virtual Result CreateSettingsItemKeyIterator(
    const sf::Out<sf::SharedPointer<ISettingsItemKeyIterator>>& pOutIterator,
    const SettingsName& name) = 0;
  virtual Result ReadSettings(
    sf::Out<unsigned long> pOutValue, const sf::OutBuffer& outBuffer,
    int value) = 0;
  virtual Result ResetSettings(int value) = 0;
  virtual Result SetWebInspectorFlag(bool value) = 0;
  virtual Result SetAllowedSslHosts(
    const sf::InArray<system::AllowedSslHost>& values) = 0;
  virtual Result SetHostFsMountPoint(const system::HostFsMountPoint& value) = 0;
  virtual Result SetMemoryUsageRateFlag(bool value) = 0;
  virtual Result CommitSettings() = 0;
  virtual Result GetDeviceLockPinCodeContinuousVerificationFailureCount(
    sf::Out<int> pOutValue) = 0;
  virtual Result SetDeviceLockPinCodeContinuousVerificationFailureCount(
    int value) = 0;
  virtual Result SetHttpAuthConfigs(
    const sf::InArray<system::HttpAuthConfig>& values) = 0;
};

}
