#include <cstring>

#include "nn/diag/diag_abort.hpp"
#include "nn/os/synchronization.hpp"
#include "nn/streamplay/streamplay_guest_vibration_target.hpp"

namespace nn::streamplay {

namespace {

os::SdkMutexType g_TargetMutex;

// Handles are copied as whole 8 byte words, padding included.
inline void CopyHandle(GuestVibrationDeviceHandle* pOutHandle,
  const GuestVibrationDeviceHandle& handle) {
  std::memcpy(pOutHandle, &handle, sizeof(handle));
}

inline void ClearHandle(GuestVibrationDeviceHandle* pOutHandle) {
  std::memset(pOutHandle, 0, sizeof(*pOutHandle));
}

}

GuestVibrationTarget::GuestVibrationTarget() :
  m_IsGuestVibrationDeviceHandleSet(false) {
  g_TargetMutex.Lock();
  ClearHandle(&m_GuestVibrationDeviceHandle);
  g_TargetMutex.Unlock();
}

GuestVibrationTarget::GuestVibrationTarget(
  const GuestVibrationDeviceHandle& handle) :
  m_IsGuestVibrationDeviceHandleSet(true) {
  CopyHandle(&m_GuestVibrationDeviceHandle, handle);
}

GuestVibrationTarget::~GuestVibrationTarget() {}

void GuestVibrationTarget::SetGuestVibrationDeviceHandle(
  const GuestVibrationDeviceHandle& handle) {
  g_TargetMutex.Lock();
  m_IsGuestVibrationDeviceHandleSet = true;
  CopyHandle(&m_GuestVibrationDeviceHandle, handle);
  g_TargetMutex.Unlock();
}

// The device is stopped with a neutral value before the handle is dropped.
void GuestVibrationTarget::UnsetGuestVibrationDeviceHandle() {
  g_TargetMutex.Lock();
  if (m_IsGuestVibrationDeviceHandleSet) {
    hid::VibrationValue value;
    value.amplitudeLow = 0.0f;
    value.frequencyLow = 160.0f;
    value.amplitudeHigh = 0.0f;
    value.frequencyHigh = 320.0f;
    SendGuestVibrationValue(m_GuestVibrationDeviceHandle, value);
  }
  m_IsGuestVibrationDeviceHandleSet = false;
  ClearHandle(&m_GuestVibrationDeviceHandle);
  g_TargetMutex.Unlock();
}

bool GuestVibrationTarget::IsGuestVibrationDeviceHandleSet() const {
  g_TargetMutex.Lock();
  const bool isSet = m_IsGuestVibrationDeviceHandleSet;
  g_TargetMutex.Unlock();
  return isSet;
}

GuestVibrationDeviceHandle
GuestVibrationTarget::GetGuestVibrationDeviceHandle() {
  g_TargetMutex.Lock();
  GuestVibrationDeviceHandle handle;
  CopyHandle(&handle, m_GuestVibrationDeviceHandle);
  g_TargetMutex.Unlock();
  return handle;
}

void GuestVibrationTarget::GetVibrationDeviceInfo(
  hid::VibrationDeviceInfo* pOutInfo) const {
  NN_ABORT_UNLESS_NOT_NULL(pOutInfo);
  g_TargetMutex.Lock();
  if (m_IsGuestVibrationDeviceHandleSet) {
    GetGuestVibrationDeviceInfo(pOutInfo, m_GuestVibrationDeviceHandle);
  }
  else {
    *pOutInfo = hid::VibrationDeviceInfo{};
  }
  g_TargetMutex.Unlock();
}

void GuestVibrationTarget::OnNextSampleRequired(hid::VibrationValue* pValue,
  hid::VibrationNodeConnectionList* pInputConnections) {
  g_TargetMutex.Lock();
  if (m_IsGuestVibrationDeviceHandleSet) {
    VibrationMixer::OnNextSampleRequired(pValue, pInputConnections);
    SendGuestVibrationValue(m_GuestVibrationDeviceHandle, *pValue);
  }
  g_TargetMutex.Unlock();
}

}
