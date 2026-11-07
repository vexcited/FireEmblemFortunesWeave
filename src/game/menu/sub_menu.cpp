#pragma GCC visibility push(hidden)
#include "game/menu/game_menu.hpp"
#pragma GCC visibility pop

namespace game::menu {

class SubMenu : public GameMenu {
public:
  ~SubMenu() override;

  const char* Unknown32() override { return "Layout/CommonMenu.arc"; }
  const char* Unknown33() override { return "Common_SubMenu"; }
  bool Unknown60() override { return true; }
  bool Unknown64() override { return true; }
  void Unknown85() override;
  void Unknown96() override;
  int ImplUnknown01() override { return 1; }
  int ImplUnknown09() override { return 0; }
  int ImplUnknown02() override { return 1; }
  // Called with the item selected once the menu opened.
  virtual void Unknown142(BasicMenuItem* item) {}

private:
  BasicMenuItem* selected_;
  uint8_t unknown_430_[0x10];
  // Picks the item to select once the menu opened.
  std::function<BasicMenuItem*()> select_;
};

class TitleSubMenu : public SubMenu {
public:
  ~TitleSubMenu() override;

  const char* Unknown32() override { return "Layout/Title.arc"; }
  const char* Unknown33() override { return "Title_SubMenu"; }
  int Unknown56() override { return 7; }
  bool Unknown60() override { return false; }
  void Unknown96() override;
  bool Unknown137() override { return true; }
};

namespace {

class AllAutoMenu : public SubMenu {
public:
  AllAutoMenu();

  int Unknown26() override { return 10; }
  void Unknown85() override;
  int Unknown100() override;

private:
  uint8_t unknown_470_[0x10];
  std::function<void()> unknown_480_;
};

[[gnu::used]] AllAutoMenu::AllAutoMenu() = default;

}

SubMenu::~SubMenu() = default;

void SubMenu::Unknown96() {
  BasicMenu::Unknown96();
  const int state = Unknown21();
  if (state < 2 || state > 7) {
    ImplUnknown12();
  }
  if (!select_) {
    return;
  }
  if (BasicMenuItem* item = select_()) {
    if (selected_ != nullptr) {
      selected_->SetSelected(false);
      selected_ = item;
      item->ChangeSelect(true);
      Unknown85();
      Unknown142(item);
    }
  }
  select_ = nullptr;
}
TitleSubMenu::~TitleSubMenu() = default;

}
