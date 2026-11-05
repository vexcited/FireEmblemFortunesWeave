#include "nn/audio/audio_misc.hpp"

namespace nn::audio {

void SetLogLevel(LogLevel level) {
  detail::g_LogLevel = level;
}

LogLevel GetLogLevel() {
  return detail::g_LogLevel;
}

}
