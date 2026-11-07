#include <memory>

#pragma GCC visibility push(hidden)
#include "game/map/map_unit_info.hpp"
#include "game/menu/basic_menu.hpp"
#include "game/menu/tutorial_scroll.hpp"
#include "game/proc/proc_game_skip_view.hpp"

namespace game::menu {

class TutorialInfo : public BasicMenu {
public:
  ~TutorialInfo() override;

  int Unknown24() override { return 10; }
  int Unknown26() override { return 110; }
  const char* Unknown32() override { return "Layout/CommonMenu.arc"; }
  const char* Unknown33() override { return "Common_TutorialInfo"; }
  bool Unknown39() override { return true; }
  int Unknown61() override { return 1; }
  int Unknown68() override { return 1; }
  void Unknown72() override;
  void Unknown82() override;
  void Unknown84() override;
  int Unknown100() override { return 0; }
  int Unknown101() override { return 0; }
  int Unknown114() override;
  int Unknown115() override;

  virtual int Unknown135(bool loop) {
    scroll_->ScrollUp(loop);
    return 0;
  }

  virtual int Unknown136(bool loop) {
    scroll_->ScrollDown(loop, false);
    return 0;
  }

private:
  uint64_t unknown_420_;
  std::shared_ptr<TutorialScroll> scroll_;
};

TutorialInfo::~TutorialInfo() {
  ProcGameSkipView::PopState();
  if (map::MapUnitInfo* info = map::MapUnitInfo::GetInstance()) {
    info->SetUnknown16c();
  }
}

}

#pragma GCC visibility pop
