#include "nn/audio/audio_in.hpp"
#include "nn/audio/detail/audio_abort.hpp"
#include "nn/os/system_event_class.hpp"

namespace nn::audio {

template class AudioBufferList<AudioInBuffer>;

namespace {

struct AudioInEntry {
  const AudioIn* pAudioIn;
  detail::IAudioIn* pSession;
};

struct AudioInSessionTable {
  AudioInEntry entries[4];
  int count;
  os::SdkMutexType mutex;
};

AudioInSessionTable g_AudioInSessions;

detail::IAudioIn* FindAudioInSession(const AudioIn* audioIn) {
  g_AudioInSessions.mutex.Lock();
  for (int i = 0; i < 4; ++i) {
    if (g_AudioInSessions.entries[i].pAudioIn == audioIn) {
      detail::IAudioIn* session = g_AudioInSessions.entries[i].pSession;
      g_AudioInSessions.mutex.Unlock();
      return session;
    }
  }
  g_AudioInSessions.mutex.Unlock();
  return nullptr;
}

void RemoveAudioInSession(const AudioIn* audioIn) {
  g_AudioInSessions.mutex.Lock();
  for (int i = 0; i < 4; ++i) {
    if (g_AudioInSessions.entries[i].pAudioIn == audioIn) {
      g_AudioInSessions.entries[i].pAudioIn = nullptr;
      g_AudioInSessions.entries[i].pSession = nullptr;
      --g_AudioInSessions.count;
      break;
    }
  }
  g_AudioInSessions.mutex.Unlock();
}

bool IsResultBufferCountMax(Result result) {
  return (result.value & 0x3fffff) == 0x1099;
}

}

void InitializeAudioInParameter(AudioInParameter* parameter) {
  parameter->sampleRate = 0;
  parameter->channelCount = 0;
  parameter->_reserved = 0xbabe;
}

void SetAudioInBufferInfo(AudioInBuffer* buffer, void* data,
  size_t bufferSize, size_t dataSize) {
  buffer->buffer = data;
  buffer->bufferSize = bufferSize;
  buffer->dataSize = dataSize;
}

void* GetAudioInBufferDataPointer(const AudioInBuffer* buffer) {
  return buffer->buffer;
}

size_t GetAudioInBufferDataSize(const AudioInBuffer* buffer) {
  return buffer->dataSize;
}

size_t GetAudioInBufferBufferSize(const AudioInBuffer* buffer) {
  return buffer->bufferSize;
}

Result OpenDefaultAudioIn(AudioIn* audioIn, os::SystemEvent* event,
  const AudioInParameter& parameter) {
  NN_AUDIO_RESULT_DO(OpenAudioIn(audioIn, "", parameter));
  sf::NativeHandle handle;
  Result result = FindAudioInSession(audioIn)->RegisterBufferEvent(
    sf::Out<sf::NativeHandle>(&handle));
  if (result.IsSuccess()) [[likely]] {
    event->AttachReadableHandle(handle.GetOsHandle(), handle.IsManaged(),
      os::EventClearMode_AutoClear);
    handle.Detach();
  }
  return result;
}

Result OpenAudioIn(AudioIn* audioIn, os::SystemEvent* event,
  const char* name, const AudioInParameter& parameter) {
  NN_AUDIO_RESULT_DO(OpenAudioIn(audioIn, name, parameter));
  sf::NativeHandle handle;
  Result result = FindAudioInSession(audioIn)->RegisterBufferEvent(
    sf::Out<sf::NativeHandle>(&handle));
  if (result.IsSuccess()) [[likely]] {
    event->AttachReadableHandle(handle.GetOsHandle(), handle.IsManaged(),
      os::EventClearMode_AutoClear);
    handle.Detach();
  }
  return result;
}

void CloseAudioIn(AudioIn* audioIn) {
  detail::IAudioIn* session = FindAudioInSession(audioIn);
  if (session != nullptr) {
    audioIn->state = AudioInState_Stopped;
    session->Release();
    RemoveAudioInSession(audioIn);
  }
}

Result StartAudioIn(AudioIn* audioIn) {
  return FindAudioInSession(audioIn)->StartAudioIn();
}

void StopAudioIn(AudioIn* audioIn) {
  NN_AUDIO_ABORT_UNLESS_SUCCESS(
    FindAudioInSession(audioIn)->StopAudioIn());
}

AudioInState GetAudioInState(const AudioIn* audioIn) {
  uint32_t state = 0;
  detail::IAudioIn* session = FindAudioInSession(audioIn);
  if (session == nullptr) {
    return static_cast<AudioInState>(audioIn->state);
  }
  NN_AUDIO_ABORT_UNLESS_SUCCESS(
    session->GetAudioInState(sf::Out<uint32_t>(&state)));
  return static_cast<AudioInState>(state);
}

const char* GetAudioInName(const AudioIn* audioIn) {
  return audioIn->name;
}

int GetAudioInSampleRate(const AudioIn* audioIn) {
  return audioIn->sampleRate;
}

int GetAudioInChannelCount(const AudioIn* audioIn) {
  return audioIn->channelCount;
}

int GetAudioInSampleFormat(const AudioIn* audioIn) {
  return audioIn->sampleFormat;
}

bool AppendAudioInBuffer(AudioIn* audioIn, AudioInBuffer* buffer) {
  detail::IAudioIn* session = FindAudioInSession(audioIn);
  Result result = session->AppendAudioInBufferAuto(
    sf::InBuffer(buffer, sizeof(*buffer)), reinterpret_cast<uint64_t>(buffer));
  if (!IsResultBufferCountMax(result)) {
    NN_AUDIO_ABORT_UNLESS_SUCCESS(result);
  }
  return !IsResultBufferCountMax(result);
}

AudioInBuffer* GetReleasedAudioInBuffer(AudioIn* audioIn) {
  int count = 0;
  AudioInBuffer* buffer = nullptr;
  sf::OutBuffer buffers(&buffer, sizeof(buffer));
  detail::IAudioIn* session = FindAudioInSession(audioIn);
  NN_AUDIO_ABORT_UNLESS_SUCCESS(session->GetReleasedAudioInBuffersAuto(
    buffers, sf::Out<int>(&count)));
  return count != 0 ? buffer : nullptr;
}

bool ContainsAudioInBuffer(const AudioIn* audioIn,
  const AudioInBuffer* buffer) {
  bool isContained;
  detail::IAudioIn* session = FindAudioInSession(audioIn);
  NN_AUDIO_ABORT_UNLESS_SUCCESS(session->ContainsAudioInBuffer(
    reinterpret_cast<uint64_t>(buffer), sf::Out<bool>(&isContained)));
  return isContained;
}

int GetAudioInBufferCount(const AudioIn* audioIn) {
  detail::IAudioIn* session = FindAudioInSession(audioIn);
  int count = 0;
  NN_AUDIO_ABORT_UNLESS_SUCCESS(
    session->GetAudioInBufferCount(sf::Out<int>(&count)));
  return count;
}

bool FlushAudioInBuffers(AudioIn* audioIn) {
  detail::IAudioIn* session = FindAudioInSession(audioIn);
  bool isFlushed = false;
  NN_AUDIO_ABORT_UNLESS_SUCCESS(
    session->FlushAudioInBuffers(sf::Out<bool>(&isFlushed)));
  return isFlushed;
}

Result SetAudioInDeviceGain(AudioIn* audioIn, float gain) {
  FindAudioInSession(audioIn);
  return Result{0x40299};
}

float GetAudioInDeviceGain(const AudioIn* audioIn) {
  FindAudioInSession(audioIn);
  return 1.0f;
}

}
