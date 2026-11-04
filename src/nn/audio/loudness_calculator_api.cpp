#include <stdint.h>

#include "nn/audio/audio_math.hpp"
#include "nn/audio/loudness_calculator.hpp"
#include "nn/audio/renderer_config.hpp"

namespace nn::diag::detail {

[[noreturn]] void AbortImpl(const Result* result);

}

namespace nn::audio {
namespace {

detail::LoudnessCalculatorImpl* GetImpl(void* buffer) {
  const uintptr_t address = reinterpret_cast<uintptr_t>(buffer);
  return reinterpret_cast<detail::LoudnessCalculatorImpl*>(
    (address + 3) & ~uintptr_t{3});
}

}

void InitializeLoudnessCalculator(LoudnessCalculatorType* calculator,
  int channelCount, void* buffer, size_t size) {
  calculator->_pBuffer = buffer;
  calculator->_size = size;
  detail::LoudnessCalculatorImpl* impl = GetImpl(buffer);
  auto* workBuffer = reinterpret_cast<uint8_t*>(impl + 1);
  // The remaining size is computed with its operands swapped.
  const size_t workBufferSize =
    workBuffer - (static_cast<uint8_t*>(buffer) + size);
  const Result result =
    impl->Initialize(workBuffer, workBufferSize, channelCount);
  if (result.value != 0) {
    nn::diag::detail::AbortImpl(&result);
  }
}

void FinalizeLoudnessCalculator(LoudnessCalculatorType* calculator) {
  if (calculator->_pBuffer != nullptr) {
    GetImpl(calculator->_pBuffer)->Finalize();
    calculator->_pBuffer = nullptr;
  }
  calculator->_size = 0;
}

void ResetLoudnessCalculator(LoudnessCalculatorType* calculator) {
  GetImpl(calculator->_pBuffer)->Reset();
}

void AnalyzeLoudness(LoudnessCalculatorType* calculator,
  const int16_t* samples, int sampleCount) {
  constexpr int BlockSampleCount = 240;
  if (sampleCount < BlockSampleCount) {
    return;
  }
  detail::LoudnessCalculatorImpl* impl = GetImpl(calculator->_pBuffer);
  const size_t end =
    BlockSampleCount * (static_cast<unsigned>(sampleCount) / BlockSampleCount);
  for (size_t offset = 0; offset != end; offset += BlockSampleCount) {
    impl->Analyze(samples + offset * impl->m_ChannelCount, BlockSampleCount);
  }
}

float GetMomentaryLoudness(const LoudnessCalculatorType* calculator) {
  return GetImpl(calculator->_pBuffer)->m_MomentaryLoudness;
}

float GetShortTermLoudness(const LoudnessCalculatorType* calculator) {
  return GetImpl(calculator->_pBuffer)->m_ShortTermLoudness;
}

float GetIntegratedLoudness(const LoudnessCalculatorType* calculator) {
  return GetImpl(calculator->_pBuffer)->m_IntegratedLoudness;
}

LoudnessRange GetLoudnessRange(const LoudnessCalculatorType* calculator) {
  const detail::LoudnessCalculatorImpl* impl =
    GetImpl(calculator->_pBuffer);
  return {impl->m_LoudnessRangeLow, impl->m_LoudnessRangeHigh};
}

void SetMomentaryLoudnessLpfTc(LoudnessCalculatorType* calculator,
  TimeSpan timeConstant) {
  detail::LoudnessCalculatorImpl* impl = GetImpl(calculator->_pBuffer);
  // Momentary blocks advance every five milliseconds.
  const float blocks =
    static_cast<float>(200 * detail::GetMilliSeconds(timeConstant)) / 1000.0f;
  impl->m_MomentaryCoefficient = 1.0f - detail::Exp(-1.0f / blocks);
}

}
