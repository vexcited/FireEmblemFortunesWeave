#pragma once

#include "nn/os/system_event.hpp"

namespace nn::oe {

enum FocusHandlingMode : int32_t {
  FocusHandlingMode_0,
  FocusHandlingMode_1,
  FocusHandlingMode_2,
  FocusHandlingMode_3
};

void Initialize();
void InitializeApplet();
void SetFocusHandlingMode(FocusHandlingMode mode);
uint32_t GetCurrentFocusState();
void SetupGpuErrorHandler();

namespace detail {

struct InitializationState {
  uint8_t initialized;
  uint8_t reserved[3];
  os::SdkMutexType mutex;
};

struct CaptureState {
  uint8_t screenshot_initial;
  uint8_t reserved01[3];
  uint8_t screenshot_current;
  uint8_t reserved05[3];
  uint8_t recording_initial;
  uint8_t reserved09[3];
  uint8_t recording_current;
  uint8_t reserved0d[3];
  uint8_t additional_permission;
  uint8_t reserved11[3];
  os::SdkMutexType mutex;
};

extern InitializationState EnvironmentInitialization;
extern InitializationState AppletInitialization;
extern os::Tick InitialTick;
extern os::SystemEventType ExitEvent;
extern os::SystemEventType NotificationEvent;
extern os::SdkMutexType FocusMutex;
extern os::SystemEventType GpuErrorEvent;
extern os::MultiWaitHolderType GpuErrorHolder;
extern CaptureState Capture;

void ApmInitialize();
void SetScreenShotAndContinuousRecordingInitiallyEnabled(bool screenshot,
                                                         bool recording);
void GpuErrorCallback();

}
}
