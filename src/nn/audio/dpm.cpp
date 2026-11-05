#include "nn/audio/audio_misc.hpp"

namespace nn::audio::dpm {

Result Initialize() {
  return detail::Initialize();
}

void Finalize() {
  detail::Finalize();
}

Result CreateProcess(DspProcessHandle* handle, void* buffer, size_t size) {
  return CreateProcess(handle, buffer, size, "");
}

}
