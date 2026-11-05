#include <vector>

#include "game/cmdbtl/cmdbtl_unit_select_menu.hpp"

namespace game::cmdbtl {

namespace {

class ProcSystemUnitSelectMenu : public CmdBtlUnitSelectMenu {
public:
  ProcSystemUnitSelectMenu();
  ~ProcSystemUnitSelectMenu() override;

  int Unknown101() override;
  int Unknown109() override;
  int Unknown112() override;
  int ImplUnknown10() override;

private:
  uint8_t unknown_590_[0x10];
  std::vector<int32_t> unknown_5a0_;
};

[[gnu::used]] ProcSystemUnitSelectMenu::ProcSystemUnitSelectMenu() = default;

ProcSystemUnitSelectMenu::~ProcSystemUnitSelectMenu() = default;

}

}
