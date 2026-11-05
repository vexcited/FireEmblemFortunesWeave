#include "game/map/map_sortie_menu.hpp"

namespace game::map {

#pragma GCC visibility push(hidden)

class MapSystemMenu : public MapSortieMenu {
public:
  static int last_index_;

  void Unknown88() override;
  void Unknown03() override;
  const char* Unknown65() override { return nullptr; }
  void Unknown85() override;
  int Unknown112() override { return 0; }
  int ImplUnknown10() override;
  const char* ImplUnknown03() override;
};

#pragma GCC visibility pop

int MapSystemMenu::last_index_ = -1;

void MapSystemMenu::Unknown88() {
  int index = 0;
  for (menu::BasicMenuItem* item : items_) {
    if (item->IsDecidable() && item->IsEnable()) {
      if (item == current_) {
        last_index_ = index;
        return;
      }
      ++index;
    }
  }
  last_index_ = -1;
}

const char* MapSystemMenu::ImplUnknown03() {
  return "MID_SysMenu_Bmap_Title";
}

}
