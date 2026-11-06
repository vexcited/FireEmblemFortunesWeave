#include <stdint.h>

#include "game/unit.hpp"
#include "game/unit_item.hpp"
#include "game/gameui/hp_stock.hpp"
#include "ui/layout_accessor.hpp"
#include "ui/ui2d.hpp"

namespace game {

#pragma GCC visibility push(hidden)

// Battle animation options of one side.
struct BattleAnimeOption {
  bool enabled;
  bool unknown_1;
  uint8_t unknown_2;
  uint8_t mode;
};

class GameSetting {
public:
  // The second group compares its third byte as a value.
  bool UsesAnime(const BattleAnimeOption& option, bool exact) const {
    if (option.mode != 1) {
      return false;
    }
    if (option.enabled) {
      return true;
    }
    if (flag_ != 1 || !option.unknown_1) {
      return false;
    }
    return exact ? option.unknown_2 == 1 : (option.unknown_2 & 1);
  }

  bool UsesAnime() const {
    return UsesAnime(player_anime_, false) || UsesAnime(enemy_anime_, true);
  }

private:
  uint8_t unknown_00_[0x324];
  BattleAnimeOption player_anime_;
  uint8_t unknown_328_[0x5c];
  BattleAnimeOption enemy_anime_;
  uint8_t unknown_388_[0x24];
  uint8_t flag_;
};

extern GameSetting* g_game_setting;

namespace map {

class BattleInfo;

class BattleSide {
public:
  virtual ~BattleSide();

  const Unit* GetUnit() const {
    return unit_;
  }

  uint8_t GetPosition() const {
    return position_;
  }

private:
  BattleInfo* info_;
  uint8_t position_;
  uint8_t opponent_;
  uint8_t unknown_12_[0x6];
  const Unit* unit_;
  uint8_t unknown_20_[0x2d8];
};

class BattleInfo {
public:
  virtual ~BattleInfo();

  const BattleSide& GetSide(int index) const {
    return sides_[index];
  }

  bool IsPlayerInterrupted() const {
    return flags_ & 0x100000;
  }

  bool IsTargetInterrupted() const {
    return flags_ & 0x200000;
  }

private:
  uint8_t unknown_08_[0x8];
  BattleSide sides_[2];
  uint8_t unknown_600_[0x260c];
  uint32_t flags_;
};

class MapSequence {
public:
  bool IsSkipping() const {
    return skipping_;
  }

private:
  uint8_t unknown_00_[0x5ae8];
  bool skipping_;
};

extern MapSequence* g_map_sequence;

// Shows the combat forecast of both battle sides.
class BattleInfoWindow {
public:
  virtual int GetAnimeMode() const;
  virtual ~BattleInfoWindow();
  virtual void Open();
  virtual void Close();
  virtual bool IsPlayerSide(const uint8_t& index) const;
  virtual int Unknown06() const;
  virtual int Unknown07() const;
  virtual void SetFace(uint8_t index);
  virtual void HideFace(uint8_t index);
  virtual void SetForceIcon(bool player, const Unit* unit);
  virtual void SetName(uint8_t index);
  virtual void SetClass(uint8_t index);
  virtual void SetStatus(uint8_t index);
  // Shows the hit point stocks of a side.
  virtual void SetHpStock(uint8_t index);
  virtual void Unknown15();
  virtual void SetPlayerHp(int unknown);
  virtual void SetHp(int unknown, int count, const BattleSide* side,
    bool interrupted, bool flag);
  virtual void SetTargetHp(int unknown);
  virtual void SetGauge(int unknown, int count, const BattleSide* side,
    bool interrupted, bool flag);
  virtual void SetSkillCount(int unknown, const Unit* unit,
    const SkillData* skill);
  virtual void Unknown21();
  virtual void SetEquipVisible(bool visible);
  virtual void Unknown23();
  virtual void Unknown24();
  virtual bool Unknown25() const;
  virtual void Reset();
  virtual void* GetUnknown120() const;
  virtual const char* GetFadeName(uint8_t out) const;
  virtual void Hide();
  virtual void Show();

private:
  void SetCount(int unknown, int count, int previous, bool enabled,
    const char* label);

