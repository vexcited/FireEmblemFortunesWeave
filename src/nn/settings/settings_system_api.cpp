#include "nn/diag/diag_abort.hpp"
#include "nn/settings/detail/settings_api.hpp"
#include "nn/settings/settings_api.hpp"

namespace nn::settings::system {

void GetAccountSettings(AccountSettings* pOutValue) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetAccountSettings(pOutValue));
}

void SetAccountSettings(const AccountSettings& value) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetAccountSettings(value));
}

void DeleteSettingsPerAccount(const account::Uid& uid) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::DeleteSettingsPerAccount(uid));
}

void GetAppletParameterSet(AppletParameterSet* pOutValue) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetAppletParameterSet(pOutValue));
}

void SetAppletParameterSet(const AppletParameterSet& value) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetAppletParameterSet(value));
}

void GetAudioVolume(
  AudioVolume* pOutValue, AudioVolumeTarget audioVolumeTarget) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetAudioVolume(
    pOutValue, static_cast<int>(audioVolumeTarget)));
}

void SetAudioVolume(
  const AudioVolume& value, AudioVolumeTarget audioVolumeTarget) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetAudioVolume(
    value, static_cast<int>(audioVolumeTarget)));
}

AudioOutputMode GetAudioOutputMode(
  AudioOutputModeTarget audioOutputModeTarget) {
  int value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetAudioOutputMode(
    &value, static_cast<int>(audioOutputModeTarget)));
  return static_cast<AudioOutputMode>(value);
}

void SetAudioOutputMode(
  AudioOutputMode audioOutputMode,
  AudioOutputModeTarget audioOutputModeTarget) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetAudioOutputMode(
    static_cast<int>(audioOutputMode),
    static_cast<int>(audioOutputModeTarget)));
}

bool IsSpeakerAutoMuteEnabled() {
  bool value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetSpeakerAutoMuteFlag(&value));
  return value;
}

void SetSpeakerAutoMuteEnabled(bool isEnabled) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetSpeakerAutoMuteFlag(isEnabled));
}

int GetHeadphoneVolumeWarningDisplayedEventCount() {
  int value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetHeadphoneVolumeWarningCount(
    &value));
  return value;
}

void SetHeadphoneVolumeWarningDisplayedEventCount(int value) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetHeadphoneVolumeWarningCount(value));
}

bool IsForceMonauralOutputModeEnabled() {
  bool value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetForceMonauralOutputFlag(&value));
  return value;
}

void SetForceMonauralOutputModeEnabled(bool isEnabled) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetForceMonauralOutputFlag(isEnabled));
}

int GetUsbAudioVolumeSettings(UsbAudioVolumeSettings* pOutValue, int count) {
  int value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetUsbAudioVolumeSettings(
    &value, pOutValue, count));
  return value;
}

void SetUsbAudioVolumeSettings(
  const UsbAudioVolumeSettings* pValues, int count) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetUsbAudioVolumeSettings(
    pValues, count));
}

void GetPrioritizedOutputAudioDeviceSettings(
  PrioritizedOutputAudioDeviceSettings* pOutValue) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    detail::GetPrioritizedOutputAudioDeviceSettings(pOutValue));
}

void SetPrioritizedOutputAudioDeviceSettings(
  const PrioritizedOutputAudioDeviceSettings& value) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    detail::SetPrioritizedOutputAudioDeviceSettings(value));
}

void GetPrioritizedInputAudioDeviceSettings(
  PrioritizedInputAudioDeviceSettings* pOutValue) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetPrioritizedInputAudioDeviceSettings(
    pOutValue));
}

void SetPrioritizedInputAudioDeviceSettings(
  const PrioritizedInputAudioDeviceSettings& value) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetPrioritizedInputAudioDeviceSettings(
    value));
}

bool IsInputNoiseReductionEnabledForCommunication() {
  bool value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    detail::GetInputNoiseReductionForCommunicationFlag(&value));
  return value;
}

float GetBuiltInMicrophoneGain() {
  float value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetBuiltInMicrophoneGain(&value));
  return value;
}

void SetBuiltInMicrophoneGain(float value) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetBuiltInMicrophoneGain(value));
}

float GetBuiltInMicrophoneJackGain() {
  float value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetBuiltInMicrophoneJackGain(&value));
  return value;
}

