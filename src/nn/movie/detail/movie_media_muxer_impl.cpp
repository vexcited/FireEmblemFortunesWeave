#include "nandroid/MovieHeap.h"
#include "nn/diag/diag_abort.hpp"
#include "nn/movie/detail/movie_media_muxer_impl.hpp"
#include "nn/movie/detail/movie_media_extractor_impl.hpp"
#include "nn/movie/detail/movie_std_lib_allocator.hpp"
#include "nn/movie/detail/movie_thread_manager.hpp"

namespace nn::movie::detail {

void* AllocateMemory(size_t alignment, size_t size,
  AllocatorInfo* allocatorInfo);

namespace {

constexpr Result ResultInvalidArgument = {0x3ed00};
constexpr Result ResultOutOfMemory = {0x3f700};
constexpr Result ResultInvalidTrackIndex = {0xcf500};

constexpr size_t ThreadStackSize = 0x4000;
constexpr size_t ThreadStackAlignment = 0x1000;
constexpr int MessageQueueCapacity = 64;
constexpr int MessageBufferCount = 16;
constexpr size_t MessageBufferSize = 80;

}

[[gnu::visibility("hidden")]] void MediaMuxerThreadEntry(void* argument) {
  NN_ABORT_UNLESS_NOT_NULL(argument);
  auto muxer = static_cast<MediaMuxerImpl*>(argument);
  AllocatorInfo* allocatorInfo = muxer->GetAllocatorInfo();
  NN_ABORT_UNLESS_NOT_NULL(allocatorInfo);
  HeapMemoryManager::SetCurrentHeap(
    reinterpret_cast<HeapContext*>(allocatorInfo));
  muxer->RunMessageLoop();
}

Result MediaMuxerImpl::Initialize(AllocatorInfo* allocatorInfo,
  MediaWriter* writer, ContainerType containerType, void* threadInstance) {
  Result result = m_State.ValidateCurrentState(
    MediaMuxerState::MediaMuxerFunctions_Initialize);
  if (!IsSucceeded(result)) {
    return result;
  }

  m_IsFinalized = false;
  m_pAllocatorInfo = allocatorInfo;
  m_pThreadInstance = threadInstance;
  os::InitializeLightEvent(&m_Waiter, false, os::EventClearMode_AutoClear);
  if (m_pAllocatorInfo == nullptr) {
    return ResultOutOfMemory;
  }

  void* storage = AllocateMemory(sizeof(AndroidMediaMuxer), m_pAllocatorInfo);
  if (storage == nullptr) {
    return ResultOutOfMemory;
  }

  m_pMuxer = new (storage) AndroidMediaMuxer(m_pAllocatorInfo);
  result = InitializeMediaMuxerThread();
  if (!IsSucceeded(result)) {
    return result;
  }

  result = m_MessageBufferList.Initialize(m_pAllocatorInfo->allocator,
    MessageBufferCount, MessageBufferSize);
  if (!IsSucceeded(result)) {
    return result;
  }

  auto message = AcquireMessage<MuxerInitialize>();
  message->AddReference();
  void* instance = m_pThreadInstance;
  message->Reset();
  message->SetWaiter(&m_Waiter);
  message->m_pWriter = writer;
  message->m_ContainerType = containerType;
  message->m_pThreadInstance = instance;
  result = PostMessage(message);
  if (!IsSucceeded(result)) {
    return result;
  }

  m_State.SetState(MediaState::State_Initialized);
  return {};
}

Result MediaMuxerImpl::Finalize() {
  Result result = m_State.ValidateCurrentState(
    MediaMuxerState::MediaMuxerFunctions_Finalize);
  if (!IsSucceeded(result)) {
    return result;
  }

  if (m_pMuxer != nullptr) {
    auto message = AcquireMessage<MuxerFinalize>();
    message->AddReference();
    message->Reset();
    message->SetWaiter(&m_Waiter);
    result = PostMessage(message);
    if (!IsSucceeded(result)) {
      return result;
    }

    result = FinalizeMediaMuxerThread();
    if (!IsSucceeded(result)) {
      return result;
    }

    m_MessageBufferList.Finalize();
    m_pMuxer->~AndroidMediaMuxer();
    if (m_pAllocatorInfo != nullptr) {
      FreeMemory(m_pMuxer, m_pAllocatorInfo);
    }

    m_pMuxer = nullptr;
  }

  if (!m_IsFinalized) {
    os::FinalizeLightEvent(&m_Waiter);
    m_State.SetState(MediaState::State_None);
    m_IsFinalized = true;
  }

  m_TrackCount = 0;
  return {};
}

Result MediaMuxerImpl::Configure(const MediaProperty* property) {
  Result result = m_State.ValidateCurrentState(
    MediaMuxerState::MediaMuxerFunctions_Configure);
  if (!IsSucceeded(result)) {
    return result;
  }

  auto message = AcquireMessage<MuxerConfigure>();

  message->AddReference();
  message->Reset();
  message->SetWaiter(&m_Waiter);
  message->m_pProperty = property;
  return ToPublicResult(PostMessage(message));
}

Result MediaMuxerImpl::AddTrack(int* pOutIndex, const MediaProperty* property,
  const void* configuration, size_t configurationSize) {
  if (configurationSize == 0) {
    return ResultInvalidArgument;
  }

  Result result = m_State.ValidateCurrentState(
    MediaMuxerState::MediaMuxerFunctions_AddTrack);
  if (!IsSucceeded(result)) {
    return result;
  }

  auto message = AcquireMessage<MuxerAddTrack>();

  message->AddReference();
  message->Reset();
  message->SetWaiter(&m_Waiter);
  message->m_pProperty = property;
  message->m_pOutIndex = pOutIndex;
  message->m_pConfiguration = configuration;
  message->m_ConfigurationSize = configurationSize;
  result = PostMessage(message);
  if (!IsSucceeded(result)) {
    return result;
  }

  ++m_TrackCount;
  return {};
}

Result MediaMuxerImpl::GetTrackCount(int* pOutCount) {
  Result result = m_State.ValidateCurrentState(
    MediaMuxerState::MediaMuxerFunctions_GetTrackCount);
  if (!IsSucceeded(result)) {
    return result;
  }

  auto message = AcquireMessage<MuxerGetTrackCount>();

  message->AddReference();
  message->Reset();
  message->SetWaiter(&m_Waiter);
  message->m_pOutCount = pOutCount;
  return ToPublicResult(PostMessage(message));
}

Result MediaMuxerImpl::Start() {
  Result result = m_State.ValidateCurrentState(
    MediaMuxerState::MediaMuxerFunctions_Start);
  if (!IsSucceeded(result)) {
    return result;
  }

  auto message = AcquireMessage<MuxerStart>();

  message->AddReference();
  message->Reset();
  message->SetWaiter(&m_Waiter);
  result = PostMessage(message);
  if (!IsSucceeded(result)) {
    return result;
  }

  m_State.SetState(MediaState::State_Started);
  return {};
}

Result MediaMuxerImpl::Stop() {
  Result result = m_State.ValidateCurrentState(
    MediaMuxerState::MediaMuxerFunctions_Stop);
  if (!IsSucceeded(result)) {
    return result;
  }

  auto message = AcquireMessage<MuxerStop>();

  message->AddReference();
  message->Reset();
  message->SetWaiter(&m_Waiter);
  result = PostMessage(message);
  if (!IsSucceeded(result)) {
    return result;
  }

  m_State.SetState(MediaState::State_Stopped);
  return {};
}

Result MediaMuxerImpl::WriteAsync(const Buffer* buffer, int index) {
  if (index >= m_TrackCount) {
    return ResultInvalidTrackIndex;
  }

  Result result = m_State.ValidateCurrentState(
    MediaMuxerState::MediaMuxerFunctions_WriteAsync);
  if (!IsSucceeded(result)) {
    return result;
  }

  auto message = AcquireMessage<MuxerWriteAsync>();

  message->AddReference();
  message->Reset();
  message->SetWaiter(&m_Waiter);
  message->m_pBuffer = buffer;
  message->m_Index = index;
  return ToPublicResult(PostMessage(message));
}

void* MediaMuxerImpl::Allocate(size_t size) {
  if (m_pAllocatorInfo == nullptr) {
    return nullptr;
  }

  return AllocateMemory(size, m_pAllocatorInfo);
}

void* MediaMuxerImpl::Allocate(size_t alignment, size_t size) {
  if (m_pAllocatorInfo == nullptr) {
    return nullptr;
  }

  return AllocateMemory(alignment, size, m_pAllocatorInfo);
}

void MediaMuxerImpl::Deallocate(void* address) {
  if (m_pAllocatorInfo != nullptr) {
    FreeMemory(address, m_pAllocatorInfo);
  }
}

Result MediaMuxerImpl::SendMuxerMessage(Message* message) {
  return PostMessage(message);
}

void MediaMuxerImpl::ReleaseMuxerMessage(Message* message) {
  if (message->RemoveReference()) {
    m_MessageBufferList.ReleaseBuffer(message);
  }
}

Result MediaMuxerImpl::InitializeMediaMuxerThread() {
  if (m_pAllocatorInfo == nullptr) {
    m_pMessageQueueBuffer = nullptr;
    return ResultOutOfMemory;
  }

  m_pMessageQueueBuffer = static_cast<uintptr_t*>(AllocateMemory(
    MessageQueueCapacity * sizeof(uintptr_t), m_pAllocatorInfo));
  if (m_pMessageQueueBuffer == nullptr) {
    return ResultOutOfMemory;
  }

  os::InitializeMessageQueue(&m_MessageQueue, m_pMessageQueueBuffer,
    MessageQueueCapacity);
  if (ThreadManager::GetInstance()->_IsStackAllocatorConfigured()) {
    m_pThreadStack = ThreadManager::GetInstance()->_StackAllocate(
      ThreadStackSize, ThreadStackAlignment);
  }
  else if (m_pAllocatorInfo != nullptr) {
    m_pThreadStack = AllocateMemory(ThreadStackAlignment, ThreadStackSize,
      m_pAllocatorInfo);
  }
  else {
    m_pThreadStack = nullptr;
  }

  if (m_pThreadStack == nullptr) {
    return ResultOutOfMemory;
  }

  int priority =
    ThreadManager::GetInstance()->_GetThreadPriorityByInstance(
      m_pThreadInstance);
  uint64_t coreMask =
    ThreadManager::GetInstance()->_GetThreadCoreMaskByInstance(
      m_pThreadInstance);
  Result result = {static_cast<uint32_t>(ThreadManager::_StaticCreate(
    ThreadInfo::ComponentType_Muxer, &m_pThreadInfo, MediaMuxerThreadEntry,
    this, m_pThreadStack, ThreadStackSize, priority, "MediaMuxerThread",
    coreMask, m_pThreadInstance))};
  if (!IsSucceeded(result)) {
    return result;
  }

  m_IsThreadCreated = true;
  os::StartThread(&m_pThreadInfo->thread);
  m_IsThreadRunning = true;
  return {};
}

Result MediaMuxerImpl::FinalizeMediaMuxerThread() {
  if (m_IsThreadCreated) {
    if (m_IsThreadRunning) {
      auto message = AcquireMessage<MuxerThreadExit>();
      message->AddReference();
      message->Reset();
      message->SetWaiter(&m_Waiter);
      Result result = PostMessage(message);
      if (!IsSucceeded(result)) {
        return result;
      }

      os::WaitThread(&m_pThreadInfo->thread);
      m_IsThreadRunning = false;
    }

    ThreadManager::GetInstance()->_Destroy(m_pThreadInfo);
    m_IsThreadCreated = false;
  }

  if (m_pThreadStack != nullptr) {
    if (ThreadManager::GetInstance()->_IsStackAllocatorConfigured()) {
      ThreadManager::GetInstance()->_StackFree(m_pThreadStack);
    }
    else if (m_pAllocatorInfo != nullptr) {
      FreeMemory(m_pThreadStack, m_pAllocatorInfo);
    }

    m_pThreadStack = nullptr;
  }

  if (m_pMessageQueueBuffer != nullptr) {
    os::FinalizeMessageQueue(&m_MessageQueue);
    if (m_pAllocatorInfo != nullptr) {
      FreeMemory(m_pMessageQueueBuffer, m_pAllocatorInfo);
    }

    m_pMessageQueueBuffer = nullptr;
  }

  return {};
}

void MediaMuxerImpl::MediaMuxerThreadLoop() {
  RunMessageLoop();
}

}
