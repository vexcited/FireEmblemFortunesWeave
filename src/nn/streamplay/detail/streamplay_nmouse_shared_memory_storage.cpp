#include "nn/streamplay/detail/streamplay_hid_shared_memory.hpp"

namespace nn::streamplay::detail {

void NmouseSharedMemoryStorage::CleanUp() {
  m_Info.Clear();
  m_States.Clear();
}

bool NmouseSharedMemoryStorage::CompareHandleAndReadStates(int* pOutCount,
  Span<GuestNmouseState> states, GuestNmouseHandle handle) const {
  GuestNmouseInfoState info = {};
  if (m_Info.Read(&info, 1) == 0 || !info.isValid ||
    info.handle._storage != handle._storage) {
    return false;
  }
  std::atomic_thread_fence(std::memory_order_acquire);
  *pOutCount = m_States.Read(states.data, static_cast<int>(states.size));
  std::atomic_thread_fence(std::memory_order_acquire);
  return m_Info.Read(&info, 1) != 0 && info.isValid &&
    info.handle._storage == handle._storage;
}

bool NmouseSharedMemoryStorage::CompareHandleAndReadInfo(
  GuestNmouseInfoState* pOutInfo, GuestNmouseHandle handle) const {
  GuestNmouseInfoState info = {};
  const bool isRead = m_Info.Read(&info, 1) != 0 && info.isValid &&
    info.handle._storage == handle._storage;
  if (isRead) {
    *pOutInfo = info;
  }
  return isRead;
}

bool NmouseSharedMemoryStorage::ReadHandle(
  GuestNmouseHandle* pOutHandle) const {
  GuestNmouseInfoState info = {};
  const bool isRead = m_Info.Read(&info, 1) != 0 && info.isValid;
  if (isRead) {
    *pOutHandle = info.handle;
  }
  return isRead;
}

void NmouseSharedMemoryStorage::AppendStateAndInfo(
  const GuestNmouseStateOnSharedMemory& state,
  const GuestNmouseInfoState& info) {
  m_States.Append(state);
  FenceMemoryStoreStore();
  m_Info.Append(info);
}

void NmouseSharedMemoryStorage::AppendInfoAndClearState(
  const GuestNmouseInfoState& info) {
  m_Info.Append(info);
  FenceMemoryStoreStore();
  m_States.Clear();
}

void NmouseSharedMemoryStorage::AppendInfo(const GuestNmouseInfoState& info) {
  m_Info.Append(info);
}

void NmouseSharedMemoryStorage::AppendState(
  const GuestNmouseStateOnSharedMemory& state) {
  m_States.Append(state);
}

}