void SetBuiltInMicrophoneJackGain(float value) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetBuiltInMicrophoneJackGain(value));
}

int GetUsbAudioInputDeviceGainSettings(
  UsbAudioInputDeviceGainSettings* pOutValue, int count) {
  int value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetUsbAudioInputDeviceGainSettings(
    &value, pOutValue, count));
  return value;
}

void SetUsbAudioInputDeviceGainSettings(
  const UsbAudioInputDeviceGainSettings* pValues, int count) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetUsbAudioInputDeviceGainSettings(
    pValues, count));
}

float GetOunceProControllerMicrophoneJackGain() {
  float value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    detail::GetOunceProControllerMicrophoneJackGain(&value));
  return value;
}

void SetOunceProControllerMicrophoneJackGain(float value) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    detail::SetOunceProControllerMicrophoneJackGain(value));
}

bool IsOunceProControllerAudioLowLatencyModeEnabled() {
  bool value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    detail::GetOunceProControllerAudioLowLatencyModeEnableFlag(&value));
  return value;
}

void SetOunceProControllerAudioLowLatencyModeEnabled(bool isEnabled) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    detail::SetOunceProControllerAudioLowLatencyModeEnabled(isEnabled));
}

void GetBacklightSettings(BacklightSettings* pOutValue) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetBacklightSettings(pOutValue));
}

void SetBacklightSettings(const BacklightSettings& value) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetBacklightSettings(value));
}

void GetBacklightSettings(BacklightSettingsEx* pOutValue) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetBacklightSettings(pOutValue));
}

void SetBacklightSettings(const BacklightSettingsEx& value) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetBacklightSettings(value));
}

bool IsBatteryCareModeEnabled() {
  bool value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetBatteryCareModeEnableFlag(&value));
  return value;
}

void SetBatteryCareModeEnabled(bool isEnabled) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetBatteryCareModeEnableFlag(
    isEnabled));
}

void GetBatteryLot(BatteryLot* pOutValue) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetBatteryLotForSystem(pOutValue));
}

bool IsBluetoothEnabled() {
  bool value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetBluetoothEnableFlag(&value));
  return value;
}

void SetBluetoothEnabled(bool isEnabled) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetBluetoothEnableFlag(isEnabled));
}

bool RequiresRunRepairTimeReviser() {
  bool value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetRequiresRunRepairTimeReviser(
    &value));
  return value;
}

void SetRequiresRunRepairTimeReviser(bool isEnabled) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetRequiresRunRepairTimeReviser(
    isEnabled));
}

bool IsInRepairProcess() {
  bool value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetInRepairProcessEnableFlag(&value));
  return value;
}

void SetInRepairProcessEnabled(bool isEnabled) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetInRepairProcessEnableFlag(
    isEnabled));
}

bool IsSaveDataPurgedForRepair() {
  bool value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetSaveDataPurgedForRepairFlag(
    &value));
  return value;
}

void SetSaveDataPurgedForRepair(bool isEnabled) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetSaveDataPurgedForRepairFlag(
    isEnabled));
}

PrimaryAlbumStorage GetPrimaryAlbumStorage() {
  int value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetPrimaryAlbumStorage(&value));
  return static_cast<PrimaryAlbumStorage>(value);
}

void SetPrimaryAlbumStorage(PrimaryAlbumStorage primaryAlbumStorage) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetPrimaryAlbumStorage(
    static_cast<int>(primaryAlbumStorage)));
}

void BindChatTranscriptionSettingsChangedEvent(
  os::SystemEventType* pOutValue, os::EventClearMode eventClearMode) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    detail::BindChatTranscriptionSettingsChangedEvent(
      pOutValue, eventClearMode));
}

void BindChatTranscriptionSettingsChangedEventForSettingApplet(
  os::SystemEventType* pOutValue, os::EventClearMode eventClearMode) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    detail::BindChatTranscriptionSettingsChangedEventForSettingApplet(
      pOutValue, eventClearMode));
}

void GetExternalSteadyClockSourceId(util::Uuid* pOutValue) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetExternalSteadyClockSourceId(
    pOutValue));
}

void SetExternalSteadyClockSourceId(const util::Uuid& value) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetExternalSteadyClockSourceId(value));
}

