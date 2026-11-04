#include "nn/hid/detail/hid_applet_resource_holder.hpp"
#include "nn/hid/detail/hid_shared_memory_accessor.hpp"

namespace nn::hid::detail {

namespace {

constexpr int ActivationCountMax = 0x7ffffffe;

}

SharedMemoryAccessor::SharedMemoryAccessor() :
  m_ActivationCount(0), m_Mutex(), m_ResultActivationUpperLimitOver(),
  m_ResultDeactivationLowerLimitOver() {}

SharedMemoryAccessor::~SharedMemoryAccessor() {}

Result SharedMemoryAccessor::SetAppletResourceUserId(
  applet::AppletResourceUserId aruid) {
  return GetAppletResourceHolder().SetAppletResourceUserId(aruid);
}

Result SharedMemoryAccessor::Activate() {
  m_Mutex.Lock();
  Result result = Result{};
  if (m_ActivationCount == 0) {
    result = GetAppletResourceHolder().Activate();
    if (result.IsSuccess()) {
      result = Attach(GetAppletResourceHolder().GetSharedMemoryAddress());
      if (result.IsSuccess()) {
        ++m_ActivationCount;
      }
      else {
        GetAppletResourceHolder().Deactivate();
      }
    }
  }
  else if (m_ActivationCount == ActivationCountMax) {
    result = m_ResultActivationUpperLimitOver;
  }
  else {
    ++m_ActivationCount;
  }
  m_Mutex.Unlock();
  return result;
}

Result SharedMemoryAccessor::Deactivate() {
  m_Mutex.Lock();
  Result result = Result{};
  if (m_ActivationCount == 0) {
    result = m_ResultDeactivationLowerLimitOver;
  }
  else if (--m_ActivationCount == 0) {
    result = Detach();
    if (result.IsSuccess()) {
      result = GetAppletResourceHolder().Deactivate();
    }
  }
  m_Mutex.Unlock();
  return result;
}

void SharedMemoryAccessor::SetResultActivationUpperLimitOver(Result result) {
  m_ResultActivationUpperLimitOver = result;
}

void SharedMemoryAccessor::SetResultDeactivationLowerLimitOver(
  Result result) {
  m_ResultDeactivationLowerLimitOver = result;
}

}
