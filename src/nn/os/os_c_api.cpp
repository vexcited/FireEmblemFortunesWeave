#include "nn/os/condition_variable.hpp"
#include "nn/os/event.hpp"
#include "nn/os/interrupt_event.hpp"
#include "nn/os/message_queue.hpp"
#include "nn/os/multi_wait.hpp"
#include "nn/os/mutex.hpp"
#include "nn/os/native_handle.hpp"
#include "nn/os/semaphore.hpp"
#include "nn/os/sleep_thread.hpp"
#include "nn/os/system_event.hpp"
#include "nn/os/thread_api.hpp"
#include "nn/os/thread_info.hpp"
#include "nn/os/time.hpp"
#include "nn/os/timer_event.hpp"
#include "nn/os/tls.hpp"

enum nnosNotificationReason : int32_t {};

namespace nn::os {

int64_t GetSystemTickFrequency();

namespace detail {

void NotifyDebuggerImpl(nnosNotificationReason reason, uintptr_t argument0,
  uintptr_t argument1);

}

}

extern "C" auto nnosDestroyThread(nn::os::ThreadType* pThread) {
  return nn::os::DestroyThread(pThread);
}

extern "C" auto nnosStartThread(nn::os::ThreadType* pThread) {
  return nn::os::StartThread(pThread);
}

extern "C" auto nnosGetCurrentThread() {
  return nn::os::GetCurrentThread();
}

extern "C" auto nnosWaitThread(nn::os::ThreadType* pThread) {
  return nn::os::WaitThread(pThread);
}

extern "C" auto nnosYieldThread() {
  return nn::os::YieldThread();
}

extern "C" auto nnosSleepThread(nn::TimeSpan timeout) {
  return nn::os::SleepThread(timeout);
}

extern "C" auto nnosChangeThreadPriority(
  nn::os::ThreadType* pThread, int value) {
  return nn::os::ChangeThreadPriority(pThread, value);
}

extern "C" auto nnosGetThreadPriority(nn::os::ThreadType const* pThread) {
  return nn::os::GetThreadPriority(pThread);
}

extern "C" auto nnosGetThreadCurrentPriority(
  nn::os::ThreadType const* pThread) {
  return nn::os::GetThreadCurrentPriority(pThread);
}

extern "C" auto nnosSetThreadName(
  nn::os::ThreadType* pThread, char const* string) {
  return nn::os::SetThreadName(pThread, string);
}

extern "C" auto nnosSetThreadNamePointer(
  nn::os::ThreadType* pThread, char const* string) {
  return nn::os::SetThreadNamePointer(pThread, string);
}

extern "C" auto nnosGetThreadNamePointer(nn::os::ThreadType const* pThread) {
  return nn::os::GetThreadNamePointer(pThread);
}

extern "C" auto nnosGetCurrentProcessorNumber() {
  return nn::os::GetCurrentCoreNumber();
}

extern "C" auto nnosGetCurrentCoreNumber() {
  return nn::os::GetCurrentCoreNumber();
}

extern "C" auto nnosSetThreadCoreMask(
  nn::os::ThreadType* pThread, int value, unsigned long value2) {
  return nn::os::SetThreadCoreMask(pThread, value, value2);
}

extern "C" auto nnosGetThreadCoreMask(
  int* pOutValue, unsigned long* pOutValue2, nn::os::ThreadType const* pThread) {
  return nn::os::GetThreadCoreMask(pOutValue, pOutValue2, pThread);
}

extern "C" auto nnosInitializeMultiWaitHolderForThread(
  nn::os::MultiWaitHolderType* pMultiWaitHolder, nn::os::ThreadType* pThread) {
  return nn::os::InitializeMultiWaitHolder(pMultiWaitHolder, pThread);
}

extern "C" auto nnosInitializeSemaphore(
  nn::os::SemaphoreType* pSemaphore, int value, int value2) {
  return nn::os::InitializeSemaphore(pSemaphore, value, value2);
}

