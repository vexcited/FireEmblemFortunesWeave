#include "nn/oe/oe_api.hpp"

#include <mutex>
#include <utility>

#include "nn/am/service/am_application.hpp"
#include "nn/am/service/am_controllers.hpp"
#include "nn/applet/applet_api.hpp"
#include "nn/applet/applet_application.hpp"
#include "nn/diag/diag_abort.hpp"
#include "nn/gs/gs_frame_length.hpp"
#include "nn/os/sdk_mutex.hpp"
#include "nn/os/sleep_thread.hpp"
#include "nn/oe/initialization.hpp"
#include "nn/os/time.hpp"
#include "nn/os/transfer_memory.hpp"
#include "nn/settings/settings_api.hpp"
#include "nn/vi/vi_recording.hpp"

namespace nn::detail {

[[noreturn]] void UnexpectedDefaultImpl();

}

namespace nn::settings::detail {

Result GetFirmwareVersionForDebug(oe::FirmwareVersionForDebug* pOutValue);

}

namespace nn::settings::system {

void GetRegionCode(RegionCode* pOutValue);

}

namespace nn::nsd {

int GetApplicationServerEnvironmentType();

}

namespace nn::oe {

namespace {

using am::service::GetApplicationFunctionsObject;
using am::service::GetAudioControllerObject;
using am::service::GetCommonStateGetterObject;
using am::service::GetGraphicsScalingParametersFunctionsObject;
using am::service::GetPerformanceFunctionsObject;
using am::service::GetSelfControllerObject;

struct CounterState {
  os::SdkMutex mutex;
  uint64_t count;
};

struct ExitRequestState {
  os::SdkMutex mutex;
  int count;
};

CounterState g_MediaPlayback;
ExitRequestState g_ExitRequest;

[[noreturn, gnu::always_inline]] inline void SleepForever() {
  for (;;) {
    os::SleepThread(TimeSpan{86400000000000});
  }
}

int ToLaunchStorage(uint8_t storageId) {
  switch (storageId) {
    case 0:
      return 0;
    case 1:
      return 1;
    case 2:
      return 2;
    case 4:
      return 4;
    case 5:
      return 5;
    default:
      return -1;
  }
}

}

void SetAudioOutputPolicy(AudioOutputPolicy policy) {
  switch (policy) {
    case AudioOutputPolicy_Default:
      NN_ABORT_UNLESS_RESULT_SUCCESS(
        GetApplicationFunctionsObject()->SetAudioOutputPolicy(0));
      break;
    case AudioOutputPolicy_Mute:
      NN_ABORT_UNLESS_RESULT_SUCCESS(
        GetApplicationFunctionsObject()->SetAudioOutputPolicy(1));
      break;
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
}

void BeginBlockingHomeButtonShortPressed(TimeSpan duration) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetApplicationFunctionsObject()->BeginBlockingHomeButtonShortAndLongPressed(
      duration));
}

void BeginBlockingHomeButtonShortPressed() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetApplicationFunctionsObject()->BeginBlockingHomeButtonShortAndLongPressed(
      TimeSpan{0}));
}

void EndBlockingHomeButtonShortPressed() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetApplicationFunctionsObject()
      ->EndBlockingHomeButtonShortAndLongPressed());
}

void BeginBlockingHomeButton() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetApplicationFunctionsObject()->BeginBlockingHomeButton(TimeSpan{0}));
}

void EndBlockingHomeButton() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetApplicationFunctionsObject()->EndBlockingHomeButton());
}

void FinishStartupLogo() {
  bool isRunning = false;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetApplicationFunctionsObject()->NotifyRunning(sf::Out<bool>(&isRunning)));
}

void EnableStartupLogoDisappearedMessage() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetCommonStateGetterObject()->EnableStartupLogoDisappearedMessage());
}

void NotifyRunningForTest() {
  bool isRunning = false;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetApplicationFunctionsObject()->NotifyRunning(sf::Out<bool>(&isRunning)));
}

void BeginHandlingCaptureButtonShortPressed() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetSelfControllerObject()->SetRequiresCaptureButtonShortPressedMessage(
      true));
}

void EndHandlingCaptureButtonShortPressed() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetSelfControllerObject()->SetRequiresCaptureButtonShortPressedMessage(
      false));
}

void RequestToRelaunchApplication() {
  applet::RequestToRelaunchApplication(applet::StorageHandle{nullptr});
}

