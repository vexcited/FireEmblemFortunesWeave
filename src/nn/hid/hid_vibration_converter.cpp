#include <string.h>

#include "nn/hid/detail/hid_abort.hpp"
#include "nn/hid/hid_vibration_converter.hpp"

namespace nn::hid {

namespace {

constexpr int DefaultSampleRate = 48000;
constexpr int AlternativeSampleRate = 32000;
constexpr uint32_t EncoderFrameRate = 8000;
constexpr int ChunksPerSecond = 200;

constexpr float DefaultLowFrequencyMin = 128.0f;
constexpr float DefaultLowFrequencyMax = 200.0f;
constexpr float DefaultHighFrequencyMin = 256.0f;
constexpr float DefaultHighFrequencyMax = 400.0f;

constexpr float FrequencyMin = 10.0f;
constexpr float FrequencyMax = 2500.0f;

bool IsValidSampleRate(int sampleRate) {
  return sampleRate == AlternativeSampleRate ||
    sampleRate == DefaultSampleRate;
}

bool IsValidFrequency(float frequency) {
  return frequency >= FrequencyMin && frequency <= FrequencyMax;
}

}

VibrationConverter::VibrationConverter() : m_SampleRate(DefaultSampleRate) {
  memset(&m_Encoder, 0, sizeof(m_Encoder));
  NN_ABORT_UNLESS_RESULT_SUCCESS(m_Encoder.Init(DefaultSampleRate,
    DefaultLowFrequencyMin, DefaultLowFrequencyMax, DefaultHighFrequencyMin,
    DefaultHighFrequencyMax, EncoderFrameRate));
}

VibrationConverter::VibrationConverter(int sampleRate) :
  m_SampleRate(DefaultSampleRate) {
  memset(&m_Encoder, 0, sizeof(m_Encoder));
  NN_ABORT_UNLESS(IsValidSampleRate(sampleRate));
  Initialize(sampleRate, DefaultLowFrequencyMin, DefaultLowFrequencyMax,
    DefaultHighFrequencyMin, DefaultHighFrequencyMax);
}

VibrationConverter::VibrationConverter(int sampleRate, float lowFrequencyMin,
  float lowFrequencyMax, float highFrequencyMin, float highFrequencyMax) :
  m_SampleRate(DefaultSampleRate) {
  memset(&m_Encoder, 0, sizeof(m_Encoder));
  NN_ABORT_UNLESS(IsValidSampleRate(sampleRate));
  NN_ABORT_UNLESS(IsValidFrequency(lowFrequencyMin));
  NN_ABORT_UNLESS(IsValidFrequency(lowFrequencyMax));
  NN_ABORT_UNLESS(IsValidFrequency(highFrequencyMin));
  NN_ABORT_UNLESS(IsValidFrequency(highFrequencyMax));
  NN_ABORT_UNLESS(lowFrequencyMin < lowFrequencyMax);
  NN_ABORT_UNLESS(highFrequencyMin < highFrequencyMax);
  Initialize(sampleRate, lowFrequencyMin, lowFrequencyMax, highFrequencyMin,
    highFrequencyMax);
}

VibrationConverter::~VibrationConverter() {}

void VibrationConverter::Initialize(int sampleRate, float lowFrequencyMin,
  float lowFrequencyMax, float highFrequencyMin, float highFrequencyMax) {
  m_SampleRate = sampleRate;
  memset(&m_Encoder, 0, sizeof(m_Encoder));
  NN_ABORT_UNLESS_RESULT_SUCCESS(m_Encoder.Init(sampleRate, lowFrequencyMin,
    lowFrequencyMax, highFrequencyMin, highFrequencyMax, EncoderFrameRate));
}

void VibrationConverter::ProcessChunk(VibrationValue* pOutValue,
  const int16_t* samples, int sampleCount) {
  NN_ABORT_UNLESS_NOT_NULL(pOutValue);
  NN_ABORT_UNLESS_NOT_NULL(samples);
  NN_ABORT_UNLESS(sampleCount == m_SampleRate / ChunksPerSecond);
  m_Encoder.ProcessChunk(samples, pOutValue);
}

}
