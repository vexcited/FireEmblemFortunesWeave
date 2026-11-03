#pragma once

#include "nn/audio/commands.hpp"
#include "nn/audio/compressor.hpp"
#include "nn/audio/delay.hpp"
#include "nn/audio/i3dl2_reverb.hpp"
#include "nn/audio/light_limiter.hpp"
#include "nn/audio/reverb.hpp"

namespace nn::audio {

struct EffectCommandInputs {
  CommandHeader header;
  uint8_t reserved_10[8];
  int16_t inputs[6];
  int16_t outputs[6];
};

struct DelayCommand {
  EffectCommandInputs buffers;
  DelayParameter parameter;
  uint8_t status;
  uint8_t reserved_65[3];
  DelayState* state;
  void* work;
  uint8_t enabled;
};

struct ReverbCommand {
  EffectCommandInputs buffers;
  ReverbParameter parameter;
  uint8_t status;
  uint8_t reserved_71[7];
  ReverbState* state;
  void* work;
  uint8_t enabled;
  uint8_t extended;
};

struct I3dl2ReverbCommand {
  EffectCommandInputs buffers;
  I3dl2ReverbParameter parameter;
  uint8_t status;
  uint8_t reserved_79[7];
  I3dl2ReverbState* state;
  void* work;
  uint8_t enabled;
};

struct LightLimiterCommandData {
  CommandHeader header;
  int16_t inputs[6];
  int16_t outputs[6];
  LightLimiterParameter parameter;
  uint8_t reserved_6c[4];
  LightLimiterState* state;
  void* work;
};

struct LightLimiterCommandVersion1 {
  LightLimiterCommandData data;
  uint8_t enabled;
};

struct LightLimiterCommandVersion2 {
  LightLimiterCommandData data;
  LightLimiterStatisticsInternal* statistics;
  uint8_t enabled;
};

struct CompressorCommand {
  EffectCommandInputs buffers;
  CompressorParameter parameter;
  CompressorState* state;
  CompressorStatisticsInternal* statistics;
  uint8_t enabled;
};

namespace dsp {

void ProcessDelayCommand(CommandListProcessor*, const DelayCommand*)
  asm("_ZN2nn5audio3dsp20CommandListProcessor14ProcessCommand"
      "INS0_12DelayCommandEEEvPKT_");
void ProcessReverbCommand(CommandListProcessor*, const ReverbCommand*)
  asm("_ZN2nn5audio3dsp20CommandListProcessor14ProcessCommand"
      "INS0_13ReverbCommandEEEvPKT_");
void ProcessI3dl2ReverbCommand(CommandListProcessor*, const I3dl2ReverbCommand*)
  asm("_ZN2nn5audio3dsp20CommandListProcessor14ProcessCommand"
      "INS0_18I3dl2ReverbCommandEEEvPKT_");
void ProcessCompressorCommand(CommandListProcessor*, const CompressorCommand*)
  asm("_ZN2nn5audio3dsp20CommandListProcessor14ProcessCommand"
      "INS0_17CompressorCommandEEEvPKT_");
void ProcessLightLimiterV1Command(CommandListProcessor*,
  const LightLimiterCommandVersion1*)
  asm("_ZN2nn5audio3dsp20CommandListProcessor14ProcessCommand"
      "INS0_27LightLimiterCommandVersion1EEEvPKT_");
void ProcessLightLimiterV2Command(CommandListProcessor*,
  const LightLimiterCommandVersion2*)
  asm("_ZN2nn5audio3dsp20CommandListProcessor14ProcessCommand"
      "INS0_27LightLimiterCommandVersion2EEEvPKT_");
void ProcessLightLimiterV1Impl(CommandListProcessor*,
  const LightLimiterCommandVersion1*)
  asm("_ZN2nn5audio3dsp20CommandListProcessor30ProcessLightLimiterCommandImpl"
      "INS0_27LightLimiterCommandVersion1EEEvPKT_");
void ProcessLightLimiterV2Impl(CommandListProcessor*,
  const LightLimiterCommandVersion2*)
  asm("_ZN2nn5audio3dsp20CommandListProcessor30ProcessLightLimiterCommandImpl"
      "INS0_27LightLimiterCommandVersion2EEEvPKT_");

}
}
