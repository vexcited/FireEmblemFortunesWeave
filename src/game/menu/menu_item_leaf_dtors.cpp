#include "game/facility/item_shop_menu_item_base.hpp"
#include "game/facility/shop_top_menu_item.hpp"
#include "game/facility/shop_unit_select_menu_item.hpp"
#include "game/menu/equip_menu_item_base.hpp"
#include "game/menu/equip_menu_item_item.hpp"
#include "game/menu/game_menu_item.hpp"
#include "game/menu/multi_menu_item.hpp"
#include "game/menu/unit_menu_item.hpp"

// Leaf items whose own destructors are trivial. Only their deleting
// destructors exist, inlining the BasicMenuItem destructor. The classes
// keep the bases of the RTTI and only declare what emits their vtables.

namespace game {

enum class Difficulty : int {};
enum class GameMode : int {};

class MiracleConst {};

namespace {

template<typename T>
class SelectMenu {
public:
  class SelectMenuItem : public menu::GameMenuItem {};
};

class DiffMenu {
public:
  class DiffMenuItem : public SelectMenu<Difficulty>::SelectMenuItem {
  public:
    DiffMenuItem();
  };
};

[[gnu::used]] DiffMenu::DiffMenuItem::DiffMenuItem() = default;

class ModeMenu {
public:
  class ModeMenuItem : public SelectMenu<GameMode>::SelectMenuItem {
  public:
    ModeMenuItem();
  };
};

[[gnu::used]] ModeMenu::ModeMenuItem::ModeMenuItem() = default;

}

}

namespace game::menu {

class ExchangeMenu;
class SkillChangeMenu;
class TransporterMenu;

class UnitTroopMenuConst {};

class UnitTroopMenuItem : public UnitMenuItem, public UnitTroopMenuConst {
public:
  UnitTroopMenuItem();
};

[[gnu::used]] UnitTroopMenuItem::UnitTroopMenuItem() = default;

class CmdBtlUnitTroopMenuItem : public UnitTroopMenuItem {
public:
  CmdBtlUnitTroopMenuItem();
};

[[gnu::used]] CmdBtlUnitTroopMenuItem::CmdBtlUnitTroopMenuItem() = default;

namespace {

class EquipMenuItem_Skill
  : public EquipMenuItemBase, public MultiMenuItem<SkillChangeMenu> {
public:
  EquipMenuItem_Skill();
};

[[gnu::used]] EquipMenuItem_Skill::EquipMenuItem_Skill() = default;

class EquipMenuItem_SkillEquip : public EquipMenuItem_Skill {
public:
  EquipMenuItem_SkillEquip();
};

[[gnu::used]] EquipMenuItem_SkillEquip::EquipMenuItem_SkillEquip() = default;

class EquipMenuItem_SkillFix : public EquipMenuItem_Skill {
public:
  EquipMenuItem_SkillFix();
};

[[gnu::used]] EquipMenuItem_SkillFix::EquipMenuItem_SkillFix() = default;

class EquipMenuItem_SkillPool : public EquipMenuItem_Skill {
public:
  EquipMenuItem_SkillPool();
};

[[gnu::used]] EquipMenuItem_SkillPool::EquipMenuItem_SkillPool() = default;

class EquipMenuItem_ItemExchange
  : public EquipMenuItem_Item, public MultiMenuItem<ExchangeMenu> {
public:
  EquipMenuItem_ItemExchange();
};

[[gnu::used]] EquipMenuItem_ItemExchange::EquipMenuItem_ItemExchange() =
  default;

class MenuItemBase
  : public EquipMenuItemBase, public MultiMenuItem<TransporterMenu> {};

class EquipMenuItem_UnitItem : public MenuItemBase {
public:
  EquipMenuItem_UnitItem();
};

[[gnu::used]] EquipMenuItem_UnitItem::EquipMenuItem_UnitItem() = default;

class EquipMenuItem_TransporterEmpty : public MenuItemBase {
public:
  EquipMenuItem_TransporterEmpty();
};

[[gnu::used]] EquipMenuItem_TransporterEmpty::
  EquipMenuItem_TransporterEmpty() = default;

class EquipMenuItem_Transporter : public MenuItemBase {
public:
  EquipMenuItem_Transporter();
};

[[gnu::used]] EquipMenuItem_Transporter::EquipMenuItem_Transporter() =
  default;

class InventoryUnitTroopMenuItem : public UnitTroopMenuItem {
public:
  InventoryUnitTroopMenuItem();
};

[[gnu::used]] InventoryUnitTroopMenuItem::InventoryUnitTroopMenuItem() =
  default;

class CmdBtlInventoryUnitTroopItem : public InventoryUnitTroopMenuItem {
public:
  CmdBtlInventoryUnitTroopItem();
};

[[gnu::used]] CmdBtlInventoryUnitTroopItem::CmdBtlInventoryUnitTroopItem() =
  default;

}

}

namespace game::map {

namespace {

class MapSortieMenuItem : public menu::UnitTroopMenuItem {
public:
  MapSortieMenuItem();
};

[[gnu::used]] MapSortieMenuItem::MapSortieMenuItem() = default;

class MapBattleMenuItem : public menu::UnitTroopMenuItem {
public:
  MapBattleMenuItem();
};

[[gnu::used]] MapBattleMenuItem::MapBattleMenuItem() = default;

}

}

namespace game::cmdbtl {

namespace {

class CmdBtlSystemTroopMenu {
public:
  class CmdBtlSystemSortieMenuItem : public menu::UnitTroopMenuItem {
  public:
    CmdBtlSystemSortieMenuItem();
  };
};

[[gnu::used]] CmdBtlSystemTroopMenu::CmdBtlSystemSortieMenuItem::
  CmdBtlSystemSortieMenuItem() = default;

}

}

namespace game::talk {

class ProcTalkLogMenu {
public:
  class TalkLogMenuItem : public menu::GameMenuItem {
  public:
    TalkLogMenuItem();
  };
};

[[gnu::used]] ProcTalkLogMenu::TalkLogMenuItem::TalkLogMenuItem() = default;

}

namespace game::facility {

class BlacksmithMenuInfo {};

namespace {

class ItemShopTopMenuItem : public ShopTopMenuItem, public BlacksmithMenuInfo {
public:
  ItemShopTopMenuItem();

  const char* Unknown75() override;
};

[[gnu::used]] ItemShopTopMenuItem::ItemShopTopMenuItem() = default;

class BlacksmithUnitGridMenuItem
  : public ShopUnitSelectMenuItem, public BlacksmithMenuInfo {
public:
  BlacksmithUnitGridMenuItem();
};

[[gnu::used]] BlacksmithUnitGridMenuItem::BlacksmithUnitGridMenuItem() =
  default;

class BlacksmithMenuItem_Item
  : public ItemShopMenuItem_Base, public BlacksmithMenuInfo {
public:
  BlacksmithMenuItem_Item();

  const char* Unknown70() override;
};

[[gnu::used]] BlacksmithMenuItem_Item::BlacksmithMenuItem_Item() = default;

}

}

namespace {

class MiracleMenuItem_Equip
  : public game::menu::GameMenuItem, public game::MiracleConst {
public:
  MiracleMenuItem_Equip();
};

[[gnu::used]] MiracleMenuItem_Equip::MiracleMenuItem_Equip() = default;

}
