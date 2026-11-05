#include "snd/target/sound.hpp"

#include "snd/target/atk_types.hpp"

namespace snd::target {

static_assert(sizeof(SoundVoiceNX) == 0x1080);

namespace {

using nn::atk::detail::driver::HardwareManager;

}

SoundVoice::~SoundVoice() = default;

SoundVoiceNX::~SoundVoiceNX() {
  release();
}

void SoundVoiceNX::release() {
  if (acquired_ == true) {
    HardwareManager::GetInstance().LockRenderer();
    nn::audio::ReleaseVoiceSlot(
      HardwareManager::GetInstance().GetRendererConfig(), &voice_);
    HardwareManager::GetInstance().UnlockRenderer();
    acquired_ = false;
  }
}

bool SoundVoiceNX::isVoiceValid() {
  HardwareManager::GetInstance().LockRenderer();
  bool valid = nn::audio::IsVoiceValid(&voice_);
  HardwareManager::GetInstance().UnlockRenderer();
  return valid;
}

bool SoundVoiceNX::isValid() {
  if (acquired_ == true) {
    return isVoiceValid();
  }
  return false;
}

const SoundVoice::Buffer* SoundVoiceNX::getReleasedBuffer() {
  if (acquired_ == true && isVoiceValid()) {
    HardwareManager::GetInstance().LockRenderer();
    const nn::audio::WaveBuffer* released =
      nn::audio::GetReleasedWaveBuffer(&voice_);
    HardwareManager::GetInstance().UnlockRenderer();
    if (released != nullptr) {
      for (Buffer& buffer : buffers_) {
        if (buffer.data == released->buffer) {
          return &buffer;
        }
      }
    }
  }
  return nullptr;
}

int SoundVoiceNX::getBufferCount() {
  int count = 0;
  if (acquired_ == true && isVoiceValid()) {
    HardwareManager::GetInstance().LockRenderer();
    count = nn::audio::GetWaveBufferCount(&voice_);
    HardwareManager::GetInstance().UnlockRenderer();
  }
  return count;
}

int64_t SoundVoiceNX::getPlayedSampleCount() {
  int64_t count = 0;
  if (acquired_ == true && isVoiceValid()) {
    HardwareManager::GetInstance().LockRenderer();
    count = nn::audio::GetVoicePlayedSampleCount(&voice_);
    HardwareManager::GetInstance().UnlockRenderer();
  }
  return count;
}

void SoundVoiceNX::setVolume(float volume) {
  if (acquired_ == true) {
    HardwareManager::GetInstance().LockRenderer();
    nn::audio::SetVoiceVolume(&voice_, volume);
    HardwareManager::GetInstance().UnlockRenderer();
  }
}

void SoundVoiceNX::start() {
  if (acquired_ == true) {
    HardwareManager::GetInstance().LockRenderer();
    nn::audio::SetVoicePlayState(&voice_,
      nn::audio::VoiceType::PlayState_Start);
    HardwareManager::GetInstance().UnlockRenderer();
  }
}

void SoundVoiceNX::stop() {
  if (acquired_ == true) {
    HardwareManager::GetInstance().LockRenderer();
    nn::audio::SetVoicePlayState(&voice_,
      nn::audio::VoiceType::PlayState_Stop);
    HardwareManager::GetInstance().UnlockRenderer();
  }
}

bool SoundVoiceNX::isPlaying() {
  bool playing = false;
  if (acquired_ == true && isVoiceValid()) {
    HardwareManager::GetInstance().LockRenderer();
    playing = nn::audio::GetVoicePlayState(&voice_) ==
      nn::audio::VoiceType::PlayState_Start;
    HardwareManager::GetInstance().UnlockRenderer();
  }
  return playing;
}

}
