#include <atomic>
#include <stddef.h>

#include "nn/diag/unexpected_default.hpp"
#include "nn/hid/detail/hid_abort.hpp"
#include "nn/hid/detail/hid_api.hpp"
#include "nn/hid/detail/hid_npad_shared_memory_accessor.hpp"

// Every failed requirement keeps its own abort call in the original.
#define NN_SDK_REQUIRES_NOT_NULL(pointer) \
  do { \
    if (!::nn::diag::detail::NotNullImpl( \
      reinterpret_cast<uintptr_t>(pointer))) { \
      [[clang::nomerge]] ::nn::diag::detail::AbortImpl(); \
    } \
  } while (false)

namespace nn::hid::detail {

struct NpadConditionState {
  uint32_t lastActiveNpadId;
  bool isLastActiveNpadValid;
  NpadJoyHoldType joyHoldType;
  bool isJoyHoldTypeValid;
};

namespace {

constexpr Result ResultNpadNotInitialized = {0x58aca};
constexpr Result ResultNpadInvalidInternalState = {0x58cca};
constexpr Result ResultNpadColorNotAvailable = {0x4b6ca};
constexpr Result ResultNpadColorInvalid = {0x4b8ca};

enum ColorAttribute {
  ColorAttribute_Ok,
  ColorAttribute_ReadError,
  ColorAttribute_NoController,
};

constexpr size_t NpadStyleSetOffset = 0x0;
constexpr size_t NpadJoyAssignmentModeOffset = 0x4;
constexpr size_t NpadSingleColorAttributeOffset = 0x8;
constexpr size_t NpadSingleColorOffset = 0xc;
constexpr size_t NpadDualColorAttributeOffset = 0x14;
constexpr size_t NpadLeftColorOffset = 0x18;
constexpr size_t NpadRightColorOffset = 0x20;
constexpr size_t NpadSystemPropertiesOffset = 0x4190;
constexpr size_t NpadBatteryLevelDualOffset = 0x419c;
constexpr size_t NpadBatteryLevelLeftOffset = 0x41a0;
constexpr size_t NpadBatteryLevelRightOffset = 0x41a4;
constexpr size_t NpadDecorationColorAttributeOffset = 0x4400;
constexpr size_t NpadLeftDecorationColorOffset = 0x4404;
constexpr size_t NpadRightDecorationColorOffset = 0x4414;

constexpr uint64_t NpadSystemProperty_IsChargingJoyDual = 1ull << 0;
constexpr uint64_t NpadSystemProperty_IsChargingJoyLeft = 1ull << 1;
constexpr uint64_t NpadSystemProperty_IsChargingJoyRight = 1ull << 2;
constexpr uint64_t NpadSystemProperty_IsPoweredJoyDual = 1ull << 3;
constexpr uint64_t NpadSystemProperty_IsPoweredJoyLeft = 1ull << 4;
constexpr uint64_t NpadSystemProperty_IsPoweredJoyRight = 1ull << 5;
constexpr uint64_t NpadSystemProperty_IsUnsupportedButtonPressedOnNpadSystem =
  1ull << 9;
constexpr uint64_t
  NpadSystemProperty_IsUnsupportedButtonPressedOnNpadSystemExt = 1ull << 10;
constexpr uint64_t NpadSystemProperty_IsAbxyButtonOriented = 1ull << 11;

constexpr uint32_t NpadStyleFullKey = 1u << 0;
constexpr uint32_t NpadStyleHandheld = 1u << 1;
constexpr uint32_t NpadStyleJoyDual = 1u << 2;
constexpr uint32_t NpadStyleJoyLeft = 1u << 3;
constexpr uint32_t NpadStyleJoyRight = 1u << 4;
constexpr uint32_t NpadStyleHandheldLark = 1u << 12;
constexpr uint32_t NpadStyleLarkLeft = 1u << 13;
constexpr uint32_t NpadStyleLarkRight = 1u << 14;
constexpr uint32_t NpadStyleSystem = 1u << 29;
constexpr uint32_t NpadStyleSystemExt = 1u << 30;

template <typename T>
T LoadAtomic(const NpadInternalState* pState, size_t offset) {
  return reinterpret_cast<const std::atomic<T>*>(
    reinterpret_cast<const uint8_t*>(pState) + offset)->load();
}

template <typename T>
const T& GetField(const NpadInternalState* pState, size_t offset) {
  return *reinterpret_cast<const T*>(
    reinterpret_cast<const uint8_t*>(pState) + offset);
}

Result GetInternalState(const NpadInternalState** pOutState,
  const NpadIdType& id) {
  NpadSharedMemoryAccessor* pAccessor = GetNpadSharedMemoryAccessor();
  if (pAccessor == nullptr) {
    return ResultNpadNotInitialized;
  }
  const NpadInternalState* pState = pAccessor->GetInternalState(id);
  if (pState == nullptr) {
    return ResultNpadInvalidInternalState;
  }
  *pOutState = pState;
  return Result{};
}

Result VerifyColorAttribute(int attribute) {
  switch (attribute) {
    case ColorAttribute_Ok:
      return Result{};
    case ColorAttribute_ReadError:
      return ResultNpadColorNotAvailable;
    case ColorAttribute_NoController:
      return ResultNpadColorInvalid;
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
}

int ConvertBatteryLevel(int batteryLevel) {
  switch (batteryLevel) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
      return batteryLevel;
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
}

void GetPowerInfo(system::PowerInfo* pOutValue,
  const NpadInternalState* pState, size_t batteryOffset, uint64_t powered,
  uint64_t charging) {
  system::PowerInfo info = {};
  info.batteryLevel = ConvertBatteryLevel(
    LoadAtomic<int32_t>(pState, batteryOffset));
  info.isPowered = (LoadAtomic<uint64_t>(pState,
    NpadSystemPropertiesOffset) & powered) != 0;
  info.isCharging = (LoadAtomic<uint64_t>(pState,
    NpadSystemPropertiesOffset) & charging) != 0;
  *pOutValue = info;
}

}

Result GetNpadStyleSet(util::BitFlagSet<32, NpadStyleTag>* pOutValue,
  const NpadIdType& id) {
  const NpadInternalState* pState;
  NN_RESULT_DO(GetInternalState(&pState, id));
  pOutValue->_storage[0] = LoadAtomic<uint32_t>(pState, NpadStyleSetOffset);
  return Result{};
}

Result GetNpadJoyAssignment(NpadJoyAssignmentMode* pOutValue,
  const NpadIdType& id) {
  const NpadInternalState* pState;
  NN_RESULT_DO(GetInternalState(&pState, id));
  const uint32_t mode =
    LoadAtomic<uint32_t>(pState, NpadJoyAssignmentModeOffset);
  switch (mode) {
    case NpadJoyAssignmentMode_Dual:
    case NpadJoyAssignmentMode_Single:
      *pOutValue = static_cast<NpadJoyAssignmentMode>(mode);
      return Result{};
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
}

Result GetNpadJoyHoldType(NpadJoyHoldType* pOutValue) {
  const NpadConditionState* pCondition =
    GetNpadSharedMemoryAccessor()->GetNpadCondition();
  if (!pCondition->isJoyHoldTypeValid) {
    return ResultNpadInvalidInternalState;
  }
  *pOutValue = pCondition->joyHoldType;
  return Result{};
}

Result GetNpadControllerColor(NpadControllerColor* pOutValue,
  const NpadIdType& id) {
  NN_SDK_REQUIRES_NOT_NULL(pOutValue);
  const NpadInternalState* pState;
  NN_RESULT_DO(GetInternalState(&pState, id));
  NN_RESULT_DO(VerifyColorAttribute(
    GetField<int32_t>(pState, NpadSingleColorAttributeOffset)));
  *pOutValue = GetField<NpadControllerColor>(pState, NpadSingleColorOffset);
  return Result{};
}

Result GetNpadControllerColor(NpadControllerColor* pOutLeft,
  NpadControllerColor* pOutRight, const NpadIdType& id) {
  NN_SDK_REQUIRES_NOT_NULL(pOutLeft);
  NN_SDK_REQUIRES_NOT_NULL(pOutRight);
  const NpadInternalState* pState;
  NN_RESULT_DO(GetInternalState(&pState, id));
  NN_RESULT_DO(VerifyColorAttribute(
    GetField<int32_t>(pState, NpadDualColorAttributeOffset)));
  *pOutLeft = GetField<NpadControllerColor>(pState, NpadLeftColorOffset);
  *pOutRight = GetField<NpadControllerColor>(pState, NpadRightColorOffset);
  return Result{};
}

Result GetNpadJoyIconDecorationColor(NpadJoyIconDecorationColor* pOutValue,
  const NpadIdType& id) {
  NN_SDK_REQUIRES_NOT_NULL(pOutValue);
  const NpadInternalState* pState;
  NN_RESULT_DO(GetInternalState(&pState, id));
  const uint32_t style = LoadAtomic<uint32_t>(pState, NpadStyleSetOffset);
  size_t offset;
  if ((style & (NpadStyleJoyLeft | NpadStyleLarkLeft)) != 0) {
    offset = NpadLeftDecorationColorOffset;
  }
  else if ((style & (NpadStyleJoyRight | NpadStyleLarkRight)) != 0) {
    offset = NpadRightDecorationColorOffset;
  }
  else {
    return ResultNpadColorNotAvailable;
  }
  NN_RESULT_DO(VerifyColorAttribute(
    GetField<int32_t>(pState, NpadDecorationColorAttributeOffset)));
  *pOutValue = GetField<NpadJoyIconDecorationColor>(pState, offset);
  return Result{};
}

Result GetNpadJoyIconDecorationColor(NpadJoyIconDecorationColor* pOutLeft,
  NpadJoyIconDecorationColor* pOutRight, const NpadIdType& id) {
  NN_SDK_REQUIRES_NOT_NULL(pOutLeft);
  NN_SDK_REQUIRES_NOT_NULL(pOutRight);
  const NpadInternalState* pState;
  NN_RESULT_DO(GetInternalState(&pState, id));
  const uint32_t style = LoadAtomic<uint32_t>(pState, NpadStyleSetOffset);
  if ((style & (NpadStyleHandheld | NpadStyleJoyDual |
    NpadStyleHandheldLark)) == 0) {
    return ResultNpadColorNotAvailable;
  }
  NN_RESULT_DO(VerifyColorAttribute(
    GetField<int32_t>(pState, NpadDecorationColorAttributeOffset)));
  *pOutLeft = GetField<NpadJoyIconDecorationColor>(pState,
    NpadLeftDecorationColorOffset);
  *pOutRight = GetField<NpadJoyIconDecorationColor>(pState,
    NpadRightDecorationColorOffset);
  return Result{};
}

Result GetNpadPowerInfo(system::PowerInfo* pOutValue, const NpadIdType& id) {
  const NpadInternalState* pState;
  NN_RESULT_DO(GetInternalState(&pState, id));
  GetPowerInfo(pOutValue, pState, NpadBatteryLevelDualOffset,
    NpadSystemProperty_IsPoweredJoyDual,
    NpadSystemProperty_IsChargingJoyDual);
  return Result{};
}

Result GetNpadPowerInfo(system::PowerInfo* pOutLeft,
  system::PowerInfo* pOutRight, const NpadIdType& id) {
  const NpadInternalState* pState;
  NN_RESULT_DO(GetInternalState(&pState, id));
  GetPowerInfo(pOutLeft, pState, NpadBatteryLevelLeftOffset,
    NpadSystemProperty_IsPoweredJoyLeft,
    NpadSystemProperty_IsChargingJoyLeft);
  GetPowerInfo(pOutRight, pState, NpadBatteryLevelRightOffset,
    NpadSystemProperty_IsPoweredJoyRight,
    NpadSystemProperty_IsChargingJoyRight);
  return Result{};
}

Result IsUnsupportedButtonPressed(bool* pOutValue, const NpadIdType& id,
  const util::BitFlagSet<32, NpadStyleTag>& style) {
  const NpadInternalState* pState;
  NN_RESULT_DO(GetInternalState(&pState, id));
  uint64_t mask;
  if (style._storage[0] == NpadStyleSystemExt) {
    mask = NpadSystemProperty_IsUnsupportedButtonPressedOnNpadSystemExt;
  }
  else if (style._storage[0] == NpadStyleSystem) {
    mask = NpadSystemProperty_IsUnsupportedButtonPressedOnNpadSystem;
  }
  else {
    nn::diag::detail::AbortImpl();
  }
  *pOutValue =
    (LoadAtomic<uint64_t>(pState, NpadSystemPropertiesOffset) & mask) != 0;
  return Result{};
}

Result IsAbxyButtonOriented(bool* pOutValue, const NpadIdType& id) {
  const NpadInternalState* pState;
  NN_RESULT_DO(GetInternalState(&pState, id));
  *pOutValue = (LoadAtomic<uint64_t>(pState, NpadSystemPropertiesOffset) &
    NpadSystemProperty_IsAbxyButtonOriented) != 0;
  return Result{};
}

Result SetControlPadRestrictionType(util::BitFlagSet<32, NpadStyleTag> style,
  ControlPadRestrictionType type) {
  NpadSharedMemoryAccessor* pAccessor = GetNpadSharedMemoryAccessor();
  if (pAccessor == nullptr) {
    return ResultNpadNotInitialized;
  }
  pAccessor->SetControlPadRestrictionType(style, type);
  return Result{};
}

Result GetControlPadRestrictionType(util::BitFlagSet<32, NpadStyleTag> style,
  ControlPadRestrictionType* pOutValue) {
  NpadSharedMemoryAccessor* pAccessor = GetNpadSharedMemoryAccessor();
  if (pAccessor == nullptr) {
    return ResultNpadNotInitialized;
  }
  *pOutValue = pAccessor->GetControlPadRestrictionType(style);
  return Result{};
}

Result EnableControlPadRestriction(
  const util::BitFlagSet<32, NpadStyleTag>& style, bool isEnabled) {
  NpadSharedMemoryAccessor* pAccessor = GetNpadSharedMemoryAccessor();
  if (pAccessor == nullptr) {
    return ResultNpadNotInitialized;
  }
  pAccessor->EnableControlPadRestriction(style, isEnabled);
  return Result{};
}

}