long GetShutdownRtcValue() {
  long value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetShutdownRtcValue(&value));
  return value;
}

void SetShutdownRtcValue(long value) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetShutdownRtcValue(value));
}

long GetExternalSteadyClockInternalOffset() {
  long value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetExternalSteadyClockInternalOffset(
    &value));
  return value;
}

void SetExternalSteadyClockInternalOffset(long value) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetExternalSteadyClockInternalOffset(
    value));
}

void GetUserSystemClockContext(time::SystemClockContext* pOutValue) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetUserSystemClockContext(pOutValue));
}

void SetUserSystemClockContext(const time::SystemClockContext& value) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetUserSystemClockContext(value));
}

void GetNetworkSystemClockContext(time::SystemClockContext* pOutValue) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetNetworkSystemClockContext(
    pOutValue));
}

void SetNetworkSystemClockContext(const time::SystemClockContext& value) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetNetworkSystemClockContext(value));
}

bool IsUserSystemClockAutomaticCorrectionEnabled() {
  bool value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    detail::IsUserSystemClockAutomaticCorrectionEnabled(&value));
  return value;
}

void SetUserSystemClockAutomaticCorrectionEnabled(bool isEnabled) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    detail::SetUserSystemClockAutomaticCorrectionEnabled(isEnabled));
}

void GetUserSystemClockAutomaticCorrectionUpdatedTime(
  time::SteadyClockTimePoint* pOutValue) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    detail::GetUserSystemClockAutomaticCorrectionUpdatedTime(pOutValue));
}

void SetUserSystemClockAutomaticCorrectionUpdatedTime(
  const time::SteadyClockTimePoint& value) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    detail::SetUserSystemClockAutomaticCorrectionUpdatedTime(value));
}

void GetManufacturingTimeStamp(time::SteadyClockTimePoint* pOutValue) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetManufacturingTimeStamp(pOutValue));
}

void SetManufacturingTimeStamp(const time::SteadyClockTimePoint& value) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetManufacturingTimeStamp(value));
}

ColorFilterType GetColorFilterType() {
  int value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetColorFilterType(&value));
  return static_cast<ColorFilterType>(value);
}

void SetColorFilterType(ColorFilterType colorFilterType) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetColorFilterType(
    static_cast<int>(colorFilterType)));
}

bool IsColorInversionEnabled() {
  bool value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::IsColorInversionEnabled(&value));
  return value;
}

void SetColorInversionEnabled(bool isEnabled) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetColorInversionEnabled(isEnabled));
}

int GetDeviceLockPinCodeLength() {
  int value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetDeviceLockPinCodeLength(&value));
  return value;
}

void SetDeviceLockPinCode(const char* name, int count) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetDeviceLockPinCode(name, count));
}

bool IsDeviceLockEnabled() {
  bool value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetDeviceLockEnableFlag(&value));
  return value;
}

int GetDeviceLockErrorCount() {
  int value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetDeviceLockErrorCount(&value));
  return value;
}

void SetDeviceLockErrorCount(int value) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetDeviceLockErrorCount(value));
}

void GetDeviceLockStartPenaltyTime(time::PosixTime* pOutValue) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetDeviceLockStartPenaltyTime(
    pOutValue));
}

void SetDeviceLockStartPenaltyTime(const time::PosixTime& value) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetDeviceLockStartPenaltyTime(value));
}

int GetDeviceLockPinCodeParity(bool* pOutValue, int count) {
  int value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetDeviceLockPinCodeLsbParity(
    &value, pOutValue, count));
  return value;
}

bool VerifyDeviceLockPinCode(const char* name, int count) {
  bool value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::VerifyDeviceLockPinCode(
    &value, name, count));
  return value;
}

bool IsDeviceLockPinCodeVerificationForbidden() {
  bool value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetDeviceLockVeificationForbiddenFlag(
    &value));
  return value;
}

bool GetDeviceLockStartPenaltyTime(time::ClockSnapshot* pOutValue) {
  bool value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetDeviceLockStartPenaltyTime(
    &value, pOutValue));
  return value;
}

void SetDeviceLockStartPenaltyTime(const time::ClockSnapshot& value) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetDeviceLockStartPenaltyTime(value));
}

