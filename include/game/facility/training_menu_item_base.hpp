#pragma once

#include "game/menu/basic_menu.hpp"
#include "game/menu/top_menu_item.hpp"

namespace game::facility {

void OpenTraining(menu::BasicMenu* menu);

class TrainingMenuItemBase : public menu::TopMenuItem {
public:
  const char* GetMid() override { return "MID_ArenaMenu_Training"; }
  const char* GetHelpMid() override { return "訓練"; }

  int ACall() override {
    if (!IsActive()) {
      return 1;
    }
    OpenTraining(menu_->GetParent());
    return 9;
  }

  bool IsActive() override;
  bool Unknown72() override;
  virtual void Unknown74();
};

}
