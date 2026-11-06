#include "movie/detail/movie_video_decoder_event_manager.hpp"
#include "nn/diag/diag_abort.hpp"

namespace nn::syncpt::sdk {

Result CreateSyncPointEvent(SyncPointEventType* event);
void InitializeMultiWaitHolder(os::MultiWaitHolderType* holder,
  SyncPointEventType* event);
void CancelSyncPointEvent(SyncPointEventType* event);
void DestroySyncPointEvent(SyncPointEventType* event);
void RequestSyncPointEvent(SyncPointEventType* event,
  const SyncPointHandle& handle);

}

namespace movie::detail {

namespace {

constexpr int PauseCountMax = 256;

}

void VideoDecoderEventManager::Initialize() {
  nn::os::LockMutex(&m_Mutex);
  nn::os::InitializeMultiWait(&m_MultiWait);
  nn::os::InitializeSemaphore(&m_PauseSemaphore, 0, PauseCountMax);
  nn::os::InitializeMultiWaitHolder(&m_PauseHolder, &m_PauseSemaphore);
  nn::os::InitializeEvent(&m_StopEvent, false,
    nn::os::EventClearMode_ManualClear);
  nn::os::InitializeMultiWaitHolder(&m_StopHolder, &m_StopEvent);
  nn::os::LinkMultiWaitHolder(&m_MultiWait, &m_StopHolder);
  nn::os::LinkMultiWaitHolder(&m_MultiWait, &m_PauseHolder);
  nn::os::UnlockMutex(&m_Mutex);
}

void VideoDecoderEventManager::Finalize() {
  nn::os::UnlinkAllMultiWaitHolder(&m_MultiWait);
  nn::os::FinalizeMultiWaitHolder(&m_PauseHolder);
  nn::os::FinalizeMultiWaitHolder(&m_StopHolder);
  nn::os::FinalizeMultiWait(&m_MultiWait);
  nn::os::FinalizeSemaphore(&m_PauseSemaphore);
  nn::os::FinalizeEvent(&m_StopEvent);
  nn::os::UnlockMutex(&m_Mutex);
}

void VideoDecoderEventManager::RegisterImpl(Callback callback) {
  nn::os::LockMutex(&m_Mutex);
  m_IsSyncPointLinked = false;
  m_Callback = callback;
  NN_ABORT_UNLESS_RESULT_SUCCESS(nn::syncpt::sdk::CreateSyncPointEvent(
    &m_SyncPointEvent));
  nn::syncpt::sdk::InitializeMultiWaitHolder(&m_SyncPointHolder,
    &m_SyncPointEvent);
  nn::os::UnlockMutex(&m_Mutex);
}

void VideoDecoderEventManager::UnregisterSyncPointCallback() {
  if (m_IsSyncPointLinked) {
    nn::os::UnlinkMultiWaitHolder(&m_SyncPointHolder);
  }

  nn::os::FinalizeMultiWaitHolder(&m_SyncPointHolder);
  nn::syncpt::sdk::CancelSyncPointEvent(&m_SyncPointEvent);
  nn::syncpt::sdk::DestroySyncPointEvent(&m_SyncPointEvent);
}

void VideoDecoderEventManager::Stop() {
  nn::os::SignalEvent(&m_StopEvent);
  nn::os::LockMutex(&m_Mutex);
}

void VideoDecoderEventManager::Loop() {
  nn::os::LockMutex(&m_Mutex);
  while (true) {
    nn::os::MultiWaitHolderType* holder = nn::os::WaitAny(&m_MultiWait);
    if (holder == &m_StopHolder) {
      break;
    }

    if (holder == &m_PauseHolder) {
      nn::os::WaitConditionVariable(&m_ResumeCondition, &m_Mutex);
    }
    else if (holder == &m_SyncPointHolder) {
      nn::os::UnlinkMultiWaitHolder(&m_SyncPointHolder);
      m_IsSyncPointLinked = false;
      m_Callback();
    }
    else {
      nn::diag::detail::AbortImpl();
    }
  }

  nn::os::UnlockMutex(&m_Mutex);
}

void VideoDecoderEventManager::Pause() {
  nn::os::ReleaseSemaphore(&m_PauseSemaphore);
  nn::os::LockMutex(&m_Mutex);
}

void VideoDecoderEventManager::Resume() {
  nn::os::AcquireSemaphore(&m_PauseSemaphore);
  nn::os::SignalConditionVariable(&m_ResumeCondition);
  nn::os::UnlockMutex(&m_Mutex);
}

void VideoDecoderEventManager::SetFence(nn::gs::NativeSyncHandle fence) {
  nn::syncpt::sdk::CancelSyncPointEvent(&m_SyncPointEvent);
  nn::syncpt::sdk::SyncPointHandle handle = {{fence.value[0],
    fence.value[1]}};
  nn::syncpt::sdk::RequestSyncPointEvent(&m_SyncPointEvent, handle);
  if (!m_IsSyncPointLinked) {
    nn::os::LinkMultiWaitHolder(&m_MultiWait, &m_SyncPointHolder);
    m_IsSyncPointLinked = true;
  }
}

}