bool IsAutoUpdateEnabled() {
  bool value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetAutoUpdateEnableFlag(&value));
  return value;
}

void SetAutoUpdateEnabled(bool isEnabled) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetAutoUpdateEnableFlag(isEnabled));
}

ErrorReportSharePermission GetErrorReportSharePermission() {
  int value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetErrorReportSharePermission(&value));
  return static_cast<ErrorReportSharePermission>(value);
}

void SetErrorReportSharePermission(
  ErrorReportSharePermission errorReportSharePermission) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetErrorReportSharePermission(
    static_cast<int>(errorReportSharePermission)));
}

int GetEulaVersions(EulaVersion* pOutValue, int count) {
  int value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetEulaVersions(
    &value, pOutValue, count));
  return value;
}

void SetEulaVersions(const EulaVersion* pValues, int count) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetEulaVersions(pValues, count));
}

void BindFatalDirtyFlagEvent(
  os::SystemEventType* pOutValue, os::EventClearMode eventClearMode) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::BindFatalDirtyFlagEvent(
    pOutValue, eventClearMode));
}

void GetFatalDirtyFlags(util::BitFlagSet<128, FatalDirtyFlag>* pOutValue) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetFatalDirtyFlags(pOutValue));
}

void GetFirmwareVersion(FirmwareVersion* pOutValue) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetFirmwareVersion(pOutValue));
}

void GetRebootlessSystemUpdateVersion(
  RebootlessSystemUpdateVersion* pOutValue) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetRebootlessSystemUpdateVersion(
    pOutValue));
}

bool IsForceConsoleModeEnabled() {
  bool value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetForceConsoleModeEnableFlag(&value));
  return value;
}

void SetForceConsoleModeEnabled(bool isEnabled) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetForceConsoleModeEnableFlag(
    isEnabled));
}

void SetBluetoothStackEnabled(bool isEnabled) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetBluetoothStackFlag(isEnabled));
}

void SetHidDebugOcdUsbDisabled(bool isEnabled) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetHidDebugOcdUsbFlag(isEnabled));
}

void SetHidDebugRailEnabled(bool isEnabled) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetHidDebugRailFlag(isEnabled));
}

bool IsUsbFullKeyEnabled() {
  bool value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetUsbFullKeyEnableFlag(&value));
  return value;
}

void SetUsbFullKeyEnabled(bool isEnabled) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetUsbFullKeyEnableFlag(isEnabled));
}

float GetVibrationMasterVolume() {
  float value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetVibrationMasterVolume(&value));
  return value;
}

void SetVibrationMasterVolume(float value) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetVibrationMasterVolume(value));
}

void GetHomeMenuScheme(HomeMenuScheme* pOutValue) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetHomeMenuScheme(pOutValue));
}

ChineseTraditionalInputMethod GetChineseTraditionalInputMethod() {
  ChineseTraditionalInputMethod value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetChineseTraditionalInputMethod(
    &value));
  return value;
}

void SetChineseTraditionalInputMethod(
  ChineseTraditionalInputMethod chineseTraditionalInputMethod) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetChineseTraditionalInputMethod(
    chineseTraditionalInputMethod));
}

KeyboardLayout GetKeyboardLayout() {
  KeyboardLayout value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetKeyboardLayout(&value));
  return value;
}

void SetKeyboardLayout(KeyboardLayout keyboardLayout) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetKeyboardLayout(keyboardLayout));
}

bool GetApplicationOwnKeyboardLayout(KeyboardLayout* pOutValue) {
  bool value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetApplicationOwnKeyboardLayout(
    &value, pOutValue));
  return value;
}

void SetLanguageCode(const LanguageCode& value) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetLanguageCode(value));
}

void GetPanelCrcMode(CrcMode* pOutValue) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetPanelCrcMode(pOutValue));
}

void SetPanelCrcMode(CrcMode crcMode) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetPanelCrcMode(crcMode));
}

void GetLcdFlags(util::BitFlagSet<32, LcdFlag>* pOutValue) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetLcdFlags(pOutValue));
}

void GetMiiAuthorId(util::Uuid* pOutValue) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetMiiAuthorId(pOutValue));
}

bool IsMouseEnabled() {
  bool value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetMouseEnableFlag(&value));
  return value;
}

