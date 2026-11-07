#pragma once

#include "game/menu/unit_menu_item.hpp"
#include "game/unit_list_set.hpp"

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

protected:
  // The list flags of the unit, the defaults when it is not listed.
  uint16_t GetListFlags() const {
    const UnitListEntry* entry = unit_ != nullptr ?
      UnitListSet::instance_->Find(list_kind_, unit_).get() : nullptr;
    const uint16_t& flags = entry != nullptr ? entry->flags : kNoUnitListFlags;
    return flags;
  }

  uint8_t list_kind_;
  bool unknown_61_;
};

}
