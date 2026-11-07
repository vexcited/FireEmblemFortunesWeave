#pragma once

#include "game/menu/unit_menu_item.hpp"

namespace game::facility {

class FacilityUnitMenuItem : public menu::UnitMenuItem {
public:
  void DrawText() override;
  bool Unknown82() override;
  void Unknown17() override;
  void OnSelect() override;
  void OnDeselect() override;
  bool IsActive() override;
  bool Unknown72() override;
  bool Unknown74() override;
  bool Unknown77() override;
  int Unknown81() override;
  bool Unknown83() override;
  bool Unknown85() override;
  bool Unknown86() override;
  bool Unknown88() override;
};

}
