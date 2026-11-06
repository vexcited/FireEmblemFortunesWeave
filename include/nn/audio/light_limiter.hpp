#pragma once

#include <stddef.h>
#include <stdint.h>

namespace nn::audio {

struct LightLimiterParameter {
  int8_t inputs[6];
  int8_t outputs[6];
  uint8_t reserved_0c[2];
  uint16_t channel_count;
  unsigned char reserved_10[20];
  float attack;
  float release;
  float threshold;
  float input_gain;
  float output_gain;
  int32_t delay_length;
  int32_t capacity;
  unsigned char reserved_40[1];
  uint8_t statistics_enabled;
  uint8_t reset_statistics;
  uint8_t fast_reciprocal;
};

struct LightLimiterState {
  float* envelope;
  float* gain;
  float* delay;
  int32_t* position;
  unsigned char reserved[32];
};

struct LightLimiterStatisticsInternal {
  float peak[6];
  float minimum_gain[6];
};

static_assert(sizeof(LightLimiterParameter) == 68);
static_assert(offsetof(LightLimiterParameter, attack) == 36);
static_assert(offsetof(LightLimiterParameter, fast_reciprocal) == 67);
static_assert(sizeof(LightLimiterState) == 64);
static_assert(sizeof(LightLimiterStatisticsInternal) == 48);

void ResetLightLimiterWorkBuffer(const LightLimiterParameter* parameter,
  LightLimiterState* state);
void InitializeLightLimiterEffect(const LightLimiterParameter* parameter,
  LightLimiterState* state, void* buffer);
void UpdateLightLimiterEffectParameter(const LightLimiterParameter* parameter,
  LightLimiterState* state);
void ApplyLightLimiterEffect(const LightLimiterParameter* parameter,
  LightLimiterState* state, bool enabled, const int32_t** input,
  int32_t** output, int count, LightLimiterStatisticsInternal* statistics);

}
