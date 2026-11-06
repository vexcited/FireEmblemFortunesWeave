#pragma once

#include <stddef.h>
#include <stdint.h>

namespace nn::audio {

struct I3dl2ReverbParameter {
  int8_t inputs[6];
  int8_t outputs[6];
  uint8_t reserved_0c[2];
  uint16_t channel_count;
  uint32_t reserved;
  uint32_t sample_rate;
  float room_hf_gain;
  float hf_reference;
  float decay_time;
  float hf_decay_ratio;
  float room_gain;
  float reflection_gain;
  float late_gain;
  float diffusion;
  float reflection_delay;
  float late_delay;
  float density;
  float dry_gain;
};

struct I3dl2DelayLine {
  float* begin;
  float* end;
  int32_t length;
  uint32_t reserved;
  float* write;
  float* read;
  int32_t delay;
  float coefficient;
};

struct I3dl2ReverbState {
  float dry_gain;
  float input_gain;
  float input_feedback;
  float input_history;
  I3dl2DelayLine early;
  int32_t reflection_taps[20];
  int32_t late_delay;
  float reflection_gain;
  I3dl2DelayLine late[4];
  float filter_coefficients[4][3];
  float filter_history[4];
  I3dl2DelayLine allpass_a[4];
  I3dl2DelayLine allpass_b[4];
  float diffusion;
  float late_gain;
  I3dl2DelayLine center;
  unsigned char reserved[48];
};

static_assert(sizeof(I3dl2ReverbParameter) == 72);
static_assert(offsetof(I3dl2ReverbParameter, sample_rate) == 20);
static_assert(sizeof(I3dl2DelayLine) == 48);
static_assert(offsetof(I3dl2DelayLine, write) == 24);
static_assert(offsetof(I3dl2DelayLine, read) == 32);
static_assert(sizeof(I3dl2ReverbState) == 896);
static_assert(offsetof(I3dl2ReverbState, early) == 16);
static_assert(offsetof(I3dl2ReverbState, late) == 152);
static_assert(offsetof(I3dl2ReverbState, filter_coefficients) == 344);
static_assert(offsetof(I3dl2ReverbState, filter_history) == 392);
static_assert(offsetof(I3dl2ReverbState, allpass_a) == 408);
static_assert(offsetof(I3dl2ReverbState, allpass_b) == 600);
static_assert(offsetof(I3dl2ReverbState, center) == 800);

size_t GetRequiredI3dl2ReverbEffectWorkBufferSize(int sample_rate,
                                               int channel_count);
void InitializeI3dl2ReverbEffect(const I3dl2ReverbParameter& parameter,
                                I3dl2ReverbState* state, void* buffer);
void UpdateI3dl2ReverbEffectParameter(const I3dl2ReverbParameter& parameter,
                                     I3dl2ReverbState* state, bool reset);
void ApplyI3dl2ReverbEffect(const I3dl2ReverbParameter& parameter,
                           I3dl2ReverbState* state, bool enabled,
                           const int32_t** input, int32_t** output,
                           int sample_count);

}
