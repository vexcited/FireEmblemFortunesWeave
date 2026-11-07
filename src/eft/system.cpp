#include "eft/emitter.hpp"

namespace eft {

#pragma GCC visibility push(hidden)

// The set is only queued, the immediate flag is ignored.
void System::Release(EmitterSet* set, bool immediate) {
  if (!set->alive_) {
    OutputWarning("EmitterSet has been already deleted.\n");
    return;
  }

  nn::os::LockMutex(&mutex_);

  bool queued = false;
  for (int i = 0; i < killCount_; ++i) {
    if (killList_[i] == set) {
      queued = true;
      break;
    }
  }

  if (!queued) {
    killList_[killCount_] = set;
    ++killCount_;
  }

  nn::os::UnlockMutex(&mutex_);
}

#pragma GCC visibility pop

}
