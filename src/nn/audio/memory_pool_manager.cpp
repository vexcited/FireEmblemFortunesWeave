#include <new>

#include "nn/audio/renderer_api.hpp"

namespace nn::audio {
namespace {

bool IsValidTransition(MemoryPoolInfo::State from, MemoryPoolInfo::State to) {
  switch (from) {
    case MemoryPoolInfo::State_Allocated:
    case MemoryPoolInfo::State_Detached:
      return to == MemoryPoolInfo::State_RequestAttach ||
        to == MemoryPoolInfo::State_Released;
    case MemoryPoolInfo::State_RequestDetach:
      return to == MemoryPoolInfo::State_Detached ||
        to == MemoryPoolInfo::State_RequestAttach;
    case MemoryPoolInfo::State_RequestAttach:
      return to == MemoryPoolInfo::State_RequestDetach ||
        to == MemoryPoolInfo::State_Attached;
    case MemoryPoolInfo::State_Attached:
      return to == MemoryPoolInfo::State_RequestDetach;
    case MemoryPoolInfo::State_Released:
      return to == MemoryPoolInfo::State_Allocated;
    default:
      return false;
  }
}

// A request that cancels the pending one goes straight to the settled state.
MemoryPoolInfo::State ResolveTransition(MemoryPoolInfo::State from,
  MemoryPoolInfo::State to) {
  MemoryPoolInfo::State state = to;
  if (from == MemoryPoolInfo::State_RequestDetach &&
    to == MemoryPoolInfo::State_RequestAttach) {
    state = MemoryPoolInfo::State_Attached;
  }
  if (from == MemoryPoolInfo::State_RequestAttach &&
    to == MemoryPoolInfo::State_RequestDetach) {
    state = MemoryPoolInfo::State_Detached;
  }
  return state;
}

}

MemoryPoolInfo::MemoryPoolInfo() {
  m_Address = nullptr;
  m_Size = 0;
  m_IsUsed = false;
  m_State = State_Released;
}

MemoryPoolInfo::~MemoryPoolInfo() {
  m_Address = nullptr;
  m_Size = 0;
  m_IsUsed = false;
  m_State = State_Released;
}

void MemoryPoolInfo::Finalize() {
  m_Address = nullptr;
  m_Size = 0;
  m_IsUsed = false;
  m_State = State_Released;
}

void MemoryPoolInfo::Initialize(void* address, size_t size) {
  m_Address = address;
  m_Size = size;
  m_State = State_Allocated;
  m_IsUsed = true;
}

bool MemoryPoolInfo::IsUsed() const {
  return m_IsUsed;
}

bool MemoryPoolInfo::Contains(const void* address, size_t size) const {
  uintptr_t begin = reinterpret_cast<uintptr_t>(m_Address);
  uintptr_t target = reinterpret_cast<uintptr_t>(address);
  return begin <= target && target + size <= begin + m_Size;
}

bool MemoryPoolInfo::IsOverlapped(const void* address, size_t size) const {
  uintptr_t begin = reinterpret_cast<uintptr_t>(m_Address);
  uintptr_t target = reinterpret_cast<uintptr_t>(address);
  return begin < target + size && target < begin + m_Size;
}

bool MemoryPoolInfo::Attach() {
  switch (m_State) {
    case State_Allocated:
    case State_RequestDetach:
    case State_Detached:
      m_State = m_State == State_RequestDetach ? State_Attached
                                               : State_RequestAttach;
      return true;
    default:
      return false;
  }
}

bool MemoryPoolInfo::SetState(State state) {
  if (!IsValidTransition(m_State, state)) {
    return false;
  }
  m_State = ResolveTransition(m_State, state);
  return true;
}

bool MemoryPoolInfo::Detach() {
  switch (m_State) {
    case State_RequestAttach:
    case State_Attached:
      m_State = m_State == State_RequestAttach ? State_Detached
                                               : State_RequestDetach;
      return true;
    default:
      return false;
  }
}

bool MemoryPoolInfo::IsAttached() const {
  switch (m_State) {
    case State_RequestDetach:
    case State_RequestAttach:
    case State_Attached:
      return true;
    default:
      return false;
  }
}

bool MemoryPoolInfo::IsInTransition() const {
  return m_State == State_RequestAttach || m_State == State_RequestDetach;
}

void* MemoryPoolInfo::GetAddress() const {
  return m_Address;
}

size_t MemoryPoolInfo::GetSize() const {
  return m_Size;
}

MemoryPoolInfo::State MemoryPoolInfo::GetState() const {
  return m_State;
}

size_t MemoryPoolInfo::Prepare(renderer::ipc::MemoryPool::UpdateData<0>* data) {
  data->address = static_cast<CpuAddr>(reinterpret_cast<uintptr_t>(m_Address));
  data->size = m_Size;
  data->state = m_State;
  return sizeof(*data);
}

size_t MemoryPoolInfo::Store(
  const renderer::ipc::MemoryPool::StatusData<0>* status) {
  State state = static_cast<State>(status->state);
  if (IsValidTransition(m_State, state)) {
    m_State = ResolveTransition(m_State, state);
  }
  return sizeof(*status);
}

size_t MemoryPoolManager::GetWorkBufferSize(
  const AudioRendererParameter& parameter) {
  int count = parameter.effectCount + parameter.voiceCount * 4;
  size_t infoSize = (sizeof(MemoryPoolInfo) * count + 15) & ~size_t{15};
  uint32_t flagSize = static_cast<uint32_t>(
    common::BitArray<uint32_t>::GetWorkBufferSize(count) + 15) & ~15u;
  return infoSize + flagSize + sizeof(MemoryPoolManager);
}

MemoryPoolManager* MemoryPoolManager::CreateManager(
  common::WorkBufferAllocator& allocator,
  const AudioRendererParameter& parameter) {
  int count = parameter.effectCount + parameter.voiceCount * 4;
  MemoryPoolInfo* infos = static_cast<MemoryPoolInfo*>(
    allocator.Allocate(sizeof(MemoryPoolInfo) * count, 16));
  for (int i = 0; i < count; ++i) {
    new (&infos[i]) MemoryPoolInfo();
  }
  if (infos == nullptr) {
    return nullptr;
  }
  void* manager = allocator.Allocate(sizeof(MemoryPoolManager), 16);
  size_t flagSize = common::BitArray<uint32_t>::GetWorkBufferSize(count);
  void* flags = allocator.Allocate(flagSize, 16);
  if (manager == nullptr || flags == nullptr) {
    return nullptr;
  }
  return new (manager) MemoryPoolManager(infos, count, flags, flagSize);
}

MemoryPoolManager::MemoryPoolManager(MemoryPoolInfo* infos, int count,
  void* buffer, size_t size)
  : m_Mutex(), m_Count(count), m_FreeCount(count), m_Infos(infos),
    m_UsedFlags(buffer, size) {}

int MemoryPoolManager::GetFreeCount() const {
  return m_FreeCount;
}

MemoryPoolInfo* MemoryPoolManager::Acquire(void* address, size_t size) {
  if (address == nullptr || size == 0) {
    return nullptr;
  }
  MemoryPoolInfo* info = nullptr;
  m_Mutex.Lock();
  for (int i = 0; i < m_Count; ++i) {
    if (!m_UsedFlags.Test(i)) {
      m_UsedFlags.Set(i);
      info = &m_Infos[i];
      info->Initialize(address, size);
      --m_FreeCount;
      break;
    }
  }
  m_Mutex.Unlock();
  return info;
}

void MemoryPoolManager::Release(MemoryPoolInfo* info) {
  m_Mutex.Lock();
  info->Finalize();
  ++m_FreeCount;
  m_Mutex.Unlock();
}

size_t MemoryPoolManager::UpdateInParameter(
  renderer::ipc::MemoryPool::UpdateData<0>* data) {
  m_Mutex.Lock();
  size_t offset = 0;
  for (int i = 0; i < m_Count; ++i) {
    if (m_UsedFlags.Test(i)) {
      offset += m_Infos[i].Prepare(
        reinterpret_cast<renderer::ipc::MemoryPool::UpdateData<0>*>(
          reinterpret_cast<uintptr_t>(data) + offset));
    }
    else {
      offset += sizeof(*data);
    }
  }
  m_Mutex.Unlock();
  return offset;
}

size_t MemoryPoolManager::UpdateOutStatus(
  const renderer::ipc::MemoryPool::StatusData<0>* status) {
  m_Mutex.Lock();
  size_t offset = 0;
  for (int i = 0; i < m_Count; ++i) {
    if (m_UsedFlags.Test(i)) {
      offset += m_Infos[i].Store(
        reinterpret_cast<const renderer::ipc::MemoryPool::StatusData<0>*>(
          reinterpret_cast<uintptr_t>(status) + offset));
      if (m_Infos[i].GetState() == MemoryPoolInfo::State_Released) {
        m_UsedFlags.Reset(i);
      }
    }
    else {
      offset += sizeof(*status);
    }
  }
  m_Mutex.Unlock();
  return offset;
}

bool MemoryPoolManager::IsOverlapped(void* address, size_t size) const {
  for (int i = 0; i < m_Count; ++i) {
    if (m_Infos[i].IsUsed() && m_Infos[i].IsOverlapped(address, size)) {
      return true;
    }
  }
  return false;
}

// The release build keeps only the per pool queries of the dump loop.
void MemoryPoolManager::Dump() {
  for (int i = 0; i < m_Count; ++i) {
    m_Infos[i].IsUsed();
  }
}

}
