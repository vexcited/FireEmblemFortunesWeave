#include "game/facility/facility_menu.hpp"
#include "game/gameui/header_footer.hpp"
#include "game/sound/se.hpp"

namespace game::facility {

namespace {

class ProcClassRankMenu : public FacilityMenu {
public:
  ProcClassRankMenu();

  const char* Unknown32() override { return "Layout/Hub.arc"; }
  const char* Unknown33() override { return "Hub_Temple_RankSelect"; }
  const char* Unknown35() override { return "L_JobList"; }
  bool Unknown37() override { return true; }
  std::weak_ptr<ui::LayoutAccessor> Unknown50() override;
  std::weak_ptr<ui::LayoutAccessor> Unknown51() override;

  const char* Unknown67() override {
    return mode_ == kModeTrial ? "資格試験" : "兵種変更";
  }

  void Unknown75() override {}
  void Unknown76(int result) override;
  void Unknown77(int result) override;
  void Unknown84() override;
  void Unknown94() override;
  void Unknown96() override;
  int Unknown102() override;
  int Unknown103() override;
  int Unknown105() override;
  int Unknown130() override;
  void Unknown131() override;
  uint8_t ImplUnknown08() override { return mode_ == kModeTrial; }

  const char* ImplUnknown03() override {
    return mode_ == kModeTrial ? "MID_TempleMenu_ClassTrial"
                               : "MID_TempleMenu_ClassChange";
  }

  const char* ImplUnknown05() override {
    return "MID_ClassTrialMenu_ClassSelect_Help";
  }

  int ImplUnknown10() override;

private:
  enum Mode : uint8_t {
    kModeTrial,
    kModeChange,
  };

  void* unit_;
  Mode mode_;
};

[[gnu::used]] ProcClassRankMenu::ProcClassRankMenu() = default;

void ProcClassRankMenu::Unknown76(int result) {
  if (result != 13) {
    FacilityMenu::Unknown76(result);
    return;
  }
  sound::PlaySe("SE_SYS_UnitChange_Left");
}

void ProcClassRankMenu::Unknown77(int result) {
  if (result != 13) {
    FacilityMenu::Unknown77(result);
    return;
  }
  sound::PlaySe("SE_SYS_UnitChange_Right");
}

}

}

namespace game::facility {

namespace {

void ProcClassRankMenu::Unknown131() {
  if (gameui::Footer* footer = gameui::Footer::instance_) {
    footer->Refresh(false);
  }
}

}

}
