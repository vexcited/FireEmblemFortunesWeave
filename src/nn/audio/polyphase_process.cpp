#include "nn/audio/polyphase_resampler.hpp"

namespace nn::audio {

namespace {

static void Filter(PolyphaseResamplerState& state, const int16_t* input,
  int16_t* output, uint32_t loaded) {
  if (!state.channels) {
    return;
  }

  const int16_t* coefficients = state.coefficients[state.phase];

  for (uint32_t channel = 0; channel < state.channels; ++channel) {
    uint32_t accumulator = 0;
    uint32_t retained = state.taps - loaded;

    for (uint32_t sample = 0; sample < retained; ++sample) {
      accumulator += int32_t(coefficients[sample]) *
        state.history[channel][loaded + sample];
    }

    for (uint32_t sample = 0; sample < loaded; ++sample) {
      accumulator += int32_t(coefficients[retained + sample]) *
        input[uint64_t(sample) * state.channels + channel];
    }

    output[channel] = accumulator >> 15;
  }
}

static void SaveHistory(PolyphaseResamplerState& state,
  const int16_t* input, uint32_t loaded) {
  if (loaded >= state.taps) {
    for (uint32_t channel = 0; channel < state.channels; ++channel) {
      for (uint32_t sample = 0; sample < state.taps; ++sample) {
        state.history[channel][sample] =
          input[uint64_t(sample) * state.channels + channel];
      }
    }
  }
  else {
    for (uint32_t sample = 0; sample < loaded; ++sample) {
      for (uint32_t channel = 0; channel < state.channels; ++channel) {
        int16_t* history = state.history[channel];

        for (uint32_t tap = 0; tap + 1 < state.taps; ++tap) {
          history[tap] = history[tap + 1];
        }

        history[state.taps - 1] = input[channel];
      }

      input += state.channels;
    }
  }
}

static void AdvancePhase(PolyphaseResamplerState& state) {
  uint8_t next = state.phase + 1;
  state.phase = next == state.numerator ? 0 : next;
}

}

namespace detail {

uint32_t InterpolatePolyphase(PolyphaseResamplerState* pointer,
  const int16_t* input, int16_t* output, uint32_t count) {
  auto& state = *pointer;
  uint32_t loaded = 0;
  uint32_t produced = 0;

  if (!count) {
    return 0;
  }

  do {
    if (state.consumed < state.next_consumed) {
      if (loaded >= state.taps) {
        input += state.channels;
      }
      else {
        ++loaded;
      }

      --count;
    }

    state.remainder += state.increment;

    if (state.remainder >= state.numerator) {
      state.remainder -= state.numerator;
      state.next_consumed = 1;
    }
    else {
      state.next_consumed = 0;
    }

    Filter(state, input, output, loaded);
    output += state.channels;
    ++produced;
    AdvancePhase(state);
  } while (count);

  SaveHistory(state, input, loaded);
  return produced;
}

uint32_t DecimatePolyphase(PolyphaseResamplerState* pointer,
  const int16_t* input, int16_t* output, uint32_t count) {
  auto& state = *pointer;
  uint32_t loaded = 0;
  uint32_t produced = 0;

  do {
    while (state.consumed < state.next_consumed) {
      if (loaded >= state.taps) {
        input += state.channels;
      }
      else {
        ++loaded;
      }

      ++state.consumed;
      --count;

      if (!count && state.consumed != state.next_consumed) {
        SaveHistory(state, input, loaded);
        return produced;
      }
    }

    state.remainder += state.increment;

    if (int16_t(state.remainder) < 0) {
      state.remainder += state.numerator;
      state.next_consumed = state.lower;
    }
    else {
      state.next_consumed = state.upper;
    }

    state.consumed = 0;
    Filter(state, input, output, loaded);
    output += state.channels;
    ++produced;
    AdvancePhase(state);
  } while (count);

  SaveHistory(state, input, loaded);
  return produced;
}

uint32_t IdentityPolyphase(PolyphaseResamplerState*, const int16_t*,
  int16_t*, uint32_t) {
  return 0;
}

}

uint32_t polyphaseResample(void* opaque, const int16_t* input,
  int16_t* output, uint32_t count) {
  auto* state = static_cast<PolyphaseResamplerState*>(opaque);
  return state->process(state, input, output, count);
}

uint32_t ProcessPolyphaseResamplerBuffer(PolyphaseResamplerType* type,
  int* produced, int16_t* output, size_t output_size, const int16_t* input,
  int count) {
  uint32_t bytes = uint32_t(count) * (type->flags & 127) * 2;
  uint32_t required = estimatePolyphaseResamplerOutputBufferSize(type->state,
    bytes, false);

  if (output_size < required) {
    return 0x899;
  }

  *produced = type->state->process(type->state, input, output, count);
  return 0;
}

}
