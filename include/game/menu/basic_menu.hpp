#pragma once

#include <cstdint>
#include <functional>
#include <memory>
#include <string>
#include <vector>

#include "game/menu/basic_menu_item.hpp"
#include "game/menu/page_tab.hpp"
#include "game/proc/proc_inst.hpp"
#include "game/sound/se.hpp"
#include "ui/layout_accessor.hpp"

namespace game::menu {

class BasicMenuItem;
class BasicMenu;

void UpdateAccessor(std::weak_ptr<ui::LayoutAccessor>& accessor);
void UpdateMenuTree(BasicMenu* menu);

class MenuProcInst : public ProcInst {
public:
  virtual void Unknown18() = 0;

protected:
  BasicMenu* parent_;
  uint8_t unknown_a0_[0x10];
};

// None of these slots is a destructor.
class MenuInput {
public:
  virtual int InputUnknown00() { return 0; }
  virtual int InputUnknown01() { return 12; }
  virtual int InputUnknown02() { return 1; }
  virtual int InputUnknown03() { return 1; }
  virtual int InputUnknown04() { return 1; }
  virtual int InputUnknown05(int count, bool loop);
  virtual int InputUnknown06(int count, bool loop);
  virtual int InputUnknown07(bool loop);
  virtual int InputUnknown08(bool loop);
  virtual int InputUnknown09(int count);
  virtual int InputUnknown10(int count);
  virtual int InputUnknown11(int direction, int count, bool loop);
  virtual int InputUnknown12(int direction, bool loop);
  virtual int InputUnknown13(int direction, int count);
  virtual void InputUnknown14();
  virtual void InputUnknown15();
  virtual void InputUnknown16();
  virtual void InputUnknown17();
  virtual void InputUnknown18();
  virtual void InputUnknown19();
  virtual void InputUnknown20();
  virtual void InputUnknown21();
  virtual void InputUnknown22();
  virtual void InputUnknown23();

protected:
  BasicMenu* menu_;
  uint8_t unknown_10_[4];
  int32_t unknown_14_;
  uint8_t unknown_18_[0x20];
};

class BasicMenu : public MenuProcInst, public MenuInput {
  friend class MenuInput;

public:
  ~BasicMenu() override;

  BasicMenu* GetParent() { return parent_ != nullptr ? parent_ : this; }
  BasicMenuItem* GetCurrentItem() { return current_; }

  void AddItem(BasicMenuItem* item);

  enum : uint32_t {
    kFlagCursorHidden = 1 << 2,
  };

  void SetCursorHidden(bool hidden) {
    flags_ = (flags_ & ~kFlagCursorHidden) | (hidden ? kFlagCursorHidden : 0);
  }

  void Unknown02() override;
  void Unknown03() override;
  void Unknown08() override;
  void Unknown09() override;
  void Unknown12() override;

  void Unknown18() override;
  virtual void Unknown19();
  virtual void Unknown20();
  virtual int Unknown21() { return state_; }
  virtual int Unknown22() { return 0; }
  virtual int Unknown23() { return 0; }
  virtual int Unknown24() { return 2; }
  virtual int Unknown25() { return 0; }
  virtual int Unknown26() { return 0; }
  virtual int Unknown27() { return 1; }
  virtual int Unknown28() { return 1; }
  virtual bool Unknown29(int index);
  virtual void Unknown30(bool enable) {}
  virtual void Unknown31(bool enable);
  virtual const char* Unknown32() { return "Layout/CommonMenu.arc"; }
  virtual const char* Unknown33() { return "Common_BasicMenu"; }
  virtual const char* Unknown34() { return nullptr; }
  virtual const char* Unknown35() { return nullptr; }
  virtual void* Unknown36() { return nullptr; }
  virtual bool Unknown37() { return Unknown36() != nullptr; }
  virtual int Unknown38() { return Unknown37() ? 0x100000 : 0; }
  virtual bool Unknown39() { return false; }
  virtual int Unknown40() { return Unknown39() ? 48 : 16; }
  virtual int Unknown41() { return 5; }
  virtual const char* Unknown42() { return ""; }
  virtual const char* Unknown43(uint8_t kind) { return ""; }
  virtual void Unknown44();
  virtual bool Unknown45() { return unknown_14_ > 1; }
  virtual std::weak_ptr<ui::LayoutAccessor> Unknown46() { return {}; }
  virtual std::weak_ptr<ui::LayoutAccessor> Unknown47() { return {}; }
  virtual std::weak_ptr<ui::LayoutAccessor> Unknown48() { return {}; }
  virtual std::weak_ptr<ui::LayoutAccessor> Unknown49() { return {}; }
  virtual std::weak_ptr<ui::LayoutAccessor> Unknown50() { return {}; }
  virtual std::weak_ptr<ui::LayoutAccessor> Unknown51() { return {}; }
  virtual std::weak_ptr<ui::LayoutAccessor> Unknown52() { return {}; }
  virtual std::weak_ptr<ui::LayoutAccessor> Unknown53() { return {}; }
  virtual int Unknown54() { return 1; }
  virtual int Unknown55() { return 0; }
  virtual int Unknown56() { return 4; }
  virtual void Unknown57(std::vector<int64_t>& handles);
  virtual void Unknown58(std::vector<int64_t>& handles);
  virtual int Unknown59() { return 0; }
  virtual bool Unknown60() { return false; }
  virtual int Unknown61() { return 2; }
  virtual int Unknown62() { return 1; }
  virtual int Unknown63() { return 1; }
  virtual bool Unknown64() { return false; }
  virtual const char* Unknown65() { return nullptr; }
  virtual std::vector<std::string> Unknown66();
  virtual const char* Unknown67() { return nullptr; }
  virtual int Unknown68() { return 0; }
  virtual void Unknown69();
  virtual void Unknown70();
  virtual void Unknown71();
  virtual void Unknown72();
  virtual void Unknown73();
  virtual void Unknown74();
  virtual void Unknown75();
  virtual void Unknown76(int result);
  virtual void Unknown77(int result);
  virtual void Unknown78(int result);
  virtual void Unknown79(int result);
  virtual void Unknown80();
  virtual void Unknown81();
  virtual void Unknown82();
  virtual void Unknown83() {}
  virtual void Unknown84() {}
  virtual void Unknown85() {}
  virtual void Unknown86() {}
  virtual void Unknown87() {}
  virtual void Unknown88() {}
  virtual void Unknown89() {}
  virtual void Unknown90() {}
  virtual void Unknown91();
  virtual void Unknown92() {}
  virtual void Unknown93() {}