void SetMouseEnabled(bool isEnabled) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetMouseEnableFlag(isEnabled));
}

float GetMousePointerSpeedScale() {
  float value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetMousePointerSpeedScale(&value));
  return value;
}

void SetMousePointerSpeedScale(float value) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetMousePointerSpeedScale(value));
}

int GetNetworkSettings(NetworkSettings* pOutValue, int count) {
  int value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetNetworkSettings(
    &value, pOutValue, count));
  return value;
}

void SetNetworkSettings(const NetworkSettings* pValues, int count) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetNetworkSettings(pValues, count));
}

void GetNotificationSettings(NotificationSettings* pOutValue) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetNotificationSettings(pOutValue));
}

void SetNotificationSettings(const NotificationSettings& value) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetNotificationSettings(value));
}

bool IsNfcEnabled() {
  bool value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetNfcEnableFlag(&value));
  return value;
}

void SetNfcEnabled(bool isEnabled) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetNfcEnableFlag(isEnabled));
}

PlatformRegion GetPlatformRegion() {
  int value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetPlatformRegion(&value));
  return static_cast<PlatformRegion>(value);
}

void SetPlatformRegion(PlatformRegion platformRegion) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetPlatformRegion(
    static_cast<int>(platformRegion)));
}

ProductModel GetProductModel() {
  int value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetProductModel(&value));
  return static_cast<ProductModel>(value);
}

void ConvertToProductModelName(
  ProductModelName* pOutValue, ProductModel productModel) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::ConvertToProductModelName(
    pOutValue, productModel));
}

void ConvertToProductModel(
  ProductModel* pOutValue, const ProductModelName& value) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::ConvertToProductModel(
    pOutValue, value));
}

void GetPtmBatteryLot(BatteryLot* pOutValue) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetPtmBatteryLot(pOutValue));
}

void SetPtmBatteryLot(const BatteryLot& value) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetPtmBatteryLot(value));
}

void GetPtmBatteryVersion(unsigned char* buffer) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetPtmBatteryVersion(buffer));
}

void SetPtmBatteryVersion(unsigned char value) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetPtmBatteryVersion(value));
}

void GetPtmFuelGaugeParameter(PtmFuelGaugeParameter* pOutValue) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetPtmFuelGaugeParameter(pOutValue));
}

void SetPtmFuelGaugeParameter(const PtmFuelGaugeParameter& value) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetPtmFuelGaugeParameter(value));
}

void GetPtmCycleCountReliability(PtmCycleCountReliability* pOutValue) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetPtmCycleCountReliability(
    pOutValue));
}

void SetPtmCycleCountReliability(
  PtmCycleCountReliability ptmCycleCountReliability) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetPtmCycleCountReliability(
    ptmCycleCountReliability));
}

void GetPtmQhClearCount(int* pOutValue) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetPtmQhClearCount(pOutValue));
}

void SetPtmQhClearCount(int value) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetPtmQhClearCount(value));
}

int GetPushNotificationActivityModeOnSleep() {
  int value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetPushNotificationActivityModeOnSleep(
    &value));
  return value;
}

void SetPushNotificationActivityModeOnSleep(
  PushNotificationActivityMode pushNotificationActivityMode) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetPushNotificationActivityModeOnSleep(
    static_cast<int>(pushNotificationActivityMode)));
}

void BindPushNotificationDirtyFlagEvent(
  os::SystemEventType* pOutValue, os::EventClearMode eventClearMode) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::BindPushNotificationDirtyFlagEvent(
    pOutValue, eventClearMode));
}

void GetPushNotificationDirtyFlags(
  util::BitFlagSet<64, PushNotificationDirtyFlag>* pOutValue) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetPushNotificationDirtyFlags(
    pOutValue));
}

bool IsQuickShutdownForManufacturingEnabled() {
  bool value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    detail::GetQuickShutdownForManufacturingEnableFlag(&value));
  return value;
}

void SetQuickShutdownForManufacturingEnabled(bool isEnabled) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    detail::SetQuickShutdownForManufacturingEnableFlag(isEnabled));
}

void SetRegionCode(RegionCode regionCode) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetRegionCode(
    static_cast<int>(regionCode)));
}

