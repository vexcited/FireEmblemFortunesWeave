#include "nn/hid/detail/hid_nmouse_accessor.hpp"
#include "nn/hid/detail/hid_abort.hpp"
#include "nn/hid/detail/hid_ring_lifo.hpp"

namespace nn::hid::detail {

namespace {

constexpr int NmouseCountMax = 17;
constexpr int NmouseStateCountMax = 16;

constexpr size_t LifoOffset = 0x220;
constexpr size_t InfoOffset = 0x8c40;
constexpr size_t ShowingCursorOffset = 0x8e68;

constexpr Result ResultNmouseInvalidHandle = {0x28bcca};
constexpr Result ResultNmouseNotFound = {0x28c0ca};

constexpr uint32_t NmouseTypeMerged = 1u << 0;
constexpr uint32_t NmouseTypeStandardMouse = 1u << 3;

struct NmouseStateInternal {
  int64_t timestamp;
  int64_t samplingNumber;
  int32_t x;
  int32_t y;
  int32_t deltaX;
  int32_t deltaY;
  int32_t wheelDeltaX;
  int32_t reserved0;
  uint32_t buttons;
  uint32_t attributes;
  int32_t wheelDeltaY;
  int32_t rawDeltaX;
  int32_t rawDeltaY;
  uint8_t reserved1[52];
};

using NmouseLifo = RingLifo<NmouseStateInternal, NmouseCountMax>;

void ConvertState(NmouseStateInternal* pOutState,
  const NmouseStateInternal& state) {
  *pOutState = state;
}

const std::optional<NmouseHandle>* GetHandles(const uint8_t* pMemory) {
  return reinterpret_cast<const std::optional<NmouseHandle>*>(pMemory);
}

const server::NmouseInfo* GetInfos(const uint8_t* pMemory) {
  return reinterpret_cast<const server::NmouseInfo*>(pMemory + InfoOffset);
}

const NmouseLifo& GetLifo(const uint8_t* pMemory, int index) {
  return *reinterpret_cast<const NmouseLifo*>(pMemory + LifoOffset +
    sizeof(NmouseLifo) * index);
}

}

NmouseTransferMemoryAccessor::NmouseTransferMemoryAccessor() :
  m_pMemory(nullptr) {}

NmouseTransferMemoryAccessor::~NmouseTransferMemoryAccessor() {}

Result NmouseTransferMemoryAccessor::InitializeTransferMemory(void* address) {
  m_pMemory = static_cast<uint8_t*>(address);
  return Result{};
}

Result NmouseTransferMemoryAccessor::FinalizeTransferMemory() {
  m_pMemory = nullptr;
  return Result{};
}

bool NmouseTransferMemoryAccessor::IsInitialized() const {
  return m_pMemory != nullptr;
}

Result NmouseTransferMemoryAccessor::IsEnabledShowingCursor(
  bool* pOutIsEnabled) const {
  *pOutIsEnabled =
    *reinterpret_cast<const bool*>(m_pMemory + ShowingCursorOffset);
  return Result{};
}

Result NmouseTransferMemoryAccessor::ListNmouseHandles(int* pOutCount,
  NmouseHandle* pOutHandles, int count) const {
  uint8_t handleCount = 0;
  for (int i = 0; i < count; ++i) {
    const std::optional<NmouseHandle>& handle = GetHandles(m_pMemory)[i];
    if (handle.has_value() == true) {
      pOutHandles[handleCount++] = *handle;
    }
  }
  *pOutCount = handleCount;
  return Result{};
}

Result NmouseTransferMemoryAccessor::VerifyValidHandle(
  NmouseHandle handle) const {
  const std::optional<NmouseHandle>* pHandles = GetHandles(m_pMemory);
  for (int i = 0; i < NmouseCountMax; ++i) {
    if (pHandles[i].has_value() == true &&
      pHandles[i]->_storage == handle._storage) {
      return Result{};
    }
  }
  return ResultNmouseInvalidHandle;
}

Result NmouseTransferMemoryAccessor::GetMergedHandle(
  NmouseHandle* pOutHandle) const {
  for (int i = 0; i < NmouseCountMax; ++i) {
    const server::NmouseInfo& info = GetInfos(m_pMemory)[i];
    const std::optional<NmouseHandle>& handle = GetHandles(m_pMemory)[i];
    if (info.types.has_value() &&
      (info.types->_storage[0] & NmouseTypeMerged) != 0 &&
      handle.has_value()) {
      *pOutHandle = *handle;
      return Result{};
    }
  }
  return ResultNmouseNotFound;
}

Result NmouseTransferMemoryAccessor::GetNpadNmouseHandle(
  NmouseHandle* pOutHandle, NpadIdType id,
  util::BitFlagSet<32, NmouseType> types) const {
  for (int i = 0; i < NmouseCountMax; ++i) {
    const std::optional<NmouseHandle>& handle = GetHandles(m_pMemory)[i];
    const server::NmouseInfo& info = GetInfos(m_pMemory)[i];
    if (handle.has_value() && info.npadId.has_value() &&
      *info.npadId == id && info.types.has_value() &&
      info.types->_storage[0] == types._storage[0]) {
      *pOutHandle = *handle;
      return Result{};
    }
  }
  return ResultNmouseNotFound;
}

Result NmouseTransferMemoryAccessor::GetStandardMouseNmouseHandle(
  NmouseHandle* pOutHandle) const {
  for (int i = 0; i < NmouseCountMax; ++i) {
    const server::NmouseInfo& info = GetInfos(m_pMemory)[i];
    const std::optional<NmouseHandle>& handle = GetHandles(m_pMemory)[i];
    if (info.types.has_value() &&
      (info.types->_storage[0] & NmouseTypeStandardMouse) != 0 &&
      handle.has_value()) {
      *pOutHandle = *handle;
      return Result{};
    }
  }
  return ResultNmouseNotFound;
}

Result NmouseTransferMemoryAccessor::GetNmouseStates(int* pOutCount,
  NmouseState* pOutStates, int count, const NmouseHandle& handle) const {
  uint8_t index = 0;
  NN_RESULT_DO(GetIndexFromHandle(&index, handle));
  NmouseStateInternal states[NmouseStateCountMax] = {};
  const int readCount = GetLifo(m_pMemory, index).Read(states, count);
  for (int i = 0; i < readCount; ++i) {
    NmouseState& outState = pOutStates[i];
    const NmouseStateInternal& state = states[i];
    outState.timestamp = state.timestamp;
    outState.samplingNumber = state.samplingNumber;
    outState.x = state.x;
    outState.y = state.y;
    outState.deltaX = state.deltaX;
    outState.deltaY = state.deltaY;
    outState.wheelDeltaX = state.wheelDeltaX;
    outState.wheelDeltaY = state.wheelDeltaY;
    outState.buttons = state.buttons;
    outState.attributes = state.attributes;
  }
  *pOutCount = readCount;
  return Result{};
}

Result NmouseTransferMemoryAccessor::GetIndexFromHandle(uint8_t* pOutIndex,
  const NmouseHandle& handle) const {
  const std::optional<NmouseHandle>* pHandles = GetHandles(m_pMemory);
  for (int i = 0; i < NmouseCountMax; ++i) {
    if (pHandles[i].has_value() == true &&
      pHandles[i]->_storage == handle._storage) {
      *pOutIndex = static_cast<uint8_t>(i);
      return Result{};
    }
  }
  return ResultNmouseInvalidHandle;
}

Result NmouseTransferMemoryAccessor::GetNmouseStatesWithDelta(int* pOutCount,
  system::NmouseStateWithDelta* pOutStates, int count,
  const NmouseHandle& handle) const {
  uint8_t index = 0;
  NN_RESULT_DO(GetIndexFromHandle(&index, handle));
  NmouseStateInternal states[NmouseStateCountMax] = {};
  const int readCount = GetLifo(m_pMemory, index).Read(states, count);
  for (int i = 0; i < readCount; ++i) {
    system::NmouseStateWithDelta& outState = pOutStates[i];
    const NmouseStateInternal& state = states[i];
    outState.timestamp = state.timestamp;
    outState.samplingNumber = state.samplingNumber;
    outState.x = state.x;
    outState.y = state.y;
    outState.rawDeltaX = state.rawDeltaX;
    outState.rawDeltaY = state.rawDeltaY;
    outState.deltaX = state.deltaX;
    outState.deltaY = state.deltaY;
    outState.wheelDeltaX = state.wheelDeltaX;
    outState.wheelDeltaY = state.wheelDeltaY;
    outState.buttons = state.buttons;
    outState.attributes = state.attributes;
  }
  *pOutCount = readCount;
  return Result{};
}

Result NmouseTransferMemoryAccessor::GetNmouseTypeSet(
  util::BitFlagSet<32, NmouseType>* pOutTypes,
  const NmouseHandle& handle) const {
  uint8_t index = 0;
  NN_RESULT_DO(GetIndexFromHandle(&index, handle));
  *pOutTypes = GetInfos(m_pMemory)[index].types.value();
  return Result{};
}

Result NmouseTransferMemoryAccessor::GetNmouseInfo(
  server::NmouseInfo* pOutInfo, const NmouseHandle& handle) const {
  uint8_t index = 0;
  NN_RESULT_DO(GetIndexFromHandle(&index, handle));
  *pOutInfo = GetInfos(m_pMemory)[index];
  return Result{};
}

Result NmouseTransferMemoryAccessor::GetNpadIdType(NpadIdType* pOutId,
  const NmouseHandle& handle) const {
  uint8_t index = 0;
  NN_RESULT_DO(GetIndexFromHandle(&index, handle));
  const server::NmouseInfo& info = GetInfos(m_pMemory)[index];
  if (!info.npadId.has_value()) {
    return ResultNmouseInvalidHandle;
  }
  *pOutId = *info.npadId;
  return Result{};
}

Result NmouseTransferMemoryAccessor::IsEnableNmousePointer(
  bool* pOutIsEnabled, NmouseHandle handle) const {
  uint8_t index = 0;
  NN_RESULT_DO(GetIndexFromHandle(&index, handle));
  *pOutIsEnabled = GetInfos(m_pMemory)[index].isPointerEnabled;
  return Result{};
}

}
