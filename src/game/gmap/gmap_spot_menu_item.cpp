#include "game/gmap/gmap_spot_menu_item.hpp"

namespace game::gmap {

class GmapSpotEmptyMenuItem : public GmapSpotMenuItem {
public:
  const char* GetMid() override;
  int ACall() override;
  void DrawText() override;
  bool IsActive() override;
  bool IsEmpty() override;
};

const char* GmapSpotEmptyMenuItem::GetMid() {
  return "MID_Sys_Empty";
}

int GmapSpotEmptyMenuItem::ACall() {
  return 0;
}

bool GmapSpotEmptyMenuItem::IsActive() {
  return false;
}

bool GmapSpotEmptyMenuItem::IsEmpty() {
  return true;
}

}