void SetWirelessPriorityMode(WirelessPriorityMode mode) {
  switch (mode) {
    case WirelessPriorityMode_Default:
      applet::SetWirelessPriorityMode(applet::WirelessPriorityMode_Default);
      break;
    case WirelessPriorityMode_OptimizedForWlan:
      applet::SetWirelessPriorityMode(
        applet::WirelessPriorityMode_OptimizedForWlan);
      break;
    default:
      NN_ABORT_UNLESS(false);
  }
}

void GetLaunchStorageInfoForDebug(LaunchStorageInfoForDebug* pOutInfo) {
  uint8_t launchStorage = 0;
  uint8_t patchStorage = 0;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetApplicationFunctionsObject()->GetLaunchStorageInfoForDebug(
      sf::Out<uint8_t>(&launchStorage), sf::Out<uint8_t>(&patchStorage)));
  NN_ABORT_UNLESS(launchStorage != 0);
  pOutInfo->launchStorage = ToLaunchStorage(launchStorage);
  pOutInfo->patchStorage = ToLaunchStorage(patchStorage);
}

void EnableAllThreadDumpOnCrashForDebug(bool isEnabled) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetApplicationFunctionsObject()->EnableApplicationAllThreadDumpOnCrash(
      isEnabled));
}

void GetFirmwareVersionForDebug(FirmwareVersionForDebug* pOutVersion) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    settings::detail::GetFirmwareVersionForDebug(pOutVersion));
}

void GetDefaultDisplayResolution(int* pOutWidth, int* pOutHeight) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetCommonStateGetterObject()->GetDefaultDisplayResolution(
      sf::Out<int>(pOutWidth), sf::Out<int>(pOutHeight)));
}

void GetDefaultDisplayResolutionChangeEvent(os::SystemEvent* pOutEvent) {
  sf::NativeHandle handle;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetCommonStateGetterObject()->GetDefaultDisplayResolutionChangeEvent(
      sf::Out<sf::NativeHandle>(&handle)));
  pOutEvent->AttachReadableHandle(handle.GetOsHandle(), handle.IsManaged(),
    os::EventClearMode_AutoClear);
  handle.Detach();
}

HdcpAuthenticationState GetHdcpAuthenticationState() {
  int state = 0;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetCommonStateGetterObject()->GetHdcpAuthenticationState(
      sf::Out<int>(&state)));
  return static_cast<HdcpAuthenticationState>(state);
}

void GetHdcpAuthenticationStateChangeEvent(os::SystemEvent* pOutEvent) {
  sf::NativeHandle handle;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetCommonStateGetterObject()->GetHdcpAuthenticationStateChangeEvent(
      sf::Out<sf::NativeHandle>(&handle)));
  pOutEvent->AttachReadableHandle(handle.GetOsHandle(), handle.IsManaged(),
    os::EventClearMode_AutoClear);
  handle.Detach();
}

void ActivateHdcpAuthentication() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetApplicationFunctionsObject()->SetHdcpAuthenticationActivated(true));
}

void DeactivateHdcpAuthentication() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetApplicationFunctionsObject()->SetHdcpAuthenticationActivated(false));
}

void SetUserInactivityDetectionTimeExtended(bool isExtended) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetSelfControllerObject()->SetIdleTimeDetectionExtension(isExtended));
}

void SetUserInactivityDetectionTimeExtendedUnsafe(bool isExtended) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetSelfControllerObject()->SetIdleTimeDetectionExtension(
      isExtended ? 2 : 0));
}

bool IsUserInactivityDetectionTimeExtended() {
  int extension = 0;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetSelfControllerObject()->GetIdleTimeDetectionExtension(
      sf::Out<int>(&extension)));
  return extension != 0;
}

UserInactivityDetectionTimeExtensionMode
GetUserInactivityDetectionTimeExtensionMode() {
  int extension = 0;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetSelfControllerObject()->GetIdleTimeDetectionExtension(
      sf::Out<int>(&extension)));

  if (static_cast<unsigned>(extension) >= 3) {
    nn::detail::UnexpectedDefaultImpl();
  }

  return static_cast<UserInactivityDetectionTimeExtensionMode>(extension);
}

void ReportUserIsActive() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetSelfControllerObject()->ReportUserIsActive());
}

void ReportUserIsActiveInternal() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetSelfControllerObject()->ReportUserIsActive());
}

