#include "nn/streamplay/detail/streamplay_hid_util.hpp"

namespace nn::streamplay::detail {

namespace {

constexpr uint32_t NpadStyleFullKey = 1u << 0;
constexpr uint32_t NpadStyleHandheld = 1u << 1;
constexpr uint32_t NpadStyleJoyDual = 1u << 2 | 1u << 12;
constexpr uint32_t NpadStyleJoyLeft = 1u << 3 | 1u << 13;
constexpr uint32_t NpadStyleJoyRight = 1u << 4 | 1u << 14;
constexpr uint32_t NpadStyleSupported = NpadStyleFullKey | NpadStyleHandheld |
  NpadStyleJoyDual | NpadStyleJoyLeft | NpadStyleJoyRight;

constexpr int GuestCountMax = 3;
constexpr int SensorCountMax = 8;
constexpr int DeviceCountMax = 2;

bool IsNpadIdValid(hid::NpadIdType id) {
  return id < 8 || id == 32;
}

}

bool IsGuestIdValid(GuestId id) {
  return id < GuestCountMax;
}

bool IsNpadIdTypeValid(const hid::NpadIdType& id) {
  return IsNpadIdValid(id);
}

bool IsGuestPadIdValid(const GuestPadId& id) {
  return IsNpadIdValid(id.npadId) && IsGuestIdValid(id.guestId);
}

bool IsNpadStyleSetValid(hid::NpadStyleSet style) {
  return (style._storage[0] & ~NpadStyleSupported) == 0;
}

bool IsNpadStyleIdentifierValid(hid::NpadStyleSet style) {
  if (style._storage[0] == 0) {
    return true;
  }

  return __builtin_popcount(style._storage[0] & NpadStyleSupported) == 1;
}

bool IsSensorIndexValid(int index) {
  return static_cast<unsigned int>(index) < SensorCountMax;
}

bool IsDeviceIndexValid(int index) {
  return static_cast<unsigned int>(index) < DeviceCountMax;
}

bool IsJcmsTypeValid(hid::JcmsType type) {
  return type < 2;
}

bool IsSixAxisSensorHandleValid(const GuestSixAxisSensorHandle& handle) {
  if (!IsNpadIdValid(handle.npadId) || !IsGuestIdValid(handle.guestId)) {
    return false;
  }

  if (handle.deviceIndex >= SensorCountMax) {
    return false;
  }

  return ((1u << handle.npadStyleIndex) & NpadStyleSupported) != 0;
}

bool IsVibrationDeviceHandleValid(const GuestVibrationDeviceHandle& handle) {
  if (!IsNpadIdValid(handle.npadId) || !IsGuestIdValid(handle.guestId)) {
    return false;
  }

  if (handle.deviceIndex >= DeviceCountMax) {
    return false;
  }

  return ((1u << handle.npadStyleIndex) & NpadStyleSupported) != 0;
}

bool IsJcmsHandleValid(const GuestJcmsHandle& handle) {
  return IsNpadIdValid(handle.npadId) && IsJcmsTypeValid(handle.jcmsType) &&
    IsGuestIdValid(handle.guestId);
}

bool IsGuestNmouseTypeSetValid(GuestNmouseTypeSet types) {
  return (types._storage[0] & ~6u) == 0;
}

bool IsNmouseButtonAssignmentValid(hid::NmouseButtonAssignment assignment) {
  return assignment < 6;
}

bool IsHidFeatureSetValid(HidFeatureSet features) {
  return (features._storage[0] & ~0x1fu) == 0;
}

GuestNmouseTypeSet FilterGuestNmouseTypeSet(GuestNmouseTypeSet types) {
  return {{types._storage[0] & 6u}};
}

GuestSixAxisSensorHandle MakeSixAxisSensorHandle(const GuestPadId& id,
  hid::NpadStyleSet style, int deviceIndex) {
  return {id.npadId, id.guestId, GetNpadStyleIndex(style),
    static_cast<uint8_t>(deviceIndex)};
}

void GetValuesFromSixAxisSensorHandle(GuestPadId* outId,
  hid::NpadStyleSet* outStyle, int* outDeviceIndex,
  const GuestSixAxisSensorHandle& handle) {
  outId->npadId = handle.npadId;
  outId->guestId = handle.guestId;
  outStyle->_storage[0] = 1u << handle.npadStyleIndex;
  *outDeviceIndex = handle.deviceIndex;
}

int GetSixAxisSensorHandle(GuestSixAxisSensorHandle* outHandles, int count,
  const GuestPadId& id, hid::NpadStyleSet style) {
  int handleCount = 0;
  const uint32_t bits = style._storage[0];

  if (bits & (NpadStyleFullKey | NpadStyleHandheld)) {
    handleCount = 1;
  }
  else if (bits & NpadStyleJoyDual) {
    handleCount = count < 2 ? count : 2;
  }
  else if (bits & NpadStyleJoyLeft) {
    handleCount = 1;
  }
  else if (bits & NpadStyleJoyRight) {
    handleCount = 1;
  }

  for (int i = 0; i < handleCount; ++i) {
    outHandles[i] = MakeSixAxisSensorHandle(id, style, i);
  }

  return handleCount;
}

GuestVibrationDeviceHandle MakeVibrationDeviceHandle(const GuestPadId& id,
  hid::NpadStyleSet style, int deviceIndex) {
  return {id.npadId, id.guestId, GetNpadStyleIndex(style),
    static_cast<uint8_t>(deviceIndex)};
}

void GetValuesFromVibrationDeviceHandle(GuestPadId* outId,
  hid::NpadStyleSet* outStyle, int* outDeviceIndex,
  const GuestVibrationDeviceHandle& handle) {
  outId->npadId = handle.npadId;
  outId->guestId = handle.guestId;
  outStyle->_storage[0] = 1u << handle.npadStyleIndex;
  *outDeviceIndex = handle.deviceIndex;
}

void GetVibrationDeviceInfo(hid::VibrationDeviceInfo* outInfo,
  const GuestVibrationDeviceHandle& handle) {
  const uint32_t bits = 1u << handle.npadStyleIndex;
  *outInfo = {};

  if (bits & (NpadStyleFullKey | NpadStyleHandheld | NpadStyleJoyDual)) {
    outInfo->deviceType = 1;

    switch (handle.deviceIndex) {
      case 0:
        outInfo->position = 1;
        break;
      case 1:
        outInfo->position = 2;
        break;
    }
  }
  else if (bits & NpadStyleJoyLeft) {
    outInfo->deviceType = 1;
    outInfo->position = 1;
  }
  else if (bits & NpadStyleJoyRight) {
    outInfo->deviceType = 1;
    outInfo->position = 2;
  }
}

int GetVibrationDeviceHandle(GuestVibrationDeviceHandle* outHandles,
  int count, const GuestPadId& id, hid::NpadStyleSet style) {
  int handleCount = 0;
  const uint32_t bits = style._storage[0];

  if (bits & (NpadStyleFullKey | NpadStyleHandheld | NpadStyleJoyDual)) {
    handleCount = count < 2 ? count : 2;
  }
  else if (bits & NpadStyleJoyLeft) {
    handleCount = 1;
  }
  else if (bits & NpadStyleJoyRight) {
    handleCount = 1;
  }

  for (int i = 0; i < handleCount; ++i) {
    outHandles[i] = MakeVibrationDeviceHandle(id, style, i);
  }

  return handleCount;
}

GuestJcmsHandle GetGuestJcmsHandle(const GuestPadId& id, hid::JcmsType type) {
  return {id.npadId, id.guestId, type};
}

void GetValuesFromJcmsHandle(GuestPadId* outId, uint8_t* outType,
  const GuestJcmsHandle& handle) {
  outId->npadId = handle.npadId;
  outId->guestId = handle.guestId;
  *outType = handle.jcmsType;
}

}
