#pragma once

#include <stdint.h>

#include "nn/fs/fs_file_system_proxy_types.hpp"
#include "nn/os/system_event.hpp"
#include "nn/util/bit_flag_set.hpp"

namespace nn::account {

struct NetworkServiceAccountId;

struct Uid;

}

namespace nn::kpr {

struct KeyCodeMap;

}

namespace nn::oe {

struct FirmwareVersionForDebug;

}

namespace nn::settings {

struct BatteryLot;

enum ChineseTraditionalInputMethod : int32_t {};

struct DebugPadGenericPadMap;

struct DebugPadGenericPadMapV2;

struct DebugPadKeyboardMap;

struct DebugPadKeyboardMapV2;

struct FullKeyGenericPadMap;

enum FullKeyIndex : int32_t {};

struct FullKeyKeyboardMap;

enum KeyboardLayout : int32_t {};

struct LanguageCode {
  char string[8];
};

struct SettingsItemKey {
  char value[72];
};

struct SettingsName {
  char value[72];
};

class ISettingsItemKeyIterator;

}

namespace nn::settings::factory {

struct AnalogStickFactoryCalibration;

struct AnalogStickModelParameter;

struct BdAddressSet;

struct ConfigurationId1;

struct ConsoleSixAxisSensorFactoryAccelerationLog;

struct ConsoleSixAxisSensorFactoryCalibration;

struct DeviceId;

struct DisplayModuleId;

struct MacAddress;

struct RegionCode;

struct SerialNumber;

struct WlanPowerTable;

struct WlanRegulatoryDomain;

}

namespace nn::settings::fwdbg {

struct SettingsItemKeyIterator {
  ISettingsItemKeyIterator* _impl;
  uint64_t _reserved;
};

enum SettingsTarget : int32_t {};

}

namespace nn::settings::system {

struct AccountIdentificationFlag;

struct AccountIdentificationSettings;

struct AccountNotificationSettings;

struct AccountSettings {
  uint32_t flags;
};

struct AccountUserFlag;

struct AccountUserSettings;

struct AirPlaneModeRestoreFlag;

struct AllowedSslHost;

struct AppletLaunchFlag;

struct AppletParameterSet;

enum AudioOutputMode : int32_t {};

enum AudioOutputModeTarget : int32_t {};

struct AudioVolume;

enum AudioVolumeTarget : int32_t {};

struct BacklightSettings;

struct BacklightSettingsEx;

struct ChatTranscriptionFlag;

struct ChatTranscriptionSettings;

struct ChatTranscriptionSettingsEx;

enum ColorFilterType : int32_t {};

enum CrcMode : int32_t {};

struct DeviceNickName;

struct Edid;

enum ErrorReportSharePermission : int32_t {};

struct EulaVersion;

struct FatalDirtyFlag;

struct FirmwareVersion;

struct HomeMenuScheme;

struct HostFsMountPoint;

struct HttpAuthConfig;

struct InitialLaunchSettings;

struct LcdFlag;

struct NetworkSettings;

struct NotificationSettings;

enum PlatformRegion : int32_t {};

enum PrimaryAlbumStorage : int32_t {};

struct PrioritizedInputAudioDeviceSettings {
  uint64_t value;
};

struct PrioritizedOutputAudioDeviceSettings;

enum ProductModel : int32_t {};

struct ProductModelName {
  char string[8];
};

enum PtmCycleCountReliability : int32_t {};

struct PtmFuelGaugeParameter;

enum PushNotificationActivityMode : int32_t {};

struct PushNotificationDirtyFlag;

struct RebootlessSystemUpdateVersion;

enum RegionCode : int32_t {};

struct SerialNumber;

struct ServiceDiscoveryControlSettings {
  uint32_t flags;
};

struct SleepSettings;

struct SleepSettingsEx;

struct TelemetryDirtyFlag;

enum TextToSpeechVoiceTypeForChat : int32_t {};

enum TextToSpeechVoiceTypeForUi : int32_t {};

struct TvHdrSettings;

struct TvHdrSettingsEx;

struct TvSettings;

struct UsbAudioInputDeviceGainSettings;

struct UsbAudioVolumeSettings;

struct VphymDirtyFlag;

}

namespace nn::time {

struct ClockSnapshot;

struct LocationName;

struct SteadyClockTimePoint;

struct SystemClockContext;

}

namespace nn::util {

struct Uuid;

}
