#include "nn/audio/detail/audio_fft.hpp"

namespace nn::audio::detail {

size_t GetFftWorkBufferSizeInternalImpl(FftElementType elementType,
  size_t elementSize, FftProcessType processType, int sampleCount,
  uint32_t) {
  return GetFftWorkBufferSize(elementType, elementSize, processType,
    sampleCount);
}

}
