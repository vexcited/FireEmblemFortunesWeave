#pragma GCC visibility push(hidden)
#include "game/menu/game_menu.hpp"
#include "game/proc/proc_game_skip_view.hpp"
#pragma GCC visibility pop

namespace game::menu {

namespace {

class BaseQuestMenu : public menu::GameMenu {
public:
  BaseQuestMenu();
  [[gnu::always_inline]] ~BaseQuestMenu() override;

  int Unknown22() override { return 1; }
  const char* Unknown32() override { return "Layout/CommonMenu.arc"; }
  const char* Unknown33() override { return "Common_QuestTalk"; }
  void Unknown58(std::vector<int64_t>& handles) override;
  int Unknown61() override { return 1; }
  void Unknown85() override;
  bool Unknown137() override;
  int InputUnknown00() override { return 1; }
  int InputUnknown02() override { return 2; }
  int InputUnknown01() override { return 1; }

private:
  // Set while the menu holds a saved game skip state.
  bool skip_state_pushed_;
};

[[gnu::used]] BaseQuestMenu::BaseQuestMenu() = default;

BaseQuestMenu::~BaseQuestMenu() {
  if (skip_state_pushed_) {
    ProcGameSkipView::PopState();
    skip_state_pushed_ = false;
  }
}

class ProcSideStoryInfo : public BaseQuestMenu {
public:
  ProcSideStoryInfo();

  void Unknown69() override;
  void Unknown85() override;
  int Unknown100() override { return 2; }
  int Unknown101() override { return 0; }
};

[[gnu::used]] ProcSideStoryInfo::ProcSideStoryInfo() = default;

class ProcTalkSelectQuestMenu : public BaseQuestMenu {
public:
  ProcTalkSelectQuestMenu();

  void Unknown85() override;
  void Unknown93() override;
  bool Unknown124() override;
  void ImplUnknown13() override {}
};

[[gnu::used]] ProcTalkSelectQuestMenu::ProcTalkSelectQuestMenu() = default;

class ProcTalkQuestInfo : public ProcTalkSelectQuestMenu {
public:
  ProcTalkQuestInfo();

  void Unknown69() override;
  int Unknown100() override;
  int Unknown101() override { return 0; }
};

[[gnu::used]] ProcTalkQuestInfo::ProcTalkQuestInfo() = default;

}

}
