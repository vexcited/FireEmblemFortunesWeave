#include "snd/wave_voice.hpp"

#include <algorithm>
#include <cmath>
#include <cstdlib>

#include "snd/slot.hpp"
#include "snd/target/base.hpp"
#include "snd/wave_player.hpp"

namespace snd {

static_assert(sizeof(WaveVoice) == 0x17d0);

inline WavePlayer* WaveVoice::getPlayer() const {
  return player_.get<WavePlayer>();
}

void WaveVoice::updateTarget() {
  if (!dead_ && prepared_ == true) {
    float volume = calcVolume();
    float pitch = calcPitch();
    float pan = calcPan();
    float surroundPan = calcSurroundPan();
    float biquadValue = calcBiquadValue();
    float fxSend = calcFxSend();
    float outputVolume = calcOutputVolume();
    float lpf = calcLpf();
    setStartOffset(volume);
    if (WavePlayer* player = getPlayer()) {
      player->startVolume(Fade(0.0f), volume);
      player->startPitch(Fade(0.0f), pitch);
      player->startPan(Fade(0.0f), pan);
      player->startSurroundPan(Fade(0.0f), surroundPan);
      player->startBiquadValue(Fade(0.0f), biquadValue);
      player->startFxSend(Fade(0.0f), fxSend);
      player->startOutputVolume(Fade(0.0f), outputVolume);
      player->startLpfFrequency(Fade(0.0f), lpf);
      for (int i = 0; i < 6; i++) {
        player->setChannelId(i, getChannelId(i));
      }
    }
  }
}

void WaveVoice::load() {
  target::SoundHandle* handle = g_target->startSound(this);
  getPlayer()->load(handle, isStream(), hasFeature4(), scrubbable_);
  getPlayer()->setSource(soundId_, archive_, addon_);
  loading_ = true;
}

bool WaveVoice::isLoading() const {
  return loading_;
}

bool WaveVoice::checkLoaded() {
  if (loaded_) {
    return true;
  }
  if (!getPlayer()->isLoaded()) {
    return false;
  }
  if (!getPlayer()->isReady()) {
    return false;
  }
  loading_ = false;
  loaded_ = true;
  return true;
}

void WaveVoice::prepare() {
  if (buffer_->loadState == 0) {
    getPlayer()->start();
  }
  preparing_ = false;
  prepared_ = true;
}

void WaveVoice::start() {
  if (buffer_->loadState == 0) {
    getPlayer()->start();
  }
  preparing_ = false;
  prepared_ = true;
}

// The start offset is picked between the two buffer bounds when the upper
// one is set.
void WaveVoice::play() {
  if (buffer_->loadState == 0) {
    if (WavePlayer* player = getPlayer()) {
      int offset = static_cast<int>(fmaxf(buffer_->startOffsetMin, 0.0f));
      float max = buffer_->startOffsetMax;
      if (max > 0.0f) {
        float range = max - static_cast<float>(offset);
        float random = static_cast<float>(rand()) / 2147483648.0f;
        offset += static_cast<int>(
          (static_cast<float>(static_cast<int>(range)) + 0.9f) * random);
      }
      player->seekMs(std::max(kind_, 0) + offset);
    }
  }
  Param& param = *this;
  param.update(0.0f);
  preparing_ = true;
}

bool WaveVoice::isPrepared() const {
  return preparing_ && !loading_;
}

bool WaveVoice::isPlaying() {
  if (state_ == kStateIdle) {
    return false;
  }
  if (loading_) {
    return false;
  }
  if (prepared_) {
    return true;
  }
  if (player_.isValid() && getPlayer()->isReady()) {
    preparing_ = false;
    prepared_ = true;
  }
  return prepared_;
}

void WaveVoice::updateHandle() {
  if (isPlaying() && player_.isValid()) {
    getPlayer()->start();
  }
}

void WaveVoice::pause(const Fade& fade, bool) {
  if (!dead_ && !paused_) {
    if (player_.isValid()) {
      getPlayer()->pause(fade);
    }
    paused_ = true;
  }
}

void WaveVoice::resumePause(const Fade& fade) {
  if (!dead_ && paused_ == true) {
    paused_ = false;
    if (player_.isValid()) {
      getPlayer()->resumePause(fade);
    }
  }
}

void WaveVoice::mute(const Fade& fade, bool) {
  if (!dead_ && !muted_) {
    muted_ = true;
    if (!silent_ && player_.isValid()) {
      getPlayer()->mute(fade);
    }
  }
}

void WaveVoice::resumeMute(const Fade& fade) {
  if (!dead_ && muted_ == true) {
    muted_ = false;
    if (!silent_ && player_.isValid()) {
      getPlayer()->resumeMute(fade);
    }
  }
}

void WaveVoice::silent(const Fade& fade, bool) {
  if (!dead_ && !silent_) {
    silent_ = true;
    if (!muted_ && player_.isValid()) {
      getPlayer()->mute(fade);
    }
  }
}

void WaveVoice::resumeSilent(const Fade& fade) {
  if (!dead_ && silent_ == true) {
    silent_ = false;
    if (!muted_ && player_.isValid()) {
      getPlayer()->resumeMute(fade);
    }
  }
}

bool WaveVoice::isActiveFor(Actor* actor) {
  if (active_ == true) {
    return actor_.get<Actor>() == actor;
  }
  else {
    return false;
  }
}

bool WaveVoice::isActive() const {
  return active_;
}

void WaveVoice::setVariable(int index, const Fade&, float value) {
  if (!dead_) {
    variables_[index] = value;
  }
}

// The position queries only answer once the player has started. Asking
// whether the voice plays may update its prepared flags.
inline bool WaveVoice::isPositionKnown() const {
  auto* self = const_cast<WaveVoice*>(this);
  return !dead_ && !isLoading() && !isPrepared() && self->isPlaying()
    && player_.isValid();
}

float WaveVoice::getPlayTime(uint32_t) {
  if (!isPositionKnown()) {
    return -1.0f;
  }
  return getPlayer()->getPlayTime();
}

float WaveVoice::getPlayPosition(uint32_t kind) {
  if (!isPositionKnown()) {
    return -1.0f;
  }
  return getPlayer()->getRemainingMs(kind);
}

int WaveVoice::getPlaySample(uint32_t kind) {
  if (!isPositionKnown()) {
    return -1;
  }
  return getPlayer()->getRemainingSamples(kind);
}

float WaveVoice::getLength() const {
  if (!isPositionKnown()) {
    return -1.0f;
  }
  return getPlayer()->getLength();
}

bool WaveVoice::isStream() const {
  if (scrubbable_) {
    return true;
  }
  return buffer_->features[3] > 0 || streamed_;
}

void WaveVoice::addToSlot() {
  slot_.get<Slot>()->addVoice(this);
}

void WaveVoice::stopHandle(const Fade& fade) {
  if (player_.isValid()) {
    getPlayer()->stop(fade);
  }
}

void WaveVoice::updatePlaying() {
  if (dead_ || invalid_) {
    active_ = false;
    return;
  }
  if (buffer_->length < 0.0f || isEnvelopeReleased() || isEnvelopeFading()
    || isEnvelopeEnded())
  {
    if (static_cast<unsigned>(state_ - 1) < 5
      || (buffer_->loadState != 0 && buffer_->loadCount != 0))
    {
      active_ = true;
    }
    else {
      active_ = player_.isValid();
    }
  }
  else {
    active_ = !stopping_;
  }
}

void WaveVoice::scrub(bool fade, float time) {
  if (dead_ || isLoading() || isPrepared() || !isPlaying()) {
    return;
  }
  if (scrubbable_ == true && player_.isValid()) {
    getPlayer()->scrub(fade, time);
  }
}

}
