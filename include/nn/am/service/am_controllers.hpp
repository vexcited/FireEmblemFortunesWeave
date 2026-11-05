#pragma once

#include <stdint.h>

#include "nn/am/interfaces.hpp"
#include "nn/am/service/am_notification.hpp"
#include "nn/am/service/am_storage.hpp"
#include "nn/applet/applet_types.hpp"
#include "nn/oe/oe_types.hpp"
#include "nn/os/time.hpp"
#include "nn/result.hpp"
#include "nn/sf/sf_buffers.hpp"
#include "nn/sf/native_handle.hpp"
#include "nn/sf/shared_pointer.hpp"

namespace nn::pl {

struct VrLaboGoggleViewport;
struct PanelPhysicalSize;
struct PanelResolution;

}

namespace nn::am::service {

class IGpuErrorHandler : public sf::IServiceObject {
 public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result GetManualGpuErrorInfoSize(sf::Out<uint64_t> pOutSize) = 0;
  virtual Result GetManualGpuErrorInfo(sf::Out<uint64_t> pOutSize,
    const sf::OutBuffer& buffer) = 0;
  virtual Result GetManualGpuErrorDetectionSystemEvent(
    sf::Out<sf::NativeHandle> pOutHandle) = 0;
  virtual Result FinishManualGpuErrorHandling() = 0;
};

#define NN_AM_RESERVED(index) virtual void Reserved##index() = 0

class ICommonStateGetter : public sf::IServiceObject {
 public:
  NN_AM_RESERVED(2); NN_AM_RESERVED(3); NN_AM_RESERVED(4);
  virtual Result ReceiveMessage(sf::Out<uint32_t> pOutMessage) = 0;
  NN_AM_RESERVED(6); NN_AM_RESERVED(7); NN_AM_RESERVED(8);
  virtual Result GetOperationMode(sf::Out<uint8_t> pOutMode) = 0;
  virtual Result GetPerformanceMode(sf::Out<int32_t> pOutMode) = 0;
  NN_AM_RESERVED(11); NN_AM_RESERVED(12);
  NN_AM_RESERVED(13); NN_AM_RESERVED(14); NN_AM_RESERVED(15);
  NN_AM_RESERVED(16); NN_AM_RESERVED(17);
  virtual Result GetWakeupCount(sf::Out<int64_t> pOutCount) = 0;
  NN_AM_RESERVED(19); NN_AM_RESERVED(20); NN_AM_RESERVED(21);
  NN_AM_RESERVED(22); NN_AM_RESERVED(23); NN_AM_RESERVED(24);
  virtual Result IsVrModeEnabled(sf::Out<bool> pOutIsEnabled) = 0;
  virtual Result SetVrModeEnabled(bool isEnabled) = 0;
  virtual Result SetLcdBacklightOffEnabled(bool isEnabled) = 0;
  virtual Result BeginVrModeEx() = 0;
  virtual Result EndVrModeEx() = 0;
  NN_AM_RESERVED(30); NN_AM_RESERVED(31);
  virtual Result GetDefaultDisplayResolution(sf::Out<int32_t> pOutWidth,
    sf::Out<int32_t> pOutHeight) = 0;
  virtual Result GetDefaultDisplayResolutionChangeEvent(
    sf::Out<sf::NativeHandle> pOutHandle) = 0;
  virtual Result GetHdcpAuthenticationState(sf::Out<int32_t> pOutState) = 0;
  virtual Result GetHdcpAuthenticationStateChangeEvent(
    sf::Out<sf::NativeHandle> pOutHandle) = 0;
  virtual Result SetTvPowerStateMatchingMode(int32_t mode) = 0;
  NN_AM_RESERVED(37);
  virtual Result SetCpuBoostMode(int32_t mode) = 0;
  NN_AM_RESERVED(39); NN_AM_RESERVED(40);
  virtual Result PerformSystemButtonPressingIfInFocus(int32_t type) = 0;
  NN_AM_RESERVED(42); NN_AM_RESERVED(43); NN_AM_RESERVED(44);
  virtual Result GetGpuErrorHandler(
    const sf::Out<sf::SharedPointer<IGpuErrorHandler>>& pOutHandler) = 0;
  virtual Result GetAppletLaunchedHistory(sf::Out<int32_t> pOutCount,
    const sf::OutArray<applet::AppletId>& outAppletIds) = 0;
  virtual Result EnableStartupLogoDisappearedMessage() = 0;
  NN_AM_RESERVED(48); NN_AM_RESERVED(49);
  virtual Result ActivateMigrationService() = 0;
  virtual Result DeactivateMigrationService() = 0;
  virtual Result RestrictPowerOperationForSecureLaunchMode() = 0;
  virtual Result SuppressDisablingSleepTemporarily(TimeSpan duration) = 0;
  virtual Result IsSleepEnabled(sf::Out<bool> pOutIsEnabled) = 0;
  virtual Result IsDisablingSleepSuppressed(sf::Out<bool> pOutIsSuppressed) = 0;
  virtual Result SetHidInputMagnificationForApplication(
    const oe::LayoutRect& rect) = 0;
  NN_AM_RESERVED(57); NN_AM_RESERVED(58);
  virtual Result BeginUsingCameraResource() = 0;
  virtual Result EndUsingCameraResource() = 0;
  NN_AM_RESERVED(61);
  virtual Result GetLaunchRequiredTick(sf::Out<int64_t> pOutTick) = 0;
  virtual Result BeginVrModeForLadybird() = 0;
  virtual Result EndVrModeForLadybird() = 0;
  virtual Result IsVrModeForLadybird(sf::Out<bool> pOutIsEnabled) = 0;
  virtual Result GetVrLaboGoggleViewport(
    sf::Out<pl::VrLaboGoggleViewport> pOutViewport) = 0;
  virtual Result GetPanelPhysicalSizeForSpecificTitle(
    sf::Out<pl::PanelPhysicalSize> pOutSize) = 0;
  virtual Result GetPanelResolutionForSpecificTitle(
    sf::Out<pl::PanelResolution> pOutResolution) = 0;
  virtual Result SetRtcModeChangedMessageEnabled(bool isEnabled) = 0;
  virtual Result GetCurrentDisplayLayoutRatio(
    sf::Out<oe::DisplayLayoutRatio> pOutRatio) = 0;
};

class ISelfController : public sf::IServiceObject {
 public:
  NN_AM_RESERVED(2); NN_AM_RESERVED(3);
  virtual Result Exit() = 0;
  virtual Result LockExit() = 0;
  virtual Result UnlockExit() = 0;
  NN_AM_RESERVED(7); NN_AM_RESERVED(8); NN_AM_RESERVED(9);
  virtual Result SetScreenShotPermission(int32_t permission) = 0;
  virtual Result SetOperationModeChangedNotification(bool isEnabled) = 0;
  virtual Result SetPerformanceModeChangedNotification(bool isEnabled) = 0;
  virtual Result SetFocusHandlingMode(bool notify, bool background,
    bool suspend) = 0;
  virtual Result SetRestartMessageEnabled(bool isEnabled) = 0;
  NN_AM_RESERVED(15);
  virtual Result SetOutOfFocusSuspendingEnabled(int32_t isEnabled) = 0;
  NN_AM_RESERVED(17);
  virtual Result SetRequiresCaptureButtonShortPressedMessage(
    bool isRequired) = 0;
  virtual Result SetAlbumImageOrientation(int32_t orientation) = 0;
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
  virtual Result SetIdleTimeDetectionExtension(int32_t extension) = 0;
  virtual Result GetIdleTimeDetectionExtension(
    sf::Out<int32_t> pOutExtension) = 0;
  virtual Result SetInputDetectionSourceSet(uint32_t sourceSet) = 0;
  virtual Result ReportUserIsActive() = 0;
  NN_AM_RESERVED(40);
  virtual Result IsIlluminanceAvailable(sf::Out<bool> pOutIsAvailable) = 0;
  virtual Result SetAutoSleepDisabled(bool isDisabled) = 0;
  virtual Result IsAutoSleepDisabled(sf::Out<bool> pOutIsDisabled) = 0;
  NN_AM_RESERVED(44);
  virtual Result GetCurrentIlluminanceEx(sf::Out<float> pOutIlluminance,
    sf::Out<bool> pOutIsOverLimit) = 0;
  virtual Result SetInputDetectionPolicy(int32_t policy) = 0;
  NN_AM_RESERVED(47);
  virtual Result SetWirelessPriorityMode(int32_t mode) = 0;
  NN_AM_RESERVED(49); NN_AM_RESERVED(50);
  virtual Result SetAlbumImageTakenNotificationEnabled(bool isEnabled) = 0;
  virtual Result SetAlbumUserData(const sf::InBuffer& userData) = 0;
  virtual Result SaveCurrentScreenShot(int32_t reportOption) = 0;
  virtual Result SetRecordVolumeMuted(bool isMuted) = 0;
  NN_AM_RESERVED(55);
  NN_AM_RESERVED(56); NN_AM_RESERVED(57); NN_AM_RESERVED(58);
  NN_AM_RESERVED(59); NN_AM_RESERVED(60); NN_AM_RESERVED(61);
  virtual Result GetGraphicsSupervisor(
    sf::Out<sf::NativeHandle> pOutHandle) = 0;
  virtual Result SetRecordingLayerEnabled(bool isEnabled) = 0;
  virtual Result SetSharingLayerEnabled(bool isEnabled) = 0;
  virtual Result SetCopyrightLayerEnabled(bool isEnabled) = 0;
  virtual Result SetRtcScreenSharingAudioEnabled(bool isEnabled) = 0;
  virtual Result SetStreamPlayMirroringAudioEnabled(bool isEnabled) = 0;
};

class IAppletCommonFunctions : public sf::IServiceObject {
 public:
  NN_AM_RESERVED(2); NN_AM_RESERVED(3); NN_AM_RESERVED(4); NN_AM_RESERVED(5);
  NN_AM_RESERVED(6);
  virtual Result PushToAppletBoundChannel(
    sf::SharedPointer<IStorage> storage) = 0;
  virtual Result PopFromAppletBoundChannel(
    const sf::Out<sf::SharedPointer<IStorage>>& pOutStorage) = 0;
  NN_AM_RESERVED(9);
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
  NN_AM_RESERVED(43);
  virtual Result GetNotificationReceiverService(
    const sf::Out<sf::SharedPointer<INotificationReceiverService>>&
      pOutService) = 0;
  virtual Result GetNotificationSenderService(
    const sf::Out<sf::SharedPointer<INotificationSenderService>>&
      pOutService) = 0;
  NN_AM_RESERVED(46); NN_AM_RESERVED(47); NN_AM_RESERVED(48);
  NN_AM_RESERVED(49); NN_AM_RESERVED(50); NN_AM_RESERVED(51);
  NN_AM_RESERVED(52); NN_AM_RESERVED(53); NN_AM_RESERVED(54);
  NN_AM_RESERVED(55); NN_AM_RESERVED(56); NN_AM_RESERVED(57);
  NN_AM_RESERVED(58); NN_AM_RESERVED(59); NN_AM_RESERVED(60);
  NN_AM_RESERVED(61); NN_AM_RESERVED(62); NN_AM_RESERVED(63);
  virtual Result RequestChatProhibition(bool isProhibited) = 0;
  virtual Result RequestChatExpirationCheckSkip(bool isSkipped) = 0;
  NN_AM_RESERVED(66); NN_AM_RESERVED(67); NN_AM_RESERVED(68);
  NN_AM_RESERVED(69); NN_AM_RESERVED(70); NN_AM_RESERVED(71);
  NN_AM_RESERVED(72); NN_AM_RESERVED(73); NN_AM_RESERVED(74);
  NN_AM_RESERVED(75); NN_AM_RESERVED(76); NN_AM_RESERVED(77);
  virtual Result GetGpuErrorDetectedSystemEvent(
    sf::Out<sf::NativeHandle> pOutHandle) = 0;
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
