#pragma once

#include "nn/audio/sample_decode.hpp"

namespace nn::audio::dsp {

struct WaveDecodeBuffer {
  const void* buffer;
  const AdpcmContext* context;
  uint32_t size;
  uint32_t reserved;
  int32_t start;
  int32_t end;
  int32_t loop_start;
  int32_t loop_end;
  int32_t loop_limit;
  uint8_t looping;
  uint8_t end_of_stream;
  uint8_t padding[2];
};

struct WaveDecodeState {
  uint64_t played;
  int32_t offset;
  int32_t buffer_index;
  int16_t history[8];
  int32_t phase;
  AdpcmContext context;
  uint8_t reserved_42[10];
  uint8_t valid[4];
  int32_t consumed_buffers;
  uint8_t reserved_60[180];
  int32_t loop_count;
};

struct DecodeFromWaveBuffersArgs {
  int32_t format;
  uint32_t reserved_4;
  int32_t* output;
  WaveDecodeState* state;
  const WaveDecodeBuffer* buffers;
  int32_t channel;
  int32_t channels;
  uint8_t mode;
  uint8_t reserved_41[3];
  int32_t pitch;
  int32_t source_rate;
  int32_t target_rate;
  int32_t count;
  uint32_t reserved_60;
  const int16_t* coefficients;
  uint8_t reset_played_on_loop;
  uint8_t skip_resample;
  uint8_t reserved_74[6];
};

static_assert(sizeof(WaveDecodeBuffer) == 48);
static_assert(offsetof(WaveDecodeBuffer, looping) == 44);
static_assert(offsetof(WaveDecodeState, valid) == 52);
static_assert(offsetof(WaveDecodeState, loop_count) == 240);
static_assert(sizeof(DecodeFromWaveBuffersArgs) == 80);
static_assert(offsetof(DecodeFromWaveBuffersArgs, mode) == 40);
static_assert(offsetof(DecodeFromWaveBuffersArgs, coefficients) == 64);

void DecodeFromWaveBuffers(const DecodeFromWaveBuffersArgs& argument);

}
