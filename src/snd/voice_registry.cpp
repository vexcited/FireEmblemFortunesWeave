#include "snd/wave_multi_voice.hpp"
#include "snd/wave_voice.hpp"

namespace snd {

void** WaveVoice::getRegistry() {
  static void* base = Voice::registry();
  return &base;
}

void** WaveMultiVoice::getRegistry() {
  static void* base = Voice::registry();
  return &base;
}

}
