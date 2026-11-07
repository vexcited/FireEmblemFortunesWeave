#pragma once

#include "nn/settings/settings_types.hpp"

namespace nn::settings {

void GetDebugPadGenericPadMap(DebugPadGenericPadMap* pOutValue);
void SetDebugPadGenericPadMap(const DebugPadGenericPadMap& value);
void GetDebugPadKeyboardMap(DebugPadKeyboardMap* pOutValue);
void SetDebugPadKeyboardMap(const DebugPadKeyboardMap& value);
void GetDebugPadGenericPadMap(DebugPadGenericPadMapV2* pOutValue);
void SetDebugPadGenericPadMap(const DebugPadGenericPadMapV2& value);
void ResetDebugPadGenericPadMap();
void GetDebugPadKeyboardMap(DebugPadKeyboardMapV2* pOutValue);
void SetDebugPadKeyboardMap(const DebugPadKeyboardMapV2& value);
void ResetDebugPadKeyboardMap();
void GetFullKeyGenericPadMap(
  FullKeyGenericPadMap* pOutValue, FullKeyIndex fullKeyIndex);
void SetFullKeyGenericPadMap(
  const FullKeyGenericPadMap& value, FullKeyIndex fullKeyIndex);
void ResetFullKeyGenericPadMap(FullKeyIndex fullKeyIndex);
void GetFullKeyKeyboardMap(
  FullKeyKeyboardMap* pOutValue, FullKeyIndex fullKeyIndex);
void SetFullKeyKeyboardMap(
  const FullKeyKeyboardMap& value, FullKeyIndex fullKeyIndex);
void ResetFullKeyKeyboardMap(FullKeyIndex fullKeyIndex);
void SetApplicationOwnKeyboardLayout(KeyboardLayout keyboardLayout);
void GetLanguageCode(LanguageCode* pOutValue);
int GetAvailableLanguageCodes(LanguageCode* pOutValue, int count);
int GetAvailableLanguageCodeCount();
bool GetTextToSpeechFlag();
system::TextToSpeechVoiceTypeForUi GetTextToSpeechVoiceTypeForUi();
float GetTextToSpeechVoiceVolume();
float GetTextToSpeechVoiceSpeed();
bool GetQuestFlag();

}

