#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/applet/applet_types.hpp"
#include "nn/os/time.hpp"
#include "nn/os/timer_event.hpp"
#include "nn/result.hpp"
#include "nn/util/bit_flag_set.hpp"

namespace nn::util {

struct Float3;
struct Unorm8x4;

}

namespace nn::os {

struct SystemEventType;
struct SharedMemoryType;
struct TransferMemoryType;
class SystemEvent;

}

namespace nn::bluetooth {

struct Address {
  uint8_t address[6];
};

}

namespace nn::hidconfig {

struct ButtonConfigBack;
struct ButtonConfigEmbedded;
struct ButtonConfigFull;
struct ButtonConfigJoyConGrip;
struct ButtonConfigLeft;
struct ButtonConfigRight;
struct StorageName;

}

namespace nn::hid {

using NpadIdType = uint32_t;

struct NpadStyleTag;
struct NpadButton;
struct NmouseType;
struct KeyboardLockKeyEvent;
struct PalmaFeature;

using NpadStyleSet = util::BitFlagSet<32, NpadStyleTag>;
using NpadButtonSet = util::BitFlagSet<64, NpadButton>;

enum NpadJoyHoldType {
  NpadJoyHoldType_Vertical,
  NpadJoyHoldType_Horizontal,
};

enum NpadJoyAssignmentMode {
  NpadJoyAssignmentMode_Dual,
  NpadJoyAssignmentMode_Single,
};

enum NpadJoyDeviceType {
  NpadJoyDeviceType_Left,
  NpadJoyDeviceType_Right,
};

enum NpadHandheldActivationMode {
  NpadHandheldActivationMode_Dual,
  NpadHandheldActivationMode_Single,
  NpadHandheldActivationMode_None,
};

enum NpadCommunicationMode {
  NpadCommunicationMode_5ms,
  NpadCommunicationMode_10ms,
  NpadCommunicationMode_15ms,
  NpadCommunicationMode_Default,
};

enum ControlPadRestrictionType {};
enum GcStyleControllerType {};
enum NpadLagerType {};
enum GyroscopeZeroDriftMode {};
enum JcmsType : uint8_t {};
enum NmousePointerType {};
enum PalmaFrModeType {};

struct SixAxisSensorHandle {
  uint32_t _storage;
};

struct ConsoleSixAxisSensorHandle {
  uint32_t _storage;
};

struct VibrationDeviceHandle {
  uint32_t _storage;
};

struct NmouseHandle {
  uint64_t _storage;
};

struct NpadImuHandle;
struct JcmsHandle {
  uint32_t _storage;
};

struct MouseHandle {
  uint32_t _storage;
};

struct PalmaConnectionHandle;
struct BasicXpadId;

struct AnalogStickState;
struct DebugPadState;
struct DigitizerState;
struct GestureState;
struct JcmsState;
struct KeyboardState;
struct MouseState;
struct NmouseState;
struct NmouseButtonConfigJoyLeftJcms;
struct NmouseButtonConfigJoyRightJcms;
struct NmouseButtonConfigStandardMouse;
struct NpadControllerColor;
struct NpadJoyIconDecorationColor;
struct NpadFullKeyState;
struct NpadHandheldState;
struct NpadHandheldLarkState;
struct NpadJoyDualState;
struct NpadJoyLeftState;
struct NpadJoyRightState;
struct NpadGcState;
struct NpadLagerState;
struct NpadLarkState;
struct NpadLuciaState;
struct NpadPalmaState;
struct PalmaActivityEntry;
struct PalmaApplicationSectionAccessBuffer;
struct PalmaOperationInfo;
struct PalmaWaveSet;
struct SevenSixAxisSensorState;
struct SixAxisSensorCalibrationParameter;
struct SixAxisSensorIcInformation;
struct SixAxisSensorState;
struct TouchScreenConfigurationForNx;
struct VibrationDeviceInfo;
struct VibrationFileInfo;
struct VibrationFileParserContext;
struct VibrationGcErmCommand;
struct VibrationValue;
struct VibrationValueArrayInfo;

template <size_t N>
struct TouchScreenState;

namespace detail {

struct VibrationFileParserContextImpl;

}

namespace system {

struct UniquePadId {
  uint64_t _storage;
};

struct AbstractedPadId {
  uint64_t value;
};

struct UniqueSixAxisSensorHandle {
  uint32_t _storage;
};

struct DeviceType;
struct AppletFooterUiAttribute;
struct UniquePadButton;
struct KeyboardLockKeyEvent;

enum AnalogStickPosition {
  AnalogStickPosition_Left,
  AnalogStickPosition_Right,
};

enum AppletFooterUiType : uint8_t {};
enum AppletDetailedUiType {};
enum UniquePadType {};
enum McuState {};
enum PeriodicDataFormat {};
enum SelectorUiPresentationPolicy {};
enum VibrationNotificationPattern {};

struct PowerInfo {
  bool isPowered;
  bool isCharging;
  uint8_t reserved[6];
  int32_t batteryLevel;
};

struct AppletResourceProperty {
  uint64_t value;
  uint32_t flags;
};

struct NotificationLedPattern;
struct AnalogStickManualCalibrationStage;
struct AudioControlState;
struct CButtonState;
struct CaptureButtonState;
struct ControllerColor;
struct ControllerColor12;
struct DisplayStatusReport;
struct FirmwareUpdateDeviceHandle;
struct FirmwareUpdateRequiredReason;
struct FirmwareUpdateState;
struct FirmwareVersion;
struct FirmwareVersionString;
struct HomeButtonState;
struct InteractiveArea;
struct McuVersionDataForNfc;
struct MifareKeyClearParameter;
struct MifareKeyWriteParameter;
struct MifareReadParameter;
struct MifareWriteParameter;
struct NfcDiscoveryParameter;
struct NfcInfo;
struct NfcPassThruParameter;
struct NmouseMovementAdjustmentParameter;
struct NmouseStateWithDelta;
struct NpadCaptureButtonAssignmentType;
struct NpadSystemExtState;
struct NpadSystemExtSubStyle;
struct NpadSystemState;
struct NtagReadParameter;
struct NtagReadPlusParameter;
struct NtagSramAccessParameter;
struct NtagWriteParameter;
struct NtagWritePlusParameter;
struct PlayReportControllerUsage;
struct RegisteredDevice;
struct RegisteredDeviceForControllerSupport;
struct SixAxisSensorAccurateUserCalibrationState;
struct SixAxisSensorUserCalibrationStage;
struct SleepButtonState;
struct SystemKeyboardState;
struct UniquePadInterface;
struct UniquePadSerialNumber;

}

}
