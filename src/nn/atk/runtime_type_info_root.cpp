#include "nn/atk/sound_handle.hpp"

// The root of the sound type info chain. Its getter is reached through the
// global offset table and also exists out of line.
namespace nn::atk::detail {

inline const RuntimeTypeInfo* BasicSound::GetRuntimeTypeInfoStatic() {
  static const RuntimeTypeInfo s_TypeInfo(nullptr);
  return &s_TypeInfo;
}

[[gnu::used]] static constexpr auto kBasicSound =
  &BasicSound::GetRuntimeTypeInfoStatic;

}
