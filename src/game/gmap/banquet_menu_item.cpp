#include "game/menu/game_menu_item.hpp"
#include "game/menu/multi_menu_item.hpp"

namespace game::gmap {

class GmapBanquetMenu;

namespace {

class BanquetMenuItem : public menu::GameMenuItem,
  public menu::MultiMenuItem<GmapBanquetMenu> {
public:
  bool IsEmpty() override { return index_ == -1; }
};

class BanqueUserMenuItem : public BanquetMenuItem {
public:
  BanqueUserMenuItem();
};

[[gnu::used]] BanqueUserMenuItem::BanqueUserMenuItem() = default;

class BanquePoolMenuItem : public BanquetMenuItem {
public:
  BanquePoolMenuItem();

  bool IsActive() override { return count_ > used_; }

private:
  int used_;
  int count_;
};

[[gnu::used]] BanquePoolMenuItem::BanquePoolMenuItem() = default;

}

}
