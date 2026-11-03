#pragma once

#include <stddef.h>
#include <stdint.h>

namespace nn::audio {

struct LimiterParameter {
  unsigned char reserved_00[12];
  uint32_t sample_rate;
  int32_t threshold;
  int32_t delay_length;
  int64_t release_time;
  int64_t attack_time;
  int64_t reserved_28;
  int64_t lookahead_time;
  float attack_exponential;
  float attack_complement;
  float release_exponential;
  float release_complement;
  float attack_prediction;
  float release_prediction;
  uint16_t maximum_channel_count;
  uint16_t channel_count;
};

struct LimiterDelay {
  int32_t position;
  int32_t length;
  int32_t* samples;
};

struct LimiterAverage {
  int32_t sum;
  int32_t length;
  int32_t position;
  uint32_t reserved;
  int32_t* samples;
};

struct LimiterState {
  LimiterDelay* delay;
  int32_t** predicted_samples;
  int32_t* envelope;
  int32_t* maximum;
  int32_t* maximum_position;
  LimiterAverage* average;
  int32_t* maximum_age;
  int32_t* prediction_position;
};

static_assert(sizeof(LimiterParameter) == 88);
static_assert(offsetof(LimiterParameter, channel_count) == 82);
static_assert(sizeof(LimiterDelay) == 16);
static_assert(sizeof(LimiterAverage) == 24);
static_assert(sizeof(LimiterState) == 64);

void InitializeLimiterEffect(LimiterParameter* parameter, LimiterState* state,
  void* buffer, size_t size, int threshold);
void ApplyLimiterEffectSequential(const LimiterParameter* parameter,
  LimiterState* state, const int32_t** input, int32_t** output,
  unsigned count);

}
