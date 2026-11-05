#pragma once

#include <stdint.h>

#include "nn/applet/applet_types.hpp"
#include "nn/audio/audio_stream.hpp"
#include "nn/os/synchronization.hpp"
#include "nn/result.hpp"
#include "nn/sf/native_handle.hpp"
#include "nn/sf/service_object.hpp"
#include "nn/sf/sf_buffers.hpp"
#include "nn/sf/shared_pointer.hpp"

namespace nn::audio {

using SetAudioDeviceOutputVolumeCallback = void (*)(const AudioDeviceName*,
  float, uintptr_t);
using SetDeviceOutputVolumeAutoTuneModeEnabledCallback = void (*)(bool,
  uintptr_t);

namespace detail {

class IAudioDevice : public sf::IServiceObject {
public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result ListAudioDeviceName(const sf::OutBuffer& names,
    sf::Out<int> count) = 0;
  virtual Result SetAudioDeviceOutputVolume(
    const sf::InBuffer& name, float volume) = 0;
  virtual Result GetAudioDeviceOutputVolume(
    const sf::InBuffer& name, sf::Out<float> volume) = 0;
  virtual Result GetActiveAudioDeviceName(
    const sf::OutBuffer& name) = 0;
  virtual Result QueryAudioDeviceSystemEvent(
    sf::Out<sf::NativeHandle> handle) = 0;
  virtual Result GetActiveChannelCount(sf::Out<int> count) = 0;
  virtual Result ListAudioDeviceNameAuto(
    const sf::OutBuffer& names, sf::Out<int> count) = 0;
  virtual Result SetAudioDeviceOutputVolumeAuto(
    const sf::InBuffer& name, float volume) = 0;
  virtual Result GetAudioDeviceOutputVolumeAuto(
    const sf::InBuffer& name, sf::Out<float> volume) = 0;
  virtual Result GetActiveAudioDeviceNameAuto(
    const sf::OutBuffer& name) = 0;
  virtual Result QueryAudioDeviceInputEvent(
    sf::Out<sf::NativeHandle> handle) = 0;
  virtual Result QueryAudioDeviceOutputEvent(
    sf::Out<sf::NativeHandle> handle) = 0;
  virtual Result GetActiveAudioOutputDeviceName(
    const sf::OutBuffer& name) = 0;
  virtual Result ListAudioOutputDeviceName(
    const sf::OutBuffer& names, sf::Out<int> count) = 0;
  virtual Result AcquireAudioInputDeviceNotification(
    sf::Out<sf::NativeHandle> handle, uint64_t key) = 0;
  virtual Result ReleaseAudioInputDeviceNotification(uint64_t key) = 0;
  virtual Result AcquireAudioOutputDeviceNotification(
    sf::Out<sf::NativeHandle> handle, uint64_t key) = 0;
  virtual Result ReleaseAudioOutputDeviceNotification(uint64_t key) = 0;
  virtual Result SetAudioDeviceOutputVolumeAutoTuneEnabled(bool isEnabled) = 0;
  virtual Result IsAudioDeviceOutputVolumeAutoTuneEnabled(
    sf::Out<bool> isEnabled) = 0;
  virtual Result IsActiveOutputDeviceEstimatedLowLatency(
    sf::Out<bool> isLowLatency) = 0;
};

class IAudioRendererManager : public sf::IServiceObject {
public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual void OpenAudioRenderer() = 0;
  virtual void GetWorkBufferSize() = 0;
  virtual void GetAudioDeviceService() = 0;
  virtual void OpenAudioRendererForManualExecution() = 0;
  virtual Result GetAudioDeviceServiceWithRevisionInfo(
    const sf::Out<sf::SharedPointer<IAudioDevice>>& device,
    applet::AppletResourceUserId aruid, uint32_t revision) = 0;
};

class DeviceSessionCoordinator {
public:
  sf::SharedPointer<IAudioDevice> Acquire();
  void Release();
  sf::SharedPointer<IAudioDevice> Get();

private:
  os::SdkMutexType m_Mutex;
  sf::SharedPointer<IAudioDevice> m_Session;
  int m_ReferenceCount;
};

struct LibraryApiCallbackFuncManager {
  os::SdkMutexType mutex;
  SetAudioDeviceOutputVolumeCallback setAudioDeviceOutputVolume;
  uintptr_t setAudioDeviceOutputVolumeArgument;
  SetDeviceOutputVolumeAutoTuneModeEnabledCallback
    setDeviceOutputVolumeAutoTuneModeEnabled;
  uintptr_t setDeviceOutputVolumeAutoTuneModeEnabledArgument;
};

inline LibraryApiCallbackFuncManager& GetLibraryApiCallbackFuncManager() {
  static LibraryApiCallbackFuncManager s_Manager;
  return s_Manager;
}

DeviceSessionCoordinator& GetDeviceSessionCoordinator();
bool& GetIsUsbAudioDeviceOutputDeviceVolumeEnabled();

}

namespace common {

uint32_t GetCurrentRevision();

}

sf::SharedPointer<detail::IAudioRendererManager> CreateAudioRendererManager(
  bool isForSystem);

}