void GetSerialNumber(SerialNumber* pOutValue) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetSerialNumber(pOutValue));
}

void GetServiceDiscoveryControlSettings(
  ServiceDiscoveryControlSettings* pOutValue) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetServiceDiscoveryControlSettings(
    pOutValue));
}

void SetServiceDiscoveryControlSettings(
  const ServiceDiscoveryControlSettings& value) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetServiceDiscoveryControlSettings(
    value));
}

void GetSleepSettings(SleepSettings* pOutValue) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetSleepSettings(pOutValue));
}

void SetSleepSettings(const SleepSettings& value) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetSleepSettings(value));
}

void GetSleepSettings(SleepSettingsEx* pOutValue) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetSleepSettings(pOutValue));
}

void SetSleepSettings(const SleepSettingsEx& value) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetSleepSettings(value));
}

bool GetLockScreenFlag() {
  bool value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetLockScreenFlag(&value));
  return value;
}

void SetLockScreenFlag(bool isEnabled) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetLockScreenFlag(isEnabled));
}

int GetColorSetId() {
  int value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetColorSetId(&value));
  return value;
}

void SetColorSetId(int value) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetColorSetId(value));
}

void GetInitialLaunchSettings(InitialLaunchSettings* pOutValue) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetInitialLaunchSettings(pOutValue));
}

void SetInitialLaunchSettings(const InitialLaunchSettings& value) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetInitialLaunchSettings(value));
}

void GetDeviceNickName(DeviceNickName* pOutValue) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetDeviceNickName(pOutValue));
}

void SetDeviceNickName(const DeviceNickName& value) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetDeviceNickName(value));
}

bool GetBatteryPercentageFlag() {
  bool value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetBatteryPercentageFlag(&value));
  return value;
}

void SetBatteryPercentageFlag(bool isEnabled) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetBatteryPercentageFlag(isEnabled));
}

void GetAppletLaunchFlags(util::BitFlagSet<32, AppletLaunchFlag>* pOutValue) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetAppletLaunchFlags(pOutValue));
}

void SetAppletLaunchFlags(const util::BitFlagSet<32, AppletLaunchFlag>& value) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetAppletLaunchFlags(value));
}

bool GetQuestFlag() {
  bool value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetQuestFlagForSystemApplication(
    &value));
  return value;
}

void SetQuestFlag(bool isEnabled) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetQuestFlag(isEnabled));
}

bool GetFieldTestingFlag() {
  bool value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetFieldTestingFlag(&value));
  return value;
}

void SetFieldTestingFlag(bool isEnabled) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetFieldTestingFlag(isEnabled));
}

unsigned long GetWirelessCertificationHtmlFileSize() {
  unsigned long value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetWirelessCertificationHtmlFileSize(
    &value));
  return value;
}

unsigned long GetWirelessCertificationHtmlFile(
  unsigned char* buffer, unsigned long size) {
  unsigned long value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetWirelessCertificationHtmlFile(
    &value, buffer, size));
  return value;
}

unsigned long GetWirelessCertificationJpegFileSize() {
  unsigned long value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetWirelessCertificationJpegFileSize(
    &value));
  return value;
}

unsigned long GetWirelessCertificationJpegFile(
  unsigned char* buffer, unsigned long size) {
  unsigned long value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetWirelessCertificationJpegFile(
    &value, buffer, size));
  return value;
}

bool GetHighContrastFlag() {
  bool value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetHighContrastFlag(&value));
  return value;
}

void SetHighContrastFlag(bool isEnabled) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetHighContrastFlag(isEnabled));
}

bool GetTextToSpeechFlag() {
  bool value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetTextToSpeechFlag(&value));
  return value;
}

void SetTextToSpeechFlag(bool isEnabled) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetTextToSpeechFlag(isEnabled));
}

float GetTextMagnificationRatio() {
  float value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetTextMagnificationRatio(&value));
  return value;
}

void SetTextMagnificationRatio(float value) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetTextMagnificationRatio(value));
}

bool GetTitleIconKeepFlag() {
  bool value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetTitleIconKeepFlag(&value));
  return value;
}

void SetTitleIconKeepFlag(bool isEnabled) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetTitleIconKeepFlag(isEnabled));
}

