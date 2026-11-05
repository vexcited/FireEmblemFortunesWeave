#pragma GCC visibility push(hidden)
#include "game/menu/basic_menu.hpp"
#include "game/menu/multi_menu_sequence.hpp"
#include "game/sound/se.hpp"
#pragma GCC visibility pop

namespace game::menu {

class MultiMenu : public BasicMenu {
public:
  ~MultiMenu() override;

  int Unknown24() override;
  int Unknown68() override;
  int Unknown101() override;
  int Unknown107() override;
  void Unknown114() override;
  virtual void Unknown135() {}
  virtual void Unknown136() {}
  virtual void Unknown137() {}
  virtual void Unknown138() {}
  virtual void Unknown139() {}
  virtual int Unknown140() = 0;
  virtual int Unknown141() { return 3; }
  virtual bool Unknown142();
  virtual int Unknown143();
  int InputUnknown07(bool loop) override;
  int InputUnknown08(bool loop) override;
  virtual void Unknown146();
  virtual bool Unknown147(bool enable);
  virtual bool Unknown148(bool enable);
  virtual void Unknown149() {}
  virtual void Unknown150() {}
  int InputUnknown06(int count, bool loop) override;
  int InputUnknown05(int count, bool loop) override;
  int InputUnknown09(int count) override;
  int InputUnknown10(int count) override;
  virtual void Unknown155();
  virtual void Unknown156();
  virtual void Unknown157() {}
  virtual void Unknown158() {}
  virtual void Unknown159() {}
  virtual void Unknown160() {}

protected:
  // The sequence running this menu.
  MultiMenuSequence* sub_menu_;
};

class UnitTroopMenu : public MultiMenu {
public:
  ~UnitTroopMenu() override;

  std::weak_ptr<ui::LayoutAccessor> Unknown50() override;
  std::weak_ptr<ui::LayoutAccessor> Unknown51() override;
  void Unknown76(int result) override;
  void Unknown77(int result) override;
  void Unknown78(int result) override;
  void Unknown88() override;
  void Unknown99() override {}
  int Unknown140() override { return 0; }
};

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
  void Unknown114() override;
  void Unknown134() override;
  void Unknown137() override;
  void Unknown138() override;
  int InputUnknown07(bool loop) override;
  int InputUnknown08(bool loop) override;
};

[[gnu::used]] UnitTroopItemMenu::UnitTroopItemMenu() = default;

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

  void* Unknown36() override;
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

  void* Unknown36() override;
  void Unknown128() override;
  virtual void* Unknown162() { return nullptr; }
};

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

class SkillUnitMenu : public EquipUnitMenu {
public:
  SkillUnitMenu();

  void* Unknown36() override;
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
};

[[gnu::used]] SkillUnitMenu::SkillUnitMenu() = default;

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
