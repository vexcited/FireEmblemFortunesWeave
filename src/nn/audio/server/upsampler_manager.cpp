#include "nn/audio/server/upsampler_manager.hpp"

namespace nn::audio {

// The reserved tail after the input indices is left untouched.
UpsamplerInfo::UpsamplerInfo()
  : state(), manager(nullptr), buffer(nullptr), sampleCount(0), reserved0(),
    isUsed(false), inputIndices() {}

}

namespace nn::audio::server {

UpsamplerManager::UpsamplerManager(int count, UpsamplerInfo* infos,
  int8_t* buffer)
  : m_Count(count), m_Infos(infos), m_Buffer(buffer), m_Mutex{} {
}

UpsamplerInfo* UpsamplerManager::Allocate() {
  m_Mutex.Lock();
  UpsamplerInfo* result = nullptr;
  for (int i = 0; i < m_Count; i++) {
    UpsamplerInfo* info = &m_Infos[i];
    if (!info->isUsed) {
      info->isUsed = true;
      info->sampleCount = SampleCount;
      info->manager = this;
      info->buffer = reinterpret_cast<int32_t*>(m_Buffer +
        i * SampleCount * ChannelCountMax * sizeof(int32_t));
      result = info;
      break;
    }
  }
  m_Mutex.Unlock();
  return result;
}

void UpsamplerManager::Free(UpsamplerInfo* info) {
  m_Mutex.Lock();
  info->isUsed = false;
  m_Mutex.Unlock();
}

}
