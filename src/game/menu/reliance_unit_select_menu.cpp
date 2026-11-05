#include <algorithm>
#include <functional>
#include <memory>
#include <vector>

#include "game/facility/scene_base.hpp"
#include "game/game_mode_data.hpp"
#include "game/menu/reliance_menu_info.hpp"
#include "game/menu/unit_grid_select_menu.hpp"
#include "game/menu/unit_menu_item.hpp"
#include "game/unit.hpp"
#include "game/unit_pool.hpp"

namespace game {

#pragma GCC visibility push(hidden)

class KnownManager : public Singleton<KnownManager> {};

#pragma GCC visibility pop

// The menu reaches the instance through the global offset table.
template<>
[[gnu::visibility("default")]] KnownManager* Singleton<KnownManager>::instance_;

// Recounts the reliance talks, the result is not used here.
bool Unknown8c9b80();

}

namespace game::gameui {

void SetRelianceFavor(ui::LayoutAccessor& part, Unit* unit, bool chapter);
bool CompareUnitItem(menu::BasicMenuItem* a, menu::BasicMenuItem* b);

}

namespace game::menu {

#pragma GCC visibility push(hidden)

namespace {

class RelianceUnitGridMenuItem : public UnitMenuItem, public RelianceMenuInfo {
public:
  RelianceUnitGridMenuItem(Unit* unit, Mode mode) : RelianceMenuInfo(mode) {
    unit_ = unit;
    UpdateTalkState();
  }

  void DrawText() override;
  bool IsActive() override;
  bool Unknown75() override;
  bool Unknown87() override;
  bool Unknown88() override { return true; }

  // Asks whether the unit has a reliance talk to read.
  void UpdateTalkState();

  int GetTalkState() const { return talk_state_; }

private:
  int32_t talk_state_ = 0;
};

// Units listed by the command battle are shown as such.
class RelianceCmdBtlUnitGridMenuItem : public RelianceUnitGridMenuItem {
public:
  RelianceCmdBtlUnitGridMenuItem(Unit* unit, Mode mode, bool listed)
    : RelianceUnitGridMenuItem(unit, mode), listed_(listed) {}

  bool Unknown72() override { return listed_; }

private:
  bool listed_;
};

}

class RelianceUnitSelectMenu : public UnitGridSelectMenu,
  public RelianceMenuInfo {
public:
  // The command battle variant inlines it.
  [[gnu::always_inline]] ~RelianceUnitSelectMenu() override {
    SingletonControl<KnownManager>::Release();
  }

  const char* Unknown32() override;
  const char* Unknown33() override;
  void Unknown84() override;
  void Unknown88() override;
  void Unknown96() override;
  int Unknown100() override;
  int Unknown107() override;
  void Unknown128() override;
  void Unknown129() override;
  int ImplUnknown10() override;
  Unit* Unknown146(int index, bool any) override;
  virtual BasicMenuItem* Unknown149(Unit* unit, Mode mode);
  const char* ImplUnknown03() override;
  const char* ImplUnknown05() override;

protected:
  void AddItemList();
  void SortAndFilter();
  void updateRelianceTalkState_();

  void EachRelianceItem(
    const std::function<bool(RelianceUnitGridMenuItem*)>& callback) {
    for (size_t i = 0; i < items_.size(); ++i) {
      RelianceUnitGridMenuItem* item =
        dynamic_cast<RelianceUnitGridMenuItem*>(items_[i]);
      if (item != nullptr && callback(item)) {
        break;
      }
    }
  }

  // Set while a listed unit has a reliance talk to read.
  bool has_talk_;
};

class RelianceCmdBtlUnitSelectMenu : public RelianceUnitSelectMenu {
public:
  [[gnu::always_inline]] ~RelianceCmdBtlUnitSelectMenu() override;

  BasicMenuItem* Unknown149(Unit* unit, Mode mode) override;

private:
  bool IsListed(Unit* unit) {
    if (unit == nullptr) {
      return false;
    }
    for (const PersonData* person : persons_) {
      if (UnitPool::Find(person, ForceMask{1 << 4}) == unit) {
        return true;
      }
    }
    return false;
  }

