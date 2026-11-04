#pragma GCC visibility push(hidden)
#include "game/telop/telop_sequence.hpp"
#pragma GCC visibility pop

namespace game::telop {

class TelopVolunteerResult : public TelopResult {
public:
  ~TelopVolunteerResult() override;

  bool Unknown43() override;
  void Unknown56() override;
  void Unknown57() override;
  int Unknown58() override;
  void Unknown59() override;
  void Unknown61() override;
  virtual int Unknown62() { return 1; }
};

class TelopSortieVolunteerResult : public TelopVolunteerResult {
public:
  ~TelopSortieVolunteerResult() override;

  int Unknown62() override { return 0; }
};

TelopVolunteerResult::~TelopVolunteerResult() = default;
TelopSortieVolunteerResult::~TelopSortieVolunteerResult() = default;

}
