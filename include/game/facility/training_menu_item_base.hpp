#pragma once

#include "game/menu/top_menu_item.hpp"

namespace game::facility {

class TrainingMenuItemBase : public menu::TopMenuItem {
public:
  const char* GetMid() override { return "MID_ArenaMenu_Training"; }
  const char* GetHelpMid() override { return "訓練"; }
  int ACall() override;
  bool IsActive() override;
  bool Unknown72() override;
  virtual void Unknown74();
};

}
