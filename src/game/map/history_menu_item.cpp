#include "game/menu/game_menu_item.hpp"

namespace game::map {

namespace {

class HistoryMenuItem : public menu::GameMenuItem {
public:
  HistoryMenuItem();

  void Draw() override;
  void Unknown17() override;
  void OnSelect() override;
  void OnDeselect() override;
  int ACall() override;
  int BCall() override;
};

[[gnu::used]] HistoryMenuItem::HistoryMenuItem() = default;

}

}
