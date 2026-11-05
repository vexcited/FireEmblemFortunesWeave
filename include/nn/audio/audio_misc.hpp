#pragma once

#include <stddef.h>

#include <string_view>

#include "nn/audio/audio_stream.hpp"
#include "nn/result.hpp"

namespace nn::audio {

enum LogLevel {};

struct KaraokeInputDeviceStatus;

namespace detail {

extern LogLevel g_LogLevel;

}

namespace karaoke {

Result InitializeKaraokeInputDevicesImpl();
int ListActiveVirtualKaraokeInputDevicesImpl(AudioDeviceName* names,
  int count);
Result GetKaraokeInputDeviceStatusImpl(KaraokeInputDeviceStatus* status,
  const AudioDeviceName& name);
Result SetKaraokeInputDeviceGainImpl(const AudioDeviceName& name, float gain);
float GetKaraokeInputDeviceGainImpl(const AudioDeviceName& name);

}

namespace dpm {

struct DspProcessHandle;

Result CreateProcess(DspProcessHandle* handle, void* buffer, size_t size,
  std::string_view name);

namespace detail {

Result Initialize();
void Finalize();

}

}

}
