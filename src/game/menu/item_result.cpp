#pragma GCC visibility push(hidden)
#include "game/telop/telop_sequence.hpp"
#pragma GCC visibility pop

namespace game::menu {

class ItemResult : public telop::TelopSequence {
public:
  ~ItemResult() override;

  void Unknown29() override;
  void Unknown33() override;
  int Unknown52() override { return 1; }
  const char* Unknown53() override;
};

ItemResult::~ItemResult() = default;

}