  virtual void Unknown94() {
    if (unknown_270_ != nullptr) {
      unknown_270_ = nullptr;
    }
    accessor_.SetVisible(false);
  }

  virtual void Unknown95() {}
  virtual void Unknown96();
  virtual void Unknown97() {}
  virtual void Unknown98() {}
  virtual void Unknown99() {}

  virtual int Unknown100() {
    return current_ != nullptr ? current_->ACall() : 0;
  }

  virtual int Unknown101() {
    return current_ != nullptr ? current_->BCall() : 0;
  }

  virtual int Unknown102() {
    return current_ != nullptr ? current_->XCall() : 0;
  }

  virtual int Unknown103() {
    return current_ != nullptr ? current_->YCall() : 0;
  }

  virtual int Unknown104(bool loop);

  virtual int Unknown105() {
    return current_ != nullptr ? current_->RCall() : 0;
  }

  virtual int Unknown106(bool loop);

  virtual int Unknown107() {
    return current_ != nullptr ? current_->ZRCall() : 0;
  }

  virtual int Unknown108(bool loop);

  virtual int Unknown109() {
    return current_ != nullptr ? current_->MinusCall() : 0;
  }

  virtual int Unknown110(bool loop);

  virtual int Unknown111() {
    return current_ != nullptr ? current_->StickRCall() : 0;
  }

  virtual int Unknown112() {
    return current_ != nullptr ? current_->RightCall() : 0;
  }

  virtual void Unknown113();
  virtual void Unknown114();
  virtual int Unknown115() { return 0; }
  virtual int Unknown116() { return 1; }
  virtual int Unknown117() { return 0; }
  virtual int Unknown118() { return 0; }

  // These override MenuInput and come next in the primary table.
  void InputUnknown16() override;
  void InputUnknown17() override;
  void InputUnknown14() override;
  void InputUnknown15() override;

  virtual bool Unknown123();
  virtual bool Unknown124();
  virtual void Unknown125();
  virtual void Unknown126();
  virtual void Unknown127();
  virtual void Unknown128() {}
  virtual void Unknown129() {}
  virtual int Unknown130() { return 0; }
  virtual void Unknown131() {}
  virtual void Unknown132();
  virtual void Unknown133() {}
  virtual void Unknown134();

protected:
  // Destroyed through its virtual destructor, its type is not recovered.
  class Owned {
  public:
    virtual ~Owned();
  };

  void Unknown16dc660(bool enable);
  void Unknown16dcb80();
  void Unknown16de2e0(bool enable);
  void Unknown16dd9a0();
  void ResetTabs(int count, int index);
  void Unknown16dea40(bool unknown0, bool unknown1, bool unknown2);
  void Unknown16de4d0();
  void Unknown16df380();
  int Unknown16e1a00();

  std::vector<BasicMenuItem*> items_;
  std::vector<BasicMenuItem*> visible_items_;
  uint64_t unknown_118_;
  // Plays instead of the next decide or cancel sound effect.
  std::function<void()> se_callback_;
  BasicMenuItem* current_;
  Owned* unknown_158_;
  int32_t state_;
  uint32_t flags_;
  uint8_t unknown_168_[2];
  uint8_t unknown_16a_;
  uint8_t unknown_16b_[0x29];
  int32_t unknown_194_;
  uint8_t unknown_198_[0xa8];
  uint64_t unknown_240_;
  uint8_t unknown_248_[0x20];
  int32_t unknown_268_;
  uint8_t unknown_26c_[4];
  void* unknown_270_;
  uint8_t unknown_278_[0xc];
  int32_t unknown_284_;
  uint8_t unknown_288_[8];
  PageTab tab_;
  // The cursor index saved for each page.
  std::vector<int32_t> unknown_310_;
  std::vector<int32_t> unknown_328_;
  uint8_t unknown_340_[0x10];
  ui::LayoutAccessor accessor_;
  uint8_t unknown_368_[0x50];
  ui::LayoutAccessor accessor_3b8_;
  uint8_t unknown_3d0_[0x50];
};

static_assert(sizeof(BasicMenu) == 0x420);

}
