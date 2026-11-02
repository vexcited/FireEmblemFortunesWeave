#pragma once

#include <stddef.h>
#include <stdint.h>

namespace nerd {

struct Butterworth {
  double feedback[11];
  double feedforward[11];
  double inputs[11];
  double outputs[11];
  double gain;
  uint32_t order;
  uint32_t unknown_16c;
  uintptr_t unknown_170;
  uintptr_t unknown_178;

  void ApplyGeneric(const int16_t* input, int16_t* output, size_t count,
                    size_t stride);
  void Apply2(const int16_t* input, int16_t* output, size_t count,
              size_t stride);
  void Apply4(const int16_t* input, int16_t* output, size_t count,
              size_t stride);
};

static_assert(sizeof(Butterworth) == 384);
static_assert(offsetof(Butterworth, feedforward) == 88);
static_assert(offsetof(Butterworth, inputs) == 176);
static_assert(offsetof(Butterworth, outputs) == 264);
static_assert(offsetof(Butterworth, gain) == 352);
static_assert(offsetof(Butterworth, order) == 360);

}
