#include "nn/audio/audio_misc.hpp"

namespace nn::audio {

Result InitializeKaraokeInputDevices() {
  return karaoke::InitializeKaraokeInputDevicesImpl();
}

int ListActiveVirtualKaraokeInputDevices(AudioDeviceName* names, int count) {
  return karaoke::ListActiveVirtualKaraokeInputDevicesImpl(names, count);
}

Result GetKaraokeInputDeviceStatus(KaraokeInputDeviceStatus* status,
  const AudioDeviceName& name) {
  return karaoke::GetKaraokeInputDeviceStatusImpl(status, name);
}

Result SetKaraokeInputDeviceGain(const AudioDeviceName& name, float gain) {
  return karaoke::SetKaraokeInputDeviceGainImpl(name, gain);
}

float GetKaraokeInputDeviceGain(const AudioDeviceName& name) {
  return karaoke::GetKaraokeInputDeviceGainImpl(name);
}

}
