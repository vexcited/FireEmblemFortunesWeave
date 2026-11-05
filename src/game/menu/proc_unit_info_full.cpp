#include <cstdint>
#include <vector>

#include "game/gameui/header_footer.hpp"
#include "game/sound/se.hpp"
#include "ui/layout_accessor.hpp"

#pragma GCC visibility push(hidden)
#include "game/menu/game_menu.hpp"
#include "game/menu/page_tab.hpp"
#include "game/unit.hpp"
#pragma GCC visibility pop

namespace game::gameui {

// Shows or hides a key of the footer key help.
void SetFooterKeyVisible(const char* name, bool visible);

}

namespace game::menu {

namespace {

class ProcUnitInfoFull : public menu::GameMenu {
public:
  ProcUnitInfoFull();

  void Unknown30(bool enable) override;
  const char* Unknown32() override { return "Layout/Common.arc"; }
  const char* Unknown33() override { return "Common_UnitInfoFull"; }
  int Unknown40() override { return 650; }
  int Unknown41() override { return 6; }

  std::weak_ptr<ui::LayoutAccessor> Unknown50() override {
    return accessor_.GetPart("L_ArrowL");
  }

  std::weak_ptr<ui::LayoutAccessor> Unknown51() override {
    return accessor_.GetPart("L_ArrowR");
  }

  void Unknown72() override { sound::PlaySe("SE_SYS_UnitStatus_Close"); }
  void Unknown75() override;
  void Unknown76(int result) override;
  void Unknown77(int result) override;

  void Unknown78(int result) override {
    sound::PlaySe("SE_SYS_List_Change_H");
  }

  void Unknown84() override;
  void Unknown89() override;
  void Unknown93() override;
  void Unknown94() override;
  void Unknown96() override;
  int Unknown101() override { return 3; }
  int Unknown102() override { return Unknown16e1a00(); }
  int Unknown103() override;
  int Unknown105() override;
  int Unknown107() override;
  void Unknown131() override;
  const char* ImplUnknown03() override { return "MID_KeyHelp_Status"; }
  const char* ImplUnknown05() override { return "MID_ProfileMenu_Help"; }
  int ImplUnknown10() override;
  int InputUnknown12(int direction, bool loop) override;

private:
  void ShowPage(int index);
  void ToggleUnknown160bd60();
  void ToggleUnknown16125c0();
  void UpdateUnknown1614680();

  int GetPage() const {
    return pages_[tab_.GetCurrent()];
  }

  Unit* unit_;
  PageTab tab_;
  std::vector<int32_t> pages_;
  int32_t page_;
  uint8_t unknown_4cc_[0x2f4];
  bool unknown_7c0_;
  uint8_t unknown_7c1_[0xd3];
  bool unknown_894_;
};

void ProcUnitInfoFull::Unknown131() {
  if (gameui::Footer* footer = gameui::Footer::instance_) {
    footer->Refresh(false);
  }
}

[[gnu::used]] ProcUnitInfoFull::ProcUnitInfoFull() = default;

void ProcUnitInfoFull::Unknown30(bool enable) {
  tab_.SetEnabled(enable);
  switch (page_) {
    case 0: {
      std::weak_ptr<ui::LayoutAccessor> help =
        accessor_.GetPart("L_Page00/L_KeyHelp");
      ui::SetPartEnabled(help, enable, false);
      break;
    }
    case 2: {
      std::weak_ptr<ui::LayoutAccessor> help =
        accessor_.GetPart("L_Page02/L_KeyHelp");
      ui::SetPartEnabled(help, enable, false);
      break;
    }
  }
}

void ProcUnitInfoFull::Unknown96() {
  BasicMenu::Unknown96();
  int state = Unknown21();
  if (state < 2 || state > 7) {
    ImplUnknown12();
  }
  gameui::SetFooterKeyVisible("XHelp", GetPage() == 4);
}

void ProcUnitInfoFull::Unknown76(int result) {
  if (result != 13) {
    GameMenu::Unknown76(result);
    return;
  }
  sound::PlaySe("SE_SYS_UnitChange_Left");
}

void ProcUnitInfoFull::Unknown77(int result) {
  if (result != 13) {
    GameMenu::Unknown77(result);
    return;
  }
  sound::PlaySe("SE_SYS_UnitChange_Right");
}

int ProcUnitInfoFull::Unknown107() {
  int page = GetPage();
  if (page == 0) {
    unknown_7c0_ = !unknown_7c0_;
    ToggleUnknown160bd60();
  }
  else {
    bool visible = accessor_.IsPaneVisible("L_Page02/L_KeyHelp");
    if (page != 2 || !visible) {
      return 0;
    }
    unknown_894_ = !unknown_894_;
    ToggleUnknown16125c0();
  }
  UpdateUnknown1614680();
  return 13;
}

int ProcUnitInfoFull::InputUnknown12(int direction, bool loop) {
  if (!tab_.Move(direction, loop)) {
    return 0;
  }
  int index = tab_.GetCurrent();
  page_ = pages_[index];
  ShowPage(index);
  return 13;
}

}

}
