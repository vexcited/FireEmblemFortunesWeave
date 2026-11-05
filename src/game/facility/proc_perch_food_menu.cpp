#include <memory>

#include "game/sound/se.hpp"
#include "ui/layout_accessor.hpp"

#pragma GCC visibility push(hidden)
#include "game/menu/material_menu.hpp"
#pragma GCC visibility pop

namespace game::facility {

namespace {

class ProcPerchFoodMenu : public menu::MaterialMenu {
public:
  ProcPerchFoodMenu();

  const char* Unknown32() override { return "Layout/Hub.arc"; }
  const char* Unknown33() override { return "Hub_Perch_Food"; }
  const char* Unknown35() override { return "L_MaterialPool/L_Pool"; }

  std::weak_ptr<ui::LayoutAccessor> Unknown50() override {
    if (std::shared_ptr<ui::LayoutAccessor> pool =
          accessor_.GetPart(Unknown35()).lock()) {
      return pool->GetPart("L_UnitInfo/L_ArrowL");
    }
    return {};
  }

  std::weak_ptr<ui::LayoutAccessor> Unknown51() override {
    if (std::shared_ptr<ui::LayoutAccessor> pool =
          accessor_.GetPart(Unknown35()).lock()) {
      return pool->GetPart("L_UnitInfo/L_ArrowR");
    }
    return {};
  }

  const char* Unknown67() override { return "白鴉の止まり木"; }

  void Unknown76(int result) override {
    if (result != 13) {
      MaterialMenu::Unknown76(result);
      return;
    }
    sound::PlaySe("SE_SYS_UnitChange_Left");
  }

  void Unknown77(int result) override {
    if (result != 13) {
      MaterialMenu::Unknown77(result);
      return;
    }
    sound::PlaySe("SE_SYS_UnitChange_Right");
  }

  void Unknown84() override {
    MaterialMenu::Unknown84();
    UpdateUnit();
  }

  void Unknown128() override;

  const char* GetInfoPartName() override {
    return "L_MaterialPool/L_InfoDetail";
  }

  const char* ImplUnknown03() override { return "MID_PerchMenu_Perch"; }

  const char* ImplUnknown05() override {
    return "MID_PerchMenu_FoodSelect_Help";
  }

  int ImplUnknown10() override;

private:
  void UpdateUnit();
};

[[gnu::used]] ProcPerchFoodMenu::ProcPerchFoodMenu() = default;

}

}
