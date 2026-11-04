#pragma once

#include "nn/hid/hid_types.hpp"

namespace nn::hid {

struct NmouseState;

namespace system {

struct NmouseStateWithDelta;

}

}

namespace nn::hid::detail {

class NmouseTransferMemoryAccessor {
 public:
  NmouseTransferMemoryAccessor();
  ~NmouseTransferMemoryAccessor();

  Result InitializeTransferMemory(void* address);
  Result FinalizeTransferMemory();
  bool IsInitialized() const;
  Result ListNmouseHandles(int* pOutCount, NmouseHandle* pOutHandles,
    int count) const;
  Result GetMergedHandle(NmouseHandle* pOutHandle) const;
  Result GetNpadNmouseHandle(NmouseHandle* pOutHandle, NpadIdType id,
    util::BitFlagSet<32, NmouseType> types) const;
  Result GetStandardMouseNmouseHandle(NmouseHandle* pOutHandle) const;
  Result GetNmouseTypeSet(util::BitFlagSet<32, NmouseType>* pOutTypes,
    const NmouseHandle& handle);
  Result GetNpadIdType(NpadIdType* pOutId, const NmouseHandle& handle) const;
  Result GetNmouseStates(int* pOutCount, NmouseState* pOutStates, int count,
    const NmouseHandle& handle) const;
  Result GetNmouseStatesWithDelta(int* pOutCount,
    system::NmouseStateWithDelta* pOutStates, int count,
    const NmouseHandle& handle) const;
  Result IsEnabledShowingCursor(bool* pOutIsEnabled) const;

 private:
  uint8_t* m_pMemory;
};

}