extern "C" auto nnosFinalizeSemaphore(nn::os::SemaphoreType* pSemaphore) {
  return nn::os::FinalizeSemaphore(pSemaphore);
}

extern "C" auto nnosAcquireSemaphore(nn::os::SemaphoreType* pSemaphore) {
  return nn::os::AcquireSemaphore(pSemaphore);
}

extern "C" auto nnosTryAcquireSemaphore(nn::os::SemaphoreType* pSemaphore) {
  return nn::os::TryAcquireSemaphore(pSemaphore);
}

extern "C" auto nnosTimedAcquireSemaphore(
  nn::os::SemaphoreType* pSemaphore, nn::TimeSpan timeout) {
  return nn::os::TimedAcquireSemaphore(pSemaphore, timeout);
}

extern "C" auto nnosReleaseSemaphore(nn::os::SemaphoreType* pSemaphore) {
  return nn::os::ReleaseSemaphore(pSemaphore);
}

extern "C" auto nnosReleaseSemaphoreCount(
  nn::os::SemaphoreType* pSemaphore, int value) {
  return nn::os::ReleaseSemaphore(pSemaphore, value);
}

extern "C" auto nnosGetCurrentSemaphoreCount(
  nn::os::SemaphoreType const* pSemaphore) {
  return nn::os::GetCurrentSemaphoreCount(pSemaphore);
}

extern "C" auto nnosInitializeMultiWaitHolderForSemaphore(
  nn::os::MultiWaitHolderType* pMultiWaitHolder, nn::os::SemaphoreType* pSemaphore) {
  return nn::os::InitializeMultiWaitHolder(pMultiWaitHolder, pSemaphore);
}

extern "C" auto nnosInitializeTimerEvent(
  nn::os::TimerEventType* pTimerEvent, nn::os::EventClearMode clearMode) {
  return nn::os::InitializeTimerEvent(pTimerEvent, clearMode);
}

extern "C" auto nnosFinalizeTimerEvent(nn::os::TimerEventType* pTimerEvent) {
  return nn::os::FinalizeTimerEvent(pTimerEvent);
}

extern "C" auto nnosStartOneShotTimerEvent(
  nn::os::TimerEventType* pTimerEvent, nn::TimeSpan timeout) {
  return nn::os::StartOneShotTimerEvent(pTimerEvent, timeout);
}

extern "C" auto nnosStartPeriodicTimerEvent(
  nn::os::TimerEventType* pTimerEvent, nn::TimeSpan timeout, nn::TimeSpan timeout2) {
  return nn::os::StartPeriodicTimerEvent(pTimerEvent, timeout, timeout2);
}

extern "C" auto nnosStopTimerEvent(nn::os::TimerEventType* pTimerEvent) {
  return nn::os::StopTimerEvent(pTimerEvent);
}

extern "C" auto nnosSignalTimerEvent(nn::os::TimerEventType* pTimerEvent) {
  return nn::os::SignalTimerEvent(pTimerEvent);
}

extern "C" auto nnosClearTimerEvent(nn::os::TimerEventType* pTimerEvent) {
  return nn::os::ClearTimerEvent(pTimerEvent);
}

extern "C" auto nnosWaitTimerEvent(nn::os::TimerEventType* pTimerEvent) {
  return nn::os::WaitTimerEvent(pTimerEvent);
}

extern "C" auto nnosTryWaitTimerEvent(nn::os::TimerEventType* pTimerEvent) {
  return nn::os::TryWaitTimerEvent(pTimerEvent);
}

extern "C" auto nnosInitializeMultiWaitHolderForTimerEvent(
  nn::os::MultiWaitHolderType* pMultiWaitHolder, nn::os::TimerEventType* pTimerEvent) {
  return nn::os::InitializeMultiWaitHolder(pMultiWaitHolder, pTimerEvent);
}

extern "C" auto nnosInitializeMutex(
  nn::os::MutexType* pMutex, bool flag, int value) {
  return nn::os::InitializeMutex(pMutex, flag, value);
}

