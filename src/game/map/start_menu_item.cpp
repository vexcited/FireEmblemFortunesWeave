#include "game/menu/basic_menu.hpp"
#include "game/menu/system_menu_item.hpp"
#include "game/menu/system_menu_item_class_change.hpp"
#include "game/menu/system_menu_item_info.hpp"
#include "game/menu/system_menu_item_retired.hpp"

namespace game::map {

void OpenSelect(menu::BasicMenu* menu);

namespace {

class StartMenuItem : public menu::SystemMenuItem {
public:
  StartMenuItem();

  const char* GetMid() override { return "MID_SysMenu_StartBattle"; }
  void OnClose() override;
  int ACall() override;
};

[[gnu::used]] StartMenuItem::StartMenuItem() = default;

class SelectMenuItem : public menu::SystemMenuItem {
public:
  SelectMenuItem();

  const char* GetMid() override { return "MID_SysMenu_UnitSelect"; }
  bool IsDecidable() override;

  int ACall() override {
    OpenSelect(menu_->GetParent());
    return 9;
  }

};

[[gnu::used]] SelectMenuItem::SelectMenuItem() = default;

class PickMenuItem : public menu::SystemMenuItem {
public:
  PickMenuItem();

  const char* GetMid() override { return "MID_SysMenu_Change_Position"; }
  bool IsDecidable() override;
  int ACall() override;
};

[[gnu::used]] PickMenuItem::PickMenuItem() = default;

class SystemMenuItem_ClassChenge_Sortie
  : public menu::SystemMenuItem_ClassChange {
public:
  SystemMenuItem_ClassChenge_Sortie();
};

[[gnu::used]]
SystemMenuItem_ClassChenge_Sortie::
  SystemMenuItem_ClassChenge_Sortie() = default;

class SystemMenuItem_Info_Sortie : public menu::SystemMenuItem_Info {
public:
  SystemMenuItem_Info_Sortie();

  int ACall() override;
};

[[gnu::used]]
SystemMenuItem_Info_Sortie::SystemMenuItem_Info_Sortie() = default;

class SystemMenuItem_Retired_Sortie : public menu::SystemMenuItem_Retired {
public:
  SystemMenuItem_Retired_Sortie();

  void Unknown71() override;
};

[[gnu::used]]
SystemMenuItem_Retired_Sortie::SystemMenuItem_Retired_Sortie() = default;

}

}
