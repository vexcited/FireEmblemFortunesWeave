#pragma once

#include <stddef.h>
#include <stdint.h>

namespace nn::audio::dsp {

struct TruePeakLimiterParameter {
  uint16_t channel_count;
  uint16_t reserved;
  int32_t sample_rate;
  float threshold_db;
  float attack_ms;
  float release_ms;
  float lookahead_ms;
};

struct TruePeakLimiterState {
  int32_t channel_count;
  float threshold;
  float attack;
  float release;
  int32_t lookahead;
  uint32_t reserved_14;
  float* envelope;
  float* gain;
  float* delay;
  int32_t delay_position;
  uint32_t reserved_34;
  float* history;
  int32_t history_position;
  uint32_t reserved_44;
  float* peak;
  float* minimum_gain;
  unsigned char reserved_tail[40];
};

struct TruePeakLimiterStatistics {
  float peak[6];
  float minimum_gain[6];
};

static_assert(sizeof(TruePeakLimiterParameter) == 24);
static_assert(sizeof(TruePeakLimiterState) == 128);
static_assert(offsetof(TruePeakLimiterState, envelope) == 24);
static_assert(offsetof(TruePeakLimiterState, history) == 56);
static_assert(offsetof(TruePeakLimiterState, minimum_gain) == 80);
static_assert(sizeof(TruePeakLimiterStatistics) == 48);

size_t GetRequiredTruePeakLimiterEffectWorkBufferSize(
  const TruePeakLimiterParameter& parameter);
void InitializeTruePeakLimiterEffect(const TruePeakLimiterParameter& parameter,
  TruePeakLimiterState* state, void* buffer, size_t size);
void UpdateTruePeakLimiterEffectParameter(
  const TruePeakLimiterParameter& parameter, TruePeakLimiterState* state);
void ApplyTruePeakLimiterEffect(TruePeakLimiterState* state, bool enabled,
  const int32_t** input, int32_t** output, int count);
void ApplyTruePeakLimiterEffect(TruePeakLimiterState* state, bool enabled,
  const int32_t** input, int32_t** output, int count,
  TruePeakLimiterStatistics* statistics);

}
