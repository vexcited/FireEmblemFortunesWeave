#include <stddef.h>

#include "nn/audio/renderer_api.hpp"

namespace nn::audio {
namespace {

TBiquadFilterParameter<float> ToFloat(
  const TBiquadFilterParameter<int16_t>& parameter) {
  TBiquadFilterParameter<float> result;
  result.enable = parameter.enable;
  for (int i = 0; i < 3; ++i) {
    result.numerator[i] = static_cast<float>(parameter.numerator[i]) / 16384.0f;
  }
  for (int i = 0; i < 2; ++i) {
    result.denominator[i] =
      static_cast<float>(parameter.denominator[i]) / 16384.0f;
  }
  return result;
}

TBiquadFilterParameter<int16_t> ToFixed(
  const TBiquadFilterParameter<float>& parameter) {
  TBiquadFilterParameter<int16_t> result = {};
  result.enable = parameter.enable;
  for (int i = 0; i < 3; ++i) {
    result.numerator[i] =
      static_cast<int16_t>(detail::ConvertToQ14(parameter.numerator[i]));
  }
  for (int i = 0; i < 2; ++i) {
    result.denominator[i] =
      static_cast<int16_t>(detail::ConvertToQ14(parameter.denominator[i]));
  }
  return result;
}

template<class Mix>
int GetDestinationId(const Mix* mix) {
  return mix->_pMixInfo->mixId;
}

int GetDestinationId(std::nullptr_t) {
  return 0x7fffffff;
}

template<class Destination>
void SetDestination(SplitterType* splitter, int index,
  Destination destination) {
  detail::CheckResourceExclusion(splitter->_pSplitterInfo);
  SplitterInfo* info = splitter->_pSplitterInfo;
  if (info == nullptr) {
    return;
  }
  const int id = GetDestinationId(destination);
  for (int i = 0; i < info->GetChannelCount(); ++i) {
    splitter->_pSplitterInfo->GetDestinationData(index, i)
      ->SetDestinationId(id);
  }
  splitter->_pSplitterInfo->MarkAsUpdated();
}

void SetMixVolume(SplitterType* splitter, int index, float volume,
  int sourceIndex, int destinationIndex) {
  detail::CheckResourceExclusion(splitter->_pSplitterInfo);
  SplitterInfo* info = splitter->_pSplitterInfo;
  if (info == nullptr) {
    return;
  }
  info->GetDestinationData(index, sourceIndex)
    ->SetMixVolume(volume, destinationIndex);
}

float GetMixVolume(const SplitterType* splitter, int index, int sourceIndex,
  int destinationIndex) {
  detail::CheckResourceExclusion(splitter->_pSplitterInfo);
  SplitterInfo* info = splitter->_pSplitterInfo;
  if (info == nullptr) {
    return 0.0f;
  }
  return info->GetDestinationData(index, sourceIndex)
    ->GetMixVolume(destinationIndex);
}

void SetBiquadFilter(SplitterType* splitter, int index, int filterIndex,
  TBiquadFilterParameter<float> parameter) {
  if (splitter == nullptr || splitter->_pSplitterInfo == nullptr) {
    return;
  }
  for (int i = 0; i < splitter->_pSplitterInfo->GetChannelCount(); ++i) {
    splitter->_pSplitterInfo->GetDestinationData(index, i)
      ->SetBiquadFilterParameter(filterIndex, parameter);
  }
}

TBiquadFilterParameter<float> GetBiquadFilter(const SplitterType* splitter,
  int index, int filterIndex) {
  if (splitter == nullptr || splitter->_pSplitterInfo == nullptr) {
    return {};
  }
  return splitter->_pSplitterInfo->GetDestinationData(index, 0)
    ->GetBiquadFilterParameter(filterIndex);
}

}

bool AcquireSplitter(AudioRendererConfig* config, SplitterType* splitter,
  int sampleRate, int channelCount, int destinationCount) {
  SplitterInfo* info = config->_pSplitterInfoManager->AcquireSplitterInfo(
    sampleRate, channelCount, destinationCount);
  if (info != nullptr) {
    splitter->_pSplitterInfo = info;
  }
  return info != nullptr;
}

void ReleaseSplitter(AudioRendererConfig* config, SplitterType* splitter) {
  detail::CheckResourceExclusion(splitter->_pSplitterInfo);
  if (splitter->_pSplitterInfo != nullptr) {
    config->_pSplitterInfoManager->ReleaseSplitterInfo(
      splitter->_pSplitterInfo);
    splitter->_pSplitterInfo = nullptr;
  }
}

void SetSplitterDestination(AudioRendererConfig* config,
  SplitterType* splitter, int index, FinalMixType* mix) {
  SetDestination(splitter, index, mix);
}

void SetSplitterDestination(AudioRendererConfig* config,
  SplitterType* splitter, int index, SubMixType* mix) {
  SetDestination(splitter, index, mix);
}

void ClearSplitterDestination(AudioRendererConfig* config,
  SplitterType* splitter, int index) {
  SetDestination(splitter, index, nullptr);
}

void SetSplitterMixVolume(SplitterType* splitter, int index, SubMixType* mix,
  float volume, int sourceIndex, int destinationIndex) {
  SetMixVolume(splitter, index, volume, sourceIndex, destinationIndex);
}

void SetSplitterMixVolume(SplitterType* splitter, int index,
  FinalMixType* mix, float volume, int sourceIndex, int destinationIndex) {
  SetMixVolume(splitter, index, volume, sourceIndex, destinationIndex);
}

float GetSplitterMixVolume(const SplitterType* splitter, int index,
  const SubMixType* mix, int sourceIndex, int destinationIndex) {
  return GetMixVolume(splitter, index, sourceIndex, destinationIndex);
}

float GetSplitterMixVolume(const SplitterType* splitter, int index,
  const FinalMixType* mix, int sourceIndex, int destinationIndex) {
  return GetMixVolume(splitter, index, sourceIndex, destinationIndex);
}

int GetSplitterSourceChannelCount(const SplitterType* splitter) {
  return splitter->_pSplitterInfo->GetChannelCount();
}

int GetSplitterDestinationCount(const SplitterType* splitter) {
  return splitter->_pSplitterInfo->GetDestinationCount();
}

int GetSplitterSampleRate(const SplitterType* splitter) {
  return splitter->_pSplitterInfo->GetSampleRate();
}

void SetSplitterBiquadFilterParameter(SplitterType* splitter, int index,
  SubMixType* mix, int filterIndex,
  const TBiquadFilterParameter<int16_t>& parameter) {
  if (splitter == nullptr || splitter->_pSplitterInfo == nullptr) {
    return;
  }
  SetBiquadFilter(splitter, index, filterIndex, ToFloat(parameter));
}

void SetSplitterBiquadFilterParameter(SplitterType* splitter, int index,
  FinalMixType* mix, int filterIndex,
  const TBiquadFilterParameter<int16_t>& parameter) {
  if (splitter == nullptr || splitter->_pSplitterInfo == nullptr) {
    return;
  }
  SetBiquadFilter(splitter, index, filterIndex, ToFloat(parameter));
}

void SetSplitterBiquadFilterParameter(SplitterType* splitter, int index,
  SubMixType* mix, int filterIndex,
  const TBiquadFilterParameter<float>& parameter) {
  SetBiquadFilter(splitter, index, filterIndex, parameter);
}

void SetSplitterBiquadFilterParameter(SplitterType* splitter, int index,
  FinalMixType* mix, int filterIndex,
  const TBiquadFilterParameter<float>& parameter) {
  SetBiquadFilter(splitter, index, filterIndex, parameter);
}

TBiquadFilterParameter<int16_t> GetSplitterBiquadFilterParameter(
  const SplitterType* splitter, int index, const SubMixType* mix,
  int filterIndex) {
  if (splitter == nullptr || splitter->_pSplitterInfo == nullptr) {
    return {};
  }
  return ToFixed(GetBiquadFilter(splitter, index, filterIndex));
}

TBiquadFilterParameter<int16_t> GetSplitterBiquadFilterParameter(
  const SplitterType* splitter, int index, const FinalMixType* mix,
  int filterIndex) {
  if (splitter == nullptr || splitter->_pSplitterInfo == nullptr) {
    return {};
  }
  return ToFixed(GetBiquadFilter(splitter, index, filterIndex));
}

void GetSplitterBiquadFilterParameter(
  TBiquadFilterParameter<int16_t>* parameter, const SplitterType* splitter,
  int index, const SubMixType* mix, int filterIndex) {
  *parameter = ToFixed(GetBiquadFilter(splitter, index, filterIndex));
}

void GetSplitterBiquadFilterParameter(
  TBiquadFilterParameter<int16_t>* parameter, const SplitterType* splitter,
  int index, const FinalMixType* mix, int filterIndex) {
  *parameter = ToFixed(GetBiquadFilter(splitter, index, filterIndex));
}

void GetSplitterBiquadFilterParameter(
  TBiquadFilterParameter<float>* parameter, const SplitterType* splitter,
  int index, const SubMixType* mix, int filterIndex) {
  *parameter = GetBiquadFilter(splitter, index, filterIndex);
}

void GetSplitterBiquadFilterParameter(
  TBiquadFilterParameter<float>* parameter, const SplitterType* splitter,
  int index, const FinalMixType* mix, int filterIndex) {
  *parameter = GetBiquadFilter(splitter, index, filterIndex);
}

}