extern "C" auto nnosFinalizeMutex(nn::os::MutexType* pMutex) {
  return nn::os::FinalizeMutex(pMutex);
}

extern "C" auto nnosLockMutex(nn::os::MutexType* pMutex) {
  return nn::os::LockMutex(pMutex);
}

extern "C" auto nnosTryLockMutex(nn::os::MutexType* pMutex) {
  return nn::os::TryLockMutex(pMutex);
}

extern "C" auto nnosUnlockMutex(nn::os::MutexType* pMutex) {
  return nn::os::UnlockMutex(pMutex);
}

extern "C" auto nnosInitializeConditionVariable(
  nn::os::ConditionVariableType* pConditionVariable) {
  return nn::os::InitializeConditionVariable(pConditionVariable);
}

extern "C" auto nnosFinalizeConditionVariable(
  nn::os::ConditionVariableType* pConditionVariable) {
  return nn::os::FinalizeConditionVariable(pConditionVariable);
}

extern "C" auto nnosSignalConditionVariable(
  nn::os::ConditionVariableType* pConditionVariable) {
  return nn::os::SignalConditionVariable(pConditionVariable);
}

extern "C" auto nnosBroadcastConditionVariable(
  nn::os::ConditionVariableType* pConditionVariable) {
  return nn::os::BroadcastConditionVariable(pConditionVariable);
}

extern "C" auto nnosWaitConditionVariable(
  nn::os::ConditionVariableType* pConditionVariable, nn::os::MutexType* pMutex) {
  return nn::os::WaitConditionVariable(pConditionVariable, pMutex);
}

extern "C" auto nnosTimedWaitConditionVariable(
  nn::os::ConditionVariableType* pConditionVariable, nn::os::MutexType* pMutex, nn::TimeSpan timeout) {
  return nn::os::TimedWaitConditionVariable(
    pConditionVariable, pMutex, timeout);
}

extern "C" auto nnosAttachSystemEvent(
  nn::os::SystemEventType* pSystemEvent, unsigned int value, bool flag, unsigned int value2, bool flag2, nn::os::EventClearMode clearMode) {
  return nn::os::AttachSystemEvent(
    pSystemEvent, value, flag, value2, flag2, clearMode);
}

extern "C" auto nnosAttachReadableHandleToSystemEvent(
  nn::os::SystemEventType* pSystemEvent, unsigned int value, bool flag, nn::os::EventClearMode clearMode) {
  return nn::os::AttachReadableHandleToSystemEvent(
    pSystemEvent, value, flag, clearMode);
}

extern "C" auto nnosAttachWritableHandleToSystemEvent(
  nn::os::SystemEventType* pSystemEvent, unsigned int value, bool flag, nn::os::EventClearMode clearMode) {
  return nn::os::AttachWritableHandleToSystemEvent(
    pSystemEvent, value, flag, clearMode);
}

extern "C" auto nnosDetachReadableHandleOfSystemEvent(
  nn::os::SystemEventType* pSystemEvent) {
  return nn::os::DetachReadableHandleOfSystemEvent(pSystemEvent);
}

extern "C" auto nnosDetachWritableHandleOfSystemEvent(
  nn::os::SystemEventType* pSystemEvent) {
  return nn::os::DetachWritableHandleOfSystemEvent(pSystemEvent);
}

extern "C" auto nnosDestroySystemEvent(nn::os::SystemEventType* pSystemEvent) {
  return nn::os::DestroySystemEvent(pSystemEvent);
}

extern "C" auto nnosWaitSystemEvent(nn::os::SystemEventType* pSystemEvent) {
  return nn::os::WaitSystemEvent(pSystemEvent);
}

extern "C" auto nnosTryWaitSystemEvent(nn::os::SystemEventType* pSystemEvent) {
  return nn::os::TryWaitSystemEvent(pSystemEvent);
}

