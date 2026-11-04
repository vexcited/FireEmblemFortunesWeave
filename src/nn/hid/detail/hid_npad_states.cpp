#include <algorithm>

#include "nn/hid/detail/hid_abort.hpp"
#include "nn/hid/detail/hid_ring_lifo.hpp"
#include "nn/hid/hid_device_states.hpp"
#include "nn/hid/hid_types.hpp"

namespace nn::hid {

struct NpadAttribute;

struct NpadStateBase {
  int64_t samplingNumber;
  NpadButtonSet buttons;
  AnalogStickState analogStickL;
  AnalogStickState analogStickR;
  util::BitFlagSet<32, NpadAttribute> attributes;
  uint32_t reserved;
};

struct NpadGcState {
  int64_t samplingNumber;
  NpadButtonSet buttons;
  AnalogStickState analogStickL;
  AnalogStickState analogStickR;
  util::BitFlagSet<32, NpadAttribute> attributes;
  uint32_t triggerL;
  uint32_t triggerR;
};

struct NpadLarkState {
  int64_t samplingNumber;
  NpadButtonSet buttons;
  AnalogStickState analogStickL;
  AnalogStickState analogStickR;
  util::BitFlagSet<32, NpadAttribute> attributes;
  uint32_t larkType;
};

struct NpadHandheldLarkState {
  int64_t samplingNumber;
  NpadButtonSet buttons;
  AnalogStickState analogStickL;
  AnalogStickState analogStickR;
  util::BitFlagSet<32, NpadAttribute> attributes;
  uint32_t larkTypeL;
  uint32_t larkTypeR;
};

struct NpadLuciaState {
  int64_t samplingNumber;
  NpadButtonSet buttons;
  AnalogStickState analogStickL;
  AnalogStickState analogStickR;
  util::BitFlagSet<32, NpadAttribute> attributes;
  uint32_t luciaType;
};

struct NpadLagerState {
  int64_t samplingNumber;
  NpadButtonSet buttons;
  AnalogStickState analogStickL;
  AnalogStickState analogStickR;
  util::BitFlagSet<32, NpadAttribute> attributes;
  uint32_t reserved;
};

struct NpadFullKeyState : NpadStateBase {};
struct NpadHandheldState : NpadStateBase {};
struct NpadJoyDualState : NpadStateBase {};
struct NpadJoyLeftState : NpadStateBase {};
struct NpadJoyRightState : NpadStateBase {};
struct NpadPalmaState : NpadStateBase {};

struct SixAxisSensorState {
  int64_t deltaTime;
  int64_t samplingNumber;
  float acceleration[3];
  float angularVelocity[3];
  float angle[3];
  float direction[3][3];
  uint32_t attributes;
};

namespace system {

struct NpadSystemExtState : NpadStateBase {};

struct NpadSystemState {
  int64_t samplingNumber;
  NpadButtonSet buttons;
  AnalogStickState analogStickL;
  AnalogStickState analogStickR;
  util::BitFlagSet<32, NpadAttribute> attributes;
  uint32_t reserved;
};

}

struct NpadGcTriggerState {
  int64_t samplingNumber;
  uint32_t triggerL;
  uint32_t triggerR;
};

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
constexpr int NpadStateCountMax = 16;

constexpr size_t NpadFullKeyLifoOffset = 0x28;
constexpr size_t NpadHandheldLifoOffset = 0x378;
constexpr size_t NpadSystemExtLifoOffset = 0x1408;
constexpr size_t NpadGcTriggerLifoOffset = 0x4228;
constexpr size_t NpadLarkTypeOffset = 0x43e0;
constexpr size_t NpadLarkTypeROffset = 0x43e4;
constexpr size_t NpadLuciaTypeOffset = 0x43e8;

constexpr uint64_t NpadButtonA = 1u << 0;
constexpr uint64_t NpadButtonB = 1u << 1;
constexpr uint64_t NpadButtonX = 1u << 2;
constexpr uint64_t NpadButtonY = 1u << 3;
constexpr uint64_t NpadButtonL = 1u << 6;
constexpr uint64_t NpadButtonR = 1u << 7;
constexpr uint64_t NpadButtonZL = 1u << 8;
constexpr uint64_t NpadButtonZR = 1u << 9;
constexpr uint64_t NpadButtonLeft = 1u << 12;
constexpr uint64_t NpadButtonUp = 1u << 13;
constexpr uint64_t NpadButtonRight = 1u << 14;
constexpr uint64_t NpadButtonDown = 1u << 15;
constexpr uint64_t NpadButtonStickLLeft = 1u << 16;
constexpr uint64_t NpadButtonStickLUp = 1u << 17;
constexpr uint64_t NpadButtonStickLRight = 1u << 18;
constexpr uint64_t NpadButtonStickLDown = 1u << 19;
constexpr uint64_t NpadButtonStickRLeft = 1u << 20;
constexpr uint64_t NpadButtonStickRUp = 1u << 21;
constexpr uint64_t NpadButtonStickRRight = 1u << 22;
constexpr uint64_t NpadButtonStickRDown = 1u << 23;

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
Result ReadNpadStates(NpadSharedMemoryAccessor* pAccessor, int* pOutCount,
  T* pOutStates, int count, const NpadIdType& id, size_t lifoOffset) {
  const void* pState = pAccessor->GetInternalState(id);
  if (pState == nullptr) {
    return ResultNpadInvalidInternalState;
  }
  const NpadLifo<T>* pLifo = reinterpret_cast<const NpadLifo<T>*>(
    static_cast<const uint8_t*>(pState) + lifoOffset);
  *pOutCount = pLifo->Read(pOutStates, count);
  return Result{};
}

template <typename T>
const NpadLifo<T>& GetNpadLifo(const void* pState, size_t lifoOffset) {
  return *reinterpret_cast<const NpadLifo<T>*>(
    static_cast<const uint8_t*>(pState) + lifoOffset);
}

uint32_t LoadDeviceType(const void* pState, size_t offset, uint32_t max) {
  const uint32_t type = reinterpret_cast<const std::atomic<uint32_t>*>(
    static_cast<const uint8_t*>(pState) + offset)->load();
  return type >= 1 && type <= max ? type : 0;
}

NpadButtonSet ConvertToSystemButtons(NpadButtonSet buttons) {
  const uint64_t value = buttons._storage[0] |
    static_cast<uint64_t>(buttons._storage[1]) << 32;
  uint64_t result = value & (NpadButtonA | NpadButtonB | NpadButtonX |
    NpadButtonY);
  if ((value & (NpadButtonL | NpadButtonZL)) != 0) {
    result |= NpadButtonL;
  }
  if ((value & (NpadButtonR | NpadButtonZR)) != 0) {
    result |= NpadButtonR;
  }
  if ((value & (NpadButtonLeft | NpadButtonStickLLeft |
    NpadButtonStickRLeft)) != 0) {
    result |= NpadButtonLeft;
  }
  if ((value & (NpadButtonUp | NpadButtonStickLUp | NpadButtonStickRUp)) !=
    0) {
    result |= NpadButtonUp;
  }
  if ((value & (NpadButtonRight | NpadButtonStickLRight |
    NpadButtonStickRRight)) != 0) {
    result |= NpadButtonRight;
  }
  if ((value & (NpadButtonDown | NpadButtonStickLDown |
    NpadButtonStickRDown)) != 0) {
    result |= NpadButtonDown;
  }
  NpadButtonSet converted;
  converted._storage[0] = static_cast<uint32_t>(result);
  converted._storage[1] = static_cast<uint32_t>(result >> 32);
  return converted;
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
  NpadSharedMemoryAccessor* pAccessor = GetNpadSharedMemoryAccessor();
  if (pAccessor == nullptr) {
    return ResultNpadNotInitialized;
  }
  return ReadNpadStates(pAccessor, pOutCount, pOutStates, count, id, 0x10b8);
}

// The analog sticks of the first read state are reported for every entry.
Result GetNpadStates(int* pOutCount, NpadGcState* pOutStates, int count,
  const NpadIdType& id) {
  NpadSharedMemoryAccessor* pAccessor = GetNpadSharedMemoryAccessor();
  if (pAccessor == nullptr) {
    return ResultNpadNotInitialized;
  }
  const void* pState = pAccessor->GetInternalState(id);
  if (pState == nullptr) {
    return ResultNpadInvalidInternalState;
  }
  NpadFullKeyState states[NpadStateCountMax] = {};
  NpadGcTriggerState triggerStates[NpadStateCountMax] = {};
  *pOutCount = GetNpadLifo<NpadFullKeyState>(pState, NpadFullKeyLifoOffset)
    .Read(states, count);
  const int triggerCount = GetNpadLifo<NpadGcTriggerState>(pState,
    NpadGcTriggerLifoOffset).Read(triggerStates, count);
  *pOutCount = std::min(triggerCount, *pOutCount);
  for (int i = 0; i < *pOutCount; ++i) {
    const ControlPadRestrictionType type =
      pAccessor->GetControlPadRestrictionType(0);
    const bool isEnabled = pAccessor->IsControlPadRestrictionEnabled(0);
    NpadGcState& outState = pOutStates[i];
    outState.samplingNumber = states[i].samplingNumber;
    outState.buttons = RestrictControlPad(states[i].buttons, type, isEnabled);
    outState.analogStickL = states->analogStickL;
    outState.analogStickR = states->analogStickR;
    outState.attributes = states[i].attributes;
    outState.triggerL = triggerStates[i].triggerL;
    outState.triggerR = triggerStates[i].triggerR;
  }
  return Result{};
}

Result GetNpadStates(int* pOutCount, NpadLarkState* pOutStates, int count,
  const NpadIdType& id) {
  NpadSharedMemoryAccessor* pAccessor = GetNpadSharedMemoryAccessor();
  if (pAccessor == nullptr) {
    return ResultNpadNotInitialized;
  }
  const void* pState = pAccessor->GetInternalState(id);
  if (pState == nullptr) {
    return ResultNpadInvalidInternalState;
  }
  NpadFullKeyState states[NpadStateCountMax] = {};
  *pOutCount = GetNpadLifo<NpadFullKeyState>(pState, NpadFullKeyLifoOffset)
    .Read(states, count);
  const uint32_t larkType = LoadDeviceType(pState, NpadLarkTypeOffset, 4);
  for (int i = 0; i < *pOutCount; ++i) {
    const ControlPadRestrictionType type =
      pAccessor->GetControlPadRestrictionType(0);
    const bool isEnabled = pAccessor->IsControlPadRestrictionEnabled(0);
    NpadLarkState& outState = pOutStates[i];
    outState.samplingNumber = states[i].samplingNumber;
    outState.buttons = RestrictControlPad(states[i].buttons, type, isEnabled);
    outState.analogStickL = {};
    outState.analogStickR = {};
    outState.attributes = states[i].attributes;
    outState.larkType = larkType;
  }
  return Result{};
}

// The analog sticks of the first read state are reported for every entry.
Result GetNpadStates(int* pOutCount, NpadHandheldLarkState* pOutStates,
  int count, const NpadIdType& id) {
  NpadSharedMemoryAccessor* pAccessor = GetNpadSharedMemoryAccessor();
  if (pAccessor == nullptr) {
    return ResultNpadNotInitialized;
  }
  const void* pState = pAccessor->GetInternalState(id);
  if (pState == nullptr) {
    return ResultNpadInvalidInternalState;
  }
  NpadHandheldState states[NpadStateCountMax] = {};
  *pOutCount = GetNpadLifo<NpadHandheldState>(pState,
    NpadHandheldLifoOffset).Read(states, count);
  const uint32_t larkTypeL = LoadDeviceType(pState, NpadLarkTypeOffset, 4);
  const uint32_t larkTypeR = LoadDeviceType(pState, NpadLarkTypeROffset, 4);
  for (int i = 0; i < *pOutCount; ++i) {
    const ControlPadRestrictionType type =
      pAccessor->GetControlPadRestrictionType(1);
    const bool isEnabled = pAccessor->IsControlPadRestrictionEnabled(1);
    NpadHandheldLarkState& outState = pOutStates[i];
    outState.samplingNumber = states[i].samplingNumber;
    outState.buttons = RestrictControlPad(states[i].buttons, type, isEnabled);
    outState.analogStickL = states->analogStickL;
    outState.analogStickR = states->analogStickR;
    outState.attributes = states[i].attributes;
    outState.larkTypeL = larkTypeL;
    outState.larkTypeR = larkTypeR;
  }
  return Result{};
}

Result GetNpadStates(int* pOutCount, NpadLuciaState* pOutStates, int count,
  const NpadIdType& id) {
  NpadSharedMemoryAccessor* pAccessor = GetNpadSharedMemoryAccessor();
  if (pAccessor == nullptr) {
    return ResultNpadNotInitialized;
  }
  const void* pState = pAccessor->GetInternalState(id);
  if (pState == nullptr) {
    return ResultNpadInvalidInternalState;
  }
  NpadFullKeyState states[NpadStateCountMax] = {};
  *pOutCount = GetNpadLifo<NpadFullKeyState>(pState, NpadFullKeyLifoOffset)
    .Read(states, count);
  const uint32_t luciaType = LoadDeviceType(pState, NpadLuciaTypeOffset, 3);
  for (int i = 0; i < *pOutCount; ++i) {
    const ControlPadRestrictionType type =
      pAccessor->GetControlPadRestrictionType(0);
    const bool isEnabled = pAccessor->IsControlPadRestrictionEnabled(0);
    NpadLuciaState& outState = pOutStates[i];
    outState.samplingNumber = states[i].samplingNumber;
    outState.buttons = RestrictControlPad(states[i].buttons, type, isEnabled);
    outState.analogStickL = {};
    outState.analogStickR = {};
    outState.attributes = states[i].attributes;
    outState.luciaType = luciaType;
  }
  return Result{};
}

Result GetNpadStates(int* pOutCount, NpadLagerState* pOutStates, int count,
  const NpadIdType& id) {
  NpadSharedMemoryAccessor* pAccessor = GetNpadSharedMemoryAccessor();
  if (pAccessor == nullptr) {
    return ResultNpadNotInitialized;
  }
  const void* pState = pAccessor->GetInternalState(id);
  if (pState == nullptr) {
    return ResultNpadInvalidInternalState;
  }
  NpadFullKeyState states[NpadStateCountMax] = {};
  *pOutCount = GetNpadLifo<NpadFullKeyState>(pState, NpadFullKeyLifoOffset)
    .Read(states, count);
  for (int i = 0; i < *pOutCount; ++i) {
    const ControlPadRestrictionType type =
      pAccessor->GetControlPadRestrictionType(0);
    const bool isEnabled = pAccessor->IsControlPadRestrictionEnabled(0);
    NpadLagerState& outState = pOutStates[i];
    outState.samplingNumber = states[i].samplingNumber;
    outState.buttons = RestrictControlPad(states[i].buttons, type, isEnabled);
    outState.analogStickL = {};
    outState.analogStickR = {};
    outState.attributes = states[i].attributes;
  }
  return Result{};
}

// The sampling number is not reported.
Result GetNpadStates(int* pOutCount, system::NpadSystemState* pOutStates,
  int count, const NpadIdType& id) {
  NpadSharedMemoryAccessor* pAccessor = GetNpadSharedMemoryAccessor();
  if (pAccessor == nullptr) {
    return ResultNpadNotInitialized;
  }
  const void* pState = pAccessor->GetInternalState(id);
  if (pState == nullptr) {
    return ResultNpadInvalidInternalState;
  }
  system::NpadSystemExtState states[NpadStateCountMax] = {};
  *pOutCount = GetNpadLifo<system::NpadSystemExtState>(pState,
    NpadSystemExtLifoOffset).Read(states, count);
  for (int i = 0; i < *pOutCount; ++i) {
    const NpadButtonSet buttons = ConvertToSystemButtons(states[i].buttons);
    const ControlPadRestrictionType type =
      pAccessor->GetControlPadRestrictionType(30);
    const bool isEnabled = pAccessor->IsControlPadRestrictionEnabled(30);
    system::NpadSystemState& outState = pOutStates[i];
    outState.buttons = RestrictControlPad(buttons, type, isEnabled);
    outState.analogStickL = {};
    outState.analogStickR = {};
    outState.attributes = states[i].attributes;
  }
  return Result{};
}

namespace {

constexpr uint32_t NpadStyleFullKey = 1u << 0;
constexpr uint32_t NpadStyleHandheld = 1u << 1;
constexpr uint32_t NpadStyleJoyDual = 1u << 2;
constexpr uint32_t NpadStyleJoyLeft = 1u << 3;

}

Result GetSixAxisSensorStates(int* pOutCount, SixAxisSensorState* pOutStates,
  int count, const NpadIdType& id, NpadStyleSet style) {
  NpadSharedMemoryAccessor* pAccessor = GetNpadSharedMemoryAccessor();
  if (pAccessor == nullptr) {
    return ResultNpadNotInitialized;
  }
  const void* pState = pAccessor->GetInternalState(id);
  if (pState == nullptr) {
    return ResultNpadInvalidInternalState;
  }
  size_t lifoOffset;
  if ((style._storage[0] & NpadStyleFullKey) != 0) {
    lifoOffset = 0x1758;
  }
  else if ((style._storage[0] & NpadStyleHandheld) != 0) {
    lifoOffset = 0x1e60;
  }
  else if ((style._storage[0] & NpadStyleJoyDual) != 0) {
    nn::diag::detail::AbortImpl();
  }
  else if ((style._storage[0] & NpadStyleJoyLeft) != 0) {
    lifoOffset = 0x3378;
  }
  else {
    lifoOffset = 0x3a80;
  }
  const NpadLifo<SixAxisSensorState>* pLifo =
    reinterpret_cast<const NpadLifo<SixAxisSensorState>*>(
      static_cast<const uint8_t*>(pState) + lifoOffset);
  *pOutCount = pLifo->Read(pOutStates, count);
  return Result{};
}

Result GetSixAxisSensorRightStates(int* pOutCount,
  SixAxisSensorState* pOutStates, int count, const NpadIdType& id,
  NpadStyleSet style) {
  NpadSharedMemoryAccessor* pAccessor = GetNpadSharedMemoryAccessor();
  if (pAccessor == nullptr) {
    return ResultNpadNotInitialized;
  }
  NN_ABORT_UNLESS((style._storage[0] & NpadStyleJoyDual) != 0);
  return ReadNpadStates(pAccessor, pOutCount, pOutStates, count, id,
    0x2c70);
}

Result GetSixAxisSensorLeftStates(int* pOutCount,
  SixAxisSensorState* pOutStates, int count, const NpadIdType& id,
  NpadStyleSet style) {
  NpadSharedMemoryAccessor* pAccessor = GetNpadSharedMemoryAccessor();
  if (pAccessor == nullptr) {
    return ResultNpadNotInitialized;
  }
  NN_ABORT_UNLESS((style._storage[0] & NpadStyleJoyDual) != 0);
  return ReadNpadStates(pAccessor, pOutCount, pOutStates, count, id,
    0x2568);
}

}
