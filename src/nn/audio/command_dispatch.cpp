#include "nn/audio/commands.hpp"

namespace nn::audio::dsp {

extern "C" void ProcessPcmInt16SourceV1(CommandListProcessor*,
  const CommandHeader*)
  asm("_ZN2nn5audio3dsp20CommandListProcessor14ProcessCommandINS0_33PcmI"
      "nt16DataSourceCommandVersion1EEEvPKT_");
extern "C" void ProcessPcmInt16SourceV2(CommandListProcessor*,
  const CommandHeader*)
  asm("_ZN2nn5audio3dsp20CommandListProcessor14ProcessCommandINS0_26TDat"
      "aSourceCommandVersion2ILNS0_9CommandIdE2EEEEEvPKT_");
extern "C" void ProcessPcmFloatSourceV1(CommandListProcessor*,
  const CommandHeader*)
  asm("_ZN2nn5audio3dsp20CommandListProcessor14ProcessCommandINS0_33PcmF"
      "loatDataSourceCommandVersion1EEEvPKT_");
extern "C" void ProcessPcmFloatSourceV2(CommandListProcessor*,
  const CommandHeader*)
  asm("_ZN2nn5audio3dsp20CommandListProcessor14ProcessCommandINS0_26TDat"
      "aSourceCommandVersion2ILNS0_9CommandIdE4EEEEEvPKT_");
extern "C" void ProcessAdpcmSourceV1(CommandListProcessor*,
  const CommandHeader*)
  asm("_ZN2nn5audio3dsp20CommandListProcessor14ProcessCommandINS0_30Adpc"
      "mDataSourceCommandVersion1EEEvPKT_");
extern "C" void ProcessAdpcmSourceV2(CommandListProcessor*,
  const CommandHeader*)
  asm("_ZN2nn5audio3dsp20CommandListProcessor14ProcessCommandINS0_26TDat"
      "aSourceCommandVersion2ILNS0_9CommandIdE6EEEEEvPKT_");
extern "C" void ProcessBiquad(CommandListProcessor*,
  const CommandHeader*)
  asm("_ZN2nn5audio3dsp20CommandListProcessor14ProcessCommandINS0_19Biqu"
      "adFilterCommandEEEvPKT_");
extern "C" void ProcessBiquadFloat(CommandListProcessor*,
  const CommandHeader*)
  asm("_ZN2nn5audio3dsp20CommandListProcessor14ProcessCommandINS0_29Biqu"
      "adFilterFloatCoeffCommandEEEvPKT_");
extern "C" void ProcessDelay(CommandListProcessor*,
  const CommandHeader*)
  asm("_ZN2nn5audio3dsp20CommandListProcessor14ProcessCommandINS0_12Dela"
      "yCommandEEEvPKT_");
extern "C" void ProcessUpsample(CommandListProcessor*,
  const CommandHeader*)
  asm("_ZN2nn5audio3dsp20CommandListProcessor14ProcessCommandINS0_23Upsa"
      "mple32KTo48KCommandEEEvPKT_");
extern "C" void ProcessDownMix(CommandListProcessor*,
  const CommandHeader*)
  asm("_ZN2nn5audio3dsp20CommandListProcessor14ProcessCommandINS0_22Down"
      "Mix6chTo2chCommandEEEvPKT_");
extern "C" void ProcessAux(CommandListProcessor*,
  const CommandHeader*)
  asm("_ZN2nn5audio3dsp20CommandListProcessor14ProcessCommandINS0_10AuxC"
      "ommandEEEvPKT_");
extern "C" void ProcessCircularSink(CommandListProcessor*,
  const CommandHeader*)
  asm("_ZN2nn5audio3dsp20CommandListProcessor14ProcessCommandINS0_25Circ"
      "ularBufferSinkCommandEEEvPKT_");
extern "C" void ProcessReverb(CommandListProcessor*,
  const CommandHeader*)
  asm("_ZN2nn5audio3dsp20CommandListProcessor14ProcessCommandINS0_13Reve"
      "rbCommandEEEvPKT_");
extern "C" void ProcessI3dl2Reverb(CommandListProcessor*,
  const CommandHeader*)
  asm("_ZN2nn5audio3dsp20CommandListProcessor14ProcessCommandINS0_18I3dl"
      "2ReverbCommandEEEvPKT_");
extern "C" void ProcessPerformance(CommandListProcessor*,
  const CommandHeader*)
  asm("_ZN2nn5audio3dsp20CommandListProcessor14ProcessCommandINS0_18Perf"
      "ormanceCommandEEEvPKT_");
extern "C" void ProcessLightLimiterV1(CommandListProcessor*,
  const CommandHeader*)
  asm("_ZN2nn5audio3dsp20CommandListProcessor14ProcessCommandINS0_27Ligh"
      "tLimiterCommandVersion1EEEvPKT_");
extern "C" void ProcessLightLimiterV2(CommandListProcessor*,
  const CommandHeader*)
  asm("_ZN2nn5audio3dsp20CommandListProcessor14ProcessCommandINS0_27Ligh"
      "tLimiterCommandVersion2EEEvPKT_");
extern "C" void ProcessMultiTapBiquad(CommandListProcessor*,
  const CommandHeader*)
  asm("_ZN2nn5audio3dsp20CommandListProcessor14ProcessCommandINS0_27Mult"
      "iTapBiquadFilterCommandEEEvPKT_");
extern "C" void ProcessMultiTapBiquadFloat(CommandListProcessor*,
  const CommandHeader*)
  asm("_ZN2nn5audio3dsp20CommandListProcessor14ProcessCommandINS0_37Mult"
      "iTapBiquadFilterFloatCoeffCommandEEEvPKT_");
extern "C" void ProcessCapture(CommandListProcessor*,
  const CommandHeader*)
  asm("_ZN2nn5audio3dsp20CommandListProcessor14ProcessCommandINS0_14Capt"
      "ureCommandEEEvPKT_");
extern "C" void ProcessCompressor(CommandListProcessor*,
  const CommandHeader*)
  asm("_ZN2nn5audio3dsp20CommandListProcessor14ProcessCommandINS0_17Comp"
      "ressorCommandEEEvPKT_");
extern "C" void ProcessBiquadMix(CommandListProcessor*,
  const CommandHeader*)
  asm("_ZN2nn5audio3dsp20CommandListProcessor14ProcessCommandINS0_25Biqu"
      "adFilterAndMixCommandEEEvPKT_");
extern "C" void ProcessBiquadMixFloat(CommandListProcessor*,
  const CommandHeader*)
  asm("_ZN2nn5audio3dsp20CommandListProcessor14ProcessCommandINS0_35Biqu"
      "adFilterAndMixFloatCoeffCommandEEEvPKT_");
extern "C" void ProcessMultiTapBiquadMix(CommandListProcessor*,
  const CommandHeader*)
  asm("_ZN2nn5audio3dsp20CommandListProcessor14ProcessCommandINS0_33Mult"
      "iTapBiquadFilterAndMixCommandEEEvPKT_");
extern "C" void ProcessMultiTapBiquadMixFloat(CommandListProcessor*,
  const CommandHeader*)
  asm("_ZN2nn5audio3dsp20CommandListProcessor14ProcessCommandINS0_43Mult"
      "iTapBiquadFilterAndMixFloatCoeffCommandEEEvPKT_");
extern "C" void ProcessAuxGrouped(CommandListProcessor*,
  const CommandHeader*)
  asm("_ZN2nn5audio3dsp20CommandListProcessor14ProcessCommandINS0_17AuxG"
      "roupedCommandEEEvPKT_");
extern "C" void ProcessBiquadCrossFade(CommandListProcessor*,
  const CommandHeader*)
  asm("_ZN2nn5audio3dsp20CommandListProcessor14ProcessCommandINS0_28Biqu"
      "adFilterCrossFadeCommandEEEvPKT_");
extern "C" void ProcessMultiTapBiquadCrossFade(CommandListProcessor*,
  const CommandHeader*)
  asm("_ZN2nn5audio3dsp20CommandListProcessor14ProcessCommandINS0_36Mult"
      "iTapBiquadFilterCrossFadeCommandEEEvPKT_");

void CommandListProcessor::DispatchCommand(const CommandHeader* command) {
  switch (command->id) {
    case 1:
      ProcessPcmInt16SourceV1(this, command);
      return;
    case 2:
      ProcessPcmInt16SourceV2(this, command);
      return;
    case 3:
      ProcessPcmFloatSourceV1(this, command);
      return;
    case 4:
      ProcessPcmFloatSourceV2(this, command);
      return;
    case 5:
      ProcessAdpcmSourceV1(this, command);
      return;
    case 6:
      ProcessAdpcmSourceV2(this, command);
      return;
    case 7:
      ProcessCommand(reinterpret_cast<const VolumeCommand*>(command));
      return;
    case 8:
      ProcessCommand(reinterpret_cast<const VolumeRampCommand*>(command));
      return;
    case 9:
      ProcessBiquad(this, command);
      return;
    case 10:
      ProcessBiquadFloat(this, command);
      return;
    case 11:
      ProcessCommand(reinterpret_cast<const MixCommand*>(command));
      return;
    case 12:
      ProcessCommand(reinterpret_cast<const MixRampCommand*>(command));
      return;
    case 13:
      ProcessCommand(reinterpret_cast<const MixRampGroupedCommand*>(command));
      return;
    case 14:
      ProcessCommand(reinterpret_cast<const DepopPrepareCommand*>(command));
      return;
    case 15:
      ProcessCommand(
        reinterpret_cast<const DepopForMixBuffersCommand*>(command));
      return;
    case 16:
      ProcessDelay(this, command);
      return;
    case 17:
      ProcessUpsample(this, command);
      return;
    case 18:
      ProcessDownMix(this, command);
      return;
    case 19:
      ProcessAux(this, command);
      return;
    case 20:
      return;
    case 21:
      ProcessCircularSink(this, command);
      return;
    case 22:
      ProcessReverb(this, command);
      return;
    case 23:
      ProcessI3dl2Reverb(this, command);
      return;
    case 24:
      ProcessPerformance(this, command);
      return;
    case 25:
      ProcessCommand(reinterpret_cast<const ClearMixBufferCommand*>(command));
      return;
    case 26:
      ProcessCommand(reinterpret_cast<const CopyMixBufferCommand*>(command));
      return;
    case 27:
      ProcessLightLimiterV1(this, command);
      return;
    case 28:
      ProcessLightLimiterV2(this, command);
      return;
    case 29:
      ProcessMultiTapBiquad(this, command);
      return;
    case 30:
      ProcessMultiTapBiquadFloat(this, command);
      return;
    case 31:
      ProcessCapture(this, command);
      return;
    case 32:
      ProcessCompressor(this, command);
      return;
    case 33:
      ProcessBiquadMix(this, command);
      return;
    case 34:
      ProcessBiquadMixFloat(this, command);
      return;
    case 35:
      ProcessMultiTapBiquadMix(this, command);
      return;
    case 36:
      ProcessMultiTapBiquadMixFloat(this, command);
      return;
    case 37:
      ProcessAuxGrouped(this, command);
      return;
    case 38:
      ProcessCommand(reinterpret_cast<const FillMixBufferCommand*>(command));
      return;
    case 39:
      ProcessBiquadCrossFade(this, command);
      return;
    case 40:
      ProcessMultiTapBiquadCrossFade(this, command);
      return;
    case 41:
      ProcessCommand(reinterpret_cast<const FillBufferU8Command*>(command));
      return;
    default:
      return;
  }
}

}
