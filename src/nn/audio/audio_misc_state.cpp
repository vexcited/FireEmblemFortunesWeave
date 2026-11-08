#include <stdint.h>

namespace nn::audio {

enum SpatialDownmixOutputMode : int32_t {};

[[gnu::visibility("hidden")]] extern SpatialDownmixOutputMode
  g_SpatialDownmixOutputMode;

SpatialDownmixOutputMode GetSpatialDownmixOutputMode() {
  return g_SpatialDownmixOutputMode;
}

}

namespace nn::audio::karaoke {

[[gnu::visibility("hidden")]] extern bool g_IsKaraokeInputDevicesInitialized;

bool IsKaraokeInputDevicesInitialized() {
  return g_IsKaraokeInputDevicesInitialized;
}

}
