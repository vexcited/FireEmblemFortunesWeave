#pragma once

#include "nn/hid/hid_types.hpp"

namespace nn::hid {

enum VibrationDevicePosition {
  VibrationDevicePosition_None,
  VibrationDevicePosition_Left,
  VibrationDevicePosition_Right,
};

enum VibrationDeviceType {
  VibrationDeviceType_Unknown,
  VibrationDeviceType_LinearResonantActuator,
  VibrationDeviceType_GcErm,
};

}

namespace nn::hid::utility {

enum MouseTypeIdx : uint8_t {};
enum NpadVibrationDeviceIdx {};

Result VerifyValidMouseHandle(const MouseHandle& handle);
MouseTypeIdx GetMouseHandleTypeIdx(const MouseHandle& handle);
MouseHandle GetMouseHandle(MouseTypeIdx index);

ConsoleSixAxisSensorHandle MakeConsoleSixAxisSensorHandle(uint8_t typeValue,
  int index);
uint32_t GetConsoleSixAxisSensorTypeValue(
  const ConsoleSixAxisSensorHandle& handle);
void GetConsoleSixAxisSensorHandle(ConsoleSixAxisSensorHandle* pOutHandle);

SixAxisSensorHandle MakeSixAxisSensorHandle(uint8_t typeValue,
  int playerNumber, int index);
uint32_t GetSixAxisSensorHandleTypeValue(const SixAxisSensorHandle& handle);
int GetSixAxisSensorHandleNpadStyleIndex(const SixAxisSensorHandle& handle);
int GetSixAxisSensorHandlePlayerNumber(const SixAxisSensorHandle& handle);
NpadIdType GetSixAxisSensorHandleNpadIdType(const SixAxisSensorHandle& handle);
int GetSixAxisSensorHandleSixAxisSensorIdx(const SixAxisSensorHandle& handle);
Result VerifyValidSixAxisSensorHandle(const SixAxisSensorHandle& handle);

int GetVibrationDeviceIdxFromPosition(VibrationDevicePosition position);
VibrationDevicePosition GetVibrationDevicePositionFromIdx(
  VibrationDeviceType type, NpadVibrationDeviceIdx index);
VibrationDeviceHandle MakeVibrationDeviceHandle(uint8_t typeValue,
  int playerNumber, int index);
uint32_t GetVibrationDeviceHandleNpadTypeValue(
  const VibrationDeviceHandle& handle);
int GetVibrationDeviceHandlePlayerNumber(const VibrationDeviceHandle& handle);
int GetVibrationDeviceHandleDeviceIdx(const VibrationDeviceHandle& handle);

Result VerifyValidJcmsNpadId(NpadIdType id);
Result VerifyValidJcmsType(JcmsType type);
JcmsHandle MakeJcmsHandle(NpadIdType id, JcmsType type);
NpadIdType GetJcmsHandleNpadIdType(const JcmsHandle& handle);
JcmsType GetJcmsType(const JcmsHandle& handle);
Result VerifyValidJcmsHandle(const JcmsHandle& handle);
uint8_t GetJcmsIndex(NpadIdType id, JcmsType type);
uint8_t GetJcmsIndex(JcmsHandle handle);

}
