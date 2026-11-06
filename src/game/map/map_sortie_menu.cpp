#include "game/game_mode_data.hpp"
#include "game/sound/se.hpp"
#include "ui/layout_accessor.hpp"

#pragma GCC visibility push(hidden)
#include "game/map/map_sortie_menu.hpp"
#pragma GCC visibility pop

namespace game::map {

// Lists the hints the sortie menu can show, true when there is one.
bool HasSortieHints();

int MapSortieMenu::last_index_ = -1;

void MapSortieMenu::Unknown30(bool enable) {
  {
    std::weak_ptr<ui::LayoutAccessor> help =
      accessor_.GetPart("L_KeyHelp01");
    ui::SetPartEnabled(help, enable, false);
  }
  std::weak_ptr<ui::LayoutAccessor> help_all = accessor_.GetPart("L_KeyHelp");
  ui::SetPartEnabled(help_all, enable, false);
}

const char* MapSortieMenu::Unknown65() {
  return "出撃準備";
}

void MapSortieMenu::Unknown75() {
  sound::PlaySe("SE_SYS_List_Change");
}

void MapSortieMenu::Unknown78(int result) {
  sound::PlaySe("SE_SYS_List_Change_H");
}

void MapSortieMenu::Unknown88() {
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

void MapSortieMenu::Unknown99() {
  unknown_514_ = 0;
  if (GameModeData* data = GameModeData::GetInstance()) {
    if (const ChapterData* chapter = data->GetChapter()) {
      map_.Setup(accessor_.GetPart("L_Minimap"), chapter->minimap_scale);
    }
  }
}

int MapSortieMenu::Unknown107() {
  if (HasSortieHints() && hint_enabled_) {
    hint_ = !hint_;
    UpdateHint();
    return 13;
  }
  return 0;
}

const char* MapSortieMenu::ImplUnknown03() {
  return "MID_SysMenu_Sortie_Title";
}

}
