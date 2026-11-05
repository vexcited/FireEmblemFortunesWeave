#pragma once

#include <stddef.h>
#include <stdint.h>

namespace nn::audio {

struct AdpcmContext {
  uint16_t predScale;
  int16_t history[2];
};

struct AdpcmHeaderInfo {
  int16_t coefficients[16];
  uint8_t reserved[32];
  AdpcmContext loopContext;
  int sampleCount;
  int sampleRate;
  bool loop;
  int loopBeginSamplePosition;
  int loopEndSamplePosition;
};

static_assert(offsetof(AdpcmHeaderInfo, loopContext) == 64);
static_assert(offsetof(AdpcmHeaderInfo, sampleCount) == 72);
static_assert(offsetof(AdpcmHeaderInfo, loopEndSamplePosition) == 88);

void ParseAdpcmHeader(AdpcmHeaderInfo* info, const void* header, size_t size);

}
