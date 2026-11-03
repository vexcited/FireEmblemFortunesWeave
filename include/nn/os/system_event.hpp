#pragma once

#include "nn/os/event.hpp"
#include "nn/result.hpp"

namespace nn::os::detail {

struct InterProcessEventType {
  MultiWaitListNode waiters;
  uint8_t auto_clear;
  uint8_t initialized;
  uint8_t owns_readable;
  uint8_t owns_writable;
  uint32_t readable;
  uint32_t writable;
  uint32_t reserved;
};

struct InterProcessEventImplByHorizon {
  static void Close(uint32_t handle);
  static void Signal(uint32_t handle);
  static void Clear(uint32_t handle);
  static void Wait(uint32_t handle, bool auto_clear);
  static bool TryWait(uint32_t handle, bool auto_clear);
  static bool TimedWait(uint32_t handle, bool auto_clear, TimeSpan time);
};

Result CreateInterProcessEventHandles(uint32_t* writable, uint32_t* readable);
Result CreateInterProcessEvent(InterProcessEventType* event,
                               EventClearMode mode);
void DestroyInterProcessEvent(InterProcessEventType* event);
void AttachInterProcessEvent(InterProcessEventType* event, uint32_t readable,
                             bool owns_readable, uint32_t writable,
                             bool owns_writable, EventClearMode mode);
uint32_t DetachReadableHandleOfInterProcessEvent(InterProcessEventType* event);
uint32_t DetachWritableHandleOfInterProcessEvent(InterProcessEventType* event);
void WaitInterProcessEvent(InterProcessEventType* event);
bool TryWaitInterProcessEvent(InterProcessEventType* event);
bool TimedWaitInterProcessEvent(InterProcessEventType* event, TimeSpan time);
void SignalInterProcessEvent(InterProcessEventType* event);
void ClearInterProcessEvent(InterProcessEventType* event);
uint32_t
GetReadableHandleOfInterProcessEvent(const InterProcessEventType* event);
uint32_t
GetWritableHandleOfInterProcessEvent(const InterProcessEventType* event);

struct MultiWaitHolderOfInterProcessEvent : MultiWaitHolderBase {
  InterProcessEventType* event;
  uintptr_t user_data;

  int IsSignaled() const;
  bool GetNativeHandle(uint32_t* output) const;
};

}

namespace nn::os {

struct SystemEventType {
  alignas(8) uint8_t storage[40];
  uint8_t state;
  uint8_t reserved[7];
};

Result CreateSystemEvent(SystemEventType* event, EventClearMode mode,
                         bool interprocess);
void AttachSystemEvent(SystemEventType* event, uint32_t readable,
                       bool owns_readable, uint32_t writable,
                       bool owns_writable, EventClearMode mode);
void AttachReadableHandleToSystemEvent(SystemEventType* event,
                                       uint32_t readable, bool owns_readable,
                                       EventClearMode mode);
void AttachWritableHandleToSystemEvent(SystemEventType* event,
                                       uint32_t writable, bool owns_writable,
                                       EventClearMode mode);
uint32_t DetachReadableHandleOfSystemEvent(SystemEventType* event);
uint32_t DetachWritableHandleOfSystemEvent(SystemEventType* event);
void DestroySystemEvent(SystemEventType* event);
void WaitSystemEvent(SystemEventType* event);
bool TryWaitSystemEvent(SystemEventType* event);
bool TimedWaitSystemEvent(SystemEventType* event, TimeSpan time);
void SignalSystemEvent(SystemEventType* event);
void ClearSystemEvent(SystemEventType* event);
uint32_t GetReadableHandleOfSystemEvent(const SystemEventType* event);
uint32_t GetWritableHandleOfSystemEvent(const SystemEventType* event);
void InitializeMultiWaitHolder(MultiWaitHolderType* holder,
                               SystemEventType* event);

}
