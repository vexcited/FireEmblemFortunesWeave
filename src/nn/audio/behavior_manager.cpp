#include "nn/audio/renderer_api.hpp"

namespace nn::audio {
namespace detail {

[[gnu::visibility("hidden")]] bool g_IsMemoryPoolMappingErrorReported;

}

namespace {

constexpr uint64_t MemoryPoolForceMappingFlag = 1;

bool IsMemoryPoolMappingSkipped(Result result) {
  return result.GetInnerValueForDebug() == 0x5299;
}

bool IsMemoryPoolMappingFailed(Result result) {
  return result.GetInnerValueForDebug() == 0x5499;
}

}

BehaviorManager::BehaviorManager(uint32_t revision)
  : m_Mutex(), m_Revision(revision), m_Errors{m_ErrorBuffer, 0} {}

size_t BehaviorManager::UpdateInParameter(
  renderer::ipc::Behavior::UpdateData<0>* data) const {
  m_Mutex.Lock();
  data->revision = m_Revision;
  data->flags = m_Flags;
  m_Mutex.Unlock();
  return sizeof(*data);
}

size_t BehaviorManager::UpdateOutStatus(
  const renderer::ipc::Behavior::StatusData<0>* status) {
  m_Mutex.Lock();
  m_Errors = {m_ErrorBuffer, static_cast<uintptr_t>(status->errorCount)};
  for (size_t i = 0; i < m_Errors.size; ++i) {
    m_Errors.data[i].info = status->errors[i].info;
    m_Errors.data[i].result = status->errors[i].result;
  }
  m_Mutex.Unlock();
  return sizeof(*status);
}

void BehaviorManager::SetMemoryPoolForceMappingEnabled(bool isEnabled) {
  m_Flags = (m_Flags & ~MemoryPoolForceMappingFlag) |
    (isEnabled ? MemoryPoolForceMappingFlag : 0);
}

bool BehaviorManager::GetMemoryPoolErrorAssertEnabled() const {
  return (m_Flags & MemoryPoolForceMappingFlag) != 0;
}

Result BehaviorManager::CheckErrors() {
  Result result = {0};
  for (size_t i = 0; i < m_Errors.size; ++i) {
    Result error = m_Errors.data[i].result;
    if (error.IsSuccess()) {
      break;
    }
    if (IsMemoryPoolMappingSkipped(error)) {
      continue;
    }
    if (!IsMemoryPoolMappingFailed(error)) {
      return error;
    }
    if (!detail::g_IsMemoryPoolMappingErrorReported) {
      detail::g_IsMemoryPoolMappingErrorReported = true;
    }
    if ((m_Flags & MemoryPoolForceMappingFlag) == 0) {
      result = {0x5499};
    }
  }
  return result;
}

uint32_t BehaviorManager::GetRevision() const {
  return m_Revision;
}

}
