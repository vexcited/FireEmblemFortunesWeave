#pragma GCC visibility push(hidden)
#include "game/menu/game_menu.hpp"
#pragma GCC visibility pop

namespace game::menu {

class TitleMenu : public GameMenu {
public:
  ~TitleMenu() override;

  void Unknown30(bool enable) override;
  const char* Unknown32() override { return "Layout/Title.arc"; }
  const char* Unknown33() override { return "Title_TopMenu"; }
  int Unknown56() override { return 7; }
  bool Unknown64() override { return true; }
  void Unknown85() override;
  void Unknown94() override;
  void Unknown98() override;
  void Unknown99() override;
  bool Unknown125() override;
  void Unknown135(std::vector<int64_t>& handles) override;
  void Unknown136(std::vector<int64_t>& handles) override;
  bool Unknown137() override { return true; }
  void InputUnknown18() override;

private:
  uint64_t unknown_428_;
  std::function<void()> unknown_430_;
};

TitleMenu::~TitleMenu() = default;

}
