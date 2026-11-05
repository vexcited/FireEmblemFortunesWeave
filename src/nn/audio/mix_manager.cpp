#include <string.h>

#include "nn/audio/renderer_api.hpp"
#include "nn/diag/diag_abort.hpp"

namespace nn::audio {
namespace {

constexpr uint32_t MixInParameterDirtyOnlyMagic = 0xcafebabe;

struct MixInParameterDirtyOnlyHeader {
  uint32_t magic;
  int mixCount;
  uint8_t reserved[24];
};

static_assert(sizeof(MixInParameterDirtyOnlyHeader) == 32);
}

MixManager::MixManager(MixInfo* infos, int count, int sampleRate,
  int bufferCount, int sampleCount)
  : m_Infos(infos), m_Count(count), m_BufferCountMax(bufferCount),
    m_SampleCount(sampleCount), m_BufferCount(0), m_Mutex() {
  for (int i = 0; i < m_Count; ++i) {
    m_Infos[i].isInUse = false;
    m_Infos[i].isDirty = false;
  }
  m_Infos[0].sampleRate = sampleRate;
}

bool MixManager::Acquire(FinalMixType* mix, int bufferCount) {
  m_Mutex.Lock();
  bool isAcquired = false;
  MixInfo* info = &m_Infos[0];
  if (!info->isInUse && m_BufferCount + bufferCount <= m_BufferCountMax) {
    m_BufferCount += bufferCount;
    info->bufferCount = bufferCount;
    info->mixId = 0;
    info->isInUse = true;
    info->nodeId = common::NodeIdManager::GetNodeId(
      common::NodeIdManager::NodeIdType_Mix, 0, 0);
    info->destinationMixId = 0x7fffffff;
    info->destinationSplitterId = -1;
    mix->_pMixInfo = info;
    isAcquired = true;
  }
  m_Mutex.Unlock();
  return isAcquired;
}

void MixManager::Release(FinalMixType* mix) {
  m_Mutex.Lock();
  MixInfo* info = m_Infos;
  NN_ABORT_UNLESS(mix->_pMixInfo == info);
  NN_ABORT_UNLESS(m_BufferCount >= 0);
  m_BufferCount -= info->bufferCount;
  info->isInUse = false;
  mix->_pMixInfo = nullptr;
  m_Mutex.Unlock();
}

int MixManager::GetFinalMixSampleRate() const {
  return m_Infos[0].sampleRate;
}

int MixManager::GetMixBufferSampleCount() const {
  return m_SampleCount;
}

bool MixManager::Acquire(SubMixType* mix, int bufferCount) {
  m_Mutex.Lock();
  bool isAcquired = false;
  if (m_BufferCount + bufferCount <= m_BufferCountMax) {
    for (int i = 1; i < m_Count; ++i) {
      MixInfo* info = &m_Infos[i];
      if (info->isInUse) {
        continue;
      }
      info->bufferCount = bufferCount;
      info->isInUse = true;
      m_BufferCount += bufferCount;
      info->mixId = i;
      info->nodeId = common::NodeIdManager::GetNodeId(
      common::NodeIdManager::NodeIdType_Mix, i, 0);
      info->destinationMixId = 0x7fffffff;
      info->destinationSplitterId = -1;
      mix->_pMixInfo = info;
      isAcquired = true;
      break;
    }
  }
  m_Mutex.Unlock();
  return isAcquired;
}

void MixManager::Release(SubMixType* mix) {
  m_Mutex.Lock();
  for (int i = 1; i < m_Count; ++i) {
    MixInfo* info = &m_Infos[i];
    if (info != mix->_pMixInfo) {
      continue;
    }
    m_BufferCount -= info->bufferCount;
    NN_ABORT_UNLESS(m_BufferCount >= 0);
    info->isInUse = false;
    mix->_pMixInfo = nullptr;
    break;
  }
  m_Mutex.Unlock();
}

bool MixManager::IsValidMix(const SubMixType* mix) const {
  const MixInfo* info = mix->_pMixInfo;
  if (info < &m_Infos[1] || info > &m_Infos[m_Count]) {
    return false;
  }
  ptrdiff_t offset = reinterpret_cast<intptr_t>(info) -
    reinterpret_cast<intptr_t>(m_Infos);
  return offset % static_cast<ptrdiff_t>(sizeof(MixInfo)) == 0;
}

bool MixManager::IsValidMix(const FinalMixType* mix) const {
  return mix->_pMixInfo == m_Infos;
}

size_t MixManager::UpdateMixInParameter(void* data) {
  m_Mutex.Lock();
  auto* header = static_cast<MixInParameterDirtyOnlyHeader*>(data);
  auto* infos = reinterpret_cast<MixInfo*>(header + 1);
  int count = 0;
  for (size_t i = 0; i < static_cast<size_t>(m_Count); ++i) {
    if (m_Infos[i].isDirty == false) {
      continue;
    }
    memcpy(&infos[count++], &m_Infos[i], sizeof(MixInfo));
    m_Infos[i].isDirty = false;
  }
  header->magic = MixInParameterDirtyOnlyMagic;
  header->mixCount = count;
  m_Mutex.Unlock();
  return sizeof(MixInfo) * count + sizeof(*header);
}

}
