#include <optional>

#include "nn/diag/diag_abort.hpp"
#include "nn/streamplay/detail/streamplay_hid_util.hpp"
#include "nn/streamplay/detail/streamplay_hid_shared_memory.hpp"

namespace nn::streamplay::detail {

namespace {

constexpr Result ResultControllerColorNotAvailable = {0x651f};

inline bool GetNpadIndex(int* pOutIndex, hid::NpadIdType id) {
  switch (id) {
    case 0:
      *pOutIndex = 0;
      return true;
    case 1:
      *pOutIndex = 1;
      return true;
    case 32:
      *pOutIndex = 2;
      return true;
    default:
      return false;
  }
}

inline const HidSharedMemoryFormat::NpadEntry* GetNpadEntry(
  const HidSharedMemoryFormat* pFormat, const GuestPadId& id) {
  if (id.guestId >= GuestCountMax) {
    return nullptr;
  }
  int index;
  if (!GetNpadIndex(&index, id.npadId) || pFormat == nullptr) {
    return nullptr;
  }
  return &pFormat->npad[index][id.guestId];
}

inline bool GetSixAxisSensorIndex(int* pOutIndex, hid::NpadStyleSet style,
  int deviceIndex) {
  const uint32_t bits = style._storage[0];
  if ((bits ^ (bits - 1)) <= bits - 1) {
    return false;
  }
  int index = 0;
  if ((bits & 0x1) != 0) {
    if (deviceIndex == 0) {
      index = 0;
    }
  }
  else if ((bits & 0x2) != 0) {
    if (deviceIndex == 0) {
      index = 1;
    }
  }
  else if ((bits & 0x1004) != 0) {
    if (deviceIndex == 0) {
      index = 2;
    }
    else if (deviceIndex == 1) {
      index = 3;
    }
  }
  else if ((bits & 0x2008) != 0) {
    if (deviceIndex == 0) {
      index = 4;
    }
  }
  else if ((bits & 0x4010) != 0) {
    if (deviceIndex == 0) {
      index = 5;
    }
  }
  else {
    return false;
  }
  *pOutIndex = index;
  return true;
}

inline std::optional<int> GetJcmsIndex(hid::NpadIdType npadId,
  uint8_t type) {
  std::optional<int> base;
  switch (npadId) {
    case 0:
      base = 0;
      break;
    case 1:
      base = 2;
      break;
    default:
      break;
  }
  int offset;
  switch (type) {
    case 0:
      offset = 0;
      break;
    case 1:
      offset = 1;
      break;
    default:
      return std::nullopt;
  }
  if (!base) {
    return std::nullopt;
  }
  return *base + offset;
}

inline const NmouseSharedMemoryStorage* GetNmouseStorage(
  const HidSharedMemoryFormat* pFormat, const GuestPadId& id, int index) {
  if (id.guestId >= GuestCountMax) {
    return nullptr;
  }
  switch (id.npadId) {
    case 0:
      return &pFormat->nmouse[2 + index][id.guestId & 3];
    case 1:
      return &pFormat->nmouse[4 + index][id.guestId & 3];
    default:
      return nullptr;
  }
}

[[gnu::noinline]] bool ReadNmouseInfo(GuestNmouseInfoState* pOutInfo,
  const HidSharedMemoryFormat* pFormat, const GuestNmouseHandle& handle) {
  for (const auto& storages : pFormat->nmouse) {
    for (const NmouseSharedMemoryStorage& storage : storages) {
      if (storage.CompareHandleAndReadInfo(pOutInfo, handle)) {
        return true;
      }
    }
  }
  return false;
}

}

HidSharedMemoryAccessor::HidSharedMemoryAccessor(
  const HidSharedMemoryFormat* pFormat) : m_pFormat(pFormat) {}

template <size_t N>
int HidSharedMemoryAccessor::GetGuestTouchScreenStates(
  GuestTouchScreenState<N>* pOutStates, int count, GuestId id) const {
  if (id >= GuestCountMax) {
    return GetDefaultStates(pOutStates, count);
  }
  return m_pFormat->touchScreen[id].lifo.Read(pOutStates, count);
}

template int HidSharedMemoryAccessor::GetGuestTouchScreenStates<1>(
  GuestTouchScreenState<1>*, int, GuestId) const;
template int HidSharedMemoryAccessor::GetGuestTouchScreenStates<2>(
  GuestTouchScreenState<2>*, int, GuestId) const;
template int HidSharedMemoryAccessor::GetGuestTouchScreenStates<3>(
  GuestTouchScreenState<3>*, int, GuestId) const;
template int HidSharedMemoryAccessor::GetGuestTouchScreenStates<4>(
  GuestTouchScreenState<4>*, int, GuestId) const;
template int HidSharedMemoryAccessor::GetGuestTouchScreenStates<5>(
  GuestTouchScreenState<5>*, int, GuestId) const;
template int HidSharedMemoryAccessor::GetGuestTouchScreenStates<6>(
  GuestTouchScreenState<6>*, int, GuestId) const;
template int HidSharedMemoryAccessor::GetGuestTouchScreenStates<7>(
  GuestTouchScreenState<7>*, int, GuestId) const;
template int HidSharedMemoryAccessor::GetGuestTouchScreenStates<8>(
  GuestTouchScreenState<8>*, int, GuestId) const;
template int HidSharedMemoryAccessor::GetGuestTouchScreenStates<9>(
  GuestTouchScreenState<9>*, int, GuestId) const;
template int HidSharedMemoryAccessor::GetGuestTouchScreenStates<10>(
  GuestTouchScreenState<10>*, int, GuestId) const;
template int HidSharedMemoryAccessor::GetGuestTouchScreenStates<11>(
  GuestTouchScreenState<11>*, int, GuestId) const;
template int HidSharedMemoryAccessor::GetGuestTouchScreenStates<12>(
  GuestTouchScreenState<12>*, int, GuestId) const;
template int HidSharedMemoryAccessor::GetGuestTouchScreenStates<13>(
  GuestTouchScreenState<13>*, int, GuestId) const;
template int HidSharedMemoryAccessor::GetGuestTouchScreenStates<14>(
  GuestTouchScreenState<14>*, int, GuestId) const;
template int HidSharedMemoryAccessor::GetGuestTouchScreenStates<15>(
  GuestTouchScreenState<15>*, int, GuestId) const;
template int HidSharedMemoryAccessor::GetGuestTouchScreenStates<16>(
  GuestTouchScreenState<16>*, int, GuestId) const;

hid::NpadStyleSet HidSharedMemoryAccessor::GetGuestPadStyleSet(
  const GuestPadId& id) const {
  const HidSharedMemoryFormat::NpadEntry* pEntry = GetNpadEntry(m_pFormat, id);
  if (pEntry == nullptr) {
    return {};
  }
  return {{pEntry->styleSet.load(std::memory_order_seq_cst)}};
}

Result HidSharedMemoryAccessor::GetGuestPadControllerColor(
  hid::NpadControllerColor* pOutColor, const GuestPadId& id) const {
  const HidSharedMemoryFormat::NpadEntry* pEntry = GetNpadEntry(m_pFormat, id);
  if (pEntry == nullptr) {
    return ResultControllerColorNotAvailable;
  }
  ControllerColorState state = {};
  if (pEntry->color.Read(&state, 1) == 0) {
    return ResultControllerColorNotAvailable;
  }
  switch (state.status) {
    case ControllerColorStatus_None:
      return ResultControllerColorNotAvailable;
    case ControllerColorStatus_Valid:
      *pOutColor = state.color;
      return Result{};
    default:
      diag::detail::AbortImpl();
  }
}

Result HidSharedMemoryAccessor::GetGuestPadControllerColor(
  hid::NpadControllerColor* pOutLeftColor,
  hid::NpadControllerColor* pOutRightColor, const GuestPadId& id) const {
  const HidSharedMemoryFormat::NpadEntry* pEntry = GetNpadEntry(m_pFormat, id);
  if (pEntry == nullptr) {
    return ResultControllerColorNotAvailable;
  }
  DualControllerColorState state = {};
  if (pEntry->dualColor.Read(&state, 1) == 0) {
    return ResultControllerColorNotAvailable;
  }
  switch (state.status) {
    case ControllerColorStatus_None:
      return ResultControllerColorNotAvailable;
    case ControllerColorStatus_Valid:
      *pOutLeftColor = state.left;
      *pOutRightColor = state.right;
      return Result{};
    default:
      diag::detail::AbortImpl();
  }
}

int HidSharedMemoryAccessor::GetGuestPadStates(
  GuestPadState<hid::NpadFullKeyState>* pOutStates, int count,
  const GuestPadId& id) const {
  const HidSharedMemoryFormat::NpadEntry* pEntry = GetNpadEntry(m_pFormat, id);
  if (pEntry == nullptr) {
    return GetDefaultStates(pOutStates, count);
  }
  return pEntry->fullKey.Read(pOutStates, count);
}

int HidSharedMemoryAccessor::GetGuestPadStates(
  GuestPadState<hid::NpadHandheldState>* pOutStates, int count,
  const GuestPadId& id) const {
  const HidSharedMemoryFormat::NpadEntry* pEntry = GetNpadEntry(m_pFormat, id);
  if (pEntry == nullptr) {
    return GetDefaultStates(pOutStates, count);
  }
  return pEntry->handheld.Read(pOutStates, count);
}

int HidSharedMemoryAccessor::GetGuestPadStates(
  GuestPadState<hid::NpadJoyDualState>* pOutStates, int count,
  const GuestPadId& id) const {
  const HidSharedMemoryFormat::NpadEntry* pEntry = GetNpadEntry(m_pFormat, id);
  if (pEntry == nullptr) {
    return GetDefaultStates(pOutStates, count);
  }
  return pEntry->joyDual.Read(pOutStates, count);
}

int HidSharedMemoryAccessor::GetGuestPadStates(
  GuestPadState<hid::NpadJoyLeftState>* pOutStates, int count,
  const GuestPadId& id) const {
  const HidSharedMemoryFormat::NpadEntry* pEntry = GetNpadEntry(m_pFormat, id);
  if (pEntry == nullptr) {
    return GetDefaultStates(pOutStates, count);
  }
  return pEntry->joyLeft.Read(pOutStates, count);
}

int HidSharedMemoryAccessor::GetGuestPadStates(
  GuestPadState<hid::NpadJoyRightState>* pOutStates, int count,
  const GuestPadId& id) const {
  const HidSharedMemoryFormat::NpadEntry* pEntry = GetNpadEntry(m_pFormat, id);
  if (pEntry == nullptr) {
    return GetDefaultStates(pOutStates, count);
  }
  return pEntry->joyRight.Read(pOutStates, count);
}

int HidSharedMemoryAccessor::GetGuestSixAxisSensorStates(
  GuestSixAxisSensorState* pOutStates, int count,
  const GuestSixAxisSensorHandle& handle) const {
  const HidSharedMemoryFormat* pFormat = m_pFormat;
  GuestPadId id = {};
  hid::NpadStyleSet style = {};
  int deviceIndex = 0;
  GetValuesFromSixAxisSensorHandle(&id, &style, &deviceIndex, handle);
  const HidSharedMemoryFormat::NpadEntry* pEntry = GetNpadEntry(pFormat, id);
  int index;
  if (pEntry == nullptr ||
    !GetSixAxisSensorIndex(&index, style, deviceIndex)) {
    return GetDefaultStates(pOutStates, count);
  }
  return pEntry->sixAxisSensor[index].Read(pOutStates, count);
}

int HidSharedMemoryAccessor::GetGuestJcmsStates(GuestJcmsState* pOutStates,
  int count, const GuestJcmsHandle& handle) const {
  const HidSharedMemoryFormat* pFormat = m_pFormat;
  GuestPadId id = {};
  uint8_t type = 0;
  GetValuesFromJcmsHandle(&id, &type, handle);
  if (id.guestId >= GuestCountMax) {
    return GetDefaultStates(pOutStates, count);
  }
  const std::optional<int> index = GetJcmsIndex(id.npadId, type);
  if (!index) {
    return GetDefaultStates(pOutStates, count);
  }
  return pFormat->jcms[*index & 3][id.guestId].lifo.Read(pOutStates, count);
}

bool HidSharedMemoryAccessor::GetGuestMergedNmouseHandle(
  GuestNmouseHandle* pOutHandle, GuestId id) const {
  if (id >= GuestCountMax) {
    return false;
  }
  GuestNmouseHandle handle = {};
  const bool isRead = m_pFormat->nmouse[0][id].ReadHandle(&handle);
  if (isRead) {
    *pOutHandle = handle;
  }
  return isRead;
}

int HidSharedMemoryAccessor::GetGuestNmouseHandles(
  GuestNmouseHandle* pOutHandles, int count, const GuestPadId& id) const {
  int readCount = 0;
  for (int i = 0; i < 2; ++i) {
    const NmouseSharedMemoryStorage* pStorage =
      GetNmouseStorage(m_pFormat, id, i);
    if (pStorage == nullptr) {
      break;
    }
    GuestNmouseHandle handle = {};
    if (pStorage->ReadHandle(&handle)) {
      pOutHandles[readCount++] = handle;
      if (readCount >= count) {
        break;
      }
    }
  }
  return readCount;
}

bool HidSharedMemoryAccessor::GetNmouseTypeSet(GuestNmouseTypeSet* pOutTypes,
  const GuestNmouseHandle& handle) const {
  GuestNmouseInfoState info = {};
  const bool isRead = ReadNmouseInfo(&info, m_pFormat, handle);
  if (isRead) {
    *pOutTypes = info.types;
  }
  return isRead;
}

bool HidSharedMemoryAccessor::GetGuestPadId(GuestPadId* pOutId,
  const GuestNmouseHandle& handle) const {
  GuestNmouseInfoState info = {};
  if (!ReadNmouseInfo(&info, m_pFormat, handle) ||
    (info.types._storage[0] & 0x6) == 0) {
    return false;
  }
  pOutId->npadId = info.npadId;
  pOutId->guestId = info.guestId;
  return true;
}

bool HidSharedMemoryAccessor::GetGuestId(GuestId* pOutId,
  const GuestNmouseHandle& handle) const {
  GuestNmouseInfoState info = {};
  const bool isRead = ReadNmouseInfo(&info, m_pFormat, handle);
  if (isRead) {
    *pOutId = info.guestId;
  }
  return isRead;
}

bool HidSharedMemoryAccessor::GetGuestNmouseStates(int* pOutCount,
  GuestNmouseState* pOutStates, int count,
  const GuestNmouseHandle& handle) const {
  const Span<GuestNmouseState> states = {pOutStates,
    static_cast<uintptr_t>(static_cast<intptr_t>(count))};
  for (const auto& storages : m_pFormat->nmouse) {
    for (const NmouseSharedMemoryStorage& storage : storages) {
      if (storage.CompareHandleAndReadStates(pOutCount, states, handle)) {
        return true;
      }
    }
  }
  return false;
}

}
