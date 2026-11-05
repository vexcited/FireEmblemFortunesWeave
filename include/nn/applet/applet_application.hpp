#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/account/account_types.hpp"
#include "nn/applet/applet_types.hpp"
#include "nn/os/time.hpp"
#include "nn/result.hpp"

namespace nn::applet {

enum WirelessPriorityMode : int32_t {
  WirelessPriorityMode_Default = 1,
  WirelessPriorityMode_OptimizedForWlan = 2,
};

enum ThemeColorType : int32_t {};

enum LaunchParameterKind : int32_t {
  LaunchParameterKind_User = 1,
};

enum RequestMessageType : int32_t {
  RequestMessageType_Lhub = 1,
};

void RequestToRelaunchApplication(StorageHandle storage);
Result RestartProgram(StorageHandle storage);
Result ExecuteProgram(uint8_t programIndex, StorageHandle storage);
int GetPreviousProgramIndex();
void RequestExitApplicationAndTryPopMessage(RequestMessageType type,
  const account::Uid& uid, const void* buffer, size_t size);
void SetWirelessPriorityMode(WirelessPriorityMode mode);
void SetExpectedThemeColorForSystem(ThemeColorType color);
void SetCpuBoostMode(int mode);
bool TryPopFromApplicationParameterChannel(StorageHandle* pOutStorage,
  LaunchParameterKind kind);
void BeginAutoSleepDisabledSection();
void EndAutoSleepDisabledSection();
bool IsAutoSleepDisabled();
void RestrictPowerOperationForSecureLaunchMode();
void SuppressDisablingSleepTemporarily(TimeSpan duration);
bool IsSleepEnabled();
bool IsDisablingSleepSuppressed();
void SetRtcScreenSharingAudioEnabled(bool isEnabled);

}