void BeginMediaPlaybackSection() {
  std::lock_guard<os::SdkMutex> lock(g_MediaPlayback.mutex);

  if (g_MediaPlayback.count == 0) {
    NN_ABORT_UNLESS_RESULT_SUCCESS(
      GetApplicationFunctionsObject()->SetMediaPlaybackStateForApplication(
        true));
  }

  ++g_MediaPlayback.count;
}

void EndMediaPlaybackSection() {
  std::lock_guard<os::SdkMutex> lock(g_MediaPlayback.mutex);

  if (g_MediaPlayback.count != 0 && --g_MediaPlayback.count == 0) {
    NN_ABORT_UNLESS_RESULT_SUCCESS(
      GetApplicationFunctionsObject()->SetMediaPlaybackStateForApplication(
        false));
  }
}

void BeginAutoSleepDisabledSection() {
  applet::BeginAutoSleepDisabledSection();
}

void EndAutoSleepDisabledSection() {
  applet::EndAutoSleepDisabledSection();
}

bool IsAutoSleepDisabled() {
  return applet::IsAutoSleepDisabled();
}

bool IsInStoreDemoModeEnabled() {
  return settings::GetQuestFlag();
}

void SetExpectedVolumeBalance(float volume, float expectedVolume) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetAudioControllerObject()->SetExpectedMasterVolume(volume,
      expectedVolume));
}

void GetExpectedVolumeBalance(float* pOutVolume, float* pOutExpectedVolume) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetAudioControllerObject()->GetMainAppletExpectedMasterVolume(
      sf::Out<float>(pOutVolume)));
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetAudioControllerObject()->GetLibraryAppletExpectedMasterVolume(
      sf::Out<float>(pOutExpectedVolume)));
}

void SetExpectedThemeColor(ThemeColorType color) {
  NN_ABORT_UNLESS(color < 4);
  applet::SetExpectedThemeColorForSystem(
    static_cast<applet::ThemeColorType>(color));
}

void SetResumeNotificationEnabled(bool isEnabled) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetSelfControllerObject()->SetRestartMessageEnabled(isEnabled));
}

void SetOperationModeChangedNotificationEnabled(bool isEnabled) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetSelfControllerObject()->SetOperationModeChangedNotification(
      isEnabled));
}

void SetPerformanceModeChangedNotificationEnabled(bool isEnabled) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetSelfControllerObject()->SetPerformanceModeChangedNotification(
      isEnabled));
}

PerformanceMode GetPerformanceMode() {
  int mode = 0;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetCommonStateGetterObject()->GetPerformanceMode(sf::Out<int>(&mode)));
  return static_cast<PerformanceMode>(mode);
}

void SetCpuBoostMode(CpuBoostMode mode) {
  switch (mode) {
    case CpuBoostMode_Disabled:
      applet::SetCpuBoostMode(0);
      break;
    case CpuBoostMode_Boost:
      applet::SetCpuBoostMode(2);
      break;
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
}

bool TryPopLaunchParameter(size_t* pOutSize, void* buffer, size_t size) {
  applet::StorageHandle storage = {};
  bool isPopped = applet::TryPopFromApplicationParameterChannel(&storage,
    applet::LaunchParameterKind_User);

  if (isPopped) {
    size_t storageSize = applet::GetStorageSize(storage);
    size_t readSize = size < storageSize ? size : storageSize;

    if (readSize != 0) {
      NN_ABORT_UNLESS_RESULT_SUCCESS(
        applet::ReadFromStorage(storage, 0, buffer, readSize));
    }

    *pOutSize = storageSize;
    applet::ReleaseStorage(storage);
  }

  return isPopped;
}

void EnterExitRequestHandlingSection() {
  std::lock_guard<os::SdkMutex> lock(g_ExitRequest.mutex);

  if (g_ExitRequest.count == 0) {
    NN_ABORT_UNLESS_RESULT_SUCCESS(GetSelfControllerObject()->LockExit());
  }

  ++g_ExitRequest.count;
}

void LeaveExitRequestHandlingSection() {
  std::lock_guard<os::SdkMutex> lock(g_ExitRequest.mutex);

  if (--g_ExitRequest.count == 0) {
    NN_ABORT_UNLESS_RESULT_SUCCESS(GetSelfControllerObject()->UnlockExit());
  }
}

void ExitApplication() {
  g_ExitRequest.mutex.lock();
  NN_ABORT_UNLESS_RESULT_SUCCESS(GetSelfControllerObject()->Exit());
  SleepForever();
}

void ExitApplicationAndGoBackToInStoreDemoMenu() {
  NN_ABORT_UNLESS(IsInStoreDemoModeEnabled());
  g_ExitRequest.mutex.lock();

  if (g_ExitRequest.count > 0) {
    g_ExitRequest.count = 0;
    NN_ABORT_UNLESS_RESULT_SUCCESS(GetSelfControllerObject()->UnlockExit());
  }

  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetApplicationFunctionsObject()->ExitAndGoBackToInStoreDemoMenu());
  SleepForever();
}

