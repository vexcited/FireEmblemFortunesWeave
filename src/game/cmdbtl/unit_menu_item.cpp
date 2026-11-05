#include "game/menu/unit_menu_item.hpp"

namespace game::cmdbtl {

namespace {

class UnitMenuItem : public menu::UnitMenuItem {
public:
  UnitMenuItem();

  int ACall() override;
  void Unknown70() override;
  bool Unknown71() override { return unknown_61_; }
  bool Unknown72() override { return unknown_60_; }
  bool Unknown89() override;

private:
  bool unknown_60_;
  bool unknown_61_;
};

[[gnu::used]] UnitMenuItem::UnitMenuItem() = default;

}

}
