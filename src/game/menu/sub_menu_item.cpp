#include "game/menu/sub_menu_item.hpp"

#include "game/menu/sort_sub_menu_item.hpp"
#include "game/sound/se.hpp"

namespace game::menu {

int SubMenuItem::ACall() {
  if (!IsActive()) {
    return 1;
  }
  if (!bind_) {
    return 2;
  }
  return bind_(this);
}

void SortSubMenuItem::PlayDecideSe() {
  sound::PlaySe("SE_SYS_List_Sort");
}

void SortSubMenuItem::DrawText() {
  if (std::shared_ptr<ui::LayoutAccessor> accessor = accessor_.lock()) {
    accessor->SetPaneVisible("IconState", descending_);
  }
  SubMenuItem::DrawText();
}

}
