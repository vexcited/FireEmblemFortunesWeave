#include "nn/hid/detail/hid_abort.hpp"
#include "nn/hid/detail/hid_npad_id.hpp"
#include "nn/hid/hid_types.hpp"

namespace nn::hid::system::detail {

Result SetNpadPlayerLedBlinkingDevice(const NpadIdType& id,
  const util::BitFlagSet<32, DeviceType>& devices);
Result GetNpadSystemExtStyle(AppletFooterUiType* pOutType,
  NpadSystemExtSubStyle* pOutSubStyle, const NpadIdType& id);
Result GetAppletDetailedUiTypes(AppletDetailedUiType* pOutType,
  const NpadIdType& id);
Result GetUniquePadsFromNpad(int* pOutCount, UniquePadId* pOutIds, int count,
  const NpadIdType& id);
Result HasBattery(bool* pOutHasBattery, const NpadIdType& id);
Result HasBattery(bool* pOutHasBatteryLeft, bool* pOutHasBatteryRight,
  const NpadIdType& id);
Result GetNpadInterfaceType(uint8_t* pOutType, const NpadIdType& id);
Result GetNpadInterfaceType(uint8_t* pOutTypeLeft, uint8_t* pOutTypeRight,
  const NpadIdType& id);
Result GetNpadFullKeyGripColor(util::Unorm8x4* pOutLeft,
  util::Unorm8x4* pOutRight, const NpadIdType& id);

}

namespace nn::hid::detail {

Result GetNpadDeviceType(
  util::BitFlagSet<32, system::DeviceType>* pOutDevices,
  const NpadIdType& id);
Result GetNpadPowerInfo(system::PowerInfo* pOutInfo, const NpadIdType& id);
Result GetNpadPowerInfo(system::PowerInfo* pOutLeft,
  system::PowerInfo* pOutRight, const NpadIdType& id);
Result IsAbxyButtonOriented(bool* pOutIsOriented, const NpadIdType& id);
Result IsSlSrButtonOriented(bool* pOutIsOriented, const NpadIdType& id);
Result GetPlusMinusButtonCapability(bool* pOutPlus, bool* pOutMinus,
  const NpadIdType& id);
Result IsDirectionalButtonsSupported(bool* pOutIsSupported,
  const NpadIdType& id);
Result GetGlCapability(bool* pOutIsCapable, const NpadIdType& id);
Result GetGrCapability(bool* pOutIsCapable, const NpadIdType& id);
Result GetCButtonCapability(bool* pOutIsCapable, const NpadIdType& id);
Result GetNpadSkuTypeForControllerSupport(uint8_t* pOutType,
  const NpadIdType& id);
Result GetNpadSkuTypeForControllerSupport(uint8_t* pOutTypeLeft,
  uint8_t* pOutTypeRight, const NpadIdType& id);
Result IsUnsupportedButtonPressed(bool* pOutIsPressed, const NpadIdType& id,
  const util::BitFlagSet<32, NpadStyleTag>& styles);
Result GetAppletFooterUiTypes(system::AppletFooterUiType* pOutType,
  const NpadIdType& id);
Result GetAppletFooterUiAttributesSet(
  util::BitFlagSet<32, system::AppletFooterUiAttribute>* pOutAttributes,
  const NpadIdType& id);

}

namespace nn::hid::system {

void SetNpadPlayerLedBlinkingDevice(const NpadIdType& id,
  const util::BitFlagSet<32, DeviceType>& devices) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::detail::VerifyValidNpadId(id));
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    detail::SetNpadPlayerLedBlinkingDevice(id, devices));
}

void GetNpadSystemExtStyle(AppletFooterUiType* pOutType,
  NpadSystemExtSubStyle* pOutSubStyle, const NpadIdType& id) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::detail::VerifyValidNpadId(id));
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    detail::GetNpadSystemExtStyle(pOutType, pOutSubStyle, id));
}

AppletDetailedUiType GetAppletDetailedUiTypes(const NpadIdType& id) {
  AppletDetailedUiType type = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::detail::VerifyValidNpadId(id));
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetAppletDetailedUiTypes(&type, id));
  return type;
}

int GetUniquePadsFromNpad(UniquePadId* pOutIds, int count,
  const NpadIdType& id) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::detail::VerifyValidNpadId(id));
  int outCount = 0;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    detail::GetUniquePadsFromNpad(&outCount, pOutIds, count, id));
  return outCount;
}

bool HasBattery(const NpadIdType& id) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::detail::VerifyValidNpadId(id));
  bool hasBattery = false;
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::HasBattery(&hasBattery, id));
  return hasBattery;
}

void HasBattery(bool* pOutHasBatteryLeft, bool* pOutHasBatteryRight,
  const NpadIdType& id) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::detail::VerifyValidNpadId(id));
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    detail::HasBattery(pOutHasBatteryLeft, pOutHasBatteryRight, id));
}

