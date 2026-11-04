#include "game/facility/obelisk_hero_menu_item.hpp"
#include "game/facility/obelisk_hero_start_menu_item.hpp"

namespace game::facility {

namespace {

class StartMenuItem : public facility::ObeliskHeroStartMenuItem {
public:
  StartMenuItem();

  const char* Unknown71() override;
};

[[gnu::used]] StartMenuItem::StartMenuItem() = default;

class RestartMenuItem : public facility::ObeliskHeroMenuItem {
public:
  RestartMenuItem();

  int XCall() override;
  void PlayDecideStrongSe() override {}
  void DrawText() override;
  const char* Unknown71() override;
};

[[gnu::used]] RestartMenuItem::RestartMenuItem() = default;

}

}
