#include <string.h>

#include "nn/audio/renderer_api.hpp"
#include "nn/audio/effect_common.hpp"

namespace nn::os {

void FlushDataCache(const void* address, size_t size);

}

namespace nn::audio {

EffectInfoVersion1::EffectInfoVersion1() {
  memset(this, 0, sizeof(*this));
}

EffectInfoVersion2::EffectInfoVersion2() {
  memset(this, 0, offsetof(EffectInfoVersion2, reserved3));
}

EffectManager::EffectManager(int count, EffectInfoVersion2* infos) {
  m_Infos = infos;
  m_Mutex = {};
  m_Count = count;
  memset(infos, 0, sizeof(EffectInfoVersion2) * count);
}

Result EffectManager::Add(EffectInfoVersion2** info, EffectType type,
  void* buffer, size_t size, MixInfo* mix) {
  m_Mutex.Lock();
  Result result = {0xa99};
  for (int i = 0; i < m_Count; ++i) {
    if (m_Infos[i].type != EffectType_Invalid) {
      continue;
    }
    m_Infos[i].buffer = buffer;
    m_Infos[i].bufferSize = size;
    m_Infos[i].type = type;
    m_Infos[i].mixId = mix->mixId;
    m_Infos[i].processingOrder = mix->effectCount++;
    m_Infos[i].isNew = true;
    m_Infos[i].usageState = detail::UsageState_New;
    m_Infos[i].reserved3 = 0;
    if (buffer != nullptr) {
      memset(buffer, 0, size);
      os::FlushDataCache(buffer, size);
    }
    *info = &m_Infos[i];
    result = {0};
    break;
  }
  m_Mutex.Unlock();
  return result;
}

bool EffectManager::IsInitialized(const EffectInfoVersion2* info) const {
  for (int i = 0; i < m_Count; ++i) {
    if (&m_Infos[i] == info && m_Infos[i].type != EffectType_Invalid) {
      return true;
    }
  }
  return false;
}

void* EffectManager::Remove(EffectInfoVersion2* info, MixInfo* mix) {
  m_Mutex.Lock();
  for (int i = 0; i < m_Count; ++i) {
    EffectInfoVersion2& other = m_Infos[i];
    if (other.mixId == info->mixId &&
      other.processingOrder > info->processingOrder) {
      --other.processingOrder;
    }
  }
  --mix->effectCount;
  info->type = EffectType_Invalid;
  void* buffer = info->buffer;
  info->mixId = 0x7fffffff;
  info->buffer = nullptr;
  info->bufferSize = 0;
  m_Mutex.Unlock();
  return buffer;
}

size_t EffectManager::UpdateEffectsInParameter(
  renderer::ipc::Effect::UpdateData<2>* data) {
  m_Mutex.Lock();
  for (int i = 0; i < m_Count; ++i) {
    memcpy(&data[i], &m_Infos[i], sizeof(data[i]));
    switch (m_Infos[i].type) {
      case EffectType_Delay:
        m_Infos[i].parameter.delay.parameterStatus =
          detail::ParameterStatus_Updated;
        break;
      case EffectType_Reverb:
        m_Infos[i].parameter.reverb.parameterStatus =
          detail::ParameterStatus_Updated;
        break;
      case EffectType_I3dl2Reverb:
        m_Infos[i].parameter.i3dl2Reverb.parameterStatus =
          detail::ParameterStatus_Updated;
        break;
      case EffectType_BiquadFilter:
        m_Infos[i].parameter.biquadFilter.parameterStatus =
          detail::ParameterStatus_Updated;
        break;
      case EffectType_LightLimiter:
        m_Infos[i].parameter.lightLimiter.parameterStatus =
          detail::ParameterStatus_Updated;
        m_Infos[i].parameter.lightLimiter.isStatisticsResetRequired = false;
        break;
      case EffectType_Compressor:
        m_Infos[i].parameter.compressor.parameterStatus =
          detail::ParameterStatus_Updated;
        m_Infos[i].parameter.compressor.isStatisticsResetRequired = false;
        break;
      default:
        break;
    }
    m_Infos[i].isNew = false;
  }
  size_t size = sizeof(*data) * m_Count;
  m_Mutex.Unlock();
  return size;
}

size_t EffectManager::UpdateEffectOutStatus(
  const renderer::ipc::Effect::StatusData<1>* status) {
  m_Mutex.Lock();
  for (int i = 0; i < m_Count; ++i) {
    m_Infos[i].usageState = status[i].usageState;
    EffectType type = m_Infos[i].type;
    if (type == EffectType_Compressor || type == EffectType_LightLimiter) {
      memcpy(m_Infos[i].resultState.raw, status[i].resultState,
        sizeof(status[i].resultState));
    }
  }
  size_t size = sizeof(*status) * m_Count;
  m_Mutex.Unlock();
  return size;
}

bool EffectManager::NeedToUpdateEffectResultStatus(
  const EffectInfoVersion2& info) const {
  return info.type == EffectType_LightLimiter ||
    info.type == EffectType_Compressor;
}

}
