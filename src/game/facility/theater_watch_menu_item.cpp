#include "game/facility/facility_unit_menu_item.hpp"
#include "game/menu/top_menu_item.hpp"

namespace game::facility {

namespace {

class TheaterWatchMenuItem : public menu::TopMenuItem {
public:
  TheaterWatchMenuItem();

  const char* GetMid() override { return "MID_TheaterMenu_Watch"; }
  const char* GetHelpMid() override { return "観劇"; }
  int ACall() override;
  void DrawText() override;
  bool IsActive() override { return unknown_54_ == 0; }
  void Unknown73() override;
};

[[gnu::used]] TheaterWatchMenuItem::TheaterWatchMenuItem() = default;

class TheaterActMenuItem : public menu::TopMenuItem {
public:
  TheaterActMenuItem();

  const char* GetMid() override { return "MID_TheaterMenu_Act"; }
  const char* GetHelpMid() override { return "演劇"; }
  bool IsDecidable() override { return (unknown_54_ & 0x400000) == 0; }
  int ACall() override;
  void DrawText() override;
  bool IsActive() override { return unknown_54_ == 0; }
  void Unknown73() override;
};

[[gnu::used]] TheaterActMenuItem::TheaterActMenuItem() = default;

class TheaterWatchUnitMenuItem : public facility::FacilityUnitMenuItem {
public:
  TheaterWatchUnitMenuItem();

  int Unknown79() override { return 0; }
  int Unknown80() override;
};

[[gnu::used]] TheaterWatchUnitMenuItem::TheaterWatchUnitMenuItem() = default;

}

}
