#include "nn/audio/audio_system.hpp"
#include "nn/os/synchronization.hpp"

namespace nn::audio {

namespace {

using DebuggerManager =
  sf::SharedPointer<detail::IAudioSystemManagerForDebugger>;

os::SdkMutexType g_DebuggerManagerMutex;

class DebuggerManagerHolder {
public:
  DebuggerManagerHolder() {
    static DebuggerManager s_Manager;
    if (s_Manager.operator->() == nullptr) {
      g_DebuggerManagerMutex.Lock();
      if (s_Manager.operator->() == nullptr) {
        DebuggerManager manager = CreateAudioSystemManagerForDebuggerByHipc();
        DebuggerManager(manager.Detach(), false).Swap(s_Manager);
      }
      g_DebuggerManagerMutex.Unlock();
    }
    m_pManager = s_Manager.operator->();
    if (m_pManager != nullptr) {
      m_pManager->AddReference();
    }
  }

  ~DebuggerManagerHolder() {
    m_pManager->Release();
  }

  detail::IAudioSystemManagerForDebugger* operator->() const {
    return m_pManager;
  }

private:
  detail::IAudioSystemManagerForDebugger* m_pManager;
};

}

Result RequestSuspendAudioForDebug(applet::AppletResourceUserId aruid) {
  DebuggerManagerHolder manager;
  return manager->RequestSuspendAudioForDebug(aruid);
}

Result RequestResumeAudioForDebug(applet::AppletResourceUserId aruid) {
  DebuggerManagerHolder manager;
  return manager->RequestResumeAudioForDebug(aruid);
}

}
