#include "snd/game.hpp"

#include "snd/api.hpp"
#include "snd/voice.hpp"

namespace snd {

namespace {

void stopActive(const fnd::WeakHandle& handle, const Fade& fade) {
  if (Voice* voice = handle.get<Voice>()) {
    if (voice->isActive()) {
      voice->stop(fade, false, 0.0f);
    }
  }
}

Param* getActiveParam(const fnd::WeakHandle& handle) {
  Voice* voice = handle.get<Voice>();
  if (voice == nullptr || !voice->isActive()) {
    return nullptr;
  }
  return voice;
}

}

FF::FF() {
}

FF::~FF() {
  stop(Fade(0.0f));
}

// The BGM is only restored when the sound held it.
void FF::stop(const Fade& fade) {
  stopActive(voice_, fade);
  if (!plain_) {
    if (bgmPaused_ == true) {
      BGM::getInstance()->resumePauseAll(Fade(1000.0f));
    }
    if (bgmDucked_ == true) {
      BGM::getInstance()->startPitchCheckedAll(Fade(1000.0f), 1.0f);
    }
  }
  playing_ = false;
  plain_ = false;
  bgmPaused_ = false;
  bgmDucked_ = false;
}

void FF::update() {
  Voice* voice = voice_.get<Voice>();
  if (playing_ == true && (voice == nullptr || !voice->isActive())) {
    if (!plain_) {
      if (bgmPaused_ == true) {
        BGM::getInstance()->resumePauseAll(Fade(1000.0f));
      }
      if (bgmDucked_ == true) {
        BGM::getInstance()->startPitchCheckedAll(Fade(1000.0f), 1.0f);
        if (bgmDucked_ == true) {
          BGM::getInstance()->startPreviousVolumeAll(Fade(1000.0f), 1.0f);
        }
      }
    }
    playing_ = false;
    plain_ = false;
    bgmPaused_ = false;
    bgmDucked_ = false;
  }
}

void FF::playOverBgm(const char* name, const Fade& fade) {
  stopActive(voice_, fade);
  BGM::getInstance()->startPitchCheckedAll(Fade(100.0f), 0.2f);
  BGM::getInstance()->startPreviousVolumeAll(Fade(100.0f), 0.2f);
  voice_ = snd::play(name, name, fade, 0, 0x10001, 0, 0.0f, 1.0f);
  playing_ = true;
  plain_ = false;
  bgmPaused_ = false;
  bgmDucked_ = true;
}

void FF::playPausingBgm(const char* name, const Fade& fade) {
  stopActive(voice_, fade);
  BGM::getInstance()->pause(Fade(100.0f));
  voice_ = snd::play(name, name, fade, 0, 0x10001, 0, 0.0f, 1.0f);
  playing_ = true;
  plain_ = false;
  bgmPaused_ = true;
  bgmDucked_ = false;
}

void FF::playDuckingBgm(const char* name, const Fade& fade, float volume) {
  stopActive(voice_, fade);
  BGM::getInstance()->startPitchCheckedAll(Fade(100.0f), volume);
  voice_ = snd::play(name, name, fade, 0, 0x10001, 0, 0.0f, 1.0f);
  playing_ = true;
  plain_ = false;
  bgmPaused_ = false;
  bgmDucked_ = true;
}

void FF::playOver(const char* name, const Fade& fade) {
  s_instance->playOverBgm(name, fade);
}

void FF::playPausing(const char* name, const Fade& fade) {
  s_instance->playPausingBgm(name, fade);
}

void FF::playDucking(const char* name, const Fade& fade, float volume) {
  s_instance->playDuckingBgm(name, fade, volume);
}

void FF::play(const char* name, const Fade& fade) {
  FF* ff = s_instance;
  stopActive(ff->voice_, fade);
  ff->voice_ = snd::play(name, name, fade, 0, 0x10001, 0, 0.0f, 1.0f);
  ff->playing_ = true;
  ff->plain_ = true;
  ff->bgmPaused_ = false;
  ff->bgmDucked_ = false;
}

void FF::stopVoice(const Fade& fade) {
  s_instance->stop(fade);
}

bool FF::isPlaying() {
  Voice* voice = s_instance->voice_.get<Voice>();
  if (voice == nullptr) {
    return false;
  }
  return voice->isActive();
}

void FF::startVolume(const Fade& fade, float target) {
  if (Param* param = getActiveParam(s_instance->voice_)) {
    param->startVolume(fade, target);
  }
}

void FF::startPitch(const Fade& fade, float target) {
  if (Param* param = getActiveParam(s_instance->voice_)) {
    param->startPitch(fade, target);
  }
}

void FF::startPan(const Fade& fade, float target) {
  if (Param* param = getActiveParam(s_instance->voice_)) {
    param->startPan(fade, target);
  }
}

void FF::startLpfFrequency(const Fade& fade, float target) {
  if (Param* param = getActiveParam(s_instance->voice_)) {
    param->startLpfFrequency(fade, target);
  }
}

}
