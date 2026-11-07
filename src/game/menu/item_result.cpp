#include <string>
#include <vector>

#pragma GCC visibility push(hidden)
#include "game/menu/item_result_entry.hpp"
#include "game/telop/telop_sequence.hpp"

namespace game::menu {

class ItemResult : public telop::TelopSequence {
public:
  [[gnu::always_inline]] ~ItemResult() override;

  void Unknown29() override;
  void Unknown33() override;
  int Unknown52() override { return 1; }
  nn::ui2d::Pane* Unknown53() override;

private:
  std::vector<ItemResultEntry> entries_;
  std::string unknown_350_;
  std::string unknown_368_;
};

ItemResult::~ItemResult() = default;

}

#pragma GCC visibility pop