extern "C" auto nnosTimedWaitSystemEvent(
  nn::os::SystemEventType* pSystemEvent, nn::TimeSpan timeout) {
  return nn::os::TimedWaitSystemEvent(pSystemEvent, timeout);
}

extern "C" auto nnosSignalSystemEvent(nn::os::SystemEventType* pSystemEvent) {
  return nn::os::SignalSystemEvent(pSystemEvent);
}

extern "C" auto nnosClearSystemEvent(nn::os::SystemEventType* pSystemEvent) {
  return nn::os::ClearSystemEvent(pSystemEvent);
}

extern "C" auto nnosGetReadableHandleOfSystemEvent(
  nn::os::SystemEventType const* pSystemEvent) {
  return nn::os::GetReadableHandleOfSystemEvent(pSystemEvent);
}

extern "C" auto nnosGetWritableHandleOfSystemEvent(
  nn::os::SystemEventType const* pSystemEvent) {
  return nn::os::GetWritableHandleOfSystemEvent(pSystemEvent);
}

extern "C" auto nnosInitializeMultiWaitHolderForSystemEvent(
  nn::os::MultiWaitHolderType* pMultiWaitHolder, nn::os::SystemEventType* pSystemEvent) {
  return nn::os::InitializeMultiWaitHolder(pMultiWaitHolder, pSystemEvent);
}

extern "C" auto nnosInitializeEvent(
  nn::os::EventType* pEvent, bool flag, nn::os::EventClearMode clearMode) {
  return nn::os::InitializeEvent(pEvent, flag, clearMode);
}

extern "C" auto nnosFinalizeEvent(nn::os::EventType* pEvent) {
  return nn::os::FinalizeEvent(pEvent);
}

extern "C" auto nnosWaitEvent(nn::os::EventType* pEvent) {
  return nn::os::WaitEvent(pEvent);
}

extern "C" auto nnosTimedWaitEvent(
  nn::os::EventType* pEvent, nn::TimeSpan timeout) {
  return nn::os::TimedWaitEvent(pEvent, timeout);
}

extern "C" auto nnosTryWaitEvent(nn::os::EventType* pEvent) {
  return nn::os::TryWaitEvent(pEvent);
}

extern "C" auto nnosSignalEvent(nn::os::EventType* pEvent) {
  return nn::os::SignalEvent(pEvent);
}

extern "C" auto nnosClearEvent(nn::os::EventType* pEvent) {
  return nn::os::ClearEvent(pEvent);
}

extern "C" auto nnosInitializeMultiWaitHolderForEvent(
  nn::os::MultiWaitHolderType* pMultiWaitHolder, nn::os::EventType* pEvent) {
  return nn::os::InitializeMultiWaitHolder(pMultiWaitHolder, pEvent);
}

extern "C" auto nnosFinalizeInterruptEvent(
  nn::os::InterruptEventType* pInterruptEvent) {
  return nn::os::FinalizeInterruptEvent(pInterruptEvent);
}

extern "C" auto nnosWaitInterruptEvent(
  nn::os::InterruptEventType* pInterruptEvent) {
  return nn::os::WaitInterruptEvent(pInterruptEvent);
}

extern "C" auto nnosTimedWaitInterruptEvent(
  nn::os::InterruptEventType* pInterruptEvent, nn::TimeSpan timeout) {
  return nn::os::TimedWaitInterruptEvent(pInterruptEvent, timeout);
}

extern "C" auto nnosTryWaitInterruptEvent(
  nn::os::InterruptEventType* pInterruptEvent) {
  return nn::os::TryWaitInterruptEvent(pInterruptEvent);
}

extern "C" auto nnosClearInterruptEvent(
  nn::os::InterruptEventType* pInterruptEvent) {
  return nn::os::ClearInterruptEvent(pInterruptEvent);
}

extern "C" auto nnosInitializeMultiWaitHolderForInterruptEvent(
  nn::os::MultiWaitHolderType* pMultiWaitHolder, nn::os::InterruptEventType* pInterruptEvent) {
  return nn::os::InitializeMultiWaitHolder(pMultiWaitHolder, pInterruptEvent);
}

