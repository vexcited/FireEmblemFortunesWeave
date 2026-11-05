#include "game/gameui/header_footer.hpp"

#pragma GCC visibility push(hidden)
#include "game/map/command_item_menu_base.hpp"
#pragma GCC visibility pop

namespace game::map {

void CommandItemMenu_Base::Unknown30(bool enable) {
  if (MapTerrainInfo* info = MapTerrainInfo::GetInstance()) {
    info->GetAccessor().FindPart("L_KeyHelp").SetAlpha(enable ? 255 : 40);
  }
}

void CommandItemMenu_Base::Unknown95() {
  if (gameui::Footer::instance_ != nullptr) {
    gameui::Footer::instance_->Refresh(false);
  }
}

// The terrain key opens the floating help while no other window is shown.
int CommandItemMenu_Base::Unknown114() {
  MapTerrainInfo* info = MapTerrainInfo::GetInstance();
  if (info == nullptr || info->GetUnknown10() > 0 ||
      !info->GetAccessor().IsPaneVisible("L_KeyHelp")) {
    return 0;
  }

  gameui::FloatingHelp* help = gameui::FloatingHelp::GetInstance();
  if (help != nullptr && help->IsOpen()) {
    return 0;
  }

  MapInfo* map = MapInfo::GetInstance();
  if (map != nullptr && map->HasUnknown58()) {
    return 0;
  }

  return gameui::OpenFloatingHelp(this, {}) ? 13 : 0;
}

// The original inlines the whole growth path of push_back.
[[gnu::flatten]] void CommandItemMenu_Base::Unknown145(
  std::vector<menu::KeyHelpEntry>& keys) {
  keys.push_back({
    "StatusChange", "MID_KeyHelp_StatusChange", true, 2, GetKeyKind(), false,
    nullptr,
  });
}

class MapUnitCommandItemMenu : public CommandItemMenu_Base {
public:
  int Unknown22() override { return 1; }
  void Unknown84() override;
  int Unknown139() override { return 10; }
};

void MapUnitCommandItemMenu::Unknown84() {
  BelongingMenu::Unknown84();
  accessor_.FindPart("L_Help").SetVisible(false);
  accessor_3b8_.StartAnimation("Menu_10");
  Unknown16ca580();
}

class CmdBtlUnitCommandItemMenu : public MapUnitCommandItemMenu {
public:
  void Unknown128() override;
};

}
