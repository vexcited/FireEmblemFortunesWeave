#include "snd/game.hpp"

#include "snd/manager.hpp"
#include "snd/slot.hpp"
#include "snd/voice.hpp"

namespace snd {

namespace {

template <typename G, typename F>
void eachVoice(G* group, F function) {
  for (auto* element : group->elements) {
    if (Voice* voice = element->voice.template get<Voice>()) {
      function(voice);
    }
  }
}

}

// Creates the group when no group has the name yet.
void Env::stop(const char* name) {
  if (findGroup(name) == nullptr) {
    Group* group = groupPool_.create();
    group->setName(name);
    nn::os::LockMutex(&mutex_);
    groups_.push_back(group);
    nn::os::UnlockMutex(&mutex_);
  }
}

Wind::Group* Wind::findGroup(const char* name) {
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

void Wind::stop(const char* name) {
  if (findGroup(name) == nullptr) {
    Group* group = groupPool_.create();
    group->setName(name);
    nn::os::LockMutex(&mutex_);
    groups_.push_back(group);
    nn::os::UnlockMutex(&mutex_);
  }
}

void Wind::stop(const Fade& fade) {
  nn::os::LockMutex(&mutex_);
  for (Group* group : groups_) {
    eachVoice(group, [&](Voice* voice) { voice->stop(fade, true, 0.0f); });
    removeGroup(group);
  }
  nn::os::UnlockMutex(&mutex_);
  data_ = nullptr;
  name_ = "";
}

// A muted wind keeps its voices where they are.
void Wind::update() {
  if (muted_) {
    return;
  }
  nn::os::LockMutex(&mutex_);
  for (Group* group : groups_) {
    for (Element* element : group->elements) {
      updateElement(element);
    }
  }
  nn::os::UnlockMutex(&mutex_);
}

void Wind::stopGroup(const char* name) {
  nn::os::LockMutex(&mutex_);
  for (auto it = groups_.begin(); it != groups_.end(); ++it) {
    if ((*it)->getNameString() == name) {
      Group* group = *it;
      Fade fade(0.0f);
      eachVoice(group, [&](Voice* voice) { voice->stop(fade, true, 0.0f); });
      removeGroup(group);
      groupPool_.free(*it);
      groups_.erase(it);
      break;
    }
  }
  nn::os::UnlockMutex(&mutex_);
}

void Wind::reset() {
  nn::os::LockMutex(&mutex_);
  while (!groups_.empty()) {
    stopGroup(groups_.back()->getName());
  }
  nn::os::UnlockMutex(&mutex_);
  unknown_130_ = nullptr;
}

void Wind::mute(const Fade& fade) {
  nn::os::LockMutex(&mutex_);
  for (Group* group : groups_) {
    eachVoice(group, [&](Voice* voice) { voice->mute(fade, false); });
  }
  nn::os::UnlockMutex(&mutex_);
  muted_ = true;
}

void Wind::resumeMute(const Fade& fade) {
  nn::os::LockMutex(&mutex_);
  for (Group* group : groups_) {
    eachVoice(group, [&](Voice* voice) { voice->resumeMute(fade); });
  }
  nn::os::UnlockMutex(&mutex_);
  muted_ = false;
}

namespace {

// Positions without a listener stay far below the field.
[[gnu::always_inline]] inline fnd::Vec3 findListenerPosition() {
  fnd::Vec3 position;
  position.y = -100000.0f;
  fnd::WeakHandle handle = Manager::getInstance()->getListener(-1);
  if (handle.isValid()) {
    Param* listener = handle.get<Listener>();
    fnd::Vec3 current = listener->getPosition();
    position = current;
    if (current.y > -100000.0f &&
      Manager::getInstance()->hasListenerOverride()) {
      position = Manager::getInstance()->getListenerOverride();
    }
  }
  return position;
}

template <typename P, typename E, typename G>
[[gnu::always_inline]] inline void freeElements(P& positions, E& elements,
  G* group) {
  while (!group->elements.empty()) {
    auto* element = group->elements.back();
    while (!element->positions.empty()) {
      positions.free(element->positions.back());
      element->positions.pop_back();
    }
    element->positions.shrink_to_fit();
    elements.free(element);
    group->elements.pop_back();
  }
  group->elements.shrink_to_fit();
}

}

fnd::Vec3 Env::getListenerPosition() {
  return findListenerPosition();
}

fnd::Vec3 Wind::getListenerPosition() {
  return findListenerPosition();
}

void Env::removeGroup(Group* group) {
  freeElements(positions_, elements_, group);
}

void Wind::removeGroup(Group* group) {
  freeElements(positions_, elements_, group);
}

}
