#include "nn/hid/detail/hid_abort.hpp"
#include "nn/hid/detail/hid_npad_id.hpp"
#include "nn/hid/detail/hid_utility.hpp"

namespace nn::detail {

[[noreturn]] void UnexpectedDefaultImpl();

}

namespace nn::hid::utility {

namespace {

constexpr Result ResultMouseInvalidHandle = {0x84ca};
constexpr Result ResultSixAxisSensorInvalidIndex = {0xd6ca};
constexpr Result ResultJcmsInvalidNpadId = {0x285aca};
constexpr Result ResultJcmsInvalidType = {0x285cca};

constexpr uint32_t ConsoleSixAxisSensorTypeValue = 19;
constexpr int SixAxisSensorNpadStyleIndexBase = 3;
constexpr int SixAxisSensorIndexCount = 3;

constexpr int VibrationDeviceIdxTable[] = {0, 0, 1};

}

Result VerifyValidMouseHandle(const MouseHandle& handle) {
  if (static_cast<uint8_t>(handle._storage) > 1) {
    return ResultMouseInvalidHandle;
  }
  return Result{};
}

MouseTypeIdx GetMouseHandleTypeIdx(const MouseHandle& handle) {
  return static_cast<MouseTypeIdx>(handle._storage);
}

MouseHandle GetMouseHandle(MouseTypeIdx index) {
  return MouseHandle{static_cast<uint8_t>(index)};
}

ConsoleSixAxisSensorHandle MakeConsoleSixAxisSensorHandle(uint8_t typeValue,
  int index) {
  return ConsoleSixAxisSensorHandle{
    typeValue | static_cast<uint32_t>(static_cast<uint8_t>(index)) << 8};
}

uint32_t GetConsoleSixAxisSensorTypeValue(
  const ConsoleSixAxisSensorHandle& handle) {
  return handle._storage;
}

void GetConsoleSixAxisSensorHandle(ConsoleSixAxisSensorHandle* pOutHandle) {
  NN_ABORT_UNLESS_NOT_NULL(pOutHandle);
  pOutHandle->_storage = ConsoleSixAxisSensorTypeValue;
}

SixAxisSensorHandle MakeSixAxisSensorHandle(uint8_t typeValue,
  int playerNumber, int index) {
  return SixAxisSensorHandle{typeValue |
    static_cast<uint32_t>(static_cast<uint8_t>(playerNumber)) << 8 |
    static_cast<uint32_t>(static_cast<uint8_t>(index)) << 16};
}

uint32_t GetSixAxisSensorHandleTypeValue(const SixAxisSensorHandle& handle) {
  return handle._storage;
}

int GetSixAxisSensorHandleNpadStyleIndex(const SixAxisSensorHandle& handle) {
  return static_cast<uint8_t>(handle._storage) -
    SixAxisSensorNpadStyleIndexBase;
}

int GetSixAxisSensorHandlePlayerNumber(const SixAxisSensorHandle& handle) {
  return static_cast<uint8_t>(handle._storage >> 8);
}

NpadIdType GetSixAxisSensorHandleNpadIdType(
  const SixAxisSensorHandle& handle) {
  return static_cast<uint8_t>(handle._storage >> 8);
}

int GetSixAxisSensorHandleSixAxisSensorIdx(const SixAxisSensorHandle& handle) {
  return static_cast<uint8_t>(handle._storage >> 16);
}

Result VerifyValidSixAxisSensorHandle(const SixAxisSensorHandle& handle) {
  NN_RESULT_DO(hid::detail::VerifyValidNpadId(
    GetSixAxisSensorHandleNpadIdType(handle)));
  if (GetSixAxisSensorHandleSixAxisSensorIdx(handle) >=
    SixAxisSensorIndexCount) {
    return ResultSixAxisSensorInvalidIndex;
  }
  return Result{};
}

int GetVibrationDeviceIdxFromPosition(VibrationDevicePosition position) {
  switch (position) {
    case VibrationDevicePosition_None:
    case VibrationDevicePosition_Left:
    case VibrationDevicePosition_Right:
      return VibrationDeviceIdxTable[position];
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
}

VibrationDevicePosition GetVibrationDevicePositionFromIdx(
  VibrationDeviceType type, NpadVibrationDeviceIdx index) {
  if (type != VibrationDeviceType_LinearResonantActuator) {
    return VibrationDevicePosition_None;
  }
  switch (index) {
    case 0:
      return VibrationDevicePosition_Left;
    case 1:
      return VibrationDevicePosition_Right;
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
}

VibrationDeviceHandle MakeVibrationDeviceHandle(uint8_t typeValue,
  int playerNumber, int index) {
  return VibrationDeviceHandle{typeValue |
    static_cast<uint32_t>(static_cast<uint8_t>(playerNumber)) << 8 |
    static_cast<uint32_t>(static_cast<uint8_t>(index)) << 16};
}

uint32_t GetVibrationDeviceHandleNpadTypeValue(
  const VibrationDeviceHandle& handle) {
  return handle._storage;
}

int GetVibrationDeviceHandlePlayerNumber(const VibrationDeviceHandle& handle) {
  return static_cast<uint8_t>(handle._storage >> 8);
}

int GetVibrationDeviceHandleDeviceIdx(const VibrationDeviceHandle& handle) {
  return static_cast<uint8_t>(handle._storage >> 16);
}

Result VerifyValidJcmsNpadId(NpadIdType id) {
  if (id >= 8) {
    return ResultJcmsInvalidNpadId;
  }
  return Result{};
}

Result VerifyValidJcmsType(JcmsType type) {
  if (type > 1) {
    return ResultJcmsInvalidType;
  }
  return Result{};
}

JcmsHandle MakeJcmsHandle(NpadIdType id, JcmsType type) {
  return JcmsHandle{static_cast<uint8_t>(id) |
    static_cast<uint32_t>(type) << 8};
}

NpadIdType GetJcmsHandleNpadIdType(const JcmsHandle& handle) {
  return static_cast<uint8_t>(handle._storage);
}

JcmsType GetJcmsType(const JcmsHandle& handle) {
  return static_cast<JcmsType>(handle._storage >> 8);
}

Result VerifyValidJcmsHandle(const JcmsHandle& handle) {
  NN_RESULT_DO(VerifyValidJcmsNpadId(GetJcmsHandleNpadIdType(handle)));
  return VerifyValidJcmsType(GetJcmsType(handle));
}

uint8_t GetJcmsIndex(NpadIdType id, JcmsType type) {
  return static_cast<uint8_t>(id * 2 + type);
}

uint8_t GetJcmsIndex(JcmsHandle handle) {
  return GetJcmsIndex(handle._storage, GetJcmsType(handle));
}

}
