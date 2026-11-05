#pragma once

#include <stdint.h>

#include "nn/am/interfaces.hpp"
#include "nn/applet/applet_types.hpp"
#include "nn/os/time.hpp"
#include "nn/result.hpp"
#include "nn/sf/sf_buffers.hpp"
#include "nn/sf/shared_pointer.hpp"

namespace nn::am::service {

#define NN_AM_RESERVED(index) virtual void Reserved##index() = 0

class ICommonStateGetter : public sf::IServiceObject {
 public:
  NN_AM_RESERVED(2); NN_AM_RESERVED(3); NN_AM_RESERVED(4); NN_AM_RESERVED(5);
  NN_AM_RESERVED(6); NN_AM_RESERVED(7); NN_AM_RESERVED(8); NN_AM_RESERVED(9);
  NN_AM_RESERVED(10); NN_AM_RESERVED(11); NN_AM_RESERVED(12);
  NN_AM_RESERVED(13); NN_AM_RESERVED(14); NN_AM_RESERVED(15);
  NN_AM_RESERVED(16); NN_AM_RESERVED(17);
  virtual Result GetWakeupCount(sf::Out<int64_t> pOutCount) = 0;
  NN_AM_RESERVED(19); NN_AM_RESERVED(20); NN_AM_RESERVED(21);
  NN_AM_RESERVED(22); NN_AM_RESERVED(23); NN_AM_RESERVED(24);
  NN_AM_RESERVED(25);
  virtual Result SetVrModeEnabled(bool isEnabled) = 0;
  NN_AM_RESERVED(27); NN_AM_RESERVED(28); NN_AM_RESERVED(29);
  NN_AM_RESERVED(30); NN_AM_RESERVED(31); NN_AM_RESERVED(32);
  NN_AM_RESERVED(33); NN_AM_RESERVED(34); NN_AM_RESERVED(35);
  NN_AM_RESERVED(36); NN_AM_RESERVED(37);
  virtual Result SetCpuBoostMode(int32_t mode) = 0;
  NN_AM_RESERVED(39); NN_AM_RESERVED(40); NN_AM_RESERVED(41);
  NN_AM_RESERVED(42); NN_AM_RESERVED(43); NN_AM_RESERVED(44);
  NN_AM_RESERVED(45);
  virtual Result GetAppletLaunchedHistory(sf::Out<int32_t> pOutCount,
    const sf::OutArray<applet::AppletId>& outAppletIds) = 0;
  NN_AM_RESERVED(47); NN_AM_RESERVED(48); NN_AM_RESERVED(49);
  virtual Result ActivateMigrationService() = 0;
  virtual Result DeactivateMigrationService() = 0;
  virtual Result RestrictPowerOperationForSecureLaunchMode() = 0;
  virtual Result SuppressDisablingSleepTemporarily(TimeSpan duration) = 0;
  virtual Result IsSleepEnabled(sf::Out<bool> pOutIsEnabled) = 0;
  virtual Result IsDisablingSleepSuppressed(sf::Out<bool> pOutIsSuppressed) = 0;
  NN_AM_RESERVED(56); NN_AM_RESERVED(57); NN_AM_RESERVED(58);
  virtual Result BeginUsingCameraResource() = 0;
  virtual Result EndUsingCameraResource() = 0;
  NN_AM_RESERVED(61);
  virtual Result GetLaunchRequiredTick(sf::Out<int64_t> pOutTick) = 0;
};

class ISelfController : public sf::IServiceObject {
 public:
  NN_AM_RESERVED(2); NN_AM_RESERVED(3); NN_AM_RESERVED(4); NN_AM_RESERVED(5);
  NN_AM_RESERVED(6); NN_AM_RESERVED(7); NN_AM_RESERVED(8); NN_AM_RESERVED(9);
  NN_AM_RESERVED(10); NN_AM_RESERVED(11); NN_AM_RESERVED(12);
  NN_AM_RESERVED(13); NN_AM_RESERVED(14); NN_AM_RESERVED(15);
  NN_AM_RESERVED(16); NN_AM_RESERVED(17); NN_AM_RESERVED(18);
  NN_AM_RESERVED(19);
  virtual Result SetDesirableKeyboardLayout(uint32_t layout) = 0;
  NN_AM_RESERVED(21); NN_AM_RESERVED(22); NN_AM_RESERVED(23);
  NN_AM_RESERVED(24); NN_AM_RESERVED(25); NN_AM_RESERVED(26);
  NN_AM_RESERVED(27); NN_AM_RESERVED(28); NN_AM_RESERVED(29);
  NN_AM_RESERVED(30); NN_AM_RESERVED(31); NN_AM_RESERVED(32);
  NN_AM_RESERVED(33);
  virtual Result OverrideAutoSleepTimeAndDimmingTime(int32_t autoSleepTime,
    int32_t autoSleepTimeForMedia, int32_t dimmingTime,
    int32_t dimmingTimeForMedia) = 0;
  virtual Result SetMediaPlaybackState(bool isPlaying) = 0;
  NN_AM_RESERVED(36); NN_AM_RESERVED(37);
  virtual Result SetInputDetectionSourceSet(uint32_t sourceSet) = 0;
  NN_AM_RESERVED(39); NN_AM_RESERVED(40); NN_AM_RESERVED(41);
  NN_AM_RESERVED(42);
  virtual Result IsAutoSleepDisabled(sf::Out<bool> pOutIsDisabled) = 0;
  NN_AM_RESERVED(44); NN_AM_RESERVED(45);
  virtual Result SetInputDetectionPolicy(int32_t policy) = 0;
  NN_AM_RESERVED(47);
  virtual Result SetWirelessPriorityMode(int32_t mode) = 0;
  NN_AM_RESERVED(49); NN_AM_RESERVED(50); NN_AM_RESERVED(51);
  virtual Result SetAlbumUserData(const sf::InBuffer& userData) = 0;
  NN_AM_RESERVED(53); NN_AM_RESERVED(54); NN_AM_RESERVED(55);
  NN_AM_RESERVED(56); NN_AM_RESERVED(57); NN_AM_RESERVED(58);
  NN_AM_RESERVED(59); NN_AM_RESERVED(60); NN_AM_RESERVED(61);
  NN_AM_RESERVED(62); NN_AM_RESERVED(63); NN_AM_RESERVED(64);
  NN_AM_RESERVED(65);
  virtual Result SetRtcScreenSharingAudioEnabled(bool isEnabled) = 0;
  virtual Result SetStreamPlayMirroringAudioEnabled(bool isEnabled) = 0;
};

class IAppletCommonFunctions : public sf::IServiceObject {
 public:
  NN_AM_RESERVED(2); NN_AM_RESERVED(3); NN_AM_RESERVED(4); NN_AM_RESERVED(5);
  NN_AM_RESERVED(6); NN_AM_RESERVED(7); NN_AM_RESERVED(8); NN_AM_RESERVED(9);
  NN_AM_RESERVED(10); NN_AM_RESERVED(11); NN_AM_RESERVED(12);
  NN_AM_RESERVED(13); NN_AM_RESERVED(14); NN_AM_RESERVED(15);
  NN_AM_RESERVED(16); NN_AM_RESERVED(17); NN_AM_RESERVED(18);
  NN_AM_RESERVED(19); NN_AM_RESERVED(20); NN_AM_RESERVED(21);
  NN_AM_RESERVED(22); NN_AM_RESERVED(23); NN_AM_RESERVED(24);
  NN_AM_RESERVED(25); NN_AM_RESERVED(26); NN_AM_RESERVED(27);
  NN_AM_RESERVED(28); NN_AM_RESERVED(29); NN_AM_RESERVED(30);
  NN_AM_RESERVED(31); NN_AM_RESERVED(32); NN_AM_RESERVED(33);
  NN_AM_RESERVED(34); NN_AM_RESERVED(35); NN_AM_RESERVED(36);
  NN_AM_RESERVED(37); NN_AM_RESERVED(38); NN_AM_RESERVED(39);
  NN_AM_RESERVED(40); NN_AM_RESERVED(41); NN_AM_RESERVED(42);
  NN_AM_RESERVED(43); NN_AM_RESERVED(44); NN_AM_RESERVED(45);
  NN_AM_RESERVED(46); NN_AM_RESERVED(47); NN_AM_RESERVED(48);
  NN_AM_RESERVED(49); NN_AM_RESERVED(50); NN_AM_RESERVED(51);
  NN_AM_RESERVED(52); NN_AM_RESERVED(53); NN_AM_RESERVED(54);
  NN_AM_RESERVED(55); NN_AM_RESERVED(56); NN_AM_RESERVED(57);
  NN_AM_RESERVED(58); NN_AM_RESERVED(59); NN_AM_RESERVED(60);
  NN_AM_RESERVED(61); NN_AM_RESERVED(62); NN_AM_RESERVED(63);
  virtual Result RequestChatProhibition(bool isProhibited) = 0;
  virtual Result RequestChatExpirationCheckSkip(bool isSkipped) = 0;
};

class IDebugFunctions : public sf::IServiceObject {
 public:
  NN_AM_RESERVED(2); NN_AM_RESERVED(3); NN_AM_RESERVED(4); NN_AM_RESERVED(5);
  NN_AM_RESERVED(6); NN_AM_RESERVED(7); NN_AM_RESERVED(8); NN_AM_RESERVED(9);
  NN_AM_RESERVED(10); NN_AM_RESERVED(11); NN_AM_RESERVED(12);
  NN_AM_RESERVED(13); NN_AM_RESERVED(14); NN_AM_RESERVED(15);
  NN_AM_RESERVED(16); NN_AM_RESERVED(17); NN_AM_RESERVED(18);
  NN_AM_RESERVED(19); NN_AM_RESERVED(20); NN_AM_RESERVED(21);
  NN_AM_RESERVED(22); NN_AM_RESERVED(23); NN_AM_RESERVED(24);
  NN_AM_RESERVED(25); NN_AM_RESERVED(26); NN_AM_RESERVED(27);
  virtual Result LaunchDebugApplet() = 0;
  virtual Result TerminateDebugApplet() = 0;
  virtual Result IsDebugAppletLaunched(sf::Out<bool> pOutIsLaunched) = 0;
};

class IDisplayController : public sf::IServiceObject {
 public:
  NN_AM_RESERVED(2); NN_AM_RESERVED(3); NN_AM_RESERVED(4); NN_AM_RESERVED(5);
  NN_AM_RESERVED(6); NN_AM_RESERVED(7);
  virtual Result TakeScreenShotOfCallerApplet() = 0;
  NN_AM_RESERVED(9); NN_AM_RESERVED(10); NN_AM_RESERVED(11);
  virtual Result TakeScreenShotOfOwnLayer(
    int32_t bufferIndex, bool isScreenShotPermitted) = 0;
  NN_AM_RESERVED(13); NN_AM_RESERVED(14); NN_AM_RESERVED(15);
  NN_AM_RESERVED(16); NN_AM_RESERVED(17); NN_AM_RESERVED(18);
  NN_AM_RESERVED(19); NN_AM_RESERVED(20); NN_AM_RESERVED(21);
  NN_AM_RESERVED(22); NN_AM_RESERVED(23); NN_AM_RESERVED(24);
  NN_AM_RESERVED(25); NN_AM_RESERVED(26); NN_AM_RESERVED(27);
  NN_AM_RESERVED(28); NN_AM_RESERVED(29); NN_AM_RESERVED(30);
  virtual Result TakeScreenShotOfOwnLayerEx(int32_t bufferIndex,
    bool isScreenShotPermitted, bool isImmediate) = 0;
};

#undef NN_AM_RESERVED

// The session objects are kept as opaque am::Interface pointers.
inline ICommonStateGetter* GetCommonStateGetterObject() {
  return reinterpret_cast<ICommonStateGetter*>(GetCommonStateGetter());
}

inline ISelfController* GetSelfControllerObject() {
  return reinterpret_cast<ISelfController*>(GetSelfController());
}

inline IAppletCommonFunctions* GetAppletCommonFunctionsObject() {
  return reinterpret_cast<IAppletCommonFunctions*>(GetAppletCommonFunctions());
}

inline IDebugFunctions* GetDebugFunctionsObject() {
  return reinterpret_cast<IDebugFunctions*>(GetDebugFunctions());
}

inline IDisplayController* GetDisplayControllerObject() {
  return reinterpret_cast<IDisplayController*>(GetDisplayController());
}

}