extern "C" auto nnosInitializeMessageQueue(
  nn::os::MessageQueueType* pMessageQueue, unsigned long* pOutValue, unsigned long value) {
  return nn::os::InitializeMessageQueue(pMessageQueue, pOutValue, value);
}

extern "C" auto nnosFinalizeMessageQueue(
  nn::os::MessageQueueType* pMessageQueue) {
  return nn::os::FinalizeMessageQueue(pMessageQueue);
}

extern "C" auto nnosSendMessageQueue(
  nn::os::MessageQueueType* pMessageQueue, unsigned long value) {
  return nn::os::SendMessageQueue(pMessageQueue, value);
}

extern "C" auto nnosTrySendMessageQueue(
  nn::os::MessageQueueType* pMessageQueue, unsigned long value) {
  return nn::os::TrySendMessageQueue(pMessageQueue, value);
}

extern "C" auto nnosTimedSendMessageQueue(
  nn::os::MessageQueueType* pMessageQueue, unsigned long value, nn::TimeSpan timeout) {
  return nn::os::TimedSendMessageQueue(pMessageQueue, value, timeout);
}

extern "C" auto nnosJamMessageQueue(
  nn::os::MessageQueueType* pMessageQueue, unsigned long value) {
  return nn::os::JamMessageQueue(pMessageQueue, value);
}

extern "C" auto nnosTryJamMessageQueue(
  nn::os::MessageQueueType* pMessageQueue, unsigned long value) {
  return nn::os::TryJamMessageQueue(pMessageQueue, value);
}

extern "C" auto nnosTimedJamMessageQueue(
  nn::os::MessageQueueType* pMessageQueue, unsigned long value, nn::TimeSpan timeout) {
  return nn::os::TimedJamMessageQueue(pMessageQueue, value, timeout);
}

extern "C" auto nnosReceiveMessageQueue(
  unsigned long* pOutValue, nn::os::MessageQueueType* pMessageQueue) {
  return nn::os::ReceiveMessageQueue(pOutValue, pMessageQueue);
}

extern "C" auto nnosTryReceiveMessageQueue(
  unsigned long* pOutValue, nn::os::MessageQueueType* pMessageQueue) {
  return nn::os::TryReceiveMessageQueue(pOutValue, pMessageQueue);
}

extern "C" auto nnosTimedReceiveMessageQueue(
  unsigned long* pOutValue, nn::os::MessageQueueType* pMessageQueue, nn::TimeSpan timeout) {
  return nn::os::TimedReceiveMessageQueue(pOutValue, pMessageQueue, timeout);
}

extern "C" auto nnosPeekMessageQueue(
  unsigned long* pOutValue, nn::os::MessageQueueType const* pMessageQueue) {
  return nn::os::PeekMessageQueue(pOutValue, pMessageQueue);
}

extern "C" auto nnosTryPeekMessageQueue(
  unsigned long* pOutValue, nn::os::MessageQueueType const* pMessageQueue) {
  return nn::os::TryPeekMessageQueue(pOutValue, pMessageQueue);
}

extern "C" auto nnosTimedPeekMessageQueue(
  unsigned long* pOutValue, nn::os::MessageQueueType const* pMessageQueue, nn::TimeSpan timeout) {
  return nn::os::TimedPeekMessageQueue(pOutValue, pMessageQueue, timeout);
}

extern "C" auto nnosInitializeMultiWaitHolderForMessageQueue(
  nn::os::MultiWaitHolderType* pMultiWaitHolder, nn::os::MessageQueueType* pMessageQueue, nn::os::MessageQueueWaitType waitType) {
  return nn::os::InitializeMultiWaitHolder(
    pMultiWaitHolder, pMessageQueue, waitType);
}

extern "C" auto nnosInitializeMultiWait(nn::os::MultiWaitType* pMultiWait) {
  return nn::os::InitializeMultiWait(pMultiWait);
}

