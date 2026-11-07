#pragma GCC visibility push(hidden)
#include "game/menu/basic_menu.hpp"
#pragma GCC visibility pop

namespace game::menu {

class EquipUnitInfo : public BasicMenu {
public:
  ~EquipUnitInfo() override;

  const char* Unknown35() override { return "L_EquipList"; }
  void Unknown84() override;
  void Unknown85() override;
  virtual int Unknown135() { return 14; }
  virtual void Unknown136();
};

class DeployUnitInfo : public EquipUnitInfo {
public:
  ~DeployUnitInfo() override;

  const char* Unknown36() override;
  int Unknown135() override { return 2; }
};

EquipUnitInfo::~EquipUnitInfo() = default;
DeployUnitInfo::~DeployUnitInfo() = default;

}
