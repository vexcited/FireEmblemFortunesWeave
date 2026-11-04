#include "game/gmap/legion_menu_util_base_menu_item.hpp"

namespace game::gmap {

namespace {

class ComebackMenuItem : public LegionMenuUtil::BaseMenuItem {
public:
  ComebackMenuItem();

  void DrawText() override;
  bool Unknown70() override { return true; }
  const char* Unknown73() override;
};

[[gnu::used]] ComebackMenuItem::ComebackMenuItem() = default;

}

}
