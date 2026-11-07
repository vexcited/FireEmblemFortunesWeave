#pragma once

#include <cstdint>

#include "game/menu/game_menu_item.hpp"
#include "game/unit_item.hpp"
#include "text/string.hpp"

namespace game::menu {

// What the info detail window shows for the selected command.
struct InfoDetailArgs {
  void* part;
  fw::text::String name;
  fw::text::String warning;
  const Unit* unit;
  UnitSkill skill;
  uint8_t kind;
};

class UnitCommandMenuItem : public GameMenuItem {
public:
  void ChangeSelect(bool selected) override;
  void OnSelect() override;
  virtual void Unknown70(InfoDetailArgs* args) {}

protected:
  void Unknown16ef450();
};

}
