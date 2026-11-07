#pragma once

#include "game/menu/basic_menu.hpp"
#include "game/menu/multi_menu_sequence.hpp"

namespace game::menu {

class MultiMenu : public BasicMenu, public MultiMenuConst {
public:
  ~MultiMenu() override;

  int Unknown24() override;
  int Unknown68() override;
  int Unknown101() override;
  int Unknown107() override;
  int Unknown114() override;
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

  int GetUnknown428() const { return unknown_428_; }

protected:
  // The sequence stores its menus with their `MultiMenu` type.
  MultiMenu* GetSiblingMenu(int index) {
    return reinterpret_cast<MultiMenu*>(sub_menu_->GetMenu(index));
  }

  // The sequence running this menu.
  MultiMenuSequence* sub_menu_;
  int32_t unknown_428_;
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

class UnitTroopListMenu : public UnitTroopMenu {
public:
  ~UnitTroopListMenu() override;
};

}
