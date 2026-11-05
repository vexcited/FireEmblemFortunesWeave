#include "snd/seq_voice.hpp"

#include "snd/slot.hpp"

namespace snd {

static_assert(sizeof(SeqVoice) == 0x17e8);

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

}
