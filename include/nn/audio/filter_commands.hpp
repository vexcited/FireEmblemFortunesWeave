#pragma once

#include "nn/audio/biquad.hpp"
#include "nn/audio/commands.hpp"

namespace nn::audio {

struct BiquadCommandState {
  BiquadFilterState filter;
  uint8_t reserved_10[16];
};

struct BiquadCommandBuffers {
  CommandHeader header;
  uint8_t reserved_10[8];
  int16_t input;
  int16_t output;
};

struct BiquadFilterCommand {
  BiquadCommandBuffers buffers;
  int16_t numerator[3];
  int16_t feedback[2];
  BiquadCommandState* state;
  uint8_t initialize;
  uint8_t floating;
};

struct BiquadFilterFloatCoeffCommand {
  BiquadCommandBuffers buffers;
  float numerator[3];
  float feedback[2];
  uint8_t reserved_30[8];
  BiquadCommandState* state;
  uint8_t initialize;
  uint8_t floating;
};

struct MultiTapBiquadFilterCommand {
  BiquadCommandBuffers buffers;
  uint8_t reserved_1c[2];
  int16_t numerator[2][3];
  int16_t feedback[2][2];
  uint8_t reserved_32[6];
  BiquadCommandState* states[2];
  uint8_t initialize[2];
  int8_t count;
};

struct MultiTapBiquadFilterFloatCoeffCommand {
  BiquadCommandBuffers buffers;
  uint8_t reserved_1c[4];
  float numerator[2][3];
  float feedback[2][2];
  uint8_t reserved_48[8];
  BiquadCommandState* states[2];
  uint8_t initialize[2];
  int8_t count;
};

struct BiquadFilterAndMixCommand {
  BiquadCommandBuffers buffers;
  int16_t numerator[3];
  int16_t feedback[2];
  BiquadCommandState* state;
  BiquadCommandState* saved_state;
  int32_t* last_sample;
  float start_gain;
  float end_gain;
  uint8_t initialize;
  uint8_t ramp;
  uint8_t save_state;
};

struct BiquadFilterAndMixFloatCoeffCommand {
  BiquadCommandBuffers buffers;
  float numerator[3];
  float feedback[2];
  uint8_t reserved_30[8];
  BiquadCommandState* state;
  BiquadCommandState* saved_state;
  int32_t* last_sample;
  float start_gain;
  float end_gain;
  uint8_t initialize;
  uint8_t ramp;
  uint8_t save_state;
};

struct MultiTapBiquadFilterAndMixCommand {
  BiquadCommandBuffers buffers;
  int16_t numerator[2][3];
  int16_t feedback[2][2];
  BiquadCommandState* states[2];
  BiquadCommandState* saved_states[2];
  int32_t* last_sample;
  float start_gain;
  float end_gain;
  uint8_t initialize[2];
  uint8_t ramp;
  uint8_t save_state;
};

struct MultiTapBiquadFilterAndMixFloatCoeffCommand {
  CommandHeader header;
  uint8_t reserved_10[12];
  int16_t input;
  int16_t output;
  float numerator[2][3];
  float feedback[2][2];
  BiquadCommandState* states[2];
  BiquadCommandState* saved_states[2];
  int32_t* last_sample;
  float start_gain;
  float end_gain;
  uint8_t initialize[2];
  uint8_t ramp;
  uint8_t save_state;
};

struct BiquadFilterCrossFadeCommand {
  BiquadCommandBuffers buffers;
  uint8_t mode;
  uint8_t reserved_1d[7];
  float old_numerator[3];
  float old_feedback[2];
  float new_numerator[3];
  float new_feedback[2];
  uint8_t reserved_4c[4];
  BiquadCommandState* state;
};

struct MultiTapBiquadFilterCrossFadeCommand {
  BiquadCommandBuffers buffers;
  uint8_t mode;
  uint8_t reserved_1d[7];
  float old_numerator[2][3];
  float old_feedback[2][2];
  float new_numerator[2][3];
  float new_feedback[2][2];
  uint8_t reserved_74[4];
  BiquadCommandState* states[2];
  int8_t count;
};

namespace dsp {

template<>
void CommandListProcessor::ProcessCommand(const BiquadFilterCommand*);
template<>
void CommandListProcessor::ProcessCommand(const BiquadFilterFloatCoeffCommand*);
template<>
void CommandListProcessor::ProcessCommand(const MultiTapBiquadFilterCommand*);
template<>
void CommandListProcessor::ProcessCommand(
  const MultiTapBiquadFilterFloatCoeffCommand*);
template<>
void CommandListProcessor::ProcessCommand(const BiquadFilterAndMixCommand*);
template<>
void CommandListProcessor::ProcessCommand(
  const BiquadFilterAndMixFloatCoeffCommand*);
template<>
void CommandListProcessor::ProcessCommand(
  const MultiTapBiquadFilterAndMixCommand*);
template<>
void CommandListProcessor::ProcessCommand(
  const MultiTapBiquadFilterAndMixFloatCoeffCommand*);
template<>
void CommandListProcessor::ProcessCommand(const BiquadFilterCrossFadeCommand*);
template<>
void CommandListProcessor::ProcessCommand(
  const MultiTapBiquadFilterCrossFadeCommand*);

}
}
