#pragma GCC visibility push(hidden)
#include "game/telop/telop_sequence.hpp"
#pragma GCC visibility pop

namespace game::telop {

class TelopWinRule : public TelopSequence {
public:
  ~TelopWinRule() override;

  int Unknown23() override { return 32768; }
  void Unknown33() override;
};

TelopWinRule::~TelopWinRule() = default;

}
