#pragma once

#include <cstdint>
#include <vector>

#include "game/proc/proc_inst.hpp"

namespace game::menu {

class BasicMenuItem;
class BasicMenu;

class MenuProcInst : public ProcInst {
protected:
  BasicMenu* parent_;
  uint8_t unknown_a0_[0x10];
};

// None of these slots is a destructor.
class MenuInput {
public:
  virtual int InputUnknown00();
  virtual int InputUnknown01();
  virtual int InputUnknown02();
  virtual void InputUnknown03();
  virtual void InputUnknown04();
  virtual void InputUnknown05();
  virtual void InputUnknown06();
  virtual void InputUnknown07();
  virtual void InputUnknown08();
  virtual void InputUnknown09();
  virtual void InputUnknown10();
  virtual void InputUnknown11();
  virtual int InputUnknown12(int direction, bool loop);
  virtual void InputUnknown13();
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

private:
  uint8_t unknown_08_[0x30];
};

class BasicMenu : public MenuProcInst, public MenuInput {
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

  virtual void Unknown18();
  virtual void Unknown19();
  virtual void Unknown20();
  virtual void Unknown21();
  virtual int Unknown22();
  virtual void Unknown23();
  virtual int Unknown24();
  virtual void Unknown25();
  virtual int Unknown26();
  virtual void Unknown27();
  virtual void Unknown28();
  virtual void Unknown29();
  virtual void Unknown30();
  virtual void Unknown31();
  virtual const char* Unknown32();
  virtual const char* Unknown33();
  virtual void Unknown34();
  virtual const char* Unknown35();
  virtual void Unknown36();
  virtual int Unknown37();
  virtual void Unknown38();
  virtual int Unknown39();
  virtual int Unknown40();
  virtual void Unknown41();
  virtual const char* Unknown42();
  virtual const char* Unknown43(uint8_t kind);
  virtual void Unknown44();
  virtual void Unknown45();
  virtual void Unknown46();
  virtual void Unknown47();
  virtual void Unknown48();
  virtual void Unknown49();
  virtual void Unknown50();
  virtual void Unknown51();
  virtual void Unknown52();
  virtual void Unknown53();
  virtual void Unknown54();
  virtual int Unknown55();
  virtual int Unknown56();
  virtual void Unknown57();
  virtual void Unknown58();
  virtual void Unknown59();
  virtual void Unknown60();
  virtual int Unknown61();
  virtual void Unknown62();
  virtual int Unknown63();
  virtual bool Unknown64();
  virtual const char* Unknown65();
  virtual void Unknown66();
  virtual const char* Unknown67();
  virtual void Unknown68();
  virtual void Unknown69();
  virtual void Unknown70();
  virtual void Unknown71();
  virtual void Unknown72();
  virtual void Unknown73();
  virtual void Unknown74();
  virtual void Unknown75();
  virtual void Unknown76();
  virtual void Unknown77();
  virtual void Unknown78();
  virtual void Unknown79();
  virtual void Unknown80();
  virtual void Unknown81();
  virtual void Unknown82();
  virtual void Unknown83();
  virtual void Unknown84();
  virtual void Unknown85();
  virtual void Unknown86();
  virtual void Unknown87();
  virtual void Unknown88();
  virtual void Unknown89();
  virtual void Unknown90();
  virtual void Unknown91();
  virtual void Unknown92();
  virtual void Unknown93();
  virtual void Unknown94();
  virtual void Unknown95();
  virtual void Unknown96();
  virtual void Unknown97();
  virtual void Unknown98();
  virtual void Unknown99();
  virtual int Unknown100();
  virtual int Unknown101();
  virtual int Unknown102();
  virtual int Unknown103();
  virtual void Unknown104();
  virtual int Unknown105();
  virtual void Unknown106();
  virtual void Unknown107();
  virtual void Unknown108();
  virtual void Unknown109();
  virtual void Unknown110();
  virtual void Unknown111();
  virtual void Unknown112();
  virtual void Unknown113();
  virtual void Unknown114();
  virtual void Unknown115();
  virtual void Unknown116();
  virtual int Unknown117();
  virtual void Unknown118();

  // These override MenuInput and come next in the primary table.
  void InputUnknown16() override;
  void InputUnknown17() override;
  void InputUnknown14() override;
  void InputUnknown15() override;

  virtual void Unknown123();
  virtual void Unknown124();
  virtual void Unknown125();
  virtual void Unknown126();
  virtual void Unknown127();
  virtual void Unknown128();
  virtual void Unknown129();
  virtual void Unknown130();
  virtual void Unknown131();
  virtual void Unknown132();
  virtual void Unknown133();
  virtual void Unknown134();

protected:
  std::vector<BasicMenuItem*> items_;
  std::vector<BasicMenuItem*> visible_items_;
  uint8_t unknown_118_[0x38];
  BasicMenuItem* current_;
  uint8_t unknown_158_[0xc];
  uint32_t flags_;
  uint8_t unknown_168_[0x2b8];
};

}
