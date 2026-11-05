#include "snd/seq_voice.hpp"

#include <algorithm>
#include <cmath>

#include "snd/slot.hpp"
#include "snd/wave_multi_voice.hpp"

namespace snd {

static_assert(sizeof(data::SeqBuffer) == 0x2c8);
static_assert(sizeof(SeqVoice) == 0x17e8);

namespace {

[[gnu::noinline]] bool isEnvelopeDone(const Param& param) {
  return param.isEnvelopeReleased() || param.isEnvelopeFading() ||
    param.isEnvelopeEnded();
}

}

void SeqVoice::destroy() {
  slot_.get<Slot>()->destroyVoice(this);
}

void** SeqVoice::getRegistry() {
  static void* base = Voice::registry();
  return &base;
}

void SeqVoice::updateActor() {
  if (dead_ == true) {
    destroy();
    return;
  }
  if (state_ != kStateIdle && isActorScaled()) {
    if (Actor* actor = actor_.get<Actor>()) {
      updateActorImpl(actor);
    }
  }
}

void SeqVoice::update(float ms) {
  if (dead_ || state_ == kStateIdle || held_ || flag17e1_ || paused_ ||
    muted_ || silent_) {
    return;
  }
  if (isEnvelopeDone(*this) || buffer_->length < 0.0f ||
    getFrame() < buffer_->length / 16.667f) {
    Param::update(ms);
    if (handle_ != nullptr) {
      handle_->update();
    }
  }
  else {
    stopping_ = true;
    stopImpl(Fade(0), false, 0.0f);
  }
}

void SeqVoice::updatePriorityReduction() {
  priorityReduction_ = 0.0f;
  if (buffer_->priorityReduction > 0.0f) {
    priorityReduction_ = calcOwnPriorityReduction();
  }
  switch (getType()) {
    case 1:
    case 2:
    case 3:
    case 5:
    case 6:
    case 8:
    case 11:
    case 12:
      if (Voice* voice = getChild()) {
        voice->updatePriorityReduction();
        priorityReduction_ = voice->getPriorityReduction();
      }
      break;
    case 4:
    case 7:
    case 9:
    case 10:
      for (int i = 0; i < getChildCount(); i++) {
        if (Voice* voice = getChild(i)) {
          voice->updatePriorityReduction();
          if (priorityReduction_ < voice->getPriorityReduction()) {
            priorityReduction_ = voice->getPriorityReduction();
          }
        }
      }
      break;
  }
}

float SeqVoice::calcTotalPitch() const {
  nn::os::LockMutex(&mutex_);
  float value = pitch_.getValue();
  if (SeqVoice* parent = parent_.get<SeqVoice>()) {
    value += parent->calcTotalPitch();
  }
  nn::os::UnlockMutex(&mutex_);
  return value;
}

float SeqVoice::calcTotalSurroundPan() const {
  nn::os::LockMutex(&mutex_);
  float value = surroundPan_.getValue() + surroundPanFluctuation_.getValue();
  if (SeqVoice* parent = parent_.get<SeqVoice>()) {
    value += parent->calcTotalSurroundPan();
  }
  nn::os::UnlockMutex(&mutex_);
  return value;
}

bool SeqVoice::isPlaying() {
  if (getType() != 11) {
    return Voice::isPlaying();
  }
  if (Voice* voice = getChild()) {
    return voice->isPlaying();
  }
  if (state_ == kStateIdle) {
    return false;
  }
  if (loading_) {
    return false;
  }
  return prepared_;
}

void SeqVoice::stop(const Fade& fade, Actor* actor, bool force, float value) {
  if (actor_.get<Actor>() == actor) {
    stopImpl(fade, force, value);
  }
}

template <typename F>
void SeqVoice::forEachChild(F function) {
  switch (getType()) {
    case 1:
    case 2:
    case 3:
    case 5:
    case 6:
    case 8:
    case 11:
    case 12:
      if (Voice* voice = getChild()) {
        function(voice);
      }
      break;
    case 4:
    case 7:
    case 9:
    case 10:
      for (int i = 0; i < getChildCount(); i++) {
        if (Voice* voice = getChild(i)) {
          function(voice);
        }
      }
      break;
  }
}

void SeqVoice::pause(const Fade& fade, Actor* actor) {
  if (!dead_ && state_ != -1 && !paused_) {
    paused_ = true;
    forEachChild([&](Voice* voice) {
      voice->pause(fade, actor);
    });
  }
}

void SeqVoice::pause(const Fade& fade, bool force) {
  if (!dead_ && state_ != -1 && !paused_) {
    paused_ = true;
    forEachChild([&](Voice* voice) {
      voice->pause(fade, force);
    });
  }
}

void SeqVoice::resumePause(const Fade& fade, Actor* actor) {
  if (!dead_ && state_ != -1 && paused_ == true) {
    paused_ = false;
    forEachChild([&](Voice* voice) {
      voice->resumePause(fade, actor);
    });
  }
}

void SeqVoice::resumePause(const Fade& fade) {
  if (!dead_ && state_ != -1 && paused_ == true) {
    paused_ = false;
    forEachChild([&](Voice* voice) {
      voice->resumePause(fade);
    });
  }
}

void SeqVoice::mute(const Fade& fade, Actor* actor) {
  if (!dead_ && state_ != -1 && !muted_) {
    muted_ = true;
    forEachChild([&](Voice* voice) {
      voice->mute(fade, actor);
    });
  }
}

void SeqVoice::mute(const Fade& fade, bool force) {
  if (!dead_ && state_ != -1 && !muted_) {
    muted_ = true;
    forEachChild([&](Voice* voice) {
      voice->mute(fade, force);
    });
  }
}

void SeqVoice::resumeMute(const Fade& fade, Actor* actor) {
  if (!dead_ && state_ != -1 && muted_ == true) {
    muted_ = false;
    forEachChild([&](Voice* voice) {
      voice->resumeMute(fade, actor);
    });
  }
}

void SeqVoice::resumeMute(const Fade& fade) {
  if (!dead_ && state_ != -1 && muted_ == true) {
    muted_ = false;
    forEachChild([&](Voice* voice) {
      voice->resumeMute(fade);
    });
  }
}

void SeqVoice::silent(const Fade& fade, Actor* actor) {
  if (!dead_ && state_ != -1 && !silent_) {
    silent_ = true;
    forEachChild([&](Voice* voice) {
      voice->silent(fade, actor);
    });
  }
}

void SeqVoice::silent(const Fade& fade, bool force) {
  if (!dead_ && state_ != -1 && !silent_) {
    silent_ = true;
    forEachChild([&](Voice* voice) {
      voice->silent(fade, force);
    });
  }
}

void SeqVoice::resumeSilent(const Fade& fade, Actor* actor) {
  if (!dead_ && state_ != -1 && silent_ == true) {
    silent_ = false;
    forEachChild([&](Voice* voice) {
      voice->resumeSilent(fade, actor);
    });
  }
}

void SeqVoice::resumeSilent(const Fade& fade) {
  if (!dead_ && state_ != -1 && silent_ == true) {
    silent_ = false;
    forEachChild([&](Voice* voice) {
      voice->resumeSilent(fade);
    });
  }
}

void SeqVoice::setUserFlags(uint32_t flags) {
  userFlags_ = flags;
  forEachChild([&](Voice* voice) {
    voice->setUserFlags(flags);
  });
}

void SeqVoice::addUserFlags(uint32_t flags) {
  userFlags_ |= flags;
  forEachChild([&](Voice* voice) {
    voice->addUserFlags(flags);
  });
}

void SeqVoice::removeUserFlags(uint32_t flags) {
  userFlags_ &= ~flags;
  forEachChild([&](Voice* voice) {
    voice->removeUserFlags(flags);
  });
}

void SeqVoice::setStopping(bool stopping) {
  stopRequested_ = stopping;
  forEachChild([&](Voice* voice) {
    voice->setStopping(stopping);
  });
}

void SeqVoice::startVolume(int kind, const Fade& fade, float target) {
  int type = getType();
  if (type == 11) {
    auto* child = static_cast<TrackChild*>(children_);
    if (static_cast<size_t>(kind) < child->volumes.size()) {
      child->volumes[kind] = target;
      if (auto* voice = child->voice.cast<WaveMultiVoice>()) {
        voice->startTrackVolume(kind, fade, target);
      }
    }
  }
  else if (type == 9) {
    auto* list = static_cast<MixChildList*>(children_);
    if (static_cast<size_t>(kind) < list->volumes.size()) {
      list->volumes[kind] = target;
      if (Voice* voice = list->voices[kind].get<Voice>()) {
        Param& param = *voice;
        param.startVolume(fade, target);
      }
    }
  }
}

float SeqVoice::getVolume(int kind) {
  int type = getType();
  if (type == 11) {
    auto* child = static_cast<TrackChild*>(children_);
    if (auto* voice = child->voice.cast<WaveMultiVoice>()) {
      return voice->getTrackVolume(kind);
    }
  }
  else if (type == 9) {
    auto* list = static_cast<MixChildList*>(children_);
    if (static_cast<size_t>(kind) < list->voices.size()) {
      if (Voice* voice = list->voices[kind].get<Voice>()) {
        const Param& param = *voice;
        return param.getVolume();
      }
      return list->volumes[kind];
    }
  }
  return 0.0f;
}

fnd::WeakHandle SeqVoice::getHandle(int kind) {
  fnd::WeakHandle handle;
  int type = getType();
  if (type == 11) {
    handle = static_cast<Child*>(children_)->voice;
  }
  else if (type == 9 && kind >= 0 && kind < getChildCount()) {
    handle = static_cast<ChildList*>(children_)->voices[kind];
  }
  return handle;
}

float SeqVoice::calcPriorityReduction() {
  float reduction = 0.0f;
  switch (getType()) {
    case 1:
    case 2:
    case 3:
    case 5:
    case 6:
    case 8:
      if (Voice* voice = getChild()) {
        reduction = voice->calcPriorityReduction();
      }
      break;
    case 4:
    case 7:
    case 9:
    case 10:
      for (int i = 0; i < getChildCount(); i++) {
        if (Voice* voice = getChild(i)) {
          float value = voice->calcPriorityReduction();
          if (value > reduction) {
            reduction = value;
          }
        }
      }
      break;
    case 11:
    case 12:
      if (Voice* voice = getChild()) {
        reduction = std::fmax(voice->calcPriorityReduction(), reduction);
      }
      break;
  }
  return reduction == 0.0f ? 9999.0f : reduction;
}

bool SeqVoice::isStopRequested() {
  int type = getType();
  if (type == 4 || type == 9) {
    for (int i = 0; i < getChildCount(); i++) {
      Voice* voice = getChild(i);
      if (voice != nullptr && !voice->isStopRequested()) {
        return false;
      }
    }
  }
  return true;
}

void SeqVoice::clearStopRequest() {
  int type = getType();
  if (type == 4 || type == 9) {
    for (int i = 0; i < getChildCount(); i++) {
      if (Voice* voice = getChild(i)) {
        voice->clearStopRequest();
      }
    }
  }
}

bool SeqVoice::isLoopEnded() {
  if (buffer_->length >= 0.0f) {
    return false;
  }
  switch (getType()) {
    case 1:
    case 2:
    case 3:
    case 5:
    case 6:
    case 8:
    case 11:
    case 12: {
      Voice* voice = getChild();
      return voice != nullptr && voice->isLoopEnded();
    }
    case 4:
      for (int i = 0; i < getChildCount(); i++) {
        if (Voice* voice = getChild(i)) {
          return voice->isLoopEnded();
        }
      }
      return false;
    case 7:
    case 9:
    case 10:
      for (int i = 0; i < getChildCount(); i++) {
        Voice* voice = getChild(i);
        if (voice != nullptr && voice->isLoopEnded()) {
          return true;
        }
      }
      return false;
    default:
      return false;
  }
}

float SeqVoice::getStartOffset() const {
  float offset = 0.0f;
  switch (getType()) {
    case 1:
    case 2:
    case 3:
    case 5:
    case 6:
    case 8:
      if (Voice* voice = getChild()) {
        return voice->getStartOffset();
      }
      return offset;
    case 4:
    case 7:
    case 9:
    case 10:
      for (int i = 0; i < getChildCount(); i++) {
        if (Voice* voice = getChild(i)) {
          float value = voice->getStartOffset();
          if (value > offset) {
            offset = value;
          }
        }
      }
      return offset;
    case 11:
    case 12:
      if (Voice* voice = getChild()) {
        return std::fmax(voice->getStartOffset(), offset);
      }
      return offset;
    default:
      return offset;
  }
}

int SeqVoice::getHandleCount() const {
  switch (getType()) {
    case 1:
    case 2:
    case 3:
    case 5:
    case 6:
    case 8:
    case 11:
      return 1;
    case 4:
    case 7:
    case 9:
    case 10:
    case 12:
      return std::min(getChildCount(), 16);
    default:
      return 0;
  }
}

[[gnu::noinline]] void SeqVoice::getHandles(fnd::WeakHandle* handles,
  int count) const {
  switch (getType()) {
    case 1:
    case 2:
    case 3:
    case 5:
    case 6:
    case 8:
    case 11:
    case 12:
      handles[0] = static_cast<Child*>(children_)->voice;
      break;
    case 4:
    case 7:
    case 9:
    case 10:
      for (int i = 0; i < count && i < getChildCount(); i++) {
        handles[i] = static_cast<ChildList*>(children_)->voices[i];
      }
      break;
  }
}

void SeqVoice::setLocked(bool locked) {
  fnd::WeakHandle handles[16];
  getHandles(handles, 16);
  int count = getHandleCount();
  for (int i = 0; i < count; i++) {
    if (Voice* voice = handles[i].get<Voice>()) {
      voice->setLocked(locked);
    }
  }
}

bool SeqVoice::isLocked() const {
  fnd::WeakHandle handles[16];
  getHandles(handles, 16);
  int count = getHandleCount();
  for (int i = 0; i < count; i++) {
    Voice* voice = handles[i].get<Voice>();
    if (voice != nullptr && voice->isLocked()) {
      return true;
    }
  }
  return false;
}

uint32_t SeqVoice::getOutputLine() const {
  if (getType() == 9) {
    for (int i = 0; i < getChildCount(); i++) {
      if (Voice* voice = getChild(i)) {
        return voice->getOutputMode();
      }
    }
  }
  return 0;
}

void SeqVoice::setOutputMode(int mode) {
  if (getType() == 9) {
    outputMode_ = mode;
    for (int i = 0; i < getChildCount(); i++) {
      if (Voice* voice = getChild(i)) {
        voice->setOutputMode(mode);
      }
    }
  }
}

bool SeqVoice::crossFade(int, float time, float volume) {
  if (state_ < 6) {
    return false;
  }
  if (dead_ || isEnvelopeReleased() || isEnvelopeFading() ||
    isEnvelopeEnded()) {
    return false;
  }
  switch (getType()) {
    case 1:
    case 2:
    case 3:
    case 5:
    case 6:
    case 8:
    case 11:
    case 12:
      if (Voice* voice = getChild()) {
        voice->stop(Fade(time), true, 0.0f);
      }
      break;
    case 4:
    case 7:
    case 9:
    case 10:
      for (int i = 0; i < getChildCount(); i++) {
        if (Voice* voice = getChild(i)) {
          voice->stop(Fade(time), true, 0.0f);
        }
      }
      break;
  }
  Param& param = *this;
  param.startDuckVolume(Fade(0.0f), 0.0f);
  param.startDuckVolume(Fade(volume), 1.0f);
  state_ = 6;
  return true;
}

void SeqVoice::mainUnlocked() {
  mainCore(false);
}

float SeqVoice::getPriorityReduction() const {
  if (isDelayed()) {
    return 9999.0f;
  }
  return priorityReduction_;
}

void SeqVoice::stop(const Fade& fade, bool force, float value) {
  stopImpl(fade, force, value);
}

void SeqVoice::kill(Actor* actor) {
  if (actor_.get<Actor>() == actor) {
    killImpl();
  }
}

void SeqVoice::kill() {
  killImpl();
}

bool SeqVoice::isActiveFor(Actor* actor) {
  if (active_ == true) {
    return actor_.get<Actor>() == actor;
  }
  else {
    return false;
  }
}

bool SeqVoice::isActive() const {
  return active_;
}

bool SeqVoice::isPaused() const {
  return paused_;
}

bool SeqVoice::isMuted() const {
  return muted_;
}

float SeqVoice::getPlayTime(uint32_t kind) {
  if (handle_ == nullptr) {
    return -1.0f;
  }
  return handle_->getPlayTime(kind);
}

float SeqVoice::getPlayPosition(uint32_t kind) {
  if (handle_ == nullptr) {
    return -1.0f;
  }
  return handle_->getPlayPosition(kind);
}

void SeqVoice::checkPriority() {
  slot_.get<Slot>()->checkPriority(this);
}

uint32_t SeqVoice::getSoundType() const {
  return seqInfo_->type;
}

int SeqVoice::getSoundGroup() const {
  return seqInfo_->group;
}

void SeqVoice::addToSlot() {
  slot_.get<Slot>()->addVoice(this);
}

void SeqVoice::updatePlaying() {
  bool active = false;
  if (!dead_ && state_ != -1) {
    if (buffer_->length < 0.0f || isEnvelopeReleased() ||
      isEnvelopeFading() || isEnvelopeEnded()) {
      if (isHeld() || isDelayed()) {
        active = true;
      }
      else if (buffer_->loadState != 0 && buffer_->loadCount != 0) {
        active = true;
      }
      else {
        switch (getType()) {
          case 1:
          case 2:
          case 3:
          case 5:
          case 8:
          case 11:
          case 12: {
            Voice* voice = getChild();
            active = voice != nullptr && voice->isActive();
            break;
          }
          case 6: {
            auto* child = static_cast<RepeatChild*>(children_);
            if (child->count < getChildCount()) {
              active = true;
            }
            else {
              Voice* voice = getChild();
              active = voice != nullptr && voice->isActive();
            }
            break;
          }
          case 4:
          case 7:
          case 9:
          case 10:
            for (int i = 0; i < getChildCount(); i++) {
              Voice* voice = getChild(i);
              if (voice != nullptr && voice->isActive()) {
                active = true;
                break;
              }
            }
            break;
        }
      }
    }
    else {
      active = !stopping_;
    }
  }
  active_ = active;
}

}
