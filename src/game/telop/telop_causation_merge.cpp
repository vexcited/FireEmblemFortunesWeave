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
  const char* Unknown53() override;
};

TelopCausationMerge::~TelopCausationMerge() = default;

}
