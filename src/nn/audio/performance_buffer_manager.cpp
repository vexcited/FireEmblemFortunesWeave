#include <string.h>

#include "nn/audio/renderer_api.hpp"

namespace nn::audio {

PerformanceBufferManager::PerformanceBufferManager()
  : m_Buffer(nullptr), m_Size(0), m_Mutex() {}

void* PerformanceBufferManager::GetCurrentPerformanceFrameBuffer() {
  return m_Buffer;
}

void PerformanceBufferManager::SetPerformanceFrameBuffer(void* buffer,
  size_t size) {
  m_Mutex.Lock();
  if (buffer != nullptr) {
    memset(buffer, 0, size);
  }
  m_Buffer = buffer;
  m_Size = size;
  m_Offset = 0;
  m_Mutex.Unlock();
}

void PerformanceBufferManager::SetDetailTarget(uint32_t nodeId) {
  m_Mutex.Lock();
  m_DetailTarget = nodeId;
  m_Mutex.Unlock();
}

void* PerformanceBufferManager::GetBufferBase() {
  m_Mutex.Lock();
  void* base = m_Buffer != nullptr
    ? static_cast<uint8_t*>(m_Buffer) + m_Offset
    : nullptr;
  m_Mutex.Unlock();
  return base;
}

size_t PerformanceBufferManager::GetBufferSize() {
  m_Mutex.Lock();
  size_t size = m_Buffer != nullptr ? m_Size - m_Offset : 0;
  m_Mutex.Unlock();
  return size;
}

size_t PerformanceBufferManager::UpdateInParameter(
  renderer::ipc::PerformanceMetrics::UpdateData<0>* data) {
  m_Mutex.Lock();
  data->detailTarget = m_DetailTarget;
  m_Mutex.Unlock();
  return sizeof(*data);
}

size_t PerformanceBufferManager::UpdateOutStatus(
  const renderer::ipc::PerformanceMetrics::StatusData<0>* status) {
  m_Mutex.Lock();
  size_t offset = m_Offset + status->historySize;
  m_Offset = offset > m_Size ? m_Size : offset;
  m_Mutex.Unlock();
  return sizeof(*status);
}

}
