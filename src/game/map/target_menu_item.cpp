#include "game/menu/equip_menu_item_base.hpp"
#include "game/menu/equip_menu_item_item.hpp"

namespace game::map {

namespace {

class TargetMenuItem : public menu::EquipMenuItem_Item {
public:
  TargetMenuItem();

  bool IsDecidable() override;
  void OnSelect() override;
  int ACall() override;
  void DrawText() override;
  bool IsActive() override { return active_; }
  bool IsEquip() override;
  virtual void Unknown70();
};

[[gnu::used]] TargetMenuItem::TargetMenuItem() = default;

class SkillFixMenuItem : public menu::EquipMenuItemBase {
public:
  SkillFixMenuItem();

  bool IsEnable() override { return false; }
  void Unknown17() override;
  void DrawText() override;
};

[[gnu::used]] SkillFixMenuItem::SkillFixMenuItem() = default;

class TargetMenuAssistItem : public TargetMenuItem {
public:
  TargetMenuAssistItem();
};

[[gnu::used]] TargetMenuAssistItem::TargetMenuAssistItem() = default;

class CmdBtlTargetMenuItem : public TargetMenuItem {
public:
  CmdBtlTargetMenuItem();

  bool IsDecidable() override;
  void Unknown70() override;
};

[[gnu::used]] CmdBtlTargetMenuItem::CmdBtlTargetMenuItem() = default;

}

}
