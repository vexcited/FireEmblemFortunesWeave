#pragma once

#include <stddef.h>
#include <stdint.h>

namespace nn::audio {

namespace detail {

void ReducePolyphaseRatio(uint32_t* numerator, uint32_t* denominator);

}

struct PolyphaseResamplerState;
using PolyphaseProcess = uint32_t (*)(PolyphaseResamplerState*,
  const int16_t*, int16_t*, uint32_t);

struct PolyphaseResamplerState {
  uint8_t numerator;
  uint8_t denominator;
  int8_t consumed;
  int8_t next_consumed;
  uint8_t reserved_4;
  uint8_t phase;
  uint8_t lower;
  uint8_t upper;
  uint16_t increment;
  uint16_t remainder;
  uint32_t reserved_12;
  const int16_t** coefficients;
  int16_t** history;
  uint32_t taps;
  uint32_t channels;
  PolyphaseProcess process;
};

struct PolyphaseResamplerType {
  PolyphaseResamplerState* state;
  size_t buffer_size;
  int32_t source_rate;
  int32_t target_rate;
  uint32_t flags;
  uint32_t reserved;
};

static_assert(sizeof(PolyphaseResamplerState) == 48);
static_assert(offsetof(PolyphaseResamplerState, coefficients) == 16);
static_assert(offsetof(PolyphaseResamplerState, channels) == 36);
static_assert(sizeof(PolyphaseResamplerType) == 32);

namespace detail {

uint32_t InterpolatePolyphase(PolyphaseResamplerState* state,
  const int16_t* input, int16_t* output, uint32_t count);
uint32_t DecimatePolyphase(PolyphaseResamplerState* state,
  const int16_t* input, int16_t* output, uint32_t count);
uint32_t IdentityPolyphase(PolyphaseResamplerState* state,
  const int16_t* input, int16_t* output, uint32_t count);

}

uint32_t polyphaseResample(void* state, const int16_t* input,
  int16_t* output, uint32_t count);
uint32_t ProcessPolyphaseResamplerBuffer(PolyphaseResamplerType* type,
  int* produced, int16_t* output, size_t output_size, const int16_t* input,
  int count);

void initializePolyphaseResampler(void* state, uint32_t numerator,
  uint32_t denominator, uint32_t channels, bool quality, float gain);
uint32_t InitializePolyphaseResampler(PolyphaseResamplerType* type,
  void* buffer, size_t buffer_size, int source, int target, int channels,
  bool quality, float gain);

double computeAcutalOutputSampleRate(int source, int target);
double CalculatePolyphaseResamplerActualOutputSampleRate(int source,
  int target);
uint32_t requiredPolyphaseResamplerMemory(uint32_t channels,
  uint32_t numerator, uint32_t denominator, bool quality);
size_t GetRequiredBufferSizeForPolyphaseResampler(int source, int target,
  int channels, bool quality);
uint32_t estimatePolyphaseResamplerOutputBufferSize(void* state,
  size_t input_bytes, bool padding);
int estimatePolyphaseResamplerOutputSampleCount(void* state, int count,
  bool padding);
int GetPolyphaseResamplerOutputSampleCount(const PolyphaseResamplerType*,
  int count);

}
