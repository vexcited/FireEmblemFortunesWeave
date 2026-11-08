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

struct ButtonConfigBack {
  uint64_t _storage;
};

struct ButtonConfigEmbedded {
  uint32_t _storage[21];
};

struct ButtonConfigFull {
  uint32_t _storage[21];
};

struct ButtonConfigJoyConGrip {
  uint64_t _storage;
};

struct ButtonConfigLeft {
  uint32_t _storage[13];
};

struct ButtonConfigRight {
  uint32_t _storage[13];
};

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
enum NmouseButtonAssignment : uint8_t {};
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

struct PalmaConnectionHandle {
  uint64_t _storage;
};

struct BasicXpadId {
  uint32_t _storage;
};


struct AnalogStickState;
struct DebugPadState;
struct DigitizerState;
struct GestureState;
struct JcmsState;
struct KeyboardState;
struct MouseState;
struct NmouseState;
struct NmouseButtonConfigJoyLeftJcms {
  uint64_t _storage;
};

struct NmouseButtonConfigJoyRightJcms {
  uint64_t _storage;
};

struct NmouseButtonConfigStandardMouse {
  uint8_t _storage[5];
};

struct NpadControllerColor {
  uint32_t main;
  uint32_t sub;
};

struct NpadJoyIconDecorationColor {
  uint32_t button;
  uint32_t outline;
  uint32_t decoration;
};

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
enum PalmaWaveSet {};

struct PalmaActivityEntry {
  uint16_t rgbLedPatternIndex;
  PalmaWaveSet waveSet;
  uint16_t waveIndex;
};

struct PalmaApplicationSectionAccessBuffer;
enum PalmaOperationType {};

struct PalmaOperationInfo {
  PalmaOperationType type;
  Result result;
  uint8_t buffer[320];
};

struct SevenSixAxisSensorState;
struct SixAxisSensorCalibrationParameter {
  uint8_t _storage[1860];
};
struct SixAxisSensorIcInformation;
struct SixAxisSensorState;
struct TouchScreenConfigurationForNx {
  uint8_t mode;
  uint8_t reserved[15];
};
struct VibrationDeviceInfo;
struct VibrationFileInfo;
struct VibrationFileParserContext;
struct VibrationGcErmCommand {
  uint64_t _storage;
};

struct VibrationValue;
struct VibrationValueArrayInfo {
  int32_t count;
  bool isLoop;
  uint32_t loopStartPosition;
  uint32_t loopEndPosition;
  uint32_t loopInterval;
};


template <size_t N>
struct TouchScreenState;

namespace detail {

struct VibrationFileParserContextImpl;

}

namespace debug {

enum AccelerometerPlayMode {};

struct FirmwareVersionFullFormatString {
  char string[45];
};

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

struct NotificationLedPattern {
  uint8_t data[0x48];
};

enum AnalogStickManualCalibrationStage {};
struct AudioControlState;
struct CButtonState;
struct CaptureButtonState;
struct ControllerColor;
struct ControllerColor12;
struct DisplayStatusReport;
struct FirmwareUpdateDeviceHandle {
  uint64_t _storage;
};

enum FirmwareUpdateRequiredReason : uint8_t {};
struct FirmwareUpdateState;
struct FirmwareVersion {
  uint8_t _storage[16];
};

struct FirmwareVersionString {
  char string[29];
};

struct HomeButtonState;
struct InteractiveArea {
  float x;
  float y;
  float width;
  float height;
};
struct McuVersionDataForNfc;
struct MifareKeyClearParameter {
  uint32_t _storage;
};

struct MifareKeyWriteParameter;
struct MifareReadParameter;
struct MifareWriteParameter;
struct NfcDiscoveryParameter {
  uint64_t _storage;
};

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
struct SixAxisSensorAccurateUserCalibrationState {
  int32_t stage;
  int32_t progress;
};

struct SixAxisSensorUserCalibrationStage {
  int32_t value;
};
struct SleepButtonState;
struct SystemKeyboardState;
enum UniquePadInterface {};
struct UniquePadSerialNumber;

}

}
