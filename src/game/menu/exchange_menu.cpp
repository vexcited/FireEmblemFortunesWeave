#pragma GCC visibility push(hidden)
#include "game/menu/multi_menu.hpp"
#include "game/menu/multi_menu_sequence.hpp"

namespace game::menu {

class ExchangeMenu : public EquipChangeMenu {
public:
  ~ExchangeMenu() override;

  void Unknown05() override;
  const char* GetLayoutName() override { return "Common_Equip_ItemExchange"; }
  void* Unknown35() override;
  const char* Unknown36() override;
  void Unknown39() override;
  void Unknown40() override;

  // Not while the menus are locked or during the steps one to three.
  bool Unknown46() override {
    return (flags_ & 1) == 0 && (unknown_178_ < 1 || unknown_178_ > 3);
  }

  bool Unknown47(Unit* unit) override;
  void Unknown48() override;
  const char* ImplUnknown03() override { return "MID_SysMenu_Trade"; }
  const char* ImplUnknown05() override { return "MID_TradeMenu_Help"; }
};

class SkillChangeMenu : public EquipChangeMenu {
public:
  ~SkillChangeMenu() override;

  const char* GetLayoutName() override { return "Common_Equip_Skill"; }
  void* Unknown35() override;
  const char* Unknown36() override;
  void Unknown41() override;
  bool Unknown46() override { return (flags_ & 1) == 0; }
  bool Unknown47(Unit* unit) override;
  void Unknown48() override;
  const char* ImplUnknown03() override;
  const char* ImplUnknown05() override { return "MID_EquipMenu_Help"; }
};

class TransporterMenu : public EquipChangeMenu {
public:
  ~TransporterMenu() override;

  int Unknown22() override { return 1; }

  const char* GetLayoutName() override {
    return "Common_Equip_ItemTransporter";
  }

  void* Unknown35() override;
  const char* Unknown36() override;
  void Unknown40() override;
  void Unknown41() override;
  bool Unknown46() override { return (flags_ & 1) == 0 && unknown_184_; }
  bool Unknown47(Unit* unit) override { return true; }
  void Unknown48() override;

  const char* ImplUnknown03() override {
    return unknown_178_ == 1 ? "MID_BtlMenu_Transport" : "MID_SysMenu_Item";
  }

  const char* ImplUnknown05() override { return "MID_TransportMenu_Help"; }
  int ImplUnknown10() override;

private:
  uint8_t unknown_17c_[0x8];
  bool unknown_184_;
};

ExchangeMenu::~ExchangeMenu() = default;

namespace {

bool HasCarriedItem(const Unit* unit) {
  for (int i = 0; i < UnitItemList::kCarried; ++i) {
    if (unit->GetItem(i).GetIndex() != 0) {
      return true;
    }
  }
  return false;
}

MultiMenu* AsMultiMenu(GameMenu* menu) {
  return reinterpret_cast<MultiMenu*>(menu);
}

}

// Two units without carried items have nothing to exchange.
bool ExchangeMenu::Unknown47(Unit* unit) {
  Unit* other =
    AsMultiMenu(menus_[index_])->GetUnknown428() != 0 ? units_[0] : units_[1];
  if (unit == other) {
    return false;
  }
  return other == nullptr || HasCarriedItem(other) || unit == nullptr ||
    HasCarriedItem(unit);
}

void TransporterMenu::Unknown40() {
  MultiMenuSequence::Unknown40();
  GameMenu* menu = menus_[1];
  const bool enable = (flags_ & 1) == 0 ||
    AsMultiMenu(menus_[index_])->GetUnknown428() == 1;
  menu->Unknown30(enable);
  menu->Unknown31(enable);
}
TransporterMenu::~TransporterMenu() = default;
SkillChangeMenu::~SkillChangeMenu() = default;

void SkillChangeMenu::Unknown41() {
  if ((flags_ & 1) == 0) {
    return;
  }
  GameMenu* menu = menus_[0];
  menu->Unknown30(false);
  menu->Unknown31(false);
}

// Pollutable units holding the shared system skill zero keep their skills.
bool SkillChangeMenu::Unknown47(Unit* unit) {
  if (unit == nullptr) {
    return false;
  }
  switch (static_cast<uint8_t>(unknown_178_)) {
    case 1:
    case 2: {
      const SkillKey key = {g_shared_system_skills[0].index};
      const Unit::SkillList& list = unit->GetSkillList(7);
      if (!list.Contains(key.index) || !HasActiveSkill(key, list)) {
        return true;
      }
      return ((1 << unit->GetForceType()) & 0xf1) == 0;
    }
    default:
      return true;
  }
}

}

#pragma GCC visibility pop
