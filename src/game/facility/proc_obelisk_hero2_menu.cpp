#include <memory>

#include "game/facility/obelisk_hero_menu.hpp"
#include "game/menu/unit_list.hpp"

namespace game::facility {

namespace {

class ProcUnitSelectMenu : public menu::GameMenu {
public:
  ProcUnitSelectMenu();

  ~ProcUnitSelectMenu() override {
    ResetMenuUnits();
  }

  const char* Unknown32() override { return "Layout/Obelisk.arc"; }
  const char* Unknown33() override { return "Obelisk_Hero2"; }
  const char* Unknown35() override { return "L_UnitList"; }
  bool Unknown39() override { return true; }
  void Unknown57(std::vector<int64_t>& handles) override;
  void Unknown58(std::vector<int64_t>& handles) override;
  int Unknown63() override { return 0; }
  void Unknown69() override {}
  void Unknown75() override;
  void Unknown84() override;
  void Unknown92() override;
  void Unknown93() override;
  void Unknown94() override;
  void Unknown96() override;
  int Unknown100() override;
  int Unknown101() override { return 3; }
  int Unknown102() override;
  void Unknown128() override;
  int InputUnknown00() override { return 1; }
  int InputUnknown02() override { return 7; }
  int InputUnknown01() override { return 1; }

private:
  uint8_t unknown_428_[0x10];
  std::shared_ptr<void> unknown_438_;
};

[[gnu::used]] ProcUnitSelectMenu::ProcUnitSelectMenu() = default;

class ProcPartSelect : public ObeliskHeroMenu {
public:
  ProcPartSelect();

  const char* Unknown35() override { return "L_PartList"; }
  void Unknown58(std::vector<int64_t>& handles) override;
  bool Unknown64() override { return true; }
  void Unknown94() override;
  void Unknown96() override;
  bool Unknown125() override;
  void Unknown128() override;
  void Unknown140() override {}
  void Unknown142() override;
  void Unknown143() override;
};

[[gnu::used]] ProcPartSelect::ProcPartSelect() = default;

}

}