  uint64_t unknown_4a8_;
  std::vector<const PersonData*> persons_;
};

#pragma GCC visibility pop

RelianceCmdBtlUnitSelectMenu::~RelianceCmdBtlUnitSelectMenu() = default;

const char* RelianceUnitSelectMenu::Unknown32() {
  return "Layout/CommonMenu.arc";
}

const char* RelianceUnitSelectMenu::Unknown33() {
  return "Common_UnitSelect_Reliance";
}

void RelianceUnitSelectMenu::Unknown84() {
  accessor_3b8_.SetPaneVisible("L_Num", false);
  updateRelianceTalkState_();
  accessor_.SetPaneVisible("L_UnitInfoDetail/L_BlnFavor", false);
}

void RelianceUnitSelectMenu::Unknown88() {
  UnitGridSelectMenu::Unknown88();
  if (current_ == nullptr) {
    return;
  }
  RelianceUnitGridMenuItem* item =
    dynamic_cast<RelianceUnitGridMenuItem*>(current_);
  if (item == nullptr) {
    return;
  }

  if (std::shared_ptr<ui::LayoutAccessor> part =
        accessor_.GetPart("L_UnitInfoDetail").lock()) {
    Unit* unit = item->GetUnit();
    GameModeData* data = GameModeData::GetInstance();
    bool chapter = unit->GetForceType() == 8 && data != nullptr &&
      data->GetMode() == GameModeData::kModeChapter;
    gameui::SetRelianceFavor(*part, unit, chapter);
  }
}

void RelianceUnitSelectMenu::Unknown96() {
  UnitGridSelectMenu::Unknown96();
  updateRelianceTalkState_();
  Unknown16dd9a0();
  ImplUnknown12();
}

void RelianceUnitSelectMenu::AddItemList() {
  Mode mode = mode_;
  EachUnit(mode, false, [this, mode](Unit* unit) {
    AddItem(Unknown149(unit, mode));
  });
  for (size_t i = 0; i < visible_items_.size(); ++i) {
    if (visible_items_[i] != nullptr) {
      visible_items_[i]->SetIndex(i);
    }
  }
}

void RelianceUnitSelectMenu::Unknown128() {
  [[clang::always_inline]] AddItemList();
}

// Units with a talk to read come first, then the active ones.
void RelianceUnitSelectMenu::SortAndFilter() {
  std::function<bool(BasicMenuItem*, BasicMenuItem*)> compare =
    [](BasicMenuItem* a, BasicMenuItem* b) {
      RelianceUnitGridMenuItem* x = static_cast<RelianceUnitGridMenuItem*>(a);
      RelianceUnitGridMenuItem* y = static_cast<RelianceUnitGridMenuItem*>(b);
      if (x->IsActive() != y->IsActive()) {
        if (!x->IsActive()) {
          return false;
        }
        if (!y->IsActive()) {
          return true;
        }
      }
      if (x->GetTalkState() != y->GetTalkState()) {
        return x->GetTalkState() > y->GetTalkState();
      }
      return gameui::CompareUnitItem(a, b);
    };
  if (items_.size() >= 2) {
    std::sort(items_.begin(), items_.end(), compare);
  }
}

void RelianceUnitSelectMenu::Unknown129() {
  [[clang::always_inline]] SortAndFilter();
}

void RelianceUnitSelectMenu::updateRelianceTalkState_() {
  has_talk_ = false;
  EachRelianceItem([](RelianceUnitGridMenuItem* item) {
    item->UpdateTalkState();
    return false;
  });
  EachRelianceItem([this](RelianceUnitGridMenuItem* item) {
    if (item->IsDecidable() && item->GetTalkState() == 1) {
      has_talk_ = true;
    }
    return has_talk_;
  });
  Unknown8c9b80();
}

Unit* RelianceUnitSelectMenu::Unknown146(int index, bool any) {
  bool system = mode_ != kModeHotel;
  BasicMenuItem* found = GetItem(index, false, false);
  if (found == nullptr) {
    return nullptr;
  }
  UnitMenuItem* item = dynamic_cast<UnitMenuItem*>(found);
  if (item == nullptr) {
    return nullptr;
  }
  if (item->IsDecidable() && item->IsEnable() &&
      (any || system || item->IsActive())) {
    return item->GetUnit();
  }
  return nullptr;
}

BasicMenuItem* RelianceUnitSelectMenu::Unknown149(Unit* unit, Mode mode) {
  return new RelianceUnitGridMenuItem(unit, mode);
}

BasicMenuItem* RelianceCmdBtlUnitSelectMenu::Unknown149(Unit* unit,
  Mode mode) {
  return new RelianceCmdBtlUnitGridMenuItem(unit, mode, IsListed(unit));
}

const char* RelianceUnitSelectMenu::ImplUnknown03() {
  return mode_ != kModeHotel ? "MID_SysMenu_Reliance"
                             : "MID_HotelMenu_Reliance";
}

const char* RelianceUnitSelectMenu::ImplUnknown05() {
  return mode_ != kModeHotel ? "MID_Menu_UnitSelect_Help"
                             : "MID_RelianceMenu_Hotel_UnitSelect_Help";
}

}
