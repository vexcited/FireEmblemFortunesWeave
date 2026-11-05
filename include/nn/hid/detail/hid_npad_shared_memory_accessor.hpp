#pragma once

#include <atomic>
#include <new>
#include <stdint.h>

#include "nn/hid/detail/hid_shared_memory_accessor.hpp"
#include "nn/hid/hid_types.hpp"

namespace nn::hid::detail {

struct NpadInternalState;
struct NpadConditionState;

class NpadSharedMemoryAccessor final : public SharedMemoryAccessor {
 public:
  static constexpr int InternalStateCountMax = 10;
  static constexpr int StyleCountMax = 32;

  NpadSharedMemoryAccessor();
  ~NpadSharedMemoryAccessor() override;

  Result Attach(server::SharedMemoryFormat* pFormat) override;
  Result Detach() override;

  const NpadInternalState* GetInternalState(NpadIdType id) const;
  const NpadConditionState* GetNpadCondition() const;

  void SetControlPadRestrictionType(NpadStyleSet style,
    ControlPadRestrictionType type);
  ControlPadRestrictionType GetControlPadRestrictionType(
    unsigned int styleIndex);
  void EnableControlPadRestriction(const NpadStyleSet& style, bool isEnabled);
  bool IsControlPadRestrictionEnabled(unsigned int styleIndex);
  ControlPadRestrictionType GetControlPadRestrictionType(NpadStyleSet style);

 private:
  std::atomic<const NpadInternalState*>
    m_pInternalStates[InternalStateCountMax];
  std::atomic<const NpadConditionState*> m_pCondition;
  ControlPadRestrictionType m_RestrictionTypes[StyleCountMax];
  bool m_IsRestrictionEnabled[StyleCountMax];
};

template <typename T>
class NpadSessionManager {
 public:
  NpadSessionManager() : m_IsInitialized(false) {
    m_IsInitialized.store(false);
    m_Mutex.Initialize();
  }

  T* Get() {
    if (!m_IsInitialized.load()) {
      m_Mutex.Lock();
      if (!m_IsInitialized.load()) {
        new (m_Storage) T();
        m_IsInitialized.store(true);
      }
      m_Mutex.Unlock();
    }
    return reinterpret_cast<T*>(m_Storage);
  }

 private:
  std::atomic<bool> m_IsInitialized;
  os::SdkMutexType m_Mutex;
  alignas(T) uint8_t m_Storage[sizeof(T)];
};

NpadSharedMemoryAccessor* GetNpadSharedMemoryAccessor();

}
