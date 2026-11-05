#include "eft/emitter.hpp"

namespace eft {

#pragma GCC visibility push(hidden)

void EmitterSet::Stop() {
  paused_ = 1;
}

bool EmitterSet::IsDone() const {
  return resource_->done;
}

void EmitterSet::Release(bool immediate) {
  system_->Release(this, immediate);
}

// Steps the set ahead by whole frames, any non zero count steps once.
void EmitterSet::Start(int frames) {
  if (frames == 0) {
    return;
  }

  do {
    Update(0, 1, 1.0f, nullptr);
  } while (--frames > 0);
}

EmitterSet* EmitterSetHandle::Get() {
  return IsValid() ? set_ : nullptr;
}

const EmitterSet* EmitterSetHandle::Get() const {
  return IsValid() ? set_ : nullptr;
}

#pragma GCC visibility pop

float ClampCurve(float value, float low, float high) {
  if (value < high) {
    return value < low ? low : value;
  }

  return high;
}

}
