#pragma once

#include "nn/audio/commands.hpp"
#include "nn/audio/wave_decode.hpp"

namespace nn::audio {

struct DataSourceCommandParameters {
  CommandHeader header;
  uint8_t mode;
  uint8_t reserved_11[7];
  int16_t output;
  uint8_t flags;
  uint8_t reserved_1b;
  int32_t source_rate;
  int32_t pitch;
};

struct DataSourceWaveBufferVersion1 {
  const void* buffer;
  uint32_t size;
  int32_t start;
  int32_t end;
  uint8_t looping;
  uint8_t end_of_stream;
  uint8_t reserved_16[2];
  const AdpcmContext* context;
  uint32_t reserved_20;
  uint8_t reserved_24[4];
};

struct PcmDataSourceCommandVersion1 {
  DataSourceCommandParameters parameter;
  int32_t channel;
  int32_t channels;
  uint8_t reserved_2c[4];
  DataSourceWaveBufferVersion1 buffers[4];
  dsp::WaveDecodeState* state;
};

struct AdpcmDataSourceCommandVersion1 {
  DataSourceCommandParameters parameter;
  uint8_t reserved_24[4];
  DataSourceWaveBufferVersion1 buffers[4];
  dsp::WaveDecodeState* state;
  const int16_t* coefficients;
};

struct DataSourceCommandVersion2 {
  DataSourceCommandParameters parameter;
  int32_t channel;
  int32_t channels;
  uint8_t reserved_2c[4];
  dsp::WaveDecodeBuffer buffers[4];
  dsp::WaveDecodeState* state;
  const int16_t* coefficients;
};

namespace dsp {

void ProcessPcm16SourceV1(CommandListProcessor*,
  const PcmDataSourceCommandVersion1*)
  asm("_ZN2nn5audio3dsp20CommandListProcessor14ProcessCommand"
      "INS0_33PcmInt16DataSourceCommandVersion1EEEvPKT_");
void ProcessPcmFloatSourceV1(CommandListProcessor*,
  const PcmDataSourceCommandVersion1*)
  asm("_ZN2nn5audio3dsp20CommandListProcessor14ProcessCommand"
      "INS0_33PcmFloatDataSourceCommandVersion1EEEvPKT_");
void ProcessAdpcmSourceV1(CommandListProcessor*,
  const AdpcmDataSourceCommandVersion1*)
  asm("_ZN2nn5audio3dsp20CommandListProcessor14ProcessCommand"
      "INS0_30AdpcmDataSourceCommandVersion1EEEvPKT_");
void ProcessPcm16SourceV1Impl(CommandListProcessor*,
  const PcmDataSourceCommandVersion1*)
  asm("_ZN2nn5audio3dsp20CommandListProcessor28ProcessDataSourceCommandImpl"
      "INS0_33PcmInt16DataSourceCommandVersion1EEEvPKT_");
void ProcessPcmFloatSourceV1Impl(CommandListProcessor*,
  const PcmDataSourceCommandVersion1*)
  asm("_ZN2nn5audio3dsp20CommandListProcessor28ProcessDataSourceCommandImpl"
      "INS0_33PcmFloatDataSourceCommandVersion1EEEvPKT_");
void ProcessAdpcmSourceV1Impl(CommandListProcessor*,
  const AdpcmDataSourceCommandVersion1*)
  asm("_ZN2nn5audio3dsp20CommandListProcessor28ProcessDataSourceCommandImpl"
      "INS0_30AdpcmDataSourceCommandVersion1EEEvPKT_");
void ProcessPcm16SourceV2(CommandListProcessor*,
  const DataSourceCommandVersion2*)
  asm("_ZN2nn5audio3dsp20CommandListProcessor14ProcessCommand"
      "INS0_26TDataSourceCommandVersion2ILNS0_9CommandIdE2EEEEEvPKT_");
void ProcessPcmFloatSourceV2(CommandListProcessor*,
  const DataSourceCommandVersion2*)
  asm("_ZN2nn5audio3dsp20CommandListProcessor14ProcessCommand"
      "INS0_26TDataSourceCommandVersion2ILNS0_9CommandIdE4EEEEEvPKT_");
void ProcessAdpcmSourceV2(CommandListProcessor*,
  const DataSourceCommandVersion2*)
  asm("_ZN2nn5audio3dsp20CommandListProcessor14ProcessCommand"
      "INS0_26TDataSourceCommandVersion2ILNS0_9CommandIdE6EEEEEvPKT_");

}
}
