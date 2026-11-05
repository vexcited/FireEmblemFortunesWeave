#include "snd/voice.hpp"

#include <cstddef>

#include "snd/manager.hpp"
#include "snd/slot.hpp"
#include "snd/target/base.hpp"

namespace snd {

static_assert(sizeof(data::VoiceBuffer) == 0x298);
static_assert(sizeof(VoiceBase) == 0x17b8);

#pragma GCC visibility push(hidden)

// Pitch ratios for -7 to +7 octaves in semitone steps.
extern float g_semitoneRatios[169];

#pragma GCC visibility pop

namespace {

int toFrames(const Fade& fade) {
  return static_cast<int>(fade.getTime() / fnd::kFrameMs);
}

}

void Voice::destroy() {
  slot_.get<Slot>()->destroyVoice(this);
}

void Voice::mainUnlocked() {
  mainCore(false);
}

void Voice::updateTarget() {
  if (!dead_ && prepared_ == true) {
    g_target->updateVoices();
  }
}

void Voice::main() {
  Manager::lock();
  if (!mainLocked_) {
    nn::os::LockMutex(&mutex_);
    mainCore(true);
    nn::os::UnlockMutex(&mutex_);
  }
  Manager::unlock();
}

float Voice::getPriorityReduction() const {
  return priorityReduction_;
}

void Voice::updatePriorityReduction() {
  float reduction = 0.0f;
  if (!invalid_) {
    float value = buffer_->priorityReduction;
    if (value >= 0.0f && buffer_->priorityArchive >= 0) {
      reduction = g_target->setSound3DMaxPriorityReduction(
        buffer_->priorityArchive, value);
    }
  }
  priorityReduction_ = reduction;
}

bool Voice::isLoading() const {
  return request_ != nullptr && loading_;
}

bool Voice::isPrepared() const {
  return preparing_ && !loading_;
}

void Voice::hold() {
  held_ = true;
}

void Voice::release() {
  held_ = false;
}

bool Voice::isHeld() const {
  return held_;
}

bool Voice::isDelayed() const {
  return getDelay() > 0.0f || state_ == 5;
}

bool Voice::isStopping() const {
  return static_cast<unsigned>(state_ - 6) < 3;
}

void Voice::stop(const Fade& fade, Actor* actor, bool force, float value) {
  if (actor_.get<Actor>() == actor) {
    stopImpl(fade, force, value);
  }
}

void Voice::stop(const Fade& fade, bool force, float value) {
  stopImpl(fade, force, value);
}

void Voice::kill(Actor* actor) {
  if (actor_.get<Actor>() == actor) {
    killImpl();
  }
}

void Voice::kill() {
  killImpl();
}

void Voice::pause(const Fade& fade, Actor* actor) {
  if (!dead_ && actor_.get<Actor>() == actor) {
    pause(fade, false);
  }
}

void Voice::pause(const Fade& fade, bool) {
  if (!dead_ && !paused_) {
    handle_->pause(true, toFrames(fade));
    paused_ = true;
  }
}

void Voice::resumePause(const Fade& fade, Actor* actor) {
  if (!dead_ && actor_.get<Actor>() == actor) {
    resumePause(fade);
  }
}

void Voice::resumePause(const Fade& fade) {
  if (!dead_ && paused_ == true) {
    target::SoundHandle* handle = handle_;
    paused_ = false;
    handle->pause(false, toFrames(fade));
  }
}

void Voice::mute(const Fade& fade, Actor* actor) {
  if (!dead_ && actor_.get<Actor>() == actor) {
    mute(fade, false);
  }
}

void Voice::mute(const Fade& fade, bool) {
  if (!dead_ && !muted_) {
    muted_ = true;
    if (!silent_) {
      handle_->mute(true, toFrames(fade));
    }
  }
}

void Voice::resumeMute(const Fade& fade, Actor* actor) {
  if (!dead_ && actor_.get<Actor>() == actor) {
    resumeMute(fade);
  }
}

void Voice::resumeMute(const Fade& fade) {
  if (!dead_ && muted_ == true) {
    muted_ = false;
    if (!silent_) {
      handle_->mute(false, toFrames(fade));
    }
  }
}

void Voice::silent(const Fade& fade, Actor* actor) {
  if (!dead_ && actor_.get<Actor>() == actor) {
    silent(fade, false);
  }
}

void Voice::silent(const Fade& fade, bool) {
  if (!dead_ && !silent_) {
    silent_ = true;
    if (!muted_) {
      handle_->mute(true, toFrames(fade));
    }
  }
}

void Voice::resumeSilent(const Fade& fade, Actor* actor) {
  if (!dead_ && actor_.get<Actor>() == actor) {
    resumeSilent(fade);
  }
}

void Voice::resumeSilent(const Fade& fade) {
  if (!dead_ && silent_ == true) {
    silent_ = false;
    if (!muted_) {
      handle_->mute(false, toFrames(fade));
    }
  }
}

bool Voice::isActiveFor(Actor* actor) {
  if (active_ == true) {
    return actor_.get<Actor>() == actor;
  }
  else {
    return false;
  }
}

bool Voice::isActive() const {
  return active_;
}

bool Voice::isPaused() const {
  return paused_;
}

bool Voice::isMuted() const {
  return muted_;
}

void Voice::setVariable(uint32_t index, const Fade& fade, Actor* actor,
  float value) {
  if (!dead_ && actor_.get<Actor>() == actor) {
    setVariable(static_cast<int>(index), fade, value);
  }
}

void Voice::setVariable(int index, const Fade& fade, float value) {
  if (!dead_) {
    variables_[index] = value;
    handle_->setVariable(1 << index, toFrames(fade), value);
  }
}

float Voice::getVariable(int index) const {
  return variables_[index];
}

void Voice::startVolume(int kind, const Fade& fade, float target) {
  if (kind == 0) {
    Param& param = *this;
    param.startVolume(fade, target);
  }
}

float Voice::getVolume(int kind) {
  if (kind == 0) {
    const Param& param = *this;
    return param.getVolume();
  }
  return 0.0f;
}

fnd::WeakHandle Voice::getHandle(int kind) {
  fnd::WeakHandle handle;
  if (kind == 0) {
    handle.set(this);
  }
  return handle;
}

float Voice::calcPriorityReduction() {
  if (invalid_) {
    return 0.0f;
  }
  float value = buffer_->priorityReduction;
  if (value < 0.0f || buffer_->priorityArchive < 0) {
    return 0.0f;
  }
  return s_target->setSound3DMaxPriorityReduction(buffer_->priorityArchive,
    value);
}

float Voice::getLength() const {
  return -1.0f;
}

float Voice::getPitchOffset() const {
  return pitchOffset_;
}

float Voice::getStartOffset() const {
  return startOffset_;
}

void Voice::setStartOffset(float offset) {
  startOffset_ = offset;
}

void Voice::setUserFlags(uint32_t flags) {
  userFlags_ = flags;
}

uint32_t Voice::getUserFlags() const {
  return userFlags_;
}

void Voice::addUserFlags(uint32_t flags) {
  userFlags_ |= flags;
}

void Voice::removeUserFlags(uint32_t flags) {
  userFlags_ &= ~flags;
}

bool Voice::hasUserFlags(uint32_t flags) const {
  return (userFlags_ & flags) != 0;
}

void Voice::setStopping(bool stopping) {
  stopRequested_ = stopping;
}

bool Voice::getStopping() const {
  return stopRequested_;
}

bool Voice::isStream() const {
  return buffer_->features[3] > 0 || streamed_;
}

void Voice::setLocked(bool locked) {
  locked_ = locked;
}

bool Voice::isLocked() const {
  return locked_;
}

uint32_t Voice::getOutputLine() const {
  return outputLine_;
}

void Voice::setOutputMode(int mode) {
  outputMode_ = mode;
}

void Voice::checkPriority() {
  slot_.get<Slot>()->checkPriority(this);
}

uint32_t Voice::getSoundType() const {
  return info_->type;
}

int Voice::getSoundGroup() const {
  if (info_ != nullptr) {
    return info_->group;
  }
  return -1;
}

void Voice::addToSlot() {
  slot_.get<Slot>()->addVoice(this);
}

void Voice::stopHandle(const Fade& fade) {
  if (handle_ != nullptr && handle_->isAttached()) {
    handle_->stop(toFrames(fade));
  }
}


Marker::~Marker() = default;

void Voice::updateActor() {
  if (dead_ == true) {
    destroy();
    return;
  }
  if (state_ != kStateIdle && !held_ && prepared_ == true &&
    buffer_->actorScale != 1.0f) {
    if (Actor* actor = actor_.get<Actor>()) {
      updateActorImpl(actor);
    }
  }
}

bool Voice::checkLoaded() {
  if (request_ == nullptr || loaded_) {
    return true;
  }
  if (manager_->getLoader()->isDone(request_)) {
    loading_ = false;
    loaded_ = true;
    return true;
  }
  return false;
}

bool Voice::isPlaying() {
  if (state_ == kStateIdle) {
    return false;
  }
  if (loading_) {
    return false;
  }
  if (prepared_) {
    return true;
  }
  if (handle_ == nullptr) {
    return false;
  }
  if (!handle_->isAttached() || handle_->isPrepared()) {
    preparing_ = false;
    prepared_ = true;
    return true;
  }
  return prepared_;
}

void Voice::updateHandle() {
  if (isPlaying() && handle_ != nullptr && handle_->isAttached()) {
    handle_->startPrepared();
    handle_->setVariables(variables_, 32, 0);
  }
}

float Voice::getPlayTime(uint32_t kind) {
  if (dead_ || isLoading() || isPrepared() || !isPlaying()) {
    return -1.0f;
  }
  if (handle_ == nullptr || !handle_->isAttached()) {
    return -1.0f;
  }
  return handle_->getPlayTime(kind);
}

float Voice::getPlayPosition(uint32_t kind) {
  if (dead_ || isLoading() || isPrepared() || !isPlaying()) {
    return -1.0f;
  }
  if (handle_ == nullptr || !handle_->isAttached()) {
    return -1.0f;
  }
  return handle_->getPlayPosition(kind);
}

int Voice::getPlaySample(uint32_t kind) {
  if (dead_ || isLoading() || isPrepared() || !isPlaying()) {
    return -1;
  }
  if (handle_ == nullptr || !handle_->isAttached()) {
    return -1;
  }
  return handle_->getPlaySample(kind);
}

bool Voice::isStopRequested() {
  if (dead_ || isLoading() || isPrepared() || !isPlaying()) {
    return false;
  }
  if (handle_ == nullptr || !handle_->isAttached()) {
    return false;
  }
  return handle_->isStopRequested();
}

void Voice::clearStopRequest() {
  if (dead_ || isLoading() || isPrepared() || !isPlaying()) {
    return;
  }
  if (handle_ != nullptr && handle_->isAttached()) {
    handle_->clearStopRequest();
  }
}

bool Voice::isLoopEnded() {
  if (dead_ || isLoading() || isPrepared() || !isPlaying()) {
    return false;
  }
  if (handle_ == nullptr) {
    return false;
  }
  if (!handle_->isAttached()) {
    return false;
  }
  return buffer_->length < 0.0f && (handle_->isLooped() | looped_);
}

float Voice::calcPitch() const {
  nn::os::LockMutex(&mutex_);
  float value = pitch_.getValue() + buffer_->pitch;
  if (Voice* parent = parent_.get<Voice>()) {
    value += parent->calcPitch();
  }
  if (Voice* owner = owner_.get<Voice>()) {
    value += owner->calcPitch();
  }
  float result = -2.0f;
  if (value >= -2.0f) {
    result = value;
    if (value > 2.0f) {
      result = 2.0f;
    }
  }
  results_[1] = result;
  nn::os::UnlockMutex(&mutex_);
  return value;
}

float Voice::calcPan() const {
  nn::os::LockMutex(&mutex_);
  float value =
    pan_.getValue() + panFluctuation_.getValue() + buffer_->pan;
  if (Voice* parent = parent_.get<Voice>()) {
    value += parent->calcPan();
  }
  if (Voice* owner = owner_.get<Voice>()) {
    value += owner->calcPan();
  }
  float result = -2.0f;
  if (value >= -2.0f) {
    result = value;
    if (value > 2.0f) {
      result = 2.0f;
    }
  }
  results_[2] = result;
  nn::os::UnlockMutex(&mutex_);
  return value;
}

float Voice::calcSurroundPan() const {
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
  if (Voice* parent = parent_.get<Voice>()) {
    value += parent->calcSurroundPan();
  }
  if (Voice* owner = owner_.get<Voice>()) {
    value += owner->calcSurroundPan();
  }

  // Interpolates the semitone ratio table, clamped to seven octaves.
  int semitone = static_cast<int>(value * 12.0f);
  int low = semitone <= -84 ? -84 : semitone;
  int index = low >= 84 ? 84 : low;
  float fraction =
    value * 12.0f - static_cast<float>(static_cast<int>(value * 12.0f));
  float ratio = g_semitoneRatios[index + 84];
  float delta;
  if (fraction <= 0.0f) {
    int previous = index <= -83 ? -83 : index;
    delta = ratio - g_semitoneRatios[previous + 83];
  }
  else {
    int next = low >= 83 ? 83 : low;
    delta = g_semitoneRatios[next + 85] - ratio;
  }
  results_[3] = ratio + delta * fraction;
  nn::os::UnlockMutex(&mutex_);
  return value;
}

float Voice::calcMainSend() const {
  nn::os::LockMutex(&mutex_);
  float value = mainSend_.getValue() + buffer_->mainSend;
  if (Slot* slot = slot_.get<Slot>()) {
    value += slot->calcMainSend();
  }
  if (Slot* group = group_.get<Slot>()) {
    value += group->calcMainSend();
  }
  if (Slot* env = env_.get<Slot>()) {
    value += env->calcMainSend();
  }
  if (Voice* parent = parent_.get<Voice>()) {
    value += parent->calcMainSend();
  }
  if (Voice* owner = owner_.get<Voice>()) {
    value += owner->calcMainSend();
  }
  float result = 0.0f;
  if (value >= 0.0f) {
    result = value;
    if (value > 1.0f) {
      result = 1.0f;
    }
  }
  results_[5] = result;
  nn::os::UnlockMutex(&mutex_);
  return value;
}

float Voice::calcFxSend() const {
  nn::os::LockMutex(&mutex_);
  float value =
    fxSend_.getValue() + fxSendOffset_.getValue() + buffer_->fxSend;
  if (Slot* slot = slot_.get<Slot>()) {
    value += slot->calcFxSend();
  }
  if (Slot* group = group_.get<Slot>()) {
    value += group->calcFxSend();
  }
  if (Slot* env = env_.get<Slot>()) {
    value += env->calcFxSend();
  }
  if (Voice* parent = parent_.get<Voice>()) {
    value += parent->calcFxSend();
  }
  if (Voice* owner = owner_.get<Voice>()) {
    value += owner->calcFxSend();
  }
  float result = 0.0f;
  if (value >= 0.0f) {
    result = value;
    if (value > 1.0f) {
      result = 1.0f;
    }
  }
  results_[7] = result;
  nn::os::UnlockMutex(&mutex_);
  return value;
}

float Voice::calcOutputVolume() const {
  nn::os::LockMutex(&mutex_);
  float value = outputVolume_.getValue() + buffer_->outputVolume;
  if (Slot* slot = slot_.get<Slot>()) {
    value += slot->calcOutputVolume();
  }
  if (Slot* group = group_.get<Slot>()) {
    value += group->calcOutputVolume();
  }
  if (Slot* env = env_.get<Slot>()) {
    value += env->calcOutputVolume();
  }
  if (Voice* parent = parent_.get<Voice>()) {
    value += parent->calcOutputVolume();
  }
  if (Voice* owner = owner_.get<Voice>()) {
    value += owner->calcOutputVolume();
  }
  float result = 0.0f;
  if (value >= 0.0f) {
    result = value;
    if (value > 1.0f) {
      result = 1.0f;
    }
  }
  results_[8] = result;
  nn::os::UnlockMutex(&mutex_);
  return value;
}

float Voice::calcMixVolume0() const {
  nn::os::LockMutex(&mutex_);
  float value = mixVolumes_[0] + buffer_->mixVolume0;
  if (Slot* slot = slot_.get<Slot>()) {
    value += slot->calcMixVolume0();
  }
  if (Slot* group = group_.get<Slot>()) {
    value += group->calcMixVolume0();
  }
  if (Slot* env = env_.get<Slot>()) {
    value += env->calcMixVolume0();
  }
  if (Voice* parent = parent_.get<Voice>()) {
    value += parent->calcMixVolume0();
  }
  if (Voice* owner = owner_.get<Voice>()) {
    value += owner->calcMixVolume0();
  }
  float result = 0.0f;
  if (value >= 0.0f) {
    result = value;
    if (value > 1.0f) {
      result = 1.0f;
    }
  }
  results_[9] = result;
  nn::os::UnlockMutex(&mutex_);
  return value;
}

float Voice::calcMixVolume1() const {
  nn::os::LockMutex(&mutex_);
  float value = mixVolumes_[1] + buffer_->mixVolume1;
  if (Slot* slot = slot_.get<Slot>()) {
    value += slot->calcMixVolume1();
  }
  if (Slot* group = group_.get<Slot>()) {
    value += group->calcMixVolume1();
  }
  if (Slot* env = env_.get<Slot>()) {
    value += env->calcMixVolume1();
  }
  if (Voice* parent = parent_.get<Voice>()) {
    value += parent->calcMixVolume1();
  }
  if (Voice* owner = owner_.get<Voice>()) {
    value += owner->calcMixVolume1();
  }
  float result = 0.0f;
  if (value >= 0.0f) {
    result = value;
    if (value > 1.0f) {
      result = 1.0f;
    }
  }
  results_[10] = result;
  nn::os::UnlockMutex(&mutex_);
  return value;
}

float Voice::calcMaxVariable() const {
  float result = 0.0f;
  for (float variable : variables_) {
    if (variable > result) {
      result = variable;
    }
  }
  return result;
}

bool Voice::hasFeature(uint32_t index) const {
  return buffer_->features[index] > 0;
}

bool Voice::hasFeature0() const {
  return buffer_->features[0] > 0;
}

int Voice::getFeature0() const {
  return buffer_->features[0];
}

bool Voice::hasFeature1() const {
  return buffer_->features[1] > 0;
}

int Voice::getFeature1() const {
  return buffer_->features[1];
}

bool Voice::hasFeature4() const {
  return buffer_->features[4] > 0;
}

bool Voice::hasFeature6() const {
  return buffer_->features[6] > 0;
}

bool Voice::hasFeature7() const {
  return buffer_->features[7] > 0;
}

bool Voice::hasFeature8() const {
  return buffer_->features[8] > 0;
}

bool Voice::hasFeature13() const {
  return buffer_->features[13] > 0;
}

bool Voice::hasFeature22() const {
  return buffer_->features[22] > 0;
}

bool Voice::hasSends() const {
  return buffer_->sendCount > 0;
}

bool Voice::isActorScaled() const {
  return buffer_->actorScale != 1.0f;
}

uint32_t Voice::getBufferOutputLine() const {
  return buffer_->outputLine;
}

int Voice::getChannelId(int index) const {
  return channelIds_[index];
}

bool Voice::isDead() const {
  return dead_;
}

void Voice::setLabel(const char* label) {
  label_ = label;
  resolveLabel();
}

void Voice::setArchiveName(const char* name) {
  archiveName_ = name;
}

const char* Voice::getBufferLabel() const {
  return buffer_->label.c_str();
}

void Voice::finish() {
  parent_.reset();
  owner_.reset();
  dead_ = true;
  updatePlaying();
}

bool Voice::isForcedFront() const {
  if (Voice* parent = parent_.get<Voice>()) {
    if (parent->isForcedFront()) {
      return true;
    }
  }
  if (Voice* owner = owner_.get<Voice>()) {
    if (owner->isForcedFront()) {
      return true;
    }
  }
  return flag1715_;
}

float Voice::calcVolumeScale() const {
  float scale = buffer_->volumeScale;
  if (Voice* parent = parent_.get<Voice>()) {
    scale *= parent->calcVolumeScale();
  }
  if (Voice* owner = owner_.get<Voice>()) {
    return scale * owner->calcVolumeScale();
  }
  return scale;
}

void Voice::startPitchChecked(const Fade& fade, float target) {
  if (!dead_ && !isEnvelopeReleased() && !isEnvelopeFading() &&
    !isEnvelopeEnded()) {
    Param& param = *this;
    param.startDistanceVolume(fade, target);
  }
}

}
