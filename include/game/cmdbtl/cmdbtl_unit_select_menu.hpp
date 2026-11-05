#pragma once

#include <cstdint>
#include <vector>

#include "game/menu/equip_unit_select_menu.hpp"

namespace game::cmdbtl {

#pragma GCC visibility push(hidden)

// The unit list of the command battles.
class CmdBtlUnitSelectMenu : public menu::EquipUnitSelectMenu {
public:
  CmdBtlUnitSelectMenu();

  void Unknown84() override;
  int Unknown101() override;
  bool Unknown145() override;
  bool Unknown149() override;
  const char* ImplUnknown03() override;
  const char* ImplUnknown05() override;

protected:
  int Unknown1637be0();
  void Unknown1638380();

  uint8_t unknown_568_;
  uint8_t unknown_569_[0xf];
  std::vector<int32_t> unknown_578_;
};

#pragma GCC visibility pop

}
