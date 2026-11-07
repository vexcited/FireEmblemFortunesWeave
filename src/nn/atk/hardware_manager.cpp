#include "nn/atk/effect.hpp"
#include "snd/target/atk_types.hpp"

namespace nn::atk::detail::driver {

size_t HardwareManager::GetRequiredEffectAuxBufferSize(
  const EffectAux* effect) const {
  return effect->GetRequiredMemSize(&m_Parameter);
}

}
