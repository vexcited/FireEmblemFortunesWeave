#include "game/menu/sub_menu_item.hpp"

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

}
