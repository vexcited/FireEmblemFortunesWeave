#pragma once

#include "nn/result.hpp"
#include "nn/settings/detail/settings_server.hpp"
#include "nn/settings/settings_types.hpp"

namespace nn::settings::detail {

Result CreateSettingsServerProxyForIpc(
  sf::SharedPointer<ISettingsServer>* pOutProxy);
Result CreateSystemSettingsServerProxyForIpc(
  sf::SharedPointer<ISystemSettingsServer>* pOutProxy);
Result CreateFactorySettingsServerProxyForIpc(
  sf::SharedPointer<IFactorySettingsServer>* pOutProxy);
Result CreateFirmwareDebugSettingsServerProxyForIpc(
  sf::SharedPointer<IFirmwareDebugSettingsServer>* pOutProxy);

void CopySettingsName(SettingsName*, const char*);
void CopySettingsItemKey(SettingsItemKey*, const char*);
Result GetDebugModeFlag(bool*);
Result GetSettingsItemValueSize(unsigned long*, const char*, const char*);
Result GetSettingsItemValue(
  unsigned long*, void*, unsigned long, const char*, const char*);
Result CreateSettingsItemKeyIterator(
  fwdbg::SettingsItemKeyIterator*, const char*);
Result DestroySettingsItemKeyIterator(fwdbg::SettingsItemKeyIterator*);
Result AdvanceSettingsItemKeyIterator(fwdbg::SettingsItemKeyIterator*);
Result GetSettingsItemKeySize(
  unsigned long*, const fwdbg::SettingsItemKeyIterator&);
Result GetSettingsItemKey(
  unsigned long*, void*, unsigned long, const fwdbg::SettingsItemKeyIterator&);
Result ReadSettings(unsigned long*, unsigned char*, unsigned long, int);
Result ResetSettings(int);
Result CommitSettings();
Result SetSettingsItemValue(
  const char*, const char*, const void*, unsigned long);
Result ResetSettingsItemValue(const char*, const char*);
Result GetAccountSettings(system::AccountSettings*);
Result SetAccountSettings(const system::AccountSettings&);
Result GetAccountIdentificationSettings(
  int*, system::AccountIdentificationSettings*, unsigned long);
Result SetAccountIdentificationSettings(
  const system::AccountIdentificationSettings*, unsigned long);
Result GetDefaultAccountIdentificationFlagSet(
  util::BitFlagSet<32, system::AccountIdentificationFlag>*);
Result GetAccountUserSettings(int*, system::AccountUserSettings*, int);
Result SetAccountUserSettings(const system::AccountUserSettings*, int);
Result GetDefaultAccountUserSettings(system::AccountUserSettings*);
Result GetNextDataUsageOptInGuideTimeStamp(
  time::PosixTime*, bool*, system::AccountUserSettings*, int,
  const account::Uid&);
Result SetNextDataUsageOptInGuideTimeStamp(
  const time::PosixTime&, bool, system::AccountUserSettings*, int,
  const account::Uid&);
Result DeleteSettingsPerAccount(const account::Uid&);
Result GetAnalogStickModuleTypeL(unsigned char*);
Result GetAnalogStickModelParameterL(factory::AnalogStickModelParameter*);
Result GetAnalogStickFactoryCalibrationL(
  factory::AnalogStickFactoryCalibration*);
Result GetAnalogStickModuleTypeR(unsigned char*);
Result GetAnalogStickModelParameterR(factory::AnalogStickModelParameter*);
Result GetAnalogStickFactoryCalibrationR(
  factory::AnalogStickFactoryCalibration*);
Result GetAppletParameterSet(system::AppletParameterSet*);
Result SetAppletParameterSet(const system::AppletParameterSet&);
Result GetAudioVolume(system::AudioVolume*, int);
Result SetAudioVolume(const system::AudioVolume&, int);
Result GetAudioOutputMode(int*, int);
Result SetAudioOutputMode(int, int);
Result GetSpeakerAutoMuteFlag(bool*);
Result SetSpeakerAutoMuteFlag(bool);
Result GetHeadphoneVolumeWarningCount(int*);
Result SetHeadphoneVolumeWarningCount(int);
Result GetForceMonauralOutputFlag(bool*);
Result SetForceMonauralOutputFlag(bool);
Result GetUsbAudioVolumeSettings(int*, system::UsbAudioVolumeSettings*, int);
Result SetUsbAudioVolumeSettings(const system::UsbAudioVolumeSettings*, int);
Result GetPrioritizedOutputAudioDeviceSettings(
  system::PrioritizedOutputAudioDeviceSettings*);
Result SetPrioritizedOutputAudioDeviceSettings(
  const system::PrioritizedOutputAudioDeviceSettings&);
Result GetPrioritizedInputAudioDeviceSettings(
  system::PrioritizedInputAudioDeviceSettings*);
Result SetPrioritizedInputAudioDeviceSettings(
  const system::PrioritizedInputAudioDeviceSettings&);
Result GetInputNoiseReductionForCommunicationFlag(bool*);
Result SetInputNoiseReductionForCommunicationFlag(const bool&);
Result GetBuiltInMicrophoneGain(float*);
Result SetBuiltInMicrophoneGain(float);
Result GetBuiltInMicrophoneJackGain(float*);
Result SetBuiltInMicrophoneJackGain(float);
Result GetUsbAudioInputDeviceGainSettings(
  int*, system::UsbAudioInputDeviceGainSettings*, int);
Result SetUsbAudioInputDeviceGainSettings(
  const system::UsbAudioInputDeviceGainSettings*, int);
Result GetOunceProControllerMicrophoneJackGain(float*);
Result SetOunceProControllerMicrophoneJackGain(float);
Result GetOunceProControllerAudioLowLatencyModeEnableFlag(bool*);
Result SetOunceProControllerAudioLowLatencyModeEnabled(bool);
Result GetBacklightSettings(system::BacklightSettings*);
Result SetBacklightSettings(const system::BacklightSettings&);
Result GetBacklightSettings(system::BacklightSettingsEx*);
Result SetBacklightSettings(const system::BacklightSettingsEx&);
Result GetBatteryCareModeEnableFlag(bool*);
Result SetBatteryCareModeEnableFlag(bool);
Result GetBatteryLotForFactory(BatteryLot*);
Result GetBatteryLotForSystem(BatteryLot*);
Result GetBluetoothBdAddressSet(factory::BdAddressSet*);
Result GetBluetoothEnableFlag(bool*);
Result SetBluetoothEnableFlag(bool);
Result GetRequiresRunRepairTimeReviser(bool*);
Result SetRequiresRunRepairTimeReviser(bool);
Result GetInRepairProcessEnableFlag(bool*);
Result SetInRepairProcessEnableFlag(bool);
Result GetSaveDataPurgedForRepairFlag(bool*);
Result SetSaveDataPurgedForRepairFlag(bool);
Result GetPrimaryAlbumStorage(int*);
Result SetPrimaryAlbumStorage(int);
Result GetChatTranscriptionSettings(
  int*, system::ChatTranscriptionSettings*, unsigned long);
Result SetChatTranscriptionSettings(
  const system::ChatTranscriptionSettings*, unsigned long);
Result GetChatTranscriptionSettings(
  int*, system::ChatTranscriptionSettingsEx*, unsigned long);
Result SetChatTranscriptionSettings(
  const system::ChatTranscriptionSettingsEx*, unsigned long);
Result AddChatTranscriptionSettings(
  system::ChatTranscriptionSettings*, int,
  const system::ChatTranscriptionSettings&);
Result AddChatTranscriptionSettings(
  system::ChatTranscriptionSettingsEx*, int,
  const system::ChatTranscriptionSettingsEx&);
Result RemoveChatTranscriptionSettings(
  system::ChatTranscriptionSettings*, int*, const account::Uid&);
Result RemoveChatTranscriptionSettings(
  system::ChatTranscriptionSettingsEx*, int*, const account::Uid&);
Result GetValidityChatTranscriptionSettings(
  system::ChatTranscriptionSettings*, int, const account::Uid&,
  util::BitFlagSet<32, system::ChatTranscriptionFlag>, bool*);
Result GetValidityChatTranscriptionSettings(
  system::ChatTranscriptionSettingsEx*, int, const account::Uid&,
  util::BitFlagSet<32, system::ChatTranscriptionFlag>, bool*);
Result SetValidityChatTranscriptionSettings(
  system::ChatTranscriptionSettings*, int, const account::Uid&,
  util::BitFlagSet<32, system::ChatTranscriptionFlag>, bool);
Result SetValidityChatTranscriptionSettings(
  system::ChatTranscriptionSettingsEx*, int, const account::Uid&,
  util::BitFlagSet<32, system::ChatTranscriptionFlag>, bool);
Result GetTextToSpeechVoiceTypeForChat(
  system::TextToSpeechVoiceTypeForChat*, system::ChatTranscriptionSettings*,
  int, const account::Uid&);
Result GetTextToSpeechVoiceTypeForChat(
  system::TextToSpeechVoiceTypeForChat*, system::ChatTranscriptionSettingsEx*,
  int, const account::Uid&);
Result SetTextToSpeechVoiceTypeForChat(
  system::ChatTranscriptionSettings*, int, const account::Uid&,
  system::TextToSpeechVoiceTypeForChat);
Result SetTextToSpeechVoiceTypeForChat(
  system::ChatTranscriptionSettingsEx*, int, const account::Uid&,
  system::TextToSpeechVoiceTypeForChat);
Result ExistsChatTranscriptionSettings(
  bool*, system::ChatTranscriptionSettings*, int, const account::Uid&);
Result ExistsChatTranscriptionSettings(
  bool*, system::ChatTranscriptionSettingsEx*, int, const account::Uid&);
Result RemoveChatTranscriptionSettingsExcept(
  system::ChatTranscriptionSettings*, int, account::Uid*, int, int*);
Result RemoveChatTranscriptionSettingsExcept(
  system::ChatTranscriptionSettingsEx*, int, account::Uid*, int, int*);
Result BindChatTranscriptionSettingsChangedEvent(
  os::SystemEventType*, os::EventClearMode);
Result GetTextToSpeechLanguageCode(
  LanguageCode*, system::ChatTranscriptionSettingsEx*, int,
  const account::Uid&);
Result SetTextToSpeechLanguageCode(
  system::ChatTranscriptionSettingsEx*, int, const account::Uid&,
  const LanguageCode&);
Result GetSpeechToTextLanguageCode(
  LanguageCode*, system::ChatTranscriptionSettingsEx*, int,
  const account::Uid&);
Result SetSpeechToTextLanguageCode(
  system::ChatTranscriptionSettingsEx*, int, const account::Uid&,
  const LanguageCode&);
Result BindChatTranscriptionSettingsChangedEventForSettingApplet(
  os::SystemEventType*, os::EventClearMode);
Result GetExternalSteadyClockSourceId(util::Uuid*);
Result SetExternalSteadyClockSourceId(const util::Uuid&);
Result GetShutdownRtcValue(long*);
Result SetShutdownRtcValue(long);
Result GetExternalSteadyClockInternalOffset(long*);
Result SetExternalSteadyClockInternalOffset(long);
Result GetUserSystemClockContext(time::SystemClockContext*);
Result SetUserSystemClockContext(const time::SystemClockContext&);
Result GetNetworkSystemClockContext(time::SystemClockContext*);
Result SetNetworkSystemClockContext(const time::SystemClockContext&);
Result IsUserSystemClockAutomaticCorrectionEnabled(bool*);
Result SetUserSystemClockAutomaticCorrectionEnabled(bool);
Result GetUserSystemClockAutomaticCorrectionUpdatedTime(
  time::SteadyClockTimePoint*);
Result SetUserSystemClockAutomaticCorrectionUpdatedTime(
  const time::SteadyClockTimePoint&);
Result GetManufacturingTimeStamp(time::SteadyClockTimePoint*);
Result SetManufacturingTimeStamp(const time::SteadyClockTimePoint&);
Result GetCalibrationTimeStampUtc(time::PosixTime*);
Result GetColorFilterType(int*);
Result SetColorFilterType(int);
Result IsColorInversionEnabled(bool*);
Result SetColorInversionEnabled(bool);
Result GetConfigurationId1(factory::ConfigurationId1*);
Result GetCpCertificateFileSize(unsigned long*);
Result GetCpCertificateFile(unsigned long*, unsigned char*, unsigned long);
Result GetRaCertificateFileSize(unsigned long*);
Result GetRaCertificateFile(unsigned long*, unsigned char*, unsigned long);
Result GetOta0CertificateFileSize(unsigned long*);
Result GetOta0CertificateFile(unsigned long*, unsigned char*, unsigned long);
Result GetOta1CertificateFileSize(unsigned long*);
Result GetOta1CertificateFile(unsigned long*, unsigned char*, unsigned long);
Result GetOta2CertificateFileSize(unsigned long*);
Result GetOta2CertificateFile(unsigned long*, unsigned char*, unsigned long);
Result GetJc0CertificateFileSize(unsigned long*);
Result GetJc0CertificateFile(unsigned long*, unsigned char*, unsigned long);
Result GetJc1CertificateFileSize(unsigned long*);
Result GetJc1CertificateFile(unsigned long*, unsigned char*, unsigned long);
Result GetDeviceId(factory::DeviceId*);
Result GetCpDeviceKeyFileSize(unsigned long*);
Result GetCpDeviceKeyFile(unsigned long*, unsigned char*, unsigned long);
Result GetRaOemEkFileSize(unsigned long*);
Result GetRaOemEkFile(unsigned long*, unsigned char*, unsigned long);
Result GetRaPkaKekFileSize(unsigned long*);
Result GetRaPkaKekFile(unsigned long*, unsigned char*, unsigned long);
Result GetOta0DeviceKeyFileSize(unsigned long*);
Result GetOta0DeviceKeyFile(unsigned long*, unsigned char*, unsigned long);
Result GetOta1DeviceKeyFileSize(unsigned long*);
Result GetOta1DeviceKeyFile(unsigned long*, unsigned char*, unsigned long);
Result GetOta2DeviceKeyFileSize(unsigned long*);
Result GetOta2DeviceKeyFile(unsigned long*, unsigned char*, unsigned long);
Result GetJc0PrivateKeyFileSize(unsigned long*);
Result GetJc0PrivateKeyFile(unsigned long*, unsigned char*, unsigned long);
Result GetJc0PkKekFileSize(unsigned long*);
Result GetJc0PkKekFile(unsigned long*, unsigned char*, unsigned long);
Result GetJc1PrivateKeyFileSize(unsigned long*);
Result GetJc1PrivateKeyFile(unsigned long*, unsigned char*, unsigned long);
Result GetJc1PkKekFileSize(unsigned long*);
Result GetJc1PkKekFile(unsigned long*, unsigned char*, unsigned long);
Result GetDeviceLockPinCodeLength(int*);
Result GetDeviceLockPinCode(char*, int*, int);
Result SetDeviceLockPinCode(const char*, int);
Result GetDeviceLockEnableFlag(bool*);
Result GetDeviceLockStartPenaltyTime(time::PosixTime*);
Result SetDeviceLockStartPenaltyTime(const time::PosixTime&);
Result GetDeviceLockErrorCount(int*);
Result SetDeviceLockErrorCount(int);
Result GetDeviceLockPinCodeLsbParity(int*, bool*, int);
Result VerifyDeviceLockPinCode(bool*, const char*, int);
Result GetDeviceLockVeificationForbiddenFlag(bool*);
Result GetDeviceLockPinCodeContinuousVerificationFailureCount(int*);
Result SetDeviceLockPinCodeContinuousVerificationFailureCount(int);
Result GetDeviceLockStartPenaltyTime(bool*, time::ClockSnapshot*);
Result SetDeviceLockStartPenaltyTime(const time::ClockSnapshot&);
Result GetPinCodeReregistrationGuideAccounts(
  int*, account::NetworkServiceAccountId*, unsigned long);
Result SetPinCodeReregistrationGuideAccounts(
  const account::NetworkServiceAccountId*, unsigned long);
Result GetDisplayModuleId(factory::DisplayModuleId*);
Result GetAutoUpdateEnableFlag(bool*);
Result SetAutoUpdateEnableFlag(bool);
Result GetDrmCertificateFileSize(unsigned long*);
Result GetDrmCertificateFile(unsigned long*, void*, unsigned long);
Result GetErrorReportSharePermission(int*);
Result SetErrorReportSharePermission(int);
Result GetEulaVersions(int*, system::EulaVersion*, int);
Result SetEulaVersions(const system::EulaVersion*, int);
Result BindFatalDirtyFlagEvent(os::SystemEventType*, os::EventClearMode);
Result GetFatalDirtyFlags(util::BitFlagSet<128, system::FatalDirtyFlag>*);
Result GetFirmwareVersionForDebug(oe::FirmwareVersionForDebug*);
Result GetFirmwareVersion(system::FirmwareVersion*);
Result GetRebootlessSystemUpdateVersion(system::RebootlessSystemUpdateVersion*);
Result GetForceConsoleModeEnableFlag(bool*);
Result SetForceConsoleModeEnableFlag(bool);
Result GetGcNxPkKekFileSize(unsigned long*);
Result GetGcNxPkKekFile(unsigned long*, unsigned char*, unsigned long);
Result GetGcNxKeyFileSize(unsigned long*);
Result GetGcNxKeyFile(unsigned long*, unsigned char*, unsigned long);
Result GetGcNxCertificateFileSize(unsigned long*);
Result GetGcNxCertificateFile(unsigned long*, unsigned char*, unsigned long);
Result GetGcUniqueImportKeyFileSize(unsigned long*);
Result GetGcUniqueImportKeyFile(unsigned long*, unsigned char*, unsigned long);
Result GetGcUniqueEncryptionKeyFileSize(unsigned long*);
Result GetGcUniqueEncryptionKeyFile(
  unsigned long*, unsigned char*, unsigned long);
Result GetGcCertificateFileSize(unsigned long*);
Result GetGcCertificateFile(unsigned long*, unsigned char*, unsigned long);
Result GetGcUniqueKeyAFileSize(unsigned long*);
Result GetGcUniqueKeyAFile(unsigned long*, unsigned char*, unsigned long);
Result GetGcUniqueKeyBFileSize(unsigned long*);
Result GetGcUniqueKeyBFile(unsigned long*, unsigned char*, unsigned long);
Result SetBluetoothStackFlag(bool);
Result SetHidDebugOcdUsbFlag(bool);
Result SetHidDebugRailFlag(bool);
Result GetUsbFullKeyEnableFlag(bool*);
Result SetUsbFullKeyEnableFlag(bool);
Result GetVibrationMasterVolume(float*);
Result SetVibrationMasterVolume(float);
Result GetHomeMenuScheme(system::HomeMenuScheme*);
Result GetHomeMenuSchemeModel(unsigned int*);
Result GetChineseTraditionalInputMethod(ChineseTraditionalInputMethod*);
Result SetChineseTraditionalInputMethod(ChineseTraditionalInputMethod);
Result GetKeyCodeMap(kpr::KeyCodeMap*);
Result GetKeyboardLayout(KeyboardLayout*);
Result SetKeyboardLayout(KeyboardLayout);
Result GetApplicationOwnKeyboardLayout(bool*, KeyboardLayout*);
Result SetApplicationOwnKeyboardLayout(KeyboardLayout);
Result GetLanguageCode(LanguageCode*);
Result SetLanguageCode(const LanguageCode&);
Result GetAvailableLanguageCodes(int*, LanguageCode*, int);
Result GetAvailableLanguageCodeCount(int*);
Result GetPanelCrcMode(system::CrcMode*);
Result SetPanelCrcMode(system::CrcMode);
Result GetLcdFlags(util::BitFlagSet<32, system::LcdFlag>*);
Result SetLcdFlags(util::BitFlagSet<32, system::LcdFlag>);
Result GetMiiAuthorId(util::Uuid*);
Result GetConsoleSixAxisSensorModuleType(unsigned char*);
Result GetConsoleSixAxisSensorMountType(unsigned char*);
Result GetConsoleSixAxisSensorFactoryCalibration(
  factory::ConsoleSixAxisSensorFactoryCalibration*);
Result GetConsoleSixAxisSensorFactoryAccelerationLog(
  factory::ConsoleSixAxisSensorFactoryAccelerationLog*);
Result GetMouseEnableFlag(bool*);
Result SetMouseEnableFlag(bool);
Result GetMousePointerSpeedScale(float*);
Result SetMousePointerSpeedScale(float);
Result GetNetworkSettings(int*, system::NetworkSettings*, int);
Result SetNetworkSettings(const system::NetworkSettings*, int);
Result GetNotificationSettings(system::NotificationSettings*);
Result SetNotificationSettings(const system::NotificationSettings&);
Result GetAccountNotificationSettings(
  int*, system::AccountNotificationSettings*, unsigned long);
Result SetAccountNotificationSettings(
  const system::AccountNotificationSettings*, unsigned long);
Result GetNfcEnableFlag(bool*);
Result SetNfcEnableFlag(bool);
Result GetPlatformRegion(int*);
Result SetPlatformRegion(int);
Result GetProductModel(int*);
Result ConvertToProductModelName(
  system::ProductModelName*, system::ProductModel);
Result ConvertToProductModel(
  system::ProductModel*, const system::ProductModelName&);
Result GetPtmBatteryLot(BatteryLot*);
Result SetPtmBatteryLot(const BatteryLot&);
Result GetPtmBatteryVersion(unsigned char*);
Result SetPtmBatteryVersion(unsigned char);
Result GetPtmFuelGaugeParameter(system::PtmFuelGaugeParameter*);
Result SetPtmFuelGaugeParameter(const system::PtmFuelGaugeParameter&);
Result GetPtmCycleCountReliability(system::PtmCycleCountReliability*);
Result SetPtmCycleCountReliability(system::PtmCycleCountReliability);
Result GetPtmQhClearCount(int*);
Result SetPtmQhClearCount(int);
Result GetPushNotificationActivityModeOnSleep(int*);
Result SetPushNotificationActivityModeOnSleep(int);
Result BindPushNotificationDirtyFlagEvent(
  os::SystemEventType*, os::EventClearMode);
Result GetPushNotificationDirtyFlags(
  util::BitFlagSet<64, system::PushNotificationDirtyFlag>*);
Result GetQuickShutdownForManufacturingEnableFlag(bool*);
Result SetQuickShutdownForManufacturingEnableFlag(bool);
Result GetRadioForbidden(bool*);
Result GetRegionCode(int*);
Result SetRegionCode(int);
Result GetRegionCodeForFactory(int*);
Result GetEncryptedSecretDeviceIdFileSize(unsigned long*);
Result GetEncryptedSecretDeviceIdFile(unsigned long*, void*, unsigned long);
Result GetEncryptedSecretDeviceIdEncryptionKeyFileSize(unsigned long*);
Result GetEncryptedSecretDeviceIdEncryptionKeyFile(
  unsigned long*, void*, unsigned long);
Result GetSerialNumber(factory::SerialNumber*);
Result GetSerialNumber(system::SerialNumber*);
Result GetServiceDiscoveryControlSettings(
  system::ServiceDiscoveryControlSettings*);
Result SetServiceDiscoveryControlSettings(
  const system::ServiceDiscoveryControlSettings&);
Result GetSleepSettings(system::SleepSettings*);
Result SetSleepSettings(const system::SleepSettings&);
Result GetSleepSettings(system::SleepSettingsEx*);
Result SetSleepSettings(const system::SleepSettingsEx&);
Result GetLockScreenFlag(bool*);
Result SetLockScreenFlag(bool);
Result GetColorSetId(int*);
Result SetColorSetId(int);
Result GetBatteryPercentageFlag(bool*);
Result SetBatteryPercentageFlag(bool);
Result GetInitialLaunchSettings(system::InitialLaunchSettings*);
Result SetInitialLaunchSettings(const system::InitialLaunchSettings&);
Result GetDeviceNickName(system::DeviceNickName*);
Result SetDeviceNickName(const system::DeviceNickName&);
Result GetAppletLaunchFlags(util::BitFlagSet<32, system::AppletLaunchFlag>*);
Result SetAppletLaunchFlags(
  const util::BitFlagSet<32, system::AppletLaunchFlag>&);
Result GetQuestFlagForApplication(bool*);
Result GetQuestFlagForSystemApplication(bool*);
Result SetQuestFlag(bool);
Result GetFieldTestingFlag(bool*);
Result SetFieldTestingFlag(bool);
Result GetWirelessCertificationHtmlFileSize(unsigned long*);
Result GetWirelessCertificationHtmlFile(
  unsigned long*, unsigned char*, unsigned long);
Result GetWirelessCertificationJpegFileSize(unsigned long*);
Result GetWirelessCertificationJpegFile(
  unsigned long*, unsigned char*, unsigned long);
Result GetHighContrastFlag(bool*);
Result SetHighContrastFlag(bool);
Result GetTextToSpeechFlag(bool*);
Result SetTextToSpeechFlag(bool);
Result GetTextMagnificationRatio(float*);
Result SetTextMagnificationRatio(float);
Result GetTitleIconKeepFlag(bool*);
Result SetTitleIconKeepFlag(bool);
Result GetBoldTextFlag(bool*);
Result SetBoldTextFlag(bool);
Result GetSpeechToTextFlag(bool*);
Result SetSpeechToTextFlag(bool);
Result GetTextToSpeechVoiceTypeForUi(int*);
Result SetTextToSpeechVoiceTypeForUi(int);
Result GetKeyRemapEnableFlagOnQuickSettings(bool*);
Result SetKeyRemapEnableFlagOnQuickSettings(bool);
Result GetTextToSpeechVoiceVolume(float*);
Result SetTextToSpeechVoiceVolume(float);
Result GetTextToSpeechVoiceSpeed(float*);
Result SetTextToSpeechVoiceSpeed(float);
Result GetAirPlaneModeRestoreFlagSet(
  util::BitFlagSet<32, system::AirPlaneModeRestoreFlag>*);
Result SetAirPlaneModeRestoreFlagSet(
  util::BitFlagSet<32, system::AirPlaneModeRestoreFlag>);
Result BindTelemetryDirtyFlagEvent(os::SystemEventType*, os::EventClearMode);
Result GetTelemetryDirtyFlags(
  util::BitFlagSet<128, system::TelemetryDirtyFlag>*);
Result GetDeviceTimeZoneLocationName(time::LocationName*);
Result SetDeviceTimeZoneLocationName(const time::LocationName&);
Result GetDeviceTimeZoneLocationUpdatedTime(time::SteadyClockTimePoint*);
Result SetDeviceTimeZoneLocationUpdatedTime(const time::SteadyClockTimePoint&);
Result GetToolModel(int*);
Result GetTvSettings(system::TvSettings*);
Result SetTvSettings(const system::TvSettings&);
Result GetEdid(system::Edid*);
Result SetEdid(const system::Edid&);
Result GetTvHdrSettings(int*, system::TvHdrSettings*, unsigned long);
Result SetTvHdrSettings(const system::TvHdrSettings*, unsigned long);
Result GetTvHdrSettingsEx(int*, system::TvHdrSettingsEx*, unsigned long);
Result SetTvHdrSettingsEx(const system::TvHdrSettingsEx*, unsigned long);
Result GetUsb30HostEnableFlag(bool*);
Result SetUsb30HostEnableFlag(bool);
Result GetUsb30DeviceEnableFlag(bool*);
Result SetUsb30DeviceEnableFlag(bool);
Result BindVphymDirtyFlagEvent(os::SystemEventType*, os::EventClearMode);
Result GetVphymDirtyFlags(util::BitFlagSet<128, system::VphymDirtyFlag>*);
Result GetWebInspectorFlag(bool*);
Result SetWebInspectorFlag(bool);
Result GetMemoryUsageRateFlag(bool*);
Result SetMemoryUsageRateFlag(bool);
Result GetAllowedSslHosts(int*, system::AllowedSslHost*, unsigned long);
Result SetAllowedSslHosts(const system::AllowedSslHost*, unsigned long);
Result GetHostFsMountPoint(system::HostFsMountPoint*);
Result SetHostFsMountPoint(const system::HostFsMountPoint&);
Result GetHttpAuthConfigs(int*, system::HttpAuthConfig*, unsigned long);
Result SetHttpAuthConfigs(const system::HttpAuthConfig*, unsigned long);
Result GetWirelessLanMacAddress(factory::MacAddress*);
Result GetWirelessLanRegulatoryDomain(factory::WlanRegulatoryDomain*);
Result GetWirelessLanPowerTable(factory::WlanPowerTable*);
Result GetWirelessLanEnableFlag(bool*);
Result SetWirelessLanEnableFlag(bool);
Result GetZoomFlag(bool*);
Result SetZoomFlag(bool);
Result GetDebugPadGenericPadMap(DebugPadGenericPadMapV2*);
Result SetDebugPadGenericPadMap(const DebugPadGenericPadMapV2&);
Result ResetDebugPadGenericPadMap();
Result GetDebugPadKeyboardMap(DebugPadKeyboardMapV2*);
Result SetDebugPadKeyboardMap(const DebugPadKeyboardMapV2&);
Result ResetDebugPadKeyboardMap();
Result GetFullKeyGenericPadMap(FullKeyGenericPadMap*, FullKeyIndex);
Result SetFullKeyGenericPadMap(const FullKeyGenericPadMap&, FullKeyIndex);
Result ResetFullKeyGenericPadMap(FullKeyIndex);
Result GetFullKeyKeyboardMap(FullKeyKeyboardMap*, FullKeyIndex);
Result SetFullKeyKeyboardMap(const FullKeyKeyboardMap&, FullKeyIndex);
Result ResetFullKeyKeyboardMap(FullKeyIndex);

}
