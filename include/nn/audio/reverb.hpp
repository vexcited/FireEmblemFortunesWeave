#pragma once

#include <stddef.h>
#include <stdint.h>

namespace nn::audio {

struct ReverbParameter {
  unsigned char mapping[14];
  uint16_t channel_count;
  int32_t sample_rate;
  uint32_t early_mode;
  int32_t early_gain;
  int32_t early_delay;
  uint32_t late_mode;
  int32_t late_gain;
  int32_t decay_time;
  int32_t high_frequency_ratio;
  int32_t coloration;
  int32_t input_gain;
  int32_t wet_gain;
  int32_t dry_gain;
};

struct ReverbDelayLine {
  int32_t capacity;
  int32_t length;
  int32_t* begin;
  int32_t* end;
  int32_t* position;
  int32_t coefficient;
  uint32_t reserved;
};

struct ReverbState {
  ReverbDelayLine early;
  ReverbDelayLine center;
  int32_t early_taps[10];
  int32_t early_gains[10];
  int32_t late_delay;
  uint32_t reserved;
  ReverbDelayLine allpass[4];
  ReverbDelayLine late[4];
  int32_t filter_input[4];
  int32_t filter_feedback[4];
  int32_t filter_history[4];
  unsigned char reserved_tail[40];
};

static_assert(sizeof(ReverbParameter) == 64);
static_assert(offsetof(ReverbParameter, late_gain) == 36);
static_assert(sizeof(ReverbDelayLine) == 40);
static_assert(offsetof(ReverbDelayLine, position) == 24);
static_assert(sizeof(ReverbState) == 576);
static_assert(offsetof(ReverbState, allpass) == 168);
static_assert(offsetof(ReverbState, late) == 328);
static_assert(offsetof(ReverbState, filter_history) == 520);

size_t ReverbGetRequiredDelayLineBufferSize(int sample_rate, int channels);
void InitializeReverbEffect(const ReverbParameter* parameter,
  ReverbState* state, void* buffer, bool extended);
void UpdateReverbEffectParameter(const ReverbParameter* parameter,
  ReverbState* state);
void ApplyReverbEffect(const ReverbParameter* parameter, ReverbState* state,
  bool enabled, const int32_t** input, int32_t** output, unsigned count);

}