bool GetBoldTextFlag() {
  bool value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetBoldTextFlag(&value));
  return value;
}

void SetBoldTextFlag(bool isEnabled) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetBoldTextFlag(isEnabled));
}

bool GetSpeechToTextFlag() {
  bool value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetSpeechToTextFlag(&value));
  return value;
}

void SetSpeechToTextFlag(bool isEnabled) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetSpeechToTextFlag(isEnabled));
}

TextToSpeechVoiceTypeForUi GetTextToSpeechVoiceTypeForUi() {
  int value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetTextToSpeechVoiceTypeForUi(&value));
  return static_cast<TextToSpeechVoiceTypeForUi>(value);
}

void SetTextToSpeechVoiceTypeForUi(
  TextToSpeechVoiceTypeForUi textToSpeechVoiceTypeForUi) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetTextToSpeechVoiceTypeForUi(
    static_cast<int>(textToSpeechVoiceTypeForUi)));
}

bool IsKeyRemapEnabledOnQuickSettings() {
  bool value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetKeyRemapEnableFlagOnQuickSettings(
    &value));
  return value;
}

void SetKeyRemapEnabledOnQuickSettings(bool isEnabled) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetKeyRemapEnableFlagOnQuickSettings(
    isEnabled));
}

float GetTextToSpeechVoiceVolume() {
  float value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetTextToSpeechVoiceVolume(&value));
  return value;
}

void SetTextToSpeechVoiceVolume(float value) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetTextToSpeechVoiceVolume(value));
}

float GetTextToSpeechVoiceSpeed() {
  float value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetTextToSpeechVoiceSpeed(&value));
  return value;
}

void SetTextToSpeechVoiceSpeed(float value) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetTextToSpeechVoiceSpeed(value));
}

void GetAirPlaneModeRestoreFlagSet(
  util::BitFlagSet<32, AirPlaneModeRestoreFlag>* pOutValue) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetAirPlaneModeRestoreFlagSet(
    pOutValue));
}

void SetAirPlaneModeRestoreFlagSet(
  util::BitFlagSet<32, AirPlaneModeRestoreFlag> bitFlagSet) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetAirPlaneModeRestoreFlagSet(
    bitFlagSet));
}

void BindTelemetryDirtyFlagEvent(
  os::SystemEventType* pOutValue, os::EventClearMode eventClearMode) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::BindTelemetryDirtyFlagEvent(
    pOutValue, eventClearMode));
}

void GetTelemetryDirtyFlags(
  util::BitFlagSet<128, TelemetryDirtyFlag>* pOutValue) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetTelemetryDirtyFlags(pOutValue));
}

void GetDeviceTimeZoneLocationName(time::LocationName* pOutValue) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetDeviceTimeZoneLocationName(
    pOutValue));
}

void SetDeviceTimeZoneLocationName(const time::LocationName& value) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetDeviceTimeZoneLocationName(value));
}

void GetDeviceTimeZoneLocationUpdatedTime(
  time::SteadyClockTimePoint* pOutValue) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetDeviceTimeZoneLocationUpdatedTime(
    pOutValue));
}

void SetDeviceTimeZoneLocationUpdatedTime(
  const time::SteadyClockTimePoint& value) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetDeviceTimeZoneLocationUpdatedTime(
    value));
}

void GetTvSettings(TvSettings* pOutValue) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetTvSettings(pOutValue));
}

void SetTvSettings(const TvSettings& value) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetTvSettings(value));
}

void GetEdid(Edid* pOutValue) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetEdid(pOutValue));
}

void SetEdid(const Edid& value) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetEdid(value));
}

bool IsUsb30HostEnabled() {
  bool value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetUsb30HostEnableFlag(&value));
  return value;
}

void SetUsb30HostEnabled(bool isEnabled) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetUsb30HostEnableFlag(isEnabled));
}

bool IsUsb30DeviceEnabled() {
  bool value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetUsb30DeviceEnableFlag(&value));
  return value;
}

void SetUsb30DeviceEnabled(bool isEnabled) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetUsb30DeviceEnableFlag(isEnabled));
}

void BindVphymDirtyFlagEvent(
  os::SystemEventType* pOutValue, os::EventClearMode eventClearMode) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::BindVphymDirtyFlagEvent(
    pOutValue, eventClearMode));
}

