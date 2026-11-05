#pragma once

#include <stdint.h>

#include "nn/result.hpp"
#include "nn/util/bit_flag_set.hpp"

namespace nn::audio::common {

using SupportTag = uint32_t (*)();

namespace SupportTags {

extern const SupportTag AdpcmLoopContextBugFix;
extern const SupportTag Splitter;
extern const SupportTag LongSizePreDelay;
extern const SupportTag AudioRendererProcessingTimeLimit70Percent;
extern const SupportTag AudioRendererProcessingTimeLimit75Percent;
extern const SupportTag AudioRendererProcessingTimeLimit80Percent;
extern const SupportTag CommandProcessingTimeEstimatorVersion2;
extern const SupportTag AudioRendererVariadicCommandBufferSize;
extern const SupportTag FlushVoiceWaveBuffers;
extern const SupportTag SplitterBugFix;
extern const SupportTag ElapsedFrameCount;
extern const SupportTag PerformanceMetricsDataFormatVersion2;
extern const SupportTag VoicePitchAndSrcSkipped;
extern const SupportTag VoicePlayedSampleCountResetAtLoopPoint;
extern const SupportTag BiquadFilterEffectStateClearBugFix;
extern const SupportTag VolumeMixParameterPrecisionQ23;
extern const SupportTag BiquadFilterFloatProcessing;
extern const SupportTag MixInParameterDirtyOnlyUpdate;
extern const SupportTag WaveBufferVer2;
extern const SupportTag CommandProcessingTimeEstimatorVersion3;
extern const SupportTag EffectInfoVer2;
extern const SupportTag MultiTapBiquadFilterProcessing;
extern const SupportTag CommandProcessingTimeEstimatorVersion4;
extern const SupportTag DeviceApiVersion2;
extern const SupportTag DelayChannelMappingChange;
extern const SupportTag ReverbChannelMappingChange;
extern const SupportTag I3dl2ReverbChannelMappingChange;
extern const SupportTag CommandProcessingTimeEstimatorVersion5;
extern const SupportTag SplitterBiquadFilterParameters;
extern const SupportTag AuxGroupedCommand;
extern const SupportTag SplitterResetPrevVolume;
extern const SupportTag SplitterDepopBugFix;
extern const SupportTag BiquadFilterParameterFloat;
extern const SupportTag VoiceBiquadFilterCrossFadeCurve;

}

uint32_t GetCurrentRevision();
bool CheckValidRevision(uint32_t revision);
bool CheckFeatureSupported(SupportTag tag, uint32_t revision);
bool IsNXApplication(uint32_t revision);
bool IsOunceApplication(uint32_t revision);

struct BehaviorParameter {
  struct ErrorInfo {
    Result result{};
    uint64_t info{};
  };
};

}

namespace nn::audio::server {

class InfoUpdater;

class BehaviorInfo {
  friend class InfoUpdater;

public:
  using ErrorInfo = common::BehaviorParameter::ErrorInfo;

  static constexpr int ErrorCountMax = 10;

  BehaviorInfo();

  uint32_t GetProcessRevision() const;
  uint32_t GetUserLibRevision() const;
  void ClearError();
  void AppendError(ErrorInfo& error);
  void CopyErrorInfo(ErrorInfo* errors, int* count) const;
  void SetUserLibRevision(uint32_t revision);
  bool IsMemoryPoolForceMappingEnabled() const;
  void UpdateFlags(const util::BitFlagSet<64, void>& flags);

  bool IsAdpcmLoopContextBugFixed() const;
  bool IsSplitterSupported() const;
  bool IsLongSizePreDelaySupported() const;
  bool IsAudioRenererProcessingTimeLimit70PercentSupported() const;
  bool IsAudioRenererProcessingTimeLimit75PercentSupported() const;
  bool IsAudioRenererProcessingTimeLimit80PercentSupported() const;
  bool IsAudioRenererProcessingTimeLimit90PercentSupported() const;
  bool IsPlatformOunce() const;
  bool IsCommandProcessingTimeEstimatorVersion2Supported() const;
  bool IsVariadicCommandBufferSizeSupported() const;
  bool IsFlushVoiceWaveBuffersSupported() const;
  bool IsSplitterBugFixed() const;
  bool IsElapsedFrameCountSupported() const;
  bool IsPerformanceMetricsDataFormatVersion2Supported() const;
  int GetPerformanceMetricsDataFormat() const;
  bool IsVoicePitchAndSrcSkippedSupported() const;
  bool IsVoicePlayedSampleCountResetAtLoopPointSupported() const;
  bool IsBiquadFilterEffectStateClaerBugFixed() const;
  bool IsVolumeMixParameterPrecisionQ23Supported() const;
  bool UseBiquadFilterFloatProcessing() const;
  bool IsMixInParameterDirtyOnlyUpdateSupported() const;
  bool IsWaveBufferVer2Supported() const;
  bool IsCommandProcessingTimeEstimatorVersion3Supported() const;
  bool IsEffectInfoVersion2Supported() const;
  bool UseMultiTapBiquadFilterProcessing() const;
  bool IsCommandProcessingTimeEstimatorVersion4Supported() const;
  bool IsDeviceApiVersion2Supported() const;
  bool IsDelayChannelMappingChanged() const;
  bool IsReverbChannelMappingChanged() const;
  bool IsI3dl2ReverbChannelMappingChanged() const;
  bool IsCommandProcessingTimeEstimatorVersion5Supported() const;
  bool IsBiquadFilterParameterForSplitterEnabled() const;
  bool IsAuxGroupCommandSupported() const;
  bool IsSplitterPrevVolumeResetSupported() const;
  bool IsSplitterDepopBugFixEnabled() const;
  bool IsBiquadFilterParameterFloatSupported() const;
  bool IsVoiceBiquadFilterCrossFadeCurveEnabled() const;
  bool IsPlatformNX() const;

  void SetWaveBufferCacheFlushFromServiceRequired(bool enabled);
  bool IsWaveBufferCacheFlushFromServiceRequired() const;
  void SetWorkAroundForHugeMemoryPoolEnabled(bool enabled);
  bool IsWorkAroundForHugeMemoryPoolEnabled() const;
  void SetWorkAroundForIncorrectWaveBufferBufferSizeEnabled(bool enabled);
  bool IsWorkAroundForIncorrectWaveBufferBufferSizeEnabled() const;
  void SetWorkAroundForManyMemoryPoolsEnabled(bool enabled);
  bool IsWorkAroundForManyMemoryPoolsEnabled() const;
  void SetForceDownsizeTo6ChannelEnabled(bool enabled);
  bool IsForceDownsizeTo6ChannelEnabled() const;
  bool IsStabilizeAudioRendererCycleEnabled() const;
  void SetParallelizeMemoryOperations(bool enabled);
  bool IsParallelizeMemoryOperationsEnabled() const;

private:
  uint32_t m_ProcessRevision;
  uint32_t m_UserLibRevision;
  util::BitFlagSet<64, void> m_Flags;
  ErrorInfo m_Errors[ErrorCountMax];
  int m_ErrorCount;
  bool m_IsWaveBufferCacheFlushFromServiceRequired;
  bool m_IsWorkAroundForHugeMemoryPoolEnabled;
  bool m_IsWorkAroundForIncorrectWaveBufferBufferSizeEnabled;
  bool m_IsWorkAroundForManyMemoryPoolsEnabled;
  bool m_IsForceDownsizeTo6ChannelEnabled;
  bool m_IsStabilizeAudioRendererCycleEnabled;
  bool m_IsParallelizeMemoryOperationsEnabled;
};

}
