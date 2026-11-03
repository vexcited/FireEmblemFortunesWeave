#include "nn/audio/commands.hpp"
#include "nn/audio/gain.hpp"
#include "nn/audio/mix.hpp"

#include <stddef.h>

extern "C" void* memset(void*, int, size_t);
extern "C" void* memcpy(void*, const void*, size_t);

#pragma clang fp contract(off)

namespace nn::audio::dsp {

static_assert(offsetof(VolumeCommand, gain) == 0x1c);
static_assert(offsetof(VolumeRampCommand, start_gain) == 0x18);
static_assert(offsetof(MixCommand, high_precision) == 0x17);
static_assert(offsetof(MixRampCommand, start_gain) == 0x20);
static_assert(offsetof(MixRampGroupedCommand, inputs) == 0x20);
static_assert(offsetof(MixRampGroupedCommand, outputs) == 0x50);
static_assert(offsetof(MixRampGroupedCommand, start_gains) == 0x80);
static_assert(offsetof(MixRampGroupedCommand, end_gains) == 0xe0);
static_assert(offsetof(FillBufferU8Command, size) == 0x1c);

static int Divide(int value, int divisor) {
  int result;
  asm("sdiv %w0, %w1, %w2" : "=r"(result) : "r"(value), "r"(divisor));
  return result;
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

template<>
void CommandListProcessor::ProcessCommand(const VolumeCommand* command) {
  ApplyUniformGain(GetMixBuffer(command->output), GetMixBuffer(command->input),
    command->gain, sample_count, command->fraction);
}

template<>
void CommandListProcessor::ProcessCommand(const VolumeRampCommand* command) {
  int32_t difference = uint32_t(command->end_gain) - command->start_gain;
  ApplyLinearEnvelopeGain(GetMixBuffer(command->output),
    GetMixBuffer(command->input), command->start_gain,
    Divide(difference, sample_count), sample_count, command->fraction);
}

template<>
void CommandListProcessor::ProcessCommand(const MixCommand* command) {
  ApplyMix(GetMixBuffer(command->output), GetMixBuffer(command->input),
    command->gain, sample_count, (command->high_precision & 1) != 0);
}

template<>
void CommandListProcessor::ProcessCommand(const MixRampCommand* command) {
  float step = Step(command->start_gain, command->end_gain, sample_count);
  *command->last_sample = ApplyMixRamp(GetMixBuffer(command->output),
    GetMixBuffer(command->input), command->start_gain, step, sample_count,
    (command->high_precision & 1) != 0);
}

template<>
void CommandListProcessor::ProcessCommand(
  const MixRampGroupedCommand* command) {
  for (int index = 0; index < command->count; ++index) {
    float start = command->start_gains[index];
    float end = command->end_gains[index];

    if (start == 0.0f && end == 0.0f) {
      command->last_samples[index] = 0;
    }
    else {
      float step = Step(start, end, sample_count);
      command->last_samples[index] = ApplyMixRamp(
        GetMixBuffer(command->outputs[index]),
        GetMixBuffer(command->inputs[index]), start, step, sample_count,
        (command->high_precision & 1) != 0);
    }
  }
}

template<>
void CommandListProcessor::ProcessCommand(const ClearMixBufferCommand*) {
  size_t bytes = uint64_t(int64_t(mix_buffer_count) * sample_count) << 2;
  memset(mix_buffers, 0, bytes);
}

template<>
void CommandListProcessor::ProcessCommand(const CopyMixBufferCommand* command) {
  int32_t input = uint32_t(command->input) * uint32_t(sample_count);
  int32_t output = uint32_t(command->output) * uint32_t(sample_count);

  if (input != output) {
    memcpy(mix_buffers + int64_t(output), mix_buffers + int64_t(input),
      uint64_t(int64_t(sample_count)) << 2);
  }
}

template<>
void CommandListProcessor::ProcessCommand(const FillMixBufferCommand* command) {
  if (sample_count < 1) {
    return;
  }

  for (int index = 0; index <= command->last_buffer_offset; ++index) {
    int32_t* output = GetMixBuffer(command->first_buffer + index);
    int32_t value = command->value;

    for (int64_t sample = 0; sample < sample_count; ++sample) {
      output[sample] = value;
    }
  }
}

template<>
void CommandListProcessor::ProcessCommand(const FillBufferU8Command* command) {
  memset(command->buffer, command->value, command->size);
}

}
