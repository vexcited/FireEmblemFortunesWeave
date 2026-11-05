#include <algorithm>
#include <functional>

#include "game/game_mode_data.hpp"
#include "game/gameui/header_footer.hpp"
#include "game/menu/unit_menu_item.hpp"
#include "game/sound/se.hpp"
#include "game/unit.hpp"

#pragma GCC visibility push(hidden)
#include "game/menu/unit_grid_select_menu.hpp"
#pragma GCC visibility pop

namespace game {

struct VibrationSetting {
  uint8_t unknown_00_[0xe8];
};

// The user settings, see `frame_step.hpp`.
class GameSetting {
public:
  VibrationSetting& GetVibration() { return vibration_; }

private:
  uint8_t unknown_00_[0x2c8];
  VibrationSetting vibration_;
};

extern GameSetting* g_game_setting;

bool IsVibrationEnabled(const VibrationSetting& setting);

// Only the member read by the unit menus is known.
struct PersonData {
  uint8_t unknown_00_[0x120];
  const void* unknown_120_;
};

// Looks up data of a person, null when there is none.
const void* Unknown975940(const void* data);

}

namespace game::gameui {

void SetUnitInfo(ui::LayoutAccessor& part, Unit* unit, bool unknown0,
  bool unknown1);
void SetUnitInfoDetail(ui::LayoutAccessor& part, Unit* unit);
bool CompareUnitItem(menu::BasicMenuItem* a, menu::BasicMenuItem* b);

}

