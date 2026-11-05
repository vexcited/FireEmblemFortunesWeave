#pragma GCC visibility push(hidden)
#include "game/telop/telop_sequence.hpp"
#pragma GCC visibility pop

namespace game::telop {

class TelopCausationMerge : public TelopSequence {
public:
  ~TelopCausationMerge() override;

  int Unknown24() override { return 300; }
  int Unknown25() override { return 6; }
  void Unknown33() override;
  void Unknown35() override;
  void Unknown36() override;
  bool Unknown37() override;
  void Unknown39() override;
  bool Unknown41() override;
  const char* Unknown51() override { return "L_Merge/L_NextCursor"; }
  nn::ui2d::Pane* Unknown53() override;
};

TelopCausationMerge::~TelopCausationMerge() = default;

void TelopCausationMerge::Unknown35() {
  accessor_.PlayAnimation("In", false, 1.0f);
  accessor_.PlayAnimation("Title_In", false, 1.0f);
}

void TelopCausationMerge::Unknown36() {
  accessor_.PlayAnimation(GetWaitAnimation(), 1.0f);
  unknown_1a4_ = 0.0f;
  accessor_.PlayAnimation("Title_Wait", 1.0f);
}

void TelopCausationMerge::Unknown39() {
  accessor_.PlayAnimation("Title_Out", 1.0f);
}

nn::ui2d::Pane* TelopCausationMerge::Unknown53() {
  return accessor_.FindPane("L_Merge/N_Contents");
}

}
