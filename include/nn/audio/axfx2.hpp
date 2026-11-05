#pragma once

#include <stddef.h>
#include <stdint.h>

namespace nn::audio {

struct Axfx2DelayLine {
  float* start;
  float* end;
  size_t length;
  float* input;
  float* output;
  uint32_t delay;
  float coefficient;
};

static_assert(sizeof(Axfx2DelayLine) == 48);

void Axfx2AllPassTick(Axfx2DelayLine* first, Axfx2DelayLine* second,
  Axfx2DelayLine* delay, float input);

}
