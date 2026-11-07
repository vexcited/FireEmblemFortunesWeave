#pragma once

#include <cstdint>

#include "game/menu/game_menu.hpp"
#include "ui/layout_accessor.hpp"

namespace game::menu {

class MultiMenuConst {};

// Runs several menus side by side and forwards to the current one.
class MultiMenuSequence : public MenuProcInst, public GameMenuImpl,
  public MultiMenuConst {
public:
  ~MultiMenuSequence() override;

  void Unknown02() override { menus_[index_]->Unknown02(); }
  void Unknown03() override;
  void Unknown08() override;
  void Unknown09() override;
  void Unknown12() override { Unknown1789c60(); }
  void Unknown18() override;
  void Unknown19() override { accessor_.SetVisible(false); }
  void Unknown20() override { Unknown1786b20(); }

  int Unknown21() override {
    GameMenu* menu = menus_[index_];
    if (menu == nullptr) {
      return 0;
    }
    return menu->Unknown21();
  }

  virtual const char* GetLayoutArchive() = 0;
  virtual const char* GetLayoutName() = 0;
  virtual int Unknown27() { return 80; }
  virtual int Unknown28() { return 8; }
  virtual int Unknown29() { return 0; }
  virtual int Unknown30() { return 0; }
  virtual int Unknown31() { return 0; }
  virtual void* Unknown32() { return nullptr; }
  virtual void Unknown33();
  virtual void Unknown34();
  virtual void* Unknown35() { return nullptr; }
  virtual const char* Unknown36() { return nullptr; }
  virtual void* Unknown37() { return nullptr; }
  virtual void Unknown38() {}
  virtual void Unknown39() {}
  virtual bool Unknown40() { return menus_[index_]->Unknown137(); }
  virtual void Unknown41() {}
  virtual int Unknown42() { return 2; }
  virtual int Unknown43() { return 1; }
  virtual int Unknown44() { return 1; }
  virtual void Unknown45(bool enable) {}

  uint32_t GetFlags() const { return flags_; }

  // Called by the menus once their input moved the cursor.
  void Unknown1787b80();

protected:
  void Unknown1786b20();
  void Unknown1789c60();

  uint8_t unknown_b8_[0x10];
  ui::LayoutAccessor accessor_;
  GameMenu* menus_[6];
  uint32_t index_;
  uint32_t flags_;
};

// The sequences changing the equipment of the units.
class EquipChangeMenu : public MultiMenuSequence {
public:
  const char* GetLayoutArchive() override { return "Layout/CommonMenu.arc"; }
  virtual bool Unknown46() = 0;
  virtual int Unknown47() = 0;
  virtual void Unknown48() = 0;
  const char* ImplUnknown03() override = 0;
  const char* ImplUnknown05() override = 0;

protected:
  uint8_t unknown_168_[0x10];
  int32_t unknown_178_;
};

}
