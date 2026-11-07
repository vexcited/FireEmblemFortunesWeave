#include "game/gameui/header_footer.hpp"
#include "game/talk/seq.hpp"

#pragma GCC visibility push(hidden)
#include "game/game_mode_data.hpp"
#include "game/menu/basic_menu.hpp"
#include "game/sound/se.hpp"

namespace game::script::hub::talk {

// The sound effects of the answers and the chosen one, set by the scripts.
extern std::vector<std::string> g_choice_menu_ses;
extern int g_choice_menu_result;

}

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

ChoiceMenu::~ChoiceMenu() {
  gameui::SetFooterKeyVisible("WindowHide", false);
  gameui::SetFooterKeyVisible("AutoPlay", false);

  if (talk::Seq* seq = talk::Seq::GetInstance(); seq && seq->IsAutoPlay()) {
    talk::g_window_layout.SetPaneVisible("N_Auto", true);
  }
}

void ChoiceMenu::Unknown58(std::vector<int64_t>& handles) {
  BasicMenu::Unknown58(handles);
  if (gameui::Header* header = gameui::Header::instance_) {
    header->Refresh(false);
  }
}

void ChoiceMenu::Unknown69() {
  using script::hub::talk::g_choice_menu_ses;
  using script::hub::talk::g_choice_menu_result;
  if (static_cast<size_t>(g_choice_menu_result) < g_choice_menu_ses.size()) {
    if (const char* se = g_choice_menu_ses[g_choice_menu_result].c_str()) {
      sound::PlaySe(se);
    }
    return;
  }
  BasicMenu::Unknown69();
}

void ChoiceMenu::Unknown96() {
  BasicMenu::Unknown96();
  gameui::SetFooterKeyVisible("WindowHide", true);
  gameui::SetFooterKeyVisible("AutoPlay", true);

  if (talk::Seq* seq = talk::Seq::GetInstance(); seq && seq->IsAutoPlay()) {
    talk::g_window_layout.SetPaneVisible("N_Auto", false);
  }
}

int ChoiceMenu::Unknown100() {
  if (current_ == nullptr) {
    return 0;
  }
  const int index = current_->GetIndex();
  script::hub::talk::g_choice_menu_result = index;
  GameModeData::GetInstance()->GetRegistry().SetChoiceResult(index);
  GameModeData::GetInstance()->GetRegistry().SetChoiceResult(index);
  return 2;
}

void ChoiceMenu::Unknown92() {
  if (gameui::Header* header = gameui::Header::instance_) {
    header->Refresh(false);
  }
}

}

#pragma GCC visibility pop
