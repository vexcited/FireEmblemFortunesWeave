#include <new>
#include <string.h>

#include "nn/audio/renderer_api.hpp"

namespace nn::os {

void FlushDataCache(const void* address, size_t size);

}

namespace nn::audio {
namespace {

void FlushIfValid(const void* address, size_t size) {
  if (address != nullptr && size != 0) {
    os::FlushDataCache(address, size);
  }
}

void CopyBiquadFilter(renderer::ipc::Voice::BiquadFilterParameter& data,
  const TBiquadFilterParameter<float>& parameter) {
  data.enable = parameter.enable;
  data.numerator[0] = parameter.numerator[0];
  data.numerator[1] = parameter.numerator[1];
  data.numerator[2] = parameter.numerator[2];
  data.denominator[0] = parameter.denominator[0];
  data.denominator[1] = parameter.denominator[1];
}

void CopyWaveBuffer(renderer::ipc::Voice::WaveBuffer& data,
  const VoiceWaveBuffer& waveBuffer) {
  data.address = static_cast<CpuAddr>(
    reinterpret_cast<uintptr_t>(waveBuffer.buffer));
  data.size = waveBuffer.size;
  data.startSampleOffset = waveBuffer.startSampleOffset;
  data.endSampleOffset = waveBuffer.endSampleOffset;
  data.isLoop = waveBuffer.loop;
  data.isEndOfStream = waveBuffer.isEndOfStream;
  data.isSentToServer = waveBuffer.isSentToServer;
  data.loopCount = waveBuffer.loopCount;
  data.contextAddress = static_cast<CpuAddr>(
    reinterpret_cast<uintptr_t>(waveBuffer.pContext));
  data.contextSize = waveBuffer.contextSize;
  data.loopStartSampleOffset = waveBuffer.loopStartSampleOffset;
  data.loopEndSampleOffset = waveBuffer.loopEndSampleOffset;
}

}

VoiceInfoManager::VoiceInfoManager() : m_Mutex() {}

size_t VoiceInfoManager::GetWorkBufferSize(int count) {
  constexpr size_t AlignmentPadding = 8 - 1;
  return sizeof(VoiceInfo) * count + AlignmentPadding +
    sizeof(VoiceChannelResource) * count + AlignmentPadding;
}

void VoiceInfoManager::Initialize(int count, void* buffer, size_t size) {
  m_Mutex.Lock();
  common::WorkBufferAllocator allocator(buffer, size);
  m_VoiceCount = count;
  m_UsedVoiceCount = 0;
  VoiceInfo* infos = static_cast<VoiceInfo*>(
    allocator.Allocate(sizeof(VoiceInfo) * count, 8));
  for (int i = 0; i < count; ++i) {
    new (&infos[i]) VoiceInfo();
  }
  m_Infos = infos;
  m_UsedList.clear();
  m_FreeList.clear();
  for (int i = 0; i < count; ++i) {
    VoiceInfo& info = m_Infos[i];
    info.isInUse = false;
    info.id = i;
    info.slotIndex = i;
    info.slotReserved = 0;
    for (auto& resource : info.channelResources) {
      resource = nullptr;
    }
    m_FreeList.push_back(info);
  }
  m_ChannelResourceCount = count;
  m_UsedChannelResourceCount = 0;
  VoiceChannelResource* resources = static_cast<VoiceChannelResource*>(
    allocator.Allocate(sizeof(VoiceChannelResource) * count, 8));
  for (int i = 0; i < count; ++i) {
    new (&resources[i]) VoiceChannelResource(i);
  }
  m_ChannelResources = resources;
  m_FreeChannelResources.clear();
  for (int i = 0; i < count; ++i) {
    m_FreeChannelResources.push_back(m_ChannelResources[i]);
  }
  m_Mutex.Unlock();
}

VoiceInfo* VoiceInfoManager::GetFreeVoiceInfo() {
  if (m_FreeList.empty()) {
    return nullptr;
  }
  VoiceInfo* info = &m_FreeList.front();
  m_FreeList.pop_front();
  return info;
}

VoiceInfo* VoiceInfoManager::AcquireVoiceInfo(int priority,
  int channelCount) {
  m_Mutex.Lock();
  VoiceInfo* info = nullptr;
  if (m_VoiceCount > m_UsedVoiceCount &&
    m_ChannelResourceCount - m_UsedChannelResourceCount >= channelCount) {
    info = GetFreeVoiceInfo();
    info->priority = priority;
    info->isInUse = true;
    InsertToUsedList(info);
    for (int i = 0; i < channelCount; ++i) {
      VoiceChannelResource& resource = m_FreeChannelResources.front();
      m_FreeChannelResources.pop_front();
      info->channelResources[i] = &resource;
      info->channelResourceIds[i] = resource.id;
      resource.isUsed = true;
    }
    info->waveBufferCount = 0;
    info->waveBufferHead = 0;
    info->releasedWaveBufferCount = 0;
    memset(info->waveBuffer, 0, sizeof(info->waveBuffer));
    for (auto& waveBuffer : info->waveBuffer) {
      waveBuffer.isSentToServer = true;
    }
    info->appendedWaveBufferCount = 0;
    ++m_UsedVoiceCount;
    m_UsedChannelResourceCount += channelCount;
  }
  m_Mutex.Unlock();
  return info;
}

void VoiceInfoManager::InsertToUsedList(VoiceInfo* info) {
  auto it = m_UsedList.begin();
  for (; it != m_UsedList.end(); ++it) {
    if (it->priority >= info->priority) {
      break;
    }
  }
  m_UsedList.insert(it, *info);
}

void VoiceInfoManager::ReleaseVoiceInfo(VoiceInfo* info) {
  m_Mutex.Lock();
  int channelCount = info->channelCount;
  --m_UsedVoiceCount;
  if (m_UsedList.iterator_to(*info) != m_UsedList.end()) {
    VoiceList::erase(*info);
  }
  m_FreeList.push_back(*info);
  info->isInUse = false;
  for (int i = 0; i < channelCount; ++i) {
    --m_UsedChannelResourceCount;
    m_FreeChannelResources.push_back(*info->channelResources[i]);
    info->channelResources[i]->isUsed = false;
    info->channelResources[i] = nullptr;
  }
  m_Mutex.Unlock();
}

bool VoiceInfoManager::IsVoiceInfoValid(const VoiceInfo* info) const {
  if (info < m_Infos || info > &m_Infos[m_VoiceCount]) {
    return false;
  }
  uintptr_t offset = reinterpret_cast<uintptr_t>(info) -
    reinterpret_cast<uintptr_t>(m_Infos);
  return offset % sizeof(VoiceInfo) == 0;
}

void VoiceInfoManager::FlushVoiceDataCache(const VoiceInfo* info) {
  if (info->isNew) {
    FlushIfValid(info->pAdditionalParameter, info->additionalParameterSize);
  }
  for (const auto& waveBuffer : info->waveBuffer) {
    if (waveBuffer.isSentToServer) {
      continue;
    }
    FlushIfValid(waveBuffer.buffer, waveBuffer.size);
    if (info->sampleFormat == SampleFormat_Adpcm) {
      FlushIfValid(waveBuffer.pContext, waveBuffer.contextSize);
    }
  }
}

void VoiceInfoManager::UpdateVoiceRelatedParameters(void* data,
  size_t* voiceSize, size_t* channelResourceSize) {
  m_Mutex.Lock();
  auto* resources =
    static_cast<renderer::ipc::VoiceChannelResource::UpdateData<0>*>(data);
  *channelResourceSize = UpdateVoiceChannelResourceInParameter(resources);
  *voiceSize = UpdateVoiceInParameter(
    reinterpret_cast<renderer::ipc::Voice::UpdateData<1>*>(
      resources + m_ChannelResourceCount));
  m_Mutex.Unlock();
}

size_t VoiceInfoManager::UpdateVoiceChannelResourceInParameter(
  renderer::ipc::VoiceChannelResource::UpdateData<0>* data) {
  for (int i = 0; i < m_ChannelResourceCount; ++i) {
    const VoiceChannelResource& resource = m_ChannelResources[i];
    if (resource.isUsed) {
      data[i].id = resource.id;
      memcpy(data[i].mixVolume, resource.mixVolume,
        sizeof(data[i].mixVolume));
      data[i].isUsed = true;
    }
    else {
      data[i].isUsed = false;
    }
  }
  return sizeof(*data) * m_ChannelResourceCount;
}

size_t VoiceInfoManager::UpdateVoiceInParameter(
  renderer::ipc::Voice::UpdateData<1>* data) {
  int order = 0;
  for (auto it = m_UsedList.begin(); it != m_UsedList.end(); ++it) {
    it->sortingOrder = order++;
  }
  for (int i = 0; i < m_VoiceCount; ++i) {
    const VoiceInfo& info = m_Infos[i];
    renderer::ipc::Voice::UpdateData<1>& in = data[i];
    if (!info.isInUse) {
      in.isInUse = false;
      continue;
    }
    FlushVoiceDataCache(&info);
    memset(&in, 0, sizeof(in));
    in.id = info.id;
    in.nodeId = info.nodeId;
    in.isNew = info.isNew;
    in.isInUse = info.isInUse;
    in.playState = info.playState;
    in.sampleFormat = info.sampleFormat;
    in.sampleRate = info.sampleRate;
    in.priority = info.priority;
    in.sortingOrder = info.sortingOrder;
    in.channelCount = info.channelCount;
    in.pitch = info.pitch;
    in.volume = info.volume;
    CopyBiquadFilter(in.biquadFilter[0], info.biquadFilter[0]);
    CopyBiquadFilter(in.biquadFilter[1], info.biquadFilter[1]);
    in.biquadFilterCrossFadeCurveType = info.biquadFilterCrossFadeCurveType;
    in.waveBufferCount = info.waveBufferCount;
    in.waveBufferHead = info.waveBufferHead;
    in.additionalParameterAddress = static_cast<CpuAddr>(
      reinterpret_cast<uintptr_t>(info.pAdditionalParameter));
    in.additionalParameterSize = info.additionalParameterSize;
    in.destinationMixId = info.destinationMixId;
    in.destinationSplitterId = info.destinationSplitterId;
    for (int j = 0; j < 4; ++j) {
      CopyWaveBuffer(in.waveBuffer[j], info.waveBuffer[j]);
    }
    memcpy(in.channelResourceIds, info.channelResourceIds,
      sizeof(in.channelResourceIds));
    in.isDroppedFlagReset = info.isDroppedFlagReset;
    in.flushWaveBufferCount = info.flushWaveBufferCount;
    in.behaviorFlags.isPlayedSampleCountResetAtLoopPoint =
      info.behaviorFlags.isPlayedSampleCountResetAtLoopPoint;
    in.behaviorFlags.isPitchAndSrcSkipped =
      info.behaviorFlags.isPitchAndSrcSkipped;
    in.behaviorFlags.isLoopCountSpecified =
      info.behaviorFlags.isLoopCountSpecified;
    in.srcQuality = info.srcQuality;
  }
  return sizeof(*data) * m_VoiceCount;
}

size_t VoiceInfoManager::UpdateVoiceOutStatus(
  const renderer::ipc::Voice::StatusData<0>* status) {
  m_Mutex.Lock();
  for (int i = 0; i < m_VoiceCount; ++i) {
    VoiceInfo& info = m_Infos[i];
    if (!info.isInUse) {
      continue;
    }
    info.isVoiceDropped = status[i].isVoiceDropped;
    info.playedSampleCount = status[i].playedSampleCount;
    info.consumedWaveBufferCount = status[i].consumedWaveBufferCount;
    info.isNew = false;
    info.isDroppedFlagReset = 0;
    info.flushWaveBufferCount = 0;
    for (auto& waveBuffer : info.waveBuffer) {
      waveBuffer.isSentToServer = true;
    }
  }
  size_t size = sizeof(*status) * m_VoiceCount;
  m_Mutex.Unlock();
  return size;
}

}
