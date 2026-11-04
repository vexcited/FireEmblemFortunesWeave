#pragma once

#include "game/facility/obelisk_hero_menu_item.hpp"

namespace game::facility {

class ObeliskHeroStartMenuItem : public ObeliskHeroMenuItem {
public:
  void PlayDecideStrongSe() override;
  bool Unknown70() override;
  int ACall() override;
  int XCall() override;
  void PlayChangeSe() override;
  void DrawText() override;
  const char* Unknown71() override;
};

}
