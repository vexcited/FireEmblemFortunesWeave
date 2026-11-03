#include "nn/audio/output_resampler.hpp"

extern "C" void* memset(void*, int, size_t);

namespace nn::audio {
namespace {

#include "output_resampler_tables.inc"

static int32_t Gain(float value) {
  int32_t result;
  asm volatile("fcvtzs %w0, %s1, #15" : "=r"(result) : "w"(value));
  return result;
}

static void Insert(ResamplerState* state, int16_t value) {
  int position = state->write_position;
  state->write_position = uint16_t(position + 1);
  state->history[position] = int32_t(value) * 256;
  position = state->write_position;

  if (position > state->history_end) {
    position -= 2 * state->taps;
  }

  state->write_position = position;
}

static uint32_t FilterIndex(const ResamplerState* state, uint32_t phase,
  bool downsample) {
  if (downsample) {
    return (uint64_t(state->ratio) * phase + 0x8000) >> 16;
  }

  return phase;
}

static int32_t Filter(ResamplerState* state, const int16_t* input, int stride,
  bool direct, bool downsample) {
  uint32_t phase = state->phase & 0x7FFF;
  uint32_t step = downsample ? state->ratio >> 1 : 0x8000;
  uint32_t backwardIndex = FilterIndex(state, phase, downsample);
  uint32_t forwardIndex = FilterIndex(state, 0x8000 - phase, downsample);
  int backward = state->read_position;
  int forward = backward + 1;

  if (forward > state->history_end) {
    forward -= 2 * state->taps;
  }

  const int16_t* previous = input - int64_t(stride) * (state->taps + 1);
  const int16_t* next = previous + stride;
  uint64_t first = 0;
  uint64_t second = 0;

  for (int tap = 0; tap < state->taps; ++tap) {
    int32_t left = direct ? int32_t(*previous) * 256 :
      state->history[backward];
    int32_t right = direct ? int32_t(*next) * 256 : state->history[forward];
    first += int64_t(left) * state->coefficients[backwardIndex >> 7];
    second += int64_t(right) * state->coefficients[forwardIndex >> 7];
    backwardIndex += step;
    forwardIndex += step;
    previous -= stride;
    next += stride;
    --backward;
    ++forward;

    if (backward < state->history_begin) {
      backward = state->history_end;
    }

    if (forward > state->history_end) {
      forward = state->history_begin;
    }
  }

  return uint32_t(first >> 15) + uint32_t(second >> 15);
}

static int16_t Scale(int32_t sample, uint32_t ratio, int32_t gain,
  bool downsample) {
  if (downsample) {
    uint64_t product = uint64_t(int64_t(sample)) * 65536 * ratio;
    sample = (product + 0x80000000) >> 32;
  }

  sample = uint64_t(int64_t(sample) * gain) >> 15;
  sample >>= 8;
  sample = sample <= -32768 ? -32768 : sample;
  sample = sample >= 32767 ? 32767 : sample;
  return sample;
}

}

void InitializeResampler(ResamplerState* state, unsigned ratio, bool quality) {
  uint32_t limited = ratio > 8192 ? ratio : 8192;
  limited = limited < 0x80000000 ? limited : 0x80000000;
  state->coefficients = quality ? LongCoefficients : ShortCoefficients;
  uint32_t taps = quality ? 8 : 4;

  if (ratio < 65536) {
    taps = (quality ? 524288 : 262144) / limited;
  }

  state->ratio = limited;
  state->taps = taps;
  state->read_position = 68;
  state->history_begin = 69 - taps;
  state->history_end = 68 + taps;
  state->write_position = state->history_begin;
  state->phase = 0;
  state->phase_step = uint32_t(0x80000000) / limited;
  memset(state->history, 0, 570);
  state->marker = 0xFACE;
}

int ResampleOutputFrame(ResamplerState* state, int stride, int channel,
  const int16_t* input, int16_t* output, int inputCount, int outputCount,
  float gain) {
  if (!input || !output) {
    return 0;
  }

  const int16_t* position = input + channel;
  int16_t* destination = output + channel;
  bool downsample = state->ratio < 65536;
  int consumed = 0;

  if (outputCount > 0) {
    int32_t multiplier = Gain(gain);

    for (int frame = 0; frame < outputCount; ++frame) {
      uint32_t previous = state->phase;
      state->phase += state->phase_step;
      uint32_t advance = (state->phase >> 15) - (previous >> 15);
      uint16_t amount = advance;
      bool direct = consumed > 2 * state->taps;

      if (direct) {
        consumed += amount;
        position += int64_t(amount) * stride;
      }
      else if (amount != 0) {
        const int16_t* retained = state->retained;

        for (unsigned index = 0; index < amount; ++index) {
          int16_t value;

          if (downsample && state->retained_count > 0) {
            value = *retained++;
            --state->retained_count;
          }
          else {
            value = *position;
            position += stride;
            ++consumed;
          }

          Insert(state, value);
        }

        int16_t read = uint16_t(state->read_position) + advance;

        if (read > state->history_end) {
          read -= 2 * state->taps;
        }

        state->read_position = read;
      }

      int32_t filtered = Filter(state, position, stride, direct, downsample);
      *destination = Scale(filtered, state->ratio, multiplier, downsample);
      destination += stride;
    }
  }

  state->read_position = 68;
  state->write_position = state->history_begin;
  const int16_t* history = position - int64_t(2 * stride) * state->taps;

  for (int index = 0; index < 2 * state->taps; ++index) {
    int write = state->write_position;
    state->write_position = uint16_t(write + 1);
    state->history[write] = int32_t(*history) * 256;
    history += stride;
  }

  state->write_position = state->history_begin;

  if (downsample) {
    state->retained_count = uint32_t(inputCount) - consumed;

    if (state->retained_count > 8) {
      return -1;
    }

    for (int index = 0; index < state->retained_count; ++index) {
      state->retained[index] = *history;
      history += stride;
    }
  }

  return 0;
}

int ResampleOutputGetNextFrameSize(const ResamplerState* state,
  int inputCount) {
  int32_t initial = uint64_t(int64_t(inputCount) * state->ratio) >> 16;
  int64_t result = initial;
  uint64_t previous = uint64_t(result - 1) * state->phase_step + state->phase;
  uint64_t next = uint64_t(result + 1) * state->phase_step + state->phase;
  uint32_t phase = state->phase >> 15;
  int32_t required = uint32_t(inputCount) + state->retained_count;
  int32_t consumed;

  do {
    consumed = uint32_t(next >> 15) - phase;
    ++result;
    previous += state->phase_step;
    next += state->phase_step;
  } while (consumed < required);

  if (consumed > required) {
    do {
      consumed = uint32_t(previous >> 15) - phase;
      --result;
      previous -= state->phase_step;
    } while (consumed > required);
  }

  return result;
}

}
