#pragma once

#include <stddef.h>
#include <stdint.h>

namespace nn::audio {

struct ResamplerState {
  uint16_t marker;
  int16_t taps;
  uint32_t reserved_04;
  const int16_t* coefficients;
  uint32_t ratio;
  uint32_t phase;
  uint32_t phase_step;
  int16_t read_position;
  int16_t write_position;
  int16_t history_begin;
  int16_t history_end;
  int32_t history[138];
  int16_t retained_count;
  int16_t retained[8];
  uint16_t reserved_25e;
};

static_assert(sizeof(ResamplerState) == 608);
static_assert(offsetof(ResamplerState, history) == 36);
static_assert(offsetof(ResamplerState, retained_count) == 588);

void InitializeResampler(ResamplerState* state, unsigned ratio, bool quality);
int ResampleOutputFrame(ResamplerState* state, int stride, int channel,
  const int16_t* input, int16_t* output, int inputCount, int outputCount,
  float gain);
int ResampleOutputGetNextFrameSize(const ResamplerState* state, int inputCount);

}
