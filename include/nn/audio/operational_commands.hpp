#pragma once

#include "nn/audio/auxiliary.hpp"
#include "nn/audio/commands.hpp"
#include "nn/audio/resample.hpp"

namespace nn::audio {

struct Upsample32KTo48KCommand {
  CommandHeader header;
  int16_t first_input;
  int8_t indices[24];
  int8_t channels;
  uint8_t reserved_2b[3];
  int16_t output_count;
  int32_t* output;
  UpsamplerState* states;
};

struct DownMix6chTo2chCommand {
  CommandHeader header;
  uint8_t reserved_10[8];
  int16_t inputs[6];
  int16_t outputs[6];
  int32_t gains[4];
};

struct AuxCommand {
  CommandHeader header;
  uint8_t reserved_10[8];
  int16_t input;
  int16_t output;
  uint8_t reserved_1c[4];
  AuxBufferInfo* send_info;
  AuxBufferInfo* return_info;
  uintptr_t send_buffer;
  uintptr_t return_buffer;
  uint32_t capacity;
  uint32_t offset;
  uint32_t advance;
  uint8_t enabled;
};

struct CaptureCommand {
  CommandHeader header;
  uint8_t reserved_10[8];
  int16_t input;
  uint8_t reserved_1a[6];
  AuxBufferInfo* info;
  uintptr_t buffer;
  uint32_t capacity;
  uint32_t offset;
  uint32_t advance;
  uint8_t enabled;
};

struct AuxGroupedCommand {
  CommandHeader header;
  int8_t channels;
  uint8_t reserved_11[7];
  int16_t inputs[6];
  int16_t outputs[6];
  uint8_t reserved_30[8];
  AuxBufferInfo* send_info;
  AuxBufferInfo* return_info;
  uintptr_t send_buffer;
  uintptr_t return_buffer;
  uint32_t capacity;
  uint8_t reserved_5c[8];
  uint8_t enabled;
};

struct CircularBufferSinkCommand {
  CommandHeader header;
  uint8_t reserved_10[8];
  int32_t channels;
  int16_t inputs[6];
  void* buffer;
  int32_t capacity_bytes;
  int32_t offset_bytes;
};

struct PerformanceCommand {
  CommandHeader header;
  void* buffer;
  int32_t mode;
  int32_t start_offset;
  int32_t count_offset;
  int32_t elapsed_offset;
};

namespace dsp {

template<>
void CommandListProcessor::ProcessCommand(const Upsample32KTo48KCommand*);
template<>
void CommandListProcessor::ProcessCommand(const DownMix6chTo2chCommand*);
template<>
void CommandListProcessor::ProcessCommand(const AuxCommand*);
template<>
void CommandListProcessor::ProcessCommand(const CaptureCommand*);
template<>
void CommandListProcessor::ProcessCommand(const AuxGroupedCommand*);
template<>
void CommandListProcessor::ProcessCommand(const CircularBufferSinkCommand*);
template<>
void CommandListProcessor::ProcessCommand(const PerformanceCommand*);

}
}