settings::LanguageCode GetDesiredLanguage() {
  settings::LanguageCode language = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetApplicationFunctionsObject()->GetDesiredLanguage(
      sf::Out<settings::LanguageCode>(&language)));
  return language;
}

void GetDisplayVersion(DisplayVersion* pOutVersion) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetApplicationFunctionsObject()->GetDisplayVersion(
      sf::Out<DisplayVersion>(pOutVersion)));
}

settings::system::RegionCode GetRegionCode() {
  settings::system::RegionCode code = {};
  settings::system::GetRegionCode(&code);
  return code;
}

void GetDeviceNickName(DeviceNickName* pOutName) {
  settings::system::GetDeviceNickName(
    reinterpret_cast<settings::system::DeviceNickName*>(pOutName));
}

void RequestExitAndLaunchLhub(const account::Uid& uid, const void* buffer,
  size_t size) {
  applet::RequestExitApplicationAndTryPopMessage(
    applet::RequestMessageType_Lhub, uid, buffer, size);
}

bool IsLanguageSelectionLimited() {
  bool isLimited = false;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetApplicationFunctionsObject()->IsLanguageSelectionLimited(
      sf::Out<bool>(&isLimited)));
  return isLimited;
}

void GetPseudoDeviceId(util::Uuid* pOutId) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetApplicationFunctionsObject()->GetPseudoDeviceId(
      sf::Out<util::Uuid>(pOutId)));
}

bool IsGamePlayRecordingSupported() {
  bool isSupported = false;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetApplicationFunctionsObject()->IsGamePlayRecordingSupported(
      sf::Out<bool>(&isSupported)));
  return isSupported;
}

void RequestToSaveRecordingForDebug() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetApplicationFunctionsObject()->RequestFlushGamePlayingMovieForDebug());
}

void MuteRecording() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetSelfControllerObject()->SetRecordVolumeMuted(true));
}

void UnmuteRecording() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetSelfControllerObject()->SetRecordVolumeMuted(false));
}

void SetAlbumImageOrientation(album::ImageOrientation orientation) {
  Result result =
    GetSelfControllerObject()->SetAlbumImageOrientation(orientation);

  if (result.IsFailure() && result.GetInnerValueForDebug() != 0x3f680) {
    diag::detail::AbortImpl(&result);
  }
}

void SetScreenShotImageOrientation(album::ImageOrientation orientation) {
  Result result =
    GetSelfControllerObject()->SetAlbumImageOrientation(orientation);

  if (result.IsFailure() && result.GetInnerValueForDebug() != 0x3f680) {
    diag::detail::AbortImpl(&result);
  }
}

void EnableAlbumImageTakenNotification() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetSelfControllerObject()->SetAlbumImageTakenNotificationEnabled(true));
}

void DisableAlbumImageTakenNotification() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetSelfControllerObject()->SetAlbumImageTakenNotificationEnabled(false));
}

void SetAlternativeScreenRecordingLayerEnabled(bool isEnabled) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(vi::SetRecordingLayerEnabled(isEnabled));
}

void CreateAlternativeScreenRecordingLayer(vi::Layer** pOutLayer,
  vi::Display* display, const vi::LayerCreationSettings* settings) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    vi::CreateRecordingLayer(pOutLayer, display, settings));
}

void SwitchLcdBacklightOff() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetCommonStateGetterObject()->SetLcdBacklightOffEnabled(true));
}

void SwitchLcdBacklightOn() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetCommonStateGetterObject()->SetLcdBacklightOffEnabled(false));
}

void EnableCrashReport() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetApplicationFunctionsObject()->SetCrashReportEnabled(true));
}

void DisableCrashReport() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetApplicationFunctionsObject()->SetCrashReportEnabled(false));
}

void SetHidInputMagnificationForApplication(const LayoutRect& rect) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetCommonStateGetterObject()->SetHidInputMagnificationForApplication(
      rect));
}

