#pragma GCC visibility push(hidden)
#include "game/telop/telop_sequence.hpp"

namespace game::telop {

class TelopWinRule : public TelopSequence {
public:
  ~TelopWinRule() override;

  int Unknown23() override { return 32768; }
  void Unknown33() override;

private:
  uint64_t unknown_338_;
  std::string unknown_340_;
  std::string unknown_358_;
};

TelopWinRule::~TelopWinRule() = default;

}

#pragma GCC visibility pop
