#pragma once

#include <cstddef>

#include "nn/os/time.hpp"

namespace nn::atk {

class EffectAux;
class EffectBase;

enum AuxBus {
  AuxBus_A,
  AuxBus_B,
  AuxBus_C,
};

class SoundSystem {
public:
  static bool AppendEffect(AuxBus bus, EffectBase* effect, void* buffer,
    size_t size);
  static bool AppendEffect(AuxBus bus, EffectAux* effect, void* buffer,
    size_t size);
  static bool AppendEffectToFinalMix(EffectAux* effect, void* buffer,
    size_t size);
  static void RemoveEffect(AuxBus bus, EffectBase* effect);
  static void RemoveEffect(AuxBus bus, EffectAux* effect);
  static void RemoveEffectFromFinalMix(EffectAux* effect);
  static void ClearEffect(AuxBus bus);
  static void ClearEffectFromFinalMix();
  static bool IsClearEffectFinished(AuxBus bus);
  static bool IsClearEffectFromFinalMixFinished();
  static void SetAuxBusVolume(AuxBus bus, float volume, TimeSpan fadeTime,
    int subMix);
};

}
