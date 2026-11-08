#include "nn/am/service/am_controllers.hpp"
#include "nn/applet/applet_api.hpp"
#include "nn/diag/diag_abort.hpp"
#include "nn/span.hpp"

namespace nn::applet {

enum InputDetectionPolicy : int32_t {};
enum WirelessPriorityMode : int32_t {};

namespace {

using am::service::GetAppletCommonFunctionsObject;
using am::service::GetCommonStateGetterObject;
using am::service::GetDebugFunctionsObject;
using am::service::GetDisplayControllerObject;
using am::service::GetSelfControllerObject;

enum ScreenShotBuffer {
  ScreenShotBuffer_LastApplication,
  ScreenShotBuffer_LastForeground,
  ScreenShotBuffer_CallerApplet,
};

}

os::Tick GetLaunchRequiredTick() {
  int64_t tick = 0;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetCommonStateGetterObject()->GetLaunchRequiredTick(
      sf::Out<int64_t>(&tick)));
  return os::Tick{tick};
}

void SetDesirableKeyboardLayout(uint32_t layout) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetSelfControllerObject()->SetDesirableKeyboardLayout(layout));
}

void BeginVrModeInternal() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetCommonStateGetterObject()->SetVrModeEnabled(true));
}

void EndVrModeInternal() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetCommonStateGetterObject()->SetVrModeEnabled(false));
}

// The channel keeps its own reference, the handle is released once pushed.
void PushToSystemGeneralChannel(StorageHandle storage) {
  am::service::ICommonStateGetter* pGetter = GetCommonStateGetterObject();
  NN_ABORT_UNLESS_RESULT_SUCCESS(pGetter->PushToGeneralChannel(
    sf::SharedPointer<am::service::IStorage>(
      static_cast<am::service::IStorage*>(storage._p), true)));
  ReleaseStorage(storage);
}

void CancelCpuBoostMode() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetCommonStateGetterObject()->CancelCpuBoostMode());
}

void OverrideAutoSleepTimeAndDimmingTime(int autoSleepTime,
  int autoSleepTimeForMedia, int dimmingTime, int dimmingTimeForMedia) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetSelfControllerObject()->OverrideAutoSleepTimeAndDimmingTime(
      autoSleepTime, autoSleepTimeForMedia, dimmingTime,
      dimmingTimeForMedia));
}

void SetMediaPlaybackState(bool isPlaying) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetSelfControllerObject()->SetMediaPlaybackState(isPlaying));
}

void SetInputDetectionSourceSet(uint32_t sourceSet) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetSelfControllerObject()->SetInputDetectionSourceSet(sourceSet));
}

void SetInputDetectionPolicy(InputDetectionPolicy policy) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetSelfControllerObject()->SetInputDetectionPolicy(policy));
}

bool IsAutoSleepDisabled() {
  bool isDisabled = false;
  NN_ABORT_UNLESS_RESULT_SUCCESS(GetSelfControllerObject()->IsAutoSleepDisabled(
    sf::Out<bool>(&isDisabled)));
  return isDisabled;
}

void SetWirelessPriorityMode(WirelessPriorityMode mode) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetSelfControllerObject()->SetWirelessPriorityMode(mode));
}

void SetAlbumUserData(const void* userData, size_t size) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(GetSelfControllerObject()->SetAlbumUserData(
    sf::InBuffer(userData, size)));
}

void RestrictPowerOperationForSecureLaunchMode() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetCommonStateGetterObject()->RestrictPowerOperationForSecureLaunchMode());
}

void SuppressDisablingSleepTemporarily(TimeSpan duration) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetCommonStateGetterObject()->SuppressDisablingSleepTemporarily(duration));
}

bool IsSleepEnabled() {
  bool isEnabled = true;
  NN_ABORT_UNLESS_RESULT_SUCCESS(GetCommonStateGetterObject()->IsSleepEnabled(
    sf::Out<bool>(&isEnabled)));
  return isEnabled;
}

