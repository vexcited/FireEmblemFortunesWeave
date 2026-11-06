#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/audio/detail/audio_fft.hpp"

namespace nn::audio {

template <typename T, FftProcessType Type>
class Fft;

namespace util {

namespace detail {

class FftFirFilterImpl {
public:
  void Initialize(int channelCount, int frameSize, const float* pCoefficients,
    int coefficientCount, int blockSize,
    Fft<float, static_cast<FftProcessType>(1)>* pFft, void* pWorkBuffer,
    size_t workBufferSize);
  void Finalize();

  template <typename T, int... Fraction>
  void Process(T* pOutput, size_t outputCount, const T* pInput,
    size_t inputCount);

  template <typename T, int... Fraction>
  void Process(T* const* pOutputs, size_t outputCount,
    const T* const* pInputs, size_t inputCount);

  template <typename T, int... Fraction>
  void ProcessChannel(T* pOutput, const T* pInput, float* pOverlap);

  bool m_IsInitialized;
  int m_ChannelCount;
  int m_FrameSize;
  const float* m_pCoefficients;
  int m_BlockSize;
  Fft<float, static_cast<FftProcessType>(1)>* m_pFft;
  int m_FftSize;
  int m_SpectrumCount;
  float* m_pOverlapBuffer;
  void** m_ppChannelBuffers;
  float* m_pChannelBufferStorage;
  float* m_pFftBuffer;
};

}

class FftFirFilter {
public:
  void Initialize(int channelCount, int frameSize, const float* pCoefficients,
    int coefficientCount, int blockSize,
    Fft<float, static_cast<FftProcessType>(1)>* pFft, void* pWorkBuffer,
    size_t workBufferSize);
  void Finalize();
  bool IsInitialized() const;

  template <typename T, int... Fraction>
  void Process(T* pOutput, size_t outputCount, const T* pInput,
    size_t inputCount);

  template <typename T, int... Fraction>
  void Process(T* const* pOutputs, size_t outputCount,
    const T* const* pInputs, size_t inputCount);

private:
  detail::FftFirFilterImpl m_Impl;
};

}

}
