#include "nn/diag/diag_abort.hpp"
#include "nn/irsensor/detail/irsensor_session.hpp"

namespace nn::irsensor::detail {

Session::Session()
  : m_ActivationCountMax(0x7ffffffe), m_ActivationCount(0) {
  os::detail::ClearMutexMembers(&m_Mutex);
  os::InitializeMutex(&m_Mutex, false, 0);
}

Session::~Session() {
  os::FinalizeMutex(&m_Mutex);
}

Result Session::Activate(const IrSensorFunctionLevel& level) {
  os::LockMutex(&m_Mutex);

  Result result = {};
  if (m_ActivationCount == m_ActivationCountMax) {
    result = ThrowResultActivationUpperLimitOver();
  }
  else if (m_ActivationCount != 0) {
    ++m_ActivationCount;
  }
  else {
    result = CreateProxy();
    if (result.IsSuccess()) {
      result = ActivateServiceWithFunctionLevel(level);
      if (result.IsFailure()) {
        DestroyProxy();
      }
      else {
        {
          sf::NativeHandle handle;
          result = GetSharedMemoryHandle(&handle);
          if (result.IsSuccess()) {
            AttachSharedMemory(handle.GetOsHandle(), handle.IsManaged());
            handle.Detach();

            if (!IsSharedMemoryMapped()) {
              result = ThrowResultAllocationFailed();
              FinalizeSharedMemory();
            }
          }
        }

        if (result.IsSuccess()) {
          ++m_ActivationCount;
        }
        else {
          NN_ABORT_UNLESS_RESULT_SUCCESS(DeactivateService());
          DestroyProxy();
        }
      }
    }
  }

  os::UnlockMutex(&m_Mutex);
  return result;
}

Result Session::Deactivate() {
  os::LockMutex(&m_Mutex);

  Result result = {};
  if (m_ActivationCount == 0) {
    result = ThrowResultDeactivationLowerLimitOver();
  }
  else if (--m_ActivationCount == 0) {
    FinalizeSharedMemory();
    result = DeactivateService();
    if (result.IsSuccess()) {
      DestroyProxy();
    }
  }

  os::UnlockMutex(&m_Mutex);
  return result;
}

}
