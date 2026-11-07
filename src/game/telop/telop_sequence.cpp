#pragma GCC visibility push(hidden)
#include "game/telop/telop_sequence.hpp"
#pragma GCC visibility pop

#include <algorithm>
#include <cstring>

#include "game/frame_step.hpp"

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

bool TelopSequence::Unknown43() {
  if (unknown_1a4_ < unknown_148_) {
    unknown_1a4_ = std::min(unknown_148_, unknown_1a4_ + GetFrameStep());
    return false;
  }
  return !voice_.isValid();
}

bool TelopSequence::IsPartsInFinished(const PartList& parts) {
  for (const std::weak_ptr<ui::LayoutAccessor>& part : parts) {
    if (std::shared_ptr<ui::LayoutAccessor> locked = part.lock()) {
      if (locked->IsAnimationPlaying("In", false)) {
        return false;
      }
    }
  }
  return true;
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

TelopResult::~TelopResult() {
  if (effect_.IsValid()) {
    effect_.Stop(true);
  }
}

void TelopResult::Unknown33() {
  accessor_.SetPaneVisible("L_MotivationGauge", false);
  Unknown56();
  Unknown57();
  Unknown175fac0();
  Unknown59();
}

bool TelopResult::Unknown37() {
  Unknown175ff40();
  return TelopSequence::Unknown37();
}

void TelopResult::Unknown38() {
  TelopSequence::Unknown38();
  Unknown175ff40();
  if (title_ != nullptr) {
    title_->Finish();
  }
  Unknown60();
}

void TelopResult::Unknown45() {
  TelopSequence::Unknown45();
  counter_.SetState(2);
  for (size_t i = 0; i < lines_.size(); ++i) {
    lines_[i].SetState(2);
  }
  Unknown61();
}

// The last shown child of the title pane, the title itself excepted.
nn::ui2d::Pane* TelopResult::Unknown53() {
  nn::ui2d::Pane* found = nullptr;
  accessor_.FindPane("A_Tlp")->ForEachChild([&found](nn::ui2d::Pane* child) {
    if (std::strcmp(child->GetName(), "L_Title") != 0 && child->IsVisible()) {
      found = child;
    }
  });
  return found;
}

void TelopResult::Unknown46() {
  gauge_->unknown_f0_ = 0;
  gauge_->unknown_ec_ = true;
  Unknown1374cc0(false);
}

}
