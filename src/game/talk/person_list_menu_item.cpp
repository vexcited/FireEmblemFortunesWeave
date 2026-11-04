#include "game/menu/unit_menu_item.hpp"

namespace game::talk {

namespace {

class PersonListMenuItem : public menu::UnitMenuItem {
public:
  PersonListMenuItem();

  void DrawText() override;
  void PlayIdleAnimation() override;
  void PlayCursorAnimation() override;
  void PlaySelectedAnimation() override;
  bool Unknown71() override { return false; }
  bool Unknown72() override { return false; }
  bool Unknown73() override { return false; }
};

[[gnu::used]] PersonListMenuItem::PersonListMenuItem() = default;

}

}
