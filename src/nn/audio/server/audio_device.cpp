#include "nn/audio/server/audio_render_system.hpp"

namespace nn::audio::server {

namespace detail {

void InitializeAudioDevice(const applet::AppletResourceUserId& id) {
}

void FinalizeAudioDevice(const applet::AppletResourceUserId& id) {
}

int ListAudioDeviceName(AudioDeviceName* names, int count,
  uint32_t revision) {
  return 0;
}

int ListAudioOutputDeviceName(AudioDeviceName* names, int count,
  uint32_t revision) {
  return 0;
}

void SetAudioDeviceOutputVolume(const AudioDeviceName* name, float volume,
  const applet::AppletResourceUserId& id, uint32_t revision) {
}

float GetAudioDeviceOutputVolume(const AudioDeviceName* name,
  const applet::AppletResourceUserId& id, uint32_t revision) {
  return 1.0f;
}

void GetActiveAudioDeviceName(AudioDeviceName* name, uint32_t revision) {
}

void GetActiveAudioOutputDeviceName(AudioDeviceName* name,
  uint32_t revision) {
}

Result QueryAudioDeviceSystemEvent(uint32_t* handle,
  const applet::AppletResourceUserId& id) {
  return {0x40499};
}

Result QueryAudioDeviceInputNotificationEvent(uint32_t* handle,
  const applet::AppletResourceUserId& id) {
  return {0x40499};
}

Result QueryAudioDeviceOutputNotificationEvent(uint32_t* handle,
  const applet::AppletResourceUserId& id) {
  return {0x40499};
}

int GetActiveChannelCount() {
  return 0;
}

float GetAudioSystemMasterVolumeSetting(const AudioDeviceName* name) {
  return 0.0f;
}

void SetAudioDeviceOutputVolumeAutoTuneEnabled(bool isEnabled,
  applet::AppletResourceUserId id) {
}

bool IsAudioDeviceOutputVolumeAutoTuneEnabled(
  applet::AppletResourceUserId id) {
  return false;
}

bool IsActiveOutputDeviceEstimatedLowLatency() {
  return true;
}

}

}
