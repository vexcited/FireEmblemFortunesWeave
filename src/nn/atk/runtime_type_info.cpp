#include "nn/atk/sound_handle.hpp"

namespace nn::atk::detail {

const RuntimeTypeInfo* SequenceSound::GetRuntimeTypeInfo() const {
  return GetRuntimeTypeInfoStatic();
}

const RuntimeTypeInfo* StreamSound::GetRuntimeTypeInfo() const {
  return GetRuntimeTypeInfoStatic();
}

const RuntimeTypeInfo* WaveSound::GetRuntimeTypeInfo() const {
  return GetRuntimeTypeInfoStatic();
}

}
