#include "snd/game.hpp"

namespace snd {

Env::Env() : name_(""), subName_("") {
  nn::os::InitializeMutex(&mutex_, true, 0);
  positions_.initialize(1024);
  elements_.initialize(128);
  groupPool_.initialize(4);
}

// The groups go back to their pool before the pools are released.
Env::~Env() {
  stop(Fade(0.0f));
  nn::os::LockMutex(&mutex_);
  while (!groups_.empty()) {
    groupPool_.free(groups_.back());
    groups_.pop_back();
  }
  nn::os::UnlockMutex(&mutex_);
  positions_.terminate();
  elements_.terminate();
  groupPool_.terminate();
  nn::os::FinalizeMutex(&mutex_);
}

Wind::Wind() : name_("") {
  nn::os::InitializeMutex(&mutex_, true, 0);
  positions_.initialize(128);
  elements_.initialize(64);
  groupPool_.initialize(4);
}

Wind::~Wind() {
  stop(Fade(0.0f));
  nn::os::LockMutex(&mutex_);
  while (!groups_.empty()) {
    groupPool_.free(groups_.back());
    groups_.pop_back();
  }
  nn::os::UnlockMutex(&mutex_);
  positions_.terminate();
  elements_.terminate();
  groupPool_.terminate();
  nn::os::FinalizeMutex(&mutex_);
}

}
