#include "nn/audio/server/audio_render_system.hpp"

namespace nn::audio::server {

Result AudioRendererManagerImpl::AudioRendererImpl::Start() {
  return m_System.Start();
}

Result AudioRendererManagerImpl::AudioRendererImpl::Stop() {
  m_System.Stop();
  return {0};
}

Result AudioRendererManagerImpl::AudioRendererImpl::SetRenderingTimeLimit(
  int limit) {
  m_System.SetRenderingTimeLimit(limit);
  return {0};
}

Result AudioRendererManagerImpl::AudioRendererImpl::RequestUpdateInternal(
  const sf::OutBuffer& output, const sf::OutBuffer& performance,
  const sf::InBuffer& input) {
  return m_System.Update(output.GetPointerUnsafe(), output.GetSize(),
    performance.GetPointerUnsafe(), performance.GetSize(),
    input.GetPointerUnsafe(), input.GetSize());
}

Result AudioRendererManagerImpl::AudioRendererImpl::RequestUpdate(
  const sf::OutBuffer& output, const sf::OutBuffer& performance,
  const sf::InBuffer& input) {
  return m_System.Update(output.GetPointerUnsafe(), output.GetSize(),
    performance.GetPointerUnsafe(), performance.GetSize(),
    input.GetPointerUnsafe(), input.GetSize());
}

Result AudioRendererManagerImpl::AudioRendererImpl::RequestUpdateAuto(
  const sf::OutBuffer& output, const sf::OutBuffer& performance,
  const sf::InBuffer& input) {
  return m_System.Update(output.GetPointerUnsafe(), output.GetSize(),
    performance.GetPointerUnsafe(), performance.GetSize(),
    input.GetPointerUnsafe(), input.GetSize());
}

Result AudioRendererManagerImpl::AudioRendererImpl::SetVoiceDropParameter(
  float parameter) {
  m_System.SetVoiceDropParameter(parameter);
  return {0};
}

Result AudioRendererManagerImpl::AudioRendererImpl::
  ExecuteAudioRendererRendering() {
  return m_System.ExecuteAudioRendererRendering();
}

Result AudioRendererManagerImpl::AudioDeviceImpl::
  GetActiveAudioDeviceNameInternal(const sf::OutBuffer& name) {
  AudioDeviceName* buffer =
    reinterpret_cast<AudioDeviceName*>(name.GetPointerUnsafe());
  if (buffer == nullptr) {
    return {0x899};
  }
  detail::GetActiveAudioDeviceName(buffer, m_Revision);
  return {0};
}

Result AudioRendererManagerImpl::AudioDeviceImpl::GetActiveAudioDeviceName(
  const sf::OutBuffer& name) {
  AudioDeviceName* buffer =
    reinterpret_cast<AudioDeviceName*>(name.GetPointerUnsafe());
  if (buffer == nullptr) {
    return {0x899};
  }
  detail::GetActiveAudioDeviceName(buffer, m_Revision);
  return {0};
}

Result AudioRendererManagerImpl::AudioDeviceImpl::
  GetActiveAudioDeviceNameAuto(const sf::OutBuffer& name) {
  AudioDeviceName* buffer =
    reinterpret_cast<AudioDeviceName*>(name.GetPointerUnsafe());
  if (buffer == nullptr) {
    return {0x899};
  }
  detail::GetActiveAudioDeviceName(buffer, m_Revision);
  return {0};
}

Result AudioRendererManagerImpl::AudioDeviceImpl::
  GetActiveAudioOutputDeviceName(const sf::OutBuffer& name) {
  AudioDeviceName* buffer =
    reinterpret_cast<AudioDeviceName*>(name.GetPointerUnsafe());
  if (buffer == nullptr) {
    return {0x899};
  }
  detail::GetActiveAudioOutputDeviceName(buffer, m_Revision);
  return {0};
}

Result AudioRendererManagerImpl::AudioDeviceImpl::
  ReleaseAudioInputDeviceNotification(uint64_t processId) {
  return {0x40299};
}

Result AudioRendererManagerImpl::AudioDeviceImpl::
  ReleaseAudioOutputDeviceNotification(uint64_t processId) {
  return {0x40299};
}

Result AudioRendererManagerImpl::AudioDeviceImpl::
  SetAudioDeviceOutputVolumeAutoTuneEnabled(bool isEnabled) {
  detail::SetAudioDeviceOutputVolumeAutoTuneEnabled(isEnabled,
    m_AppletResourceUserId);
  return {0};
}

void AudioRendererManagerImpl::Sleep() {
}

void AudioRendererManagerImpl::Wake() {
}

}