uint8_t GetNpadInterfaceType(const NpadIdType& id) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::detail::VerifyValidNpadId(id));
  uint8_t type = 0;
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetNpadInterfaceType(&type, id));
  return type;
}

void GetNpadInterfaceType(uint8_t* pOutTypeLeft, uint8_t* pOutTypeRight,
  const NpadIdType& id) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::detail::VerifyValidNpadId(id));
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    detail::GetNpadInterfaceType(pOutTypeLeft, pOutTypeRight, id));
}

Result GetNpadFullKeyGripColor(util::Unorm8x4* pOutLeft,
  util::Unorm8x4* pOutRight, const NpadIdType& id) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::detail::VerifyValidNpadId(id));
  return detail::GetNpadFullKeyGripColor(pOutLeft, pOutRight, id);
}

util::BitFlagSet<32, DeviceType> GetNpadDeviceType(const NpadIdType& id) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::detail::VerifyValidNpadId(id));
  util::BitFlagSet<32, DeviceType> devices = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::detail::GetNpadDeviceType(&devices, id));
  return devices;
}

PowerInfo GetNpadPowerInfo(const NpadIdType& id) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::detail::VerifyValidNpadId(id));
  PowerInfo info = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::detail::GetNpadPowerInfo(&info, id));
  return info;
}

void GetNpadPowerInfo(PowerInfo* pOutLeft, PowerInfo* pOutRight,
  const NpadIdType& id) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::detail::VerifyValidNpadId(id));
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::detail::GetNpadPowerInfo(pOutLeft, pOutRight, id));
}

bool IsAbxyButtonOriented(const NpadIdType& id) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::detail::VerifyValidNpadId(id));
  bool isOriented = false;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::detail::IsAbxyButtonOriented(&isOriented, id));
  return isOriented;
}

bool IsSlSrButtonOriented(const NpadIdType& id) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::detail::VerifyValidNpadId(id));
  bool isOriented = false;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::detail::IsSlSrButtonOriented(&isOriented, id));
  return isOriented;
}

void GetPlusMinusButtonCapability(bool* pOutPlus, bool* pOutMinus,
  const NpadIdType& id) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::detail::VerifyValidNpadId(id));
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::detail::GetPlusMinusButtonCapability(pOutPlus, pOutMinus, id));
}

bool IsDirectionalButtonsSupported(const NpadIdType& id) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::detail::VerifyValidNpadId(id));
  bool isSupported = false;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::detail::IsDirectionalButtonsSupported(&isSupported, id));
  return isSupported;
}

bool GetGlButtonCapability(const NpadIdType& id) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::detail::VerifyValidNpadId(id));
  bool isCapable = false;
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::detail::GetGlCapability(&isCapable, id));
  return isCapable;
}

bool GetGrButtonCapability(const NpadIdType& id) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::detail::VerifyValidNpadId(id));
  bool isCapable = false;
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::detail::GetGrCapability(&isCapable, id));
  return isCapable;
}

bool GetCButtonCapability(const NpadIdType& id) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::detail::VerifyValidNpadId(id));
  bool isCapable = false;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::detail::GetCButtonCapability(&isCapable, id));
  return isCapable;
}

Result GetNpadSkuTypeForControllerSupport(uint8_t* pOutType,
  const NpadIdType& id) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::detail::VerifyValidNpadId(id));
  return hid::detail::GetNpadSkuTypeForControllerSupport(pOutType, id);
}

Result GetNpadSkuTypeForControllerSupport(uint8_t* pOutTypeLeft,
  uint8_t* pOutTypeRight, const NpadIdType& id) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::detail::VerifyValidNpadId(id));
  return hid::detail::GetNpadSkuTypeForControllerSupport(pOutTypeLeft,
    pOutTypeRight, id);
}

bool IsUnsupportedButtonPressed(const NpadIdType& id,
  const util::BitFlagSet<32, NpadStyleTag>& styles) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::detail::VerifyValidNpadId(id));
  bool isPressed = false;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::detail::IsUnsupportedButtonPressed(&isPressed, id, styles));
  return isPressed;
}

AppletFooterUiType GetAppletFooterUiTypes(const NpadIdType& id) {
  AppletFooterUiType type = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::detail::VerifyValidNpadId(id));
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::detail::GetAppletFooterUiTypes(&type, id));
  return type;
}

util::BitFlagSet<32, AppletFooterUiAttribute> GetAppletFooterUiAttributesSet(
  const NpadIdType& id) {
  util::BitFlagSet<32, AppletFooterUiAttribute> attributes = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::detail::VerifyValidNpadId(id));
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::detail::GetAppletFooterUiAttributesSet(&attributes, id));
  return attributes;
}

}
