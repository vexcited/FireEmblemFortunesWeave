#include "game/facility/obelisk_hero_menu_item.hpp"
#include "game/facility/obelisk_hero_start_menu_item.hpp"

namespace game::facility {

void ObeliskHeroStartMenuItem::PlayDecideStrongSe() {
}

bool ObeliskHeroStartMenuItem::Unknown70() {
  return true;
}

class ObeliskHeroRestartMenuItem : public ObeliskHeroMenuItem {
public:
  void PlayDecideStrongSe() override;
  bool Unknown70() override;
  int XCall() override;
  void PlayChangeSe() override;
  void DrawText() override;
  const char* Unknown71() override;
};

void ObeliskHeroRestartMenuItem::PlayDecideStrongSe() {
}

bool ObeliskHeroRestartMenuItem::Unknown70() {
  return true;
}

class ObeliskHeroRetryMenuItem : public ObeliskHeroMenuItem {
public:
  const char* Unknown71() override;
  int ACall() override;
  void PlayDecideStrongSe() override;
  void DrawText() override;
};

const char* ObeliskHeroRetryMenuItem::Unknown71() {
  return nullptr;
}

class ObeliskHeroPart2SkipMenuItem : public ObeliskHeroMenuItem {
public:
  const char* Unknown72() override;
  void DrawText() override;
  const char* Unknown71() override;
};

const char* ObeliskHeroPart2SkipMenuItem::Unknown72() {
  return "SE_SYS_Decide_Obelisk_SecondEnd";
}

}
