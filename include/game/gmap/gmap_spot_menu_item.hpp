#pragma once

#include "game/gameui/quest_icon_switcher.hpp"
#include "game/menu/game_menu_item.hpp"

namespace game::gmap {

class Spot;

class GmapSpotMenuItem : public menu::GameMenuItem {
public:
  void Unknown16() override;
  void Unknown19() override;
  void DrawText() override;
  bool IsActive() override;
  virtual void Unknown70();
  virtual void Unknown71();
  virtual void Unknown72();

protected:
  const Spot* spot_;
  void* unknown_60_;
  gameui::Util::QuestIconSwitcher quest_icon_;
};

}