int GetServerEnvironmentType() {
  return nsd::GetApplicationServerEnvironmentType();
}

void SendServerMaintenanceOverlayNotification(time::PosixTime startTime) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetApplicationFunctionsObject()->SendServerMaintenanceOverlayNotification(
      startTime, time::PosixTime{0}));
}

void SendServerMaintenanceOverlayNotification(time::PosixTime startTime,
  time::PosixTime endTime) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetApplicationFunctionsObject()->SendServerMaintenanceOverlayNotification(
      startTime, endTime));
}

void SetTvPowerStateMatchingMode(TvPowerStateMatchingMode mode) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetCommonStateGetterObject()->SetTvPowerStateMatchingMode(mode));
}

void PerformHomeButtonShortPressing() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetCommonStateGetterObject()->PerformSystemButtonPressingIfInFocus(1));
}

void PerformHomeButtonLongPressing() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetCommonStateGetterObject()->PerformSystemButtonPressingIfInFocus(2));
}

void PerformCaptureButtonShortPressing() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetCommonStateGetterObject()->PerformSystemButtonPressingIfInFocus(6));
}

void PerformCaptureButtonLongPressing() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetCommonStateGetterObject()->PerformSystemButtonPressingIfInFocus(7));
}

void SetDelayTimeToAbortOnGpuError(TimeSpan delay) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetApplicationFunctionsObject()->SetDelayTimeToAbortOnGpuError(delay));
}

Result GetLaunchRequiredVersion(LaunchRequiredVersion* pOutVersion,
  ApplicationId applicationId) {
  return GetApplicationFunctionsObject()->GetLaunchRequiredVersion(
    sf::Out<LaunchRequiredVersion>(pOutVersion), applicationId, false);
}

Result UpgradeLaunchRequiredVersion(ApplicationId applicationId,
  const LaunchRequiredVersion& version) {
  return GetApplicationFunctionsObject()->UpgradeLaunchRequiredVersion(
    applicationId, version, false);
}

void InitializeCopyrightFrameBuffer(void* buffer, size_t size) {
  vi::InitializeCopyrightFramebuffer(buffer, size);
  vi::SetCopyrightCompositionEnabled(true);
}

void SetCopyrightImage(const void* image, size_t size, int x, int y,
  int width, int height, WindowOriginMode originMode) {
  vi::WriteToCopyrightFramebuffer(image, size, x, y, width, height,
    static_cast<vi::OriginMode>(originMode == WindowOriginMode_LowerLeft));
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    am::SetCopyrightImageInfo(x, y, width, height, originMode));
}

void SetCopyrightVisibility(bool isVisible) {
  vi::SetCopyrightCompositionEnabled(isVisible);
}

void FinalizeCopyrightFrameBufferForDebug() {
  vi::FinalizeCopyrightFramebuffer();
}

GraphicsScale GetCurrentGraphicsScale() {
  GraphicsScalingParameters parameters = GetGraphicsScalingParameters();

  switch (parameters.scale) {
    case 10:
      return GraphicsScale_Small;
    case 20:
      return GraphicsScale_Medium;
    case 30:
      return GraphicsScale_Large;
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
}

void SetGraphicsScaleChangedNotificationEnabled(bool isEnabled) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetGraphicsScalingParametersFunctionsObject()
      ->SetGraphicsScaleChangedNotificationEnabled(isEnabled));
}

void BeginPresentPhotographedContents() {
  vi::sdk::ChangeBufferContent(vi::BufferContentBits_Photographed, true);
}

void EndPresentPhotographedContents() {
  vi::sdk::ChangeBufferContent(vi::BufferContentBits_Photographed, false);
}

GraphicsScalingParameters GetGraphicsScalingParameters() {
  GraphicsScalingParameters parameters = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetGraphicsScalingParametersFunctionsObject()
      ->GetGraphicsScalingParameters(
        sf::Out<GraphicsScalingParameters>(&parameters)));
  return parameters;
}

void SetSupportingGraphicsScalingParametersForDebug(
  Span<const GraphicsScalingParameters> parameters) {
  sf::InArray<GraphicsScalingParameters> array(parameters.data,
    parameters.size);
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetGraphicsScalingParametersFunctionsObject()
      ->SetSupportingGraphicsScalingParametersForDebug(array));
}

