#include <algorithm>

#include "nn/hid/detail/hid_ring_lifo.hpp"
#include "nn/hid/hid_types.hpp"

namespace nn::hid {

struct NpadAttribute;

struct NpadStateBase {
  int64_t samplingNumber;
  NpadButtonSet buttons;
  int32_t analogStickL[2];
  int32_t analogStickR[2];
  util::BitFlagSet<32, NpadAttribute> attributes;
  uint32_t reserved;
};

struct NpadFullKeyState : NpadStateBase {};
struct NpadHandheldState : NpadStateBase {};
struct NpadJoyDualState : NpadStateBase {};
struct NpadJoyLeftState : NpadStateBase {};
struct NpadJoyRightState : NpadStateBase {};
struct NpadPalmaState : NpadStateBase {};

namespace system {

struct NpadSystemExtState : NpadStateBase {};

}

template <typename T>
void ConvertState(T* pOutState, const T& state) {
  *pOutState = state;
}

}

namespace nn::hid::detail {

class NpadSharedMemoryAccessor;

NpadSharedMemoryAccessor* GetNpadSharedMemoryAccessor();

class NpadSharedMemoryAccessor {
 public:
  const void* GetInternalState(NpadIdType id) const;
  ControlPadRestrictionType GetControlPadRestrictionType(int styleIndex);
  bool IsControlPadRestrictionEnabled(int styleIndex);
};

namespace {

constexpr Result ResultNpadNotInitialized = {0x58aca};
constexpr Result ResultNpadInvalidInternalState = {0x58cca};

constexpr int NpadLifoCapacity = 17;

constexpr uint64_t NpadButtonLeft = 1u << 12;
constexpr uint64_t NpadButtonUp = 1u << 13;
constexpr uint64_t NpadButtonRight = 1u << 14;
constexpr uint64_t NpadButtonDown = 1u << 15;

template <typename T>
using NpadLifo = RingLifo<T, NpadLifoCapacity>;

// Opposite directions are masked so a restricted control pad never reports
// up and down, or left and right, at the same time.
NpadButtonSet RestrictControlPad(NpadButtonSet buttons,
  ControlPadRestrictionType type, bool isEnabled) {
  if (!isEnabled || type != 0) {
    return buttons;
  }
  uint64_t value = buttons._storage[0] |
    static_cast<uint64_t>(buttons._storage[1]) << 32;
  if ((value & NpadButtonUp) != 0) {
    value &= ~NpadButtonDown;
  }
  if ((value & NpadButtonLeft) != 0) {
    value &= ~NpadButtonRight;
  }
  NpadButtonSet result;
  result._storage[0] = static_cast<uint32_t>(value);
  result._storage[1] = static_cast<uint32_t>(value >> 32);
  return result;
}

template <typename T>
Result GetNpadStatesImpl(int* pOutCount, T* pOutStates, int count,
  const NpadIdType& id, size_t lifoOffset, int styleIndex) {
  NpadSharedMemoryAccessor* pAccessor = GetNpadSharedMemoryAccessor();
  if (pAccessor == nullptr) {
    return ResultNpadNotInitialized;
  }
  const void* pState = pAccessor->GetInternalState(id);
  if (pState == nullptr) {
    return ResultNpadInvalidInternalState;
  }
  const NpadLifo<T>* pLifo = reinterpret_cast<const NpadLifo<T>*>(
    static_cast<const uint8_t*>(pState) + lifoOffset);
  *pOutCount = pLifo->Read(pOutStates, count);
  for (int i = 0; i < *pOutCount; ++i) {
    const ControlPadRestrictionType type =
      pAccessor->GetControlPadRestrictionType(styleIndex);
    const bool isEnabled =
      pAccessor->IsControlPadRestrictionEnabled(styleIndex);
    pOutStates[i].buttons =
      RestrictControlPad(pOutStates[i].buttons, type, isEnabled);
  }
  return Result{};
}

template <typename T>
Result ReadNpadStates(int* pOutCount, T* pOutStates, int count,
  const NpadIdType& id, size_t lifoOffset) {
  NpadSharedMemoryAccessor* pAccessor = GetNpadSharedMemoryAccessor();
  if (pAccessor == nullptr) {
    return ResultNpadNotInitialized;
  }
  const void* pState = pAccessor->GetInternalState(id);
  if (pState == nullptr) {
    return ResultNpadInvalidInternalState;
  }
  const NpadLifo<T>* pLifo = reinterpret_cast<const NpadLifo<T>*>(
    static_cast<const uint8_t*>(pState) + lifoOffset);
  *pOutCount = pLifo->Read(pOutStates, count);
  return Result{};
}

}

Result GetNpadStates(int* pOutCount, NpadFullKeyState* pOutStates, int count,
  const NpadIdType& id) {
  return GetNpadStatesImpl(pOutCount, pOutStates, count, id, 0x28, 0);
}

Result GetNpadStates(int* pOutCount, NpadHandheldState* pOutStates,
  int count, const NpadIdType& id) {
  return GetNpadStatesImpl(pOutCount, pOutStates, count, id, 0x378, 1);
}

Result GetNpadStates(int* pOutCount, NpadJoyDualState* pOutStates, int count,
  const NpadIdType& id) {
  return GetNpadStatesImpl(pOutCount, pOutStates, count, id, 0x6c8, 2);
}

Result GetNpadStates(int* pOutCount, NpadJoyLeftState* pOutStates, int count,
  const NpadIdType& id) {
  return GetNpadStatesImpl(pOutCount, pOutStates, count, id, 0xa18, 3);
}

Result GetNpadStates(int* pOutCount, NpadJoyRightState* pOutStates,
  int count, const NpadIdType& id) {
  return GetNpadStatesImpl(pOutCount, pOutStates, count, id, 0xd68, 4);
}

Result GetNpadStates(int* pOutCount, system::NpadSystemExtState* pOutStates,
  int count, const NpadIdType& id) {
  return GetNpadStatesImpl(pOutCount, pOutStates, count, id, 0x1408, 29);
}

Result GetNpadStates(int* pOutCount, NpadPalmaState* pOutStates, int count,
  const NpadIdType& id) {
  return ReadNpadStates(pOutCount, pOutStates, count, id, 0x10b8);
}

}
