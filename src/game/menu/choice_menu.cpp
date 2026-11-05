#include "game/gameui/header_footer.hpp"

#pragma GCC visibility push(hidden)
#include "game/menu/basic_menu.hpp"
#pragma GCC visibility pop

namespace game::menu {

class ChoiceMenu : public BasicMenu {
public:
  ~ChoiceMenu() override;

  void Unknown02() override;
  int Unknown24() override;
  const char* Unknown32() override { return "Layout/CommonMenu.arc"; }
  const char* Unknown33() override { return "Common_Choice"; }
  int Unknown56() override { return 7; }
  void Unknown57(std::vector<int64_t>& handles) override;
  void Unknown58(std::vector<int64_t>& handles) override;
  int Unknown61() override { return 0; }
  int Unknown68() override { return 1; }
  void Unknown69() override;
  void Unknown92() override;
  void Unknown96() override;
  int Unknown100() override;
  int Unknown101() override { return 0; }
  int Unknown103() override;
};

ChoiceMenu::~ChoiceMenu() = default;

void ChoiceMenu::Unknown58(std::vector<int64_t>& handles) {
  BasicMenu::Unknown58(handles);
  if (gameui::Header* header = gameui::Header::instance_) {
    header->Refresh(false);
  }
}

void ChoiceMenu::Unknown92() {
  if (gameui::Header* header = gameui::Header::instance_) {
    header->Refresh(false);
  }
}

}
