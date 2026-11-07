#pragma GCC visibility push(hidden)
#include "game/menu/multi_menu.hpp"
#include "game/menu/unit_troop_sequence.hpp"
#include "game/sound/se.hpp"
#pragma GCC visibility pop

namespace game::menu {

void UnitTroopMenu::Unknown78(int /* result */) {
  sound::PlaySe("SE_SYS_List_Change_H");
}

std::weak_ptr<ui::LayoutAccessor> UnitTroopMenu::Unknown50() {
  return accessor_.GetPart("L_ArrowL");
}

std::weak_ptr<ui::LayoutAccessor> UnitTroopMenu::Unknown51() {
  return accessor_.GetPart("L_ArrowR");
}

void UnitTroopMenu::Unknown76(int /* result */) {
  sound::PlayCursorHorizontalLeftSe();
}

void UnitTroopMenu::Unknown77(int /* result */) {
  sound::PlayCursorHorizontalRightSe();
}

void UnitTroopMenu::Unknown88() {
  dynamic_cast<UnitTroopSequence*>(sub_menu_)->Unknown48();
}

namespace {

class UnitTroopItemMenu : public UnitTroopMenu {
public:
  UnitTroopItemMenu();

  void Unknown75() override;
  int Unknown100() override;
  int Unknown101() override;
  int Unknown102() override { return 1; }
  int Unknown104(bool loop) override;
  int Unknown106(bool loop) override;
  int Unknown107() override;
  int Unknown109() override;
  int Unknown112() override;
  int Unknown114() override;
  void Unknown134() override;
  void Unknown137() override;
  void Unknown138() override;
  int InputUnknown07(bool loop) override;
  int InputUnknown08(bool loop) override;
  virtual void Unknown161(int page);
  virtual void Unknown162();

private:
  UnitTroopListMenu* GetList() {
    return dynamic_cast<UnitTroopListMenu*>(GetSiblingMenu(1));
  }

  UnitTroopItemMenu* GetItemMenu() {
    return dynamic_cast<UnitTroopItemMenu*>(GetSiblingMenu(0));
  }

  [[gnu::always_inline]] int MovePage(int direction, bool loop) {
    auto* sequence = dynamic_cast<UnitTroopSequence*>(sub_menu_);
    if (sequence->Unknown178bdb0(direction, loop) != 13) {
      return 0;
    }
    GetItemMenu()->Unknown16de600();
    GetItemMenu()->Unknown137();
    GetItemMenu()->Unknown16dea40(true, true, false);
    return 13;
  }

  int page_;
  std::weak_ptr<ui::LayoutAccessor> page_layout_;
  int unknown_440_;
  int unknown_444_;
};

[[gnu::used]] UnitTroopItemMenu::UnitTroopItemMenu() = default;

void UnitTroopItemMenu::Unknown75() {
  sound::PlaySe("SE_SYS_NG");
}

int UnitTroopItemMenu::Unknown101() {
  return GetList()->Unknown101();
}

int UnitTroopItemMenu::Unknown104(bool loop) {
  return MovePage(-1, loop);
}

int UnitTroopItemMenu::Unknown106(bool loop) {
  return MovePage(1, loop);
}

int UnitTroopItemMenu::Unknown107() {
  return GetList()->Unknown107();
}

int UnitTroopItemMenu::Unknown109() {
  return GetList()->Unknown109();
}

int UnitTroopItemMenu::Unknown112() {
  return GetList()->Unknown112();
}

int UnitTroopItemMenu::Unknown114() {
  return GetList()->Unknown114();
}

}

class EquipMenu : public MultiMenu {
public:
  ~EquipMenu() override;

  void Unknown76(int result) override;
  void Unknown77(int result) override;
  int Unknown103() override;
  int Unknown105() override;
  int Unknown140() override { return 1; }
};

namespace {

class SkillPoolMenu : public EquipMenu {
public:
  SkillPoolMenu();

  const char* Unknown36() override;
  std::weak_ptr<ui::LayoutAccessor> Unknown50() override;
  std::weak_ptr<ui::LayoutAccessor> Unknown51() override;
  void Unknown84() override;
  void Unknown85() override;
  void Unknown88() override;
  void Unknown128() override;
  void Unknown135() override;
  void Unknown136() override;
  void Unknown139() override;
  int InputUnknown01() override { return 11; }
};

[[gnu::used]] SkillPoolMenu::SkillPoolMenu() = default;

const char* SkillPoolMenu::Unknown36() {
  return "L_MenuItem_Skill";
}

std::weak_ptr<ui::LayoutAccessor> SkillPoolMenu::Unknown50() {
  return accessor_.GetPart("L_UnitInfo/L_ArrowL");
}

std::weak_ptr<ui::LayoutAccessor> SkillPoolMenu::Unknown51() {
  return accessor_.GetPart("L_UnitInfo/L_ArrowR");
}

void SkillPoolMenu::Unknown135() {
  Unknown16dd9a0();
}

void SkillPoolMenu::Unknown136() {
  Unknown16defa0();
}

class TransporterPoolMenu : public EquipMenu {
public:
  TransporterPoolMenu();

