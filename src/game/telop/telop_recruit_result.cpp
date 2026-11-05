#pragma GCC visibility push(hidden)
#include "game/telop/telop_sequence.hpp"
#pragma GCC visibility pop

namespace game::telop {

class TelopRecruitResult : public TelopResult {
public:
  ~TelopRecruitResult() override;

  void Unknown36() override;
  void Unknown39() override;
  int Unknown52() override { return 1; }
  nn::ui2d::Pane* Unknown53() override;
  void Unknown56() override;
  void Unknown57() override;
};

TelopRecruitResult::~TelopRecruitResult() = default;

}
