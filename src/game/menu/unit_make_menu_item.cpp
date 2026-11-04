#include "game/menu/game_menu_item.hpp"

namespace game::menu {

class UnitMakeMenuItem : public GameMenuItem {
public:
  bool Unknown14() override;
  const char16_t* GetText() override;
  void PlayIdleAnimation() override;
};

bool UnitMakeMenuItem::Unknown14() {
  return true;
}

class UnitMakeInvisibleMenuItem : public UnitMakeMenuItem {
public:
  bool IsEnable() override;
  void DrawText() override;
};

bool UnitMakeInvisibleMenuItem::IsEnable() {
  return false;
}

}
