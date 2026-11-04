#include "game/menu/game_menu_item.hpp"
#include "game/menu/multi_menu_item.hpp"

namespace game::gmap {

class GmapCorpsMenu;
class Corps;

class GmapCorpsMenuItem : public menu::GameMenuItem,
  public menu::MultiMenuItem<GmapCorpsMenu> {};

namespace {

class CorpsMenuItem : public GmapCorpsMenuItem {
public:
  CorpsMenuItem();

  virtual Corps* GetCorps() { return corps_; }

private:
  Corps* corps_;
};

[[gnu::used]] CorpsMenuItem::CorpsMenuItem() = default;

class EmptyMenuItem : public CorpsMenuItem {
public:
  EmptyMenuItem();

  const char* GetMid() override { return "MID_Sys_Empty"; }
  bool IsEnable() override { return true; }
  bool IsDecidable() override { return true; }
};

[[gnu::used]] EmptyMenuItem::EmptyMenuItem() = default;

class PoolCorpsMenuItem : public CorpsMenuItem {
public:
  PoolCorpsMenuItem();

  bool IsDecidable() override { return GetCorps() != nullptr; }
};

[[gnu::used]] PoolCorpsMenuItem::PoolCorpsMenuItem() = default;

}

}
