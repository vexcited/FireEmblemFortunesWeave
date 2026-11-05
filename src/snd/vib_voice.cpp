#include "snd/vib_voice.hpp"

#include "snd/seq_voice.hpp"
#include "snd/slot.hpp"

namespace snd {

static_assert(sizeof(VibVoice) == 0x1808);

void VibVoice::destroy() {
  slot_.get<Slot>()->destroyVoice(this);
}

void VibVoice::mainUnlocked() {
  mainCore(false);
}

float VibVoice::getPriorityReduction() const {
  return priorityReduction_;
}

bool VibVoice::isLoading() const {
  return vibration_.isValid() & loading_;
}

bool VibVoice::isPrepared() const {
  return preparing_ && !loading_;
}

bool VibVoice::isPlaying() {
  if (state_ == kStateIdle) {
    return false;
  }
  if (loading_) {
    return false;
  }
  if (!prepared_) {
    preparing_ = false;
    prepared_ = true;
  }
  return true;
}

void VibVoice::stop(const Fade& fade, bool force, float value) {
  stopImpl(fade, force, value);
}

bool VibVoice::isActive() const {
  return active_;
}

void VibVoice::checkPriority() {
  slot_.get<Slot>()->checkPriority(this);
}

uint32_t VibVoice::getSoundType() const {
  return vibInfo_->type;
}

int VibVoice::getSoundGroup() const {
  return vibInfo_->group;
}

void VibVoice::addToSlot() {
  slot_.get<Slot>()->addVoice(this);
}

void** VibVoice::getRegistry() {
  static void* base = Voice::registry();
  return &base;
}

void VibVoice::updateActor() {
  if (dead_ == true) {
    if (!vibration_.isValid() ||
      vibration_.get<VibrationData>()->isLoaded()) {
      destroy();
    }
  }
}

void VibVoice::update(float ms) {
  if (dead_ || state_ == kStateIdle || paused_ || muted_ || silent_) {
    return;
  }
  if (isEnvelopeReleased() || isEnvelopeFading() || isEnvelopeEnded() ||
    buffer_->length < 0.0f || getFrame() < buffer_->length / 16.667f) {
    Param::update(ms);
  }
  else {
    stopping_ = true;
    stopImpl(Fade(0), false, 0.0f);
  }
}

bool VibVoice::checkLoaded() {
  if (!hasVibration()) {
    return true;
  }
  if (loaded_) {
    return true;
  }
  if (!vibration_.isValid()) {
    return false;
  }
  if (!vibration_.get<VibrationData>()->isLoaded()) {
    return false;
  }
  file_ = vibration_.get<VibrationData>()->getData();
  fileSize_ = vibration_.get<VibrationData>()->getSize();
  loading_ = false;
  loaded_ = true;
  return true;
}

void VibVoice::setSource() {
  const char* data = reinterpret_cast<const char*>(file_);
  if (file_->format == 2) {
    player_->setSource(data + file_->offset, file_->size,
      data + file_->loopOffset, file_->loopSize);
  }
  else {
    player_->setSource(data + file_->offset, file_->size,
      data + file_->offset, file_->size);
  }
}

void VibVoice::prepare() {
  if (hasVibration() && file_ != nullptr) {
    setSource();
    player_->play();
  }
  error_ = 0;
  preparing_ = false;
  prepared_ = true;
}

void VibVoice::start() {
  if (hasVibration() && file_ != nullptr) {
    setSource();
    player_->play();
  }
  error_ = 0;
  preparing_ = false;
  prepared_ = true;
}

void VibVoice::play() {
  if (hasVibration() && file_ != nullptr) {
    setSource();
  }
}

void VibVoice::updateHandle() {
  if (hasVibration() && isPlaying()) {
    player_->play();
  }
}

void VibVoice::stop(const Fade& fade, Actor* actor, bool force, float value) {
  if (actor_.get<Actor>() == actor) {
    stopImpl(fade, force, value);
  }
}

void VibVoice::killImpl() {
  parent_.reset();
  finish();
  envelope_.setState(Fade::CtrlTypeAHDSR::kStateEnd);
  if (player_->isPlaying()) {
    player_->stop();
  }
}

void VibVoice::kill(Actor* actor) {
  if (actor_.get<Actor>() == actor && !dead_) {
    killImpl();
  }
}

void VibVoice::kill() {
  if (!dead_) {
    killImpl();
  }
}

void VibVoice::pause(const Fade& fade, Actor* actor) {
  if (!dead_ && actor_.get<Actor>() == actor) {
    pause(fade, false);
  }
}

void VibVoice::pause(const Fade&, bool) {
  if (!dead_ && !paused_) {
    player_->togglePause();
    paused_ = true;
  }
}

void VibVoice::resumePause(const Fade& fade, Actor* actor) {
  if (!dead_ && actor_.get<Actor>() == actor) {
    resumePause(fade);
  }
}

void VibVoice::resumePause(const Fade&) {
  if (!dead_ && paused_ == true) {
    paused_ = false;
    player_->togglePause();
  }
}

void VibVoice::mute(const Fade& fade, Actor* actor) {
  if (!dead_ && actor_.get<Actor>() == actor) {
    mute(fade, false);
  }
}

void VibVoice::mute(const Fade&, bool) {
  if (!dead_ && !muted_) {
    muted_ = true;
    if (!silent_) {
      player_->mute();
    }
  }
}

void VibVoice::resumeMute(const Fade& fade, Actor* actor) {
  if (!dead_ && actor_.get<Actor>() == actor) {
    resumeMute(fade);
  }
}

void VibVoice::resumeMute(const Fade&) {
  if (!dead_ && muted_ == true) {
    muted_ = false;
    if (!silent_) {
      player_->unmute();
    }
  }
}

void VibVoice::silent(const Fade& fade, Actor* actor) {
  if (!dead_ && actor_.get<Actor>() == actor) {
    silent(fade, false);
  }
}

void VibVoice::silent(const Fade&, bool) {
  if (!dead_ && !silent_) {
    silent_ = true;
    if (!muted_) {
      player_->mute();
    }
  }
}

void VibVoice::resumeSilent(const Fade& fade, Actor* actor) {
  if (!dead_ && actor_.get<Actor>() == actor) {
    resumeSilent(fade);
  }
}

void VibVoice::resumeSilent(const Fade&) {
  if (!dead_ && silent_ == true) {
    silent_ = false;
    if (!muted_) {
      player_->unmute();
    }
  }
}

bool VibVoice::isActiveFor(Actor* actor) {
  if (active_ == true) {
    return actor_.get<Actor>() == actor;
  }
  else {
    return false;
  }
}

bool VibVoice::isPaused() const {
  return paused_;
}

bool VibVoice::isMuted() const {
  return muted_;
}

float VibVoice::calcPitch() const {
  nn::os::LockMutex(&mutex_);
  float value = pitch_.getValue() + buffer_->pitch;
  if (SeqVoice* parent = parent_.get<SeqVoice>()) {
    value += parent->calcTotalPitch();
  }
  nn::os::UnlockMutex(&mutex_);
  return value;
}

float VibVoice::calcSurroundPan() const {
  nn::os::LockMutex(&mutex_);
  float value = surroundPan_.getValue() + surroundPanFluctuation_.getValue() +
    buffer_->surroundPan;
  if (Slot* slot = slot_.get<Slot>()) {
    value += slot->calcSurroundPan();
  }
  if (Slot* group = group_.get<Slot>()) {
    value += group->calcSurroundPan();
  }
  if (Slot* env = env_.get<Slot>()) {
    value += env->calcSurroundPan();
  }
  if (SeqVoice* parent = parent_.get<SeqVoice>()) {
    value += parent->calcTotalSurroundPan();
  }
  nn::os::UnlockMutex(&mutex_);
  return value;
}

void VibVoice::updatePlaying() {
  bool active = false;
  if (!dead_) {
    if (buffer_->length >= 0.0f && !isEnvelopeReleased() &&
      !isEnvelopeFading() && !isEnvelopeEnded()) {
      active = !stopping_;
    }
    else if (static_cast<unsigned>(state_ - 1) < 5 ||
      (buffer_->loadState != 0 && buffer_->loadCount != 0) ||
      count1800_ > 0 || count1804_ > 0) {
      active = true;
    }
    else {
      active = player_->isPlaying();
    }
  }
  active_ = active;
}

}
