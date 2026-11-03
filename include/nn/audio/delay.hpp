#pragma once

#include <stddef.h>
#include <stdint.h>

namespace nn::audio {

struct DelayParameter {
  unsigned char reserved[14];
  uint16_t channel_count;
  int32_t maximum_delay_ms;
  int32_t delay_ms;
  int32_t sample_rate;
  int32_t input_gain;
  int32_t feedback;
  int32_t wet_gain;
  int32_t dry_gain;
  int32_t spread;
  int32_t lowpass;
};

struct DelayLine {
  uint32_t capacity;
  uint32_t length;
  int32_t* begin;
  int32_t* end;
  int32_t* current;
  int32_t gain;
  uint32_t reserved;
};

struct DelayState {
  unsigned char reserved_00[32];
  DelayLine lines[6];
  int32_t feedback;
  int32_t diagonal_feedback;
  int32_t cross_feedback;
  int32_t filter_input;
  int32_t filter_history;
  int32_t history[6];
  uint32_t reserved_13c;
};

static_assert(sizeof(DelayParameter) == 52);
static_assert(offsetof(DelayParameter, sample_rate) == 24);
static_assert(sizeof(DelayLine) == 40);
static_assert(sizeof(DelayState) == 320);
static_assert(offsetof(DelayState, feedback) == 272);
static_assert(offsetof(DelayState, history) == 292);

void InitializeDelayEffect(const DelayParameter* parameter, DelayState* state,
  void* buffer);
void SetDelayEffectParameter(const DelayParameter* parameter,
  DelayState* state);
void ApplyDelayEffect(const DelayParameter* parameter, DelayState* state,
  bool enabled, const int32_t** input, int32_t** output, int count);

}
