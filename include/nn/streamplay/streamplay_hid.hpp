#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/hid/detail/hid_nmouse_accessor.hpp"
#include "nn/hid/hid_device_states.hpp"
#include "nn/hid/hid_npad_state.hpp"
#include "nn/hid/hid_touch_screen.hpp"
#include "nn/hid/hid_types.hpp"
#include "nn/streamplay/streamplay_types.hpp"

namespace nn::hid {

struct SixAxisSensorState {
  int64_t deltaTime;
  int64_t samplingNumber;
  float acceleration[3];
  float angularVelocity[3];
  float angle[3];
  float direction[3][3];
  uint32_t attributes;
};

struct JcmsState {
  uint64_t reserved;
  int64_t samplingNumber;
  uint64_t data[2];
};

}

namespace nn::streamplay {

template <size_t N>
struct GuestTouchScreenState {
  int64_t reserved;
  hid::TouchScreenState<N> state;
};

template <typename T>
struct GuestPadState {
  int64_t reserved;
  T state;
};

struct GuestSixAxisSensorState {
  int64_t reserved;
  hid::SixAxisSensorState state;
};

struct GuestJcmsState {
  int64_t reserved;
  hid::JcmsState state;
};

struct GuestNmouseHandle {
  uint64_t _storage;
};

struct GuestNmouseState {
  int64_t reserved;
  hid::NmouseState state;
};

}

namespace nn::hid {

struct VibrationDeviceInfo;

}

namespace nn::streamplay {

template <size_t N>
int GetGuestTouchScreenStates(GuestTouchScreenState<N>* pOutStates,
  int count, GuestId id);
int GetGuestPadStates(GuestPadState<hid::NpadFullKeyState>* pOutStates,
  int count, const GuestPadId& id);
int GetGuestPadStates(GuestPadState<hid::NpadHandheldState>* pOutStates,
  int count, const GuestPadId& id);
int GetGuestPadStates(GuestPadState<hid::NpadJoyDualState>* pOutStates,
  int count, const GuestPadId& id);
int GetGuestPadStates(GuestPadState<hid::NpadJoyRightState>* pOutStates,
  int count, const GuestPadId& id);
int GetGuestPadStates(GuestPadState<hid::NpadJoyLeftState>* pOutStates,
  int count, const GuestPadId& id);
hid::NpadStyleSet GetGuestPadStyleSet(const GuestPadId& id);
Result GetGuestPadControllerColor(hid::NpadControllerColor* pOutColor,
  const GuestPadId& id);
Result GetGuestPadControllerColor(hid::NpadControllerColor* pOutLeftColor,
  hid::NpadControllerColor* pOutRightColor, const GuestPadId& id);
int GetGuestSixAxisSensorHandles(GuestSixAxisSensorHandle* pOutHandles,
  int count, const GuestPadId& id, hid::NpadStyleSet style);
int GetGuestSixAxisSensorStates(GuestSixAxisSensorState* pOutStates,
  int count, const GuestSixAxisSensorHandle& handle);
int GetGuestVibrationDeviceHandles(GuestVibrationDeviceHandle* pOutHandles,
  int count, const GuestPadId& id, hid::NpadStyleSet style);
void GetGuestVibrationDeviceInfo(hid::VibrationDeviceInfo* pOutInfo,
  const GuestVibrationDeviceHandle& handle);
GuestJcmsHandle GetGuestJcmsHandle(const GuestPadId& id,
  const hid::JcmsType& type);
int GetGuestJcmsStates(GuestJcmsState* pOutStates, int count,
  const GuestJcmsHandle& handle);
bool GetGuestMergedNmouseHandle(GuestNmouseHandle* pOutHandle, GuestId id);
int GetGuestNmouseHandles(GuestNmouseHandle* pOutHandles, int count,
  const GuestPadId& id);
bool GetGuestNmouseTypeSet(GuestNmouseTypeSet* pOutTypes,
  const GuestNmouseHandle& handle);
bool GetGuestPadId(GuestPadId* pOutId, const GuestNmouseHandle& handle);
bool GetGuestId(GuestId* pOutId, const GuestNmouseHandle& handle);
bool GetGuestNmouseStates(int* pOutCount, GuestNmouseState* pOutStates,
  int count, const GuestNmouseHandle& handle);

}
