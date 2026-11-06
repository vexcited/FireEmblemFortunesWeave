#include "snd/voice.hpp"

namespace snd {

void** Voice::registry() {
  static void* base = VoiceBase::registry();
  return &base;
}

void** Voice::getRegistry() {
  return registry();
}

}
