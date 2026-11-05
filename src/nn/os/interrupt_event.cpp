#include "nn/os/interrupt_event.hpp"

namespace nn::os {

namespace detail {

extern const uintptr_t InterruptEventHolderVtable[] asm(
  "_ZTVN2nn2os6detail31MultiWaitHolderOfInterruptEventE");

// Interrupt events are always waited on through their native handle.
int MultiWaitHolderOfInterruptEvent::IsSignaled() const {
  return 2;
}

bool MultiWaitHolderOfInterruptEvent::GetNativeHandle(
  uint32_t* handle) const {
  *handle = event->impl.m_Handle;
  return true;
}

}

void FinalizeInterruptEvent(InterruptEventType* event) {
  event->state = 0;
  event->impl.~InterruptEventImplByHorizon();
}

void ClearInterruptEvent(InterruptEventType* event) {
  event->impl.Clear();
}

void WaitInterruptEvent(InterruptEventType* event) {
  event->impl.Wait();
}

bool TryWaitInterruptEvent(InterruptEventType* event) {
  return event->impl.TryWait();
}

bool TimedWaitInterruptEvent(InterruptEventType* event, TimeSpan timeout) {
  return event->impl.TimedWait(timeout);
}

uint32_t GetInterruptEventHandle(const InterruptEventType* event) {
  return event->impl.m_Handle;
}

void InitializeMultiWaitHolder(MultiWaitHolderType* storage,
  InterruptEventType* event) {
  auto* holder =
    reinterpret_cast<detail::MultiWaitHolderOfInterruptEvent*>(storage);
  holder->multi_wait_node.next = &holder->multi_wait_node;
  holder->multi_wait_node.previous = &holder->multi_wait_node;
  holder->object_node.next = &holder->object_node;
  holder->object_node.previous = &holder->object_node;
  holder->owner = nullptr;
  holder->event = event;
  holder->userData = 0;
  holder->dispatch = reinterpret_cast<const detail::MultiWaitHolderDispatch*>(
    detail::InterruptEventHolderVtable + 2);
}

}
