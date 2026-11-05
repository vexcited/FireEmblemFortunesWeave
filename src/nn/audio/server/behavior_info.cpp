#include <string.h>

#include <algorithm>

#include "nn/audio/server/behavior_info.hpp"

namespace nn::audio::server {

BehaviorInfo::BehaviorInfo()
  : m_ProcessRevision(common::GetCurrentRevision()), m_UserLibRevision(0),
    m_Flags{}, m_ErrorCount(0),
    m_IsWaveBufferCacheFlushFromServiceRequired(false),
    m_IsWorkAroundForHugeMemoryPoolEnabled(false),
    m_IsWorkAroundForIncorrectWaveBufferBufferSizeEnabled(false),
    m_IsWorkAroundForManyMemoryPoolsEnabled(false),
    m_IsForceDownsizeTo6ChannelEnabled(false),
    m_IsStabilizeAudioRendererCycleEnabled(false),
    m_IsParallelizeMemoryOperationsEnabled(false) {
}

uint32_t BehaviorInfo::GetProcessRevision() const {
  return m_ProcessRevision;
}

uint32_t BehaviorInfo::GetUserLibRevision() const {
  return m_UserLibRevision;
}

void BehaviorInfo::ClearError() {
  m_ErrorCount = 0;
}

void BehaviorInfo::AppendError(ErrorInfo& error) {
  if (m_ErrorCount < ErrorCountMax) {
    m_Errors[m_ErrorCount] = error;
    m_ErrorCount++;
  }
}

void BehaviorInfo::CopyErrorInfo(ErrorInfo* errors, int* count) const {
  *count = std::min(m_ErrorCount, ErrorCountMax);
  memset(errors, 0, sizeof(ErrorInfo) * ErrorCountMax);
  for (int i = 0; i < std::min(*count, m_ErrorCount); i++) {
    errors[i] = m_Errors[i];
  }
}

void BehaviorInfo::SetUserLibRevision(uint32_t revision) {
  m_UserLibRevision = revision;
}

bool BehaviorInfo::IsMemoryPoolForceMappingEnabled() const {
  return m_Flags._storage[0] & 1;
}

void BehaviorInfo::UpdateFlags(const util::BitFlagSet<64, void>& flags) {
  m_Flags = flags;
}

#define NN_AUDIO_FEATURE(name, tag) \
  bool BehaviorInfo::name() const { \
    return common::CheckFeatureSupported(common::SupportTags::tag, \
      m_UserLibRevision); \
  }

NN_AUDIO_FEATURE(IsAdpcmLoopContextBugFixed, AdpcmLoopContextBugFix)
NN_AUDIO_FEATURE(IsSplitterSupported, Splitter)
NN_AUDIO_FEATURE(IsLongSizePreDelaySupported, LongSizePreDelay)
NN_AUDIO_FEATURE(IsAudioRenererProcessingTimeLimit70PercentSupported,
  AudioRendererProcessingTimeLimit70Percent)
NN_AUDIO_FEATURE(IsAudioRenererProcessingTimeLimit75PercentSupported,
  AudioRendererProcessingTimeLimit75Percent)
NN_AUDIO_FEATURE(IsAudioRenererProcessingTimeLimit80PercentSupported,
  AudioRendererProcessingTimeLimit80Percent)

bool BehaviorInfo::IsAudioRenererProcessingTimeLimit90PercentSupported()
  const {
  return common::IsOunceApplication(m_UserLibRevision);
}

bool BehaviorInfo::IsPlatformOunce() const {
  return common::IsOunceApplication(m_UserLibRevision);
}

NN_AUDIO_FEATURE(IsCommandProcessingTimeEstimatorVersion2Supported,
  CommandProcessingTimeEstimatorVersion2)
NN_AUDIO_FEATURE(IsVariadicCommandBufferSizeSupported,
  AudioRendererVariadicCommandBufferSize)
NN_AUDIO_FEATURE(IsFlushVoiceWaveBuffersSupported, FlushVoiceWaveBuffers)
NN_AUDIO_FEATURE(IsSplitterBugFixed, SplitterBugFix)
NN_AUDIO_FEATURE(IsElapsedFrameCountSupported, ElapsedFrameCount)
NN_AUDIO_FEATURE(IsPerformanceMetricsDataFormatVersion2Supported,
  PerformanceMetricsDataFormatVersion2)

int BehaviorInfo::GetPerformanceMetricsDataFormat() const {
  return IsPerformanceMetricsDataFormatVersion2Supported() ? 2 : 1;
}

NN_AUDIO_FEATURE(IsVoicePitchAndSrcSkippedSupported, VoicePitchAndSrcSkipped)
NN_AUDIO_FEATURE(IsVoicePlayedSampleCountResetAtLoopPointSupported,
  VoicePlayedSampleCountResetAtLoopPoint)
NN_AUDIO_FEATURE(IsBiquadFilterEffectStateClaerBugFixed,
  BiquadFilterEffectStateClearBugFix)
NN_AUDIO_FEATURE(IsVolumeMixParameterPrecisionQ23Supported,
  VolumeMixParameterPrecisionQ23)
NN_AUDIO_FEATURE(UseBiquadFilterFloatProcessing, BiquadFilterFloatProcessing)
NN_AUDIO_FEATURE(IsMixInParameterDirtyOnlyUpdateSupported,
  MixInParameterDirtyOnlyUpdate)
NN_AUDIO_FEATURE(IsWaveBufferVer2Supported, WaveBufferVer2)
NN_AUDIO_FEATURE(IsCommandProcessingTimeEstimatorVersion3Supported,
  CommandProcessingTimeEstimatorVersion3)
NN_AUDIO_FEATURE(IsEffectInfoVersion2Supported, EffectInfoVer2)
NN_AUDIO_FEATURE(UseMultiTapBiquadFilterProcessing,
  MultiTapBiquadFilterProcessing)
NN_AUDIO_FEATURE(IsCommandProcessingTimeEstimatorVersion4Supported,
  CommandProcessingTimeEstimatorVersion4)
NN_AUDIO_FEATURE(IsDeviceApiVersion2Supported, DeviceApiVersion2)
NN_AUDIO_FEATURE(IsDelayChannelMappingChanged, DelayChannelMappingChange)
NN_AUDIO_FEATURE(IsReverbChannelMappingChanged, ReverbChannelMappingChange)
NN_AUDIO_FEATURE(IsI3dl2ReverbChannelMappingChanged,
  I3dl2ReverbChannelMappingChange)
NN_AUDIO_FEATURE(IsCommandProcessingTimeEstimatorVersion5Supported,
  CommandProcessingTimeEstimatorVersion5)
NN_AUDIO_FEATURE(IsBiquadFilterParameterForSplitterEnabled,
  SplitterBiquadFilterParameters)
NN_AUDIO_FEATURE(IsAuxGroupCommandSupported, AuxGroupedCommand)
NN_AUDIO_FEATURE(IsSplitterPrevVolumeResetSupported, SplitterResetPrevVolume)
NN_AUDIO_FEATURE(IsSplitterDepopBugFixEnabled, SplitterDepopBugFix)
NN_AUDIO_FEATURE(IsBiquadFilterParameterFloatSupported,
  BiquadFilterParameterFloat)
NN_AUDIO_FEATURE(IsVoiceBiquadFilterCrossFadeCurveEnabled,
  VoiceBiquadFilterCrossFadeCurve)

#undef NN_AUDIO_FEATURE

bool BehaviorInfo::IsPlatformNX() const {
  return common::IsNXApplication(m_UserLibRevision);
}

void BehaviorInfo::SetWaveBufferCacheFlushFromServiceRequired(bool enabled) {
  m_IsWaveBufferCacheFlushFromServiceRequired = enabled;
}

bool BehaviorInfo::IsWaveBufferCacheFlushFromServiceRequired() const {
  return m_IsWaveBufferCacheFlushFromServiceRequired;
}

void BehaviorInfo::SetWorkAroundForHugeMemoryPoolEnabled(bool enabled) {
  m_IsWorkAroundForHugeMemoryPoolEnabled = enabled;
}

bool BehaviorInfo::IsWorkAroundForHugeMemoryPoolEnabled() const {
  return m_IsWorkAroundForHugeMemoryPoolEnabled;
}

void BehaviorInfo::SetWorkAroundForIncorrectWaveBufferBufferSizeEnabled(
  bool enabled) {
  m_IsWorkAroundForIncorrectWaveBufferBufferSizeEnabled = enabled;
}

bool BehaviorInfo::IsWorkAroundForIncorrectWaveBufferBufferSizeEnabled()
  const {
  return m_IsWorkAroundForIncorrectWaveBufferBufferSizeEnabled;
}

void BehaviorInfo::SetWorkAroundForManyMemoryPoolsEnabled(bool enabled) {
  m_IsWorkAroundForManyMemoryPoolsEnabled = enabled;
}

bool BehaviorInfo::IsWorkAroundForManyMemoryPoolsEnabled() const {
  return m_IsWorkAroundForManyMemoryPoolsEnabled;
}

void BehaviorInfo::SetForceDownsizeTo6ChannelEnabled(bool enabled) {
  m_IsForceDownsizeTo6ChannelEnabled = enabled;
}

bool BehaviorInfo::IsForceDownsizeTo6ChannelEnabled() const {
  return m_IsForceDownsizeTo6ChannelEnabled;
}

bool BehaviorInfo::IsStabilizeAudioRendererCycleEnabled() const {
  return false;
}

void BehaviorInfo::SetParallelizeMemoryOperations(bool enabled) {
  m_IsParallelizeMemoryOperationsEnabled = enabled;
}

bool BehaviorInfo::IsParallelizeMemoryOperationsEnabled() const {
  return m_IsParallelizeMemoryOperationsEnabled;
}

}
