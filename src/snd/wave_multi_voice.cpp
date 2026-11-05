#include "snd/wave_multi_voice.hpp"

#include "snd/slot.hpp"
#include "snd/wave_multi_stream_player.hpp"

namespace snd {

static_assert(sizeof(WaveMultiVoice) == 0x17d0);

inline WaveMultiStreamPlayer* WaveMultiVoice::getPlayer() const {
  return player_.get<WaveMultiStreamPlayer>();
}

bool WaveMultiVoice::isLoading() const {
  return loading_;
}

bool WaveMultiVoice::checkLoaded() {
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

// The player starts with its track when the voice is released.
void WaveMultiVoice::prepare() {
  preparing_ = false;
  prepared_ = true;
}

void WaveMultiVoice::start() {
  preparing_ = false;
  prepared_ = true;
}

bool WaveMultiVoice::isPrepared() const {
  return preparing_ && !loading_;
}

bool WaveMultiVoice::isPlaying() {
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

void WaveMultiVoice::updateHandle() {
  if (isPlaying()) {
    player_.isValid();
  }
}

// A negative track starts every track.
void WaveMultiVoice::release() {
  Voice::release();
  if (player_.isValid()) {
    int track = track_;
    WaveMultiStreamPlayer* player = player_.cast<WaveMultiStreamPlayer>();
    if (track < 0) {
      player->start();
    }
    else {
      player->startTrack(track_);
    }
  }
}

void WaveMultiVoice::pause(const Fade& fade, bool) {
  if (!dead_ && !paused_) {
    if (player_.isValid()) {
      getPlayer()->pause(fade);
    }
    paused_ = true;
  }
}

void WaveMultiVoice::resumePause(const Fade& fade) {
  if (!dead_ && paused_ == true) {
    paused_ = false;
    if (player_.isValid()) {
      getPlayer()->resumePause(fade);
    }
  }
}

void WaveMultiVoice::mute(const Fade& fade, bool) {
  if (!dead_ && !muted_) {
    muted_ = true;
    if (!silent_ && player_.isValid()) {
      getPlayer()->mute(fade);
    }
  }
}

void WaveMultiVoice::resumeMute(const Fade& fade) {
  if (!dead_ && muted_ == true) {
    muted_ = false;
    if (!silent_ && player_.isValid()) {
      getPlayer()->resumeMute(fade);
    }
  }
}

void WaveMultiVoice::silent(const Fade& fade, bool) {
  if (!dead_ && !silent_) {
    silent_ = true;
    if (!muted_ && player_.isValid()) {
      getPlayer()->mute(fade);
    }
  }
}

void WaveMultiVoice::resumeSilent(const Fade& fade) {
  if (!dead_ && silent_ == true) {
    silent_ = false;
    if (!muted_ && player_.isValid()) {
      getPlayer()->resumeMute(fade);
    }
  }
}

bool WaveMultiVoice::isActiveFor(Actor* actor) {
  if (active_ == true) {
    return actor_.get<Actor>() == actor;
  }
  else {
    return false;
  }
}

bool WaveMultiVoice::isActive() const {
  return active_;
}

void WaveMultiVoice::setVariable(int index, const Fade& fade, float value) {
  if (!dead_) {
    variables_[index] = value;
    fnd::WeakHandle handle = player_;
    if (WaveMultiStreamPlayer* player =
      handle.cast<WaveMultiStreamPlayer>())
    {
      player->setVariable(index, fade, value);
    }
  }
}

float WaveMultiVoice::getPlayPosition(uint32_t kind) {
  if (dead_ || isLoading() || isPrepared() || !isPlaying()
    || !player_.isValid())
  {
    return 0.0f;
  }
  return getPlayer()->getRemainingMs(kind);
}

void WaveMultiVoice::addToSlot() {
  slot_.get<Slot>()->addVoice(this);
}

void WaveMultiVoice::stopHandle(const Fade& fade) {
  if (player_.isValid()) {
    getPlayer()->stop(fade);
  }
}

void WaveMultiVoice::updatePlaying() {
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

}
