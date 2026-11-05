#pragma once

#include <cstdint>
#include <vector>

#include "game/facility/item_shop_menu_item_base.hpp"
#include "game/facility/shop_select_menu.hpp"
#include "game/unit_item.hpp"
#include "msg/message_manager.hpp"

namespace game {

class Unit;

}

namespace game::facility {

// Shop menus that switch between the units of the army.
class ShopSelectMenu : public IShopSelectMenu {
public:
  // Moves the page tab while slot 150 allows it.
  int InputUnknown12(int direction, bool loop) override;

  virtual bool Unknown144();
  virtual bool Unknown145();
  virtual bool Unknown146();
  virtual void Unknown147(Unit* unit, bool unknown);
  virtual void Unknown148();
  virtual bool Unknown149();
  virtual bool Unknown150() = 0;
  virtual int Unknown151() = 0;
  virtual bool Unknown152() = 0;

protected:
  Unit* unit_;
};

// Shop menus listing the items of a unit or of the transporter.
class ItemShopSelectMenu : public ShopSelectMenu {
public:
  void Unknown57(std::vector<int64_t>& handles) override;
  void Unknown76(int result) override;
  void Unknown77(int result) override;
  void Unknown84() override;
  void Unknown88() override;
  int Unknown102() override;
  int Unknown103() override;
  int Unknown105() override;
  void Unknown129() override;
  void Unknown147(Unit* unit, bool unknown) override;

  virtual bool Unknown153(ItemShopMenuItem_Base* left,
    ItemShopMenuItem_Base* right) = 0;
  virtual void Unknown154(Unit* unit) = 0;
  virtual uint8_t Unknown155(int page) = 0;
  // Names the part showing the item detail.
  virtual const char* Unknown156();
  virtual void Unknown157(const UnitItem& item);
  virtual bool Unknown158() = 0;

protected:
  static void SetMessageText(ui::LayoutAccessor& accessor, const char* name,
    const char* mid) {
    if (const char16_t* text = msg::GetText(mid)) {
      if (nn::ui2d::TextBox* box = accessor.FindTextBox(name)) {
        ui::SetTextBoxString(box, text, false);
      }
    }
  }

  bool IsEnableSwitchItemInfoDetail();
  void Unknown1873720();
  void Unknown1873eb0();

  // Whether the detail part shows the item for the unit.
  bool IsItemDetailSwitchable() const {
    const ItemData* data = g_item_file->At(item_.GetIndex());
    return ItemRow::GetKind(data) < 8 || ItemRow::GetType(data) == 16;
  }

  UnitItem item_;
  bool detail_;
  bool detail_enabled_;
};

static_assert(sizeof(ItemShopSelectMenu) == 0x440);

// Collects the items to sell at once.
class SellController {
public:
  // Selects or deselects the current item of the menu.
  bool ToggleCurrent();
  void Clear();

  const std::vector<ItemShopMenuItem_Base*>& GetItems() const {
    return items_;
  }

private:
  menu::BasicMenu* menu_;
  std::vector<ItemShopMenuItem_Base*> items_;
};

class MultipleSellItemShopMenu {
protected:
  SellController sell_;
};

// Collects the items to deposit at once.
class MultipleDepositoryItemShopMenu {
protected:
  int Unknown9c0680();

  menu::BasicMenu* owner_;
  std::vector<ItemShopMenuItem_Base*> deposit_items_;
};

}
