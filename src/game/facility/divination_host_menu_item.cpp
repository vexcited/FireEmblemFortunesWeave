#include "game/menu/top_menu_item.hpp"

namespace game::facility {

namespace {

class DivinationHostMenuItem : public menu::TopMenuItem {
public:
  DivinationHostMenuItem();

  const char* GetMid() override { return "MID_DivinationMenu_Divination"; }
  int ACall() override;
  bool IsActive() override;
  void Unknown73() override;
};

[[gnu::used]] DivinationHostMenuItem::DivinationHostMenuItem() = default;

class DivinationVisitorMenuItem : public menu::TopMenuItem {
public:
  DivinationVisitorMenuItem();

  const char* GetMid() override {
    return "MID_DivinationMenu_DivinationVisiter";
  }
  int ACall() override;
  bool IsActive() override;
  void Unknown73() override;
};

[[gnu::used]] DivinationVisitorMenuItem::DivinationVisitorMenuItem() = default;

}

}
