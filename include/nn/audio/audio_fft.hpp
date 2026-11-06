#pragma once

#include "nn/audio/detail/audio_fft.hpp"

namespace nn::audio {

namespace detail {

void FftProcessInternalImplFloat32Real(float* output, int outputCount,
  const float* input, int inputCount, const FftWorkBuffer& workBuffer,
  FftDirection direction, unsigned int option);

}

template <typename T, FftProcessType Type>
class Fft {
public:
  void Process(T* pOutput, int outputCount, const T* pInput, int inputCount,
    detail::FftDirection direction) const {
    detail::FftProcessInternalImplFloat32Real(pOutput, outputCount, pInput,
      inputCount, m_WorkBuffer, direction, 1);
  }

  bool m_IsInitialized;
  detail::FftWorkBuffer m_WorkBuffer;
};

}
