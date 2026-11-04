#include "game/menu/game_menu_item.hpp"

namespace game::menu {

namespace {

class HonorMenuItem : public menu::GameMenuItem {
public:
  int ACall() override { return 0; }
};

class InfoMenuItem : public HonorMenuItem {
public:
  InfoMenuItem();

  bool IsEnable() override { return false; }
  void DrawText() override;
};

[[gnu::used]] InfoMenuItem::InfoMenuItem() = default;

class GetItemMenuItem : public HonorMenuItem {
public:
  GetItemMenuItem();

  void DrawText() override;
};

[[gnu::used]] GetItemMenuItem::GetItemMenuItem() = default;

class EmptyMenuItem : public HonorMenuItem {
public:
  EmptyMenuItem();

  const char* GetMid() override { return "MID_Sys_Empty"; }
  void DrawText() override;
  bool IsEmpty() override { return true; }
};

[[gnu::used]] EmptyMenuItem::EmptyMenuItem() = default;

}

}
