#pragma once

#include <optional>

#include "nn/hid/hid_types.hpp"

namespace nn::hid {

struct NmouseState {
  int64_t timestamp;
  int64_t samplingNumber;
  int32_t x;
  int32_t y;
  int32_t deltaX;
  int32_t deltaY;
  int32_t wheelDeltaX;
  int32_t wheelDeltaY;
  uint32_t buttons;
  uint32_t attributes;
};

namespace system {

struct NmouseStateWithDelta {
  int64_t timestamp;
  int64_t samplingNumber;
  int32_t x;
  int32_t y;
  int32_t rawDeltaX;
  int32_t rawDeltaY;
  int32_t deltaX;
  int32_t deltaY;
  int32_t wheelDeltaX;
  int32_t wheelDeltaY;
  uint32_t buttons;
  uint32_t attributes;
};

}

namespace server {

struct NmouseInfo {
  std::optional<util::BitFlagSet<32, NmouseType>> types;
  std::optional<NpadIdType> npadId;
  bool isPointerEnabled;
  int32_t reserved;
  bool isConnected;
};

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
    const NmouseHandle& handle) const;
  Result GetNmouseInfo(server::NmouseInfo* pOutInfo,
    const NmouseHandle& handle) const;
  Result GetNpadIdType(NpadIdType* pOutId, const NmouseHandle& handle) const;
  Result GetNmouseStates(int* pOutCount, NmouseState* pOutStates, int count,
    const NmouseHandle& handle) const;
  Result GetNmouseStatesWithDelta(int* pOutCount,
    system::NmouseStateWithDelta* pOutStates, int count,
    const NmouseHandle& handle) const;
  Result IsEnabledShowingCursor(bool* pOutIsEnabled) const;
  Result IsEnableNmousePointer(bool* pOutIsEnabled,
    NmouseHandle handle) const;
  Result VerifyValidHandle(NmouseHandle handle) const;
  Result GetIndexFromHandle(uint8_t* pOutIndex,
    const NmouseHandle& handle) const;

 private:
  uint8_t* m_pMemory;
};

}
