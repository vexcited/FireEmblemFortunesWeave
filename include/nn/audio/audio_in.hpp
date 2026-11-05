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

struct AudioInBuffer {
  AudioInBuffer* _pNext;
  void* buffer;
  size_t bufferSize;
  size_t dataSize;
  void* _pList;
};

static_assert(sizeof(AudioInBuffer) == 40);

struct AudioInParameter {
  int sampleRate;
  uint16_t channelCount;
  uint16_t _reserved;
};

struct AudioInInfo {
  char name[256];
};

enum AudioInState {
  AudioInState_Started,
  AudioInState_Stopped,
};

struct AudioIn {
  int sampleRate;
  int channelCount;
  int sampleFormat;
  int state;
  char name[256];
  uint8_t reserved0[88];
  uint64_t reserved1;
};

static_assert(sizeof(AudioIn) == 368);

namespace detail {

class IAudioIn : public sf::IServiceObject {
public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result GetAudioInState(sf::Out<uint32_t> state) = 0;
  virtual Result StartAudioIn() = 0;
  virtual Result StopAudioIn() = 0;
  virtual Result AppendAudioInBuffer(const sf::InBuffer& buffer,
    uint64_t tag) = 0;
  virtual Result RegisterBufferEvent(sf::Out<sf::NativeHandle> handle) = 0;
  virtual Result GetReleasedAudioInBuffers(const sf::OutBuffer& buffers,
    sf::Out<int> count) = 0;
  virtual Result ContainsAudioInBuffer(uint64_t tag,
    sf::Out<bool> isContained) = 0;
  virtual Result AppendUacInBuffer(const sf::InBuffer& buffer, uint64_t tag,
    sf::NativeHandle handle) = 0;
  virtual Result AppendAudioInBufferAuto(const sf::InBuffer& buffer,
    uint64_t tag) = 0;
  virtual Result GetReleasedAudioInBuffersAuto(const sf::OutBuffer& buffers,
    sf::Out<int> count) = 0;
  virtual Result AppendUacInBufferAuto(const sf::InBuffer& buffer,
    uint64_t tag, sf::NativeHandle handle) = 0;
  virtual Result GetAudioInBufferCount(sf::Out<int> count) = 0;
  virtual Result SetDeviceGain(float gain) = 0;
  virtual Result GetDeviceGain(sf::Out<float> gain) = 0;
  virtual Result FlushAudioInBuffers(sf::Out<bool> isFlushed) = 0;
};

}

Result OpenAudioIn(AudioIn* audioIn, const char* name,
  const AudioInParameter& parameter);

}
