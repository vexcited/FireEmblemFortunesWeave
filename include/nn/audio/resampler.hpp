#pragma once

#include "nn/audio/output_resampler.hpp"

namespace nn::audio {

struct ResamplerType {
  ResamplerState* states;
  size_t buffer_size;
  int32_t input_rate;
  int32_t output_rate;
  int32_t channel_count;
  uint32_t reserved;
};

static_assert(sizeof(ResamplerType) == 32);

size_t GetRequiredBufferSizeForResampler(int channels);
int GetResamplerOutputSampleCount(const ResamplerType* resampler,
  int inputCount);
uint32_t InitializeResampler(ResamplerType* resampler, void* buffer,
  size_t size, int inputRate, int outputRate, int channels);
uint32_t ProcessResamplerBuffer(ResamplerType* resampler, int* outputCount,
  int16_t* output, size_t outputSize, const int16_t* input, int inputCount);

}
