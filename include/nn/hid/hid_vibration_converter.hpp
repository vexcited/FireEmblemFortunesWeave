#pragma once

#include <stdint.h>

#include "nn/hid/hid_vibration_node.hpp"

namespace nerd {

class VibrationEncoder {
 public:
  nn::Result Init(uint32_t sampleRate, float lowFrequencyMin,
    float lowFrequencyMax, float highFrequencyMin, float highFrequencyMax,
    uint32_t frameRate);
  void ProcessChunk(const int16_t* samples, nn::hid::VibrationValue* pOut);

 private:
  alignas(16) uint8_t m_Storage[0x1000];
};

}

namespace nn::hid {

class VibrationConverter {
 public:
  VibrationConverter();
  explicit VibrationConverter(int sampleRate);
  VibrationConverter(int sampleRate, float lowFrequencyMin,
    float lowFrequencyMax, float highFrequencyMin, float highFrequencyMax);
  virtual ~VibrationConverter();

  void ProcessChunk(VibrationValue* pOutValue, const int16_t* samples,
    int sampleCount);

 private:
  void Initialize(int sampleRate, float lowFrequencyMin,
    float lowFrequencyMax, float highFrequencyMin, float highFrequencyMax);

  int m_SampleRate;
  nerd::VibrationEncoder m_Encoder;
};

}
