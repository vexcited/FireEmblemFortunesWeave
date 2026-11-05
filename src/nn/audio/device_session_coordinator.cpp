#include "nn/audio/audio_device.hpp"
#include "nn/audio/detail/audio_abort.hpp"

namespace nn::audio::detail {

namespace {

DeviceSessionCoordinator g_DeviceSessionCoordinator;
bool g_IsUsbAudioDeviceOutputDeviceVolumeEnabled;

}

sf::SharedPointer<IAudioDevice> DeviceSessionCoordinator::Acquire() {
  m_Mutex.Lock();
  if (m_Session.operator->() == nullptr) {
    applet::AppletResourceUserId aruid = applet::GetAppletResourceUserId();
    uint32_t revision = common::GetCurrentRevision();
    sf::SharedPointer<IAudioRendererManager> manager =
      CreateAudioRendererManager(false);
    NN_AUDIO_ABORT_UNLESS_SUCCESS(manager->GetAudioDeviceServiceWithRevisionInfo(
      sf::Out<sf::SharedPointer<IAudioDevice>>(&m_Session), aruid, revision));
  }
  ++m_ReferenceCount;
  sf::SharedPointer<IAudioDevice> session = m_Session;
  m_Mutex.Unlock();
  return session;
}

void DeviceSessionCoordinator::Release() {
  m_Mutex.Lock();
  if (--m_ReferenceCount == 0) {
    m_Session.Reset();
  }
  m_Mutex.Unlock();
}

sf::SharedPointer<IAudioDevice> DeviceSessionCoordinator::Get() {
  return m_Session;
}

DeviceSessionCoordinator& GetDeviceSessionCoordinator() {
  return g_DeviceSessionCoordinator;
}

bool& GetIsUsbAudioDeviceOutputDeviceVolumeEnabled() {
  return g_IsUsbAudioDeviceOutputDeviceVolumeEnabled;
}

}
