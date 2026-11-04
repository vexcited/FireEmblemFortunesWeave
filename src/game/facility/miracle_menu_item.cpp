#include "game/facility/facility_unit_menu_item.hpp"
#include "game/menu/top_menu_item.hpp"

namespace game::facility {

namespace {

class FacilityMenuItem : public menu::TopMenuItem {
public:
  bool IsDecidable() override { return (unknown_54_ & 0x400000) == 0; }
  bool IsActive() override { return unknown_54_ == 0; }
};

class MiracleMenuItem : public FacilityMenuItem {
public:
  MiracleMenuItem();

  const char* GetMid() override { return "MID_TempleMenu_MiracleEquip"; }
  const char* GetHelpMid() override { return "加護編成"; }
  int ACall() override;
  void Unknown73() override;
};

[[gnu::used]] MiracleMenuItem::MiracleMenuItem() = default;

class TempleMenuItem : public FacilityMenuItem {};

class ReinforceMenuItem : public TempleMenuItem {
public:
  ReinforceMenuItem();

  const char* GetMid() override { return "MID_TempleMenu_Reinforce"; }
  const char* GetHelpMid() override { return "戦技強化"; }
  int ACall() override;
  void Unknown73() override;
};

[[gnu::used]] ReinforceMenuItem::ReinforceMenuItem() = default;

class EducateMenuItem : public TempleMenuItem {
public:
  EducateMenuItem();

  const char* GetMid() override { return "MID_TempleMenu_Educate"; }
  const char* GetHelpMid() override { return "伝授"; }
  int ACall() override;
  void Unknown73() override;
};

[[gnu::used]] EducateMenuItem::EducateMenuItem() = default;

class OrdealMenuItem : public TempleMenuItem {
public:
  OrdealMenuItem();

  const char* GetMid() override { return "MID_TempleMenu_Trial"; }
  void OnClose() override;
  int ACall() override;
  int RightCall() override;
  void Unknown73() override;
};

[[gnu::used]] OrdealMenuItem::OrdealMenuItem() = default;

class VolunteerUnitMenuItem : public facility::FacilityUnitMenuItem {
public:
  VolunteerUnitMenuItem();

  int Unknown79() override { return 1; }
  int Unknown80() override;
};

[[gnu::used]] VolunteerUnitMenuItem::VolunteerUnitMenuItem() = default;

}

}
