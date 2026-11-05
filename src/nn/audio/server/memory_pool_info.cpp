#include <algorithm>

#include "nn/audio/server/memory_pool_info.hpp"

namespace nn::audio::server {

MemoryPoolInfo::MemoryPoolInfo()
  : m_CpuAddress(), m_DspAddress(0), m_ProcessHandle(0), m_Size(0),
    m_IsUsed(false), m_UserSessionId(-1) {
}

void MemoryPoolInfo::SetUp(uint32_t processHandle,
  const BehaviorInfo& behavior, std::optional<int> sessionId) {
  m_ProcessHandle = processHandle;
  m_UserSessionId = sessionId ? *sessionId : -1;
  bool isUserPool = processHandle != os::GetCurrentProcessHandle();
  m_IsMappedOnDemand =
    behavior.IsWorkAroundForHugeMemoryPoolEnabled() && isUserPool;
  m_IsMappedLazily =
    behavior.IsWorkAroundForManyMemoryPoolsEnabled() && isUserPool;
}

CpuAddr MemoryPoolInfo::GetCpuAddress() const {
  return m_CpuAddress;
}

DspAddr MemoryPoolInfo::GetDspAddress() const {
  return m_DspAddress;
}

size_t MemoryPoolInfo::GetSize() const {
  return m_Size;
}

uint32_t MemoryPoolInfo::GetProcessHandle() const {
  return m_ProcessHandle;
}

std::optional<int> MemoryPoolInfo::GetUserSessionId() const {
  if (m_UserSessionId < 0) {
    return std::nullopt;
  }
  return m_UserSessionId;
}

void MemoryPoolInfo::SetCpuAddress(CpuAddr address, size_t size) {
  m_CpuAddress = address;
  m_Size = size;
}

void MemoryPoolInfo::SetDspAddress(DspAddr address) {
  m_DspAddress = address;
}

bool MemoryPoolInfo::Contains(CpuAddr address, size_t size) const {
  return m_CpuAddress <= address && address + size <= m_CpuAddress + m_Size;
}

bool MemoryPoolInfo::IsMapped() const {
  return m_IsMappedOnDemand || m_IsMappedLazily || m_DspAddress != 0;
}

bool MemoryPoolInfo::IsServicePool() const {
  return m_ProcessHandle == os::GetCurrentProcessHandle();
}

bool MemoryPoolInfo::IsUserPool() const {
  return m_ProcessHandle != os::GetCurrentProcessHandle();
}

DspAddr MemoryPoolInfo::Translate(CpuAddr address, size_t size) const {
  // Huge pools are mapped page by page on every translation.
  if (m_IsMappedOnDemand == true && m_DspAddress == 0) {
    CpuAddr base = static_cast<CpuAddr>(address & ~uintptr_t{0xfff});
    size_t alignedSize = (size + 0xfff) & ~size_t{0xfff};
    return dsp::MapUserPointer(m_ProcessHandle, GetUserSessionId(), base,
      alignedSize) + (address & 0xfff);
  }
  if (m_IsMappedLazily == true && m_DspAddress == 0) {
    m_DspAddress = dsp::MapUserPointer(m_ProcessHandle, GetUserSessionId(),
      m_CpuAddress, m_Size);
  }
  if (!Contains(address, size)) {
    return 0;
  }
  if (!IsMapped()) {
    return 0;
  }
  return m_DspAddress + (address - m_CpuAddress);
}

void MemoryPoolInfo::SetUsed(bool used) {
  m_IsUsed = used;
}

bool MemoryPoolInfo::IsUsed() const {
  return m_IsUsed;
}

void MemoryPoolInfo::InvalidateDspCache(CpuAddr address, size_t size) const {
  if (size == 0 || !IsMapped()) {
    return;
  }
  DspAddr dspAddress = Translate(address, size);
  if (dspAddress != 0) {
    dsp::InvalidateDspCache(m_ProcessHandle, GetUserSessionId(), dspAddress,
      size);
  }
}

AddressInfo::AddressInfo(CpuAddr address, size_t size)
  : m_CpuAddress(address), m_Size(size), m_Pool(nullptr) {
}

AddressInfo::~AddressInfo() {
  m_CpuAddress = CpuAddr();
  m_Size = 0;
  m_Pool = nullptr;
}

void AddressInfo::Setup(CpuAddr address, size_t size) {
  m_CpuAddress = address;
  m_Size = size;
  m_Pool = nullptr;
}

CpuAddr AddressInfo::GetCpuAddr() const {
  return m_CpuAddress;
}

size_t AddressInfo::GetSize() const {
  return m_Size;
}

void AddressInfo::SetPool(MemoryPoolInfo* pool) {
  m_Pool = pool;
}

bool AddressInfo::HasMappedMemoryPool() const {
  return m_Pool != nullptr && m_Pool->IsMapped();
}

bool AddressInfo::IsMapped() const {
  return m_Pool != nullptr && m_Pool->IsMapped();
}

DspAddr AddressInfo::GetReference(bool markUsed) const {
  if (m_Pool == nullptr || !m_Pool->IsMapped()) {
    return 0;
  }
  if (markUsed) {
    m_Pool->SetUsed(true);
  }
  return m_Pool->Translate(m_CpuAddress, m_Size);
}

void AddressInfo::InvalidateDspCache() const {
  if (m_Pool != nullptr) {
    m_Pool->InvalidateDspCache(m_CpuAddress, m_Size);
  }
}

PoolMapper::PoolMapper(const BehaviorInfo* behavior)
  : m_Pools{nullptr, 0}, m_Behavior(behavior) {
}

PoolMapper::PoolMapper(MemoryPoolInfo* pools, int count,
  const BehaviorInfo* behavior)
  : m_Pools{pools, static_cast<uintptr_t>(count)}, m_Behavior(behavior) {
}

bool PoolMapper::IsActionRequired(audio::MemoryPoolInfo::State state) {
  return state == audio::MemoryPoolInfo::State_RequestAttach ||
    state == audio::MemoryPoolInfo::State_RequestDetach;
}

void PoolMapper::ClearUseState(MemoryPoolInfo* pools, int count) {
  for (int i = 0; i < count; i++) {
    pools[i].SetUsed(false);
  }
}

MemoryPoolInfo* PoolMapper::FindMemoryPool(Span<MemoryPoolInfo> pools,
  CpuAddr address, size_t size) {
  MemoryPoolInfo* end = pools.data + pools.size;
  MemoryPoolInfo* pool = std::find_if(pools.data, end,
    [&](const MemoryPoolInfo& info) { return info.Contains(address, size); });
  return pool != end ? pool : nullptr;
}

MemoryPoolInfo* PoolMapper::FindMemoryPool(CpuAddr address,
  size_t size) const {
  return FindMemoryPool(m_Pools, address, size);
}

bool PoolMapper::FillDspAddr(AddressInfo* info,
  Span<MemoryPoolInfo> pools) const {
  if (info->GetCpuAddr() == 0) {
    info->SetPool(nullptr);
    return false;
  }
  MemoryPoolInfo* pool =
    FindMemoryPool(pools, info->GetCpuAddr(), info->GetSize());
  info->SetPool(pool);
  return pool != nullptr;
}

bool PoolMapper::FillDspAddr(AddressInfo* info) const {
  return FillDspAddr(info, m_Pools);
}

bool PoolMapper::TryAttachBuffer(ErrorInfo* error, AddressInfo* info,
  CpuAddr address, size_t size) {
  info->Setup(address, size);
  if (!FillDspAddr(info)) {
    error->result = {0x5499};
    error->info = address;
    return false;
  }
  error->result = {0};
  error->info = 0;
  return true;
}

DspAddr PoolMapper::Map(uint32_t processHandle,
  std::optional<int> sessionId, CpuAddr address, size_t size) const {
  if (processHandle != os::GetCurrentProcessHandle() &&
    (m_Behavior->IsWorkAroundForHugeMemoryPoolEnabled() ||
      m_Behavior->IsWorkAroundForManyMemoryPoolsEnabled())) {
    return 0;
  }
  return dsp::MapUserPointer(processHandle, sessionId, address, size);
}

bool PoolMapper::Map(MemoryPoolInfo* pool) const {
  DspAddr address = Map(pool->GetProcessHandle(), pool->GetUserSessionId(),
    pool->GetCpuAddress(), pool->GetSize());
  if (address == 0) {
    return false;
  }
  pool->SetDspAddress(address);
  return true;
}

bool PoolMapper::Unmap(uint32_t processHandle, std::optional<int> sessionId,
  CpuAddr address, size_t size) const {
  dsp::UnmapUserPointer(processHandle, sessionId, address, size);
  return true;
}

bool PoolMapper::Unmap(MemoryPoolInfo* pool) const {
  if (m_Behavior->IsWorkAroundForHugeMemoryPoolEnabled()) {
    return true;
  }
  if (m_Behavior->IsWorkAroundForManyMemoryPoolsEnabled() &&
    pool->GetDspAddress() == 0) {
    return true;
  }
  if (pool->IsUsed()) {
    return false;
  }
  Unmap(pool->GetProcessHandle(), pool->GetUserSessionId(),
    pool->GetCpuAddress(), pool->GetSize());
  pool->SetCpuAddress(CpuAddr(), 0);
  pool->SetDspAddress(0);
  return true;
}

Result PoolMapper::Update(MemoryPoolInfo* pool,
  const audio::MemoryPoolInfo::InParameter* in,
  audio::MemoryPoolInfo::OutStatus* out) const {
  if (UpdateImpl(pool, in, out) == UpdateResult_InvalidParameter) {
    return {0x5299};
  }
  return {0};
}

PoolMapper::UpdateResult PoolMapper::UpdateImpl(MemoryPoolInfo* pool,
  const audio::MemoryPoolInfo::InParameter* in,
  audio::MemoryPoolInfo::OutStatus* out) const {
  const uint32_t state = in->state;
  if (state != audio::MemoryPoolInfo::State_RequestAttach &&
    state != audio::MemoryPoolInfo::State_RequestDetach) {
    return UpdateResult_Success;
  }
  const CpuAddr address = static_cast<CpuAddr>(in->address);
  const size_t size = in->size;
  if (address == 0) {
    return UpdateResult_InvalidParameter;
  }
  if (size == 0 || ((address | size) & 0xfff) != 0) {
    return UpdateResult_InvalidParameter;
  }
  if (state == audio::MemoryPoolInfo::State_RequestDetach) {
    if (pool->GetCpuAddress() != address || pool->GetSize() != size) {
      return UpdateResult_InvalidParameter;
    }
    if (!Unmap(pool)) {
      return UpdateResult_UnmapError;
    }
    out->state = audio::MemoryPoolInfo::State_Detached;
    return UpdateResult_Success;
  }
  if (state != audio::MemoryPoolInfo::State_RequestAttach) {
    return UpdateResult_Success;
  }
  pool->SetCpuAddress(address, size);
  if (Map(pool) || m_Behavior->IsWorkAroundForHugeMemoryPoolEnabled() ||
    m_Behavior->IsWorkAroundForManyMemoryPoolsEnabled()) {
    out->state = audio::MemoryPoolInfo::State_Attached;
    return UpdateResult_Success;
  }
  pool->SetCpuAddress(CpuAddr(), 0);
  return UpdateResult_MapError;
}

bool PoolMapper::InitializeSystemPool(MemoryPoolInfo* pool, void* address,
  size_t size) const {
  if (pool->GetProcessHandle() != os::GetCurrentProcessHandle()) {
    return false;
  }
  pool->SetCpuAddress(
    static_cast<CpuAddr>(reinterpret_cast<uintptr_t>(address)), size);
  return Map(pool);
}

}
