#include "nn/hid/detail/hid_abort.hpp"
#include "nn/hid/hid_vibration_node.hpp"
#include "nn/os/synchronization.hpp"

namespace nn::hid {

namespace detail {

Result EnqueueVibrationValue(const VibrationDeviceHandle& handle,
  const VibrationValue& value);
Result FlushEnqueuedVibrationValues();

}

namespace {

os::SdkMutexType g_TargetMutex;

}

VibrationTarget::VibrationTarget() : m_IsVibrationDeviceHandleSet(false) {
  g_TargetMutex.Lock();
  m_VibrationDeviceHandle = VibrationDeviceHandle{};
  g_TargetMutex.Unlock();
}

VibrationTarget::VibrationTarget(const VibrationDeviceHandle& handle) :
  m_IsVibrationDeviceHandleSet(true), m_VibrationDeviceHandle(handle) {}

VibrationTarget::~VibrationTarget() {}

void VibrationTarget::SetVibrationDeviceHandle(
  const VibrationDeviceHandle& handle) {
  g_TargetMutex.Lock();
  m_IsVibrationDeviceHandleSet = true;
  m_VibrationDeviceHandle = handle;
  g_TargetMutex.Unlock();
}

// The device is stopped with a neutral value before the handle is dropped.
void VibrationTarget::UnsetVibrationDeviceHandle() {
  g_TargetMutex.Lock();
  if (m_IsVibrationDeviceHandleSet) {
    VibrationValue value;
    value.amplitudeLow = 0.0f;
    value.frequencyLow = 160.0f;
    value.amplitudeHigh = 0.0f;
    value.frequencyHigh = 320.0f;
    NN_ABORT_UNLESS_RESULT_SUCCESS(
      detail::EnqueueVibrationValue(m_VibrationDeviceHandle, value));
    NN_ABORT_UNLESS_RESULT_SUCCESS(detail::FlushEnqueuedVibrationValues());
  }
  m_IsVibrationDeviceHandleSet = false;
  m_VibrationDeviceHandle = VibrationDeviceHandle{};
  g_TargetMutex.Unlock();
}

bool VibrationTarget::IsVibrationDeviceHandleSet() const {
  g_TargetMutex.Lock();
  const bool isSet = m_IsVibrationDeviceHandleSet;
  g_TargetMutex.Unlock();
  return isSet;
}

VibrationDeviceHandle VibrationTarget::GetVibrationDeviceHandle() {
  g_TargetMutex.Lock();
  const VibrationDeviceHandle handle = m_VibrationDeviceHandle;
  g_TargetMutex.Unlock();
  return handle;
}

void VibrationTarget::GetActualVibration(VibrationValue* pOutValue) const {
  g_TargetMutex.Lock();
  if (m_IsVibrationDeviceHandleSet) {
    GetActualVibrationValue(pOutValue, m_VibrationDeviceHandle);
  }
  else {
    *pOutValue = VibrationValue{0.0f, 160.0f, 0.0f, 320.0f};
  }
  g_TargetMutex.Unlock();
}

void VibrationTarget::GetVibrationDeviceInfo(
  VibrationDeviceInfo* pOutInfo) const {
  g_TargetMutex.Lock();
  if (m_IsVibrationDeviceHandleSet) {
    hid::GetVibrationDeviceInfo(pOutInfo, m_VibrationDeviceHandle);
  }
  else {
    *pOutInfo = VibrationDeviceInfo{};
  }
  g_TargetMutex.Unlock();
}

void VibrationTarget::OnNextSampleRequired(VibrationValue* pValue,
  VibrationNodeConnectionList* pInputConnections) {
  g_TargetMutex.Lock();
  if (m_IsVibrationDeviceHandleSet) {
    VibrationMixer::OnNextSampleRequired(pValue, pInputConnections);
    NN_ABORT_UNLESS_RESULT_SUCCESS(
      detail::EnqueueVibrationValue(m_VibrationDeviceHandle, *pValue));
  }
  g_TargetMutex.Unlock();
}

VibrationWriter::VibrationWriter() {}

VibrationWriter::~VibrationWriter() {}

void VibrationWriter::Write(const VibrationValue& value) {
  SetCurrentVibration(value);
}

void VibrationWriter::OnNextSampleRequired(VibrationValue* pValue,
  VibrationNodeConnectionList* pInputConnections) {
  static_cast<void>(pValue);
  static_cast<void>(pInputConnections);
}

}
