#pragma once

#include <stddef.h>
#include <stdint.h>

namespace nn::audio {

struct UpsamplerState {
  uint32_t ratio;
  int32_t samples[20];
  uint16_t tap_count;
  uint16_t read;
  uint16_t write;
  uint8_t lower;
  uint8_t upper;
  uint8_t initialized;
  uint8_t phase;
  uint8_t reserved[2];
};

static_assert(sizeof(UpsamplerState) == 96);
static_assert(offsetof(UpsamplerState, read) == 86);
static_assert(offsetof(UpsamplerState, initialized) == 92);

void Resample(int32_t* output, const int16_t* input, int step,
               int32_t* phase, int count, uint8_t mode, bool vary_phase);
void SrcProcessFrame(int32_t* output, int32_t* input, uint32_t output_count,
                      uint32_t input_count, UpsamplerState* state);

}
