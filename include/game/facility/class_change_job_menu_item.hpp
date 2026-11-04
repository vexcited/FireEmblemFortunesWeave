#pragma once

#include "game/menu/game_menu_item.hpp"

namespace game::facility {

class ClassChangeJobMenuItem : public menu::GameMenuItem {
public:
  virtual int Unknown70();
  virtual bool Unknown71();
  const char* GetMid() override;
  void OnSelect() override;
  void DrawText() override;
  bool IsActive() override;
};

}
