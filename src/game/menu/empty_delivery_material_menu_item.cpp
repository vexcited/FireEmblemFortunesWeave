#include "game/menu/game_menu_item.hpp"

namespace game::menu {

namespace {

class DeliveryMaterialMenuItem : public menu::GameMenuItem {
public:
  DeliveryMaterialMenuItem();

  void DrawText() override;
  bool IsActive() override { return true; }
};

[[gnu::used]] DeliveryMaterialMenuItem::DeliveryMaterialMenuItem() = default;

class EmptyDeliveryMaterialMenuItem : public DeliveryMaterialMenuItem {
public:
  EmptyDeliveryMaterialMenuItem();

  const char* GetMid() override { return "MID_Sys_Empty"; }
  int ACall() override { return 0; }
  void DrawText() override { GameMenuItem::DrawText(); }
  bool IsEmpty() override { return true; }
};

[[gnu::used]]
EmptyDeliveryMaterialMenuItem::EmptyDeliveryMaterialMenuItem() = default;

}

}
