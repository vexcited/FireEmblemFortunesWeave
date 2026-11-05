#include <string.h>

#include "nn/audio/renderer_api.hpp"

namespace nn::audio {
namespace {

void CopyInParameter(renderer::ipc::Sink::UpdateData<0>& data,
  const SinkInfo& info) {
  data.type = info.type;
  data.isUsed = info.isUsed;
  data.nodeId = info.nodeId;
  switch (info.type) {
    case common::SinkType_Invalid:
      break;
    case common::SinkType_Device:
      memcpy(&data.parameter.device, &info.device,
        sizeof(data.parameter.device));
      break;
    case common::SinkType_CircularBuffer:
      memcpy(&data.parameter.circularBuffer, &info.circularBuffer,
        sizeof(data.parameter.circularBuffer));
      break;
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
}

}

SinkInfo::SinkInfo() : type(common::SinkType_Invalid), isUsed(false) {}

void SinkInfo::CleanUp() {
  type = common::SinkType_Invalid;
  isUsed = false;
}

common::SinkType SinkInfo::GetType() const {
  return static_cast<common::SinkType>(type);
}

size_t SinkInfo::StoreInParameter(renderer::ipc::Sink::UpdateData<0>& data) {
  CopyInParameter(data, *this);
  return sizeof(data);
}

size_t SinkInfo::StoreOutStatus(
  const renderer::ipc::Sink::StatusData<0>& status) {
  if (type == common::SinkType_CircularBuffer) {
    memcpy(&writeOffset, &status, sizeof(writeOffset) + sizeof(reserved2));
  }
  return sizeof(status);
}

bool SinkInfo::IsUsed() const {
  return isUsed;
}

SinkManager::SinkManager(int count, SinkInfo* infos, int sampleCount,
  int sampleRate)
  : m_Count(count), m_SampleCount(sampleCount), m_SampleRate(sampleRate),
    m_Infos(infos), m_Mutex() {}

SinkInfo* SinkManager::Allocate(common::SinkType type) {
  m_Mutex.Lock();
  SinkInfo* info = nullptr;
  for (int i = 0; i < m_Count; ++i) {
    if (m_Infos[i].isUsed) {
      continue;
    }
    info = &m_Infos[i];
    info->type = type;
    info->isUsed = true;
    info->nodeId = common::NodeIdManager::GetNodeId(
      common::NodeIdManager::NodeIdType_Sink, i, 0);
    info->reserved1 = 0;
    break;
  }
  m_Mutex.Unlock();
  return info;
}

void SinkManager::Free(SinkInfo* info) {
  m_Mutex.Lock();
  info->type = common::SinkType_Invalid;
  info->isUsed = false;
  m_Mutex.Unlock();
}

int SinkManager::GetSampleCount() const {
  return m_SampleCount;
}

int SinkManager::GetSampleRate() const {
  return m_SampleRate;
}

bool SinkManager::IsValidSinkInfo(const SinkInfo* info) const {
  if (info < m_Infos || info > &m_Infos[m_Count]) {
    return false;
  }
  uintptr_t offset = reinterpret_cast<uintptr_t>(info) -
    reinterpret_cast<uintptr_t>(m_Infos);
  return offset % sizeof(SinkInfo) == 0;
}

size_t SinkManager::UpdateSinkInParameter(
  renderer::ipc::Sink::UpdateData<0>* data) {
  m_Mutex.Lock();
  size_t size = 0;
  for (int i = 0; i < m_Count; ++i) {
    CopyInParameter(data[i], m_Infos[i]);
    size += sizeof(data[i]);
  }
  m_Mutex.Unlock();
  return size;
}

size_t SinkManager::UpdateSinkOutStatus(
  const renderer::ipc::Sink::StatusData<0>* status) {
  m_Mutex.Lock();
  size_t size = 0;
  for (int i = 0; i < m_Count; ++i) {
    SinkInfo& info = m_Infos[i];
    if (info.type == common::SinkType_CircularBuffer) {
      memcpy(&info.writeOffset, &status[i],
        sizeof(info.writeOffset) + sizeof(info.reserved2));
    }
    size += sizeof(status[i]);
  }
  m_Mutex.Unlock();
  return size;
}

}
