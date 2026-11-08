#include <stdint.h>

#include <optional>

#include "nn/audio/audio_stream.hpp"
#include "nn/util/string_util.hpp"

namespace nn::audio {

// The state of each applet, with the volume of every output device it uses.
struct AppletStateSummary {
  struct DeviceVolume {
    AudioDeviceName name;
    float volume;
  };

  uint8_t reserved0[0x64];
  int32_t deviceCount;
  uint8_t reserved68[4];
  DeviceVolume devices[12];
  bool isUnknownc9c;
};

static_assert(sizeof(AppletStateSummary::DeviceVolume) == 0x104);

namespace capture::detail {

class SystemAudioCaptureServerImplBase {
public:
  struct AppletStateSummary {
    enum AudioDevice : int64_t {
      AudioDevice_Tv,
      AudioDevice_BuiltInSpeaker,
      AudioDevice_External,
      AudioDevice_StereoJack,
      AudioDevice_Usb,
      AudioDevice_Count,
    };

    void SetDefault();
    float GetDeviceVolume(AudioDevice device) const;
    void SetDeviceVolume(AudioDevice device, float volume);
    void Set(const audio::AppletStateSummary& summary);

    static std::optional<AudioDevice> GetAudioDeviceFromName(
      const AudioDeviceName& name);

    bool isUnknown0;
    uint8_t deviceMask;
    float volumes[AudioDevice_Count];
  };
};

namespace {

using Summary = SystemAudioCaptureServerImplBase::AppletStateSummary;

constexpr int DeviceNameLength = sizeof(AudioDeviceName::name);

bool IsName(const AudioDeviceName& name, const char* pDeviceName) {
  return util::Strncmp(name.name, pDeviceName, DeviceNameLength) == 0;
}

}

// Only the television and the speaker start at full volume.
void Summary::SetDefault() {
  isUnknown0 = false;
  deviceMask = 0;
  volumes[AudioDevice_Tv] = 1.0f;
  volumes[AudioDevice_BuiltInSpeaker] = 1.0f;
  volumes[AudioDevice_External] = 1.0f;
  volumes[AudioDevice_StereoJack] = 0.0f;
  volumes[AudioDevice_Usb] = 0.0f;
}

float Summary::GetDeviceVolume(AudioDevice device) const {
  return volumes[device];
}

void Summary::SetDeviceVolume(AudioDevice device, float volume) {
  volumes[device] = volume;
}

std::optional<Summary::AudioDevice> Summary::GetAudioDeviceFromName(
  const AudioDeviceName& name) {
  if (IsName(name, "AudioTvOutput")) {
    return AudioDevice_Tv;
  }
  if (IsName(name, "AudioBuiltInSpeakerOutput")) {
    return AudioDevice_BuiltInSpeaker;
  }
  if (IsName(name, "AudioExternalOutput")) {
    return AudioDevice_External;
  }
  if (IsName(name, "AudioStereoJackOutput")) {
    return AudioDevice_StereoJack;
  }
  if (IsName(name, "AudioUsbDeviceOutput")) {
    return AudioDevice_Usb;
  }
  return std::nullopt;
}

void Summary::Set(const audio::AppletStateSummary& summary) {
  isUnknown0 = summary.isUnknownc9c;
  for (long i = 0; i < summary.deviceCount; i++) {
    const std::optional<AudioDevice> device =
      GetAudioDeviceFromName(summary.devices[i].name);
    if (device.has_value()) {
      deviceMask |= 1 << *device;
      volumes[*device] = summary.devices[i].volume;
    }
  }
}

}

}
