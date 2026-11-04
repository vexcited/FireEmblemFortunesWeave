#include <cstdint>

#include "game/gmap/gmap_spot_menu_item.hpp"
#include "game/sound/se.hpp"

namespace game::gmap {

namespace {

class GmapExWarpMenuItem : public GmapSpotMenuItem {
public:
  GmapExWarpMenuItem();

  void PlayDecideSe() override { sound::PlaySe("SE_SYS_Decide_H_EX"); }
  bool IsActive() override { return unknown_120_; }
  void Unknown70() override {}

private:
  uint8_t unknown_a0_[0x80];
  bool unknown_120_;
};

[[gnu::used]] GmapExWarpMenuItem::GmapExWarpMenuItem() = default;

}

}
