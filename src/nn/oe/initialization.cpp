#include "nn/oe/initialization.hpp"

#include "nn/am/interfaces.hpp"
#include "nn/os/native_handle.hpp"

#include <stddef.h>

namespace nn::os {

Tick GetSystemTick();
void RegisterSystemWorkerHandler(MultiWaitHolderType* holder,
                                 void (*callback)());

}

namespace nn::oe {

namespace detail {

InitializationState EnvironmentInitialization;
InitializationState AppletInitialization;
os::Tick InitialTick;
os::SystemEventType ExitEvent;
os::SystemEventType NotificationEvent;
os::SdkMutexType FocusMutex;
os::SystemEventType GpuErrorEvent;
os::MultiWaitHolderType GpuErrorHolder;
CaptureState Capture;

[[noreturn]] void
AbortResult(const uint32_t*) asm("_ZN2nn4diag6detail9AbortImplEPKNS_6ResultE");
[[noreturn]] void Abort() asm("_ZN2nn4diag6detail9AbortImplEv");
[[noreturn]] void
UnexpectedDefault() asm("_ZN2nn6detail21UnexpectedDefaultImplEv");
[[noreturn]] void ConvertInvalid(uint32_t) asm(
  "_ZN2nn6result6detail18ConvertInvalidImplENS_6ResultE");
void ChangeBufferPermission(uint32_t bits, bool enabled) asm(
  "_ZN2nn3vi23sdk22ChangeBufferPermissionENS0_20BufferPermissionBitsEb");
void SetRtcScreenSharingAudioEnabled(bool enabled) asm(
  "_ZN2nn6applet31SetRtcScreenSharingAudioEnabledEb");

template <size_t Slot, typename... Arguments>
static uint32_t Call(am::Interface* object, Arguments... arguments) {
  using Function = uint32_t (*)(am::Interface*, Arguments...);
  return reinterpret_cast<Function>(object->vtable[Slot])(object, arguments...);
}

static void Check(uint32_t result) {
  if (result) {
    AbortResult(&result);
  }
}

struct EventHandle {
  uint32_t handle;
  uint8_t owned;
  uint8_t reserved[3];
};

static_assert(sizeof(InitializationState) == 8);
static_assert(offsetof(InitializationState, mutex) == 4);
static_assert(sizeof(CaptureState) == 24);
static_assert(offsetof(CaptureState, mutex) == 20);
static_assert(sizeof(EventHandle) == 8);

void ApmInitialize() {
}

void GpuErrorCallback() {
  if (os::TryWaitSystemEvent(&GpuErrorEvent)) {
    Abort();
  }
}

void SetScreenShotAndContinuousRecordingInitiallyEnabled(bool screenshot,
                                                         bool recording) {
  Capture.mutex.Lock();
  uint8_t additional = Capture.additional_permission;
  Capture.screenshot_initial = screenshot;
  Capture.screenshot_current = screenshot;
  Capture.recording_initial = recording;
  Capture.recording_current = recording;
  uint8_t permission = additional | (screenshot & recording);
  ChangeBufferPermission(1, screenshot);
  ChangeBufferPermission(2, permission & 1);
  Capture.mutex.Unlock();
}

}

void Initialize() {
  auto& state = detail::EnvironmentInitialization;
  state.mutex.Lock();

  if (!(state.initialized & 1)) {
    state.initialized = 1;
    detail::ApmInitialize();
    InitializeApplet();
  }

  state.mutex.Unlock();
}

void InitializeApplet() {
  using namespace detail;
  auto& state = AppletInitialization;
  state.mutex.Lock();

  if (!(state.initialized & 1)) {
    state.initialized = 1;

    if (am::InitializeApplicationInterfaces()) {
      Check(Call<0x1e8 / 8>(am::GetCommonStateGetter()));
      InitialTick = os::GetSystemTick();
      EventHandle exit = {};
      Check(Call<0x190 / 8>(am::GetSelfController(), &exit));
      os::AttachReadableHandleToSystemEvent(&ExitEvent, exit.handle, exit.owned,
                                            os::EventClearMode_AutoClear);
      SetupGpuErrorHandler();

      EventHandle notification = {};
      Check(Call<0x20 / 8>(am::GetCommonStateGetter(), &notification));
      os::AttachReadableHandleToSystemEvent(
        &NotificationEvent, notification.handle, notification.owned,
        os::EventClearMode_ManualClear);

      for (;;) {
        os::WaitSystemEvent(&NotificationEvent);
        uint32_t message = 0;
        uint32_t result = Call<0x28 / 8>(am::GetCommonStateGetter(), &message);

        if (result && (result & 0x3fffff) != 0x680) {
          ConvertInvalid(result);
        }

        if (!result && message == 15 && GetCurrentFocusState() == 1) {
          break;
        }
      }

      Check(Call<0x38 / 8>(am::GetWindowController()));
      SetFocusHandlingMode(FocusHandlingMode_0);
      uint8_t screenshot = 0;
      uint8_t recording = 0;
      Check(Call<0x228 / 8>(am::GetApplicationFunctions(), &screenshot,
                            &recording));
      SetScreenShotAndContinuousRecordingInitiallyEnabled(screenshot,
                                                          recording);

      uint8_t sharing = 0;
      if (!Call<0x230 / 8>(am::GetApplicationFunctions(), &sharing)) {
        ChangeBufferPermission(4, sharing);
        SetRtcScreenSharingAudioEnabled(sharing);
      }
    }
  }

  state.mutex.Unlock();
}

void SetupGpuErrorHandler() {
  using namespace detail;
  EventHandle event = {};
  Check(Call<0x1a0 / 8>(am::GetApplicationFunctions(), &event));
  os::AttachReadableHandleToSystemEvent(
    &GpuErrorEvent, event.handle, event.owned, os::EventClearMode_ManualClear);
  event.owned = 0;
  event.handle = 0;
  os::InitializeMultiWaitHolder(&GpuErrorHolder, &GpuErrorEvent);
  os::RegisterSystemWorkerHandler(&GpuErrorHolder, GpuErrorCallback);

  if (event.owned == 1) {
    os::CloseNativeHandle(event.handle);
  }
}

void SetFocusHandlingMode(FocusHandlingMode mode) {
  using namespace detail;
  FocusMutex.Lock();
  am::Interface* controller = am::GetSelfController();
  uint32_t first;
  uint32_t second;
  uint32_t third;
  uint32_t fourth;

  switch (mode) {
    case FocusHandlingMode_0:
      first = 0;
      second = 0;
      third = 1;
      fourth = 0;
      break;
    case FocusHandlingMode_1:
      first = 1;
      second = 1;
      third = 0;
      fourth = 0;
      break;
    case FocusHandlingMode_2:
      first = 1;
      second = 0;
      third = 1;
      fourth = 0;
      break;
    case FocusHandlingMode_3:
      first = 0;
      second = 0;
      third = 1;
      fourth = 1;
      break;
    default:
      UnexpectedDefault();
  }

  Check(Call<0x68 / 8>(controller, first, second, third));
  Check(Call<0x80 / 8>(controller, fourth));
  FocusMutex.Unlock();
}

uint32_t GetCurrentFocusState() {
  uint8_t state = 0;
  detail::Check(detail::Call<0x68 / 8>(am::GetCommonStateGetter(), &state));
  return state;
}

}
