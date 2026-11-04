#include "game/facility/facility_equip_unit_menu_item.hpp"
#include "game/menu/equip_menu_item_animal_pool.hpp"
#include "game/menu/game_menu_item.hpp"
#include "game/menu/top_menu_item.hpp"

namespace game::facility {

namespace {

class RankMenuItemBase : public menu::GameMenuItem {
public:
  virtual void Unknown70() = 0;
};

class ClassTrialMenuItem : public RankMenuItemBase {
public:
  ClassTrialMenuItem();

  int ACall() override;
  void DrawText() override;
  void Unknown70() override;
};

[[gnu::used]] ClassTrialMenuItem::ClassTrialMenuItem() = default;

class ClassChangeMenuItem : public RankMenuItemBase {
public:
  ClassChangeMenuItem();

  int ACall() override;
  void DrawText() override;
  void Unknown70() override;
};

[[gnu::used]] ClassChangeMenuItem::ClassChangeMenuItem() = default;

class ClassMenuItem : public facility::FacilityEquipUnitMenuItem {
public:
  ClassMenuItem();

  bool IsActive() override;
};

[[gnu::used]] ClassMenuItem::ClassMenuItem() = default;

class CmdBtlClassMenuItem : public ClassMenuItem {
public:
  CmdBtlClassMenuItem();

  bool Unknown72() override { return unknown_61_; }
};

[[gnu::used]] CmdBtlClassMenuItem::CmdBtlClassMenuItem() = default;

class BreedingFoodMenuItem_Base : public menu::GameMenuItem {
public:
  virtual const char* Unknown70() = 0;
};

class EmptyFoodMenuItem : public BreedingFoodMenuItem_Base {
public:
  EmptyFoodMenuItem();

  const char* GetMid() override { return "MID_Sys_Empty"; }
  int ACall() override { return 0; }
  void DrawText() override;
  bool IsActive() override { return true; }
  bool IsEmpty() override { return true; }
  const char* Unknown70() override { return ""; }
};

[[gnu::used]] EmptyFoodMenuItem::EmptyFoodMenuItem() = default;

class BreedingFoodMenuItem : public BreedingFoodMenuItem_Base {
public:
  BreedingFoodMenuItem();

  int ACall() override;
  void DrawText() override;
  bool IsActive() override;
  const char* Unknown70() override;
};

[[gnu::used]] BreedingFoodMenuItem::BreedingFoodMenuItem() = default;

class BreedingRideMenuItem : public menu::EquipMenuItem_AnimalPool {
public:
  BreedingRideMenuItem();

  int ACall() override;
  void PlayDecideSe() override;
  void DrawText() override;
  bool IsActive() override;
  bool Unknown71() override { return false; }
};

[[gnu::used]] BreedingRideMenuItem::BreedingRideMenuItem() = default;

class StableBreedingMenuItem : public facility::FacilityEquipUnitMenuItem {
public:
  StableBreedingMenuItem();

  bool Unknown76() override { return true; }
};

[[gnu::used]] StableBreedingMenuItem::StableBreedingMenuItem() = default;

class BreedingMenuItem : public menu::TopMenuItem {
public:
  BreedingMenuItem();

  const char* GetMid() override { return "MID_StableMenu_Breeding"; }
  const char* GetHelpMid() override { return "厩舎"; }
  void OnClose() override;
  int ACall() override;
  bool IsActive() override { return unknown_54_ == 0; }
  void Unknown73() override;
};

[[gnu::used]] BreedingMenuItem::BreedingMenuItem() = default;

class NamingMenuItem : public menu::TopMenuItem {
public:
  NamingMenuItem();

  const char* GetMid() override { return "MID_StableMenu_Naming"; }
  const char* GetHelpMid() override { return "厩舎②"; }
  int ACall() override;
  bool IsActive() override;
  void Unknown73() override;
};

[[gnu::used]] NamingMenuItem::NamingMenuItem() = default;

class ReleaseMenuItem : public menu::TopMenuItem {
public:
  ReleaseMenuItem();

  const char* GetMid() override { return "MID_StableMenu_Release"; }
  const char* GetHelpMid() override { return "厩舎②"; }
  bool IsDecidable() override;
  int ACall() override;
  bool IsActive() override;
  void Unknown73() override;
};

[[gnu::used]] ReleaseMenuItem::ReleaseMenuItem() = default;

class NamingRideMenuItem : public menu::EquipMenuItem_AnimalPool {
public:
  NamingRideMenuItem();

  int ACall() override;
  void PlayDecideSe() override;
  bool IsActive() override { return true; }
};

[[gnu::used]] NamingRideMenuItem::NamingRideMenuItem() = default;

}

}
