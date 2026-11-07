#include "nn/audio/audio_stream.hpp"
#include "nn/audio/audio_system.hpp"
#include "nn/os/synchronization.hpp"

namespace nn::audio {

namespace {

using AppletManager = sf::SharedPointer<detail::IAudioSystemManagerForApplet>;

os::SdkMutexType g_AppletManagerMutex;

class AppletManagerHolder {
public:
  AppletManagerHolder() {
    static AppletManager s_Manager;
    if (s_Manager.operator->() == nullptr) {
      g_AppletManagerMutex.Lock();
      if (s_Manager.operator->() == nullptr) {
        AppletManager manager = CreateAudioSystemManagerForAppletByHipc();
        AppletManager(manager.Detach(), false).Swap(s_Manager);
      }
      g_AppletManagerMutex.Unlock();
    }
    m_pManager = s_Manager.operator->();
    if (m_pManager != nullptr) {
      m_pManager->AddReference();
    }
  }

  ~AppletManagerHolder() {
    m_pManager->Release();
  }

  detail::IAudioSystemManagerForApplet* operator->() const {
    return m_pManager;
  }

private:
  detail::IAudioSystemManagerForApplet* m_pManager;
};

}

Result RegisterAppletResourceUserId(applet::AppletResourceUserId aruid) {
  AppletManagerHolder manager;
  return manager->RegisterAppletResourceUserId(aruid);
}

Result UnregisterAppletResourceUserId(applet::AppletResourceUserId aruid) {
  AppletManagerHolder manager;
  return manager->UnregisterAppletResourceUserId(aruid);
}

Result RequestSuspendAudio(applet::AppletResourceUserId aruid,
  TimeSpan fadeTime) {
  AppletManagerHolder manager;
  return manager->RequestSuspendAudio(aruid, fadeTime);
}

Result RequestResumeAudio(applet::AppletResourceUserId aruid,
  TimeSpan fadeTime) {
  AppletManagerHolder manager;
  return manager->RequestResumeAudio(aruid, fadeTime);
}

Result GetAudioInputProcessMasterVolume(float* volume,
  applet::AppletResourceUserId aruid) {
  AppletManagerHolder manager;
  return manager->GetAudioInputProcessMasterVolume(sf::Out<float>(volume),
    aruid);
}

Result SetAudioInputProcessMasterVolume(applet::AppletResourceUserId aruid,
  float volume, TimeSpan fadeTime) {
  AppletManagerHolder manager;
  return manager->SetAudioInputProcessMasterVolume(aruid, volume, fadeTime);
}

Result GetAudioOutputProcessMasterVolume(float* volume,
  applet::AppletResourceUserId aruid) {
  AppletManagerHolder manager;
  return manager->GetAudioOutputProcessMasterVolume(sf::Out<float>(volume),
    aruid);
}

Result SetAudioOutputProcessMasterVolume(applet::AppletResourceUserId aruid,
  float volume, TimeSpan fadeTime) {
  AppletManagerHolder manager;
  return manager->SetAudioOutputProcessMasterVolume(aruid, volume, fadeTime);
}

Result GetAudioOutputProcessRecordVolume(float* volume,
  applet::AppletResourceUserId aruid) {
  AppletManagerHolder manager;
  return manager->GetAudioOutputProcessRecordVolume(sf::Out<float>(volume),
    aruid);
}

Result SetAudioOutputProcessRecordVolume(applet::AppletResourceUserId aruid,
  float volume, TimeSpan fadeTime) {
  AppletManagerHolder manager;
  return manager->SetAudioOutputProcessRecordVolume(aruid, volume, fadeTime);
}

Result GetAudioCaptureDeviceRecordVolume(float* volume,
  applet::AppletResourceUserId aruid, const AudioDeviceName& name) {
  sf::InBuffer buffer(&name, sizeof(AudioDeviceName));
  AppletManagerHolder manager;
  return manager->GetAudioCaptureDeviceRecordVolume(sf::Out<float>(volume),
    aruid, buffer);
}

Result SetAudioCaptureDeviceRecordVolume(applet::AppletResourceUserId aruid,
  const AudioDeviceName& name, float volume, TimeSpan fadeTime) {
  sf::InBuffer buffer(&name, sizeof(AudioDeviceName));
  AppletManagerHolder manager;
  return manager->SetAudioCaptureDeviceRecordVolume(aruid, buffer, volume,
    fadeTime);
}

Result SetAudioOutputProcessFilterParameter(
  applet::AppletResourceUserId aruid, const AppletFilterParameter& parameter) {
  AppletManagerHolder manager;
  return manager->SetAudioOutputProcessFilterParameter(aruid,
    sf::InBuffer(&parameter, sizeof(parameter)));
}

Result SetAudioVoiceChatProcessMasterVolume(
  applet::AppletResourceUserId aruid, float volume, TimeSpan fadeTime) {
  AppletManagerHolder manager;
  return manager->SetAudioVoiceChatProcessMasterVolume(aruid, volume,
    fadeTime);
}

Result GetAudioVoiceChatProcessMasterVolume(float* volume,
  applet::AppletResourceUserId aruid) {
  AppletManagerHolder manager;
  return manager->GetAudioVoiceChatProcessMasterVolume(sf::Out<float>(volume),
    aruid);
}

Result SetLoudnessNormalization(bool isEnabled, TimeSpan fadeTime,
  applet::AppletResourceUserId aruid) {
  AppletManagerHolder manager;
  return manager->SetLoudnessNormalization(isEnabled, fadeTime, aruid);
}

Result GetLoudnessNormalization(bool* isEnabled,
  applet::AppletResourceUserId aruid) {
  AppletManagerHolder manager;
  return manager->GetLoudnessNormalization(sf::Out<bool>(isEnabled), aruid);
}

}
