#include <string.h>

#include "nn/audio/audio_device.hpp"
#include "nn/audio/detail/audio_abort.hpp"
#include "nn/os/system_event_class.hpp"

namespace nn::audio {

namespace {

struct DeviceNotificationState {
  bool isInputAcquired;
  bool isOutputAcquired;
  os::SdkMutexType inputMutex;
  os::SdkMutexType outputMutex;
};

DeviceNotificationState g_DeviceNotificationState;

}

void SetCallbackFuncForSetAudioDeviceOutputVolume(
  SetAudioDeviceOutputVolumeCallback callback, uintptr_t argument) {
  detail::LibraryApiCallbackFuncManager& manager =
    detail::GetLibraryApiCallbackFuncManager();
  manager.mutex.Lock();
  manager.setAudioDeviceOutputVolume = callback;
  manager.setAudioDeviceOutputVolumeArgument = argument;
  manager.mutex.Unlock();
}

void SetCallbackFuncForSetDeviceOutputVolumeAutoTuneModeEnabled(
  SetDeviceOutputVolumeAutoTuneModeEnabledCallback callback,
  uintptr_t argument) {
  detail::LibraryApiCallbackFuncManager& manager =
    detail::GetLibraryApiCallbackFuncManager();
  manager.mutex.Lock();
  manager.setDeviceOutputVolumeAutoTuneModeEnabled = callback;
  manager.setDeviceOutputVolumeAutoTuneModeEnabledArgument = argument;
  manager.mutex.Unlock();
}

int ListAudioDeviceName(AudioDeviceName* names, int count) {
  sf::OutBuffer buffer(names, count * sizeof(AudioDeviceName));
  sf::SharedPointer<detail::IAudioDevice> session =
    detail::GetDeviceSessionCoordinator().Acquire();
  int listed = 0;
  NN_AUDIO_ABORT_UNLESS_SUCCESS(
    session->ListAudioDeviceNameAuto(buffer, sf::Out<int>(&listed)));
  detail::GetDeviceSessionCoordinator().Release();
  return listed;
}

int ListAudioOutputDeviceName(AudioDeviceName* names, int count) {
  sf::OutBuffer buffer(names, count * sizeof(AudioDeviceName));
  sf::SharedPointer<detail::IAudioDevice> session =
    detail::GetDeviceSessionCoordinator().Acquire();
  int listed = 0;
  NN_AUDIO_ABORT_UNLESS_SUCCESS(
    session->ListAudioOutputDeviceName(buffer, sf::Out<int>(&listed)));
  detail::GetDeviceSessionCoordinator().Release();
  return listed;
}

void SetAudioDeviceOutputVolume(const AudioDeviceName* name, float volume) {
  detail::LibraryApiCallbackFuncManager& manager =
    detail::GetLibraryApiCallbackFuncManager();
  manager.mutex.Lock();
  SetAudioDeviceOutputVolumeCallback callback =
    manager.setAudioDeviceOutputVolume;
  if (callback != nullptr) {
    uintptr_t argument = manager.setAudioDeviceOutputVolumeArgument;
    manager.mutex.Unlock();
    callback(name, volume, argument);
  }
  else {
    manager.mutex.Unlock();
  }
  const char* usbOutputName = "AudioUsbDeviceOutput";
  if (strncmp(name->name, usbOutputName, sizeof(name->name)) == 0) {
    detail::GetIsUsbAudioDeviceOutputDeviceVolumeEnabled() = true;
  }
  sf::SharedPointer<detail::IAudioDevice> session =
    detail::GetDeviceSessionCoordinator().Acquire();
  // The stereo jack volume also drives the USB output until that output is
  // configured on its own.
  if (!detail::GetIsUsbAudioDeviceOutputDeviceVolumeEnabled() &&
    strncmp(name->name, "AudioStereoJackOutput", sizeof(name->name)) == 0) {
    NN_AUDIO_ABORT_UNLESS_SUCCESS(session->SetAudioDeviceOutputVolumeAuto(
      sf::InBuffer(usbOutputName, sizeof(AudioDeviceName)), volume));
  }
  NN_AUDIO_ABORT_UNLESS_SUCCESS(session->SetAudioDeviceOutputVolumeAuto(
    sf::InBuffer(name, sizeof(AudioDeviceName)), volume));
  detail::GetDeviceSessionCoordinator().Release();
}

float GetAudioDeviceOutputVolume(const AudioDeviceName* name) {
  sf::InBuffer buffer(name, sizeof(AudioDeviceName));
  sf::SharedPointer<detail::IAudioDevice> session =
    detail::GetDeviceSessionCoordinator().Acquire();
  float volume = 0.0f;
  NN_AUDIO_ABORT_UNLESS_SUCCESS(
    session->GetAudioDeviceOutputVolumeAuto(buffer, sf::Out<float>(&volume)));
  detail::GetDeviceSessionCoordinator().Release();
  return volume;
}

bool IsActiveOutputDeviceEstimatedLowLatency() {
  sf::SharedPointer<detail::IAudioDevice> session =
    detail::GetDeviceSessionCoordinator().Acquire();
  bool isLowLatency = true;
  NN_AUDIO_ABORT_UNLESS_SUCCESS(session->IsActiveOutputDeviceEstimatedLowLatency(
    sf::Out<bool>(&isLowLatency)));
  detail::GetDeviceSessionCoordinator().Release();
  return isLowLatency;
}

Result SetAudioDeviceMapping(const char* name,
  const AudioDeviceName* device) {
  return Result{0x40299};
}

void GetActiveAudioDeviceName(AudioDeviceName* name) {
  sf::OutBuffer buffer(name, sizeof(AudioDeviceName));
  sf::SharedPointer<detail::IAudioDevice> session =
    detail::GetDeviceSessionCoordinator().Acquire();
  NN_AUDIO_ABORT_UNLESS_SUCCESS(session->GetActiveAudioDeviceNameAuto(buffer));
  detail::GetDeviceSessionCoordinator().Release();
}

void GetActiveAudioOutputDeviceName(AudioDeviceName* name) {
  sf::OutBuffer buffer(name, sizeof(AudioDeviceName));
  sf::SharedPointer<detail::IAudioDevice> session =
    detail::GetDeviceSessionCoordinator().Acquire();
  NN_AUDIO_ABORT_UNLESS_SUCCESS(
    session->GetActiveAudioOutputDeviceName(buffer));
  detail::GetDeviceSessionCoordinator().Release();
}

Result AcquireAudioDeviceNotificationForInput(os::SystemEvent* event) {
  g_DeviceNotificationState.inputMutex.Lock();
  Result result;
  if (g_DeviceNotificationState.isInputAcquired) {
    result = detail::MakeResult(2);
  }
  else {
    sf::SharedPointer<detail::IAudioDevice> session =
      detail::GetDeviceSessionCoordinator().Acquire();
    sf::NativeHandle handle;
    NN_AUDIO_ABORT_UNLESS_SUCCESS(session->QueryAudioDeviceInputEvent(
      sf::Out<sf::NativeHandle>(&handle)));
    event->AttachReadableHandle(handle.GetOsHandle(), handle.IsManaged(),
      os::EventClearMode_AutoClear);
    handle.Detach();
    g_DeviceNotificationState.isInputAcquired = true;
  }
  g_DeviceNotificationState.inputMutex.Unlock();
  return result;
}

Result AcquireAudioDeviceNotificationForOutput(os::SystemEvent* event) {
  g_DeviceNotificationState.outputMutex.Lock();
  Result result;
  if (g_DeviceNotificationState.isOutputAcquired) {
    result = detail::MakeResult(2);
  }
  else {
    sf::SharedPointer<detail::IAudioDevice> session =
      detail::GetDeviceSessionCoordinator().Acquire();
    sf::NativeHandle handle;
    NN_AUDIO_ABORT_UNLESS_SUCCESS(session->QueryAudioDeviceOutputEvent(
      sf::Out<sf::NativeHandle>(&handle)));
    event->AttachReadableHandle(handle.GetOsHandle(), handle.IsManaged(),
      os::EventClearMode_AutoClear);
    handle.Detach();
    g_DeviceNotificationState.isOutputAcquired = true;
  }
  g_DeviceNotificationState.outputMutex.Unlock();
  return result;
}

Result AcquireAudioOutputDeviceNotification(os::SystemEvent* event) {
  sf::SharedPointer<detail::IAudioDevice> session =
    detail::GetDeviceSessionCoordinator().Acquire();
  sf::NativeHandle handle;
  Result result = session->AcquireAudioOutputDeviceNotification(
    sf::Out<sf::NativeHandle>(&handle), reinterpret_cast<uint64_t>(event));
  if (result.IsFailure()) {
    detail::GetDeviceSessionCoordinator().Release();
    return result;
  }
  // The session reference is kept until the notification is released.
  event->AttachReadableHandle(handle.GetOsHandle(), handle.IsManaged(),
    os::EventClearMode_AutoClear);
  handle.Detach();
  return result;
}

void ReleaseAudioOutputDeviceNotification(os::SystemEvent* event) {
  sf::SharedPointer<detail::IAudioDevice> session =
    detail::GetDeviceSessionCoordinator().Get();
  NN_AUDIO_ABORT_UNLESS_SUCCESS(session->ReleaseAudioOutputDeviceNotification(
    reinterpret_cast<uint64_t>(event)));
  os::DestroySystemEvent(event->GetBase());
  detail::GetDeviceSessionCoordinator().Release();
}

Result AcquireAudioInputDeviceNotification(os::SystemEvent* event) {
  sf::SharedPointer<detail::IAudioDevice> session =
    detail::GetDeviceSessionCoordinator().Acquire();
  sf::NativeHandle handle;
  Result result = session->AcquireAudioInputDeviceNotification(
    sf::Out<sf::NativeHandle>(&handle), reinterpret_cast<uint64_t>(event));
  if (result.IsFailure()) {
    detail::GetDeviceSessionCoordinator().Release();
    return result;
  }
  event->AttachReadableHandle(handle.GetOsHandle(), handle.IsManaged(),
    os::EventClearMode_AutoClear);
  handle.Detach();
  return result;
}

void ReleaseAudioInputDeviceNotification(os::SystemEvent* event) {
  sf::SharedPointer<detail::IAudioDevice> session =
    detail::GetDeviceSessionCoordinator().Get();
  NN_AUDIO_ABORT_UNLESS_SUCCESS(session->ReleaseAudioInputDeviceNotification(
    reinterpret_cast<uint64_t>(event)));
  os::DestroySystemEvent(event->GetBase());
  detail::GetDeviceSessionCoordinator().Release();
}

int GetActiveAudioDeviceChannelCountForOutput() {
  sf::SharedPointer<detail::IAudioDevice> session =
    detail::GetDeviceSessionCoordinator().Acquire();
  int count = 0;
  NN_AUDIO_ABORT_UNLESS_SUCCESS(
    session->GetActiveChannelCount(sf::Out<int>(&count)));
  detail::GetDeviceSessionCoordinator().Release();
  return count;
}

void SetDeviceOutputVolumeAutoTuneModeEnabled(bool isEnabled) {
  detail::LibraryApiCallbackFuncManager& manager =
    detail::GetLibraryApiCallbackFuncManager();
  manager.mutex.Lock();
  SetDeviceOutputVolumeAutoTuneModeEnabledCallback callback =
    manager.setDeviceOutputVolumeAutoTuneModeEnabled;
  if (callback != nullptr) {
    uintptr_t argument =
      manager.setDeviceOutputVolumeAutoTuneModeEnabledArgument;
    manager.mutex.Unlock();
    callback(isEnabled, argument);
  }
  else {
    manager.mutex.Unlock();
  }
  sf::SharedPointer<detail::IAudioDevice> session =
    detail::GetDeviceSessionCoordinator().Acquire();
  NN_AUDIO_ABORT_UNLESS_SUCCESS(
    session->SetAudioDeviceOutputVolumeAutoTuneEnabled(isEnabled));
  detail::GetDeviceSessionCoordinator().Release();
}

bool IsDeviceOutputVolumeAutoTuneModeEnabled() {
  sf::SharedPointer<detail::IAudioDevice> session =
    detail::GetDeviceSessionCoordinator().Acquire();
  bool isEnabled = false;
  NN_AUDIO_ABORT_UNLESS_SUCCESS(session->IsAudioDeviceOutputVolumeAutoTuneEnabled(
    sf::Out<bool>(&isEnabled)));
  detail::GetDeviceSessionCoordinator().Release();
  return isEnabled;
}

}
