#include "snd/vib_voice.hpp"

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

}
