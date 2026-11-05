#pragma once

#include <stddef.h>
#include <stdint.h>

#include <optional>

#include "nn/audio/renderer_api.hpp"
#include "nn/audio/server/behavior_info.hpp"
#include "nn/result.hpp"
#include "nn/span.hpp"

namespace nn::os {

uint32_t GetCurrentProcessHandle();

}

namespace nn::audio {

using DspAddr = uint64_t;

namespace dsp {

DspAddr MapUserPointer(uint32_t processHandle, std::optional<int> sessionId,
  CpuAddr address, size_t size);
void UnmapUserPointer(uint32_t processHandle, std::optional<int> sessionId,
  CpuAddr address, size_t size);
void InvalidateDspCache(uint32_t processHandle, std::optional<int> sessionId,
  DspAddr address, size_t size);

}

namespace server {

class MemoryPoolInfo {
public:
  enum State {
    State_Invalid,
    State_Allocated,
    State_RequestDetach,
    State_Detached,
    State_RequestAttach,
    State_Attached,
    State_Released,
  };

  MemoryPoolInfo();

  void SetUp(uint32_t processHandle, const BehaviorInfo& behavior,
    std::optional<int> sessionId);
  CpuAddr GetCpuAddress() const;
  DspAddr GetDspAddress() const;
  size_t GetSize() const;
  uint32_t GetProcessHandle() const;
  std::optional<int> GetUserSessionId() const;
  void SetCpuAddress(CpuAddr address, size_t size);
  void SetDspAddress(DspAddr address);
  bool Contains(CpuAddr address, size_t size) const;
  bool IsMapped() const;
  bool IsServicePool() const;
  bool IsUserPool() const;
  DspAddr Translate(CpuAddr address, size_t size) const;
  void SetUsed(bool used);
  bool IsUsed() const;
  void InvalidateDspCache(CpuAddr address, size_t size) const;

private:
  CpuAddr m_CpuAddress;
  mutable DspAddr m_DspAddress;
  uint32_t m_ProcessHandle;
  size_t m_Size;
  bool m_IsMappedOnDemand;
  bool m_IsMappedLazily;
  bool m_IsUsed;
  int16_t m_UserSessionId;
  uint8_t reserved[10];
};

static_assert(sizeof(MemoryPoolInfo) == 48);

class AddressInfo {
public:
  AddressInfo(CpuAddr address, size_t size);
  ~AddressInfo();

  void Setup(CpuAddr address, size_t size);
  CpuAddr GetCpuAddr() const;
  size_t GetSize() const;
  void SetPool(MemoryPoolInfo* pool);
  bool HasMappedMemoryPool() const;
  bool IsMapped() const;
  DspAddr GetReference(bool markUsed) const;
  void InvalidateDspCache() const;

private:
  CpuAddr m_CpuAddress;
  size_t m_Size;
  MemoryPoolInfo* m_Pool;
};

class PoolMapper {
public:
  using ErrorInfo = common::BehaviorParameter::ErrorInfo;

  enum UpdateResult {
    UpdateResult_Success,
    UpdateResult_InvalidParameter,
    UpdateResult_MapError,
    UpdateResult_UnmapError,
  };

  explicit PoolMapper(const BehaviorInfo* behavior);
  PoolMapper(MemoryPoolInfo* pools, int count, const BehaviorInfo* behavior);

  static bool IsActionRequired(audio::MemoryPoolInfo::State state);
  static void ClearUseState(MemoryPoolInfo* pools, int count);
  static MemoryPoolInfo* FindMemoryPool(Span<MemoryPoolInfo> pools,
    CpuAddr address, size_t size);
  MemoryPoolInfo* FindMemoryPool(CpuAddr address, size_t size) const;
  bool FillDspAddr(AddressInfo* info, Span<MemoryPoolInfo> pools) const;
  bool FillDspAddr(AddressInfo* info) const;
  bool TryAttachBuffer(ErrorInfo* error, AddressInfo* info, CpuAddr address,
    size_t size);
  DspAddr Map(uint32_t processHandle, std::optional<int> sessionId,
    CpuAddr address, size_t size) const;
  bool Map(MemoryPoolInfo* pool) const;
  bool Unmap(uint32_t processHandle, std::optional<int> sessionId,
    CpuAddr address, size_t size) const;
  bool Unmap(MemoryPoolInfo* pool) const;
  bool InitializeSystemPool(MemoryPoolInfo* pool, void* address,
    size_t size) const;
  Result Update(MemoryPoolInfo* pool,
    const audio::MemoryPoolInfo::InParameter* in,
    audio::MemoryPoolInfo::OutStatus* out) const;
  UpdateResult UpdateImpl(MemoryPoolInfo* pool,
    const audio::MemoryPoolInfo::InParameter* in,
    audio::MemoryPoolInfo::OutStatus* out) const;

private:
  Span<MemoryPoolInfo> m_Pools;
  const BehaviorInfo* m_Behavior;
};

}
}
