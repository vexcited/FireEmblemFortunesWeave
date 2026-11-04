#pragma GCC visibility push(hidden)
#include "game/telop/telop_sequence.hpp"
#pragma GCC visibility pop

namespace game::telop {

class TelopReminder : public TelopSequence {
public:
  ~TelopReminder() override;

  int Unknown18() override { return 4; }
  const char* GetInAnimation() override;
  void Unknown33() override;
  void Unknown35() override;
};

TelopReminder::~TelopReminder() = default;

}
