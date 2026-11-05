#include <new>

#include "nn/audio/server/audio_render_system.hpp"

namespace nn::audio::server {

AudioRenderSystemManager::AudioRenderSystemManager()
  : m_State{}, m_IsRunning(false) {
}

AudioRenderSystemManager::~AudioRenderSystemManager() {
}

void AudioRenderSystemManager::ThreadFunction(void* argument) {
  static_cast<AudioRenderSystemManager*>(argument)->ThreadFunctionImpl();
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

}
