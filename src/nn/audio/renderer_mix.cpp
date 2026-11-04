#include <string.h>

#include "nn/audio/renderer_api.hpp"

namespace nn::audio {

bool AcquireFinalMix(AudioRendererConfig* config, FinalMixType* mix,
  int bufferCount) {
  MixManager* manager = config->_pMixManager;
  const bool acquired = manager->Acquire(mix, bufferCount);
  if (acquired) {
    detail::CheckResourceExclusion(mix->_pMixInfo);
    mix->_pMixInfo->bufferCount = bufferCount;
    mix->_pMixInfo->sampleRate = manager->GetFinalMixSampleRate();
    mix->_pMixInfo->volume = 1.0f;
    mix->_pMixInfo->isDirty = true;
  }
  return acquired;
}

void ReleaseFinalMix(AudioRendererConfig* config, FinalMixType* mix) {
  detail::CheckResourceExclusion(mix->_pMixInfo);
  mix->_pMixInfo->isDirty = true;
  config->_pMixManager->Release(mix);
}

int GetFinalMixBufferCount(const FinalMixType* mix) {
  return mix->_pMixInfo->bufferCount;
}

float GetFinalMixVolume(const FinalMixType* mix) {
  return mix->_pMixInfo->volume;
}

void SetFinalMixVolume(FinalMixType* mix, float volume) {
  detail::CheckResourceExclusion(mix->_pMixInfo);
  mix->_pMixInfo->volume = volume;
  mix->_pMixInfo->isDirty = true;
}

uint32_t GetFinalMixNodeId(const FinalMixType* mix) {
  return mix->_pMixInfo->nodeId;
}

int GetFinalMixSampleRate(const FinalMixType* mix) {
  return mix->_pMixInfo->sampleRate;
}

bool AcquireSubMix(AudioRendererConfig* config, SubMixType* mix,
  int sampleRate, int bufferCount) {
  const bool acquired = config->_pMixManager->Acquire(mix, bufferCount);
  if (acquired) {
    detail::CheckResourceExclusion(mix->_pMixInfo);
    mix->_pMixInfo->volume = 1.0f;
    mix->_pMixInfo->sampleRate = sampleRate;
    memset(mix->_pMixInfo->mixVolume, 0, sizeof(mix->_pMixInfo->mixVolume));
    mix->_pMixInfo->isDirty = true;
  }
  return acquired;
}

void ReleaseSubMix(AudioRendererConfig* config, SubMixType* mix) {
  detail::CheckResourceExclusion(mix->_pMixInfo);
  mix->_pMixInfo->isDirty = true;
  config->_pMixManager->Release(mix);
}

void SetSubMixDestination(AudioRendererConfig* config, SubMixType* mix,
  FinalMixType* destination) {
  detail::CheckResourceExclusion(mix->_pMixInfo);
  mix->_pMixInfo->destinationMixId = destination->_pMixInfo->mixId;
  mix->_pMixInfo->destinationSplitterId = -1;
  mix->_pMixInfo->isDirty = true;
}

void SetSubMixDestination(AudioRendererConfig* config, SubMixType* mix,
  SubMixType* destination) {
  detail::CheckResourceExclusion(mix->_pMixInfo);
  mix->_pMixInfo->destinationMixId = destination->_pMixInfo->mixId;
  mix->_pMixInfo->destinationSplitterId = -1;
  mix->_pMixInfo->isDirty = true;
}

void SetSubMixDestination(AudioRendererConfig* config, SubMixType* mix,
  SplitterType* destination) {
  detail::CheckResourceExclusion(mix->_pMixInfo);
  mix->_pMixInfo->destinationMixId = 0x7fffffff;
  mix->_pMixInfo->destinationSplitterId =
    destination->_pSplitterInfo->GetId();
  mix->_pMixInfo->isDirty = true;
}

void ClearSubMixDestination(AudioRendererConfig* config, SubMixType* mix) {
  mix->_pMixInfo->destinationMixId = 0x7fffffff;
  mix->_pMixInfo->destinationSplitterId = -1;
  mix->_pMixInfo->isDirty = true;
}

int GetSubMixSampleRate(const SubMixType* mix) {
  return mix->_pMixInfo->sampleRate;
}

int GetSubMixBufferCount(const SubMixType* mix) {
  return mix->_pMixInfo->bufferCount;
}

float GetSubMixVolume(const SubMixType* mix) {
  return mix->_pMixInfo->volume;
}

void SetSubMixVolume(SubMixType* mix, float volume) {
  detail::CheckResourceExclusion(mix->_pMixInfo);
  mix->_pMixInfo->volume = volume;
  mix->_pMixInfo->isDirty = true;
}

void SetSubMixMixVolume(SubMixType* source, FinalMixType* destination,
  float volume, int sourceIndex, int destinationIndex) {
  detail::CheckResourceExclusion(source->_pMixInfo);
  source->_pMixInfo->mixVolume[sourceIndex][destinationIndex] = volume;
  source->_pMixInfo->isDirty = true;
}

float GetSubMixMixVolume(const SubMixType* source,
  const FinalMixType* destination, int sourceIndex, int destinationIndex) {
  return source->_pMixInfo->mixVolume[sourceIndex][destinationIndex];
}

void SetSubMixMixVolume(SubMixType* source, SubMixType* destination,
  float volume, int sourceIndex, int destinationIndex) {
  detail::CheckResourceExclusion(source->_pMixInfo);
  source->_pMixInfo->mixVolume[sourceIndex][destinationIndex] = volume;
  source->_pMixInfo->isDirty = true;
}

float GetSubMixMixVolume(const SubMixType* source,
  const SubMixType* destination, int sourceIndex, int destinationIndex) {
  return source->_pMixInfo->mixVolume[sourceIndex][destinationIndex];
}

uint32_t GetSubMixNodeId(const SubMixType* mix) {
  return mix->_pMixInfo->nodeId;
}

}