namespace nn::settings::factory {

void GetConfigurationId1(ConfigurationId1* pOutValue);
unsigned long GetCpCertificateFileSize();
unsigned long GetCpCertificateFile(unsigned char* buffer, unsigned long size);
unsigned long GetRaCertificateFileSize();
unsigned long GetRaCertificateFile(unsigned char* buffer, unsigned long size);
unsigned long GetOta0CertificateFileSize();
unsigned long GetOta0CertificateFile(unsigned char* buffer, unsigned long size);
unsigned long GetOta1CertificateFileSize();
unsigned long GetOta1CertificateFile(unsigned char* buffer, unsigned long size);
unsigned long GetOta2CertificateFileSize();
unsigned long GetOta2CertificateFile(unsigned char* buffer, unsigned long size);
unsigned long GetJc0CertificateFileSize();
unsigned long GetJc0CertificateFile(unsigned char* buffer, unsigned long size);
unsigned long GetJc1CertificateFileSize();
unsigned long GetJc1CertificateFile(unsigned char* buffer, unsigned long size);
unsigned long GetCpDeviceKeyFileSize();
unsigned long GetCpDeviceKeyFile(unsigned char* buffer, unsigned long size);
unsigned long GetRaOemEkFileSize();
unsigned long GetRaOemEkFile(unsigned char* buffer, unsigned long size);
unsigned long GetRaPkaKekFileSize();
unsigned long GetRaPkaKekFile(unsigned char* buffer, unsigned long size);
unsigned long GetOta0DeviceKeyFileSize();
unsigned long GetOta0DeviceKeyFile(unsigned char* buffer, unsigned long size);
unsigned long GetOta1DeviceKeyFileSize();
unsigned long GetOta1DeviceKeyFile(unsigned char* buffer, unsigned long size);
unsigned long GetOta2DeviceKeyFileSize();
unsigned long GetOta2DeviceKeyFile(unsigned char* buffer, unsigned long size);
unsigned long GetJc0PrivateKeyFileSize();
unsigned long GetJc0PrivateKeyFile(unsigned char* buffer, unsigned long size);
unsigned long GetJc0PkKekFileSize();
unsigned long GetJc0PkKekFile(unsigned char* buffer, unsigned long size);
unsigned long GetJc1PrivateKeyFileSize();
unsigned long GetJc1PrivateKeyFile(unsigned char* buffer, unsigned long size);
unsigned long GetJc1PkKekFileSize();
unsigned long GetJc1PkKekFile(unsigned char* buffer, unsigned long size);
unsigned long GetDrmCertificateFileSize();
unsigned long GetDrmCertificateFile(void* buffer, unsigned long size);
unsigned long GetGcNxPkKekFileSize();
unsigned long GetGcNxPkKekFile(unsigned char* buffer, unsigned long size);
unsigned long GetGcNxKeyFileSize();
unsigned long GetGcNxKeyFile(unsigned char* buffer, unsigned long size);
unsigned long GetGcNxCertificateFileSize();
unsigned long GetGcNxCertificateFile(unsigned char* buffer, unsigned long size);
unsigned long GetGcUniqueImportKeyFileSize();
unsigned long GetGcUniqueImportKeyFile(
  unsigned char* buffer, unsigned long size);
unsigned long GetGcUniqueEncryptionKeyFileSize();
unsigned long GetGcUniqueEncryptionKeyFile(
  unsigned char* buffer, unsigned long size);
unsigned long GetGcCertificateFileSize();
unsigned long GetGcCertificateFile(unsigned char* buffer, unsigned long size);
unsigned long GetGcUniqueKeyAFileSize();
unsigned long GetGcUniqueKeyAFile(unsigned char* buffer, unsigned long size);
unsigned long GetGcUniqueKeyBFileSize();
unsigned long GetGcUniqueKeyBFile(unsigned char* buffer, unsigned long size);
unsigned long GetEncryptedSecretDeviceIdFileSize();
unsigned long GetEncryptedSecretDeviceIdFile(void* buffer, unsigned long size);
unsigned long GetEncryptedSecretDeviceIdEncryptionKeyFileSize();
unsigned long GetEncryptedSecretDeviceIdEncryptionKeyFile(
  void* buffer, unsigned long size);

}

namespace nn::settings::fwdbg {

bool IsDebugModeEnabled();
unsigned long GetSettingsItemValueSize(const char* name, const char* key);
unsigned long GetSettingsItemValue(
  void* buffer, unsigned long size, const char* name, const char* key);
SettingsItemKeyIterator CreateSettingsItemKeyIterator(const char* name);
void DestroySettingsItemKeyIterator(SettingsItemKeyIterator* pOutValue);
unsigned long GetSettingsItemKeySize(
  const SettingsItemKeyIterator& settingsItemKeyIterator);
unsigned long GetSettingsItemKey(
  void* buffer, unsigned long size,
  const SettingsItemKeyIterator& settingsItemKeyIterator);
unsigned long ReadSettings(
  unsigned char* buffer, unsigned long size, SettingsTarget settingsTarget);
void ResetSettings(SettingsTarget settingsTarget);
void CommitSettings();
void SetSettingsItemValue(
  const char* name, const char* key, const void* buffer, unsigned long size);
void ResetSettingsItemValue(const char* name, const char* key);
int GetDeviceLockPinCodeContinuousVerificationFailureCount();
void SetDeviceLockPinCodeContinuousVerificationFailureCount(int value);
void SetWebInspectorFlag(bool isEnabled);
void SetMemoryUsageRateFlag(bool isEnabled);
void SetAllowedSslHosts(
  const system::AllowedSslHost* pValues, unsigned long size);
void SetHostFsMountPoint(const system::HostFsMountPoint& value);
void SetHttpAuthConfigs(
  const system::HttpAuthConfig* pValues, unsigned long size);

}