bool SetGpuQuotaForDebug(uint32_t quota) {
  bool isSet = false;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetGraphicsScalingParametersFunctionsObject()->SetGpuQuotaForDebug(
      sf::Out<bool>(&isSet), quota));
  return isSet;
}

void ClearGpuQuotaForDebug() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetGraphicsScalingParametersFunctionsObject()->ClearGpuQuotaForDebug());
}

bool SetScreenRatioForDebug(uint32_t width, uint32_t height) {
  bool isSet = false;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetGraphicsScalingParametersFunctionsObject()->SetScreenRatioForDebug(
      sf::Out<bool>(&isSet), width, height));
  return isSet;
}

void ClearScreenRatioForDebug() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetGraphicsScalingParametersFunctionsObject()->ClearScreenRatioForDebug());
}

void SetPerformanceConfiguration(int) {}

void SetPerformanceConfiguration(PerformanceMode, int) {}

bool IsCpuOverclockEnabled() {
  bool isEnabled = false;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetPerformanceFunctionsObject()->IsCpuOverclockEnabled(
      sf::Out<bool>(&isEnabled)));
  return isEnabled;
}

void SetCpuOverclockEnabled(bool isEnabled) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetPerformanceFunctionsObject()->SetCpuOverclockEnabled(isEnabled));
}

void RequestToShutdown() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetApplicationFunctionsObject()->RequestToShutdown());
  SleepForever();
}

void RequestToReboot() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetApplicationFunctionsObject()->RequestToReboot());
  SleepForever();
}

void RequestToSleep() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetApplicationFunctionsObject()->RequestToSleep());
}

void SetRtcModeChangedMessageEnabled(bool isEnabled) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetCommonStateGetterObject()->SetRtcModeChangedMessageEnabled(isEnabled));
}

DisplayLayoutRatio GetCurrentDisplayLayoutRatio() {
  DisplayLayoutRatio ratio = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetCommonStateGetterObject()->GetCurrentDisplayLayoutRatio(
      sf::Out<DisplayLayoutRatio>(&ratio)));
  return ratio;
}

void RestartGamePlayRecording() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetApplicationFunctionsObject()->SetGamePlayRecordingState(1));
  detail::SetContinuousRecordingEnabled(true);
}

void EnableRecording() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetApplicationFunctionsObject()->SetGamePlayRecordingState(1));
  detail::SetContinuousRecordingEnabled(true);
}

void PauseGamePlayRecording() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetApplicationFunctionsObject()->SetGamePlayRecordingState(0));
  detail::SetContinuousRecordingEnabled(false);
}

void DisableRecording() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetApplicationFunctionsObject()->SetGamePlayRecordingState(0));
  detail::SetContinuousRecordingEnabled(false);
}

void DisableScreenShot() {
  Result result = GetSelfControllerObject()->SetScreenShotPermission(2);

  if (result.IsSuccess()) {
    detail::SetScreenShotEnabled(false);
  }
  else if (result.GetInnerValueForDebug() != 0x3f680) {
    diag::detail::AbortImpl(&result);
  }
}

void EnableScreenShot() {
  Result result = GetSelfControllerObject()->SetScreenShotPermission(1);

  if (result.IsSuccess()) {
    detail::SetScreenShotEnabled(true);
  }
  else if (result.GetInnerValueForDebug() != 0x3f680) {
    diag::detail::AbortImpl(&result);
  }
}

void RestrictPowerOperationForSecureLaunchMode() {
  applet::RestrictPowerOperationForSecureLaunchMode();
}

void SuppressDisablingSleepTemporarily(TimeSpan duration) {
  applet::SuppressDisablingSleepTemporarily(duration);
}

bool IsSleepEnabled() {
  return applet::IsSleepEnabled();
}

bool IsDisablingSleepSuppressed() {
  return applet::IsDisablingSleepSuppressed();
}

int GetPreviousProgramIndex() {
  return applet::GetPreviousProgramIndex();
}

bool IsTensorRtSupported() {
  bool isSupported = true;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetApplicationFunctionsObject()->IsTensorRtSupported(
      sf::Out<bool>(&isSupported)));
  return isSupported;
}

void SetGraphicsTargetFrameRate(int frameRate) {
  if (frameRate >= 120) {
    gs::sdk::SetGraphicsFrameLengthMode(
      gs::sdk::GraphicsFrameLengthMode_120);
  }
  else {
    gs::sdk::SetGraphicsFrameLengthMode(frameRate >= 60
      ? gs::sdk::GraphicsFrameLengthMode_60
      : gs::sdk::GraphicsFrameLengthMode_30);
  }
}

