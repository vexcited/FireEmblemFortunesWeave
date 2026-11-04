#pragma GCC visibility push(hidden)
#include "game/menu/dialog.hpp"
#pragma GCC visibility pop

namespace game::menu {

class NoInputDialog : public Dialog {
public:
  ~NoInputDialog() override;

  void Unknown02() override {}
  int Unknown100() override { return 0; }
  int Unknown101() override { return 0; }
};

NoInputDialog::~NoInputDialog() = default;

}
