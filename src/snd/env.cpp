#include "snd/game.hpp"

#include "snd/fnd/math.hpp"
#include "snd/manager.hpp"
#include "snd/voice.hpp"

namespace snd {

namespace {

template <typename F>
void eachVoice(Env::Group* group, F function) {
  for (Env::Element* element : group->elements) {
    if (Voice* voice = element->voice.get<Voice>()) {
      function(voice);
    }
  }
}

}

void Env::stop(const Fade& fade) {
  nn::os::LockMutex(&mutex_);
  for (Group* group : groups_) {
    eachVoice(group, [&](Voice* voice) { voice->stop(fade, true, 0.0f); });
    removeGroup(group);
  }
  nn::os::UnlockMutex(&mutex_);
  data_ = nullptr;
  subData_ = nullptr;
  name_ = "";
  subName_ = "";
  BGM::getInstance()->resetVolume();
}

// Positional groups follow the listener, the others only their voices.
void Env::update() {
  nn::os::LockMutex(&mutex_);
  for (Group* group : groups_) {
    if (group->positional == true) {
      updatePositionalGroup(group);
    }
    else {
      updateGroup(group);
    }
  }
  nn::os::UnlockMutex(&mutex_);
}

Env::Group* Env::findGroup(const char* name) {
  nn::os::LockMutex(&mutex_);
  for (Group* group : groups_) {
    if (group->getNameString() == name) {
      nn::os::UnlockMutex(&mutex_);
      return group;
    }
  }
  nn::os::UnlockMutex(&mutex_);
  return nullptr;
}

void Env::reset() {
  nn::os::LockMutex(&mutex_);
  while (!groups_.empty()) {
    stopGroup(groups_.back()->getName());
  }
  nn::os::UnlockMutex(&mutex_);
  field_ = nullptr;
  fieldSub_ = nullptr;
}

void Env::play(const char* name, const void* data, const char* weather,
  const char* time, uint8_t kind, void* param) {
  Manager::lock();
  if (Group* group = findGroup(name)) {
    playGroup(group, data, weather, time, kind & 1,
      *static_cast<const Fade*>(param));
  }
  Manager::unlock();
}

void Env::restartFields() {
  if (const void* data = field_) {
    Fade fade(0.0f);
    Manager::lock();
    if (Group* group = findGroup("field")) {
      playGroup(group, data, "", "", false, fade);
    }
    Manager::unlock();
  }
  if (const void* data = fieldSub_) {
    Fade fade(0.0f);
    Manager::lock();
    if (Group* group = findGroup("fieldSub")) {
      playGroup(group, data, "", "", false, fade);
    }
    Manager::unlock();
  }
}

void Env::stopAll(const Fade& fade) {
  s_instance->stop(fade);
}

void Env::restart() {
  s_instance->restartFields();
}

void Env::startPitchChecked(const Fade& fade, float target) {
  Env* env = s_instance;
  nn::os::LockMutex(&env->mutex_);
  for (Group* group : env->groups_) {
    eachVoice(group, [&](Voice* voice) {
      voice->startPitchChecked(fade, target);
    });
  }
  nn::os::UnlockMutex(&env->mutex_);
}

void Env::refreshPositions(const char* name) {
  s_instance->refreshElementPositions(name);
}

void Env::startElementVolume(const char* name, const Fade& fade,
  float target) {
  s_instance->startElementVolumeImpl(name, fade, target);
}

void Env::playField(const char* name) {
  Env* env = s_instance;
  Fade fade(0.0f);
  uint32_t hash = fnd::calcCrc32(name, 0);
  if (const void* data = data::findEnvData(&hash)) {
    Manager::lock();
    if (Group* group = env->findGroup("field")) {
      env->playGroup(group, data, "", "", false, fade);
    }
    Manager::unlock();
  }
}

void Env::playFieldSub(const char* name) {
  Env* env = s_instance;
  Fade fade(0.0f);
  uint32_t hash = fnd::calcCrc32(name, 0);
  if (const void* data = data::findEnvData(&hash)) {
    Manager::lock();
    if (Group* group = env->findGroup("fieldSub")) {
      env->playGroup(group, data, "", "", false, fade);
    }
    Manager::unlock();
  }
}

}
