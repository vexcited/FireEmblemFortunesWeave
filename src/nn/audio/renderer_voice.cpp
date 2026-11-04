#include "nn/audio/renderer_api.hpp"

namespace nn::audio {
namespace {

void SetWaveBuffer(VoiceWaveBuffer& internal, const WaveBuffer* waveBuffer) {
  internal.buffer = waveBuffer->buffer;
  internal.size = waveBuffer->size;
  internal.startSampleOffset = waveBuffer->startSampleOffset;
  internal.endSampleOffset = waveBuffer->endSampleOffset;
  internal.loop = waveBuffer->loop;
  internal.isEndOfStream = waveBuffer->isEndOfStream;
  internal.pContext = waveBuffer->pContext;
  internal.contextSize = waveBuffer->contextSize;
}

}

bool IsVoiceValid(const VoiceType* voice) {
  return voice->_pVoiceInfo != nullptr;
}

bool IsVoiceDroppedFlagOn(const VoiceType* voice) {
  const VoiceInfo* info = voice->_pVoiceInfo;
  detail::CheckResourceExclusion(info);
  return info->isVoiceDropped == 1 && info->isDroppedFlagReset == 0;
}

void ResetVoiceDroppedFlag(VoiceType* voice) {
  VoiceInfo* info = voice->_pVoiceInfo;
  detail::CheckResourceExclusion(info);
  info->isDroppedFlagReset = 1;
}

void SetVoiceDestination(AudioRendererConfig* config, VoiceType* voice,
  FinalMixType* mix) {
  VoiceInfo* info = voice->_pVoiceInfo;
  detail::CheckResourceExclusion(info);
  info->destinationMixId = mix->_pMixInfo->mixId;
  info->destinationSplitterId = -1;
}

void SetVoiceDestination(AudioRendererConfig* config, VoiceType* voice,
  SubMixType* mix) {
  detail::CheckResourceExclusion(voice->_pVoiceInfo);
  VoiceInfo* info = voice->_pVoiceInfo;
  info->destinationMixId = mix->_pMixInfo->mixId;
  info->destinationSplitterId = -1;
}

void SetVoiceDestination(AudioRendererConfig* config, VoiceType* voice,
  SplitterType* splitter) {
  detail::CheckResourceExclusion(voice->_pVoiceInfo);
  VoiceInfo* info = voice->_pVoiceInfo;
  info->destinationMixId = 0x7fffffff;
  info->destinationSplitterId = splitter->_pSplitterInfo->GetId();
}

void ClearVoiceDestination(AudioRendererConfig* config, VoiceType* voice) {
  voice->_pVoiceInfo->destinationMixId = 0x7fffffff;
  voice->_pVoiceInfo->destinationSplitterId = -1;
}

void ReleaseVoiceSlot(AudioRendererConfig* config, VoiceType* voice) {
  detail::CheckResourceExclusion(voice->_pVoiceInfo);
  if (voice->_pVoiceInfo != nullptr) {
    config->_pVoiceInfoManager->ReleaseVoiceInfo(voice->_pVoiceInfo);
    voice->_pVoiceInfo = nullptr;
  }
}

int GetVoiceSampleRate(const VoiceType* voice) {
  return voice->_pVoiceInfo->sampleRate;
}

int GetVoiceChannelCount(const VoiceType* voice) {
  return voice->_pVoiceInfo->channelCount;
}

SampleFormat GetVoiceSampleFormat(const VoiceType* voice) {
  return static_cast<SampleFormat>(voice->_pVoiceInfo->sampleFormat);
}

void SetVoicePriority(VoiceType* voice, int priority) {
  detail::CheckResourceExclusion(voice->_pVoiceInfo);
  voice->_pVoiceInfo->priority = priority;
}

int GetVoicePriority(const VoiceType* voice) {
  return voice->_pVoiceInfo->priority;
}

void SetVoicePlayState(VoiceType* voice, VoiceType::PlayState state) {
  detail::CheckResourceExclusion(voice->_pVoiceInfo);
  voice->_pVoiceInfo->playState = state;
}

VoiceType::PlayState GetVoicePlayState(const VoiceType* voice) {
  return static_cast<VoiceType::PlayState>(voice->_pVoiceInfo->playState);
}

void SetVoiceSrcQuality(VoiceType* voice, VoiceType::SrcQuality quality) {
  detail::CheckResourceExclusion(voice->_pVoiceInfo);
  voice->_pVoiceInfo->srcQuality = quality;
}

VoiceType::SrcQuality GetVoiceSrcQuality(const VoiceType* voice) {
  return static_cast<VoiceType::SrcQuality>(voice->_pVoiceInfo->srcQuality);
}

void SetVoicePitch(VoiceType* voice, float pitch) {
  VoiceInfo* info = voice->_pVoiceInfo;
  detail::CheckResourceExclusion(info);
  info->pitch = pitch;
}

float GetVoicePitch(const VoiceType* voice) {
  return voice->_pVoiceInfo->pitch;
}

void SetVoiceVolume(VoiceType* voice, float volume) {
  detail::CheckResourceExclusion(voice->_pVoiceInfo);
  voice->_pVoiceInfo->volume = volume;
}

float GetVoiceVolume(const VoiceType* voice) {
  return voice->_pVoiceInfo->volume;
}

void SetVoiceMixVolume(VoiceType* voice, FinalMixType* mix, float volume,
  int sourceIndex, int destinationIndex) {
  detail::CheckResourceExclusion(voice->_pVoiceInfo);
  voice->_pVoiceInfo->channelResources[sourceIndex]
    ->mixVolume[destinationIndex] = volume;
}

float GetVoiceMixVolume(const VoiceType* voice, const FinalMixType* mix,
  int sourceIndex, int destinationIndex) {
  return voice->_pVoiceInfo->channelResources[sourceIndex]
    ->mixVolume[destinationIndex];
}

void SetVoiceMixVolume(VoiceType* voice, SubMixType* mix, float volume,
  int sourceIndex, int destinationIndex) {
  VoiceInfo* info = voice->_pVoiceInfo;
  detail::CheckResourceExclusion(info);
  info->channelResources[sourceIndex]->mixVolume[destinationIndex] = volume;
}

float GetVoiceMixVolume(const VoiceType* voice, const SubMixType* mix,
  int sourceIndex, int destinationIndex) {
  return voice->_pVoiceInfo->channelResources[sourceIndex]
    ->mixVolume[destinationIndex];
}

void SetVoiceBiquadFilterParameter(VoiceType* voice, int index,
  const TBiquadFilterParameter<int16_t>& parameter) {
  detail::CheckResourceExclusion(voice->_pVoiceInfo);
  TBiquadFilterParameter<float>& filter =
    voice->_pVoiceInfo->biquadFilter[index];
  filter.enable = parameter.enable;
  for (int i = 0; i < 3; ++i) {
    filter.numerator[i] = static_cast<float>(parameter.numerator[i]) / 16384.0f;
  }
  for (int i = 0; i < 2; ++i) {
    filter.denominator[i] =
      static_cast<float>(parameter.denominator[i]) / 16384.0f;
  }
}

void SetVoiceBiquadFilterParameter(VoiceType* voice, int index,
  const TBiquadFilterParameter<float>& parameter) {
  detail::CheckResourceExclusion(voice->_pVoiceInfo);
  voice->_pVoiceInfo->biquadFilter[index] = parameter;
}

TBiquadFilterParameter<int16_t> GetVoiceBiquadFilterParameter(
  const VoiceType* voice, int index) {
  const TBiquadFilterParameter<float>& filter =
    voice->_pVoiceInfo->biquadFilter[index];
  TBiquadFilterParameter<int16_t> parameter = {};
  parameter.enable = filter.enable;
  for (int i = 0; i < 3; ++i) {
    parameter.numerator[i] =
      static_cast<int16_t>(detail::ConvertToQ14(filter.numerator[i]));
  }
  for (int i = 0; i < 2; ++i) {
    parameter.denominator[i] =
      static_cast<int16_t>(detail::ConvertToQ14(filter.denominator[i]));
  }
  return parameter;
}

void GetVoiceBiquadFilterParameter(TBiquadFilterParameter<int16_t>* parameter,
  const VoiceType* voice, int index) {
  *parameter = GetVoiceBiquadFilterParameter(voice, index);
}

void GetVoiceBiquadFilterParameter(TBiquadFilterParameter<float>* parameter,
  const VoiceType* voice, int index) {
  *parameter = voice->_pVoiceInfo->biquadFilter[index];
}

void SetVoiceBiquadFilterCrossFadeCurveType(VoiceType* voice,
  AudioRendererFadeCurveType type) {
  detail::CheckResourceExclusion(voice->_pVoiceInfo);
  voice->_pVoiceInfo->biquadFilterCrossFadeCurveType = type;
}

AudioRendererFadeCurveType GetVoiceBiquadFilterCrossFadeCurveType(
  const VoiceType* voice) {
  return static_cast<AudioRendererFadeCurveType>(
    voice->_pVoiceInfo->biquadFilterCrossFadeCurveType);
}

bool AppendWaveBuffer(VoiceType* voice, const WaveBuffer* waveBuffer) {
  detail::CheckResourceExclusion(voice->_pVoiceInfo);
  VoiceInfo* info = voice->_pVoiceInfo;
  const int count = info->waveBufferCount;
  if (count == 4) {
    return false;
  }

  int index = count + info->waveBufferHead;
  if (index >= 4) {
    index -= 4;
  }
  VoiceWaveBuffer& internal = info->waveBuffer[index];
  SetWaveBuffer(internal, waveBuffer);
  internal.loopCount = -waveBuffer->loop;
  internal.loopStartSampleOffset = waveBuffer->startSampleOffset;
  internal.isSentToServer = false;
  internal.loopEndSampleOffset = waveBuffer->endSampleOffset;
  info->waveBuffers[index] = waveBuffer;
  ++info->waveBufferCount;
  ++info->appendedWaveBufferCount;
  return true;
}

bool AppendWaveBuffer(VoiceType* voice, const WaveBuffer* waveBuffer,
  const WaveBuffer::MemberOptions* options) {
  detail::CheckResourceExclusion(voice->_pVoiceInfo);
  VoiceInfo* info = voice->_pVoiceInfo;
  const int count = info->waveBufferCount;
  if (count == 4) {
    return false;
  }

  const bool isLoopParameterSpecified = options->isLoopParameterSpecified;
  int index = count + info->waveBufferHead;
  if (index >= 4) {
    index -= 4;
  }
  VoiceWaveBuffer& internal = info->waveBuffer[index];
  SetWaveBuffer(internal, waveBuffer);
  const int* loopStart = &waveBuffer->startSampleOffset;
  const int* loopEnd = &waveBuffer->endSampleOffset;
  if (isLoopParameterSpecified) {
    internal.loopCount = waveBuffer->loopCount;
    loopStart = &waveBuffer->loopStartSampleOffset;
    loopEnd = &waveBuffer->loopEndSampleOffset;
  }
  else {
    internal.loopCount = -waveBuffer->loop;
  }
  internal.loopStartSampleOffset = *loopStart;
  internal.isSentToServer = false;
  internal.loopEndSampleOffset = *loopEnd;
  info->waveBuffers[index] = waveBuffer;
  ++info->waveBufferCount;
  ++info->appendedWaveBufferCount;
  return true;
}

const WaveBuffer* GetReleasedWaveBuffer(VoiceType* voice) {
  detail::CheckResourceExclusion(voice->_pVoiceInfo);
  VoiceInfo* info = voice->_pVoiceInfo;
  const uint32_t released = info->releasedWaveBufferCount;
  if (info->consumedWaveBufferCount == released) {
    return nullptr;
  }

  const int head = info->waveBufferHead;
  info->releasedWaveBufferCount = released + 1;
  info->waveBufferHead = head < 3 ? head + 1 : 0;
  --info->waveBufferCount;
  return info->waveBuffers[head];
}

int GetWaveBufferCount(const VoiceType* voice) {
  detail::CheckResourceExclusion(voice->_pVoiceInfo);
  const VoiceInfo* info = voice->_pVoiceInfo;
  const int count = static_cast<uint8_t>(info->appendedWaveBufferCount)
    - static_cast<uint8_t>(info->consumedWaveBufferCount);
  return count < 0 ? count + 256 : count;
}

int64_t GetVoicePlayedSampleCount(const VoiceType* voice) {
  detail::CheckResourceExclusion(voice->_pVoiceInfo);
  return voice->_pVoiceInfo->playedSampleCount;
}

uint32_t GetVoiceNodeId(const VoiceType* voice) {
  detail::CheckResourceExclusion(voice->_pVoiceInfo);
  return voice->_pVoiceInfo->nodeId;
}

void FlushWaveBuffers(VoiceType* voice) {
  detail::CheckResourceExclusion(voice->_pVoiceInfo);
  VoiceInfo* info = voice->_pVoiceInfo;
  info->flushWaveBufferCount = GetWaveBufferCount(voice);
}

VoiceType::BehaviorOptions GetVoiceBehaviorOptions(const VoiceType* voice) {
  const uint16_t flags = voice->_pVoiceInfo->behaviorFlags;
  VoiceType::BehaviorOptions options;
  options.isPlayedSampleCountResetAtLoopPoint = (flags & 1) != 0;
  options.isPitchAndSrcSkipped = (flags & 2) != 0;
  options.isLoopCountSpecified = (flags & 4) != 0;
  return options;
}

}
