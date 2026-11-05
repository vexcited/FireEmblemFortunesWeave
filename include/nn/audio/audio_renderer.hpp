#pragma once

#include <stdint.h>

#include "nn/result.hpp"
#include "nn/sf/native_handle.hpp"
#include "nn/sf/sf_buffers.hpp"
#include "nn/sf/shared_pointer.hpp"

namespace nn::os {

struct SystemEventType;

}

namespace nn::audio {

enum AudioRendererState {
  AudioRendererState_Started,
  AudioRendererState_Stopped,
};

enum AudioRendererRenderingDevice {
  AudioRendererRenderingDevice_AudioCoprocessor,
  AudioRendererRenderingDevice_Cpu,
};

enum AudioRendererExecutionMode {
  AudioRendererExecutionMode_AutoExecution,
  AudioRendererExecutionMode_ManualExecution,
};

namespace detail {

class IAudioRenderer : public sf::IServiceObject {
public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result GetSampleRate(sf::Out<int> sampleRate) = 0;
  virtual Result GetSampleCount(sf::Out<int> sampleCount) = 0;
  virtual Result GetMixBufferCount(sf::Out<int> count) = 0;
  virtual Result GetState(sf::Out<int> state) = 0;
  virtual Result RequestUpdate(const sf::OutBuffer& outStatus,
    const sf::OutBuffer& performance, const sf::InBuffer& inParameter) = 0;
  virtual Result Start() = 0;
  virtual Result Stop() = 0;
  virtual Result QuerySystemEvent(sf::Out<sf::NativeHandle> handle) = 0;
  virtual Result SetRenderingTimeLimit(int limit) = 0;
  virtual Result GetRenderingTimeLimit(sf::Out<int> limit) = 0;
  virtual Result RequestUpdateAuto(const sf::OutBuffer& outStatus,
    const sf::OutBuffer& performance, const sf::InBuffer& inParameter) = 0;
  virtual Result ExecuteAudioRendererRendering() = 0;
  virtual Result SetVoiceDropParameter(float parameter) = 0;
  virtual Result GetVoiceDropParameter(sf::Out<float> parameter) = 0;
};

struct AudioRendererInfo {
  os::SystemEventType* pSystemEvent;
  int sampleRate;
  int sampleCount;
  int mixBufferCount;
  int state;
  int renderingTimeLimit;
  int renderingDevice;
  int executionMode;
  float voiceDropParameter;
};

static_assert(sizeof(AudioRendererInfo) == 40);

}

struct AudioRendererHandle {
  detail::IAudioRenderer* _pObject;
  detail::AudioRendererInfo* _pInfo;
};

void CloseAudioRenderer(AudioRendererHandle handle);
Result StartAudioRenderer(AudioRendererHandle handle);
void StopAudioRenderer(AudioRendererHandle handle);
int GetAudioRendererSampleRate(AudioRendererHandle handle);
int GetAudioRendererSampleCount(AudioRendererHandle handle);
int GetAudioRendererMixBufferCount(AudioRendererHandle handle);
AudioRendererState GetAudioRendererState(AudioRendererHandle handle);
Result SetAudioRendererRenderingTimeLimit(AudioRendererHandle handle,
  int limit);
int GetAudioRendererRenderingTimeLimit(AudioRendererHandle handle);
Result ExecuteAudioRendererRendering(AudioRendererHandle handle);
AudioRendererRenderingDevice GetAudioRendererRenderingDevice(
  AudioRendererHandle handle);
AudioRendererExecutionMode GetAudioRendererExecutionMode(
  AudioRendererHandle handle);
void SetAudioRendererVoiceDropParameter(AudioRendererHandle handle,
  float parameter);
float GetAudioRendererVoiceDropParameter(AudioRendererHandle handle);

}
