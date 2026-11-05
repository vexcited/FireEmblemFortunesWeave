#include <string.h>

#include "nn/audio/renderer_api.hpp"

namespace nn::audio {
namespace {

constexpr int UnusedDestinationId = 0x7fffffff;
constexpr int ChannelCountMax = 6;

struct SplitterInParameterHeader {
  uint32_t magic;
  int infoCount;
  int destinationCount;
  uint8_t reserved[20];
};

static_assert(sizeof(SplitterInParameterHeader) == 32);

template<class List>
int CountItems(List& list) {
  int count = 0;
  for (auto it = list.begin(); it != list.end(); ++it) {
    ++count;
  }
  return count;
}

}

size_t SplitterInfoManager::GetInParamterBufferSize(int infoCount,
  int destinationCount, int subMixCount) {
  size_t size = sizeof(SplitterInParameterHeader) +
    SplitterInfo::GetInParameterSize((subMixCount + 1) * ChannelCountMax)
      * infoCount +
    SplitterDestinationData::GetInParameterSize(1) * destinationCount;
  return (size + 15) & ~size_t{15};
}

size_t SplitterInfo::GetInParameterSize(int destinationCount) {
  return sizeof(renderer::ipc::Splitter::UpdateData<0>) +
    sizeof(int) * static_cast<int64_t>(destinationCount);
}

size_t SplitterInfoManager::GetSplitterInfoWorkBufferSize(int count) {
  return sizeof(SplitterInfo) * static_cast<int64_t>(count);
}

size_t SplitterInfoManager::GetSplitterDestinationWorkBufferSize(int count) {
  return sizeof(SplitterDestinationData) * static_cast<int64_t>(count);
}

SplitterInfoManager::SplitterInfoManager()
  : m_Infos(nullptr), m_InfoCount(0), m_Destinations(nullptr),
    m_DestinationCount(0), m_Mutex(), m_DestinationCountMax(0),
    m_IsInitialized(false) {}

void SplitterInfoManager::Initialize(int infoCount, int destinationCount,
  int subMixCount, void* infoBuffer, size_t infoBufferSize,
  void* destinationBuffer, size_t destinationBufferSize) {
  if (infoBuffer == nullptr || destinationBuffer == nullptr) {
    return;
  }
  m_DestinationCountMax = subMixCount + 1;
  m_Infos = static_cast<SplitterInfo*>(infoBuffer);
  m_InfoCount = infoCount;
  m_FreeInfos.clear();
  m_Destinations = static_cast<SplitterDestinationData*>(destinationBuffer);
  m_DestinationCount = destinationCount;
  m_FreeDestinations.clear();
  for (uint32_t i = 0; i < m_InfoCount; ++i) {
    m_Infos[i].Initialize(i);
    m_FreeInfos.push_back(m_Infos[i]);
  }
  for (uint32_t i = 0; i < m_DestinationCount; ++i) {
    m_Destinations[i].Initialize();
    m_FreeDestinations.push_back(m_Destinations[i]);
  }
  m_IsInitialized = true;
}

void SplitterInfo::Initialize(int id) {
  m_IsInUse = false;
  m_Id = id;
  m_Destinations.clear();
}

void SplitterDestinationData::Initialize() {
  ClearMixVolumes();
  ClearBqfParameters();
  m_IsInUse = false;
  m_NeedToUpdate = true;
  m_DestinationId = UnusedDestinationId;
  m_IsPrevVolumeResetRequired = true;
}

SplitterInfo* SplitterInfoManager::Allocate() {
  if (m_FreeInfos.empty()) {
    return nullptr;
  }
  SplitterInfo* info = &m_FreeInfos.front();
  m_FreeInfos.pop_front();
  return info;
}

SplitterInfo* SplitterInfoManager::AcquireSplitterInfo(int sampleRate,
  int channelCount, int destinationCount) {
  if (destinationCount > m_DestinationCountMax || m_IsInitialized == false) {
    return nullptr;
  }
  m_Mutex.Lock();
  SplitterInfo* info = nullptr;
  int count = destinationCount * channelCount;
  if (CountItems(m_FreeDestinations) >= count) {
    info = Allocate();
    if (info != nullptr) {
      for (int i = 0; i < count; ++i) {
        SplitterDestinationData& data = m_FreeDestinations.front();
        m_FreeDestinations.pop_front();
        data.Initialize();
        info->m_Destinations.push_back(data);
      }
      info->SetChannelCount(channelCount);
      info->SetSampleRate(sampleRate);
      info->SetInUsed(true);
    }
  }
  m_Mutex.Unlock();
  return info;
}

void SplitterInfo::SetInUsed(bool isInUse) {
  m_IsInUse = isInUse;
  m_NeedToUpdate = true;
}

void SplitterInfo::SetChannelCount(int count) {
  m_ChannelCount = count;
  m_NeedToUpdate = true;
}

void SplitterInfo::SetSampleRate(int sampleRate) {
  m_SampleRate = sampleRate;
  m_NeedToUpdate = true;
}

void SplitterInfoManager::ReleaseSplitterInfo(SplitterInfo* info) {
  if (m_IsInitialized == false) {
    return;
  }
  m_Mutex.Lock();
  info->SetInUsed(false);
  int count = CountItems(info->m_Destinations);
  for (int i = 0; i < count; ++i) {
    SplitterDestinationData& data = info->m_Destinations.front();
    info->m_Destinations.pop_front();
    data.Finalize();
    m_FreeDestinations.push_back(data);
  }
  m_FreeInfos.push_back(*info);
  m_Mutex.Unlock();
}

void SplitterDestinationData::Finalize() {
  ClearMixVolumes();
  ClearBqfParameters();
  m_IsInUse = false;
  m_NeedToUpdate = true;
  m_DestinationId = UnusedDestinationId;
  m_IsPrevVolumeResetRequired = true;
}

size_t SplitterInfoManager::UpdateInParameter(void* data) {
  if (m_IsInitialized == false) {
    return 0;
  }
  m_Mutex.Lock();
  auto* header = static_cast<SplitterInParameterHeader*>(data);
  uintptr_t base = reinterpret_cast<uintptr_t>(data);
  size_t offset = sizeof(*header);
  int infoCount = 0;
  for (uint32_t i = 0; i < m_InfoCount; ++i) {
    size_t size = m_Infos[i].StoreParameter(
      reinterpret_cast<renderer::ipc::Splitter::UpdateData<0>*>(
        base + offset));
    offset += size;
    if (size != 0) {
      ++infoCount;
    }
  }
  int destinationCount = 0;
  for (uint32_t i = 0; i < m_DestinationCount; ++i) {
    size_t size = m_Destinations[i].StoreParameter(
      reinterpret_cast<renderer::ipc::SplitterDestination::UpdateData<2>*>(
        base + offset));
    offset += size;
    if (size != 0) {
      ++destinationCount;
    }
  }
  header->magic = common::GetSplitterInParamHeaderMagic();
  header->infoCount = infoCount;
  header->destinationCount = destinationCount;
  size_t size = (offset + 15) & ~size_t{15};
  m_Mutex.Unlock();
  return size;
}

size_t SplitterInfo::StoreParameter(
  renderer::ipc::Splitter::UpdateData<0>* data) {
  if (!m_NeedToUpdate) {
    return 0;
  }
  data->magic = common::GetSplitterInfoMagic();
  data->id = m_Id;
  data->sampleRate = m_SampleRate;
  data->destinationCount = CountItems(m_Destinations);
  int* ids = data->destinationIds;
  for (auto it = m_Destinations.begin(); it != m_Destinations.end(); ++it) {
    *ids++ = it->GetId();
  }
  m_NeedToUpdate = false;
  return GetInParameterSize(data->destinationCount);
}

size_t SplitterDestinationData::StoreParameter(
  renderer::ipc::SplitterDestination::UpdateData<2>* data) {
  if (!m_NeedToUpdate) {
    return 0;
  }
  data->magic = common::GetSplitterSendDataMagic();
  data->id = m_Id;
  data->isInUse = m_IsInUse;
  data->isPrevVolumeResetRequired = m_IsPrevVolumeResetRequired;
  data->destinationId = m_DestinationId;
  memcpy(data->mixVolume, m_MixVolume, sizeof(m_MixVolume));
  memcpy(data->biquadFilter, m_BiquadFilter, sizeof(m_BiquadFilter));
  m_NeedToUpdate = false;
  m_IsPrevVolumeResetRequired = false;
  return sizeof(*data);
}

SplitterInfo::SplitterInfo(int id) : m_IsInUse(false), m_Id(id) {}

int SplitterInfo::GetId() const {
  return m_Id;
}

int SplitterInfo::GetSampleRate() const {
  return m_SampleRate;
}

bool SplitterInfo::NeedToUpdate() const {
  return m_NeedToUpdate;
}

bool SplitterInfo::GetInUsed() const {
  return m_IsInUse;
}

int SplitterInfo::GetChannelCount() const {
  return m_ChannelCount;
}

int SplitterInfo::GetDestinationCount() const {
  return CountItems(const_cast<DestinationList&>(m_Destinations)) /
    m_ChannelCount;
}

SplitterDestinationData* SplitterInfo::GetDestinationData(int destination,
  int channel) {
  int index = m_ChannelCount * destination + channel % m_ChannelCount;
  auto it = m_Destinations.begin();
  for (int i = 0; i < index; ++i) {
    ++it;
  }
  return &*it;
}

void SplitterInfo::MarkAsUpdated() {
  m_NeedToUpdate = true;
}

int SplitterDestinationData::GetId() const {
  return m_Id;
}

SplitterDestinationData::SplitterDestinationData(int id) : m_Id(id) {
  ClearMixVolumes();
  ClearBqfParameters();
  m_IsInUse = false;
  m_NeedToUpdate = true;
  m_DestinationId = UnusedDestinationId;
  m_IsPrevVolumeResetRequired = true;
}

void SplitterDestinationData::SetInUse(bool isInUse) {
  m_IsInUse = isInUse;
}

void SplitterDestinationData::SetDestinationId(int id) {
  m_IsInUse = id != UnusedDestinationId;
  int previous = m_DestinationId;
  m_DestinationId = id;
  if (previous != id) {
    m_IsPrevVolumeResetRequired = true;
  }
  m_NeedToUpdate = true;
}

void SplitterDestinationData::ClearMixVolumes() {
  memset(m_MixVolume, 0, sizeof(m_MixVolume));
}

void SplitterDestinationData::ClearBqfParameters() {
  memset(m_BiquadFilter, 0, sizeof(m_BiquadFilter));
}

size_t SplitterDestinationData::GetInParameterSize(int count) {
  return sizeof(renderer::ipc::SplitterDestination::UpdateData<2>) *
    static_cast<int64_t>(count);
}

bool SplitterDestinationData::IsInUse() const {
  return m_IsInUse;
}

int SplitterDestinationData::GetDestinationId() const {
  return m_DestinationId;
}

float SplitterDestinationData::GetMixVolume(int channel) const {
  return m_MixVolume[channel];
}

void SplitterDestinationData::SetMixVolume(float volume, int channel) {
  m_NeedToUpdate = true;
  m_MixVolume[channel] = volume;
}

TBiquadFilterParameter<float>
SplitterDestinationData::GetBiquadFilterParameter(int index) const {
  return m_BiquadFilter[index];
}

void SplitterDestinationData::SetBiquadFilterParameter(int index,
  TBiquadFilterParameter<float> parameter) {
  m_NeedToUpdate = true;
  m_BiquadFilter[index] = parameter;
}

bool SplitterDestinationData::NeedToUpdate() const {
  return m_NeedToUpdate;
}

}