void SetGraphicsTargetFrameRateAuto() {
  gs::sdk::SetGraphicsFrameLengthMode(gs::sdk::GraphicsFrameLengthMode_Auto);
}

Result QueryApplicationGpuTimeSpan(TimeSpan* pOutTimeSpan, uint64_t begin,
  uint64_t end) {
  return gs::sdk::QueryApplicationGpuTimeSpan(pOutTimeSpan, begin, end);
}

void SetFocusHandlingModeForDebug(bool notify, bool background, bool suspend,
  bool isOutOfFocusSuspendingEnabled) {
  detail::FocusMutex.Lock();
  auto* controller = GetSelfControllerObject();
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    controller->SetFocusHandlingMode(notify, background, suspend));
  NN_ABORT_UNLESS_RESULT_SUCCESS(controller->SetOutOfFocusSuspendingEnabled(
    isOutOfFocusSuspendingEnabled));
  detail::FocusMutex.Unlock();
}

void EnableGamePlayRecording(void* buffer, size_t size) {
  {
    os::TransferMemory transferMemory;
    NN_ABORT_UNLESS_RESULT_SUCCESS(os::CreateTransferMemory(
      transferMemory.GetBase(), buffer, size, os::MemoryPermission_None));
    auto* functions = GetApplicationFunctionsObject();
    sf::NativeHandle handle(
      os::DetachTransferMemory(transferMemory.GetBase()), true);
    NN_ABORT_UNLESS_RESULT_SUCCESS(
      functions->InitializeGamePlayRecording(std::move(handle), size));
  }

  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetApplicationFunctionsObject()->SetGamePlayRecordingState(1));
}

Result SaveGamePlayRecordingForDebug(TimeSpan timeout) {
  Result result;
  bool isRetried;

  do {
    sf::NativeHandle handle;
    Result saved = GetApplicationFunctionsObject()
      ->SaveGamePlayRecordingForDebug(sf::Out<sf::NativeHandle>(&handle),
        timeout);

    if (saved.IsSuccess()) {
      os::SystemEvent event(handle.GetOsHandle(), false,
        os::EventClearMode_ManualClear);
      event.Wait();
      isRetried = false;
      result = Result{0};
    }
    else if (saved.GetInnerValueForDebug() == 0x41080) {
      isRetried = false;
      result = Result{0x1676};
    }
    else if (saved.GetInnerValueForDebug() == 0x4d4) {
      os::SleepThread(TimeSpan{100000000});
      isRetried = true;
    }
    else {
      uint32_t description = saved.value >> 9 & 0x1fff;
      bool isIgnored = description - 980 < 15 && (saved.value & 0x1ff) == 128;
      isRetried = false;
      result = isIgnored ? Result{0} : saved;
    }
  } while (isRetried);

  return result;
}

[[noreturn]] void RestartProgram(const void* argument, size_t size) {
  NN_ABORT_UNLESS(size <= 0x1000);
  applet::StorageHandle storage = {};

  if (size != 0) {
    NN_ABORT_UNLESS_RESULT_SUCCESS(applet::CreateStorage(&storage, size));
    NN_ABORT_UNLESS_RESULT_SUCCESS(
      applet::WriteToStorage(storage, 0, argument, size));
  }

  NN_ABORT_UNLESS_RESULT_SUCCESS(applet::RestartProgram(storage));
  SleepForever();
}

[[noreturn]] void ExecuteProgram(int programIndex, const void* argument,
  size_t size) {
  NN_ABORT_UNLESS(static_cast<unsigned>(programIndex) < 256);
  NN_ABORT_UNLESS(size <= 0x1000);
  applet::StorageHandle storage = {};

  if (size != 0) {
    NN_ABORT_UNLESS_RESULT_SUCCESS(applet::CreateStorage(&storage, size));
    NN_ABORT_UNLESS_RESULT_SUCCESS(
      applet::WriteToStorage(storage, 0, argument, size));
  }

  NN_ABORT_UNLESS_RESULT_SUCCESS(
    applet::ExecuteProgram(static_cast<uint8_t>(programIndex), storage));
  SleepForever();
}

namespace detail {

void ApmFinalize() {}

bool ApmCheckPerformanceList(apm::PerformanceMode,
  apm::PerformanceConfiguration) {
  return false;
}

}
}
