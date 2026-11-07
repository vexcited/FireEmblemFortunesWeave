#include "nn/audio/server/audio_render_system.hpp"

namespace nn::audio::server {

namespace {

constexpr size_t AudioDeviceNameSize = 256;
constexpr float AudioDeviceOutputVolumeMax = 128.0f;
constexpr int HeapOption_DebugFill = 2;
constexpr int HeapOption_ThreadSafe = 4;

enum AudioRendererState {
  AudioRendererState_Started,
  AudioRendererState_Stopped,
};

float ClampVolume(float volume) {
  volume = volume < 0.0f ? 0.0f : volume;
  return volume > AudioDeviceOutputVolumeMax ? AudioDeviceOutputVolumeMax :
    volume;
}

}

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

AudioRendererManagerImpl::AudioDeviceImpl::AudioDeviceImpl(
  AudioRendererManagerImpl* parent, applet::AppletResourceUserId& id,
  uint32_t revision)
  : m_Parent(parent, true), m_AppletResourceUserId(id),
    m_Revision(revision) {
  detail::InitializeAudioDevice(m_AppletResourceUserId);
}

AudioRendererManagerImpl::AudioDeviceImpl::~AudioDeviceImpl() {
  detail::FinalizeAudioDevice(m_AppletResourceUserId);
}

Result AudioRendererManagerImpl::AudioDeviceImpl::ListAudioDeviceNameInternal(
  const sf::OutBuffer& names, sf::Out<int> pOutCount) {
  AudioDeviceName* buffer =
    reinterpret_cast<AudioDeviceName*>(names.GetPointerUnsafe());
  if (buffer == nullptr) {
    return {0x899};
  }
  *pOutCount = detail::ListAudioDeviceName(buffer,
    static_cast<int>(names.GetSize() / AudioDeviceNameSize), m_Revision);
  return {0};
}

Result AudioRendererManagerImpl::AudioDeviceImpl::ListAudioDeviceName(
  const sf::OutBuffer& names, sf::Out<int> pOutCount) {
  AudioDeviceName* buffer =
    reinterpret_cast<AudioDeviceName*>(names.GetPointerUnsafe());
  if (buffer == nullptr) {
    return {0x899};
  }
  *pOutCount = detail::ListAudioDeviceName(buffer,
    static_cast<int>(names.GetSize() / AudioDeviceNameSize), m_Revision);
  return {0};
}

Result AudioRendererManagerImpl::AudioDeviceImpl::ListAudioDeviceNameAuto(
  const sf::OutBuffer& names, sf::Out<int> pOutCount) {
  AudioDeviceName* buffer =
    reinterpret_cast<AudioDeviceName*>(names.GetPointerUnsafe());
  if (buffer == nullptr) {
    return {0x899};
  }
  *pOutCount = detail::ListAudioDeviceName(buffer,
    static_cast<int>(names.GetSize() / AudioDeviceNameSize), m_Revision);
  return {0};
}

Result AudioRendererManagerImpl::AudioDeviceImpl::
  SetAudioDeviceOutputVolumeInternal(const sf::InBuffer& name, float volume) {
  const AudioDeviceName* deviceName =
    reinterpret_cast<const AudioDeviceName*>(name.GetPointerUnsafe());
  if (deviceName == nullptr) {
    return {0x899};
  }
  detail::SetAudioDeviceOutputVolume(deviceName, ClampVolume(volume),
    m_AppletResourceUserId, m_Revision);
  return {0};
}

Result AudioRendererManagerImpl::AudioDeviceImpl::SetAudioDeviceOutputVolume(
  const sf::InBuffer& name, float volume) {
  const AudioDeviceName* deviceName =
    reinterpret_cast<const AudioDeviceName*>(name.GetPointerUnsafe());
  if (deviceName == nullptr) {
    return {0x899};
  }
  detail::SetAudioDeviceOutputVolume(deviceName, ClampVolume(volume),
    m_AppletResourceUserId, m_Revision);
  return {0};
}

Result AudioRendererManagerImpl::AudioDeviceImpl::
  SetAudioDeviceOutputVolumeAuto(const sf::InBuffer& name, float volume) {
  const AudioDeviceName* deviceName =
    reinterpret_cast<const AudioDeviceName*>(name.GetPointerUnsafe());
  if (deviceName == nullptr) {
    return {0x899};
  }
  detail::SetAudioDeviceOutputVolume(deviceName, ClampVolume(volume),
    m_AppletResourceUserId, m_Revision);
  return {0};
}

Result AudioRendererManagerImpl::AudioDeviceImpl::
  GetAudioDeviceOutputVolumeInternal(const sf::InBuffer& name,
  sf::Out<float> pOutVolume) {
  const AudioDeviceName* deviceName =
    reinterpret_cast<const AudioDeviceName*>(name.GetPointerUnsafe());
  if (deviceName == nullptr) {
    return {0x899};
  }
  *pOutVolume = detail::GetAudioDeviceOutputVolume(deviceName,
    m_AppletResourceUserId, m_Revision);
  return {0};
}

Result AudioRendererManagerImpl::AudioDeviceImpl::GetAudioDeviceOutputVolume(
  const sf::InBuffer& name, sf::Out<float> pOutVolume) {
  const AudioDeviceName* deviceName =
    reinterpret_cast<const AudioDeviceName*>(name.GetPointerUnsafe());
  if (deviceName == nullptr) {
    return {0x899};
  }
  *pOutVolume = detail::GetAudioDeviceOutputVolume(deviceName,
    m_AppletResourceUserId, m_Revision);
  return {0};
}

Result AudioRendererManagerImpl::AudioDeviceImpl::
  GetAudioDeviceOutputVolumeAuto(const sf::InBuffer& name,
  sf::Out<float> pOutVolume) {
  const AudioDeviceName* deviceName =
    reinterpret_cast<const AudioDeviceName*>(name.GetPointerUnsafe());
  if (deviceName == nullptr) {
    return {0x899};
  }
  *pOutVolume = detail::GetAudioDeviceOutputVolume(deviceName,
    m_AppletResourceUserId, m_Revision);
  return {0};
}

Result AudioRendererManagerImpl::AudioDeviceImpl::QueryAudioDeviceSystemEvent(
  sf::Out<sf::NativeHandle> pOutHandle) {
  uint32_t handle = 0;
  Result result = detail::QueryAudioDeviceSystemEvent(&handle,
    m_AppletResourceUserId);
  if (result.IsSuccess()) {
    sf::NativeHandle nativeHandle(handle, false);
    nativeHandle.Swap(*pOutHandle);
  }
  return result;
}

Result AudioRendererManagerImpl::AudioDeviceImpl::QueryAudioDeviceInputEvent(
  sf::Out<sf::NativeHandle> pOutHandle) {
  uint32_t handle = 0;
  Result result = detail::QueryAudioDeviceInputNotificationEvent(&handle,
    m_AppletResourceUserId);
  if (result.IsSuccess()) {
    sf::NativeHandle nativeHandle(handle, false);
    nativeHandle.Swap(*pOutHandle);
  }
  return result;
}

Result AudioRendererManagerImpl::AudioDeviceImpl::QueryAudioDeviceOutputEvent(
  sf::Out<sf::NativeHandle> pOutHandle) {
  uint32_t handle = 0;
  Result result = detail::QueryAudioDeviceOutputNotificationEvent(&handle,
    m_AppletResourceUserId);
  if (result.IsSuccess()) {
    sf::NativeHandle nativeHandle(handle, false);
    nativeHandle.Swap(*pOutHandle);
  }
  return result;
}

Result AudioRendererManagerImpl::AudioDeviceImpl::GetActiveChannelCount(
  sf::Out<int> pOutCount) {
  *pOutCount = detail::GetActiveChannelCount();
  return {0};
}

Result AudioRendererManagerImpl::AudioDeviceImpl::ListAudioOutputDeviceName(
  const sf::OutBuffer& names, sf::Out<int> pOutCount) {
  AudioDeviceName* buffer =
    reinterpret_cast<AudioDeviceName*>(names.GetPointerUnsafe());
  if (buffer == nullptr) {
    return {0x899};
  }
  *pOutCount = detail::ListAudioOutputDeviceName(buffer,
    static_cast<int>(names.GetSize() / AudioDeviceNameSize), m_Revision);
  return {0};
}

Result AudioRendererManagerImpl::AudioDeviceImpl::
  AcquireAudioInputDeviceNotification(sf::Out<sf::NativeHandle> pOutHandle,
  uint64_t processId) {
  return {0x40299};
}

Result AudioRendererManagerImpl::AudioDeviceImpl::
  AcquireAudioOutputDeviceNotification(sf::Out<sf::NativeHandle> pOutHandle,
  uint64_t processId) {
  return {0x40299};
}

Result AudioRendererManagerImpl::AudioDeviceImpl::
  IsAudioDeviceOutputVolumeAutoTuneEnabled(sf::Out<bool> pOutIsEnabled) {
  *pOutIsEnabled =
    detail::IsAudioDeviceOutputVolumeAutoTuneEnabled(m_AppletResourceUserId);
  return {0};
}

Result AudioRendererManagerImpl::AudioDeviceImpl::
  IsActiveOutputDeviceEstimatedLowLatency(sf::Out<bool> pOutIsLowLatency) {
  *pOutIsLowLatency = detail::IsActiveOutputDeviceEstimatedLowLatency();
  return {0};
}

Result AudioRendererManagerImpl::AudioRendererImpl::GetSampleRate(
  sf::Out<int> pOutSampleRate) {
  *pOutSampleRate = m_System.GetSampleRate();
  return {0};
}

Result AudioRendererManagerImpl::AudioRendererImpl::GetSampleCount(
  sf::Out<int> pOutSampleCount) {
  *pOutSampleCount = m_System.GetSampleCount();
  return {0};
}

Result AudioRendererManagerImpl::AudioRendererImpl::GetMixBufferCount(
  sf::Out<int> pOutMixBufferCount) {
  *pOutMixBufferCount = m_System.GetMixBufferCount();
  return {0};
}

Result AudioRendererManagerImpl::AudioRendererImpl::GetState(
  sf::Out<int> pOutState) {
  *pOutState = m_System.IsActive() ? AudioRendererState_Started :
    AudioRendererState_Stopped;
  return {0};
}

Result AudioRendererManagerImpl::AudioRendererImpl::GetRenderingTimeLimit(
  sf::Out<int> pOutLimit) {
  *pOutLimit = m_System.GetRenderingTimeLimit();
  return {0};
}

Result AudioRendererManagerImpl::AudioRendererImpl::QuerySystemEvent(
  sf::Out<sf::NativeHandle> pOutHandle) {
  uint32_t handle = 0;
  Result result = m_System.QuerySystemEvent(&handle);
  if (result.IsSuccess()) {
    sf::NativeHandle nativeHandle(handle, false);
    nativeHandle.Swap(*pOutHandle);
  }
  return result;
}

Result AudioRendererManagerImpl::AudioRendererImpl::GetVoiceDropParameter(
  sf::Out<float> pOutParameter) {
  *pOutParameter = m_System.GetVoiceDropParameter();
  return {0};
}

AudioRendererManagerImpl::AudioRendererManagerImpl()
  : m_SessionIdIndex(0), m_SessionIdMutex{} {
  m_Heap = lmem::CreateExpHeap(m_HeapBuffer, sizeof(m_HeapBuffer),
    HeapOption_DebugFill | HeapOption_ThreadSafe);
  m_Allocator.Attach(m_Heap);
  for (int i = 0; i < SessionCountMax; i++) {
    m_SessionIds[i] = i;
  }
  AudioRenderSystemManager::CreateInstance(m_SystemManagerBuffer,
    sizeof(m_SystemManagerBuffer));
}

AudioRendererManagerImpl::~AudioRendererManagerImpl() {
  AudioRenderSystemManager::DeleteInstance();
  lmem::DestroyExpHeap(m_Heap);
}

int AudioRendererManagerImpl::AcquireSessionId() {
  m_SessionIdMutex.Lock();
  int sessionId = m_SessionIds[m_SessionIdIndex];
  m_SessionIds[m_SessionIdIndex] = -1;
  ++m_SessionIdIndex;
  m_SessionIdMutex.Unlock();
  return sessionId;
}

void AudioRendererManagerImpl::ReleaseSessionId(int sessionId) {
  m_SessionIdMutex.Lock();
  --m_SessionIdIndex;
  m_SessionIds[m_SessionIdIndex] = sessionId;
  m_SessionIdMutex.Unlock();
}

Result AudioRendererManagerImpl::GetWorkBufferSize(sf::Out<int64_t> pOutSize,
  const audio::detail::AudioRendererParameterInternal& parameter) {
  size_t size = 0;
  Result result = AudioRenderSystem::GetWorkBufferSize(&size, parameter);
  if (result.IsSuccess()) {
    *pOutSize = size;
  }
  return result;
}

}
