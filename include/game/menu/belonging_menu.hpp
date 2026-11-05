#pragma once

#include "game/menu/game_menu.hpp"
#include "ui/layout_accessor.hpp"

namespace game {

class ProcInst;
class Unit;

namespace map {

// The instance of the map sequence, internal to its unit.
[[gnu::visibility("hidden")]] extern ProcInst* g_map_seq;

}

}

namespace game::menu {

// The menus listing the belongings of a unit, with its information beside.
class BelongingMenu : public GameMenu {
public:
  ~BelongingMenu() override;

  int Unknown24() override;
  const char* Unknown32() override { return "Layout/CommonMenu.arc"; }
  const char* Unknown33() override { return "Common_Belongings"; }
  const char* Unknown35() override { return "L_ItemSelectMenu"; }
  const char* Unknown42() override { return "L_UnitInfo/L_KeySort"; }
  int Unknown56() override { return 3; }
  bool Unknown60() override { return true; }
  bool Unknown64() override { return true; }
  void Unknown84() override;
  void Unknown85() override;
  virtual int Unknown139() { return 9; }
  virtual bool Unknown140() { return false; }
  virtual bool Unknown141() { return true; }
  virtual void* Unknown142() { return nullptr; }
  virtual void Unknown143() {}
  int InputUnknown12(int direction, bool loop) override;

protected:
  // The key icons of the map menus differ from the hub ones.
  static int GetKeyKind() {
    return map::g_map_seq != nullptr ? 24 : 23;
  }

  void Unknown16ca580();

  ui::LayoutAccessor info_detail_;
  Unit* unit_;
  const char* unit_mid_;
};

static_assert(sizeof(BelongingMenu) == 0x4a0);

}
