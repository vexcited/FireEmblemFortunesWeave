#include "nn/atk/effect.hpp"

namespace nn::atk {

bool SubMix::AppendEffect(EffectBase* effect, int bus, void* buffer,
  size_t size) {
  return OutputMixer::AppendEffect(effect, bus, buffer, size);
}

bool SubMix::AppendEffect(EffectAux* effect, int bus, void* buffer,
  size_t size) {
  return OutputMixer::AppendEffect(effect, bus, buffer, size);
}

void SubMix::RemoveEffect(EffectBase* effect, int bus) {
  OutputMixer::RemoveEffect(effect, bus);
}

void SubMix::RemoveEffect(EffectAux* effect, int bus) {
  OutputMixer::RemoveEffect(effect, bus);
}

void SubMix::ClearEffect(int bus) {
  OutputMixer::ClearEffect(bus);
}

bool FinalMix::AppendEffect(EffectAux* effect, void* buffer, size_t size) {
  return OutputMixer::AppendEffect(effect, 0, buffer, size);
}

void FinalMix::RemoveEffect(EffectAux* effect) {
  OutputMixer::RemoveEffect(effect, 0);
}

void FinalMix::ClearEffect() {
  OutputMixer::ClearEffect(0);
}

}
