#include "game/facility/facility_menu.hpp"

namespace game::facility {

namespace {

class ProcClassRankMenu : public FacilityMenu {
public:
  ProcClassRankMenu();

  const char* Unknown32() override { return "Layout/Hub.arc"; }
  const char* Unknown33() override { return "Hub_Temple_RankSelect"; }
  const char* Unknown35() override { return "L_JobList"; }
  int Unknown37() override { return 1; }
  void Unknown50() override;
  void Unknown51() override;

  const char* Unknown67() override {
    return mode_ == kModeTrial ? "資格試験" : "兵種変更";
  }

  void Unknown75() override {}
  void Unknown76() override;
  void Unknown77() override;
  void Unknown84() override;
  void Unknown94() override;
  void Unknown96() override;
  int Unknown102() override;
  int Unknown103() override;
  int Unknown105() override;
  void Unknown130() override;
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

}

}
