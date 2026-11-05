#pragma once

#include <cstdint>
#include <memory>

#include "game/menu/game_menu.hpp"
#include "game/unit.hpp"

namespace game::facility {

// Shared base of the skill reinforce and skill educate menus of the temple.
class SkillMenuBase : public menu::GameMenu {
public:
  const char* Unknown32() override { return "Layout/Hub.arc"; }

  std::weak_ptr<ui::LayoutAccessor> Unknown50() override {
    return accessor_.GetPart("L_UnitInfo/L_ArrowL");
  }

  std::weak_ptr<ui::LayoutAccessor> Unknown51() override {
    return accessor_.GetPart("L_UnitInfo/L_ArrowR");
  }

  void Unknown76(int result) override;
  void Unknown77(int result) override;
  void Unknown84() override;
  void Unknown96() override;
  int Unknown101() override;
  int Unknown103() override;
  int Unknown105() override;
  virtual Unit* GetNextUnit() = 0;
  virtual Unit* GetPreviousUnit() = 0;
  virtual bool Unknown141() = 0;
  int InputUnknown01() override = 0;
  uint8_t ImplUnknown08() override { return 32; }

protected:
  void ChangeUnit(Unit* unit);
  void Unknown16d7120(bool after);

  Unit* unit_;
};

}
