#include "nn/atk/effect.hpp"
#include "snd/target/atk_types.hpp"

namespace nn::atk::detail::driver {

size_t HardwareManager::GetRequiredEffectAuxBufferSize(
  const EffectAux* effect) const {
  return effect->GetRequiredMemSize(&m_Parameter);
}

// The main bus at index 0 keeps its mixer.
void HardwareManager::SetAuxBus(int index, void* bus) {
  if (index > 0) {
    m_AuxBus[index] = bus;
  }
}

}
