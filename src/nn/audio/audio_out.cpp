#include "nn/audio/audio_out.hpp"
#include "nn/audio/detail/audio_abort.hpp"
#include "nn/os/system_event_class.hpp"

namespace nn::audio {

template class AudioBufferList<AudioOutBuffer>;

namespace {

struct AudioOutEntry {
  const AudioOut* pAudioOut;
  detail::IAudioOut* pSession;
};

struct AudioOutSessionTable {
  AudioOutEntry entries[3];
  int count;
  os::SdkRecursiveMutexType mutex;
};

AudioOutSessionTable g_AudioOutSessions;

detail::IAudioOut* FindAudioOutSession(const AudioOut* audioOut) {
  g_AudioOutSessions.mutex.Lock();
  for (int i = 0; i < g_AudioOutCountMax; ++i) {
    if (g_AudioOutSessions.entries[i].pAudioOut == audioOut) {
      detail::IAudioOut* session = g_AudioOutSessions.entries[i].pSession;
      g_AudioOutSessions.mutex.Unlock();
      return session;
    }
  }
  g_AudioOutSessions.mutex.Unlock();
  return nullptr;
}

void RemoveAudioOutSession(const AudioOut* audioOut) {
  g_AudioOutSessions.mutex.Lock();
  for (int i = 0; i < g_AudioOutCountMax; ++i) {
    if (g_AudioOutSessions.entries[i].pAudioOut == audioOut) {
      g_AudioOutSessions.entries[i].pAudioOut = nullptr;
      g_AudioOutSessions.entries[i].pSession = nullptr;
      --g_AudioOutSessions.count;
      break;
    }
  }
  g_AudioOutSessions.mutex.Unlock();
}

bool IsResultBufferCountMax(Result result) {
  return (result.value & 0x3fffff) == 0x1099;
}

}

void InitializeAudioOutParameter(AudioOutParameter* parameter) {
  parameter->sampleRate = 0;
  parameter->channelCount = 0;
  parameter->_reserved = 0xcafe;
}

void SetAudioOutBufferInfo(AudioOutBuffer* buffer, void* data,
  size_t bufferSize, size_t dataSize) {
  buffer->buffer = data;
  buffer->bufferSize = bufferSize;
  buffer->dataSize = dataSize;
}

void* GetAudioOutBufferDataPointer(const AudioOutBuffer* buffer) {
  return buffer->buffer;
}

size_t GetAudioOutBufferDataSize(const AudioOutBuffer* buffer) {
  return buffer->dataSize;
}

size_t GetAudioOutBufferBufferSize(const AudioOutBuffer* buffer) {
  return buffer->bufferSize;
}

Result OpenDefaultAudioOut(AudioOut* audioOut, os::SystemEvent* event,
  const AudioOutParameter& parameter) {
  NN_AUDIO_RESULT_DO(OpenAudioOut(audioOut, "", parameter));
  sf::NativeHandle handle;
  Result result = FindAudioOutSession(audioOut)->RegisterBufferEvent(
    sf::Out<sf::NativeHandle>(&handle));
  if (result.IsSuccess()) {
    event->AttachReadableHandle(handle.GetOsHandle(), handle.IsManaged(),
      os::EventClearMode_AutoClear);
    handle.Detach();
  }
  return result;
}

Result OpenAudioOut(AudioOut* audioOut, os::SystemEvent* event,
  const char* name, const AudioOutParameter& parameter) {
  NN_AUDIO_RESULT_DO(OpenAudioOut(audioOut, name, parameter));
  sf::NativeHandle handle;
  Result result = FindAudioOutSession(audioOut)->RegisterBufferEvent(
    sf::Out<sf::NativeHandle>(&handle));
  if (result.IsSuccess()) {
    event->AttachReadableHandle(handle.GetOsHandle(), handle.IsManaged(),
      os::EventClearMode_AutoClear);
    handle.Detach();
  }
  return result;
}

void CloseAudioOut(AudioOut* audioOut) {
  detail::IAudioOut* session = FindAudioOutSession(audioOut);
  if (session != nullptr) {
    audioOut->state = AudioOutState_Stopped;
    session->Release();
    RemoveAudioOutSession(audioOut);
  }
}

Result StartAudioOut(AudioOut* audioOut) {
  return FindAudioOutSession(audioOut)->StartAudioOut();
}

void StopAudioOut(AudioOut* audioOut) {
  NN_AUDIO_ABORT_UNLESS_SUCCESS(
    FindAudioOutSession(audioOut)->StopAudioOut());
}

AudioOutState GetAudioOutState(const AudioOut* audioOut) {
  uint32_t state = 0;
  detail::IAudioOut* session = FindAudioOutSession(audioOut);
  if (session == nullptr) {
    return static_cast<AudioOutState>(audioOut->state);
  }
  NN_AUDIO_ABORT_UNLESS_SUCCESS(
    session->GetAudioOutState(sf::Out<uint32_t>(&state)));
  return static_cast<AudioOutState>(state);
}

const char* GetAudioOutName(const AudioOut* audioOut) {
  return audioOut->name;
}

int GetAudioOutSampleRate(const AudioOut* audioOut) {
  return audioOut->sampleRate;
}

int GetAudioOutChannelCount(const AudioOut* audioOut) {
  return audioOut->channelCount;
}

int GetAudioOutSampleFormat(const AudioOut* audioOut) {
  return audioOut->sampleFormat;
}

bool AppendAudioOutBuffer(AudioOut* audioOut, AudioOutBuffer* buffer) {
  detail::IAudioOut* session = FindAudioOutSession(audioOut);
  Result result = session->AppendAudioOutBufferAuto(
    sf::InBuffer(buffer, sizeof(*buffer)), reinterpret_cast<uint64_t>(buffer));
  if (!IsResultBufferCountMax(result)) {
    NN_AUDIO_ABORT_UNLESS_SUCCESS(result);
  }
  return !IsResultBufferCountMax(result);
}

AudioOutBuffer* GetReleasedAudioOutBuffer(AudioOut* audioOut) {
  int count = 0;
  AudioOutBuffer* buffer = nullptr;
  sf::OutBuffer buffers(&buffer, sizeof(buffer));
  detail::IAudioOut* session = FindAudioOutSession(audioOut);
  NN_AUDIO_ABORT_UNLESS_SUCCESS(session->GetReleasedAudioOutBuffersAuto(
    buffers, sf::Out<int>(&count)));
  return count != 0 ? buffer : nullptr;
}

bool ContainsAudioOutBuffer(const AudioOut* audioOut,
  const AudioOutBuffer* buffer) {
  bool isContained;
  detail::IAudioOut* session = FindAudioOutSession(audioOut);
  NN_AUDIO_ABORT_UNLESS_SUCCESS(session->ContainsAudioOutBuffer(
    reinterpret_cast<uint64_t>(buffer), sf::Out<bool>(&isContained)));
  return isContained;
}

int GetAudioOutBufferCount(const AudioOut* audioOut) {
  detail::IAudioOut* session = FindAudioOutSession(audioOut);
  int count = 0;
  NN_AUDIO_ABORT_UNLESS_SUCCESS(
    session->GetAudioOutBufferCount(sf::Out<int>(&count)));
  return count;
}

uint64_t GetAudioOutPlayedSampleCount(const AudioOut* audioOut) {
  detail::IAudioOut* session = FindAudioOutSession(audioOut);
  uint64_t count = 0;
  NN_AUDIO_ABORT_UNLESS_SUCCESS(
    session->GetAudioOutPlayedSampleCount(sf::Out<uint64_t>(&count)));
  return count;
}

bool FlushAudioOutBuffers(AudioOut* audioOut) {
  detail::IAudioOut* session = FindAudioOutSession(audioOut);
  bool isFlushed = false;
  NN_AUDIO_ABORT_UNLESS_SUCCESS(
    session->FlushAudioOutBuffers(sf::Out<bool>(&isFlushed)));
  return isFlushed;
}

void SetAudioOutVolume(AudioOut* audioOut, float volume) {
  detail::IAudioOut* session = FindAudioOutSession(audioOut);
  NN_AUDIO_ABORT_UNLESS_SUCCESS(session->SetAudioOutVolume(volume));
}

float GetAudioOutVolume(const AudioOut* audioOut) {
  detail::IAudioOut* session = FindAudioOutSession(audioOut);
  float volume = 0.0f;
  NN_AUDIO_ABORT_UNLESS_SUCCESS(
    session->GetAudioOutVolume(sf::Out<float>(&volume)));
  return volume;
}

}
