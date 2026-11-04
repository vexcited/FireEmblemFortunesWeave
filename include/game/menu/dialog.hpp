#pragma once

#include <cstdint>
#include <functional>

#include "game/menu/basic_menu.hpp"

namespace game::menu {

class Dialog : public BasicMenu {
public:
  int Unknown61() override;
  void Unknown69() override;
  void Unknown82() override;
  void Unknown85() override;
  void Unknown94() override;

  ~Dialog() override;

  void Unknown02() override;
  int Unknown26() override { return 110; }
  const char* Unknown32() override { return "Layout/CommonMenu.arc"; }
  const char* Unknown33() override { return "Common_Dialog"; }
  int Unknown56() override { return 6; }
  bool Unknown60() override { return unknown_514_; }
  bool Unknown64() override { return unknown_515_; }
  int Unknown68() override { return 1; }

  virtual void Unknown135();

protected:
  void Unknown1647ee0();
  void Unknown1648380();

  uint8_t unknown_420_[0x60];
  std::function<void()> decide_callback_;
  std::function<void()> unknown_4b0_;
  std::function<int(Dialog*)> unknown_4e0_;
  int32_t result_;
  bool unknown_514_;
  bool unknown_515_;
};

}