bool IsDisablingSleepSuppressed() {
  bool isSuppressed = true;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetCommonStateGetterObject()->IsDisablingSleepSuppressed(
      sf::Out<bool>(&isSuppressed)));
  return isSuppressed;
}

void SetCpuBoostMode(int mode) {
  // Only the normal mode 0 and the fast load mode 2 are accepted.
  NN_ABORT_UNLESS(mode == 0 || mode == 2);
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetCommonStateGetterObject()->SetCpuBoostMode(mode));
}

void ActivateMigrationService() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetCommonStateGetterObject()->ActivateMigrationService());
}

void DeactivateMigrationService() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetCommonStateGetterObject()->DeactivateMigrationService());
}

int64_t GetWakeupCount() {
  int64_t count = 0;
  NN_ABORT_UNLESS_RESULT_SUCCESS(GetCommonStateGetterObject()->GetWakeupCount(
    sf::Out<int64_t>(&count)));
  return count;
}

void RequestChatProhibition(bool isProhibited) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetAppletCommonFunctionsObject()->RequestChatProhibition(isProhibited));
}

void RequestChatExpirationCheckSkip(bool isSkipped) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetAppletCommonFunctionsObject()->RequestChatExpirationCheckSkip(
      isSkipped));
}

void SetRtcScreenSharingAudioEnabled(bool isEnabled) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetSelfControllerObject()->SetRtcScreenSharingAudioEnabled(isEnabled));
}

void SetStreamPlayMirroringAudioEnabled(bool isEnabled) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetSelfControllerObject()->SetStreamPlayMirroringAudioEnabled(isEnabled));
}

void BeginUsingCameraResource() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetCommonStateGetterObject()->BeginUsingCameraResource());
}

void EndUsingCameraResource() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetCommonStateGetterObject()->EndUsingCameraResource());
}

void LaunchDebugAppletForDebug() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetDebugFunctionsObject()->LaunchDebugApplet());
}

void TerminateDebugAppletForDebug() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetDebugFunctionsObject()->TerminateDebugApplet());
}

bool IsDebugAppletLaunchedForDebug() {
  bool isLaunched = false;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetDebugFunctionsObject()->IsDebugAppletLaunched(
      sf::Out<bool>(&isLaunched)));
  return isLaunched;
}

int64_t GetAppletLaunchedHistory(const Span<AppletId>& appletIds) {
  int32_t count = 0;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetCommonStateGetterObject()->GetAppletLaunchedHistory(
      sf::Out<int32_t>(&count),
      sf::OutArray<AppletId>(appletIds.data, appletIds.size)));
  return count;
}

Result TakeScreenShotOfCallerApplet() {
  return GetDisplayControllerObject()->TakeScreenShotOfCallerApplet();
}

Result TakeScreenShotOfOwnLayerIntoLastApplicationBuffer(
  bool isScreenShotPermitted) {
  return GetDisplayControllerObject()->TakeScreenShotOfOwnLayer(
    ScreenShotBuffer_LastApplication, isScreenShotPermitted);
}

Result TakeScreenShotOfOwnLayerIntoLastForegroundBuffer(
  bool isScreenShotPermitted) {
  return GetDisplayControllerObject()->TakeScreenShotOfOwnLayer(
    ScreenShotBuffer_LastForeground, isScreenShotPermitted);
}

Result TakeScreenShotOfOwnLayerIntoCallerAppletBuffer(
  bool isScreenShotPermitted) {
  return GetDisplayControllerObject()->TakeScreenShotOfOwnLayer(
    ScreenShotBuffer_CallerApplet, isScreenShotPermitted);
}

Result TakeScreenShotOfOwnLayerIntoCallerAppletBufferImmediately(
  bool isScreenShotPermitted) {
  return GetDisplayControllerObject()->TakeScreenShotOfOwnLayerEx(
    ScreenShotBuffer_CallerApplet, isScreenShotPermitted, true);
}

}
