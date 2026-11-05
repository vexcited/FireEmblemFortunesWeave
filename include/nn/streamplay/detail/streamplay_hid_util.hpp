#pragma once

#include "nn/hid/hid_types.hpp"
#include "nn/hid/hid_vibration_node.hpp"
#include "nn/streamplay/streamplay_types.hpp"

namespace nn::streamplay::detail {

bool IsGuestIdValid(GuestId id);
bool IsNpadIdTypeValid(const hid::NpadIdType& id);
bool IsGuestPadIdValid(const GuestPadId& id);
bool IsNpadStyleSetValid(hid::NpadStyleSet style);
bool IsNpadStyleIdentifierValid(hid::NpadStyleSet style);
bool IsSensorIndexValid(int index);
bool IsDeviceIndexValid(int index);
bool IsJcmsTypeValid(hid::JcmsType type);
bool IsSixAxisSensorHandleValid(const GuestSixAxisSensorHandle& handle);
bool IsVibrationDeviceHandleValid(const GuestVibrationDeviceHandle& handle);
bool IsJcmsHandleValid(const GuestJcmsHandle& handle);
bool IsGuestNmouseTypeSetValid(GuestNmouseTypeSet types);
bool IsNmouseButtonAssignmentValid(hid::NmouseButtonAssignment assignment);
bool IsHidFeatureSetValid(HidFeatureSet features);
GuestNmouseTypeSet FilterGuestNmouseTypeSet(GuestNmouseTypeSet types);

[[gnu::const]] uint8_t GetNpadStyleIndex(hid::NpadStyleSet style);

GuestSixAxisSensorHandle MakeSixAxisSensorHandle(const GuestPadId& id,
  hid::NpadStyleSet style, int deviceIndex);
void GetValuesFromSixAxisSensorHandle(GuestPadId* outId,
  hid::NpadStyleSet* outStyle, int* outDeviceIndex,
  const GuestSixAxisSensorHandle& handle);
int GetSixAxisSensorHandle(GuestSixAxisSensorHandle* outHandles, int count,
  const GuestPadId& id, hid::NpadStyleSet style);

GuestVibrationDeviceHandle MakeVibrationDeviceHandle(const GuestPadId& id,
  hid::NpadStyleSet style, int deviceIndex);
void GetValuesFromVibrationDeviceHandle(GuestPadId* outId,
  hid::NpadStyleSet* outStyle, int* outDeviceIndex,
  const GuestVibrationDeviceHandle& handle);
void GetVibrationDeviceInfo(hid::VibrationDeviceInfo* outInfo,
  const GuestVibrationDeviceHandle& handle);
int GetVibrationDeviceHandle(GuestVibrationDeviceHandle* outHandles,
  int count, const GuestPadId& id, hid::NpadStyleSet style);

GuestJcmsHandle GetGuestJcmsHandle(const GuestPadId& id, hid::JcmsType type);
void GetValuesFromJcmsHandle(GuestPadId* outId, uint8_t* outType,
  const GuestJcmsHandle& handle);

}
