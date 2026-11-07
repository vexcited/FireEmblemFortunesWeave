#include <functional>
#include <vector>

#pragma GCC visibility push(hidden)
#include "game/menu/dialog.hpp"

namespace game::menu {

class CorpsSelectDialog final : public Dialog {
public:
  ~CorpsSelectDialog() override;

  const char* Unknown32() override { return "Layout/CommonMenu.arc"; }
  const char* Unknown33() override { return "Common_DialogUnitSelect"; }
  int Unknown55() override { return 1; }
  void Unknown85() override;
  void Unknown88() override;
  int Unknown100() override;
  void Unknown128() override;
  void Unknown129() override;
  int InputUnknown02() override { return 6; }
  int InputUnknown00() override { return 1; }
  int InputUnknown01() override { return 1; }

private:
  uint8_t unknown_5c8_[0x18];
  std::function<void()> unknown_5e0_;
  std::vector<int> unknown_610_;
};

CorpsSelectDialog::~CorpsSelectDialog() = default;

}

#pragma GCC visibility pop
