#include "eft/emitter.hpp"

namespace eft {

NormalEmitter::~NormalEmitter() = default;

// Detaches the set from the emitter and lets it finish on its own.
EffectEmitter::~EffectEmitter() {
  if (set_.IsValid()) {
    set_.Get()->owner_ = nullptr;
    set_.Get()->Release(true);
  }
}

bool EffectEmitter::Unknown04() {
  if (!set_.IsValid() || set_.Get()->paused_ != 0) {
    return false;
  }
  set_.Get()->Stop();
  stoppedSet_ = true;
  return true;
}

void NormalEmitter::Hide() {
  if (set_.IsValid() && set_.Get()->HasLife()) {
    color_->a = 0.0f;
  }
}

void NormalEmitter::Show() {
  if (set_.IsValid() && set_.Get()->HasLife()) {
    color_->a = 1.0f;
  }
}

void EffectEmitter::Unknown07() {
  unknownB4_ = true;
  if (set_.IsValid() && set_.Get()->paused_ == 0) {
    unknownB6_ = set_.Get()->visible_ != 0;
    set_.Get()->visible_ = 0;
  }
}

void EffectEmitter::Unknown08() {
  if (unknownB4_ && set_.IsValid() && set_.Get()->paused_ == 0) {
    set_.Get()->visible_ = unknownB6_;
  }
  if (unknownB4_) {
    unknownB4_ = false;
    return;
  }
  Destroy();
}

bool EffectEmitter::Unknown09() {
  return true;
}

bool NormalEmitter::Unknown09() {
  if (!set_.IsValid()) {
    return false;
  }
  const EmitterSetHandle& set = set_;
  if (set.Get()->done_ != 0) {
    return true;
  }
  return set.Get()->IsDone();
}

bool EffectEmitter::Unknown14() {
  if (!set_.IsValid() || !set_.Get()->HasLife() || startFrames_ < 1) {
    return false;
  }
  set_.Get()->Start(startFrames_);
  startFrames_ = 0;
  return true;
}

void EffectEmitter::Unknown15(int value) {
  if (!set_.IsValid()) {
    return;
  }
  const EmitterSet* set = set_.Get();
  if (value >= 1 && set->HasLife() && pendingFrames_ == 0) {
    pendingFrames_ = value;
  }
}

void EffectEmitter::Unknown16() {
  if (pendingFrames_ >= 1 && set_.IsValid() && set_.Get()->HasLife()) {
    set_.Get()->Start(pendingFrames_);
    pendingFrames_ = 0;
  }
}

}
