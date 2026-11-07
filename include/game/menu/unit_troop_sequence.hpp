#pragma once

#include <cstdint>

#include "game/menu/multi_menu_sequence.hpp"
#include "game/menu/page_tab.hpp"

namespace game::menu {

class UnitTroopSequence : public MultiMenuSequence {
public:
  ~UnitTroopSequence() override;

  void Unknown20() override;
  const char* GetLayoutArchive() override { return "Layout/CommonMenu.arc"; }
  const char* GetLayoutName() override { return "Common_TroopMenu"; }
  void* Unknown35() override;
  const char* Unknown36() override;
  void Unknown39() override;
  void Unknown41() override { Unknown48(); }
  void Unknown45(bool enable) override { tab_.SetEnabled(enable); }
  virtual int Unknown46() { return 0; }
  virtual int Unknown47() { return 0; }
  virtual void Unknown48();
  const char* ImplUnknown03() override { return "MID_SysMenu_TroopList"; }
  int ImplUnknown10() override;

  // Moves the tab and returns 13 once the page changed.
  int Unknown178bdb0(int direction, bool loop);

protected:
  uint8_t unknown_168_[0x8];
  PageTab tab_;
};

}
