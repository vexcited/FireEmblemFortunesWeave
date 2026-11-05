#include <algorithm>

#include "game/frame_step.hpp"

#pragma GCC visibility push(hidden)
#include "game/telop/telop_sequence.hpp"

namespace game::telop {

class TelopRelianceKnow : public TelopSequence {
public:
  ~TelopRelianceKnow() override;

  void Unknown33() override;
  void Unknown36() override;
  void Unknown39() override;
  bool Unknown43() override;
  nn::ui2d::Pane* Unknown53() override;

private:
  const void* unknown_338_;
  PartList parts_;
};

class TelopRelianceLvUp : public TelopSequence {
public:
  ~TelopRelianceLvUp() override;

  void Unknown33() override;
  void Unknown36() override;
  void Unknown39() override;
  bool Unknown43() override;
  nn::ui2d::Pane* Unknown53() override;

private:
  const void* unknown_338_;
  const void* unknown_340_;
  const void* unknown_348_;
  PartList parts_;
};

class TelopCausationUpdate : public TelopSequence {
public:
  ~TelopCausationUpdate() override;

  void Unknown33() override;
  void Unknown36() override;
  void Unknown39() override;
  bool Unknown43() override;
  nn::ui2d::Pane* Unknown53() override;

private:
  const void* unknown_338_;
  PartList parts_;
};

namespace {

void PlayPartsIn(TelopSequence::PartList& parts) {
  for (std::weak_ptr<ui::LayoutAccessor>& part : parts) {
    if (std::shared_ptr<ui::LayoutAccessor> locked = part.lock()) {
      locked->SetVisible(true);
      locked->PlayAnimation("In", 1.0f);
    }
  }
}

void PlayPartsOut(TelopSequence::PartList& parts) {
  for (std::weak_ptr<ui::LayoutAccessor>& part : parts) {
    if (std::shared_ptr<ui::LayoutAccessor> locked = part.lock()) {
      locked->PlayAnimation("Out", 1.0f);
    }
  }
}

// The last visible child of the pane.
nn::ui2d::Pane* FindLastVisibleChild(nn::ui2d::Pane* pane) {
  nn::ui2d::Pane* found = nullptr;
  pane->ForEachChild([&found](nn::ui2d::Pane* child) {
    if (child->IsVisible()) {
      found = child;
    }
  });
  return found;
}

}

TelopRelianceKnow::~TelopRelianceKnow() = default;

void TelopRelianceKnow::Unknown36() {
  accessor_.PlayAnimation(GetWaitAnimation(), 1.0f);
  unknown_1a4_ = 0.0f;
  PlayPartsIn(parts_);
}

void TelopRelianceKnow::Unknown39() {
  PlayPartsOut(parts_);
}

bool TelopRelianceKnow::Unknown43() {
  if (unknown_1a4_ < unknown_148_) {
    unknown_1a4_ = std::min(unknown_148_, unknown_1a4_ + GetFrameStep());
    return false;
  }
  if (voice_.isValid()) {
    return false;
  }
  return IsPartsInFinished(parts_);
}

nn::ui2d::Pane* TelopRelianceKnow::Unknown53() {
  return FindLastVisibleChild(accessor_.FindPane("N_Tlp"));
}

TelopRelianceLvUp::~TelopRelianceLvUp() = default;

void TelopRelianceLvUp::Unknown36() {
  accessor_.PlayAnimation(GetWaitAnimation(), 1.0f);
  unknown_1a4_ = 0.0f;
  PlayPartsIn(parts_);
}

void TelopRelianceLvUp::Unknown39() {
  PlayPartsOut(parts_);
}

bool TelopRelianceLvUp::Unknown43() {
  if (unknown_1a4_ < unknown_148_) {
    unknown_1a4_ = std::min(unknown_148_, unknown_1a4_ + GetFrameStep());
    return false;
  }
  if (voice_.isValid()) {
    return false;
  }
  return IsPartsInFinished(parts_);
}

nn::ui2d::Pane* TelopRelianceLvUp::Unknown53() {
  return accessor_.FindPane("L_Txt00");
}

TelopCausationUpdate::~TelopCausationUpdate() = default;

void TelopCausationUpdate::Unknown36() {
  accessor_.PlayAnimation(GetWaitAnimation(), 1.0f);
  unknown_1a4_ = 0.0f;
  PlayPartsIn(parts_);
}

void TelopCausationUpdate::Unknown39() {
  PlayPartsOut(parts_);
}

bool TelopCausationUpdate::Unknown43() {
  if (unknown_1a4_ < unknown_148_) {
    unknown_1a4_ = std::min(unknown_148_, unknown_1a4_ + GetFrameStep());
    return false;
  }
  if (voice_.isValid()) {
    return false;
  }
  return IsPartsInFinished(parts_);
}

// The pane of the last shown line.
nn::ui2d::Pane* TelopCausationUpdate::Unknown53() {
  for (const char* name : {"L_Txt01", "L_Txt00"}) {
    if (accessor_.IsPaneVisible(name)) {
      return accessor_.FindPane(name);
    }
  }
  return nullptr;
}

}

#pragma GCC visibility pop
