#pragma GCC visibility push(hidden)
#include "game/telop/telop_sequence.hpp"
#pragma GCC visibility pop

namespace game::telop {

// Only the member destruction is reconstructed.
TelopSequence::~TelopSequence() = default;

void TelopSequence::Unknown32() {
  Finish();
}

void TelopSequence::Unknown36() {
  accessor_.PlayAnimation(GetWaitAnimation(), 1.0f);
  unknown_1a4_ = 0.0f;
}

bool TelopSequence::Unknown37() {
  const char* name = GetInAnimation();
  if (title_ != nullptr && title_->IsPlaying()) {
    return false;
  }
  return !accessor_.IsAnimationPlaying(name, false);
}

void TelopSequence::Unknown38() {
  const char* name = GetInAnimation();
  accessor_.PlayAnimation(name, 1.0f);
  accessor_.SetAnimationFrame(name,
    accessor_.GetAnimationEndFrame(name, false));
  accessor_.StopAnimation(name, false);
}

void TelopSequence::Unknown40() {
  if (!Unknown41()) {
    Unknown50();
    return;
  }
  accessor_.SetVisible(false);
  Finish();
}

void TelopSequence::Unknown42() {
  if (title_ != nullptr) {
    title_->Close(false);
  }
}

void TelopSequence::Unknown45() {
  if (accessor_.IsAnimationPlaying(GetWaitAnimation(), false)) {
    const char* name = GetWaitAnimation();
    accessor_.PlayAnimation(name, 1.0f);
    accessor_.SetAnimationFrame(name,
      accessor_.GetAnimationEndFrame(name, false));
    accessor_.StopAnimation(name, false);
  }
  unknown_1a4_ = unknown_148_;
  unknown_1a0_ = unknown_144_;
}

void TelopSequence::Unknown47() {
  Finish();
}

void TelopSequence::Unknown49() {
  Finish();
}

void TelopResult::Unknown33() {
  accessor_.SetPaneVisible("L_MotivationGauge", false);
  Unknown56();
  Unknown57();
  Unknown175fac0();
  Unknown59();
}

void TelopResult::Unknown46() {
  gauge_->unknown_f0_ = 0;
  gauge_->unknown_ec_ = true;
  Unknown1374cc0(false);
}

}
