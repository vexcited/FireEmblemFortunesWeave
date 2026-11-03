#pragma once

#include <stddef.h>
#include <stdint.h>

namespace nn::audio {

struct AdpcmContext {
  uint16_t predictor_scale;
  int16_t history[2];
};

static_assert(sizeof(AdpcmContext) == 6);

namespace dsp {

struct DecodeArg {
  const void* buffer;
  uint32_t buffer_size;
  int32_t start;
  int32_t end;
  int32_t channels;
  const int16_t* coefficients;
  AdpcmContext* context;
  int32_t channel;
  int32_t offset;
  int32_t count;
  uint32_t reserved;
};

static_assert(sizeof(DecodeArg) == 56);
static_assert(offsetof(DecodeArg, coefficients) == 24);
static_assert(offsetof(DecodeArg, count) == 48);

int DecodePcm16(int16_t* output, const DecodeArg& argument);
int DecodePcmFloat(int16_t* output, const DecodeArg& argument);
int DecodeAdpcm(int16_t* output, const DecodeArg& argument);

}
}
