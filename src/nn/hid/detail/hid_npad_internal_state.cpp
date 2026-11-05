#include <atomic>
#include <stddef.h>
#include <stdint.h>

#include "nn/hid/detail/hid_abort.hpp"
#include "nn/hid/detail/hid_api.hpp"

namespace nn::hid::utility {

struct SixAxisSensorHandleIdxForNpad {
  uint8_t index;
};

}

namespace nn::hid::detail {

class NpadSharedMemoryAccessor;

struct NpadCondition {
  uint32_t lastActiveNpadId;
  bool isLastActiveNpadValid;
};

NpadSharedMemoryAccessor* GetNpadSharedMemoryAccessor();

class NpadSharedMemoryAccessor {
 public:
  const void* GetInternalState(NpadIdType id) const;
  const NpadCondition* GetNpadCondition() const;
};

Result IsSlSrButtonOriented(bool* pOutValue, const NpadIdType& id);
Result GetPlusMinusButtonCapability(bool* pOutPlus, bool* pOutMinus,
  const NpadIdType& id);
Result IsDirectionalButtonsSupported(bool* pOutValue, const NpadIdType& id);
Result GetNpadDeviceType(util::BitFlagSet<32, system::DeviceType>* pOutValue,
  const NpadIdType& id);
Result GetAppletFooterUiTypes(system::AppletFooterUiType* pOutValue,
  const NpadIdType& id);
Result GetAppletFooterUiAttributesSet(
  util::BitFlagSet<32, system::AppletFooterUiAttribute>* pOutValue,
  const NpadIdType& id);
Result GetGlCapability(bool* pOutValue, const NpadIdType& id);
Result GetGrCapability(bool* pOutValue, const NpadIdType& id);
Result GetCButtonCapability(bool* pOutValue, const NpadIdType& id);
Result GetNpadSkuTypeForControllerSupport(uint8_t* pOutValue,
  const NpadIdType& id);
Result GetNpadSkuTypeForControllerSupport(uint8_t* pOutValue,
  uint8_t* pOutSubValue, const NpadIdType& id);
Result IsSixAxisSensorDeviceNewlyAssignedFromSharedMemory(bool* pOutValue,
  const NpadIdType& id, const utility::SixAxisSensorHandleIdxForNpad& index);
Result IsFirmwareUpdateAvailableForSixAxisSensorFromSharedMemory(
  bool* pOutValue, const NpadIdType& id,
  const utility::SixAxisSensorHandleIdxForNpad& index);

namespace {

constexpr Result ResultNpadNotInitialized = {0x58aca};
constexpr Result ResultNpadInvalidInternalState = {0x58cca};
constexpr Result ResultNoLastActiveNpad = {0x5deca};

constexpr size_t NpadDeviceTypeOffset = 0x4188;
constexpr size_t NpadAttributesOffset = 0x4190;
constexpr size_t NpadHomeProtectionOffset = 0x4198;
constexpr size_t NpadFooterUiAttributesOffset = 0x41a8;
constexpr size_t NpadFooterUiTypeOffset = 0x41ac;
constexpr size_t NpadLagerTypeOffset = 0x43ec;
constexpr size_t NpadSixAxisSensorFlagsOffset = 0x43f0;
constexpr size_t NpadGcStyleControllerTypeOffset = 0x43f8;
constexpr size_t NpadSkuTypeOffset = 0x43fc;

constexpr uint64_t NpadAttribute_IsSlSrButtonOriented = 1ull << 12;
constexpr uint64_t NpadAttribute_IsPlusAvailable = 1ull << 13;
constexpr uint64_t NpadAttribute_IsMinusAvailable = 1ull << 14;
constexpr uint64_t NpadAttribute_IsGlAvailable = 1ull << 16;
constexpr uint64_t NpadAttribute_IsGrAvailable = 1ull << 17;
constexpr uint64_t NpadAttribute_IsCButtonAvailable = 1ull << 18;
constexpr uint64_t NpadAttribute_IsDirectionalButtonsSupported = 1ull << 63;

constexpr uint8_t SixAxisSensorFlag_IsNewlyAssigned = 1u << 0;
constexpr uint8_t SixAxisSensorFlag_IsFirmwareUpdateAvailable = 1u << 1;

template <typename T>
T LoadField(const void* pState, size_t offset) {
  return reinterpret_cast<const std::atomic<T>*>(
    static_cast<const uint8_t*>(pState) + offset)->load();
}

Result GetInternalState(const void** pOutState, const NpadIdType& id) {
  NpadSharedMemoryAccessor* pAccessor = GetNpadSharedMemoryAccessor();
  if (pAccessor == nullptr) {
    return ResultNpadNotInitialized;
  }

  const void* pState = pAccessor->GetInternalState(id);
  if (pState == nullptr) {
    return ResultNpadInvalidInternalState;
  }

  *pOutState = pState;
  return {};
}

Result GetAttribute(bool* pOutValue, const NpadIdType& id, uint64_t mask) {
  const void* pState;
  NN_RESULT_DO(GetInternalState(&pState, id));

  *pOutValue = (LoadField<uint64_t>(pState, NpadAttributesOffset) & mask) != 0;
  return {};
}

}

Result GetNpadDeviceType(util::BitFlagSet<32, system::DeviceType>* pOutValue,
  const NpadIdType& id) {
  const void* pState;
  NN_RESULT_DO(GetInternalState(&pState, id));

  pOutValue->_storage[0] = LoadField<uint32_t>(pState, NpadDeviceTypeOffset);
  return {};
}

Result GetLastActiveNpadController(unsigned int* pOutId) {
  NpadCondition condition = *GetNpadSharedMemoryAccessor()->GetNpadCondition();
  if (!condition.isLastActiveNpadValid) {
    return ResultNoLastActiveNpad;
  }

  *pOutId = condition.lastActiveNpadId;
  return {};
}

Result IsSlSrButtonOriented(bool* pOutValue, const NpadIdType& id) {
  return GetAttribute(pOutValue, id, NpadAttribute_IsSlSrButtonOriented);
}

Result GetPlusMinusButtonCapability(bool* pOutPlus, bool* pOutMinus,
  const NpadIdType& id) {
  const void* pState;
  NN_RESULT_DO(GetInternalState(&pState, id));

  *pOutPlus = (LoadField<uint64_t>(pState, NpadAttributesOffset) &
    NpadAttribute_IsPlusAvailable) != 0;
  *pOutMinus = (LoadField<uint64_t>(pState, NpadAttributesOffset) &
    NpadAttribute_IsMinusAvailable) != 0;
  return {};
}

Result IsDirectionalButtonsSupported(bool* pOutValue, const NpadIdType& id) {
  return GetAttribute(pOutValue, id,
    NpadAttribute_IsDirectionalButtonsSupported);
}

Result IsUnintendedHomeButtonInputProtectionEnabled(bool* pOutValue,
  const NpadIdType& id) {
  const void* pState;
  NN_RESULT_DO(GetInternalState(&pState, id));

  // The shared memory stores the disabled state.
  *pOutValue = (LoadField<uint32_t>(pState, NpadHomeProtectionOffset) & 1) ==
    0;
  return {};
}

Result GetAppletFooterUiTypes(system::AppletFooterUiType* pOutValue,
  const NpadIdType& id) {
  const void* pState;
  NN_RESULT_DO(GetInternalState(&pState, id));

  *pOutValue = static_cast<system::AppletFooterUiType>(
    LoadField<uint8_t>(pState, NpadFooterUiTypeOffset));
  return {};
}

Result GetAppletFooterUiAttributesSet(
  util::BitFlagSet<32, system::AppletFooterUiAttribute>* pOutValue,
  const NpadIdType& id) {
  const void* pState;
  NN_RESULT_DO(GetInternalState(&pState, id));

  pOutValue->_storage[0] =
    LoadField<uint32_t>(pState, NpadFooterUiAttributesOffset);
  return {};
}

Result GetNpadLagerType(NpadLagerType* pOutValue, const NpadIdType& id) {
  const void* pState;
  NN_RESULT_DO(GetInternalState(&pState, id));

  uint32_t type = LoadField<uint32_t>(pState, NpadLagerTypeOffset);
  if (type - 1 >= 3) {
    type = 0;
  }

  *pOutValue = static_cast<NpadLagerType>(type);
  return {};
}

Result GetGcStyleControllerType(GcStyleControllerType* pOutValue,
  const NpadIdType& id) {
  const void* pState;
  NN_RESULT_DO(GetInternalState(&pState, id));

  uint32_t type = LoadField<uint32_t>(pState, NpadGcStyleControllerTypeOffset);
  int value = type == 2 ? 2 : type == 1 ? 1 : 0;
  *pOutValue = static_cast<GcStyleControllerType>(value);
  return {};
}

Result GetGlCapability(bool* pOutValue, const NpadIdType& id) {
  return GetAttribute(pOutValue, id, NpadAttribute_IsGlAvailable);
}

Result GetGrCapability(bool* pOutValue, const NpadIdType& id) {
  return GetAttribute(pOutValue, id, NpadAttribute_IsGrAvailable);
}

Result GetCButtonCapability(bool* pOutValue, const NpadIdType& id) {
  return GetAttribute(pOutValue, id, NpadAttribute_IsCButtonAvailable);
}

Result GetNpadSkuTypeForControllerSupport(uint8_t* pOutValue,
  const NpadIdType& id) {
  const void* pState;
  NN_RESULT_DO(GetInternalState(&pState, id));

  *pOutValue = LoadField<uint8_t>(pState, NpadSkuTypeOffset);
  return {};
}

Result GetNpadSkuTypeForControllerSupport(uint8_t* pOutValue,
  uint8_t* pOutSubValue, const NpadIdType& id) {
  const void* pState;
  NN_RESULT_DO(GetInternalState(&pState, id));

  *pOutValue = LoadField<uint8_t>(pState, NpadSkuTypeOffset);
  *pOutSubValue = LoadField<uint8_t>(pState, NpadSkuTypeOffset + 1);
  return {};
}

Result IsSixAxisSensorDeviceNewlyAssignedFromSharedMemory(bool* pOutValue,
  const NpadIdType& id, const utility::SixAxisSensorHandleIdxForNpad& index) {
  const void* pState;
  NN_RESULT_DO(GetInternalState(&pState, id));

  *pOutValue = (LoadField<uint8_t>(pState,
    NpadSixAxisSensorFlagsOffset + index.index) &
    SixAxisSensorFlag_IsNewlyAssigned) != 0;
  return {};
}

Result IsFirmwareUpdateAvailableForSixAxisSensorFromSharedMemory(
  bool* pOutValue, const NpadIdType& id,
  const utility::SixAxisSensorHandleIdxForNpad& index) {
  const void* pState;
  NN_RESULT_DO(GetInternalState(&pState, id));

  *pOutValue = (LoadField<uint8_t>(pState,
    NpadSixAxisSensorFlagsOffset + index.index) &
    SixAxisSensorFlag_IsFirmwareUpdateAvailable) != 0;
  return {};
}

}
