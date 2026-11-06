#include <stdint.h>
#include <string.h>

#include "nn/audio/audio_fft.hpp"
#include "nn/audio/fft_fir_filter.hpp"
#include "nn/audio/interleave.hpp"
#include "nn/audio/sample_conversion.hpp"
#include "nn/audio/vector_arithmetic.hpp"
#include "nn/audio/vector_filter.hpp"

namespace nn::audio::util::detail {

namespace {

template <typename T>
T* AlignUp(void* p, uintptr_t alignment) {
  uintptr_t value = reinterpret_cast<uintptr_t>(p);
  return reinterpret_cast<T*>((value + alignment - 1) & ~(alignment - 1));
}

template <typename T, int... Fraction>
[[gnu::always_inline]] inline void ProcessChannelImpl(
  FftFirFilterImpl* pImpl, T* pOutput, const T* pInput, float* pOverlap) {
  float* pTime = pImpl->m_pFftBuffer;
  float* pFrequency = pTime + 2 * pImpl->m_SpectrumCount;

  if constexpr (sizeof...(Fraction) == 0) {
    memcpy(pTime, pInput, sizeof(float) * pImpl->m_BlockSize);
  }
  else {
    VecConvertToFloat<T, Fraction...>(pTime, pInput, pImpl->m_BlockSize);
  }
  memset(pTime + pImpl->m_BlockSize, 0,
    sizeof(float) * (pImpl->m_FftSize - pImpl->m_BlockSize));

  pImpl->m_pFft->Process(pFrequency, 2 * pImpl->m_SpectrumCount, pTime,
    pImpl->m_FftSize, audio::detail::FftDirection_Forward);
  VecComplexMultiply<float>(pTime, pFrequency, pImpl->m_pCoefficients,
    pImpl->m_SpectrumCount);
  pImpl->m_pFft->Process(pFrequency, pImpl->m_FftSize, pTime,
    2 * pImpl->m_SpectrumCount, audio::detail::FftDirection_Inverse);

  VecAcc<float, float>(pFrequency, pOverlap, pImpl->m_FrameSize);
  if constexpr (sizeof...(Fraction) == 0) {
    memcpy(pOutput, pFrequency, sizeof(float) * pImpl->m_BlockSize);
  }
  else {
    VecConvertFromFloat<T, Fraction...>(pOutput, pFrequency,
      pImpl->m_BlockSize);
  }
  memcpy(pOverlap, pFrequency + pImpl->m_BlockSize,
    sizeof(float) * pImpl->m_FrameSize);
}

}

template <typename T, int... Fraction>
void FftFirFilterImpl::ProcessChannel(T* pOutput, const T* pInput,
  float* pOverlap) {
  ProcessChannelImpl<T, Fraction...>(this, pOutput, pInput, pOverlap);
}

template <>
void FftFirFilterImpl::ProcessChannel<float>(float* pOutput,
  const float* pInput, float* pOverlap) {
  ProcessChannelImpl<float>(this, pOutput, pInput, pOverlap);
}

void FftFirFilterImpl::Initialize(int channelCount, int frameSize,
  const float* pCoefficients, int coefficientCount, int blockSize,
  Fft<float, static_cast<FftProcessType>(1)>* pFft, void* pWorkBuffer,
  size_t workBufferSize) {
  m_ChannelCount = channelCount;
  m_FrameSize = frameSize;
  m_pCoefficients = pCoefficients;
  m_BlockSize = blockSize;
  m_pFft = pFft;
  m_FftSize = pFft->m_WorkBuffer.sampleCount;
  m_SpectrumCount = m_FftSize / 2 + 1;

  float* pOverlap = AlignUp<float>(pWorkBuffer, alignof(float));
  size_t overlapSize = sizeof(float) * (frameSize * channelCount);
  m_pOverlapBuffer = pOverlap;
  m_ppChannelBuffers = AlignUp<void*>(
    reinterpret_cast<uint8_t*>(pOverlap) + overlapSize, alignof(void*));
  m_pChannelBufferStorage =
    reinterpret_cast<float*>(m_ppChannelBuffers + channelCount);
  m_pFftBuffer = m_pChannelBufferStorage + blockSize * channelCount;
  memset(pOverlap, 0, overlapSize);

  for (int i = 0; i < m_ChannelCount; ++i) {
    m_ppChannelBuffers[i] = m_pChannelBufferStorage + m_BlockSize * i;
  }
  m_IsInitialized = true;
}

void FftFirFilterImpl::Finalize() {
  m_IsInitialized = false;
}

template <typename T, int... Fraction>
void FftFirFilterImpl::Process(T* pOutput, size_t outputCount,
  const T* pInput, size_t inputCount) {
  T* const* ppChannels = reinterpret_cast<T* const*>(m_ppChannelBuffers);
  VecDeinterleave<T>(ppChannels, pInput, m_ChannelCount, m_BlockSize);

  float* pOverlap = m_pOverlapBuffer;
  for (int i = 0; i < m_ChannelCount; ++i) {
    T* pChannel = static_cast<T*>(m_ppChannelBuffers[i]);
    ProcessChannel<T, Fraction...>(pChannel, pChannel, pOverlap);
    pOverlap += m_FrameSize;
  }
  VecInterleave<T>(pOutput, ppChannels, m_ChannelCount, m_BlockSize);
}

template <typename T, int... Fraction>
void FftFirFilterImpl::Process(T* const* pOutputs, size_t outputCount,
  const T* const* pInputs, size_t inputCount) {
  float* pOverlap = m_pOverlapBuffer;
  for (int i = 0; i < m_ChannelCount; ++i) {
    ProcessChannel<T, Fraction...>(pOutputs[i], pInputs[i], pOverlap);
    pOverlap += m_FrameSize;
  }
}

template void FftFirFilterImpl::ProcessChannel<int16_t, 15>(int16_t*,
  const int16_t*, float*);
template void FftFirFilterImpl::ProcessChannel<int32_t, 23>(int32_t*,
  const int32_t*, float*);
template void FftFirFilterImpl::ProcessChannel<int32_t, 31>(int32_t*,
  const int32_t*, float*);

template void FftFirFilterImpl::Process<int16_t, 15>(int16_t*, size_t,
  const int16_t*, size_t);
template void FftFirFilterImpl::Process<int32_t, 23>(int32_t*, size_t,
  const int32_t*, size_t);
template void FftFirFilterImpl::Process<int32_t, 31>(int32_t*, size_t,
  const int32_t*, size_t);
template void FftFirFilterImpl::Process<float>(float*, size_t, const float*,
  size_t);
template void FftFirFilterImpl::Process<int16_t, 15>(int16_t* const*, size_t,
  const int16_t* const*, size_t);
template void FftFirFilterImpl::Process<int32_t, 23>(int32_t* const*, size_t,
  const int32_t* const*, size_t);
template void FftFirFilterImpl::Process<int32_t, 31>(int32_t* const*, size_t,
  const int32_t* const*, size_t);
template void FftFirFilterImpl::Process<float>(float* const*, size_t,
  const float* const*, size_t);

}
