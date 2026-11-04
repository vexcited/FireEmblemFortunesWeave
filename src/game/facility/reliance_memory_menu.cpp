#include "game/facility/scene_base.hpp"
#include "game/menu/unit_grid_select_menu.hpp"
#include "game/menu/unit_list.hpp"

namespace game {

#pragma GCC visibility push(hidden)

class KnownManager : public Singleton<KnownManager> {};

#pragma GCC visibility pop

}

namespace game::facility {

namespace {

class RelianceMemoryMenu : public menu::UnitGridSelectMenu {
public:
  RelianceMemoryMenu();

  ~RelianceMemoryMenu() override {
    ResetMenuUnits();
    SingletonControl<KnownManager>::Release();
  }

  const char* Unknown32() override { return "Layout/CommonMenu.arc"; }
  const char* Unknown33() override { return "Common_UnitSelect_Reliance"; }
  bool Unknown64() override { return true; }
  void Unknown84() override;
  void Unknown88() override;
  int Unknown100() override;
  void Unknown128() override;
  void Unknown129() override;

  const char* ImplUnknown03() override {
    return "MID_ObeliskMenu_Memory_Reliance";
  }

  const char* ImplUnknown05() override {
    return "MID_RelianceMenu_Hotel_UnitSelect_Help";
  }

  uint8_t ImplUnknown07() override { return 1; }
};

[[gnu::used]] RelianceMemoryMenu::RelianceMemoryMenu() = default;

}

}
