#pragma once

#include "nn/diag/diag_abort.hpp"
#include "nn/os/system_event.hpp"

namespace nn::os {

class SystemEvent {
 public:
  SystemEvent() {
    m_SystemEvent.state = 0;
  }

  SystemEvent(uint32_t handle, bool isManaged, EventClearMode clearMode) {
    AttachReadableHandleToSystemEvent(&m_SystemEvent, handle, isManaged,
      clearMode);
  }

  ~SystemEvent() {
    if (m_SystemEvent.state == 0) {
      return;
    }
    DestroySystemEvent(&m_SystemEvent);
  }

  void AttachReadableHandle(uint32_t handle, bool isManaged,
    EventClearMode clearMode) {
    NN_ABORT_UNLESS(m_SystemEvent.state == 0);
    AttachReadableHandleToSystemEvent(&m_SystemEvent, handle, isManaged,
      clearMode);
  }

  void AttachWritableHandle(uint32_t handle, bool isManaged,
    EventClearMode clearMode) {
    NN_ABORT_UNLESS(m_SystemEvent.state == 0);
    AttachWritableHandleToSystemEvent(&m_SystemEvent, handle, isManaged,
      clearMode);
  }

  void Wait() {
    WaitSystemEvent(&m_SystemEvent);
  }

  bool TryWait() {
    return TryWaitSystemEvent(&m_SystemEvent);
  }

  bool TimedWait(TimeSpan timeout) {
    return TimedWaitSystemEvent(&m_SystemEvent, timeout);
  }

  void Clear() {
    ClearSystemEvent(&m_SystemEvent);
  }

  SystemEventType* GetBase() {
    return &m_SystemEvent;
  }

 private:
  SystemEventType m_SystemEvent;
};

}
