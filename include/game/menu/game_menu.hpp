#pragma once

#include <cstdint>

#include "game/menu/basic_menu.hpp"

namespace game::menu {

// None of these slots is a destructor.
class GameMenuImpl {
public:
  virtual int ImplUnknown00();
  virtual int ImplUnknown01();
  virtual int ImplUnknown02();
  virtual const char* ImplUnknown03();
  virtual void ImplUnknown04();
  virtual const char* ImplUnknown05();
  virtual void ImplUnknown06();
  virtual uint8_t ImplUnknown07();
  virtual uint8_t ImplUnknown08();
  virtual void ImplUnknown09();
  virtual int ImplUnknown10();
  virtual void ImplUnknown11();
  virtual void ImplUnknown12();
  virtual void ImplUnknown13();
  virtual int ImplUnknown14();
  virtual void ImplUnknown15();
  virtual void ImplUnknown16();
};

// The destructor is trivial, its symbol aliases the BasicMenu one.
class GameMenu : public BasicMenu, public GameMenuImpl {
public:
  GameMenu();
  ~GameMenu() override;

  virtual void Unknown135();
  virtual int Unknown136();
  virtual int Unknown137();
  void ImplUnknown11() override;
};

}
