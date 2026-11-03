#include "nn/audio/effect_commands.hpp"

#include <stddef.h>

namespace nn::audio::dsp {

static_assert(sizeof(EffectCommandInputs) == 0x30);
static_assert(offsetof(DelayCommand, status) == 0x64);
static_assert(offsetof(DelayCommand, state) == 0x68);
static_assert(offsetof(DelayCommand, enabled) == 0x78);
static_assert(offsetof(ReverbCommand, status) == 0x70);
static_assert(offsetof(ReverbCommand, state) == 0x78);
static_assert(offsetof(ReverbCommand, enabled) == 0x88);
static_assert(offsetof(I3dl2ReverbCommand, status) == 0x78);
static_assert(offsetof(I3dl2ReverbCommand, state) == 0x80);
static_assert(offsetof(I3dl2ReverbCommand, enabled) == 0x90);
static_assert(offsetof(LightLimiterCommandData, parameter) == 0x28);
static_assert(offsetof(LightLimiterCommandData, state) == 0x70);
static_assert(offsetof(LightLimiterCommandVersion1, enabled) == 0x80);
static_assert(offsetof(LightLimiterCommandVersion2, enabled) == 0x88);
static_assert(offsetof(CompressorCommand, state) == 0x68);
static_assert(offsetof(CompressorCommand, enabled) == 0x78);

struct EffectBuffers {
  const int32_t* inputs[6] = {};
  int32_t* outputs[6] = {};

  EffectBuffers(CommandListProcessor* processor, const int16_t* input_indices,
    const int16_t* output_indices, unsigned channels) {
    for (unsigned index = 0; index < channels; ++index) {
      inputs[index] = processor->GetMixBuffer(input_indices[index]);
      outputs[index] = processor->GetMixBuffer(output_indices[index]);
    }
  }
};

void ProcessDelayCommand(CommandListProcessor* processor,
  const DelayCommand* command) {
  EffectBuffers buffers(processor, command->buffers.inputs,
    command->buffers.outputs, command->parameter.channel_count);
  bool enabled = (command->enabled & 1) != 0;

  if (enabled) {
    if (command->status == 0) {
      InitializeDelayEffect(&command->parameter, command->state, command->work);
    }
    else if (command->status == 1) {
      SetDelayEffectParameter(&command->parameter, command->state);
    }
  }

  ApplyDelayEffect(&command->parameter, command->state, enabled,
    buffers.inputs, buffers.outputs, processor->sample_count);
}

void ProcessReverbCommand(CommandListProcessor* processor,
  const ReverbCommand* command) {
  EffectBuffers buffers(processor, command->buffers.inputs,
    command->buffers.outputs, command->parameter.channel_count);
  bool enabled = (command->enabled & 1) != 0;

  if (enabled) {
    if (command->status == 0) {
      InitializeReverbEffect(&command->parameter, command->state, command->work,
        (command->extended & 1) != 0);
    }
    else if (command->status == 1) {
      UpdateReverbEffectParameter(&command->parameter, command->state);
    }
  }

  ApplyReverbEffect(&command->parameter, command->state, enabled,
    buffers.inputs, buffers.outputs, processor->sample_count);
}

void ProcessI3dl2ReverbCommand(CommandListProcessor* processor,
  const I3dl2ReverbCommand* command) {
  EffectBuffers buffers(processor, command->buffers.inputs,
    command->buffers.outputs, command->parameter.channel_count);
  bool enabled = (command->enabled & 1) != 0;

  if (enabled) {
    if (command->status == 0) {
      InitializeI3dl2ReverbEffect(command->parameter, command->state,
        command->work);
    }
    else if (command->status == 1) {
      UpdateI3dl2ReverbEffectParameter(command->parameter, command->state,
        false);
    }
  }

  ApplyI3dl2ReverbEffect(command->parameter, command->state, enabled,
    buffers.inputs, buffers.outputs, processor->sample_count);
}

static void ProcessLightLimiter(CommandListProcessor* processor,
  const LightLimiterCommandData* command, uint8_t flags,
  LightLimiterStatisticsInternal* statistics) {
  EffectBuffers buffers(processor, command->inputs, command->outputs,
    command->parameter.channel_count);
  bool enabled = (flags & 1) != 0;
  uint8_t status = command->parameter.reserved_40[0];

  if (enabled) {
    if (status == 0) {
      InitializeLightLimiterEffect(&command->parameter, command->state,
        command->work);
    }
    else if (status == 1) {
      UpdateLightLimiterEffectParameter(&command->parameter, command->state);
    }
  }

  ApplyLightLimiterEffect(&command->parameter, command->state, enabled,
    buffers.inputs, buffers.outputs, processor->sample_count, statistics);
}

void ProcessLightLimiterV1Impl(CommandListProcessor* processor,
  const LightLimiterCommandVersion1* command) {
  ProcessLightLimiter(processor, &command->data, command->enabled, nullptr);
}

void ProcessLightLimiterV2Impl(CommandListProcessor* processor,
  const LightLimiterCommandVersion2* command) {
  ProcessLightLimiter(processor, &command->data, command->enabled,
    command->statistics);
}

void ProcessLightLimiterV1Command(CommandListProcessor* processor,
  const LightLimiterCommandVersion1* command) {
  ProcessLightLimiterV1Impl(processor, command);
}

void ProcessLightLimiterV2Command(CommandListProcessor* processor,
  const LightLimiterCommandVersion2* command) {
  ProcessLightLimiterV2Impl(processor, command);
}

void ProcessCompressorCommand(CommandListProcessor* processor,
  const CompressorCommand* command) {
  EffectBuffers buffers(processor, command->buffers.inputs,
    command->buffers.outputs, command->parameter.channel_count);
  bool enabled = (command->enabled & 1) != 0;

  if (enabled) {
    if (command->parameter.unknown_34 == 0) {
      InitializeCompressorEffect(&command->parameter, command->state);
    }
    else if (command->parameter.unknown_34 == 1) {
      SetCompressorEffectParameter(&command->parameter, command->state);
    }
  }

  ApplyCompressorEffect(&command->parameter, command->state, enabled,
    buffers.inputs, buffers.outputs, processor->sample_count,
    command->statistics);
}

}
