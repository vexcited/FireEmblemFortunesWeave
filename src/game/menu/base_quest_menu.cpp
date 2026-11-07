#include <functional>

#include "game/gameui/help_quest_info.hpp"

#pragma GCC visibility push(hidden)
#include "game/menu/game_menu.hpp"
#include "game/proc/proc_game_skip_view.hpp"
#include "game/sound/se.hpp"
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

class ProcSideStoryInfo : public BaseQuestMenu,
  public gameui::Help::SideStoryInfo {
public:
  explicit ProcSideStoryInfo(const SideStory* story);
  [[gnu::always_inline]] ~ProcSideStoryInfo() override = default;

  void Unknown69() override;
  void Unknown85() override;
  int Unknown100() override { return 2; }
  int Unknown101() override { return 0; }
};

[[gnu::used]] ProcSideStoryInfo::ProcSideStoryInfo(const SideStory* story)
  : SideStoryInfo(story) {}

class ProcTalkSelectQuestMenu : public BaseQuestMenu,
  public gameui::Help::SubQuestInfo {
public:
  explicit ProcTalkSelectQuestMenu(const Subquest* quest);

  void Unknown85() override;
  void Unknown93() override;
  bool Unknown124() override;
  void ImplUnknown13() override {}
};

[[gnu::used]] ProcTalkSelectQuestMenu::ProcTalkSelectQuestMenu(
  const Subquest* quest) : SubQuestInfo(quest) {}

class ProcTalkQuestInfo : public ProcTalkSelectQuestMenu {
public:
  explicit ProcTalkQuestInfo(const Subquest* quest);

  void Unknown69() override;
  int Unknown100() override;
  int Unknown101() override { return 0; }

private:
  uint64_t unknown_440_;
  std::function<void()> unknown_450_;
};

[[gnu::used]] ProcTalkQuestInfo::ProcTalkQuestInfo(const Subquest* quest)
  : ProcTalkSelectQuestMenu(quest) {}

void ProcTalkQuestInfo::Unknown69() {
  sound::PlaySe("SE_SYS_Decide_Quest");
}

void ProcSideStoryInfo::Unknown69() {
  sound::PlaySe("SE_SYS_Decide_Quest");
}

}

}