  int Unknown25() override { return 1; }
  std::weak_ptr<ui::LayoutAccessor> Unknown50() override;
  std::weak_ptr<ui::LayoutAccessor> Unknown51() override;
  void Unknown75() override;
  void Unknown84() override;
  void Unknown85() override;
  void Unknown88() override;
  void Unknown96() override;
  int Unknown102() override;
  void Unknown128() override;
  void Unknown129() override;
  void Unknown135() override;
  void Unknown136() override;
  void Unknown139() override;
};

[[gnu::used]] TransporterPoolMenu::TransporterPoolMenu() = default;

std::weak_ptr<ui::LayoutAccessor> TransporterPoolMenu::Unknown50() {
  return accessor_.GetPart("L_UnitInfo/L_ArrowL");
}

std::weak_ptr<ui::LayoutAccessor> TransporterPoolMenu::Unknown51() {
  return accessor_.GetPart("L_UnitInfo/L_ArrowR");
}

void TransporterPoolMenu::Unknown135() {
  Unknown136();
}

void TransporterPoolMenu::Unknown136() {
  Unknown16defa0();
}

}

class EquipUnitMenu : public EquipMenu {
public:
  ~EquipUnitMenu() override;

  const char* Unknown35() override { return "L_EquipList"; }
  void Unknown84() override;
  virtual const char* Unknown161() { return "Menu_12"; }
};

class ItemUnitMenu : public EquipUnitMenu {
public:
  ~ItemUnitMenu() override;

  const char* Unknown36() override;
  void Unknown128() override;
  virtual void* Unknown162() { return nullptr; }
};

const char* ItemUnitMenu::Unknown36() {
  return "L_MenuItem_Item";
}

namespace {

class ExchangeUnitMenu : public ItemUnitMenu {
public:
  ExchangeUnitMenu();

  std::weak_ptr<ui::LayoutAccessor> Unknown50() override;
  std::weak_ptr<ui::LayoutAccessor> Unknown51() override;
  void Unknown88() override;
  int Unknown101() override;
  void Unknown135() override;
  void Unknown136() override;
  const char* Unknown161() override { return "Menu_7"; }
  void* Unknown162() override;
};

[[gnu::used]] ExchangeUnitMenu::ExchangeUnitMenu() = default;

void ExchangeUnitMenu::Unknown136() {
  Unknown16defa0();
}

class SkillUnitMenu : public EquipUnitMenu {
public:
  SkillUnitMenu();

  const char* Unknown36() override;
  std::weak_ptr<ui::LayoutAccessor> Unknown50() override;
  std::weak_ptr<ui::LayoutAccessor> Unknown51() override;
  void Unknown85() override;
  void Unknown88() override;
  void Unknown90() override;
  void Unknown128() override;
  void Unknown135() override;
  void Unknown136() override;
  void Unknown139() override;
  const char* Unknown161() override { return "Menu_12"; }
  int InputUnknown01() override { return 11; }

private:
  uint8_t unknown_42c_[0x14];
  std::vector<int> unknown_440_;
};

[[gnu::used]] SkillUnitMenu::SkillUnitMenu() = default;

const char* SkillUnitMenu::Unknown36() {
  return "L_MenuItem_Skill";
}

std::weak_ptr<ui::LayoutAccessor> SkillUnitMenu::Unknown50() {
  return accessor_.GetPart("L_UnitInfo/L_ArrowL");
}

std::weak_ptr<ui::LayoutAccessor> SkillUnitMenu::Unknown51() {
  return accessor_.GetPart("L_UnitInfo/L_ArrowR");
}

void SkillUnitMenu::Unknown135() {
  Unknown136();
}

void SkillUnitMenu::Unknown136() {
  Unknown16defa0();
}

}

MultiMenu::~MultiMenu() = default;

int MultiMenu::Unknown24() {
  if (sub_menu_ != nullptr) {
    return sub_menu_->Unknown24();
  }
  return 2;
}

int MultiMenu::Unknown68() {
  return sub_menu_->GetFlags() & 1;
}

int MultiMenu::Unknown107() {
  return Unknown143();
}

bool MultiMenu::Unknown142() {
  if (!Unknown140()) {
    return false;
  }
  return (sub_menu_->GetFlags() & 1) == 0;
}

bool MultiMenu::Unknown147(bool enable) {
  if (!Unknown140()) {
    return false;
  }
  return enable && (sub_menu_->GetFlags() & 1) == 0;
}

bool MultiMenu::Unknown148(bool enable) {
  if (!Unknown140()) {
    return false;
  }
  return enable && (sub_menu_->GetFlags() & 1) == 0;
}

void EquipMenu::Unknown76(int result) {
  if (result != 13) {
    MultiMenu::Unknown76(result);
    return;
  }
  sound::PlaySe("SE_SYS_UnitChange_Left");
}

void EquipMenu::Unknown77(int result) {
  if (result != 13) {
    MultiMenu::Unknown77(result);
    return;
  }
  sound::PlaySe("SE_SYS_UnitChange_Right");
}

int MultiMenu::InputUnknown09(int count) {
  int result = InputUnknown13(-1, count);
  if (result == 13) {
    sub_menu_->Unknown1787b80();
    return 13;
  }
  return result;
}

int MultiMenu::InputUnknown10(int count) {
  int result = InputUnknown13(1, count);
  if (result == 13) {
    sub_menu_->Unknown1787b80();
    return 13;
  }
  return result;
}
UnitTroopMenu::~UnitTroopMenu() = default;
EquipMenu::~EquipMenu() = default;
EquipUnitMenu::~EquipUnitMenu() = default;
ItemUnitMenu::~ItemUnitMenu() = default;

}
