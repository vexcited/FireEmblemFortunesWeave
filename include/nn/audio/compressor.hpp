#pragma once

#include <stdint.h>

namespace nn::audio {

struct CompressorParameter {
  int8_t inputs[6];
  int8_t outputs[6];
  uint8_t reserved_0c[2];
  uint16_t channel_count;
  uint8_t unknown_10[4];
  float threshold;
  float ratio;
  uint8_t unknown_1c[8];
  float envelope_rate;
  float attack_rate;
  float release_rate;
  float output_gain;
  uint8_t unknown_34;
  uint8_t makeup_enabled;
  uint8_t statistics_enabled;
  uint8_t reset_statistics;
};

struct CompressorState {
  float energy;
  float target_gain;
  float gain;
  float knee_curve;
  float knee_start;
  float knee_end;
  float smoothing_rate;
  float makeup_gain;
  float output_scale;
  uint8_t reserved[28];
};

struct CompressorStatisticsInternal {
  float peak_energy;
  float minimum_gain;
  float channel_peaks[6];
};

static_assert(sizeof(CompressorParameter) == 56);
static_assert(sizeof(CompressorState) == 64);
static_assert(sizeof(CompressorStatisticsInternal) == 32);

void InitializeCompressorEffect(const CompressorParameter* parameter,
  CompressorState* state);
void SetCompressorEffectParameter(const CompressorParameter* parameter,
  CompressorState* state);
void ApplyCompressorEffect(const CompressorParameter* parameter,
  CompressorState* state, bool enabled, const int** input, int** output,
  int count, CompressorStatisticsInternal* statistics);

}
