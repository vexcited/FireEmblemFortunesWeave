#include "nn/hid/detail/hid_abort.hpp"
#include "nn/hid/detail/hid_npad_id.hpp"
#include "nn/hid/detail/hid_utility.hpp"
#include "nn/util/string_util.hpp"

namespace nn::detail {

[[noreturn]] void UnexpectedDefaultImpl();

}

namespace nn::hid::utility {

struct SixAxisSensorHandleIdxForNpad {
  uint8_t index;
};

namespace {

constexpr Result ResultMouseInvalidHandle = {0x84ca};
constexpr Result ResultSixAxisSensorInvalidIndex = {0xd6ca};
constexpr Result ResultJcmsInvalidNpadId = {0x285aca};
constexpr Result ResultJcmsInvalidType = {0x285cca};

constexpr uint32_t ConsoleSixAxisSensorTypeValue = 19;
constexpr int SixAxisSensorNpadStyleIndexBase = 3;
constexpr int SixAxisSensorIndexCount = 3;

constexpr int VibrationDeviceIdxTable[] = {0, 0, 1};

// Full key and the system styles share the first sensor, dual joy-cons
// pick theirs from the hold type.
Result GetSixAxisSensorHandleIdx(SixAxisSensorHandleIdxForNpad* pOut,
  uint32_t style, int holdType) {
  if ((style & 0x21) != 0) {
    pOut->index = 0;
    return Result{};
  }
  if ((style & 0x2) != 0) {
    pOut->index = 1;
    return Result{};
  }
  if ((style & 0x4) != 0) {
    if (holdType == 0) {
      pOut->index = 2;
      return Result{};
    }
    if (holdType == 1) {
      pOut->index = 3;
      return Result{};
    }
  }
  if ((style & 0x8) != 0) {
    pOut->index = 4;
    return Result{};
  }
  if ((style & 0x10) != 0) {
    pOut->index = 5;
    return Result{};
  }
  return ResultSixAxisSensorInvalidIndex;
}

}

Result GetSixAxisSensorHandleIdxForNpad(SixAxisSensorHandleIdxForNpad* pOut,
  const util::BitFlagSet<32, NpadStyleTag>& style, const int& holdType) {
  return GetSixAxisSensorHandleIdx(pOut, style._storage[0], holdType);
}

// The handle keeps the style index in its low byte and the hold type in its
// third byte.
Result GetSixAxisSensorHandleIdxForNpad(SixAxisSensorHandleIdxForNpad* pOut,
  const SixAxisSensorHandle& handle) {
  const uint32_t style = 1u << ((handle._storage +
    (32 - SixAxisSensorNpadStyleIndexBase)) & 31);
  return GetSixAxisSensorHandleIdx(pOut, style,
    static_cast<uint8_t>(handle._storage >> 16));
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

// Dual joy-cons get one handle per controller, the other styles one handle
// of the type that matches their sensor.
Result GetSixAxisSensorHandle(SixAxisSensorHandle* pOutHandles,
  int* pOutCount, int count, NpadIdType id, NpadStyleSet style) {
  NN_ABORT_UNLESS_NOT_NULL(pOutHandles);
  NN_ABORT_UNLESS_NOT_NULL(pOutCount);
  NN_ABORT_UNLESS(count > 0);
  NN_RESULT_DO(hid::detail::VerifyValidNpadId(id));
  const uint32_t bits = style._storage[0];
  if ((bits & 0x1) != 0) {
    pOutHandles[0] = MakeSixAxisSensorHandle(3, id, 2);
    *pOutCount = 1;
  }
  else if ((bits & 0x2) != 0) {
    pOutHandles[0] = MakeSixAxisSensorHandle(4, id, 2);
    *pOutCount = 1;
  }
  else if ((bits & 0x1004) != 0) {
    pOutHandles[0] = MakeSixAxisSensorHandle(5, id, 0);
    *pOutCount = 1;
    if (count != 1) {
      pOutHandles[1] = MakeSixAxisSensorHandle(5, id, 1);
      *pOutCount += 1;
    }
  }
  else if ((bits & 0x2008) != 0) {
    pOutHandles[0] = MakeSixAxisSensorHandle(6, id, 0);
    *pOutCount = 1;
  }
  else if ((bits & 0x4010) != 0) {
    pOutHandles[0] = MakeSixAxisSensorHandle(7, id, 1);
    *pOutCount = 1;
  }
  else if ((bits & 0x20) != 0) {
    pOutHandles[0] = MakeSixAxisSensorHandle(3, id, 2);
    *pOutCount = 1;
  }
  else if ((bits & 0xe80) != 0) {
    *pOutCount = 0;
  }
  else if ((bits & 0x100) != 0) {
    pOutHandles[0] = MakeSixAxisSensorHandle(4, id, 2);
    *pOutCount = 1;
  }
  else if ((bits & 0x60000040) == 0x40) {
    pOutHandles[0] = MakeSixAxisSensorHandle(3, id, 2);
    *pOutCount = 1;
  }
  else {
    *pOutCount = 0;
  }
  return Result{};
}

namespace {

// Styles with two motors report the left one first, the right one only when
// there is room for it.
Result SetVibrationDeviceHandles(VibrationDeviceHandle* pOutHandles,
  int* pOutCount, int count, NpadIdType id, uint8_t typeValue,
  bool hasTwoDevices) {
  const uint32_t base = typeValue |
    static_cast<uint32_t>(static_cast<uint8_t>(id)) << 8;
  pOutHandles[0] = VibrationDeviceHandle{base};
  *pOutCount = 1;
  if (hasTwoDevices && count >= 2) {
    pOutHandles[1] = VibrationDeviceHandle{base | 1 << 16};
    *pOutCount += 1;
  }
  return Result{};
}

}

Result GetVibrationDeviceHandles(VibrationDeviceHandle* pOutHandles,
  int* pOutCount, int count, NpadIdType id, NpadStyleSet style) {
  NN_RESULT_DO(hid::detail::VerifyValidNpadId(id));
  const uint32_t bits = style._storage[0];
  if ((bits & 0x1) != 0) {
    return SetVibrationDeviceHandles(pOutHandles, pOutCount, count, id, 3,
      true);
  }
  if ((bits & 0x2) != 0) {
    return SetVibrationDeviceHandles(pOutHandles, pOutCount, count, id, 4,
      true);
  }
  if ((bits & 0x1004) != 0) {
    return SetVibrationDeviceHandles(pOutHandles, pOutCount, count, id, 5,
      true);
  }
  if ((bits & 0x2008) != 0) {
    pOutHandles[0] = VibrationDeviceHandle{6 |
      static_cast<uint32_t>(static_cast<uint8_t>(id)) << 8};
    *pOutCount = 1;
    return Result{};
  }
  if ((bits & 0x4010) != 0) {
    pOutHandles[0] = VibrationDeviceHandle{7 |
      static_cast<uint32_t>(static_cast<uint8_t>(id)) << 8 | 1 << 16};
    *pOutCount = 1;
    return Result{};
  }
  if ((bits & 0x20) != 0) {
    return SetVibrationDeviceHandles(pOutHandles, pOutCount, count, id, 8,
      false);
  }
  if ((bits & 0x400) != 0) {
    return SetVibrationDeviceHandles(pOutHandles, pOutCount, count, id, 0xd,
      false);
  }
  if ((bits & 0x100) != 0) {
    return SetVibrationDeviceHandles(pOutHandles, pOutCount, count, id, 4,
      true);
  }
  if ((bits & 0x40000000) != 0) {
    return SetVibrationDeviceHandles(pOutHandles, pOutCount, count, id, 0x21,
      true);
  }
  if ((bits & 0x20000000) != 0) {
    return SetVibrationDeviceHandles(pOutHandles, pOutCount, count, id, 0x20,
      true);
  }
  *pOutCount = 0;
  return Result{};
}

namespace {

// The version bytes come first, then a short device identifier.
constexpr size_t FirmwareVersionIdentifierOffset = 4;
constexpr int FirmwareVersionIdentifierSize = 4;

const char* GetIdentifier(const system::FirmwareVersion& version) {
  return reinterpret_cast<const char*>(version._storage +
    FirmwareVersionIdentifierOffset);
}

}

// Some devices number their firmware in hexadecimal, others in decimal.
void ConvertFirmwareVersionToStringType(system::FirmwareVersionString* pOut,
  const system::FirmwareVersion& version,
  const util::BitFlagSet<32, system::DeviceType>& deviceType) {
  const uint32_t bits = deviceType._storage[0];
  const char* format = (bits & 0x3c) != 0 || (bits & 0x13c0000) == 0 ?
    "%02x.%02x.%02x.%02x" : "%02d.%02d.%02d.%02d";
  const int length = util::Strlcpy(pOut->string, GetIdentifier(version),
    FirmwareVersionIdentifierSize);
  util::SNPrintf(pOut->string + length, sizeof(pOut->string) - length,
    format, version._storage[0], version._storage[1], version._storage[2],
    version._storage[3]);
}

void ConvertFirmwareVersionToFullFormatStringType(
  debug::FirmwareVersionFullFormatString* pOut,
  const system::FirmwareVersion* pVersions, int count) {
  const int length = util::Strlcpy(pOut->string, GetIdentifier(pVersions[0]),
    FirmwareVersionIdentifierSize);
  char* pCursor = pOut->string + length;
  size_t remaining = sizeof(pOut->string) - length;
  for (int i = 0; i < count; i++) {
    const int written = util::SNPrintf(pCursor, remaining,
      "/%02d.%02d.%02d.%02d", pVersions[i]._storage[0],
      pVersions[i]._storage[1], pVersions[i]._storage[2],
      pVersions[i]._storage[3]);
    pCursor += written;
    remaining -= written;
  }
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
