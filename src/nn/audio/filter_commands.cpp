#include "nn/audio/filter_commands.hpp"

#include <stddef.h>

#pragma clang fp contract(off)

namespace nn::audio::dsp {

static_assert(sizeof(BiquadCommandState) == 32);
static_assert(sizeof(BiquadCommandBuffers) == 0x1c);
static_assert(offsetof(BiquadFilterCommand, state) == 0x28);
static_assert(offsetof(BiquadFilterFloatCoeffCommand, state) == 0x38);
static_assert(offsetof(MultiTapBiquadFilterCommand, states) == 0x38);
static_assert(offsetof(MultiTapBiquadFilterCommand, count) == 0x4a);
static_assert(offsetof(MultiTapBiquadFilterFloatCoeffCommand, states) == 0x50);
static_assert(offsetof(MultiTapBiquadFilterFloatCoeffCommand, count) == 0x62);
static_assert(offsetof(BiquadFilterAndMixCommand, initialize) == 0x48);
static_assert(offsetof(BiquadFilterAndMixFloatCoeffCommand, initialize)
  == 0x58);
static_assert(offsetof(MultiTapBiquadFilterAndMixCommand, initialize) == 0x60);
static_assert(offsetof(MultiTapBiquadFilterAndMixFloatCoeffCommand, input)
  == 0x1c);
static_assert(offsetof(MultiTapBiquadFilterAndMixFloatCoeffCommand, initialize)
  == 0x78);
static_assert(offsetof(BiquadFilterCrossFadeCommand, state) == 0x50);
static_assert(offsetof(MultiTapBiquadFilterCrossFadeCommand, states) == 0x78);
static_assert(offsetof(MultiTapBiquadFilterCrossFadeCommand, count) == 0x88);

template<unsigned Count>
static const float* Coefficients(const int16_t (&source)[Count],
  float (&converted)[Count]) {
  for (unsigned index = 0; index < Count; ++index) {
    converted[index] = float(source[index]) * 0x1p-14f;
  }

  return converted;
}

template<unsigned Count>
static const float* Coefficients(const float (&source)[Count],
  float (&)[Count]) {
  return source;
}

static float Step(float start, float end, int count) {
  float divisor;
  float difference;
  float result;
  asm volatile("scvtf %s0, %w1" : "=w"(divisor) : "r"(count));
  asm volatile("fsub %s0, %s1, %s2" : "=w"(difference)
               : "w"(end), "w"(start));
  asm volatile("fdiv %s0, %s1, %s2" : "=w"(result)
               : "w"(difference), "w"(divisor));
  return result;
}

static float ReciprocalCount(int count) {
  float divisor;
  float result;
  asm volatile("scvtf %s0, %w1" : "=w"(divisor) : "r"(count));
  asm volatile("fdiv %s0, %s1, %s2" : "=w"(result)
               : "w"(1.0f), "w"(divisor));
  return result;
}

static void PrepareState(BiquadCommandState* state,
  BiquadCommandState* saved, bool initialize, bool save) {
  if (initialize) {
    *state = {};
  }
  else if (save) {
    *saved = *state;
  }
  else {
    *state = *saved;
  }
}

template<class Command>
static void Filter(CommandListProcessor* processor, const Command* command) {
  int32_t* input = processor->GetMixBuffer(command->buffers.input);
  int32_t* output = processor->GetMixBuffer(command->buffers.output);
  BiquadCommandState* state = command->state;

  if (command->initialize == 1) {
    *state = {};
  }

  float numerator[3];
  float feedback[2];
  const float* a = Coefficients(command->numerator, numerator);
  const float* b = Coefficients(command->feedback, feedback);

  if (command->floating == 1) {
    ApplyBiquadFilterFloat(output, input, a, b, &state->filter,
      processor->sample_count);
  }
  else {
    ApplyBiquadFilterInt(output, input, a, b, &state->filter,
      processor->sample_count);
  }
}

template<>
void CommandListProcessor::ProcessCommand(const BiquadFilterCommand* command) {
  Filter(this, command);
}

template<>
void CommandListProcessor::ProcessCommand(
  const BiquadFilterFloatCoeffCommand* command) {
  Filter(this, command);
}

template<class Command>
static void MultiFilter(CommandListProcessor* processor,
  const Command* command) {
  int32_t* input = processor->GetMixBuffer(command->buffers.input);
  int32_t* output = processor->GetMixBuffer(command->buffers.output);
  BiquadCommandState* states[2] = {};

  for (int index = 0; index < command->count; ++index) {
    states[index] = command->states[index];

    if (command->initialize[index] == 1) {
      *states[index] = {};
    }
  }

  if (command->count == 1 || command->count == 2) {
    float numerator[2][3];
    float feedback[2][2];
    const float* a = Coefficients(command->numerator[0], numerator[0]);
    const float* b = Coefficients(command->feedback[0], feedback[0]);

    if (command->count == 1) {
      ApplyBiquadFilterFloat(output, input, a, b, &states[0]->filter,
        processor->sample_count);
    }
    else {
      const float* c = Coefficients(command->numerator[1], numerator[1]);
      const float* d = Coefficients(command->feedback[1], feedback[1]);
      ApplyDoubleBiquadFilterFloat(output, input, a, b, &states[0]->filter,
        c, d, &states[1]->filter, processor->sample_count);
    }
  }
}

template<>
void CommandListProcessor::ProcessCommand(
  const MultiTapBiquadFilterCommand* command) {
  MultiFilter(this, command);
}

template<>
void CommandListProcessor::ProcessCommand(
  const MultiTapBiquadFilterFloatCoeffCommand* command) {
  MultiFilter(this, command);
}

template<class Command>
static void MixFilter(CommandListProcessor* processor,
  const Command* command) {
  int32_t* input = processor->GetMixBuffer(command->buffers.input);
  int32_t* output = processor->GetMixBuffer(command->buffers.output);
  PrepareState(command->state, command->saved_state,
    command->initialize == 1, command->save_state == 1);
  float numerator[3];
  float feedback[2];
  const float* a = Coefficients(command->numerator, numerator);
  const float* b = Coefficients(command->feedback, feedback);

  if (command->ramp == 1) {
    float step = Step(command->start_gain, command->end_gain,
      processor->sample_count);
    *command->last_sample = ApplyBiquadFilterAndMixRamp(output, input, a, b,
      &command->state->filter, processor->sample_count, command->start_gain,
      step);
  }
  else {
    ApplyBiquadFilterAndMix(output, input, a, b, &command->state->filter,
      processor->sample_count, command->end_gain);
  }
}

template<>
void CommandListProcessor::ProcessCommand(
  const BiquadFilterAndMixCommand* command) {
  MixFilter(this, command);
}

template<>
void CommandListProcessor::ProcessCommand(
  const BiquadFilterAndMixFloatCoeffCommand* command) {
  MixFilter(this, command);
}

template<class Command>
static void MixDoubleFilter(CommandListProcessor* processor,
  const Command* command, int input_index, int output_index) {
  PrepareState(command->states[0], command->saved_states[0],
    command->initialize[0] == 1, command->save_state == 1);
  PrepareState(command->states[1], command->saved_states[1],
    (command->initialize[1] & 1) != 0, (command->save_state & 1) != 0);
  int32_t* input = processor->GetMixBuffer(input_index);
  int32_t* output = processor->GetMixBuffer(output_index);
  float numerator[2][3];
  float feedback[2][2];
  const float* a = Coefficients(command->numerator[0], numerator[0]);
  const float* b = Coefficients(command->feedback[0], feedback[0]);
  const float* c = Coefficients(command->numerator[1], numerator[1]);
  const float* d = Coefficients(command->feedback[1], feedback[1]);

  if (command->ramp == 1) {
    float step = Step(command->start_gain, command->end_gain,
      processor->sample_count);
    *command->last_sample = ApplyDoubleBiquadFilterAndMixRamp(output, input,
      a, b, &command->states[0]->filter, c, d, &command->states[1]->filter,
      processor->sample_count, command->start_gain, step);
  }
  else {
    ApplyDoubleBiquadFilterAndMix(output, input, a, b,
      &command->states[0]->filter, c, d, &command->states[1]->filter,
      processor->sample_count, command->end_gain);
  }
}

template<>
void CommandListProcessor::ProcessCommand(
  const MultiTapBiquadFilterAndMixCommand* command) {
  MixDoubleFilter(this, command, command->buffers.input,
    command->buffers.output);
}

template<>
void CommandListProcessor::ProcessCommand(
  const MultiTapBiquadFilterAndMixFloatCoeffCommand* command) {
  MixDoubleFilter(this, command, command->input, command->output);
}

template<>
void CommandListProcessor::ProcessCommand(
  const BiquadFilterCrossFadeCommand* command) {
  int32_t* input = GetMixBuffer(command->buffers.input);
  int32_t* output = GetMixBuffer(command->buffers.output);
  float step = ReciprocalCount(sample_count);
  BiquadFilterState* state = &command->state->filter;

  switch (command->mode) {
    case 0:
      ApplyBiquadFilterFloat(output, input, command->new_numerator,
        command->new_feedback, state, sample_count);
      break;
    case 1:
      ApplyBiquadFilterCrossFadeLinear(output, input, command->old_numerator,
        command->old_feedback, command->new_numerator, command->new_feedback,
        state, sample_count, step);
      break;
    case 2:
      ApplyBiquadFilterCrossFadeSqrt(output, input, command->old_numerator,
        command->old_feedback, command->new_numerator, command->new_feedback,
        state, sample_count, step);
      break;
  }
}

template<>
void CommandListProcessor::ProcessCommand(
  const MultiTapBiquadFilterCrossFadeCommand* command) {
  int32_t* input = GetMixBuffer(command->buffers.input);
  int32_t* output = GetMixBuffer(command->buffers.output);
  BiquadCommandState* states[2] = {};

  for (int index = 0; index < command->count; ++index) {
    states[index] = command->states[index];
  }

  float step = ReciprocalCount(sample_count);

  if (command->count == 1) {
    BiquadFilterState* state = &states[0]->filter;

    switch (command->mode) {
      case 0:
        ApplyBiquadFilterFloat(output, input, command->new_numerator[0],
          command->new_feedback[0], state, sample_count);
        break;
      case 1:
        ApplyBiquadFilterCrossFadeLinear(output, input,
          command->old_numerator[0], command->old_feedback[0],
          command->new_numerator[0], command->new_feedback[0], state,
          sample_count, step);
        break;
      case 2:
        ApplyBiquadFilterCrossFadeSqrt(output, input,
          command->old_numerator[0], command->old_feedback[0],
          command->new_numerator[0], command->new_feedback[0], state,
          sample_count, step);
        break;
    }
  }
  else if (command->count == 2) {
    BiquadFilterState* first = &states[0]->filter;
    BiquadFilterState* second = &states[1]->filter;

    switch (command->mode) {
      case 0:
        ApplyDoubleBiquadFilterFloat(output, input, command->new_numerator[0],
          command->new_feedback[0], first, command->new_numerator[1],
          command->new_feedback[1], second, sample_count);
        break;
      case 1:
        ApplyDoubleBiquadFilterCrossFadeLinear(output, input,
          command->old_numerator[0], command->old_feedback[0],
          command->new_numerator[0], command->new_feedback[0], first,
          command->old_numerator[1], command->old_feedback[1],
          command->new_numerator[1], command->new_feedback[1], second,
          sample_count, step);
        break;
      case 2:
        ApplyDoubleBiquadFilterCrossFadeSqrt(output, input,
          command->old_numerator[0], command->old_feedback[0],
          command->new_numerator[0], command->new_feedback[0], first,
          command->old_numerator[1], command->old_feedback[1],
          command->new_numerator[1], command->new_feedback[1], second,
          sample_count, step);
        break;
    }
  }
}

}
