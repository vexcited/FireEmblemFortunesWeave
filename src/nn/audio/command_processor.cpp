#include "nn/audio/commands.hpp"

#include <stddef.h>

namespace nn::os {
uint64_t GetSystemTick();
int64_t ConvertToTimeSpan(uint64_t tick)
  asm("_ZN2nn2os17ConvertToTimeSpanENS0_4TickE");
}

namespace nn::audio::dsp {

static_assert(sizeof(CommandHeader) == 0x10);
static_assert(sizeof(CommandListHeader) == 0x20);
static_assert(sizeof(CommandListProcessor) == 0x60);
static_assert(offsetof(CommandListProcessor, sample_count) == 0x20);
static_assert(offsetof(CommandListProcessor, mix_buffers) == 0x30);
static_assert(offsetof(CommandListProcessor, processed_count) == 0x3c);
static_assert(offsetof(CommandListProcessor, time_adjustment) == 0x50);

CommandListProcessor::CommandListProcessor()
  : list(nullptr), current(nullptr), list_size(0), process_time_max(0),
    command_count(0), sample_count(0), sample_count_copy(0), sample_rate(0),
    mix_buffers(nullptr), mix_buffer_count(0), processed_count(0),
    start_time_ns(0), last_tick(0), time_adjustment(0), idle_ticks(0) {
}

void CommandListProcessor::Setup(const void* buffer, uint64_t size) {
  list = static_cast<const CommandListHeader*>(buffer);
  current = reinterpret_cast<const CommandHeader*>(list + 1);
  list_size = size;
  mix_buffer_count = list->mix_buffer_count;
  sample_count = list->sample_count;
  sample_count_copy = list->sample_count;
  sample_rate = list->sample_rate;
  command_count = list->command_count;
  mix_buffers = list->mix_buffers;
  processed_count = 0;
}

void CommandListProcessor::SetProcessTimeMax(uint32_t ticks) {
  process_time_max = ticks;
}

int32_t* CommandListProcessor::GetMixBuffer(int index) {
  int32_t offset = uint32_t(sample_count) * uint32_t(index);
  return mix_buffers + int64_t(offset);
}

int CommandListProcessor::GetSampleCount() const {
  return sample_count;
}

int CommandListProcessor::GetProcessedCommandCount() const {
  return processed_count;
}

int CommandListProcessor::GetRemainCommandCount() const {
  return uint32_t(command_count) - uint32_t(processed_count);
}

void CommandListProcessor::PreProcessCommands() {
  uint64_t tick = nn::os::GetSystemTick();

  if (processed_count != 0) {
    idle_ticks += tick - last_tick;
  }
  else {
    start_time_ns = nn::os::ConvertToTimeSpan(tick);
    idle_ticks = 0;
  }

  time_adjustment = 0;
}

void CommandListProcessor::PostProcessCommands() {
  last_tick = nn::os::GetSystemTick();
}

uint64_t CommandListProcessor::ProcessCommands() {
  uint64_t started = nn::os::GetSystemTick();

  while (processed_count < command_count) {
    const CommandHeader* command = current;

    if ((command->enabled & 1) != 0) {
      uint64_t estimated = nn::os::GetSystemTick() + command->estimated_ticks
        - (started + time_adjustment);

      if (estimated > process_time_max) {
        break;
      }

      DispatchCommand(command);
    }

    processed_count = uint32_t(processed_count) + 1;
    current = reinterpret_cast<const CommandHeader*>(
      reinterpret_cast<const uint8_t*>(current) + command->size);
  }

  return nn::os::GetSystemTick() - started;
}

uint64_t CommandListProcessor::Process() {
  PreProcessCommands();
  uint64_t elapsed = ProcessCommands();
  PostProcessCommands();
  return elapsed;
}

}
