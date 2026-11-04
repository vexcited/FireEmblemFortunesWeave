#include "game/menu/system_menu_item.hpp"
#include "game/menu/system_menu_item_assist.hpp"

namespace game::gmap {

namespace {

class SystemMenuItem_Map_Gmap : public menu::SystemMenuItem {
public:
  SystemMenuItem_Map_Gmap();

  const char* GetMid() override { return "MID_SysMenu_GmapMap"; }
  bool IsDecidable() override;
  int ACall() override;
};

[[gnu::used]] SystemMenuItem_Map_Gmap::SystemMenuItem_Map_Gmap() = default;

class SystemMenuItem_Assist_Gmap : public menu::SystemMenuItem_Assist {
public:
  SystemMenuItem_Assist_Gmap();

  int ACall() override;
};

[[gnu::used]]
SystemMenuItem_Assist_Gmap::SystemMenuItem_Assist_Gmap() = default;

class TurnEndMenuItem : public menu::SystemMenuItem {
public:
  TurnEndMenuItem();

  const char* GetMid() override { return "MID_SysMenu_End_Turn"; }
  bool IsDecidable() override;
  int ACall() override;
};

[[gnu::used]] TurnEndMenuItem::TurnEndMenuItem() = default;

}

}
