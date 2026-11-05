#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/account/account_types.hpp"
#include "nn/album/album_movie_parameter.hpp"
#include "nn/ncm/ncm_ids.hpp"
#include "nn/oe/oe_types.hpp"
#include "nn/os/system_event_class.hpp"
#include "nn/os/time.hpp"
#include "nn/result.hpp"
#include "nn/settings/settings_types.hpp"
#include "nn/span.hpp"
#include "nn/time/time_types.hpp"
#include "nn/util/uuid.hpp"

namespace nn::vi {

struct Layer;
struct Display;
struct LayerCreationSettings;

}

namespace nn::apm {

enum PerformanceMode : int32_t {};
enum PerformanceConfiguration : int32_t {};

}

namespace nn::oe {

void SetAudioOutputPolicy(AudioOutputPolicy policy);
void BeginBlockingHomeButtonShortPressed(TimeSpan duration);
void BeginBlockingHomeButtonShortPressed();
void EndBlockingHomeButtonShortPressed();
void BeginBlockingHomeButton();
void EndBlockingHomeButton();
void FinishStartupLogo();
void EnableStartupLogoDisappearedMessage();
void NotifyRunningForTest();
void BeginHandlingCaptureButtonShortPressed();
void EndHandlingCaptureButtonShortPressed();
void RequestToRelaunchApplication();
void SetWirelessPriorityMode(WirelessPriorityMode mode);
void GetLaunchStorageInfoForDebug(LaunchStorageInfoForDebug* pOutInfo);
void EnableAllThreadDumpOnCrashForDebug(bool isEnabled);
void GetFirmwareVersionForDebug(FirmwareVersionForDebug* pOutVersion);
void GetDefaultDisplayResolution(int* pOutWidth, int* pOutHeight);
void GetDefaultDisplayResolutionChangeEvent(os::SystemEvent* pOutEvent);
HdcpAuthenticationState GetHdcpAuthenticationState();
void GetHdcpAuthenticationStateChangeEvent(os::SystemEvent* pOutEvent);
void ActivateHdcpAuthentication();
void DeactivateHdcpAuthentication();
void SetUserInactivityDetectionTimeExtended(bool isExtended);
void SetUserInactivityDetectionTimeExtendedUnsafe(bool isExtended);
bool IsUserInactivityDetectionTimeExtended();
UserInactivityDetectionTimeExtensionMode
GetUserInactivityDetectionTimeExtensionMode();
void ReportUserIsActive();
void ReportUserIsActiveInternal();
void BeginMediaPlaybackSection();
void EndMediaPlaybackSection();
void BeginAutoSleepDisabledSection();
void EndAutoSleepDisabledSection();
bool IsAutoSleepDisabled();
bool IsInStoreDemoModeEnabled();
void SetExpectedVolumeBalance(float volume, float expectedVolume);
void GetExpectedVolumeBalance(float* pOutVolume, float* pOutExpectedVolume);
void SetExpectedThemeColor(ThemeColorType color);
void SetResumeNotificationEnabled(bool isEnabled);
void SetOperationModeChangedNotificationEnabled(bool isEnabled);
void SetPerformanceModeChangedNotificationEnabled(bool isEnabled);
PerformanceMode GetPerformanceMode();
void SetCpuBoostMode(CpuBoostMode mode);
bool TryPopLaunchParameter(size_t* pOutSize, void* buffer, size_t size);
void EnterExitRequestHandlingSection();
void LeaveExitRequestHandlingSection();
[[noreturn]] void ExitApplication();
[[noreturn]] void ExitApplicationAndGoBackToInStoreDemoMenu();
settings::LanguageCode GetDesiredLanguage();
void GetDisplayVersion(DisplayVersion* pOutVersion);
settings::system::RegionCode GetRegionCode();
void GetDeviceNickName(DeviceNickName* pOutName);
void RequestExitAndLaunchLhub(const account::Uid& uid, const void* buffer,
  size_t size);
bool IsLanguageSelectionLimited();
void GetPseudoDeviceId(util::Uuid* pOutId);
bool IsGamePlayRecordingSupported();
void RequestToSaveRecordingForDebug();
void MuteRecording();
void UnmuteRecording();
void SetAlbumImageOrientation(album::ImageOrientation orientation);
void SetScreenShotImageOrientation(album::ImageOrientation orientation);
void EnableAlbumImageTakenNotification();
void DisableAlbumImageTakenNotification();
void SetAlternativeScreenRecordingLayerEnabled(bool isEnabled);
void CreateAlternativeScreenRecordingLayer(vi::Layer** pOutLayer,
  vi::Display* display, const vi::LayerCreationSettings* settings);
void SwitchLcdBacklightOff();
void SwitchLcdBacklightOn();
void EnableCrashReport();
void DisableCrashReport();
void SetHidInputMagnificationForApplication(const LayoutRect& rect);
int GetServerEnvironmentType();
void SendServerMaintenanceOverlayNotification(time::PosixTime startTime);
void SendServerMaintenanceOverlayNotification(time::PosixTime startTime,
  time::PosixTime endTime);
void SetTvPowerStateMatchingMode(TvPowerStateMatchingMode mode);
void PerformHomeButtonShortPressing();
void PerformHomeButtonLongPressing();
void PerformCaptureButtonShortPressing();
void PerformCaptureButtonLongPressing();
void SetDelayTimeToAbortOnGpuError(TimeSpan delay);
Result GetLaunchRequiredVersion(LaunchRequiredVersion* pOutVersion,
  ApplicationId applicationId);
Result UpgradeLaunchRequiredVersion(ApplicationId applicationId,
  const LaunchRequiredVersion& version);
void InitializeCopyrightFrameBuffer(void* buffer, size_t size);
void SetCopyrightImage(const void* image, size_t size, int x, int y,
  int width, int height, WindowOriginMode originMode);
void SetCopyrightVisibility(bool isVisible);
void FinalizeCopyrightFrameBufferForDebug();
GraphicsScale GetCurrentGraphicsScale();
void SetGraphicsScaleChangedNotificationEnabled(bool isEnabled);
void BeginPresentPhotographedContents();
void EndPresentPhotographedContents();
GraphicsScalingParameters GetGraphicsScalingParameters();
void SetSupportingGraphicsScalingParametersForDebug(
  Span<const GraphicsScalingParameters> parameters);
bool SetGpuQuotaForDebug(uint32_t quota);
void ClearGpuQuotaForDebug();
bool SetScreenRatioForDebug(uint32_t width, uint32_t height);
void ClearScreenRatioForDebug();
void SetPerformanceConfiguration(int configuration);
void SetPerformanceConfiguration(PerformanceMode mode, int configuration);
bool IsCpuOverclockEnabled();
void SetCpuOverclockEnabled(bool isEnabled);
[[noreturn]] void RequestToShutdown();
[[noreturn]] void RequestToReboot();
void RequestToSleep();
void SetRtcModeChangedMessageEnabled(bool isEnabled);
DisplayLayoutRatio GetCurrentDisplayLayoutRatio();
void RestartGamePlayRecording();
void EnableRecording();
void PauseGamePlayRecording();
void DisableRecording();
void DisableScreenShot();
void EnableScreenShot();
void RestrictPowerOperationForSecureLaunchMode();
void SuppressDisablingSleepTemporarily(TimeSpan duration);
bool IsSleepEnabled();
bool IsDisablingSleepSuppressed();
int GetPreviousProgramIndex();
bool IsTensorRtSupported();
void SetGraphicsTargetFrameRate(int frameRate);
void SetGraphicsTargetFrameRateAuto();
Result QueryApplicationGpuTimeSpan(TimeSpan* pOutTimeSpan, uint64_t begin,
  uint64_t end);
void SetFocusHandlingModeForDebug(bool notify, bool background, bool suspend,
  bool isOutOfFocusSuspendingEnabled);
void EnableGamePlayRecording(void* buffer, size_t size);
Result SaveGamePlayRecordingForDebug(TimeSpan timeout);
[[noreturn]] void RestartProgram(const void* argument, size_t size);
[[noreturn]] void ExecuteProgram(int programIndex, const void* argument,
  size_t size);

namespace detail {

void ApmFinalize();
bool ApmCheckPerformanceList(apm::PerformanceMode mode,
  apm::PerformanceConfiguration configuration);
void SetScreenShotEnabled(bool isEnabled);
void SetContinuousRecordingEnabled(bool isEnabled);
void SetMovieMakerRecordingEnabled(bool isEnabled);

}
}
