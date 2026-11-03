#include "nn/audio/resampler.hpp"

namespace nn::audio {
namespace {

static float Float(int32_t value) {
  float result;
  asm volatile("scvtf %s0, %w1" : "=w"(result) : "r"(value));
  return result;
}

}

size_t GetRequiredBufferSizeForResampler(int channels) {
  return int64_t(channels) * 608;
}

int GetResamplerOutputSampleCount(const ResamplerType* resampler,
  int inputCount) {
  if (inputCount < 1) {
    return 0;
  }

  float outputRate = Float(resampler->output_rate);
  float inputRate = Float(resampler->input_rate);
  float ratio;
  asm volatile("fdiv %s0, %s1, %s2"
    : "=w"(ratio) : "w"(outputRate), "w"(inputRate));
  float count;
  asm volatile("ucvtf %s0, %w1" : "=w"(count) : "r"(inputCount));
  asm volatile("fmul %s0, %s1, %s2"
    : "=w"(count) : "w"(ratio), "w"(count));
  int32_t rounded;
  asm volatile("fcvtps %w0, %s1" : "=r"(rounded) : "w"(count));
  return uint32_t(rounded) + 2;
}

uint32_t InitializeResampler(ResamplerType* resampler, void* buffer,
  size_t size, int inputRate, int outputRate, int channels) {
  resampler->states = static_cast<ResamplerState*>(buffer);
  resampler->buffer_size = size;
  resampler->input_rate = inputRate;
  resampler->output_rate = outputRate;
  resampler->channel_count = channels;

  if (channels > 0) {
    uint64_t numerator = uint64_t(int64_t(outputRate)) << 16;
    uint64_t denominator = int64_t(inputRate);
    uint64_t ratio;
    asm volatile("udiv %0, %1, %2"
      : "=r"(ratio) : "r"(numerator), "r"(denominator));

    for (int channel = 0; channel < channels; ++channel) {
      InitializeResampler(&resampler->states[channel], uint32_t(ratio), true);
    }
  }

  return 0;
}

uint32_t ProcessResamplerBuffer(ResamplerType* resampler, int* outputCount,
  int16_t* output, size_t outputSize, const int16_t* input, int inputCount) {
  int channels = resampler->channel_count;
  int count = ResampleOutputGetNextFrameSize(resampler->states, inputCount);

  if (outputCount) {
    *outputCount = count;
  }

  int32_t total = uint32_t(channels) * uint32_t(count);
  size_t required = uint64_t(int64_t(total)) * 2;

  if (outputSize < required) {
    return 0x899;
  }

  for (int channel = 0; channel < channels; ++channel) {
    ResampleOutputFrame(&resampler->states[channel], channels, channel,
      input, output, inputCount, count, 1.0f);
  }

  return 0;
}

}
