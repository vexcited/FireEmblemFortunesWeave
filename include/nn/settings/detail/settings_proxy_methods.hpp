#pragma once

#include "nn/sf/cmif/client/cmif_proxy_factory.hpp"

namespace nn::settings {

class IFactorySettingsServer;
class IFirmwareDebugSettingsServer;
class ISettingsItemKeyIterator;
class ISettingsServer;
class ISystemSettingsServer;

}

namespace nn::sf::cmif::client::detail {

template <typename Kind>
class CmifProxyMethods<settings::ISystemSettingsServer, Kind>
  : public CmifProxyMethodsBase<settings::ISystemSettingsServer, Kind> {
public:
  virtual Result SetLanguageCode(uint64_t argument0) {
    return this->template InvokeMethod<false, 0, void(uint64_t)>(argument0);
  }

  virtual Result SetNetworkSettings(const InArray<RawData<464, 8>>& argument0) {
    return this->template InvokeMethod<false, 1, void(
      const InArray<RawData<464, 8>>&)>(argument0);
  }

  virtual Result GetNetworkSettings(
    Out<uint32_t> argument0, const OutArray<RawData<464, 8>>& argument1) {
    return this->template InvokeMethod<false, 2, void(
      Out<uint32_t>, const OutArray<RawData<464, 8>>&)>(argument0, argument1);
  }

  virtual Result GetFirmwareVersion(Out<LargeData<26, 256, 8>> argument0) {
    return this->template InvokeMethod<false, 4, void(
      Out<LargeData<26, 256, 8>>)>(argument0);
  }

  virtual Result GetLockScreenFlag(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 7, void(Out<uint8_t>)>(argument0);
  }

  virtual Result SetLockScreenFlag(bool argument0) {
    return this->template InvokeMethod<false, 8, void(bool)>(argument0);
  }

  virtual Result GetBacklightSettings(Out<RawData<40, 8>> argument0) {
    return this->template InvokeMethod<false, 9, void(Out<RawData<40, 8>>)>(
      argument0);
  }

  virtual Result SetBacklightSettings(const RawData<40, 8>& argument0) {
    return this->template InvokeMethod<false, 10, void(const RawData<40, 8>&)>(
      argument0);
  }

  virtual Result GetExternalSteadyClockSourceId(Out<RawData<16, 1>> argument0) {
    return this->template InvokeMethod<false, 13, void(Out<RawData<16, 1>>)>(
      argument0);
  }

  virtual Result SetExternalSteadyClockSourceId(
    const RawData<16, 1>& argument0) {
    return this->template InvokeMethod<false, 14, void(const RawData<16, 1>&)>(
      argument0);
  }

  virtual Result GetUserSystemClockContext(Out<RawData<32, 8>> argument0) {
    return this->template InvokeMethod<false, 15, void(Out<RawData<32, 8>>)>(
      argument0);
  }

  virtual Result SetUserSystemClockContext(const RawData<32, 8>& argument0) {
    return this->template InvokeMethod<false, 16, void(const RawData<32, 8>&)>(
      argument0);
  }

  virtual Result GetAccountSettings(Out<uint32_t> argument0) {
    return this->template InvokeMethod<false, 17, void(Out<uint32_t>)>(
      argument0);
  }

  virtual Result SetAccountSettings(uint32_t argument0) {
    return this->template InvokeMethod<false, 18, void(uint32_t)>(argument0);
  }

  virtual Result GetAudioVolume(
    Out<RawData<8, 4>> argument0, uint32_t argument1) {
    return this->template InvokeMethod<false, 19, void(
      Out<RawData<8, 4>>, uint32_t)>(argument0, argument1);
  }

  virtual Result SetAudioVolume(RawData<8, 4> argument0, uint32_t argument1) {
    return this->template InvokeMethod<false, 20, void(
      RawData<8, 4>, uint32_t)>(argument0, argument1);
  }

  virtual Result GetEulaVersions(
    Out<uint32_t> argument0, const OutArray<RawData<48, 8>>& argument1) {
    return this->template InvokeMethod<false, 21, void(
      Out<uint32_t>, const OutArray<RawData<48, 8>>&)>(argument0, argument1);
  }

  virtual Result SetEulaVersions(const InArray<RawData<48, 8>>& argument0) {
    return this->template InvokeMethod<false, 22, void(
      const InArray<RawData<48, 8>>&)>(argument0);
  }

  virtual Result GetColorSetId(Out<uint32_t> argument0) {
    return this->template InvokeMethod<false, 23, void(Out<uint32_t>)>(
      argument0);
  }

  virtual Result SetColorSetId(uint32_t argument0) {
    return this->template InvokeMethod<false, 24, void(uint32_t)>(argument0);
  }

  virtual Result GetNotificationSettings(Out<RawData<24, 8>> argument0) {
    return this->template InvokeMethod<false, 29, void(Out<RawData<24, 8>>)>(
      argument0);
  }

  virtual Result SetNotificationSettings(const RawData<24, 8>& argument0) {
    return this->template InvokeMethod<false, 30, void(const RawData<24, 8>&)>(
      argument0);
  }

  virtual Result GetAccountNotificationSettings(
    Out<uint32_t> argument0, const OutArray<RawData<24, 8>>& argument1) {
    return this->template InvokeMethod<false, 31, void(
      Out<uint32_t>, const OutArray<RawData<24, 8>>&)>(argument0, argument1);
  }

  virtual Result SetAccountNotificationSettings(
    const InArray<RawData<24, 8>>& argument0) {
    return this->template InvokeMethod<false, 32, void(
      const InArray<RawData<24, 8>>&)>(argument0);
  }

  virtual Result GetVibrationMasterVolume(Out<uint32_t> argument0) {
    return this->template InvokeMethod<false, 35, void(Out<uint32_t>)>(
      argument0);
  }

  virtual Result SetVibrationMasterVolume(float argument0) {
    return this->template InvokeMethod<false, 36, void(float)>(argument0);
  }

  virtual Result GetSettingsItemValueSize(
    Out<uint64_t> argument0, const LargeData<25, 72, 8>& argument1,
    const LargeData<25, 72, 8>& argument2) {
    return this->template InvokeMethod<false, 37, void(
      Out<uint64_t>, const LargeData<25, 72, 8>&, const LargeData<25, 72, 8>&)>(
      argument0, argument1, argument2);
  }

  virtual Result GetSettingsItemValue(
    Out<uint64_t> argument0, const OutBuffer& argument1,
    const LargeData<25, 72, 8>& argument2,
    const LargeData<25, 72, 8>& argument3) {
    return this->template InvokeMethod<false, 38, void(
      Out<uint64_t>, const OutBuffer&, const LargeData<25, 72, 8>&,
      const LargeData<25, 72, 8>&)>(argument0, argument1, argument2, argument3);
  }

  virtual Result GetTvSettings(Out<RawData<32, 8>> argument0) {
    return this->template InvokeMethod<false, 39, void(Out<RawData<32, 8>>)>(
      argument0);
  }

  virtual Result SetTvSettings(const RawData<32, 8>& argument0) {
    return this->template InvokeMethod<false, 40, void(const RawData<32, 8>&)>(
      argument0);
  }

  virtual Result GetEdid(Out<LargeData<26, 512, 8>> argument0) {
    return this->template InvokeMethod<false, 41, void(
      Out<LargeData<26, 512, 8>>)>(argument0);
  }

  virtual Result SetEdid(const LargeData<25, 512, 8>& argument0) {
    return this->template InvokeMethod<false, 42, void(
      const LargeData<25, 512, 8>&)>(argument0);
  }

  virtual Result GetAudioOutputMode(
    Out<uint32_t> argument0, uint32_t argument1) {
    return this->template InvokeMethod<false, 43, void(
      Out<uint32_t>, uint32_t)>(argument0, argument1);
  }

  virtual Result SetAudioOutputMode(uint32_t argument0, uint32_t argument1) {
    return this->template InvokeMethod<false, 44, void(uint32_t, uint32_t)>(
      argument0, argument1);
  }

  virtual Result GetSpeakerAutoMuteFlag(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 45, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result SetSpeakerAutoMuteFlag(bool argument0) {
    return this->template InvokeMethod<false, 46, void(bool)>(argument0);
  }

  virtual Result GetQuestFlagForSystemApplication(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 47, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result SetQuestFlag(bool argument0) {
    return this->template InvokeMethod<false, 48, void(bool)>(argument0);
  }

  virtual Result GetDeviceTimeZoneLocationName(Out<RawData<36, 4>> argument0) {
    return this->template InvokeMethod<false, 53, void(Out<RawData<36, 4>>)>(
      argument0);
  }

  virtual Result SetDeviceTimeZoneLocationName(
    const RawData<36, 4>& argument0) {
    return this->template InvokeMethod<false, 54, void(const RawData<36, 4>&)>(
      argument0);
  }

  virtual Result SetRegionCode(uint32_t argument0) {
    return this->template InvokeMethod<false, 57, void(uint32_t)>(argument0);
  }

  virtual Result GetNetworkSystemClockContext(Out<RawData<32, 8>> argument0) {
    return this->template InvokeMethod<false, 58, void(Out<RawData<32, 8>>)>(
      argument0);
  }

  virtual Result SetNetworkSystemClockContext(const RawData<32, 8>& argument0) {
    return this->template InvokeMethod<false, 59, void(const RawData<32, 8>&)>(
      argument0);
  }

  virtual Result IsUserSystemClockAutomaticCorrectionEnabled(
    Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 60, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result SetUserSystemClockAutomaticCorrectionEnabled(bool argument0) {
    return this->template InvokeMethod<false, 61, void(bool)>(argument0);
  }

  virtual Result GetDebugModeFlag(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 62, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result GetPrimaryAlbumStorage(Out<uint32_t> argument0) {
    return this->template InvokeMethod<false, 63, void(Out<uint32_t>)>(
      argument0);
  }

  virtual Result SetPrimaryAlbumStorage(uint32_t argument0) {
    return this->template InvokeMethod<false, 64, void(uint32_t)>(argument0);
  }

  virtual Result GetBatteryLotForSystem(Out<RawData<26, 2>> argument0) {
    return this->template InvokeMethod<false, 67, void(Out<RawData<26, 2>>)>(
      argument0);
  }

  virtual Result GetSerialNumber(Out<RawData<24, 8>> argument0) {
    return this->template InvokeMethod<false, 68, void(Out<RawData<24, 8>>)>(
      argument0);
  }

  virtual Result GetNfcEnableFlag(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 69, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result SetNfcEnableFlag(bool argument0) {
    return this->template InvokeMethod<false, 70, void(bool)>(argument0);
  }

  virtual Result GetSleepSettings(Out<RawData<12, 4>> argument0) {
    return this->template InvokeMethod<false, 71, void(Out<RawData<12, 4>>)>(
      argument0);
  }

  virtual Result SetSleepSettings(const RawData<12, 4>& argument0) {
    return this->template InvokeMethod<false, 72, void(const RawData<12, 4>&)>(
      argument0);
  }

  virtual Result GetWirelessLanEnableFlag(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 73, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result SetWirelessLanEnableFlag(bool argument0) {
    return this->template InvokeMethod<false, 74, void(bool)>(argument0);
  }

  virtual Result Command77(Out<LargeData<22, 128, 8>> argument0) {
    return this->template InvokeMethod<false, 77, void(
      Out<LargeData<22, 128, 8>>)>(argument0);
  }

  virtual Result SetDeviceNickName(const LargeData<21, 128, 8>& argument0) {
    return this->template InvokeMethod<false, 78, void(
      const LargeData<21, 128, 8>&)>(argument0);
  }

  virtual Result GetProductModel(Out<uint32_t> argument0) {
    return this->template InvokeMethod<false, 79, void(Out<uint32_t>)>(
      argument0);
  }

  virtual Result BindTelemetryDirtyFlagEvent(Out<NativeHandle> argument0) {
    return this->template InvokeMethod<false, 82, void(Out<NativeHandle>)>(
      argument0);
  }

  virtual Result GetTelemetryDirtyFlags(Out<RawData<16, 1>> argument0) {
    return this->template InvokeMethod<false, 83, void(Out<RawData<16, 1>>)>(
      argument0);
  }

  virtual Result GetPtmBatteryLot(Out<RawData<26, 2>> argument0) {
    return this->template InvokeMethod<false, 84, void(Out<RawData<26, 2>>)>(
      argument0);
  }

  virtual Result SetPtmBatteryLot(const RawData<26, 2>& argument0) {
    return this->template InvokeMethod<false, 85, void(const RawData<26, 2>&)>(
      argument0);
  }

  virtual Result GetPtmFuelGaugeParameter(Out<RawData<24, 8>> argument0) {
    return this->template InvokeMethod<false, 86, void(Out<RawData<24, 8>>)>(
      argument0);
  }

  virtual Result SetPtmFuelGaugeParameter(const RawData<24, 8>& argument0) {
    return this->template InvokeMethod<false, 87, void(const RawData<24, 8>&)>(
      argument0);
  }

  virtual Result GetBluetoothEnableFlag(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 88, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result SetBluetoothEnableFlag(bool argument0) {
    return this->template InvokeMethod<false, 89, void(bool)>(argument0);
  }

  virtual Result GetMiiAuthorId(Out<RawData<16, 1>> argument0) {
    return this->template InvokeMethod<false, 90, void(Out<RawData<16, 1>>)>(
      argument0);
  }

  virtual Result SetShutdownRtcValue(uint64_t argument0) {
    return this->template InvokeMethod<false, 91, void(uint64_t)>(argument0);
  }

  virtual Result GetShutdownRtcValue(Out<uint64_t> argument0) {
    return this->template InvokeMethod<false, 92, void(Out<uint64_t>)>(
      argument0);
  }

  virtual Result BindFatalDirtyFlagEvent(Out<NativeHandle> argument0) {
    return this->template InvokeMethod<false, 93, void(Out<NativeHandle>)>(
      argument0);
  }

  virtual Result GetFatalDirtyFlags(Out<RawData<16, 1>> argument0) {
    return this->template InvokeMethod<false, 94, void(Out<RawData<16, 1>>)>(
      argument0);
  }

  virtual Result GetAutoUpdateEnableFlag(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 95, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result SetAutoUpdateEnableFlag(bool argument0) {
    return this->template InvokeMethod<false, 96, void(bool)>(argument0);
  }

  virtual Result GetBatteryPercentageFlag(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 99, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result SetBatteryPercentageFlag(bool argument0) {
    return this->template InvokeMethod<false, 100, void(bool)>(argument0);
  }

  virtual Result GetUsbFullKeyEnableFlag(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 103, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result SetUsbFullKeyEnableFlag(bool argument0) {
    return this->template InvokeMethod<false, 104, void(bool)>(argument0);
  }

  virtual Result SetExternalSteadyClockInternalOffset(uint64_t argument0) {
    return this->template InvokeMethod<false, 105, void(uint64_t)>(argument0);
  }

  virtual Result GetExternalSteadyClockInternalOffset(Out<uint64_t> argument0) {
    return this->template InvokeMethod<false, 106, void(Out<uint64_t>)>(
      argument0);
  }

  virtual Result GetBacklightSettingsEx(Out<RawData<44, 4>> argument0) {
    return this->template InvokeMethod<false, 107, void(Out<RawData<44, 4>>)>(
      argument0);
  }

  virtual Result SetBacklightSettingsEx(const RawData<44, 4>& argument0) {
    return this->template InvokeMethod<false, 108, void(const RawData<44, 4>&)>(
      argument0);
  }

  virtual Result GetHeadphoneVolumeWarningCount(Out<uint32_t> argument0) {
    return this->template InvokeMethod<false, 109, void(Out<uint32_t>)>(
      argument0);
  }

  virtual Result SetHeadphoneVolumeWarningCount(uint32_t argument0) {
    return this->template InvokeMethod<false, 110, void(uint32_t)>(argument0);
  }

  virtual Result GetInRepairProcessEnableFlag(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 115, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result SetInRepairProcessEnableFlag(bool argument0) {
    return this->template InvokeMethod<false, 116, void(bool)>(argument0);
  }

  virtual Result GetPushNotificationActivityModeOnSleep(
    Out<uint32_t> argument0) {
    return this->template InvokeMethod<false, 120, void(Out<uint32_t>)>(
      argument0);
  }

  virtual Result SetPushNotificationActivityModeOnSleep(uint32_t argument0) {
    return this->template InvokeMethod<false, 121, void(uint32_t)>(argument0);
  }

  virtual Result GetServiceDiscoveryControlSettings(Out<uint32_t> argument0) {
    return this->template InvokeMethod<false, 122, void(Out<uint32_t>)>(
      argument0);
  }

  virtual Result SetServiceDiscoveryControlSettings(uint32_t argument0) {
    return this->template InvokeMethod<false, 123, void(uint32_t)>(argument0);
  }

  virtual Result GetErrorReportSharePermission(Out<uint32_t> argument0) {
    return this->template InvokeMethod<false, 124, void(Out<uint32_t>)>(
      argument0);
  }

  virtual Result SetErrorReportSharePermission(uint32_t argument0) {
    return this->template InvokeMethod<false, 125, void(uint32_t)>(argument0);
  }

  virtual Result GetAppletLaunchFlags(Out<uint32_t> argument0) {
    return this->template InvokeMethod<false, 126, void(Out<uint32_t>)>(
      argument0);
  }

  virtual Result SetAppletLaunchFlags(uint32_t argument0) {
    return this->template InvokeMethod<false, 127, void(uint32_t)>(argument0);
  }

  virtual Result GetKeyboardLayout(Out<uint32_t> argument0) {
    return this->template InvokeMethod<false, 136, void(Out<uint32_t>)>(
      argument0);
  }

  virtual Result SetKeyboardLayout(uint32_t argument0) {
    return this->template InvokeMethod<false, 137, void(uint32_t)>(argument0);
  }

  virtual Result GetWebInspectorFlag(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 138, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result GetAllowedSslHosts(
    Out<uint32_t> argument0, const OutArray<RawData<256, 8>>& argument1) {
    return this->template InvokeMethod<false, 139, void(
      Out<uint32_t>, const OutArray<RawData<256, 8>>&)>(argument0, argument1);
  }

  virtual Result GetHostFsMountPoint(Out<LargeData<22, 256, 8>> argument0) {
    return this->template InvokeMethod<false, 140, void(
      Out<LargeData<22, 256, 8>>)>(argument0);
  }

  virtual Result GetRequiresRunRepairTimeReviser(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 141, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result SetRequiresRunRepairTimeReviser(bool argument0) {
    return this->template InvokeMethod<false, 142, void(bool)>(argument0);
  }

  virtual Result GetRebootlessSystemUpdateVersion(
    Out<RawData<64, 8>> argument0) {
    return this->template InvokeMethod<false, 149, void(Out<RawData<64, 8>>)>(
      argument0);
  }

  virtual Result GetDeviceTimeZoneLocationUpdatedTime(
    Out<RawData<24, 8>> argument0) {
    return this->template InvokeMethod<false, 150, void(Out<RawData<24, 8>>)>(
      argument0);
  }

  virtual Result SetDeviceTimeZoneLocationUpdatedTime(
    const RawData<24, 8>& argument0) {
    return this->template InvokeMethod<false, 151, void(const RawData<24, 8>&)>(
      argument0);
  }

  virtual Result GetUserSystemClockAutomaticCorrectionUpdatedTime(
    Out<RawData<24, 8>> argument0) {
    return this->template InvokeMethod<false, 152, void(Out<RawData<24, 8>>)>(
      argument0);
  }

  virtual Result SetUserSystemClockAutomaticCorrectionUpdatedTime(
    const RawData<24, 8>& argument0) {
    return this->template InvokeMethod<false, 153, void(const RawData<24, 8>&)>(
      argument0);
  }

  virtual Result GetPtmBatteryVersion(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 162, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result SetPtmBatteryVersion(uint8_t argument0) {
    return this->template InvokeMethod<false, 163, void(uint8_t)>(argument0);
  }

  virtual Result GetUsb30HostEnableFlag(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 164, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result SetUsb30HostEnableFlag(bool argument0) {
    return this->template InvokeMethod<false, 165, void(bool)>(argument0);
  }

  virtual Result GetUsb30DeviceEnableFlag(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 166, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result SetUsb30DeviceEnableFlag(bool argument0) {
    return this->template InvokeMethod<false, 167, void(bool)>(argument0);
  }

  virtual Result GetChineseTraditionalInputMethod(Out<uint32_t> argument0) {
    return this->template InvokeMethod<false, 170, void(Out<uint32_t>)>(
      argument0);
  }

  virtual Result SetChineseTraditionalInputMethod(uint32_t argument0) {
    return this->template InvokeMethod<false, 171, void(uint32_t)>(argument0);
  }

  virtual Result GetPtmCycleCountReliability(Out<uint32_t> argument0) {
    return this->template InvokeMethod<false, 172, void(Out<uint32_t>)>(
      argument0);
  }

  virtual Result SetPtmCycleCountReliability(uint32_t argument0) {
    return this->template InvokeMethod<false, 173, void(uint32_t)>(argument0);
  }

  virtual Result GetHomeMenuScheme(Out<RawData<20, 4>> argument0) {
    return this->template InvokeMethod<false, 174, void(Out<RawData<20, 4>>)>(
      argument0);
  }

  virtual Result GetZoomFlag(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 179, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result SetZoomFlag(bool argument0) {
    return this->template InvokeMethod<false, 180, void(bool)>(argument0);
  }

  virtual Result GetPlatformRegion(Out<uint32_t> argument0) {
    return this->template InvokeMethod<false, 183, void(Out<uint32_t>)>(
      argument0);
  }

  virtual Result SetPlatformRegion(uint32_t argument0) {
    return this->template InvokeMethod<false, 184, void(uint32_t)>(argument0);
  }

  virtual Result GetHomeMenuSchemeModel(Out<uint32_t> argument0) {
    return this->template InvokeMethod<false, 185, void(Out<uint32_t>)>(
      argument0);
  }

  virtual Result GetMemoryUsageRateFlag(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 186, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result GetFieldTestingFlag(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 201, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result SetFieldTestingFlag(bool argument0) {
    return this->template InvokeMethod<false, 202, void(bool)>(argument0);
  }

  virtual Result GetPanelCrcMode(Out<uint32_t> argument0) {
    return this->template InvokeMethod<false, 203, void(Out<uint32_t>)>(
      argument0);
  }

  virtual Result SetPanelCrcMode(uint32_t argument0) {
    return this->template InvokeMethod<false, 204, void(uint32_t)>(argument0);
  }

  virtual Result GetWirelessCertificationHtmlFileSize(Out<uint64_t> argument0) {
    return this->template InvokeMethod<false, 211, void(Out<uint64_t>)>(
      argument0);
  }

  virtual Result GetWirelessCertificationHtmlFile(
    Out<uint64_t> argument0, const OutBuffer& argument1) {
    return this->template InvokeMethod<false, 212, void(
      Out<uint64_t>, const OutBuffer&)>(argument0, argument1);
  }

  virtual Result GetWirelessCertificationJpegFileSize(Out<uint64_t> argument0) {
    return this->template InvokeMethod<false, 213, void(Out<uint64_t>)>(
      argument0);
  }

  virtual Result GetWirelessCertificationJpegFile(
    Out<uint64_t> argument0, const OutBuffer& argument1) {
    return this->template InvokeMethod<false, 214, void(
      Out<uint64_t>, const OutBuffer&)>(argument0, argument1);
  }

  virtual Result GetHighContrastFlag(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 215, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result SetHighContrastFlag(bool argument0) {
    return this->template InvokeMethod<false, 216, void(bool)>(argument0);
  }

  virtual Result Command217(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 217, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result SetTextToSpeechFlag(bool argument0) {
    return this->template InvokeMethod<false, 218, void(bool)>(argument0);
  }

  virtual Result GetTextMagnificationRatio(Out<uint32_t> argument0) {
    return this->template InvokeMethod<false, 219, void(Out<uint32_t>)>(
      argument0);
  }

  virtual Result SetTextMagnificationRatio(float argument0) {
    return this->template InvokeMethod<false, 220, void(float)>(argument0);
  }

  virtual Result GetForceMonauralOutputFlag(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 221, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result SetForceMonauralOutputFlag(bool argument0) {
    return this->template InvokeMethod<false, 222, void(bool)>(argument0);
  }

  virtual Result GetUsbAudioVolumeSettings(
    Out<uint32_t> argument0, const OutArray<RawData<6, 2>>& argument1) {
    return this->template InvokeMethod<false, 223, void(
      Out<uint32_t>, const OutArray<RawData<6, 2>>&)>(argument0, argument1);
  }

  virtual Result SetUsbAudioVolumeSettings(
    const InArray<RawData<6, 2>>& argument0) {
    return this->template InvokeMethod<false, 224, void(
      const InArray<RawData<6, 2>>&)>(argument0);
  }

  virtual Result GetTitleIconKeepFlag(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 225, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result SetTitleIconKeepFlag(bool argument0) {
    return this->template InvokeMethod<false, 226, void(bool)>(argument0);
  }

  virtual Result GetBoldTextFlag(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 227, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result SetBoldTextFlag(bool argument0) {
    return this->template InvokeMethod<false, 228, void(bool)>(argument0);
  }

  virtual Result GetSpeechToTextFlag(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 229, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result SetSpeechToTextFlag(bool argument0) {
    return this->template InvokeMethod<false, 230, void(bool)>(argument0);
  }

  virtual Result GetColorFilterType(Out<uint32_t> argument0) {
    return this->template InvokeMethod<false, 235, void(Out<uint32_t>)>(
      argument0);
  }

  virtual Result SetColorFilterType(uint32_t argument0) {
    return this->template InvokeMethod<false, 236, void(uint32_t)>(argument0);
  }

  virtual Result GetPrioritizedOutputAudioDeviceSettings(
    Out<RawData<16, 1>> argument0) {
    return this->template InvokeMethod<false, 237, void(Out<RawData<16, 1>>)>(
      argument0);
  }

  virtual Result SetPrioritizedOutputAudioDeviceSettings(
    const RawData<16, 1>& argument0) {
    return this->template InvokeMethod<false, 238, void(const RawData<16, 1>&)>(
      argument0);
  }

  virtual Result GetPrioritizedInputAudioDeviceSettings(
    Out<uint64_t> argument0) {
    return this->template InvokeMethod<false, 239, void(Out<uint64_t>)>(
      argument0);
  }

  virtual Result SetPrioritizedInputAudioDeviceSettings(uint64_t argument0) {
    return this->template InvokeMethod<false, 240, void(uint64_t)>(argument0);
  }

  virtual Result Command241(Out<uint32_t> argument0) {
    return this->template InvokeMethod<false, 241, void(Out<uint32_t>)>(
      argument0);
  }

  virtual Result SetTextToSpeechVoiceTypeForUi(uint32_t argument0) {
    return this->template InvokeMethod<false, 242, void(uint32_t)>(argument0);
  }

  virtual Result GetLcdFlags(Out<uint32_t> argument0) {
    return this->template InvokeMethod<false, 243, void(Out<uint32_t>)>(
      argument0);
  }

  virtual Result SetLcdFlags(uint32_t argument0) {
    return this->template InvokeMethod<false, 244, void(uint32_t)>(argument0);
  }

  virtual Result GetTvHdrSettings(
    Out<uint32_t> argument0, const OutArray<RawData<24, 8>>& argument1) {
    return this->template InvokeMethod<false, 245, void(
      Out<uint32_t>, const OutArray<RawData<24, 8>>&)>(argument0, argument1);
  }

  virtual Result SetTvHdrSettings(const InArray<RawData<24, 8>>& argument0) {
    return this->template InvokeMethod<false, 246, void(
      const InArray<RawData<24, 8>>&)>(argument0);
  }

  virtual Result IsColorInversionEnabled(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 247, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result SetColorInversionEnabled(bool argument0) {
    return this->template InvokeMethod<false, 248, void(bool)>(argument0);
  }

  virtual Result GetKeyRemapEnableFlagOnQuickSettings(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 249, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result SetKeyRemapEnableFlagOnQuickSettings(bool argument0) {
    return this->template InvokeMethod<false, 250, void(bool)>(argument0);
  }

  virtual Result GetAccountIdentificationSettings(
    Out<uint32_t> argument0, const OutArray<RawData<24, 8>>& argument1) {
    return this->template InvokeMethod<false, 251, void(
      Out<uint32_t>, const OutArray<RawData<24, 8>>&)>(argument0, argument1);
  }

  virtual Result SetAccountIdentificationSettings(
    const InArray<RawData<24, 8>>& argument0) {
    return this->template InvokeMethod<false, 252, void(
      const InArray<RawData<24, 8>>&)>(argument0);
  }

  virtual Result GetDeviceLockPinCodeLength(Out<uint32_t> argument0) {
    return this->template InvokeMethod<false, 253, void(Out<uint32_t>)>(
      argument0);
  }

  virtual Result GetDeviceLockPinCode(
    Out<uint32_t> argument0, const OutBuffer& argument1) {
    return this->template InvokeMethod<false, 254, void(
      Out<uint32_t>, const OutBuffer&)>(argument0, argument1);
  }

  virtual Result SetDeviceLockPinCode(const InBuffer& argument0) {
    return this->template InvokeMethod<false, 255, void(const InBuffer&)>(
      argument0);
  }

  virtual Result GetDeviceLockEnableFlag(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 256, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result GetDeviceLockStartPenaltyTime(Out<uint64_t> argument0) {
    return this->template InvokeMethod<false, 257, void(Out<uint64_t>)>(
      argument0);
  }

  virtual Result SetDeviceLockStartPenaltyTime(uint64_t argument0) {
    return this->template InvokeMethod<false, 258, void(uint64_t)>(argument0);
  }

  virtual Result GetDeviceLockErrorCount(Out<uint32_t> argument0) {
    return this->template InvokeMethod<false, 259, void(Out<uint32_t>)>(
      argument0);
  }

  virtual Result SetDeviceLockErrorCount(uint32_t argument0) {
    return this->template InvokeMethod<false, 260, void(uint32_t)>(argument0);
  }

  virtual Result GetBatteryCareModeEnableFlag(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 261, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result SetBatteryCareModeEnableFlag(bool argument0) {
    return this->template InvokeMethod<false, 262, void(bool)>(argument0);
  }

  virtual Result BindVphymDirtyFlagEvent(Out<NativeHandle> argument0) {
    return this->template InvokeMethod<false, 263, void(Out<NativeHandle>)>(
      argument0);
  }

  virtual Result GetVphymDirtyFlags(Out<RawData<16, 1>> argument0) {
    return this->template InvokeMethod<false, 264, void(Out<RawData<16, 1>>)>(
      argument0);
  }

  virtual Result GetInitialLaunchSettings(Out<RawData<48, 8>> argument0) {
    return this->template InvokeMethod<false, 265, void(Out<RawData<48, 8>>)>(
      argument0);
  }

  virtual Result SetInitialLaunchSettings(const RawData<48, 8>& argument0) {
    return this->template InvokeMethod<false, 266, void(const RawData<48, 8>&)>(
      argument0);
  }

  virtual Result GetManufacturingTimeStamp(Out<RawData<24, 8>> argument0) {
    return this->template InvokeMethod<false, 267, void(Out<RawData<24, 8>>)>(
      argument0);
  }

  virtual Result SetManufacturingTimeStamp(const RawData<24, 8>& argument0) {
    return this->template InvokeMethod<false, 268, void(const RawData<24, 8>&)>(
      argument0);
  }

  virtual Result GetInputNoiseReductionForCommunicationFlag(
    Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 269, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result SetInputNoiseReductionForCommunicationFlag(bool argument0) {
    return this->template InvokeMethod<false, 270, void(bool)>(argument0);
  }

  virtual Result GetChatTranscriptionSettings(
    Out<uint32_t> argument0, const OutArray<RawData<32, 8>>& argument1) {
    return this->template InvokeMethod<false, 271, void(
      Out<uint32_t>, const OutArray<RawData<32, 8>>&)>(argument0, argument1);
  }

  virtual Result SetChatTranscriptionSettings(
    const InArray<RawData<32, 8>>& argument0) {
    return this->template InvokeMethod<false, 272, void(
      const InArray<RawData<32, 8>>&)>(argument0);
  }

  virtual Result GetBuiltInMicrophoneGain(Out<uint32_t> argument0) {
    return this->template InvokeMethod<false, 273, void(Out<uint32_t>)>(
      argument0);
  }

  virtual Result SetBuiltInMicrophoneGain(float argument0) {
    return this->template InvokeMethod<false, 274, void(float)>(argument0);
  }

  virtual Result GetBuiltInMicrophoneJackGain(Out<uint32_t> argument0) {
    return this->template InvokeMethod<false, 275, void(Out<uint32_t>)>(
      argument0);
  }

  virtual Result SetBuiltInMicrophoneJackGain(float argument0) {
    return this->template InvokeMethod<false, 276, void(float)>(argument0);
  }

  virtual Result GetUsbAudioInputDeviceGainSettings(
    Out<uint32_t> argument0, const OutArray<uint64_t>& argument1) {
    return this->template InvokeMethod<false, 277, void(
      Out<uint32_t>, const OutArray<uint64_t>&)>(argument0, argument1);
  }

  virtual Result SetUsbAudioInputDeviceGainSettings(
    const InArray<uint64_t>& argument0) {
    return this->template InvokeMethod<false, 278, void(
      const InArray<uint64_t>&)>(argument0);
  }

  virtual Result SetBluetoothStackFlag(bool argument0) {
    return this->template InvokeMethod<false, 279, void(bool)>(argument0);
  }

  virtual Result SetHidDebugOcdUsbFlag(bool argument0) {
    return this->template InvokeMethod<false, 280, void(bool)>(argument0);
  }

  virtual Result SetHidDebugRailFlag(bool argument0) {
    return this->template InvokeMethod<false, 281, void(bool)>(argument0);
  }

  virtual Result ConvertToProductModel(
    Out<uint32_t> argument0, uint64_t argument1) {
    return this->template InvokeMethod<false, 282, void(
      Out<uint32_t>, uint64_t)>(argument0, argument1);
  }

  virtual Result ConvertToProductModelName(
    Out<RawData<8, 4>> argument0, uint32_t argument1) {
    return this->template InvokeMethod<false, 283, void(
      Out<RawData<8, 4>>, uint32_t)>(argument0, argument1);
  }

  virtual Result GetSaveDataPurgedForRepairFlag(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 284, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result SetSaveDataPurgedForRepairFlag(bool argument0) {
    return this->template InvokeMethod<false, 285, void(bool)>(argument0);
  }

  virtual Result GetAppletParameterSet(Out<RawData<16, 1>> argument0) {
    return this->template InvokeMethod<false, 286, void(Out<RawData<16, 1>>)>(
      argument0);
  }

  virtual Result SetAppletParameterSet(const RawData<16, 1>& argument0) {
    return this->template InvokeMethod<false, 287, void(const RawData<16, 1>&)>(
      argument0);
  }

  virtual Result BindChatTranscriptionSettingsChangedEvent(
    Out<NativeHandle> argument0) {
    return this->template InvokeMethod<false, 288, void(Out<NativeHandle>)>(
      argument0);
  }

  virtual Result GetDefaultAccountIdentificationFlagSet(
    Out<uint32_t> argument0) {
    return this->template InvokeMethod<false, 289, void(Out<uint32_t>)>(
      argument0);
  }

  virtual Result GetMouseEnableFlag(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 290, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result SetMouseEnableFlag(bool argument0) {
    return this->template InvokeMethod<false, 291, void(bool)>(argument0);
  }

  virtual Result Command292(Out<uint32_t> argument0) {
    return this->template InvokeMethod<false, 292, void(Out<uint32_t>)>(
      argument0);
  }

  virtual Result SetTextToSpeechVoiceVolume(float argument0) {
    return this->template InvokeMethod<false, 293, void(float)>(argument0);
  }

  virtual Result Command294(Out<uint32_t> argument0) {
    return this->template InvokeMethod<false, 294, void(Out<uint32_t>)>(
      argument0);
  }

  virtual Result SetTextToSpeechVoiceSpeed(float argument0) {
    return this->template InvokeMethod<false, 295, void(float)>(argument0);
  }

  virtual Result GetSleepSettingsEx(Out<RawData<24, 8>> argument0) {
    return this->template InvokeMethod<false, 296, void(Out<RawData<24, 8>>)>(
      argument0);
  }

  virtual Result SetSleepSettingsEx(const RawData<24, 8>& argument0) {
    return this->template InvokeMethod<false, 297, void(const RawData<24, 8>&)>(
      argument0);
  }

  virtual Result GetMousePointerSpeedScale(Out<uint32_t> argument0) {
    return this->template InvokeMethod<false, 298, void(Out<uint32_t>)>(
      argument0);
  }

  virtual Result SetMousePointerSpeedScale(float argument0) {
    return this->template InvokeMethod<false, 299, void(float)>(argument0);
  }

  virtual Result BindPushNotificationDirtyFlagEvent(
    Out<NativeHandle> argument0) {
    return this->template InvokeMethod<false, 300, void(Out<NativeHandle>)>(
      argument0);
  }

  virtual Result GetPushNotificationDirtyFlags(Out<uint64_t> argument0) {
    return this->template InvokeMethod<false, 301, void(Out<uint64_t>)>(
      argument0);
  }

  virtual Result GetTvHdrSettingsEx(
    Out<uint32_t> argument0, const OutArray<RawData<56, 8>>& argument1) {
    return this->template InvokeMethod<false, 302, void(
      Out<uint32_t>, const OutArray<RawData<56, 8>>&)>(argument0, argument1);
  }

  virtual Result SetTvHdrSettingsEx(const InArray<RawData<56, 8>>& argument0) {
    return this->template InvokeMethod<false, 303, void(
      const InArray<RawData<56, 8>>&)>(argument0);
  }

  virtual Result GetOunceProControllerMicrophoneJackGain(
    Out<uint32_t> argument0) {
    return this->template InvokeMethod<false, 304, void(Out<uint32_t>)>(
      argument0);
  }

  virtual Result SetOunceProControllerMicrophoneJackGain(float argument0) {
    return this->template InvokeMethod<false, 305, void(float)>(argument0);
  }

  virtual Result GetPinCodeReregistrationGuideAccounts(
    Out<uint32_t> argument0, const OutArray<uint64_t>& argument1) {
    return this->template InvokeMethod<false, 306, void(
      Out<uint32_t>, const OutArray<uint64_t>&)>(argument0, argument1);
  }

  virtual Result SetPinCodeReregistrationGuideAccounts(
    const InArray<uint64_t>& argument0) {
    return this->template InvokeMethod<false, 307, void(
      const InArray<uint64_t>&)>(argument0);
  }

  virtual Result GetChatTranscriptionSettingsEx(
    Out<uint32_t> argument0, const OutArray<RawData<64, 8>>& argument1) {
    return this->template InvokeMethod<false, 308, void(
      Out<uint32_t>, const OutArray<RawData<64, 8>>&)>(argument0, argument1);
  }

  virtual Result SetChatTranscriptionSettingsEx(
    const InArray<RawData<64, 8>>& argument0) {
    return this->template InvokeMethod<false, 309, void(
      const InArray<RawData<64, 8>>&)>(argument0);
  }

  virtual Result GetDeviceLockPinCodeLsbParity(
    Out<uint32_t> argument0, const OutBuffer& argument1) {
    return this->template InvokeMethod<false, 310, void(
      Out<uint32_t>, const OutBuffer&)>(argument0, argument1);
  }

  virtual Result VerifyDeviceLockPinCode(
    Out<uint8_t> argument0, const InBuffer& argument1) {
    return this->template InvokeMethod<false, 311, void(
      Out<uint8_t>, const InBuffer&)>(argument0, argument1);
  }

  virtual Result GetDeviceLockVeificationForbiddenFlag(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 312, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result GetDeviceLockStartPenaltyTimeEx(
    Out<uint8_t> argument0, Out<LargeData<26, 208, 8>> argument1) {
    return this->template InvokeMethod<false, 313, void(
      Out<uint8_t>, Out<LargeData<26, 208, 8>>)>(argument0, argument1);
  }

  virtual Result SetDeviceLockStartPenaltyTimeEx(
    const LargeData<25, 208, 8>& argument0) {
    return this->template InvokeMethod<false, 314, void(
      const LargeData<25, 208, 8>&)>(argument0);
  }

  virtual Result GetHttpAuthConfigs(
    Out<uint32_t> argument0, const OutArray<RawData<321, 1>>& argument1) {
    return this->template InvokeMethod<false, 315, void(
      Out<uint32_t>, const OutArray<RawData<321, 1>>&)>(argument0, argument1);
  }

  virtual Result GetOunceProControllerAudioLowLatencyModeEnableFlag(
    Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 316, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result SetOunceProControllerAudioLowLatencyModeEnabled(
    bool argument0) {
    return this->template InvokeMethod<false, 317, void(bool)>(argument0);
  }

  virtual Result BindChatTranscriptionSettingsChangedEventForSettingApplet(
    Out<NativeHandle> argument0) {
    return this->template InvokeMethod<false, 318, void(Out<NativeHandle>)>(
      argument0);
  }

  virtual Result GetAccountUserSettings(
    Out<uint32_t> argument0, const OutArray<RawData<64, 8>>& argument1) {
    return this->template InvokeMethod<false, 319, void(
      Out<uint32_t>, const OutArray<RawData<64, 8>>&)>(argument0, argument1);
  }

  virtual Result SetAccountUserSettings(
    const InArray<RawData<64, 8>>& argument0) {
    return this->template InvokeMethod<false, 320, void(
      const InArray<RawData<64, 8>>&)>(argument0);
  }

  virtual Result Command321(Out<RawData<64, 8>> argument0) {
    return this->template InvokeMethod<false, 321, void(Out<RawData<64, 8>>)>(
      argument0);
  }

  virtual Result GetForceConsoleModeEnableFlag(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 322, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result SetForceConsoleModeEnableFlag(bool argument0) {
    return this->template InvokeMethod<false, 323, void(bool)>(argument0);
  }

  virtual Result GetPtmQhClearCount(Out<uint32_t> argument0) {
    return this->template InvokeMethod<false, 324, void(Out<uint32_t>)>(
      argument0);
  }

  virtual Result SetPtmQhClearCount(uint32_t argument0) {
    return this->template InvokeMethod<false, 325, void(uint32_t)>(argument0);
  }

  virtual Result GetAirPlaneModeRestoreFlagSet(Out<uint32_t> argument0) {
    return this->template InvokeMethod<false, 326, void(Out<uint32_t>)>(
      argument0);
  }

  virtual Result SetAirPlaneModeRestoreFlagSet(uint32_t argument0) {
    return this->template InvokeMethod<false, 327, void(uint32_t)>(argument0);
  }

  virtual Result DeleteSettingsPerAccount(const RawData<16, 1>& argument0) {
    return this->template InvokeMethod<false, 328, void(const RawData<16, 1>&)>(
      argument0);
  }

  virtual Result GetQuickShutdownForManufacturingEnableFlag(
    Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 329, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result SetQuickShutdownForManufacturingEnableFlag(bool argument0) {
    return this->template InvokeMethod<false, 330, void(bool)>(argument0);
  }
};

template <typename Kind>
class CmifProxyMethods<settings::IFactorySettingsServer, Kind>
  : public CmifProxyMethodsBase<settings::IFactorySettingsServer, Kind> {
public:
  virtual Result GetConfigurationId1(Out<RawData<32, 8>> argument0) {
    return this->template InvokeMethod<false, 1, void(Out<RawData<32, 8>>)>(
      argument0);
  }

  virtual Result GetWirelessLanMacAddress(Out<RawData<6, 2>> argument0) {
    return this->template InvokeMethod<false, 6, void(Out<RawData<6, 2>>)>(
      argument0);
  }

  virtual Result GetSerialNumber(Out<RawData<24, 8>> argument0) {
    return this->template InvokeMethod<false, 9, void(Out<RawData<24, 8>>)>(
      argument0);
  }

  virtual Result GetBatteryLotForFactory(Out<RawData<26, 2>> argument0) {
    return this->template InvokeMethod<false, 12, void(Out<RawData<26, 2>>)>(
      argument0);
  }

  virtual Result GetCpDeviceKeyFileSize(Out<uint64_t> argument0) {
    return this->template InvokeMethod<false, 44, void(Out<uint64_t>)>(
      argument0);
  }

  virtual Result GetCpDeviceKeyFile(
    Out<uint64_t> argument0, const OutBuffer& argument1) {
    return this->template InvokeMethod<false, 45, void(
      Out<uint64_t>, const OutBuffer&)>(argument0, argument1);
  }

  virtual Result GetCpCertificateFileSize(Out<uint64_t> argument0) {
    return this->template InvokeMethod<false, 46, void(Out<uint64_t>)>(
      argument0);
  }

  virtual Result GetCpCertificateFile(
    Out<uint64_t> argument0, const OutBuffer& argument1) {
    return this->template InvokeMethod<false, 47, void(
      Out<uint64_t>, const OutBuffer&)>(argument0, argument1);
  }

  virtual Result GetRaCertificateFileSize(Out<uint64_t> argument0) {
    return this->template InvokeMethod<false, 48, void(Out<uint64_t>)>(
      argument0);
  }

  virtual Result GetRaCertificateFile(
    Out<uint64_t> argument0, const OutBuffer& argument1) {
    return this->template InvokeMethod<false, 49, void(
      Out<uint64_t>, const OutBuffer&)>(argument0, argument1);
  }

  virtual Result GetRaOemEkFileSize(Out<uint64_t> argument0) {
    return this->template InvokeMethod<false, 50, void(Out<uint64_t>)>(
      argument0);
  }

  virtual Result GetRaOemEkFile(
    Out<uint64_t> argument0, const OutBuffer& argument1) {
    return this->template InvokeMethod<false, 51, void(
      Out<uint64_t>, const OutBuffer&)>(argument0, argument1);
  }

  virtual Result GetRaPkaKekFileSize(Out<uint64_t> argument0) {
    return this->template InvokeMethod<false, 52, void(Out<uint64_t>)>(
      argument0);
  }

  virtual Result GetRaPkaKekFile(
    Out<uint64_t> argument0, const OutBuffer& argument1) {
    return this->template InvokeMethod<false, 53, void(
      Out<uint64_t>, const OutBuffer&)>(argument0, argument1);
  }

  virtual Result GetGcNxPkKekFileSize(Out<uint64_t> argument0) {
    return this->template InvokeMethod<false, 54, void(Out<uint64_t>)>(
      argument0);
  }

  virtual Result GetGcNxPkKekFile(
    Out<uint64_t> argument0, const OutBuffer& argument1) {
    return this->template InvokeMethod<false, 55, void(
      Out<uint64_t>, const OutBuffer&)>(argument0, argument1);
  }

  virtual Result GetGcUniqueImportKeyFileSize(Out<uint64_t> argument0) {
    return this->template InvokeMethod<false, 56, void(Out<uint64_t>)>(
      argument0);
  }

  virtual Result GetGcUniqueImportKeyFile(
    Out<uint64_t> argument0, const OutBuffer& argument1) {
    return this->template InvokeMethod<false, 57, void(
      Out<uint64_t>, const OutBuffer&)>(argument0, argument1);
  }

  virtual Result GetGcUniqueEncryptionKeyFileSize(Out<uint64_t> argument0) {
    return this->template InvokeMethod<false, 58, void(Out<uint64_t>)>(
      argument0);
  }

  virtual Result GetGcUniqueEncryptionKeyFile(
    Out<uint64_t> argument0, const OutBuffer& argument1) {
    return this->template InvokeMethod<false, 59, void(
      Out<uint64_t>, const OutBuffer&)>(argument0, argument1);
  }

  virtual Result GetGcCertificateFileSize(Out<uint64_t> argument0) {
    return this->template InvokeMethod<false, 60, void(Out<uint64_t>)>(
      argument0);
  }

  virtual Result GetGcCertificateFile(
    Out<uint64_t> argument0, const OutBuffer& argument1) {
    return this->template InvokeMethod<false, 61, void(
      Out<uint64_t>, const OutBuffer&)>(argument0, argument1);
  }

  virtual Result GetGcUniqueKeyAFileSize(Out<uint64_t> argument0) {
    return this->template InvokeMethod<false, 62, void(Out<uint64_t>)>(
      argument0);
  }

  virtual Result GetGcUniqueKeyAFile(
    Out<uint64_t> argument0, const OutBuffer& argument1) {
    return this->template InvokeMethod<false, 63, void(
      Out<uint64_t>, const OutBuffer&)>(argument0, argument1);
  }

  virtual Result GetGcUniqueKeyBFileSize(Out<uint64_t> argument0) {
    return this->template InvokeMethod<false, 64, void(Out<uint64_t>)>(
      argument0);
  }

  virtual Result GetGcUniqueKeyBFile(
    Out<uint64_t> argument0, const OutBuffer& argument1) {
    return this->template InvokeMethod<false, 65, void(
      Out<uint64_t>, const OutBuffer&)>(argument0, argument1);
  }

  virtual Result GetGcNxKeyFileSize(Out<uint64_t> argument0) {
    return this->template InvokeMethod<false, 66, void(Out<uint64_t>)>(
      argument0);
  }

  virtual Result GetGcNxKeyFile(
    Out<uint64_t> argument0, const OutBuffer& argument1) {
    return this->template InvokeMethod<false, 67, void(
      Out<uint64_t>, const OutBuffer&)>(argument0, argument1);
  }

  virtual Result GetGcNxCertificateFileSize(Out<uint64_t> argument0) {
    return this->template InvokeMethod<false, 68, void(Out<uint64_t>)>(
      argument0);
  }

  virtual Result GetGcNxCertificateFile(
    Out<uint64_t> argument0, const OutBuffer& argument1) {
    return this->template InvokeMethod<false, 69, void(
      Out<uint64_t>, const OutBuffer&)>(argument0, argument1);
  }

  virtual Result GetWirelessLanRegulatoryDomain(Out<uint32_t> argument0) {
    return this->template InvokeMethod<false, 70, void(Out<uint32_t>)>(
      argument0);
  }

  virtual Result GetDeviceId(Out<RawData<16, 1>> argument0) {
    return this->template InvokeMethod<false, 71, void(Out<RawData<16, 1>>)>(
      argument0);
  }

  virtual Result GetBluetoothBdAddressSet(Out<RawData<12, 4>> argument0) {
    return this->template InvokeMethod<false, 72, void(Out<RawData<12, 4>>)>(
      argument0);
  }

  virtual Result GetToolModel(Out<uint32_t> argument0) {
    return this->template InvokeMethod<false, 73, void(Out<uint32_t>)>(
      argument0);
  }

  virtual Result GetRadioForbidden(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 74, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result GetDisplayModuleId(Out<RawData<3, 1>> argument0) {
    return this->template InvokeMethod<false, 75, void(Out<RawData<3, 1>>)>(
      argument0);
  }

  virtual Result GetAnalogStickModuleTypeL(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 76, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result GetAnalogStickModelParameterL(Out<RawData<18, 2>> argument0) {
    return this->template InvokeMethod<false, 77, void(Out<RawData<18, 2>>)>(
      argument0);
  }

  virtual Result GetAnalogStickFactoryCalibrationL(
    Out<RawData<9, 1>> argument0) {
    return this->template InvokeMethod<false, 78, void(Out<RawData<9, 1>>)>(
      argument0);
  }

  virtual Result GetAnalogStickModuleTypeR(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 79, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result GetAnalogStickModelParameterR(Out<RawData<18, 2>> argument0) {
    return this->template InvokeMethod<false, 80, void(Out<RawData<18, 2>>)>(
      argument0);
  }

  virtual Result GetAnalogStickFactoryCalibrationR(
    Out<RawData<9, 1>> argument0) {
    return this->template InvokeMethod<false, 81, void(Out<RawData<9, 1>>)>(
      argument0);
  }

  virtual Result GetConsoleSixAxisSensorModuleType(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 82, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result GetConsoleSixAxisSensorMountType(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 83, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result GetConsoleSixAxisSensorFactoryCalibration(
    Out<RawData<16, 1>> argument0) {
    return this->template InvokeMethod<false, 84, void(Out<RawData<16, 1>>)>(
      argument0);
  }

  virtual Result GetOta0DeviceKeyFileSize(Out<uint64_t> argument0) {
    return this->template InvokeMethod<false, 85, void(Out<uint64_t>)>(
      argument0);
  }

  virtual Result GetOta0DeviceKeyFile(
    Out<uint64_t> argument0, const OutBuffer& argument1) {
    return this->template InvokeMethod<false, 86, void(
      Out<uint64_t>, const OutBuffer&)>(argument0, argument1);
  }

  virtual Result GetOta0CertificateFileSize(Out<uint64_t> argument0) {
    return this->template InvokeMethod<false, 87, void(Out<uint64_t>)>(
      argument0);
  }

  virtual Result GetOta0CertificateFile(
    Out<uint64_t> argument0, const OutBuffer& argument1) {
    return this->template InvokeMethod<false, 88, void(
      Out<uint64_t>, const OutBuffer&)>(argument0, argument1);
  }

  virtual Result GetOta1DeviceKeyFileSize(Out<uint64_t> argument0) {
    return this->template InvokeMethod<false, 89, void(Out<uint64_t>)>(
      argument0);
  }

  virtual Result GetOta1DeviceKeyFile(
    Out<uint64_t> argument0, const OutBuffer& argument1) {
    return this->template InvokeMethod<false, 90, void(
      Out<uint64_t>, const OutBuffer&)>(argument0, argument1);
  }

  virtual Result GetOta1CertificateFileSize(Out<uint64_t> argument0) {
    return this->template InvokeMethod<false, 91, void(Out<uint64_t>)>(
      argument0);
  }

  virtual Result GetOta1CertificateFile(
    Out<uint64_t> argument0, const OutBuffer& argument1) {
    return this->template InvokeMethod<false, 92, void(
      Out<uint64_t>, const OutBuffer&)>(argument0, argument1);
  }

  virtual Result GetOta2DeviceKeyFileSize(Out<uint64_t> argument0) {
    return this->template InvokeMethod<false, 93, void(Out<uint64_t>)>(
      argument0);
  }

  virtual Result GetOta2DeviceKeyFile(
    Out<uint64_t> argument0, const OutBuffer& argument1) {
    return this->template InvokeMethod<false, 94, void(
      Out<uint64_t>, const OutBuffer&)>(argument0, argument1);
  }

  virtual Result GetOta2CertificateFileSize(Out<uint64_t> argument0) {
    return this->template InvokeMethod<false, 95, void(Out<uint64_t>)>(
      argument0);
  }

  virtual Result GetOta2CertificateFile(
    Out<uint64_t> argument0, const OutBuffer& argument1) {
    return this->template InvokeMethod<false, 96, void(
      Out<uint64_t>, const OutBuffer&)>(argument0, argument1);
  }

  virtual Result GetJc0CertificateFileSize(Out<uint64_t> argument0) {
    return this->template InvokeMethod<false, 97, void(Out<uint64_t>)>(
      argument0);
  }

  virtual Result GetJc0CertificateFile(
    Out<uint64_t> argument0, const OutBuffer& argument1) {
    return this->template InvokeMethod<false, 98, void(
      Out<uint64_t>, const OutBuffer&)>(argument0, argument1);
  }

  virtual Result GetJc0PrivateKeyFileSize(Out<uint64_t> argument0) {
    return this->template InvokeMethod<false, 99, void(Out<uint64_t>)>(
      argument0);
  }

  virtual Result GetJc0PrivateKeyFile(
    Out<uint64_t> argument0, const OutBuffer& argument1) {
    return this->template InvokeMethod<false, 100, void(
      Out<uint64_t>, const OutBuffer&)>(argument0, argument1);
  }

  virtual Result GetJc0PkKekFileSize(Out<uint64_t> argument0) {
    return this->template InvokeMethod<false, 101, void(Out<uint64_t>)>(
      argument0);
  }

  virtual Result GetJc0PkKekFile(
    Out<uint64_t> argument0, const OutBuffer& argument1) {
    return this->template InvokeMethod<false, 102, void(
      Out<uint64_t>, const OutBuffer&)>(argument0, argument1);
  }

  virtual Result GetJc1CertificateFileSize(Out<uint64_t> argument0) {
    return this->template InvokeMethod<false, 103, void(Out<uint64_t>)>(
      argument0);
  }

  virtual Result GetJc1CertificateFile(
    Out<uint64_t> argument0, const OutBuffer& argument1) {
    return this->template InvokeMethod<false, 104, void(
      Out<uint64_t>, const OutBuffer&)>(argument0, argument1);
  }

  virtual Result GetJc1PrivateKeyFileSize(Out<uint64_t> argument0) {
    return this->template InvokeMethod<false, 105, void(Out<uint64_t>)>(
      argument0);
  }

  virtual Result GetJc1PrivateKeyFile(
    Out<uint64_t> argument0, const OutBuffer& argument1) {
    return this->template InvokeMethod<false, 106, void(
      Out<uint64_t>, const OutBuffer&)>(argument0, argument1);
  }

  virtual Result GetJc1PkKekFileSize(Out<uint64_t> argument0) {
    return this->template InvokeMethod<false, 107, void(Out<uint64_t>)>(
      argument0);
  }

  virtual Result GetJc1PkKekFile(
    Out<uint64_t> argument0, const OutBuffer& argument1) {
    return this->template InvokeMethod<false, 108, void(
      Out<uint64_t>, const OutBuffer&)>(argument0, argument1);
  }

  virtual Result GetWirelessLanPowerTable(Out<uint32_t> argument0) {
    return this->template InvokeMethod<false, 109, void(Out<uint32_t>)>(
      argument0);
  }

  virtual Result GetConsoleSixAxisSensorFactoryAccelerationLog(
    Out<RawData<24, 8>> argument0) {
    return this->template InvokeMethod<false, 110, void(Out<RawData<24, 8>>)>(
      argument0);
  }

  virtual Result GetDrmCertificateFileSize(Out<uint64_t> argument0) {
    return this->template InvokeMethod<false, 111, void(Out<uint64_t>)>(
      argument0);
  }

  virtual Result GetDrmCertificateFile(
    Out<uint64_t> argument0, const OutBuffer& argument1) {
    return this->template InvokeMethod<false, 112, void(
      Out<uint64_t>, const OutBuffer&)>(argument0, argument1);
  }

  virtual Result GetCalibrationTimeStampUtc(Out<uint64_t> argument0) {
    return this->template InvokeMethod<false, 113, void(Out<uint64_t>)>(
      argument0);
  }

  virtual Result GetEncryptedSecretDeviceIdFileSize(Out<uint64_t> argument0) {
    return this->template InvokeMethod<false, 114, void(Out<uint64_t>)>(
      argument0);
  }

  virtual Result GetEncryptedSecretDeviceIdFile(
    Out<uint64_t> argument0, const OutBuffer& argument1) {
    return this->template InvokeMethod<false, 115, void(
      Out<uint64_t>, const OutBuffer&)>(argument0, argument1);
  }

  virtual Result GetEncryptedSecretDeviceIdEncryptionKeyFileSize(
    Out<uint64_t> argument0) {
    return this->template InvokeMethod<false, 116, void(Out<uint64_t>)>(
      argument0);
  }

  virtual Result GetEncryptedSecretDeviceIdEncryptionKeyFile(
    Out<uint64_t> argument0, const OutBuffer& argument1) {
    return this->template InvokeMethod<false, 117, void(
      Out<uint64_t>, const OutBuffer&)>(argument0, argument1);
  }

  virtual Result GetRegionCodeForFactory(Out<uint32_t> argument0) {
    return this->template InvokeMethod<false, 119, void(Out<uint32_t>)>(
      argument0);
  }
};

template <typename Kind>
class CmifProxyMethods<settings::ISettingsItemKeyIterator, Kind>
  : public CmifProxyMethodsBase<settings::ISettingsItemKeyIterator, Kind> {
public:
  virtual Result GoNext() {
    return this->template InvokeMethod<false, 0, void()>();
  }

  virtual Result GetKeySize(Out<uint64_t> argument0) {
    return this->template InvokeMethod<false, 1, void(Out<uint64_t>)>(
      argument0);
  }

  virtual Result GetKey(Out<uint64_t> argument0, const OutBuffer& argument1) {
    return this->template InvokeMethod<false, 2, void(
      Out<uint64_t>, const OutBuffer&)>(argument0, argument1);
  }
};

template <typename Kind>
class CmifProxyMethods<settings::ISettingsServer, Kind>
  : public CmifProxyMethodsBase<settings::ISettingsServer, Kind> {
public:
  virtual Result GetLanguageCode(Out<uint64_t> argument0) {
    return this->template InvokeMethod<false, 0, void(Out<uint64_t>)>(
      argument0);
  }

  virtual Result Command1(
    Out<uint32_t> argument0, const BufferArray<10, uint64_t>& argument1) {
    return this->template InvokeMethod<false, 1, void(
      Out<uint32_t>, const BufferArray<10, uint64_t>&)>(argument0, argument1);
  }

  virtual Result Command2(Out<RawData<8, 4>> argument0, uint32_t argument1) {
    return this->template InvokeMethod<false, 2, void(
      Out<RawData<8, 4>>, uint32_t)>(argument0, argument1);
  }

  virtual Result Command3(Out<uint32_t> argument0) {
    return this->template InvokeMethod<false, 3, void(Out<uint32_t>)>(
      argument0);
  }

  virtual Result GetRegionCode(Out<uint32_t> argument0) {
    return this->template InvokeMethod<false, 4, void(Out<uint32_t>)>(
      argument0);
  }

  virtual Result Command5(
    Out<uint32_t> argument0, const OutArray<uint64_t>& argument1) {
    return this->template InvokeMethod<false, 5, void(
      Out<uint32_t>, const OutArray<uint64_t>&)>(argument0, argument1);
  }

  virtual Result Command6(Out<uint32_t> argument0) {
    return this->template InvokeMethod<false, 6, void(Out<uint32_t>)>(
      argument0);
  }

  virtual Result Command7(Out<LargeData<22, 4096, 8>> argument0) {
    return this->template InvokeMethod<false, 7, void(
      Out<LargeData<22, 4096, 8>>)>(argument0);
  }

  virtual Result GetQuestFlagForApplication(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 8, void(Out<uint8_t>)>(argument0);
  }

  virtual Result Command9(Out<LargeData<22, 4096, 8>> argument0) {
    return this->template InvokeMethod<false, 9, void(
      Out<LargeData<22, 4096, 8>>)>(argument0);
  }

  virtual Result GetFirmwareVersionForDebug(
    Out<LargeData<22, 128, 8>> argument0) {
    return this->template InvokeMethod<false, 10, void(
      Out<LargeData<22, 128, 8>>)>(argument0);
  }

  virtual Result GetDeviceNickName(Out<LargeData<22, 128, 8>> argument0) {
    return this->template InvokeMethod<false, 11, void(
      Out<LargeData<22, 128, 8>>)>(argument0);
  }

  virtual Result GetKeyCodeMap(
    Out<LargeData<22, 4096, 8>> argument0, uint32_t argument1) {
    return this->template InvokeMethod<false, 12, void(
      Out<LargeData<22, 4096, 8>>, uint32_t)>(argument0, argument1);
  }

  virtual Result GetTextToSpeechFlag(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 13, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result GetTextToSpeechVoiceTypeForUi(Out<uint32_t> argument0) {
    return this->template InvokeMethod<false, 14, void(Out<uint32_t>)>(
      argument0);
  }

  virtual Result GetTextToSpeechVoiceVolume(Out<uint32_t> argument0) {
    return this->template InvokeMethod<false, 15, void(Out<uint32_t>)>(
      argument0);
  }

  virtual Result GetTextToSpeechVoiceSpeed(Out<uint32_t> argument0) {
    return this->template InvokeMethod<false, 16, void(Out<uint32_t>)>(
      argument0);
  }
};

template <typename Kind>
class CmifProxyMethods<settings::IFirmwareDebugSettingsServer, Kind>
  : public CmifProxyMethodsBase<settings::IFirmwareDebugSettingsServer, Kind> {
public:
  virtual Result SetSettingsItemValue(
    const LargeData<25, 72, 8>& argument0,
    const LargeData<25, 72, 8>& argument1, const InBuffer& argument2) {
    return this->template InvokeMethod<false, 2, void(
      const LargeData<25, 72, 8>&, const LargeData<25, 72, 8>&,
      const InBuffer&)>(argument0, argument1, argument2);
  }

  virtual Result ResetSettingsItemValue(
    const LargeData<25, 72, 8>& argument0,
    const LargeData<25, 72, 8>& argument1) {
    return this->template InvokeMethod<false, 3, void(
      const LargeData<25, 72, 8>&, const LargeData<25, 72, 8>&)>(
      argument0, argument1);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(2)

  virtual Result ReadSettings(
    Out<uint64_t> argument0, const OutBuffer& argument1, uint32_t argument2) {
    return this->template InvokeMethod<false, 10, void(
      Out<uint64_t>, const OutBuffer&, uint32_t)>(
      argument0, argument1, argument2);
  }

  virtual Result ResetSettings(uint32_t argument0) {
    return this->template InvokeMethod<false, 11, void(uint32_t)>(argument0);
  }

  virtual Result SetWebInspectorFlag(bool argument0) {
    return this->template InvokeMethod<false, 20, void(bool)>(argument0);
  }

  virtual Result SetAllowedSslHosts(const InArray<RawData<256, 8>>& argument0) {
    return this->template InvokeMethod<false, 21, void(
      const InArray<RawData<256, 8>>&)>(argument0);
  }

  virtual Result SetHostFsMountPoint(const LargeData<21, 256, 8>& argument0) {
    return this->template InvokeMethod<false, 22, void(
      const LargeData<21, 256, 8>&)>(argument0);
  }

  virtual Result SetMemoryUsageRateFlag(bool argument0) {
    return this->template InvokeMethod<false, 23, void(bool)>(argument0);
  }

  virtual Result CommitSettings() {
    return this->template InvokeMethod<false, 24, void()>();
  }

  virtual Result GetDeviceLockPinCodeContinuousVerificationFailureCount(
    Out<uint32_t> argument0) {
    return this->template InvokeMethod<false, 25, void(Out<uint32_t>)>(
      argument0);
  }

  virtual Result SetDeviceLockPinCodeContinuousVerificationFailureCount(
    uint32_t argument0) {
    return this->template InvokeMethod<false, 26, void(uint32_t)>(argument0);
  }

  virtual Result SetHttpAuthConfigs(const InArray<RawData<321, 1>>& argument0) {
    return this->template InvokeMethod<false, 27, void(
      const InArray<RawData<321, 1>>&)>(argument0);
  }
};

}
