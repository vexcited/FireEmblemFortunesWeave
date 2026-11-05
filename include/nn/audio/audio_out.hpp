#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/audio/audio_buffer_list.hpp"
#include "nn/os/synchronization.hpp"
#include "nn/result.hpp"
#include "nn/sf/native_handle.hpp"
#include "nn/sf/service_object.hpp"
#include "nn/sf/sf_buffers.hpp"
#include "nn/sf/shared_pointer.hpp"

namespace nn::os {

class SystemEvent;

}

namespace nn::audio {

struct AudioOutBuffer {
  AudioOutBuffer* _pNext;
  void* buffer;
  size_t bufferSize;
  size_t dataSize;
  void* _pList;
};

static_assert(sizeof(AudioOutBuffer) == 40);

struct AudioOutParameter {
  int sampleRate;
  uint16_t channelCount;
  uint16_t _reserved;
};

struct AudioOutInfo {
  char name[256];
};

enum AudioOutState {
  AudioOutState_Started,
  AudioOutState_Stopped,
};

struct AudioOut {
  int sampleRate;
  int channelCount;
  int sampleFormat;
  int state;
  char name[256];
  uint8_t reserved0[80];
  uint64_t reserved1;
};

static_assert(sizeof(AudioOut) == 360);

namespace detail {

class IAudioOut : public sf::IServiceObject {
public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result GetAudioOutState(sf::Out<uint32_t> state) = 0;
  virtual Result StartAudioOut() = 0;
  virtual Result StopAudioOut() = 0;
  virtual Result AppendAudioOutBuffer(const sf::InBuffer& buffer,
    uint64_t tag) = 0;
  virtual Result RegisterBufferEvent(sf::Out<sf::NativeHandle> handle) = 0;
  virtual Result GetReleasedAudioOutBuffers(const sf::OutBuffer& buffers,
    sf::Out<int> count) = 0;
  virtual Result ContainsAudioOutBuffer(uint64_t tag,
    sf::Out<bool> isContained) = 0;
  virtual Result AppendAudioOutBufferAuto(const sf::InBuffer& buffer,
    uint64_t tag) = 0;
  virtual Result GetReleasedAudioOutBuffersAuto(const sf::OutBuffer& buffers,
    sf::Out<int> count) = 0;
  virtual Result GetAudioOutBufferCount(sf::Out<int> count) = 0;
  virtual Result GetAudioOutPlayedSampleCount(sf::Out<uint64_t> count) = 0;
  virtual Result FlushAudioOutBuffers(sf::Out<bool> isFlushed) = 0;
  virtual Result SetAudioOutVolume(float volume) = 0;
  virtual Result GetAudioOutVolume(sf::Out<float> volume) = 0;
};

}

extern int g_AudioOutCountMax;

Result OpenAudioOut(AudioOut* audioOut, const char* name,
  const AudioOutParameter& parameter);

}
