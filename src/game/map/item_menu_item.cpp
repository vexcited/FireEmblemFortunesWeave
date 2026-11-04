#include <functional>

#include "game/menu/basic_menu.hpp"
#include "game/menu/equip_menu_item_item.hpp"
#include "game/menu/sub_menu_item.hpp"
#include "game/sound/se.hpp"

namespace game {

class UnitItem;

namespace menu {

void OpenDiscardDialog(BasicMenu* menu, const UnitItem* item, int index,
  const std::function<void()>& callback);

}

}

namespace game::map {

namespace {

class ItemMenuItem : public menu::EquipMenuItem_Item {
public:
  ItemMenuItem();

  bool IsDecidable() override;
  int ACall() override;
  void DrawText() override;
  bool IsActive() override;
  bool IsEquip() override;
  virtual void Unknown70();
  virtual void Unknown71();
};

[[gnu::used]] ItemMenuItem::ItemMenuItem() = default;

class MenuItem : public menu::SubMenuItem {};

class SubEquipMenuItem : public MenuItem {
public:
  SubEquipMenuItem();

  const char* GetMid() override {
    return equip_ ? "MID_Menu_Equip" : "MID_Menu_Remove";
  }

  int ACall() override {
    if (!IsActive()) {
      return 1;
    }
    if (callback_) {
      callback_();
    }
    Unknown71();
    return 2;
  }

  void PlayDecideSe() override {
    sound::PlaySe(!equip_ ? "SE_SYS_Remove" : "SE_SYS_Equip");
  }

  virtual void Unknown71() {}

protected:
  const UnitItem* item_;
  std::function<void()> callback_;
  bool equip_;
};

[[gnu::used]] SubEquipMenuItem::SubEquipMenuItem() = default;

class CmdBtlSubEquipMenuItem : public SubEquipMenuItem {
public:
  CmdBtlSubEquipMenuItem();

  void Unknown71() override;
};

[[gnu::used]] CmdBtlSubEquipMenuItem::CmdBtlSubEquipMenuItem() = default;

class SubDiscardMenuItem : public MenuItem {
public:
  SubDiscardMenuItem();

  const char* GetMid() override { return "MID_Menu_Discard"; }

  int ACall() override {
    if (!IsActive()) {
      return 1;
    }
    menu::OpenDiscardDialog(menu_->GetParent(), item_, index_, callback_);
    return 12;
  }

private:
  const UnitItem* item_;
  std::function<void()> callback_;
};

[[gnu::used]] SubDiscardMenuItem::SubDiscardMenuItem() = default;

class SubOpenMenuItem : public MenuItem {
public:
  SubOpenMenuItem();

  const char* GetMid() override { return "MID_Menu_Open"; }
  int ACall() override;
  virtual void Unknown71();
};

[[gnu::used]] SubOpenMenuItem::SubOpenMenuItem() = default;

class SubUseMenuItem : public MenuItem {
public:
  SubUseMenuItem();

  const char* GetMid() override { return "MID_Menu_Use"; }
  int ACall() override;
  virtual void Unknown71();
};

[[gnu::used]] SubUseMenuItem::SubUseMenuItem() = default;

class CmdBtlItemMenuItem : public ItemMenuItem {
public:
  CmdBtlItemMenuItem();

  bool IsActive() override;
  void Unknown70() override;
  void Unknown71() override;
};

[[gnu::used]] CmdBtlItemMenuItem::CmdBtlItemMenuItem() = default;

class CmdBtlSubOpenMenuItem : public SubOpenMenuItem {
public:
  CmdBtlSubOpenMenuItem();

  void Unknown71() override;
};

[[gnu::used]] CmdBtlSubOpenMenuItem::CmdBtlSubOpenMenuItem() = default;

class CmdBtlSubUseMenuItem : public SubUseMenuItem {
public:
  CmdBtlSubUseMenuItem();

  void Unknown71() override;
};

[[gnu::used]] CmdBtlSubUseMenuItem::CmdBtlSubUseMenuItem() = default;

class ExchangeMenuItem : public menu::EquipMenuItem_Item {
public:
  ExchangeMenuItem();

  void DrawText() override;
  bool IsActive() override;
};

[[gnu::used]] ExchangeMenuItem::ExchangeMenuItem() = default;

}

}
