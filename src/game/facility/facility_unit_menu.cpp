#include "game/facility/facility_unit_menu.hpp"
#include "game/sound/se.hpp"
#include "msg/message_manager.hpp"

#pragma GCC visibility push(hidden)
#include "game/facility/facility_unit_menu_item.hpp"
#pragma GCC visibility pop

namespace game::gameui {

// Sets up the participant number part.
void Unknown15940f0(const std::weak_ptr<ui::LayoutAccessor>& part, int index,
  int count);

}

namespace game::facility {

const char* FacilityUnitMenu::Unknown32() {
  return "Layout/Hub.arc";
}

const char* FacilityUnitMenu::Unknown33() {
  return "Hub_UnitSelect";
}

void FacilityUnitMenu::Unknown84() {
  accessor_3b8_.SetPaneVisible("L_Num", false);
  int count = units_.size() + Unknown149();
  if (count >= 2) {
    accessor_3b8_.SetPaneVisible("L_Num", true);
    accessor_3b8_.SetPaneVisible("L_Num/L_KeyHelp", false);
    if (const char16_t* text = msg::GetText("MID_Menu_ParticipantsNum")) {
      if (nn::ui2d::TextBox* box = accessor_3b8_.FindTextBox("L_Num/T_Txt")) {
        ui::SetTextBoxString(box, text, false);
      }
    }
    gameui::Unknown15940f0(accessor_3b8_.GetPart("L_Num"), 0, count);
    UpdateCount();
  }
  if (!Unknown150()) {
    accessor_.SetPaneVisible("L_Reliance", false);
  }
}

// Cancelling a pending choice gives the last chosen unit back first.
void FacilityUnitMenu::Unknown96() {
  if (!unknown_490_ && (Unknown21() == 9 || Unknown21() == 12)) {
    --count_;
    UpdateCount();
    Unknown155();
  }
  UnitGridSelectMenu::Unknown96();
}

int FacilityUnitMenu::Unknown100() {
  if (current_ == nullptr) {
    return 0;
  }
  FacilityUnitMenuItem* item = dynamic_cast<FacilityUnitMenuItem*>(current_);
  if (item == nullptr) {
    return 0;
  }
  if (!SelectUnit(item)) {
    return 1;
  }
  if (count_ >= units_.size()) {
    return Unknown158();
  }
  Unknown16e2860(false);
  sound::PlaySe("SE_SYS_MultipleUnit_Select");
  return 0;
}

int FacilityUnitMenu::Unknown101() {
  --count_;
  UpdateCount();
  if (count_ < 0) {
    return 3;
  }
  Unknown155();
  sound::PlaySe("SE_SYS_MultipleUnit_Cancel");
  return 0;
}

bool FacilityUnitMenu::Unknown149() {
  return false;
}

bool FacilityUnitMenu::Unknown150() {
  return false;
}

int FacilityUnitMenu::Unknown151() {
  return 0;
}

int FacilityUnitMenu::Unknown152() {
  return 1;
}

int FacilityUnitMenu::Unknown153() {
  return 0;
}

uint8_t FacilityUnitMenu::ImplUnknown08() {
  return 2;
}

void FacilityUnitMenu::Unknown156() {}

void FacilityUnitMenu::Unknown157() {}

}
