#pragma once

#include <cstdint>
#include <vector>

#include "game/menu/basic_menu.hpp"

namespace game::menu {

// None of these slots is a destructor.
class GameMenuImpl {
public:
  virtual int ImplUnknown00() { return 0; }
  virtual int ImplUnknown01() { return 0; }
  virtual int ImplUnknown02() { return 0; }
  virtual const char* ImplUnknown03() { return nullptr; }
  virtual const char16_t* ImplUnknown04();
  virtual const char* ImplUnknown05() { return nullptr; }
  virtual const char16_t* ImplUnknown06();
  virtual uint8_t ImplUnknown07() { return 0; }
  virtual uint8_t ImplUnknown08() { return 0; }
  virtual int ImplUnknown09() { return 0; }
  virtual int ImplUnknown10();
  virtual void ImplUnknown11();
  virtual void ImplUnknown12();
  virtual void ImplUnknown13();
  virtual int ImplUnknown14() { return 0; }
  virtual int ImplUnknown15() { return ImplUnknown14(); }
  virtual int ImplUnknown16() { return ImplUnknown14(); }
};

// The destructor is trivial, its symbol aliases the BasicMenu one.
class GameMenu : public BasicMenu, public GameMenuImpl {
public:
  GameMenu();
  ~GameMenu() override;

  void Unknown57(std::vector<int64_t>& handles) override;
  void Unknown58(std::vector<int64_t>& handles) override;
  void Unknown92() override;
  void Unknown96() override;

  virtual void Unknown135(std::vector<int64_t>& handles);
  virtual int Unknown136(std::vector<int64_t>& handles);
  virtual int Unknown137();
  void ImplUnknown11() override;

protected:
  // The outermost menu of the process tree, following the 0x20 links.
  MenuProcInst* GetRootMenu() {
    MenuProcInst* root = this;
    ProcInst* proc = this;
    do {
      if (MenuProcInst* menu = dynamic_cast<MenuProcInst*>(proc)) {
        root = menu;
      }
      proc = proc->GetUnknown20();
    } while (proc != nullptr);
    return root;
  }
};

}
