#include "game/menu/basic_menu_item.hpp"

namespace game::menu {

namespace {

class ChoiceMenuItem : public menu::BasicMenuItem {
public:
  ChoiceMenuItem();

  void Draw() override;
  void OnSelect() override;
  void OnDeselect() override;
};

[[gnu::used]] ChoiceMenuItem::ChoiceMenuItem() = default;

}

}