  uint8_t unknown_08_[0x10];
  ui::LayoutAccessor layout_;
  uint8_t unknown_80_[0x18];
  const BattleInfo* info_;
  uint8_t unknown_a0_[0x21];
  bool unknown_c1_;
  bool unknown_c2_;
  uint8_t unknown_c3_[0x9];
  bool opened_;
  uint8_t unknown_cd_[0x13];
  bool unknown_e0_;
  bool unknown_e1_;
  bool unknown_e2_;
  uint8_t unknown_e3_[0x3d];
  void* unknown_120_;
  bool unknown_128_;
  bool player_flag_;
};

int BattleInfoWindow::GetAnimeMode() const {
  if (!g_game_setting->UsesAnime()) {
    return 1;
  }
  if (g_map_sequence == nullptr) {
    return 1;
  }
  return g_map_sequence->IsSkipping() ? 2 : 1;
}

// Forces 0 to 3 rank as player, enemy, third army and ally.
static int GetForceRank(uint8_t force) {
  static constexpr int kRanks[] = {0, 4, 3, 1};
  return force > 3 ? 2 : kRanks[force];
}

static uint8_t GetForceType(const Unit* unit) {
  if (unit == nullptr) {
    return Unit::kNoForce;
  }
  return unit->GetForceType();
}

bool BattleInfoWindow::IsPlayerSide(const uint8_t& index) const {
  const uint8_t first = GetForceType(info_->GetSide(0).GetUnit());
  const uint8_t second = GetForceType(info_->GetSide(1).GetUnit());
  const BattleSide& side = info_->GetSide(index);
  return side.GetPosition() == (GetForceRank(first) > GetForceRank(second));
}

void BattleInfoWindow::HideFace(uint8_t index) {
  const bool player = IsPlayerSide(index);
  nn::ui2d::Pane* pane = layout_.FindPane(player ? "Player_Face" :
    "Target_Face");
  if (pane == nullptr) {
    return;
  }
  if (auto* picture = dynamic_cast<nn::ui2d::Picture*>(pane)) {
    layout_.StartAnimation(player ? "PlayerFace_Off" : "TargetFace_Off");
    picture->SetVisible(false);
  }
}

void BattleInfoWindow::SetHpStock(uint8_t index) {
  const Unit* unit = info_->GetSide(index).GetUnit();
  const char* name = IsPlayerSide(index) ?
    "L_PlayerHP_Gauge/L_GaugeL_HPStock" : "L_TargetHP_Gauge/L_GaugeR_HPStock";
  layout_.SetPaneVisible(name, unit != nullptr);
  if (unit != nullptr) {
    gameui::SetHpStock(layout_.FindPart(name), unit);
  }
}

void BattleInfoWindow::SetPlayerHp(int unknown) {
  BattleInfoWindow::SetHp(unknown, 1, &info_->GetSide(0),
    info_->IsPlayerInterrupted(), player_flag_);
}

void BattleInfoWindow::SetTargetHp(int unknown) {
  BattleInfoWindow::SetGauge(unknown, 1, &info_->GetSide(0),
    info_->IsTargetInterrupted(), false);
}

// Battle skills keep their use count in bits 12 to 18 and the extra uses of
// kinds 5 and 6 in bits 19 to 23 of their source.
void BattleInfoWindow::SetSkillCount(int unknown, const Unit* unit,
  const SkillData* skill) {
  const uint32_t index = skill != nullptr ? skill->index & 0xfff : 0;
  const Unit::SkillList& list = unit->GetSkillList(4);
  int count = -1;

  if (list.Contains(index)) {
    const int found = list.FindSource(index);
    if (found >= 0) {
      const uint32_t source = list.sources[found];
      const SkillData* data = SkillFile::GetInstance()->At(source & 0xfff);
      const uint8_t kind = SkillRow::GetKind(data);
      const int extra = kind == 5 || kind == 6 ? source >> 19 & 0x1f : 0;
      const int left = extra - static_cast<int>(source >> 12 & 0x7f) +
        SkillRow::GetUses(data);
      count = left > 0 ? left : 0;
    }
  }

  SetCount(unknown, count, count - 1, count > 0, "MID_Sys_Remaining");
}

void BattleInfoWindow::SetEquipVisible(bool visible) {
  layout_.SetPaneVisible("L_Target_EquipOne", visible);
  layout_.SetPaneVisible("L_Target_Equip00", visible);
  layout_.SetPaneVisible("L_Target_Equip01", visible);
}

void BattleInfoWindow::Reset() {
  opened_ = false;
  unknown_c1_ = false;
  unknown_c2_ = false;
  unknown_e0_ = false;
  unknown_e1_ = false;
  unknown_e2_ = false;
  unknown_128_ = false;
  player_flag_ = false;
}

void* BattleInfoWindow::GetUnknown120() const {
  return unknown_120_;
}

const char* BattleInfoWindow::GetFadeName(uint8_t out) const {
  return out != 0 ? "Out" : "In";
}

void BattleInfoWindow::Hide() {
  Close();
}

void BattleInfoWindow::Show() {
  Open();
}

}

#pragma GCC visibility pop

}