namespace game::menu {

// Opens the full unit information above a menu.
ProcInst* OpenUnitInfoFull(BasicMenu* parent, Unit* unit, int mode);

UnitMenuItem* UnitGridSelectMenu::FindUnitItem(
  const std::function<bool(UnitMenuItem*)>& match) {
  for (BasicMenuItem* item : items_) {
    if (UnitMenuItem* unit_item = dynamic_cast<UnitMenuItem*>(item)) {
      if (match(unit_item)) {
        return unit_item;
      }
    }
  }
  return nullptr;
}

void UnitGridSelectMenu::ApplyChangeUnit() {
  if (change_unit_ == nullptr) {
    return;
  }

  UnitMenuItem* found = FindUnitItem([this](UnitMenuItem* item) {
    return item->GetUnit() == change_unit_;
  });
  if (found != nullptr) {
    if (current_ != nullptr) {
      current_->OnDeselect();
    }
    current_ = found;
    Unknown16dea40(true, false, false);
    if (current_ != nullptr) {
      current_->OnSelect();
      // The result is not used.
      IsVibrationEnabled(g_game_setting->GetVibration());
    }
    SetCursorHidden(current_ == nullptr || current_->Unknown15());

    int index = -1;
    int i = 0;
    for (BasicMenuItem* item : items_) {
      if (item->IsDecidable()) {
        if (item == current_) {
          index = i;
          break;
        }
        ++i;
      }
    }
    unknown_228_ = std::max(index - 1, 0);
    Unknown16dea40(true, false, false);

    MenuInput* input = this;
    int columns = input->InputUnknown02();
    unknown_10_ = menu_->GetCurrentIndex(true, false) % columns;
  }
  change_unit_ = nullptr;
}

void UnitGridSelectMenu::Unknown57(std::vector<int64_t>& handles) {
  ImplUnknown12();
  Unknown135(handles);
  if (current_ == nullptr) {
    return;
  }
  UnitMenuItem* item = dynamic_cast<UnitMenuItem*>(current_);
  if (item != nullptr && Unknown145()) {
    gameui::SetFooterKeyVisible("OpenStatus", item->GetUnit() == nullptr);
  }
}

void UnitGridSelectMenu::Unknown84() {
  accessor_3b8_.SetPaneVisible("L_Num", false);
}

void UnitGridSelectMenu::Unknown88() {
  if (current_ == nullptr) {
    return;
  }
  UnitMenuItem* item = dynamic_cast<UnitMenuItem*>(current_);
  if (item == nullptr) {
    return;
  }

  bool detail = item->Unknown87();
  ui::LayoutAccessor& part = Unknown144();
  Unit* unit = item->GetUnit();
  if (detail) {
    gameui::SetUnitInfoDetail(part, unit);
  }
  else {
    gameui::SetUnitInfo(part, unit, item->Unknown84(), false);
  }

  if (Unknown145()) {
    gameui::SetFooterKeyVisible("OpenStatus", item->GetUnit() == nullptr);
  }
}

void UnitGridSelectMenu::Unknown99() {
  ApplyChangeUnit();
}

int UnitGridSelectMenu::XCall() {
  if (!Unknown145()) {
    return 0;
  }
  if (current_ == nullptr) {
    return 1;
  }
  UnitMenuItem* item = dynamic_cast<UnitMenuItem*>(current_);
  if (item == nullptr) {
    return 1;
  }
  Unit* unit = item->GetUnit();
  if (unit == nullptr) {
    return 1;
  }

  UnitRestrictionKey key = {unit, unit->GetPerson()};
  if (GameModeData::GetInstance()->GetUnitRestriction().Find(key) != 0) {
    return 1;
  }
  const PersonData* person = unit->GetPerson();
  if (person == nullptr || person->unknown_120_ == nullptr ||
      Unknown975940(person->unknown_120_) == nullptr) {
    return 1;
  }

  unknown_490_ = true;
  {
    std::function<void()> se = [] {
      sound::PlaySe("SE_SYS_UnitStatus_Open");
    };
    [[clang::always_inline]] se_callback_ = se;
  }
  unknown_16a_ = true;
  OpenUnitInfoFull(this, unit, 5);
  return 9;
}

int UnitGridSelectMenu::Unknown102() {
  [[clang::always_inline]] return XCall();
}

void UnitGridSelectMenu::InputUnknown18() {
  sound::PlayCursorCharaSe();
}

ui::LayoutAccessor& UnitGridSelectMenu::Unknown144() {
  return accessor_.FindPart("L_UnitInfoDetail/L_UnitInfo");
}

Unit* UnitGridSelectMenu::Unknown146(int index, bool any) {
  BasicMenuItem* found = GetItem(index);
  if (found == nullptr) {
    return nullptr;
  }
  UnitMenuItem* item = dynamic_cast<UnitMenuItem*>(found);
  if (item == nullptr) {
    return nullptr;
  }
  if (item->IsDecidable() && item->IsEnable() && (any || item->IsActive())) {
    return item->GetUnit();
  }
  return nullptr;
}

Unit* UnitGridSelectMenu::Unknown147() {
  int count = items_.size();
  for (int i = 0; i < count; ++i) {
    if (UnitMenuItem* item = dynamic_cast<UnitMenuItem*>(GetItem(i))) {
      if (Unit* unit = item->GetUnit()) {
        return unit;
      }
    }
  }
  return nullptr;
}

Unit* UnitGridSelectMenu::Unknown148() {
  int count = items_.size();
  for (int i = count - 1; i >= 0; --i) {
    if (UnitMenuItem* item = dynamic_cast<UnitMenuItem*>(GetItem(i))) {
      if (Unit* unit = item->GetUnit()) {
        return unit;
      }
    }
  }
  return nullptr;
}

void UnitGridSelectMenu::SortUnitItemList() {
  for (size_t i = 0; i < visible_items_.size(); ++i) {
    if (visible_items_[i] != nullptr) {
      visible_items_[i]->SetIndex(i);
    }
  }

  std::function<bool(BasicMenuItem*, BasicMenuItem*)> compare =
    [](BasicMenuItem* a, BasicMenuItem* b) {
      return gameui::CompareUnitItem(a, b);
    };
  if (items_.size() >= 2) {
    std::sort(items_.begin(), items_.end(), compare);
  }
}

}