void GetVphymDirtyFlags(util::BitFlagSet<128, VphymDirtyFlag>* pOutValue) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetVphymDirtyFlags(pOutValue));
}

bool UsesWebInspector() {
  bool value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetWebInspectorFlag(&value));
  return value;
}

bool ShowsMemoryUsageRate() {
  bool value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetMemoryUsageRateFlag(&value));
  return value;
}

void GetHostFsMountPoint(HostFsMountPoint* pOutValue) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetHostFsMountPoint(pOutValue));
}

bool IsWirelessLanEnabled() {
  bool value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetWirelessLanEnableFlag(&value));
  return value;
}

void SetWirelessLanEnabled(bool isEnabled) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetWirelessLanEnableFlag(isEnabled));
}

bool IsZoomEnabled() {
  bool value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetZoomFlag(&value));
  return value;
}

void SetZoomEnabled(bool isEnabled) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetZoomFlag(isEnabled));
}


int GetAccountIdentificationSettings(AccountIdentificationSettings* pOutValues,
  int count) {
  int value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetAccountIdentificationSettings(
    &value, pOutValues, count));
  return value;
}

void SetAccountIdentificationSettings(
  const AccountIdentificationSettings* pValues, int count) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetAccountIdentificationSettings(
    pValues, count));
}

int GetPinCodeReregistrationGuideAccounts(
  account::NetworkServiceAccountId* pOutValues, int count) {
  int value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetPinCodeReregistrationGuideAccounts(
    &value, pOutValues, count));
  return value;
}

void SetPinCodeReregistrationGuideAccounts(
  const account::NetworkServiceAccountId* pValues, int count) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetPinCodeReregistrationGuideAccounts(
    pValues, count));
}

int GetDeviceLockPinCode(char* buffer, int size) {
  int value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetDeviceLockPinCode(
    buffer, &value, size));
  return value;
}

void SetLcdFlags(const util::BitFlagSet<32, LcdFlag>& flags) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetLcdFlags(flags));
}

int GetAccountNotificationSettings(AccountNotificationSettings* pOutValues,
  int count) {
  int value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetAccountNotificationSettings(
    &value, pOutValues, count));
  return value;
}

void SetAccountNotificationSettings(
  const AccountNotificationSettings* pValues, int count) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetAccountNotificationSettings(
    pValues, count));
}

int GetTvHdrSettings(TvHdrSettings* pOutValues, int count) {
  int value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetTvHdrSettings(
    &value, pOutValues, count));
  return value;
}

void SetTvHdrSettings(const TvHdrSettings* pValues, int count) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetTvHdrSettings(pValues, count));
}

int GetTvHdrSettingsEx(TvHdrSettingsEx* pOutValues, int count) {
  int value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetTvHdrSettingsEx(
    &value, pOutValues, count));
  return value;
}

void SetTvHdrSettingsEx(const TvHdrSettingsEx* pValues, int count) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetTvHdrSettingsEx(pValues, count));
}

int GetAllowedSslHosts(AllowedSslHost* pOutValues, unsigned long count) {
  int value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetAllowedSslHosts(
    &value, pOutValues, count));
  return value;
}

int GetHttpAuthConfigs(HttpAuthConfig* pOutValues, unsigned long count) {
  int value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetHttpAuthConfigs(
    &value, pOutValues, count));
  return value;
}

void SetInputNoiseReductionEnabledForCommunication(bool isEnabled) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    detail::SetInputNoiseReductionForCommunicationFlag(isEnabled));
}

// The scheme model falls back to the default without calibration data.
Result GetHomeMenuSchemeModel(unsigned int* pOutValue) {
  const Result result = detail::GetHomeMenuSchemeModel(pOutValue);
  const uint32_t value = result.value & 0x3fffff;
  if (value == 0x48a69 || value == 0x48c69) {
    return Result{0x3e69};
  }
  NN_ABORT_UNLESS_RESULT_SUCCESS(result);
  return result;
}

void GetRegionCode(RegionCode* pOutValue) {
  NN_ABORT_UNLESS_NOT_NULL(pOutValue);
  int value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetRegionCode(&value));
  *pOutValue = static_cast<RegionCode>(value);
}

}
