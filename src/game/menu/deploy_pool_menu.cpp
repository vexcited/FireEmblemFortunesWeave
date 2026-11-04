#pragma GCC visibility push(hidden)
#include "game/menu/game_menu.hpp"
#pragma GCC visibility pop

namespace game::menu {

class DeployPoolMenu : public GameMenu {
public:
  ~DeployPoolMenu() override;

  const char* Unknown42() override { return "L_EquipPool/L_PageTab/L_KeySort"; }
  std::weak_ptr<ui::LayoutAccessor> Unknown50() override;
  std::weak_ptr<ui::LayoutAccessor> Unknown51() override;
  void Unknown76(int result) override;
  void Unknown77(int result) override;
  int Unknown103() override;
  int Unknown105() override;
  virtual void Unknown139();
  virtual const char* Unknown140() { return "MID_SysMenu_Deploy"; }
  virtual void Unknown141();
};

class AnimalPoolMenu : public DeployPoolMenu {
public:
  ~AnimalPoolMenu() override;

  const char* Unknown33() override { return "Common_Equip_AnimalExchange"; }
  const char* Unknown35() override { return "L_EquipPool"; }
  const char* Unknown43(uint8_t kind) override;
  void Unknown57(std::vector<int64_t>& handles) override;
  void Unknown75() override;
  void Unknown84() override;
  void Unknown85() override;
  void Unknown88() override;
  void Unknown93() override;
  void Unknown94() override;
  void Unknown96() override;
  int Unknown102() override;
  void Unknown128() override;
  void Unknown129() override;
  void Unknown131() override;
  void Unknown139() override;
};

namespace {

class ProcDeleteAnimalMenu : public AnimalPoolMenu {
public:
  ProcDeleteAnimalMenu();

  int Unknown101() override { return 0; }
  const char* Unknown140() override { return "MID_StableMenu_Release"; }
};

[[gnu::used]] ProcDeleteAnimalMenu::ProcDeleteAnimalMenu() = default;

class ProcDeliveryAnimalMenu : public AnimalPoolMenu {
public:
  ProcDeliveryAnimalMenu();

  void Unknown57(std::vector<int64_t>& handles) override;
  void Unknown84() override;
  void Unknown85() override;
  int Unknown100() override;
  int Unknown101() override;
  const char* Unknown140() override { return "MID_DeliveryMenu_Title"; }
};

[[gnu::used]] ProcDeliveryAnimalMenu::ProcDeliveryAnimalMenu() = default;

}

class LegionPoolMenu : public DeployPoolMenu {
public:
  ~LegionPoolMenu() override;

  const char* Unknown33() override { return "Common_Equip_LegionExchange"; }
  const char* Unknown35() override { return "L_EquipPool"; }
  const char* Unknown43(uint8_t kind) override;
  void Unknown75() override {}
  void Unknown84() override;
  void Unknown85() override;
  void Unknown93() override;
  void Unknown94() override;
  int Unknown102() override;
  void Unknown128() override;
  void Unknown129() override;
  void Unknown131() override;
  void Unknown139() override;
};

DeployPoolMenu::~DeployPoolMenu() = default;
AnimalPoolMenu::~AnimalPoolMenu() = default;
LegionPoolMenu::~LegionPoolMenu() = default;

}
