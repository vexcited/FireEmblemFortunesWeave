#include "game/gmap/base_material_menu_item.hpp"

namespace game::gmap {

class EmptyMaterialMenuItem : public BaseMaterialMenuItem {
public:
  const char* GetMid() override;
  int ACall() override;
  bool IsActive() override;
  bool IsEmpty() override;
};

const char* EmptyMaterialMenuItem::GetMid() {
  return "MID_Sys_Empty";
}

int EmptyMaterialMenuItem::ACall() {
  return 1;
}

bool EmptyMaterialMenuItem::IsActive() {
  return false;
}

bool EmptyMaterialMenuItem::IsEmpty() {
  return true;
}

}

namespace game::gmap {

namespace {

class CallAnimalMenuItem : public gmap::BaseMaterialMenuItem {
public:
  CallAnimalMenuItem();

  int ACall() override;
};

[[gnu::used]] CallAnimalMenuItem::CallAnimalMenuItem() = default;

class MakeFarmMenuItem : public gmap::BaseMaterialMenuItem {
public:
  MakeFarmMenuItem();

  int ACall() override;
};

[[gnu::used]] MakeFarmMenuItem::MakeFarmMenuItem() = default;

class BoostFarmMenuItem : public gmap::BaseMaterialMenuItem {
public:
  BoostFarmMenuItem();

  int ACall() override;
};

[[gnu::used]] BoostFarmMenuItem::BoostFarmMenuItem() = default;

}

}