extern "C" auto nnosFinalizeMultiWait(nn::os::MultiWaitType* pMultiWait) {
  return nn::os::FinalizeMultiWait(pMultiWait);
}

extern "C" auto nnosWaitAny(nn::os::MultiWaitType* pMultiWait) {
  return nn::os::WaitAny(pMultiWait);
}

extern "C" auto nnosTryWaitAny(nn::os::MultiWaitType* pMultiWait) {
  return nn::os::TryWaitAny(pMultiWait);
}

extern "C" auto nnosTimedWaitAny(
  nn::os::MultiWaitType* pMultiWait, nn::TimeSpan timeout) {
  return nn::os::TimedWaitAny(pMultiWait, timeout);
}

extern "C" auto nnosFinalizeMultiWaitHolder(
  nn::os::MultiWaitHolderType* pMultiWaitHolder) {
  return nn::os::FinalizeMultiWaitHolder(pMultiWaitHolder);
}

extern "C" auto nnosLinkMultiWaitHolder(
  nn::os::MultiWaitType* pMultiWait, nn::os::MultiWaitHolderType* pMultiWaitHolder) {
  return nn::os::LinkMultiWaitHolder(pMultiWait, pMultiWaitHolder);
}

extern "C" auto nnosUnlinkMultiWaitHolder(
  nn::os::MultiWaitHolderType* pMultiWaitHolder) {
  return nn::os::UnlinkMultiWaitHolder(pMultiWaitHolder);
}

extern "C" auto nnosUnlinkAllMultiWaitHolder(
  nn::os::MultiWaitType* pMultiWait) {
  return nn::os::UnlinkAllMultiWaitHolder(pMultiWait);
}

extern "C" auto nnosMoveAllMultiWaitHolder(
  nn::os::MultiWaitType* pMultiWait, nn::os::MultiWaitType* pMultiWait2) {
  return nn::os::MoveAllMultiWaitHolder(pMultiWait, pMultiWait2);
}

extern "C" auto nnosSetMultiWaitHolderUserData(
  nn::os::MultiWaitHolderType* pMultiWaitHolder, unsigned long value) {
  return nn::os::SetMultiWaitHolderUserData(pMultiWaitHolder, value);
}

extern "C" auto nnosGetMultiWaitHolderUserData(
  nn::os::MultiWaitHolderType const* pMultiWaitHolder) {
  return nn::os::GetMultiWaitHolderUserData(pMultiWaitHolder);
}

extern "C" auto nnosCloseNativeHandle(unsigned int value) {
  return nn::os::CloseNativeHandle(value);
}

extern "C" auto nnosGetSystemTick() {
  return nn::os::GetSystemTick();
}

extern "C" auto nnosGetSystemTickOrdered() {
  return nn::os::GetSystemTickOrdered();
}

extern "C" auto nnosGetSystemTickFrequency() {
  return nn::os::GetSystemTickFrequency();
}

extern "C" auto nnosConvertTickToNanoSeconds(nn::os::Tick tick) {
  return nn::os::ConvertToTimeSpan(tick);
}

extern "C" auto nnosConvertNanoSecondsToTick(nn::TimeSpan timeout) {
  return nn::os::ConvertToTick(timeout);
}

extern "C" auto nnosNotifyDebugger(
  nnosNotificationReason reason, unsigned long value, unsigned long value2) {
  return nn::os::detail::NotifyDebuggerImpl(reason, value, value2);
}

extern "C" auto nnosGetUsedTlsSlotCount() {
  return nn::os::GetUsedTlsSlotCount();
}

extern "C" auto nnosFreeTlsSlot(nn::os::TlsSlot slot) {
  return nn::os::FreeTlsSlot(slot);
}

extern "C" auto nnosGetTlsValue(nn::os::TlsSlot slot) {
  return nn::os::GetTlsValue(slot);
}

extern "C" auto nnosSetTlsValue(nn::os::TlsSlot slot, uintptr_t value) {
  return nn::os::SetTlsValue(slot, value);
}
