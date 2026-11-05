#pragma once

#include <stdint.h>

#include "nn/applet/applet_types.hpp"
#include "nn/os/time.hpp"
#include "nn/result.hpp"
#include "nn/sf/service_object.hpp"
#include "nn/sf/sf_buffers.hpp"
#include "nn/sf/shared_pointer.hpp"

namespace nn::audio {

struct AudioDeviceName;

struct AppletFilterParameter {
  uint8_t data[16];
};

namespace detail {

class IAudioSystemManagerForApplet : public sf::IServiceObject {
public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result RegisterAppletResourceUserId(
    applet::AppletResourceUserId aruid) = 0;
  virtual Result UnregisterAppletResourceUserId(
    applet::AppletResourceUserId aruid) = 0;
  virtual Result RequestSuspendAudio(applet::AppletResourceUserId aruid,
    TimeSpan fadeTime) = 0;
  virtual Result RequestResumeAudio(applet::AppletResourceUserId aruid,
    TimeSpan fadeTime) = 0;
  virtual Result GetAudioOutputProcessMasterVolume(sf::Out<float> volume,
    applet::AppletResourceUserId aruid) = 0;
  virtual Result SetAudioOutputProcessMasterVolume(
    applet::AppletResourceUserId aruid, float volume, TimeSpan fadeTime) = 0;
  virtual Result GetAudioInputProcessMasterVolume(sf::Out<float> volume,
    applet::AppletResourceUserId aruid) = 0;
  virtual Result SetAudioInputProcessMasterVolume(
    applet::AppletResourceUserId aruid, float volume, TimeSpan fadeTime) = 0;
  virtual Result GetAudioOutputProcessRecordVolume(sf::Out<float> volume,
    applet::AppletResourceUserId aruid) = 0;
  virtual Result SetAudioOutputProcessRecordVolume(
    applet::AppletResourceUserId aruid, float volume, TimeSpan fadeTime) = 0;
  virtual Result SetAudioOutputProcessFilterParameter(
    applet::AppletResourceUserId aruid, const sf::InBuffer& parameter) = 0;
  virtual Result SetAudioVoiceChatProcessMasterVolume(
    applet::AppletResourceUserId aruid, float volume, TimeSpan fadeTime) = 0;
  virtual Result GetAudioVoiceChatProcessMasterVolume(sf::Out<float> volume,
    applet::AppletResourceUserId aruid) = 0;
  virtual Result GetAudioCaptureDeviceRecordVolume(sf::Out<float> volume,
    applet::AppletResourceUserId aruid, const sf::InBuffer& name) = 0;
  virtual Result SetAudioCaptureDeviceRecordVolume(
    applet::AppletResourceUserId aruid, const sf::InBuffer& name,
    float volume, TimeSpan fadeTime) = 0;
  virtual Result GetLoudnessNormalization(sf::Out<bool> isEnabled,
    applet::AppletResourceUserId aruid) = 0;
  virtual Result SetLoudnessNormalization(bool isEnabled, TimeSpan fadeTime,
    applet::AppletResourceUserId aruid) = 0;
};

class IAudioSystemManagerForDebugger : public sf::IServiceObject {
public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result RequestSuspendAudioForDebug(
    applet::AppletResourceUserId aruid) = 0;
  virtual Result RequestResumeAudioForDebug(
    applet::AppletResourceUserId aruid) = 0;
};

}

sf::SharedPointer<detail::IAudioSystemManagerForApplet>
CreateAudioSystemManagerForAppletByHipc();
sf::SharedPointer<detail::IAudioSystemManagerForDebugger>
CreateAudioSystemManagerForDebuggerByHipc();

}
