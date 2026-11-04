#include <string.h>

#include "nn/audio/aux_buffer.hpp"
#include "nn/audio/effect_api.hpp"
#include "nn/audio/effect_common.hpp"

namespace nn::os {

void FlushDataCache(const void* address, size_t size);

}

namespace nn::audio {

namespace {

using Parameter = EffectInfoVersion2::AuxParameter;

Parameter& GetParameter(const EffectInfoVersion2* info) {
  return const_cast<EffectInfoVersion2*>(info)->parameter.aux;
}

void SetUpBuffers(AudioRendererConfig* config, Parameter& parameter,
  MixInfo* mix, size_t size) {
  parameter.sampleCount = 0;
  parameter.sampleRate = mix->sampleRate;
  parameter.channelCountMax = mix->bufferCount;
  parameter.mixBufferSampleCount =
    config->_pMixManager->GetMixBufferSampleCount();
  parameter.mixBufferCount = 0;
}

void SetUpCapacity(AudioRendererConfig* config, Parameter& parameter,
  size_t size) {
  const size_t storageSize = size - sizeof(AuxBufferInfo);
  parameter.bufferChannelCountMax = storageSize
    / (sizeof(int32_t) * config->_pMixManager->GetMixBufferSampleCount());
  const uint32_t sampleCount =
    static_cast<uint32_t>(storageSize / sizeof(int32_t)) & ~15u;
  parameter.bufferSampleCountMax = sampleCount
    / parameter.mixBufferSampleCount * parameter.mixBufferSampleCount;
}

template<class Mix>
Result AddAuxImpl(AudioRendererConfig* config, AuxType* aux, Mix* mix,
  void* sendBuffer, void* returnBuffer, size_t size) {
  const Result result = detail::AddEffect(config, aux, EffectType_Aux,
    nullptr, 0, mix);
  if (result.value != 0) {
    return result;
  }

  detail::CheckResourceExclusion(aux->_pEffectInfo);
  memset(&aux->_pEffectInfo->parameter.aux, 0, sizeof(Parameter));
  AuxBufferInfo* returnInfo = nullptr;
  AuxBufferInfo* sendInfo = nullptr;
  int32_t* sendStorage = InitializeAuxBufferInfo(&sendInfo, sendBuffer,
    size);
  int32_t* returnStorage = InitializeAuxBufferInfo(&returnInfo,
    returnBuffer, size);
  Parameter& parameter = GetParameter(aux->_pEffectInfo);
  SetUpBuffers(config, parameter, mix->_pMixInfo, size);
  parameter.sendBufferInfo = sendInfo;
  parameter.sendBuffer = sendStorage;
  parameter.returnBufferInfo = returnInfo;
  parameter.returnBuffer = returnStorage;
  SetUpCapacity(config, parameter, size);
  aux->_pEffectInfo->isEnabled = true;
  mix->_pMixInfo->isDirty = true;
  return result;
}

template<class Mix>
Result AddCaptureImpl(AudioRendererConfig* config, CaptureType* capture,
  Mix* mix, void* buffer, size_t size) {
  const Result result = detail::AddEffect(config, capture,
    EffectType_Capture, nullptr, 0, mix);
  if (result.value != 0) {
    return result;
  }

  detail::CheckResourceExclusion(capture->_pEffectInfo);
  memset(&capture->_pEffectInfo->parameter.aux, 0, sizeof(Parameter));
  AuxBufferInfo* info = nullptr;
  int32_t* storage = InitializeAuxBufferInfo(&info, buffer, size);
  Parameter& parameter = GetParameter(capture->_pEffectInfo);
  SetUpBuffers(config, parameter, mix->_pMixInfo, size);
  parameter.returnBufferInfo = nullptr;
  parameter.returnBuffer = nullptr;
  parameter.sendBufferInfo = info;
  parameter.sendBuffer = storage;
  SetUpCapacity(config, parameter, size);
  capture->_pEffectInfo->isEnabled = true;
  mix->_pMixInfo->isDirty = true;
  return result;
}

void UpdateSampleCount(Parameter& parameter, int channelCount) {
  parameter.mixBufferCount = channelCount;
  parameter.sampleCount = parameter.bufferChannelCountMax / channelCount
    * channelCount * parameter.mixBufferSampleCount;
}

}

size_t GetRequiredBufferSizeForAuxSendReturnBuffer(
  const AudioRendererParameter* parameter, int frameCount, int channelCount) {
  const size_t size = sizeof(int32_t)
    * (channelCount * frameCount * parameter->sampleCount);
  return ((size + 63) & ~size_t{63}) + sizeof(AuxBufferInfo);
}

Result AddAux(AudioRendererConfig* config, AuxType* aux, FinalMixType* mix,
  void* sendBuffer, void* returnBuffer, size_t size) {
  return AddAuxImpl(config, aux, mix, sendBuffer, returnBuffer, size);
}

Result AddAux(AudioRendererConfig* config, AuxType* aux, SubMixType* mix,
  void* sendBuffer, void* returnBuffer, size_t size) {
  return AddAuxImpl(config, aux, mix, sendBuffer, returnBuffer, size);
}

void* RemoveAux(AudioRendererConfig* config, AuxType* aux,
  FinalMixType* mix) {
  return detail::RemoveEffect(config, aux, mix);
}

void* RemoveAux(AudioRendererConfig* config, AuxType* aux, SubMixType* mix) {
  return detail::RemoveEffect(config, aux, mix);
}

int GetAuxChannelCountMax(const AuxType* aux) {
  return GetParameter(aux->_pEffectInfo).channelCountMax;
}

bool IsAuxEnabled(const AuxType* aux) {
  detail::CheckResourceExclusion(aux->_pEffectInfo);
  return aux->_pEffectInfo->isEnabled;
}

bool IsAuxRemovable(const AuxType* aux) {
  detail::CheckResourceExclusion(aux->_pEffectInfo);
  const EffectInfoVersion2* info = aux->_pEffectInfo;
  if (info == nullptr || info->type != EffectType_Aux) {
    return false;
  }
  if (info->usageState != detail::UsageState_Removable
    && info->usageState != detail::UsageState_New) {
    return false;
  }
  return !IsAuxEnabled(aux);
}

void SetAuxEnabled(AuxType* aux, bool enabled) {
  detail::CheckResourceExclusion(aux->_pEffectInfo);
  aux->_pEffectInfo->isEnabled = enabled;
  const Parameter& parameter = GetParameter(aux->_pEffectInfo);
  AuxBufferInfo* returnInfo = parameter.returnBufferInfo;
  ResetAuxBuffer(parameter.sendBufferInfo);
  ResetAuxBuffer(returnInfo);
  os::FlushDataCache(returnInfo, sizeof(AuxBufferInfo));
}

void GetAuxInputOutput(const AuxType* aux, int8_t* input, int8_t* output,
  int* count, int countMax) {
  const int channelCount =
    std::min(GetParameter(aux->_pEffectInfo).mixBufferCount, countMax);
  for (int i = 0; i < channelCount; ++i) {
    input[i] = GetParameter(aux->_pEffectInfo).input[i];
    output[i] = GetParameter(aux->_pEffectInfo).output[i];
  }
  *count = channelCount;
}

void SetAuxInputOutput(AuxType* aux, const int8_t* input,
  const int8_t* output, int count) {
  detail::CheckResourceExclusion(aux->_pEffectInfo);
  Parameter& parameter = GetParameter(aux->_pEffectInfo);
  const int channelCount = std::min(parameter.channelCountMax, count);
  for (int i = 0; i < channelCount; ++i) {
    parameter.input[i] = input[i];
    parameter.output[i] = output[i];
  }
  UpdateSampleCount(parameter, channelCount);
}

int ReadAuxSendBuffer(AuxType* aux, int32_t* output, int count) {
  const Parameter& parameter = GetParameter(aux->_pEffectInfo);
  return ReadAuxBuffer(parameter.sendBufferInfo, parameter.sendBuffer,
    parameter.sampleCount, output, count);
}

int WriteAuxReturnBuffer(AuxType* aux, const int32_t* input, int count) {
  const Parameter& parameter = GetParameter(aux->_pEffectInfo);
  return WriteAuxBuffer(parameter.returnBufferInfo, parameter.returnBuffer,
    parameter.sampleCount, input, count);
}

int GetAuxSampleRate(const AuxType* aux) {
  return GetParameter(aux->_pEffectInfo).sampleRate;
}

int GetAuxSampleCount(const AuxType* aux) {
  return GetParameter(aux->_pEffectInfo).bufferSampleCountMax;
}

AuxBufferStatistics GetAuxBufferStatistics(const AuxType* aux) {
  const Parameter& parameter = GetParameter(aux->_pEffectInfo);
  AuxBufferInfo* returnInfo = parameter.returnBufferInfo;
  AuxBufferStatistics statistics;
  statistics.sendBufferLostSampleCount =
    GetAuxBufferLostSampleCount(parameter.sendBufferInfo);
  statistics.returnBufferLostSampleCount =
    GetAuxBufferLostSampleCount(returnInfo);
  return statistics;
}

void ResetAuxBufferStatistics(AuxType* aux) {
  const Parameter& parameter = GetParameter(aux->_pEffectInfo);
  AuxBufferInfo* returnInfo = parameter.returnBufferInfo;
  ResetAuxBufferLostSampleCount(parameter.sendBufferInfo);
  ResetAuxBufferLostSampleCount(returnInfo);
}

size_t GetRequiredBufferSizeForCapture(
  const AudioRendererParameter* parameter, int frameCount, int channelCount) {
  const size_t size = sizeof(int32_t)
    * (channelCount * frameCount * parameter->sampleCount);
  return ((size + 63) & ~size_t{63}) + sizeof(AuxBufferInfo);
}

Result AddCapture(AudioRendererConfig* config, CaptureType* capture,
  FinalMixType* mix, void* buffer, size_t size) {
  return AddCaptureImpl(config, capture, mix, buffer, size);
}

Result AddCapture(AudioRendererConfig* config, CaptureType* capture,
  SubMixType* mix, void* buffer, size_t size) {
  return AddCaptureImpl(config, capture, mix, buffer, size);
}

void* RemoveCapture(AudioRendererConfig* config, CaptureType* capture,
  FinalMixType* mix) {
  return detail::RemoveEffect(config, capture, mix);
}

void* RemoveCapture(AudioRendererConfig* config, CaptureType* capture,
  SubMixType* mix) {
  return detail::RemoveEffect(config, capture, mix);
}

int GetCaptureChannelCountMax(const CaptureType* capture) {
  return GetParameter(capture->_pEffectInfo).channelCountMax;
}

bool IsCaptureEnabled(const CaptureType* capture) {
  detail::CheckResourceExclusion(capture->_pEffectInfo);
  return capture->_pEffectInfo->isEnabled;
}

bool IsCaptureRemovable(const CaptureType* capture) {
  detail::CheckResourceExclusion(capture->_pEffectInfo);
  const EffectInfoVersion2* info = capture->_pEffectInfo;
  if (info == nullptr || info->type != EffectType_Capture) {
    return false;
  }
  if (info->usageState != detail::UsageState_Removable
    && info->usageState != detail::UsageState_New) {
    return false;
  }
  return !IsCaptureEnabled(capture);
}

void SetCaptureEnabled(CaptureType* capture, bool enabled) {
  detail::CheckResourceExclusion(capture->_pEffectInfo);
  capture->_pEffectInfo->isEnabled = enabled;
  ResetAuxBuffer(GetParameter(capture->_pEffectInfo).sendBufferInfo);
}

void GetCaptureInput(const CaptureType* capture, int8_t* input, int* count,
  int countMax) {
  const int channelCount =
    std::min(GetParameter(capture->_pEffectInfo).mixBufferCount, countMax);
  for (int i = 0; i < channelCount; ++i) {
    input[i] = GetParameter(capture->_pEffectInfo).input[i];
  }
  *count = channelCount;
}

void SetCaptureInput(CaptureType* capture, const int8_t* input, int count) {
  detail::CheckResourceExclusion(capture->_pEffectInfo);
  Parameter& parameter = GetParameter(capture->_pEffectInfo);
  const int channelCount = std::min(parameter.channelCountMax, count);
  for (int i = 0; i < channelCount; ++i) {
    parameter.input[i] = input[i];
    parameter.output[i] = input[i];
  }
  UpdateSampleCount(parameter, channelCount);
}

int ReadCaptureBuffer(CaptureType* capture, int32_t* output, int count) {
  const Parameter& parameter = GetParameter(capture->_pEffectInfo);
  return ReadAuxBuffer(parameter.sendBufferInfo, parameter.sendBuffer,
    parameter.sampleCount, output, count);
}

int GetCaptureSampleRate(const CaptureType* capture) {
  return GetParameter(capture->_pEffectInfo).sampleRate;
}

int GetCaptureSampleCount(const CaptureType* capture) {
  return GetParameter(capture->_pEffectInfo).bufferSampleCountMax;
}

int GetCaptureLostSampleCount(const CaptureType* capture) {
  return GetAuxBufferLostSampleCount(
    GetParameter(capture->_pEffectInfo).sendBufferInfo);
}

void ResetCaptureLostSampleCount(CaptureType* capture) {
  ResetAuxBufferLostSampleCount(
    GetParameter(capture->_pEffectInfo).sendBufferInfo);
}

}
