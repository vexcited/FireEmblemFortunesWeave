#include "game/menu/unit_menu_item.hpp"

namespace game::facility {

namespace {

class RelianceMemoryMenuItem : public menu::UnitMenuItem {
public:
  RelianceMemoryMenuItem();

  void DrawText() override;
  bool Unknown75() override { return false; }
  bool Unknown87() override;
};

[[gnu::used]] RelianceMemoryMenuItem::RelianceMemoryMenuItem() = default;

}

}
