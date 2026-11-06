#include "nn/audio/fft_fir_filter.hpp"

namespace nn::audio::util {

void FftFirFilter::Initialize(int channelCount, int frameSize,
  const float* pCoefficients, int coefficientCount, int blockSize,
  Fft<float, static_cast<FftProcessType>(1)>* pFft, void* pWorkBuffer,
  size_t workBufferSize) {
  m_Impl.Initialize(channelCount, frameSize, pCoefficients, coefficientCount,
    blockSize, pFft, pWorkBuffer, workBufferSize);
}

void FftFirFilter::Finalize() {
  m_Impl.Finalize();
}

bool FftFirFilter::IsInitialized() const {
  return m_Impl.m_IsInitialized;
}

template <typename T, int... Fraction>
void FftFirFilter::Process(T* pOutput, size_t outputCount, const T* pInput,
  size_t inputCount) {
  m_Impl.Process<T, Fraction...>(pOutput, outputCount, pInput, inputCount);
}

template <typename T, int... Fraction>
void FftFirFilter::Process(T* const* pOutputs, size_t outputCount,
  const T* const* pInputs, size_t inputCount) {
  m_Impl.Process<T, Fraction...>(pOutputs, outputCount, pInputs,
    inputCount);
}

template void FftFirFilter::Process<int16_t, 15>(int16_t*, size_t,
  const int16_t*, size_t);
template void FftFirFilter::Process<int32_t, 23>(int32_t*, size_t,
  const int32_t*, size_t);
template void FftFirFilter::Process<int32_t, 31>(int32_t*, size_t,
  const int32_t*, size_t);
template void FftFirFilter::Process<float>(float*, size_t, const float*,
  size_t);
template void FftFirFilter::Process<int16_t, 15>(int16_t* const*, size_t,
  const int16_t* const*, size_t);
template void FftFirFilter::Process<int32_t, 23>(int32_t* const*, size_t,
  const int32_t* const*, size_t);
template void FftFirFilter::Process<int32_t, 31>(int32_t* const*, size_t,
  const int32_t* const*, size_t);
template void FftFirFilter::Process<float>(float* const*, size_t,
  const float* const*, size_t);

}
