#pragma GCC visibility push(hidden)
#include "game/menu/multi_menu_sequence.hpp"

namespace game::menu {

class ExchangeMenu : public EquipChangeMenu {
public:
  ~ExchangeMenu() override;

  void Unknown05() override;
  const char* GetLayoutName() override { return "Common_Equip_ItemExchange"; }
  void* Unknown35() override;
  void* Unknown36() override;
  void Unknown39() override;
  int Unknown40() override;

  // Not while the menus are locked or during the steps one to three.
  bool Unknown46() override {
    return (flags_ & 1) == 0 && (unknown_178_ < 1 || unknown_178_ > 3);
  }

  int Unknown47() override;
  void Unknown48() override;
  const char* ImplUnknown03() override { return "MID_SysMenu_Trade"; }
  const char* ImplUnknown05() override { return "MID_TradeMenu_Help"; }
};

class SkillChangeMenu : public EquipChangeMenu {
public:
  ~SkillChangeMenu() override;

  const char* GetLayoutName() override { return "Common_Equip_Skill"; }
  void* Unknown35() override;
  void* Unknown36() override;
  void Unknown41() override;
  bool Unknown46() override { return (flags_ & 1) == 0; }
  int Unknown47() override;
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
  void* Unknown36() override;
  int Unknown40() override;
  void Unknown41() override;
  bool Unknown46() override { return (flags_ & 1) == 0 && unknown_184_; }
  int Unknown47() override { return 1; }
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
TransporterMenu::~TransporterMenu() = default;
SkillChangeMenu::~SkillChangeMenu() = default;

}

#pragma GCC visibility pop
