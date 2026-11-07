#include <new>

#include "nn/audio/server/audio_render_system.hpp"
#include "nn/diag/diag_abort.hpp"
#include "nn/os/thread_api.hpp"
#include "nn/os/sleep_thread.hpp"
#include "nn/os/thread_info.hpp"
#include "nn/os/time.hpp"

namespace nn::audio::server {

namespace {

constexpr size_t ThreadStackSize = 0x3000;
constexpr int ThreadPriority = -7;

alignas(4096) uint8_t g_ThreadStack[ThreadStackSize];

constexpr uint64_t RenderingCycleTime = 4500000;

os::Tick g_LastCycleTick;

}

AudioRenderSystemManager::AudioRenderSystemManager()
  : m_Mutex(), m_ListMutex(), m_Thread(), m_IsRunning(false) {
}

AudioRenderSystemManager::~AudioRenderSystemManager() {
}

void AudioRenderSystemManager::ThreadFunction(void* argument) {
  static_cast<AudioRenderSystemManager*>(argument)->ThreadFunctionImpl();
}

void AudioRenderSystemManager::ThreadFunctionImpl() {
  while (true) {
    dsp::Wait();
    m_Mutex.Lock();
    for (util::IntrusiveListNode* node = m_Systems.GetNext();
      node != &m_Systems; node = node->GetNext()) {
      AudioRenderSystem& system = *reinterpret_cast<AudioRenderSystem*>(node);
      if (system.IsActive() &&
        system.m_Behavior->IsStabilizeAudioRendererCycleEnabled()) {
        const os::Tick now = os::GetSystemTick();
        const uint64_t elapsed = os::ConvertToTimeSpan(
          {now.value - g_LastCycleTick.value}).nanoseconds;
        if (elapsed < RenderingCycleTime) {
          os::SleepThread({static_cast<int64_t>(RenderingCycleTime - elapsed)});
        }
        g_LastCycleTick = os::GetSystemTick();
        break;
      }
    }
    m_Mutex.Unlock();
    if (m_IsRunning != true) {
      break;
    }
    m_Mutex.Lock();
    for (util::IntrusiveListNode* node = m_Systems.GetNext();
      node != &m_Systems; node = node->GetNext()) {
      reinterpret_cast<AudioRenderSystem*>(node)->SendCommandToDsp();
    }
    m_Mutex.Unlock();
    dsp::Signal();
  }
}

void AudioRenderSystemManager::CreateInstance(void* buffer, size_t size) {
  if (sManagerInstance == nullptr) {
    sManagerInstance = new (buffer) AudioRenderSystemManager();
  }
}

void AudioRenderSystemManager::DeleteInstance() {
  if (sManagerInstance != nullptr) {
    sManagerInstance->~AudioRenderSystemManager();
    sManagerInstance = nullptr;
  }
}

AudioRenderSystemManager* AudioRenderSystemManager::GetInstance() {
  return sManagerInstance;
}

void AudioRenderSystemManager::Sleep() {
  dsp::Sleep();
}

void AudioRenderSystemManager::Wake() {
  dsp::Wake();
}

void AudioRenderSystemManager::InitializeUnsafe() {
  if (m_IsRunning) {
    return;
  }
  m_IsRunning = true;
  NN_ABORT_UNLESS_RESULT_SUCCESS(dsp::Start());
  NN_ABORT_UNLESS_RESULT_SUCCESS(os::CreateThread(&m_Thread, ThreadFunction,
    this, g_ThreadStack, sizeof(g_ThreadStack), ThreadPriority));
  os::SetThreadNamePointer(&m_Thread, "nn.audio.AudioRenderSystemManager");
  os::StartThread(&m_Thread);
}

void AudioRenderSystemManager::FinalizeUnsafe() {
  if (m_IsRunning) {
    m_IsRunning = false;
    os::WaitThread(&m_Thread);
    os::DestroyThread(&m_Thread);
    dsp::Stop();
  }
}

bool AudioRenderSystemManager::Add(AudioRenderSystem& system) {
  m_ListMutex.Lock();
  m_Mutex.Lock();
  if (!m_Systems.IsLinked()) {
    InitializeUnsafe();
  }
  m_Mutex.Unlock();
  int count = 0;
  for (util::IntrusiveListNode* node = m_Systems.GetNext();
    node != &m_Systems; node = node->GetNext()) {
    ++count;
  }
  bool isAdded = false;
  if (count < SystemCountMax) {
    m_Systems.LinkPrev(&system.m_ListNode);
    isAdded = true;
  }
  m_ListMutex.Unlock();
  return isAdded;
}

void AudioRenderSystemManager::Remove(AudioRenderSystem& system) {
  m_ListMutex.Lock();
  m_Mutex.Lock();
  if (&system.m_ListNode != &m_Systems) {
    system.m_ListNode.Unlink();
  }
  m_Mutex.Unlock();
  if (!m_Systems.IsLinked()) {
    FinalizeUnsafe();
  }
  m_ListMutex.Unlock();
}

}
