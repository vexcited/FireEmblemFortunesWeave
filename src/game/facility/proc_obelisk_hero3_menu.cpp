#include "game/facility/obelisk_hero_menu.hpp"
#include "game/sound/se.hpp"

namespace game::facility {

namespace {

class ProcObeliskHero3Menu : public ObeliskHeroMenu {
public:
  ProcObeliskHero3Menu();

  const char* Unknown33() override { return "Obelisk_Hero3"; }
  bool Unknown64() override { return true; }
  void Unknown69() override {}
  void Unknown75() override;
  void Unknown88() override {}
  int Unknown103() override { return 0; }
  int Unknown105() override { return 0; }
  void Unknown128() override;
  void Unknown143() override;
};

[[gnu::used]] ProcObeliskHero3Menu::ProcObeliskHero3Menu() = default;

void ProcObeliskHero3Menu::Unknown75() {
  sound::PlaySe("SE_SYS_Status_Open");
}

}

}
