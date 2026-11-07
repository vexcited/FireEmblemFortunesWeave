#pragma GCC visibility push(hidden)
#include "game/map/map_unit_info.hpp"
#include "game/menu/dialog.hpp"
#include "game/proc/proc_game_skip_view.hpp"
#pragma GCC visibility pop

namespace game::menu {

Dialog::~Dialog() {
  ProcGameSkipView::PopState();
  if (map::MapUnitInfo* info = map::MapUnitInfo::GetInstance()) {
    info->SetUnknown16c();
  }
}

int Dialog::Unknown61() {
  return result_ == 5 ? 1 : result_;
}

void Dialog::Unknown69() {
  if (decide_callback_) {
    decide_callback_();
    return;
  }
  if (static_cast<int>(items_.size()) != 0) {
    BasicMenu::Unknown69();
    return;
  }
  sound::PlaySe("SE_SYS_Dialog_Send");
}

void Dialog::Unknown82() {
  if (unknown_4b0_) {
    unknown_4b0_();
  }
}

void Dialog::Unknown85() {
  Unknown1647ee0();
  Unknown135();
  Unknown1648380();
}

void Dialog::Unknown94() {
  sound::PlaySe("SE_SYS_DialogWindow_Close");
  BasicMenu::Unknown94();
}

}
