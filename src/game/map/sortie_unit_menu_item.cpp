#include "game/menu/unit_menu_item.hpp"

namespace game::map {

namespace {

class SortieUnitMenuItem : public menu::UnitMenuItem {
public:
  SortieUnitMenuItem();

  int ACall() override;
  bool IsActive() override;
  bool Unknown83() override;
  bool Unknown89() override;
};

[[gnu::used]] SortieUnitMenuItem::SortieUnitMenuItem() = default;

}

}
