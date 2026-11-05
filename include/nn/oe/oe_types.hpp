#pragma once

#include <stdint.h>

namespace nn::oe {

enum AudioOutputPolicy : uint8_t {
  AudioOutputPolicy_Default,
  AudioOutputPolicy_Mute,
};

enum WirelessPriorityMode : int32_t {
  WirelessPriorityMode_Default,
  WirelessPriorityMode_OptimizedForWlan,
};

enum CpuBoostMode : int32_t {
  CpuBoostMode_Disabled,
  CpuBoostMode_Boost,
};

enum ThemeColorType : int32_t {};
enum PerformanceMode : int32_t {};
enum OperationMode : int32_t {};
enum HdcpAuthenticationState : int32_t {};
enum TvPowerStateMatchingMode : int32_t {};
enum UserInactivityDetectionTimeExtensionMode : int32_t {};

enum WindowOriginMode : int32_t {
  WindowOriginMode_LowerLeft,
  WindowOriginMode_UpperLeft,
};

enum GraphicsScale : int32_t {
  GraphicsScale_Small,
  GraphicsScale_Medium,
  GraphicsScale_Large,
};

struct LaunchStorageInfoForDebug {
  int32_t launchStorage;
  int32_t patchStorage;
};

struct GraphicsScalingParameters {
  int32_t scale;
  int32_t width;
  int32_t height;
};

struct DisplayLayoutRatio {
  uint32_t width;
  uint32_t height;
};

struct FirmwareVersionForDebug;
struct DisplayVersion;
struct DeviceNickName;
struct LayoutRect;
struct LaunchRequiredVersion;

}
