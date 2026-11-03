#include "nn/audio/operational_commands.hpp"

#include <stddef.h>

extern "C" void* memcpy(void*, const void*, size_t);
extern "C" void* memset(void*, int, size_t);
extern "C" uint64_t CurrentTick() asm("_ZN2nn2os13GetSystemTickEv");
extern "C" int64_t TickToTime(uint64_t)
  asm("_ZN2nn2os17ConvertToTimeSpanENS0_4TickE");
extern "C" uint64_t TickFrequency()
  asm("_ZN2nn2os22GetSystemTickFrequencyEv");

namespace nn::audio::dsp {

static_assert(offsetof(Upsample32KTo48KCommand, channels) == 0x2a);
static_assert(offsetof(Upsample32KTo48KCommand, output_count) == 0x2e);
static_assert(offsetof(Upsample32KTo48KCommand, output) == 0x30);
static_assert(offsetof(DownMix6chTo2chCommand, gains) == 0x30);
static_assert(offsetof(AuxCommand, send_info) == 0x20);
static_assert(offsetof(AuxCommand, enabled) == 0x4c);
static_assert(offsetof(CaptureCommand, enabled) == 0x3c);
static_assert(offsetof(AuxGroupedCommand, send_info) == 0x38);
static_assert(offsetof(AuxGroupedCommand, enabled) == 0x64);
static_assert(offsetof(CircularBufferSinkCommand, buffer) == 0x28);
static_assert(offsetof(PerformanceCommand, mode) == 0x18);

template<>
void CommandListProcessor::ProcessCommand(
  const Upsample32KTo48KCommand* command) {
  int count = sample_count;
  sample_count_copy = command->output_count;

  for (int index = 0; index < command->channels; ++index) {
    int channel = command->indices[index];
    int offset = uint32_t(sample_count_copy) * uint32_t(channel);
    SrcProcessFrame(command->output + offset,
      GetMixBuffer(command->first_input + channel), sample_count_copy, count,
      command->states + index);
  }
}

static int32_t DownMixSample(const DownMix6chTo2chCommand* command,
  const int32_t* front, const int32_t* center, const int32_t* subwoofer,
  const int32_t* rear, unsigned index) {
  uint64_t value = int64_t(command->gains[1]) * center[index];
  value += int64_t(command->gains[0]) * front[index];
  value += int64_t(command->gains[2]) * subwoofer[index];
  value += int64_t(command->gains[3]) * rear[index];
  return uint32_t((value + 0x8000) >> 16);
}

template<>
void CommandListProcessor::ProcessCommand(
  const DownMix6chTo2chCommand* command) {
  int32_t* input[6];
  int32_t* output[6];

  for (unsigned index = 0; index < 6; ++index) {
    input[index] = GetMixBuffer(command->inputs[index]);
    output[index] = GetMixBuffer(command->outputs[index]);
  }

  for (int index = 0; index < sample_count; ++index) {
    output[0][index] = DownMixSample(command, input[0], input[2], input[3],
      input[4], index);
    output[1][index] = DownMixSample(command, input[1], input[2], input[3],
      input[5], index);
  }

  memset(output[4], 0, uint64_t(int64_t(sample_count)) << 2);
  memset(output[5], 0, uint64_t(int64_t(sample_count)) << 2);
  memset(output[2], 0, uint64_t(int64_t(sample_count)) << 2);
  memset(output[3], 0, uint64_t(int64_t(sample_count)) << 2);
}

template<>
void CommandListProcessor::ProcessCommand(const AuxCommand* command) {
  int32_t* input = GetMixBuffer(command->input);
  int32_t* output = GetMixBuffer(command->output);

  if (command->enabled == 1) {
    WriteAuxBufferDsp(command->send_info, command->send_buffer,
      command->capacity, input, sample_count, command->offset,
      command->advance);
    uint32_t read = ReadAuxBufferDsp(command->return_info,
      command->return_buffer, command->capacity, output, sample_count,
      command->offset, command->advance);
    int32_t missing = uint32_t(sample_count) - read;

    if (missing != 0) {
      memset(output + int32_t(read), 0, uint64_t(int64_t(missing)) << 2);
    }
  }
  else {
    ResetAuxBufferDsp(&command->send_info->dsp);
    ResetAuxBufferDsp(&command->return_info->dsp);

    if (output != input) {
      memcpy(output, input, uint64_t(int64_t(sample_count)) << 2);
    }
  }
}

template<>
void CommandListProcessor::ProcessCommand(const CaptureCommand* command) {
  if (command->enabled == 1) {
    WriteAuxBufferDsp(command->info, command->buffer, command->capacity,
      GetMixBuffer(command->input), sample_count, command->offset,
      command->advance);
  }
  else {
    ResetAuxBufferDsp(&command->info->dsp);
  }
}

template<>
void CommandListProcessor::ProcessCommand(const AuxGroupedCommand* command) {
  if (command->enabled == 1) {
    int32_t* input[6] = {};

    for (int index = 0; index < command->channels; ++index) {
      input[index] = GetMixBuffer(command->inputs[index]);
    }

    WriteAuxBufferDspGrouped(command->send_info, command->send_buffer,
      command->capacity, input, command->channels, sample_count);
    int32_t* output[6] = {};

    for (int index = 0; index < command->channels; ++index) {
      output[index] = GetMixBuffer(command->outputs[index]);
    }

    ReadAuxBufferDspGrouped(command->return_info, command->return_buffer,
      command->capacity, output, command->channels, sample_count);
  }
  else {
    ResetAuxBufferDsp(&command->send_info->dsp);
    ResetAuxBufferDsp(&command->return_info->dsp);

    for (int index = 0; index < command->channels; ++index) {
      int32_t* input = GetMixBuffer(command->inputs[index]);
      int32_t* output = GetMixBuffer(command->outputs[index]);

      if (input != output) {
        memcpy(output, input, uint64_t(int64_t(sample_count)) << 2);
      }
    }
  }
}

template<>
void CommandListProcessor::ProcessCommand(
  const CircularBufferSinkCommand* command) {
  if (command->capacity_bytes < 1 || command->channels < 1 ||
      sample_count < 1) {
    return;
  }

  int offset = command->offset_bytes;

  for (int channel = 0; channel < command->channels; ++channel) {
    const volatile int32_t* input = GetMixBuffer(command->inputs[channel]);
    auto output = reinterpret_cast<volatile int16_t*>(
      static_cast<uint8_t*>(command->buffer) + offset);

    for (int index = 0; index < sample_count; ++index) {
      int value = input[index];
      value = value > -32768 ? value : -32768;
      output[index] = value < 32767 ? value : 32767;
    }

    int next = uint32_t(offset) + (uint32_t(sample_count) << 1);
    offset = next < command->capacity_bytes ? next : 0;
  }
}

static int64_t DivideSigned(int64_t value, int64_t divisor) {
  int64_t result;
  asm("sdiv %0, %1, %2" : "=r"(result) : "r"(value), "r"(divisor));
  return result;
}

template<>
void CommandListProcessor::ProcessCommand(const PerformanceCommand* command) {
  uint64_t now = TickToTime(CurrentTick());
  uint64_t seconds = idle_ticks / TickFrequency();
  uint64_t frequency = TickFrequency();
  uint64_t remainder = idle_ticks - idle_ticks / frequency * frequency;
  int64_t fraction = DivideSigned(remainder * 1000000000ul, TickFrequency());
  uint64_t elapsed = now - seconds * 1000000000ul - start_time_ns - fraction;
  uint32_t microseconds = int64_t(elapsed) / 1000;
  auto buffer = static_cast<uint8_t*>(command->buffer);

  if (command->mode == 1) {
    *reinterpret_cast<uint32_t*>(buffer + command->start_offset) = microseconds;
  }
  else if (command->mode == 2) {
    uint32_t start = *reinterpret_cast<uint32_t*>(
      buffer + command->start_offset);
    *reinterpret_cast<uint32_t*>(buffer + command->elapsed_offset)
      = microseconds - start;
    auto count = reinterpret_cast<uint32_t*>(buffer + command->count_offset);
    *count += 1;
  }
}

}
