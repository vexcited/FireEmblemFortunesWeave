#include <vector>

#include "game/facility/facility_equip_unit_select_menu.hpp"

namespace game::facility {

namespace {

class ProcClassUnitMenu : public FacilityEquipUnitSelectMenu {
public:
  ProcClassUnitMenu();

  enum Mode : uint8_t {
    kModeTrial,
    kModeChange,
  };

  const char* Unknown65() override {
    return mode_ == kModeTrial ? "資格試験" : mode_ == kModeChange ? "兵種変更"
      : "";
  }

  const char* Unknown67() override {
    return mode_ == kModeTrial ? "資格試験" : mode_ == kModeChange ? "兵種変更"
      : nullptr;
  }

  int Unknown100() override;
  void Unknown128() override;
  bool Unknown145() override { return true; }
  bool Unknown149() override { return true; }
  // Builds the item of a unit.
  virtual menu::BasicMenuItem* Unknown153(Unit* unit);

  const char* ImplUnknown03() override {
    return mode_ == kModeTrial ? "MID_TempleMenu_ClassTrial"
      : mode_ == kModeChange ? "MID_TempleMenu_ClassChange" : "";
  }

  const char* ImplUnknown05() override {
    return mode_ == kModeTrial ? "MID_ClassTrialMenu_UnitSelect_Help"
      : mode_ == kModeChange ? "MID_ClassChangeMenu_UnitSelect_Help" : "";
  }

protected:
  uint8_t mode_;
};

[[gnu::used]] ProcClassUnitMenu::ProcClassUnitMenu() = default;

class ProcCmdBtlClassUnitMenu : public ProcClassUnitMenu {
public:
  ProcCmdBtlClassUnitMenu();
  ~ProcCmdBtlClassUnitMenu() override;

  menu::BasicMenuItem* Unknown153(Unit* unit) override;

private:
  uint8_t unknown_570_[0x8];
  std::vector<int32_t> unknown_578_;
};

[[gnu::used]] ProcCmdBtlClassUnitMenu::ProcCmdBtlClassUnitMenu() = default;

ProcCmdBtlClassUnitMenu::~ProcCmdBtlClassUnitMenu() = default;

}

}
