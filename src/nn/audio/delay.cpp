#include "nn/audio/delay.hpp"

extern "C" void* memcpy(void*, const void*, size_t);
extern "C" void* memset(void*, int, size_t);

namespace nn::audio {
namespace {

static int32_t Add(int32_t first, int32_t second) {
  return uint32_t(first) + uint32_t(second);
}

static int32_t Multiply(int32_t first, int32_t second) {
  return uint64_t(int64_t(first) * second) >> 14;
}

static int32_t ShiftInput(int32_t value) {
  return uint32_t(value) << 6;
}

}

void SetDelayEffectParameter(const DelayParameter* parameter,
  DelayState* state) {
  state->feedback = Multiply(parameter->feedback, 16056);
  state->diagonal_feedback = uint64_t(int64_t(state->feedback) *
    (16384 - int64_t(parameter->spread))) >> 14;
  int32_t spread = parameter->spread;

  if (parameter->channel_count == 4 || parameter->channel_count == 6) {
    spread >>= 1;
  }

  state->cross_feedback = Multiply(state->feedback, spread);
  state->filter_history = Multiply(parameter->lowpass, 15564);
  state->filter_input = uint32_t(16384) - state->filter_history;
}

void InitializeDelayEffect(const DelayParameter* parameter, DelayState* state,
  void* buffer) {
  memset(state, 0, sizeof(*state));
  auto* position = static_cast<int32_t*>(buffer);

  for (unsigned channel = 0; channel < parameter->channel_count; ++channel) {
    int32_t scaled = uint32_t(parameter->sample_rate >> 14) *
      uint32_t(parameter->maximum_delay_ms);
    int32_t capacity = scaled / 1000;
    auto& line = state->lines[channel];
    line.capacity = capacity;
    line.length = capacity;
    line.begin = position;
    line.end = reinterpret_cast<int32_t*>(uintptr_t(position) +
      uint64_t(uint32_t(capacity)) * 4 - 4);
    line.current = position;
    line.gain = 16384;
    scaled = uint32_t(parameter->sample_rate / 1000) *
      uint32_t(parameter->delay_ms);
    uint32_t length = Add(scaled >> 14, uint32_t(scaled) >> 13 & 1);
    length = length < line.capacity ? length : line.capacity;
    line.length = length;
    line.end = reinterpret_cast<int32_t*>(uintptr_t(position) +
      uint64_t(length) * 4 - 4);
    line.current = position;
    memset(position, 0, uint64_t(length) * 4);
    state->history[channel] = 0;
    position += capacity;
  }

  SetDelayEffectParameter(parameter, state);
}

void ApplyDelayEffect(const DelayParameter* parameter, DelayState* state,
  bool enabled, const int32_t** input, int32_t** output, int count) {
  unsigned channels = parameter->channel_count;

  if (!enabled || (channels != 0 && channels != 1 && channels != 2 &&
    channels != 4 && channels != 6)) {
    for (unsigned channel = 0; channel < channels; ++channel) {
      if (output[channel] != input[channel]) {
        memcpy(output[channel], input[channel], size_t(count) * 4);
      }
    }

    return;
  }

  if (!channels) {
    return;
  }

  uint32_t frames = channels == 1 ? uint32_t(count) :
    count > 0 ? uint32_t(count) : 0;

  for (uint32_t sample = 0; sample < frames; ++sample) {
    int32_t samples[6];
    int32_t delayed[6];
    int32_t feedback[6];

    for (unsigned channel = 0; channel < channels; ++channel) {
      samples[channel] = ShiftInput(input[channel][sample]);
      delayed[channel] = *state->lines[channel].current;
    }

    if (channels == 1) {
      feedback[0] = Add(Multiply(parameter->input_gain, samples[0]),
        Multiply(parameter->feedback, delayed[0]));
    }
    else {
      for (unsigned channel = 0; channel < channels; ++channel) {
        feedback[channel] = Add(Multiply(state->diagonal_feedback,
          delayed[channel]), Multiply(parameter->input_gain,
          samples[channel]));
      }

      if (channels == 2) {
        feedback[0] = Add(feedback[0],
          Multiply(state->cross_feedback, delayed[1]));
        feedback[1] = Add(feedback[1],
          Multiply(state->cross_feedback, delayed[0]));
      }
      else if (channels == 4) {
        int32_t first = Multiply(state->cross_feedback,
          Add(delayed[2], delayed[1]));
        int32_t second = Multiply(state->cross_feedback,
          Add(delayed[3], delayed[0]));
        feedback[0] = Add(feedback[0], first);
        feedback[1] = Add(feedback[1], second);
        feedback[2] = Add(feedback[2], second);
        feedback[3] = Add(feedback[3], first);
      }
      else {
        static constexpr unsigned cross[6][2] = {
          {4, 2}, {5, 2}, {1, 0}, {0, 0}, {5, 0}, {4, 1},
        };

        for (unsigned channel = 0; channel < channels; ++channel) {
          if (channel == 3) {
            feedback[channel] = Add(Multiply(parameter->feedback,
              delayed[channel]), Multiply(parameter->input_gain,
              samples[channel]));
          }
          else {
            feedback[channel] = Add(feedback[channel],
              Multiply(state->cross_feedback, Add(delayed[cross[channel][0]],
              delayed[cross[channel][1]])));
          }
        }
      }
    }

    for (unsigned channel = 0; channel < channels; ++channel) {
      int32_t filtered = Add(Multiply(state->history[channel],
        state->filter_history), Multiply(feedback[channel],
        state->filter_input));
      state->history[channel] = filtered;
      auto& line = state->lines[channel];
      *line.current = filtered;
      ++line.current;

      if (uintptr_t(line.current) > uintptr_t(line.end)) {
        line.current = line.begin;
      }

      int32_t result = Add(Multiply(delayed[channel], parameter->wet_gain),
        Multiply(samples[channel], parameter->dry_gain));
      output[channel][sample] = result >> 6;
    }
  }
}

}