namespace nn::settings::system {

void GetAccountSettings(AccountSettings* pOutValue);
void SetAccountSettings(const AccountSettings& value);
void DeleteSettingsPerAccount(const account::Uid& uid);
void GetAppletParameterSet(AppletParameterSet* pOutValue);
void SetAppletParameterSet(const AppletParameterSet& value);
void GetAudioVolume(
  AudioVolume* pOutValue, AudioVolumeTarget audioVolumeTarget);
void SetAudioVolume(
  const AudioVolume& value, AudioVolumeTarget audioVolumeTarget);
AudioOutputMode GetAudioOutputMode(AudioOutputModeTarget audioOutputModeTarget);
void SetAudioOutputMode(
  AudioOutputMode audioOutputMode, AudioOutputModeTarget audioOutputModeTarget);
bool IsSpeakerAutoMuteEnabled();
void SetSpeakerAutoMuteEnabled(bool isEnabled);
int GetHeadphoneVolumeWarningDisplayedEventCount();
void SetHeadphoneVolumeWarningDisplayedEventCount(int value);
bool IsForceMonauralOutputModeEnabled();
void SetForceMonauralOutputModeEnabled(bool isEnabled);
int GetUsbAudioVolumeSettings(UsbAudioVolumeSettings* pOutValue, int count);
void SetUsbAudioVolumeSettings(
  const UsbAudioVolumeSettings* pValues, int count);
void GetPrioritizedOutputAudioDeviceSettings(
  PrioritizedOutputAudioDeviceSettings* pOutValue);
void SetPrioritizedOutputAudioDeviceSettings(
  const PrioritizedOutputAudioDeviceSettings& value);
void GetPrioritizedInputAudioDeviceSettings(
  PrioritizedInputAudioDeviceSettings* pOutValue);
void SetPrioritizedInputAudioDeviceSettings(
  const PrioritizedInputAudioDeviceSettings& value);
bool IsInputNoiseReductionEnabledForCommunication();
float GetBuiltInMicrophoneGain();
void SetBuiltInMicrophoneGain(float value);
float GetBuiltInMicrophoneJackGain();
void SetBuiltInMicrophoneJackGain(float value);
int GetUsbAudioInputDeviceGainSettings(
  UsbAudioInputDeviceGainSettings* pOutValue, int count);
void SetUsbAudioInputDeviceGainSettings(
  const UsbAudioInputDeviceGainSettings* pValues, int count);
float GetOunceProControllerMicrophoneJackGain();
void SetOunceProControllerMicrophoneJackGain(float value);
bool IsOunceProControllerAudioLowLatencyModeEnabled();
void SetOunceProControllerAudioLowLatencyModeEnabled(bool isEnabled);
void GetBacklightSettings(BacklightSettings* pOutValue);
void SetBacklightSettings(const BacklightSettings& value);
void GetBacklightSettings(BacklightSettingsEx* pOutValue);
void SetBacklightSettings(const BacklightSettingsEx& value);
bool IsBatteryCareModeEnabled();
void SetBatteryCareModeEnabled(bool isEnabled);
void GetBatteryLot(BatteryLot* pOutValue);
bool IsBluetoothEnabled();
void SetBluetoothEnabled(bool isEnabled);
bool RequiresRunRepairTimeReviser();
void SetRequiresRunRepairTimeReviser(bool isEnabled);
bool IsInRepairProcess();
void SetInRepairProcessEnabled(bool isEnabled);
bool IsSaveDataPurgedForRepair();
void SetSaveDataPurgedForRepair(bool isEnabled);
PrimaryAlbumStorage GetPrimaryAlbumStorage();
void SetPrimaryAlbumStorage(PrimaryAlbumStorage primaryAlbumStorage);
void BindChatTranscriptionSettingsChangedEvent(
  os::SystemEventType* pOutValue, os::EventClearMode eventClearMode);
void BindChatTranscriptionSettingsChangedEventForSettingApplet(
  os::SystemEventType* pOutValue, os::EventClearMode eventClearMode);
void GetExternalSteadyClockSourceId(util::Uuid* pOutValue);
void SetExternalSteadyClockSourceId(const util::Uuid& value);
long GetShutdownRtcValue();
void SetShutdownRtcValue(long value);
long GetExternalSteadyClockInternalOffset();
void SetExternalSteadyClockInternalOffset(long value);
void GetUserSystemClockContext(time::SystemClockContext* pOutValue);
void SetUserSystemClockContext(const time::SystemClockContext& value);
void GetNetworkSystemClockContext(time::SystemClockContext* pOutValue);
void SetNetworkSystemClockContext(const time::SystemClockContext& value);
bool IsUserSystemClockAutomaticCorrectionEnabled();
void SetUserSystemClockAutomaticCorrectionEnabled(bool isEnabled);
void GetUserSystemClockAutomaticCorrectionUpdatedTime(
  time::SteadyClockTimePoint* pOutValue);
void SetUserSystemClockAutomaticCorrectionUpdatedTime(
  const time::SteadyClockTimePoint& value);
void GetManufacturingTimeStamp(time::SteadyClockTimePoint* pOutValue);
void SetManufacturingTimeStamp(const time::SteadyClockTimePoint& value);
ColorFilterType GetColorFilterType();
void SetColorFilterType(ColorFilterType colorFilterType);
bool IsColorInversionEnabled();
void SetColorInversionEnabled(bool isEnabled);
int GetDeviceLockPinCodeLength();
void SetDeviceLockPinCode(const char* name, int count);
bool IsDeviceLockEnabled();
int GetDeviceLockErrorCount();
void SetDeviceLockErrorCount(int value);
void GetDeviceLockStartPenaltyTime(time::PosixTime* pOutValue);
void SetDeviceLockStartPenaltyTime(const time::PosixTime& value);
int GetDeviceLockPinCodeParity(bool* pOutValue, int count);
bool VerifyDeviceLockPinCode(const char* name, int count);
bool IsDeviceLockPinCodeVerificationForbidden();
bool GetDeviceLockStartPenaltyTime(time::ClockSnapshot* pOutValue);
void SetDeviceLockStartPenaltyTime(const time::ClockSnapshot& value);
bool IsAutoUpdateEnabled();
void SetAutoUpdateEnabled(bool isEnabled);
ErrorReportSharePermission GetErrorReportSharePermission();
void SetErrorReportSharePermission(
  ErrorReportSharePermission errorReportSharePermission);
int GetEulaVersions(EulaVersion* pOutValue, int count);
void SetEulaVersions(const EulaVersion* pValues, int count);
void BindFatalDirtyFlagEvent(
  os::SystemEventType* pOutValue, os::EventClearMode eventClearMode);
void GetFatalDirtyFlags(util::BitFlagSet<128, FatalDirtyFlag>* pOutValue);
void GetFirmwareVersion(FirmwareVersion* pOutValue);
void GetRebootlessSystemUpdateVersion(RebootlessSystemUpdateVersion* pOutValue);
bool IsForceConsoleModeEnabled();
void SetForceConsoleModeEnabled(bool isEnabled);
void SetBluetoothStackEnabled(bool isEnabled);
void SetHidDebugOcdUsbDisabled(bool isEnabled);
void SetHidDebugRailEnabled(bool isEnabled);
bool IsUsbFullKeyEnabled();
void SetUsbFullKeyEnabled(bool isEnabled);
float GetVibrationMasterVolume();
void SetVibrationMasterVolume(float value);
void GetHomeMenuScheme(HomeMenuScheme* pOutValue);
ChineseTraditionalInputMethod GetChineseTraditionalInputMethod();
void SetChineseTraditionalInputMethod(
  ChineseTraditionalInputMethod chineseTraditionalInputMethod);
KeyboardLayout GetKeyboardLayout();
void SetKeyboardLayout(KeyboardLayout keyboardLayout);
bool GetApplicationOwnKeyboardLayout(KeyboardLayout* pOutValue);
void SetLanguageCode(const LanguageCode& value);
void GetPanelCrcMode(CrcMode* pOutValue);
void SetPanelCrcMode(CrcMode crcMode);
void GetLcdFlags(util::BitFlagSet<32, LcdFlag>* pOutValue);
void GetMiiAuthorId(util::Uuid* pOutValue);
bool IsMouseEnabled();
void SetMouseEnabled(bool isEnabled);
float GetMousePointerSpeedScale();
void SetMousePointerSpeedScale(float value);
int GetNetworkSettings(NetworkSettings* pOutValue, int count);
void SetNetworkSettings(const NetworkSettings* pValues, int count);
void GetNotificationSettings(NotificationSettings* pOutValue);
void SetNotificationSettings(const NotificationSettings& value);
bool IsNfcEnabled();
void SetNfcEnabled(bool isEnabled);
PlatformRegion GetPlatformRegion();
void SetPlatformRegion(PlatformRegion platformRegion);
ProductModel GetProductModel();
void ConvertToProductModelName(
  ProductModelName* pOutValue, ProductModel productModel);
void ConvertToProductModel(
  ProductModel* pOutValue, const ProductModelName& value);
void GetPtmBatteryLot(BatteryLot* pOutValue);
void SetPtmBatteryLot(const BatteryLot& value);
void GetPtmBatteryVersion(unsigned char* buffer);
void SetPtmBatteryVersion(unsigned char value);
void GetPtmFuelGaugeParameter(PtmFuelGaugeParameter* pOutValue);
void SetPtmFuelGaugeParameter(const PtmFuelGaugeParameter& value);
void GetPtmCycleCountReliability(PtmCycleCountReliability* pOutValue);
void SetPtmCycleCountReliability(
  PtmCycleCountReliability ptmCycleCountReliability);
void GetPtmQhClearCount(int* pOutValue);
void SetPtmQhClearCount(int value);
int GetPushNotificationActivityModeOnSleep();
void SetPushNotificationActivityModeOnSleep(
  PushNotificationActivityMode pushNotificationActivityMode);
void BindPushNotificationDirtyFlagEvent(
  os::SystemEventType* pOutValue, os::EventClearMode eventClearMode);
void GetPushNotificationDirtyFlags(
  util::BitFlagSet<64, PushNotificationDirtyFlag>* pOutValue);
bool IsQuickShutdownForManufacturingEnabled();
void SetQuickShutdownForManufacturingEnabled(bool isEnabled);
void SetRegionCode(RegionCode regionCode);
void GetSerialNumber(SerialNumber* pOutValue);
void GetServiceDiscoveryControlSettings(
  ServiceDiscoveryControlSettings* pOutValue);
void SetServiceDiscoveryControlSettings(
  const ServiceDiscoveryControlSettings& value);
void GetSleepSettings(SleepSettings* pOutValue);
void SetSleepSettings(const SleepSettings& value);
void GetSleepSettings(SleepSettingsEx* pOutValue);
void SetSleepSettings(const SleepSettingsEx& value);
bool GetLockScreenFlag();
void SetLockScreenFlag(bool isEnabled);
int GetColorSetId();
void SetColorSetId(int value);
void GetInitialLaunchSettings(InitialLaunchSettings* pOutValue);
void SetInitialLaunchSettings(const InitialLaunchSettings& value);
void GetDeviceNickName(DeviceNickName* pOutValue);
void SetDeviceNickName(const DeviceNickName& value);
bool GetBatteryPercentageFlag();
void SetBatteryPercentageFlag(bool isEnabled);
void GetAppletLaunchFlags(util::BitFlagSet<32, AppletLaunchFlag>* pOutValue);
void SetAppletLaunchFlags(const util::BitFlagSet<32, AppletLaunchFlag>& value);
bool GetQuestFlag();
void SetQuestFlag(bool isEnabled);
bool GetFieldTestingFlag();
void SetFieldTestingFlag(bool isEnabled);
unsigned long GetWirelessCertificationHtmlFileSize();
unsigned long GetWirelessCertificationHtmlFile(
  unsigned char* buffer, unsigned long size);
unsigned long GetWirelessCertificationJpegFileSize();
unsigned long GetWirelessCertificationJpegFile(
  unsigned char* buffer, unsigned long size);
bool GetHighContrastFlag();
void SetHighContrastFlag(bool isEnabled);
bool GetTextToSpeechFlag();
void SetTextToSpeechFlag(bool isEnabled);
float GetTextMagnificationRatio();
void SetTextMagnificationRatio(float value);
bool GetTitleIconKeepFlag();
void SetTitleIconKeepFlag(bool isEnabled);
bool GetBoldTextFlag();
void SetBoldTextFlag(bool isEnabled);
bool GetSpeechToTextFlag();
void SetSpeechToTextFlag(bool isEnabled);
TextToSpeechVoiceTypeForUi GetTextToSpeechVoiceTypeForUi();
void SetTextToSpeechVoiceTypeForUi(
  TextToSpeechVoiceTypeForUi textToSpeechVoiceTypeForUi);
bool IsKeyRemapEnabledOnQuickSettings();
void SetKeyRemapEnabledOnQuickSettings(bool isEnabled);
float GetTextToSpeechVoiceVolume();
void SetTextToSpeechVoiceVolume(float value);
float GetTextToSpeechVoiceSpeed();
void SetTextToSpeechVoiceSpeed(float value);
void GetAirPlaneModeRestoreFlagSet(
  util::BitFlagSet<32, AirPlaneModeRestoreFlag>* pOutValue);
void SetAirPlaneModeRestoreFlagSet(
  util::BitFlagSet<32, AirPlaneModeRestoreFlag> bitFlagSet);
void BindTelemetryDirtyFlagEvent(
  os::SystemEventType* pOutValue, os::EventClearMode eventClearMode);
void GetTelemetryDirtyFlags(
  util::BitFlagSet<128, TelemetryDirtyFlag>* pOutValue);
void GetDeviceTimeZoneLocationName(time::LocationName* pOutValue);
void SetDeviceTimeZoneLocationName(const time::LocationName& value);
void GetDeviceTimeZoneLocationUpdatedTime(
  time::SteadyClockTimePoint* pOutValue);
void SetDeviceTimeZoneLocationUpdatedTime(
  const time::SteadyClockTimePoint& value);
void GetTvSettings(TvSettings* pOutValue);
void SetTvSettings(const TvSettings& value);
void GetEdid(Edid* pOutValue);
void SetEdid(const Edid& value);
bool IsUsb30HostEnabled();
void SetUsb30HostEnabled(bool isEnabled);
bool IsUsb30DeviceEnabled();
void SetUsb30DeviceEnabled(bool isEnabled);
void BindVphymDirtyFlagEvent(
  os::SystemEventType* pOutValue, os::EventClearMode eventClearMode);
void GetVphymDirtyFlags(util::BitFlagSet<128, VphymDirtyFlag>* pOutValue);
bool UsesWebInspector();
bool ShowsMemoryUsageRate();
void GetHostFsMountPoint(HostFsMountPoint* pOutValue);
bool IsWirelessLanEnabled();
void SetWirelessLanEnabled(bool isEnabled);
bool IsZoomEnabled();
void SetZoomEnabled(bool isEnabled);

}
