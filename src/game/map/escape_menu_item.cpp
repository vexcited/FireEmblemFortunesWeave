#include <algorithm>
#include <bit>
#include <cstdint>
#include <optional>
#include <string>

#include "game/game_mode_data.hpp"
#include "game/map/script_singletons.hpp"
#include "game/map/target.hpp"
#include "game/menu/unit_command_menu_item.hpp"
#include "game/unit_item.hpp"
#include "game/unit_pool.hpp"

namespace game::map {

#pragma GCC visibility push(hidden)

// Any target of the command can be selected, the closures of this file
// inline it.
bool ITarget::CanSelectable() const {
  bool found = false;
  Each([&found](const TargetData&) {
    found = true;
  });
  return found;
}

class MapDrawManager : public Singleton<MapDrawManager> {
public:
  // What the map shows around the unit while a command item is selected.
  struct UnitMenuRequest {
    Unit* unit = nullptr;
    std::optional<const void*> unknown_08_;
    const SkillData* skill = nullptr;
    const TrickData* trick = nullptr;
    const JobData* job = nullptr;
    uint8_t command = 0;
    bool unknown_31_ = false;
    int unknown_34_ = 0;
    std::string name;
  };

  void Request(const UnitMenuRequest& request);

  int GetUnknown1114() const {
    return unknown_1114_;
  }

  void SetUnknown1114(int value) {
    unknown_1114_ = value;
  }

private:
  uint8_t unknown_08_[0x110c];
  int unknown_1114_;
};

// The human phase of the map sequence, the menu picks its next label.
class MapSeqHuman : public Singleton<MapSeqHuman> {
public:
  static void SetLabel(int label) {
    if (instance_ != nullptr) {
      instance_->label_ = label;
    }
  }

private:
  uint8_t unknown_08_[0x90];
  int label_;
};

// The index of the last decided unit menu item.
extern int g_unit_menu_index;

// Whether the unit has items to use, read out of line.
bool Unknown15e09d0(const Unit* unit);
bool Unknown752f80(const Unit* unit, const SkillData* data);

// Direct skills wait while this variable counts turns.
extern const HashedString g_gimmick_argument;

// Some items read the instances through the global offset table.
[[gnu::visibility("default")]] extern Mind* g_mind;
[[gnu::visibility("default")]] extern Target* g_target;
[[gnu::visibility("default")]] extern Trick* g_trick;
[[gnu::visibility("default")]] extern MapDrawManager* g_map_draw_manager;

namespace {

class UnitMenuItem : public menu::UnitCommandMenuItem {
public:
  UnitMenuItem();

  void OnSelect() override;
  void OnDeselect() override;
  int ACall() override;
  int BCall() override;
  virtual Unit* Unknown71();
  virtual const Data* Unknown72() { return nullptr; }
  virtual const TrickData* Unknown73() { return nullptr; }
  virtual bool Unknown74();
  virtual void Unknown75(bool decidable);
  virtual uint8_t Unknown76() { return 0; }
  virtual bool Unknown77(VTarget* target);
  virtual bool Unknown78();
  virtual bool Unknown79();
  virtual int Unknown80() { return 0; }
  virtual void Unknown81();
  virtual void Unknown82();
  virtual bool GetCheckVisible() { return Unknown78(); }
  virtual bool GetCheckEnable() { return true; }
  virtual void Unknown85();

protected:
  // Moves the mind to the unit and sets the command of the item.
  void SetMindCommand() {
    Mind* mind = g_mind;
    if (const Unit* unit = Unknown71()) {
      mind->SetPos(unit->GetX(), unit->GetZ());
    }
    g_mind->SetCommand(Unknown76());
  }

  int Decide(int label) {
    MapSeqHuman::SetLabel(label);
    g_unit_menu_index = index_;
    return 2;
  }

  uint8_t unknown_53_;
  union {
    UnitSkill skill_;
    VTarget::Access access_;
  };
};

[[gnu::used]] UnitMenuItem::UnitMenuItem() = default;

void UnitMenuItem::OnSelect() {
  GameMenuItem::OnSelect();
  Unknown16ef450();
  if (MapDrawManager::GetInstance() != nullptr) {
    Unknown85();
  }
}

void UnitMenuItem::OnDeselect() {
  GameMenuItem::OnDeselect();
}

int UnitMenuItem::ACall() {
  if (Unknown80() == 0 || !Unknown79()) {
    return 1;
  }
  SetMindCommand();
  return Decide(Unknown80());
}

int UnitMenuItem::BCall() {
  const Mind* mind = Mind::GetInstance();
  if (mind->IsCommandPending()) {
    return 3;
  }
  const uint64_t flags = mind->GetFlags();
  if (flags & 0xc000) {
    return (flags & 0x10) && (flags & 0x60c) ? 1 : 3;
  }
  return flags & 0x83e1d ? 1 : 3;
}

Unit* UnitMenuItem::Unknown71() {
  const uint8_t& unit = Mind::GetInstance()->GetUnit();
  return unit != 0 ? UnitPool::Get(unit) : nullptr;
}

bool UnitMenuItem::Unknown74() {
  return Mind::GetInstance()->CanCommand(Unknown76());
}

void UnitMenuItem::Unknown75(bool decidable) {
  decidable_ = decidable && Unknown74();
}

bool UnitMenuItem::Unknown77(VTarget* target) {
  if (Unknown76() == 0) {
    return false;
  }
  target->Setup(Unknown71(), Unknown76());
  target->SetKey(Unknown72());
  const TrickData* trick = Unknown73();
  target->SetTrick(trick != nullptr ? trick->GetIndex() : -1);
  return target->IsValid();
}

bool UnitMenuItem::Unknown78() {
  ITarget target(Unknown71(), Unknown76());
  target.SetKey(Unknown72());
  const TrickData* trick = Unknown73();
  target.SetTrick(trick != nullptr ? trick->GetIndex() : -1);
  return target.IsValid();
}

bool UnitMenuItem::Unknown79() {
  return Unknown77(Target::GetInstance());
}

void UnitMenuItem::Unknown81() {
  if (Unknown76() != 0) {
    Unknown75(GetCheckVisible());
  }
}

void UnitMenuItem::Unknown82() {
  if (Unknown76() != 0) {
    active_ = GetCheckEnable();
  }
}

class IAccessMenuItem : public UnitMenuItem {
public:
  int ACall() override;
  const TrickData* Unknown73() override;
  bool Unknown77(VTarget* target) override;
  void Unknown81() override;
};

int IAccessMenuItem::ACall() {
  if (!IsActive() || !Unknown79()) {
    return 1;
  }
  SetMindCommand();
  g_mind->SetTarget(access_.x, access_.z);
  return Decide(24);
}

const TrickData* IAccessMenuItem::Unknown73() {
  if (access_.trick < 0) {
    return nullptr;
  }
  return g_trick->GetMap()->Get(access_.trick);
}

bool IAccessMenuItem::Unknown77(VTarget* target) {
  const uint8_t command = Unknown76();
  target->Setup(Unknown71(), command);
  if (!target->IsValid() || !target->HasSingleAccess()) {
    return false;
  }
  access_ = target->GetAccess();
  return true;
}

void IAccessMenuItem::Unknown81() {
  Unknown75(Unknown77(g_target));
}

class EscapeMenuItem : public IAccessMenuItem {
public:
  EscapeMenuItem();

  const char* GetMid() override { return "MID_BtlMenu_Secede"; }
  uint8_t Unknown76() override { return 22; }
};

[[gnu::used]] EscapeMenuItem::EscapeMenuItem() = default;

class TalkMenuItem : public UnitMenuItem {
public:
  TalkMenuItem();

  const char* GetMid() override { return "MID_BtlMenu_Talk"; }
  uint8_t Unknown76() override { return 2; }
  int Unknown80() override { return 20; }
  void Unknown81() override;
};

[[gnu::used]] TalkMenuItem::TalkMenuItem() = default;

class CannonMenuItem : public UnitMenuItem {
public:
  CannonMenuItem();

  const char* GetMid() override { return "MID_BtlMenu_Cannon"; }
  const TrickData* Unknown73() override;
  uint8_t Unknown76() override { return 27; }
  int Unknown80() override { return 24; }
  bool GetCheckVisible() override;
  bool GetCheckEnable() override;
  void Unknown85() override;
};

[[gnu::used]] CannonMenuItem::CannonMenuItem() = default;

class AttackMenuItem : public UnitMenuItem {
public:
  AttackMenuItem();

  const char* GetMid() override { return "MID_BtlMenu_Attack"; }
  uint8_t Unknown76() override { return 3; }
  int Unknown80() override { return 21; }
  void Unknown85() override;
};

[[gnu::used]] AttackMenuItem::AttackMenuItem() = default;

// Pollution skills are special skills of the categories 33 and 34.
bool IsPollutionSkill(const SkillData* data) {
  return data != nullptr && SkillRow::GetKind(data) == 3 &&
    RowReader<SkillData>::Read<uint8_t>(data, 0xfa) - 33u < 2;
}

// The skill can still be used, skills without uses are never used up.
bool HasUsesLeft(const UnitSkill& skill) {
  const SkillData* data = skill.GetSharedData();
  const uint8_t kind = SkillRow::GetKind(data);
  const int uses = SkillRow::GetUses(data);
  const int extra = kind - 5u < 2 ? skill.GetExtra() : 0;
  if (extra == 0 && uses == 0) {
    return true;
  }
  return uses - skill.GetLevel() + extra > 0;
}

class UnitSkillMenuItem : public UnitMenuItem {
public:
  const Data* Unknown72() override;

  bool GetCheckEnable() override {
    bool enable = false;
    EachSkill([&enable, this](const UnitSkill& skill) {
      if (enable || skill.GetIndex() == 0) {
        return;
      }
      if (!g_mind->CanUseSkill(skill.GetSharedData())) {
        return;
      }
      ITarget target(Unknown71(), Unknown76());
      target.SetKey(skill.GetSharedData());
      enable |= target.CanSelectable();
    });
    return enable;
  }

  virtual int Unknown86() = 0;

protected:
  void EachSkill(const std::function<void(const UnitSkill&)>& callback) {
    Unit* unit = Unknown71();
    const uint16_t kinds = 1 << Unknown86();
    unit->GetSkillList(4).EachIndirectSkill(kinds, callback);
  }

  // Keeps the last skill of the unit the filter accepts.
  void GetUniqueSkill(const std::function<bool(const UnitSkill&)>& filter) {
    EachSkill([&filter, this](const UnitSkill& skill) {
      if (filter(skill)) {
        skill_ = skill;
      }
    });
  }
};

class SpecialMenuItem : public UnitSkillMenuItem {
public:
  SpecialMenuItem();

  const char* GetMid() override { return "MID_BtlMenu_Special"; }
  int ACall() override;
  void Unknown70(menu::InfoDetailArgs* args) override;
  uint8_t Unknown76() override { return 6; }
  int Unknown80() override { return 15; }
  bool GetCheckVisible() override;

  // The first selectable skill becomes the skill of the item.
  bool GetCheckEnable() override {
    bool enable = false;
    const SkillKey key = {g_shared_system_skills[55].index};
    if (HasSkill(Unknown71()->GetSkillList(7), key)) {
      EachSkill([&enable, this](const UnitSkill& skill) {
        if (skill.GetIndex() == 0 ||
          IsPollutionSkill(skill.GetSharedData())) {
          return;
        }
        ITarget target(Unknown71(), Unknown76());
        target.SetKey(skill.GetSharedData());
        enable |= target.CanSelectable();
        if (skill_.GetIndex() == 0 && enable) {
          skill_ = skill;
        }
      });
    }
    return enable;
  }

  int Unknown86() override { return 3; }
};

[[gnu::used]] SpecialMenuItem::SpecialMenuItem() = default;

class PollutionMenuItem : public UnitSkillMenuItem {
public:
  [[gnu::used]] PollutionMenuItem() {
    GetUniqueSkill([](const UnitSkill& skill) {
      return IsPollutionSkill(skill.GetSharedData());
    });
  }

  const char* GetMid() override { return "MID_BtlMenu_SpecialGauge"; }
  void OnClose() override;
  void Unknown70(menu::InfoDetailArgs* args) override;
  uint8_t Unknown76() override { return 6; }
  int Unknown80() override { return 24; }
  bool GetCheckVisible() override;
  bool GetCheckEnable() override { return true; }
  void Unknown85() override;
  int Unknown86() override { return 3; }
};


class ArtsMenuItem : public UnitSkillMenuItem {
public:
  ArtsMenuItem();

  const char* GetMid() override { return "MID_BtlMenu_Arts"; }
  int ACall() override;
  uint8_t Unknown76() override { return 5; }
  int Unknown80() override { return 14; }

  bool GetCheckVisible() override {
    if (Unknown71()->GetSize() > 1) {
      return false;
    }
    bool visible = false;
    EachSkill([&visible](const UnitSkill& skill) {
      if (!visible && skill.GetIndex() != 0 &&
        g_mind->CanUseSkill(skill.GetSharedData())) {
        visible = true;
      }
    });
    return visible;
  }

  int Unknown86() override { return 2; }
};

[[gnu::used]] ArtsMenuItem::ArtsMenuItem() = default;

class AssistMenuItem : public UnitMenuItem {
public:
  AssistMenuItem();

  const char* GetMid() override { return "MID_BtlMenu_Assist"; }
  uint8_t Unknown76() override { return 4; }
  int Unknown80() override { return 22; }
  void Unknown85() override;
};

[[gnu::used]] AssistMenuItem::AssistMenuItem() = default;

class UniqueSkillMenuItem : public UnitSkillMenuItem {
public:
  int ACall() override;
  void Unknown70(menu::InfoDetailArgs* args) override;

  bool GetCheckVisible() override {
    bool visible = false;
    EachSkill([&visible](const UnitSkill& skill) {
      if (skill.GetIndex() != 0) {
        visible |= HasUsesLeft(skill);
      }
    });
    return visible;
  }
};

class GambitMenuItem : public UniqueSkillMenuItem {
public:
  [[gnu::used]] GambitMenuItem() {
    GetUniqueSkill([](const UnitSkill&) { return true; });
  }

  const char* GetMid() override { return "MID_BtlMenu_Gambit"; }
  uint8_t Unknown76() override { return 8; }
  void Unknown85() override;
  int Unknown86() override { return 5; }
};


class RageMenuItem : public UniqueSkillMenuItem {
public:
  [[gnu::used]] RageMenuItem() {
    GetUniqueSkill([](const UnitSkill&) { return true; });
  }

  const char* GetMid() override { return "MID_BtlMenu_Rage"; }
  uint8_t Unknown76() override { return 9; }

  // Mounted units can't rage.
  bool GetCheckVisible() override {
    if (Unknown71()->HasState(0x40000)) {
      return false;
    }
    return UniqueSkillMenuItem::GetCheckVisible();
  }

  void Unknown85() override;
  int Unknown86() override { return 6; }
};


class MorphMenuItem : public UnitSkillMenuItem {
public:
  [[gnu::used]] MorphMenuItem() {
    GetUniqueSkill([this](const UnitSkill& skill) {
      const SkillData* data = skill.GetSharedData();
      if (!Mind::GetInstance()->CanUseSkill(data)) {
        return false;
      }
      ITarget target(Unknown71(), Unknown76());
      target.SetKey(data);
      const TrickData* trick = Unknown73();
      target.SetTrick(trick != nullptr ? trick->GetIndex() : -1);
      return target.IsValid();
    });
  }

  const char* GetMid() override { return "MID_BtlMenu_Morph"; }
  int ACall() override;
  uint8_t Unknown76() override { return 16; }
  int Unknown80() override { return 16; }

  // Units already in a class job can't morph.
  bool GetCheckVisible() override {
    if (Unknown71()->GetClassJob() != nullptr) {
      return false;
    }
    bool visible = false;
    EachSkill([&visible](const UnitSkill& skill) {
      if (skill.GetIndex() == 0) {
        return;
      }
      const SkillData* data = skill.GetSharedData();
      const int extra =
        SkillRow::GetKind(data) - 5u < 2 ? skill.GetExtra() : 0;
      if (extra - skill.GetLevel() + SkillRow::GetUses(data) > 0) {
        visible = true;
      }
    });
    return visible;
  }

  bool GetCheckEnable() override;
  int Unknown86() override { return 9; }
};


class TreasureboxMenuItem : public IAccessMenuItem {
public:
  TreasureboxMenuItem();

  const char* GetMid() override { return "MID_BtlMenu_Treasurebox"; }
  uint8_t Unknown76() override { return 24; }
};

[[gnu::used]] TreasureboxMenuItem::TreasureboxMenuItem() = default;

class GimmickMenuItem : public IAccessMenuItem {
public:
  GimmickMenuItem();

  const char* GetMid() override;
  void Unknown70(menu::InfoDetailArgs* args) override;
  uint8_t Unknown76() override { return 26; }
  void Unknown81() override;
  void Unknown82() override;
  void Unknown85() override;

private:
  bool unknown_60_;
};

[[gnu::used]] GimmickMenuItem::GimmickMenuItem() = default;

class WarpMenuItem : public IAccessMenuItem {
public:
  WarpMenuItem();

  const char* GetMid() override { return "MID_BtlMenu_Warp"; }
  void Unknown70(menu::InfoDetailArgs* args) override;
  uint8_t Unknown76() override { return 28; }
  void Unknown81() override;
  bool GetCheckEnable() override { return unknown_60_; }
  void Unknown85() override;

private:
  bool unknown_60_;
};

[[gnu::used]] WarpMenuItem::WarpMenuItem() = default;

class UnitMindMenuItem : public UnitMenuItem {};

class RideMenuItem : public UnitMindMenuItem {
public:
  RideMenuItem();

  const char* GetMid() override;
  int ACall() override;
  uint8_t Unknown76() override;
  void Unknown81() override;
  void Unknown82() override;
  void Unknown85() override;
};

[[gnu::used]] RideMenuItem::RideMenuItem() = default;

class ItemMenuItem : public UnitMenuItem {
public:
  ItemMenuItem();

  const char* GetMid() override { return "MID_BtlMenu_Item"; }
  int ACall() override;
  void Unknown81() override;
  bool GetCheckVisible() override;
  void Unknown85() override;
};

[[gnu::used]] ItemMenuItem::ItemMenuItem() = default;

class TransportMenuItem : public UnitMenuItem {
public:
  TransportMenuItem();

  const char* GetMid() override { return "MID_BtlMenu_Transport"; }
  int ACall() override;
  void Unknown81() override;
  void Unknown85() override;
};

[[gnu::used]] TransportMenuItem::TransportMenuItem() = default;

class TradeMenuItem : public UnitMenuItem {
public:
  TradeMenuItem();

  const char* GetMid() override { return "MID_BtlMenu_Trade"; }
  uint8_t Unknown76() override { return 10; }
  int Unknown80() override { return 24; }
  void Unknown81() override;
};

[[gnu::used]] TradeMenuItem::TradeMenuItem() = default;

class FixedMenuItem : public UnitMenuItem {
public:
  FixedMenuItem();

  const char* GetMid() override { return "MID_BtlMenu_Fixed"; }
  int ACall() override;
  void Unknown85() override;
};

[[gnu::used]] FixedMenuItem::FixedMenuItem() = default;

class DirectSkillMenuItem : public UnitMenuItem {
public:
  DirectSkillMenuItem();

  const char* GetSkillMid() {
    return RowReader<SkillData>::Read<const char*>(
      g_skill_file->At(skill_.GetIndex()), 0x50);
  }

  const char* GetMid() override;
  int ACall() override;
  void Unknown70(menu::InfoDetailArgs* args) override;
  uint8_t Unknown76() override { return 18; }
  bool Unknown77(VTarget* target) override;
  int Unknown80() override { return 24; }
  bool GetCheckVisible() override;
  bool GetCheckEnable() override;
  void Unknown85() override;
};

[[gnu::used]] DirectSkillMenuItem::DirectSkillMenuItem() = default;

// Talk, trade, escape and treasure chests show the mind around the unit.
void UnitMenuItem::Unknown85() {
  switch (Unknown76()) {
    case 2:
    case 10:
    case 22:
    case 24: {
      const uint8_t command = Unknown76();
      const std::string name = "UnitMenuItem_Mind";
      MapDrawManager::GetInstance()->Request({
        .unit = Unknown71(),
        .command = command,
        .unknown_31_ = true,
        .unknown_34_ = 1,
        .name = name,
      });
      break;
    }
    default: {
      MapDrawManager* manager = g_map_draw_manager;
      const std::string name = "UnitMenuNull";
      manager->Request({
        .unit = Unknown71(),
        .unknown_31_ = true,
        .unknown_34_ = 1,
        .name = name,
      });
      break;
    }
  }
}

void TalkMenuItem::Unknown81() {
  if (g_mind->CanCommand(2)) {
    UnitMenuItem::Unknown81();
  }
  else {
    decidable_ = false;
  }
}

const TrickData* CannonMenuItem::Unknown73() {
  const TrickMap* map = g_trick->GetMap();
  const Mind* mind = g_mind;
  const TrickData* trick =
    map->FindOnLayer(2, mind->GetPosX(), mind->GetPosZ());
  if (trick == nullptr || trick->GetType() != 6) {
    return nullptr;
  }
  return trick;
}

bool CannonMenuItem::GetCheckVisible() {
  const TrickData* trick = Unknown73();
  return trick != nullptr && trick->Unknown74(Unknown71());
}

bool CannonMenuItem::GetCheckEnable() {
  return Unknown78();
}

void CannonMenuItem::Unknown85() {
  const std::string name = "CannonMenuItem";
  g_map_draw_manager->Request({
    .unit = Unknown71(),
    .trick = Unknown73(),
    .unknown_31_ = true,
    .unknown_34_ = 32,
    .name = name,
  });
}

void AttackMenuItem::Unknown85() {
  const std::string name = "AttackMenuItem";
  MapDrawManager::GetInstance()->Request({
    .unit = Unknown71(),
    .unknown_31_ = true,
    .unknown_34_ = 10,
    .name = name,
  });
}

const Data* UnitSkillMenuItem::Unknown72() {
  return g_skill_file->At(skill_.GetIndex());
}

// Single cell units of the pollutable forces, unless pollution is banned.
bool SpecialMenuItem::GetCheckVisible() {
  if (Unknown71()->GetSize() > 1) {
    return false;
  }
  const SkillKey key = {g_shared_system_skills[55].index};
  if (!HasSkill(Unknown71()->GetSkillList(7), key)) {
    return false;
  }
  if (((1 << Unknown71()->GetForceType()) & 0xf1) == 0) {
    return false;
  }
  return !GameModeData::IsVariableSet(GetBanVariable(BanVariable::kPollution));
}

// Units that would end their turn get warned first.
void SpecialMenuItem::Unknown70(menu::InfoDetailArgs* args) {
  const SkillKey key = {g_shared_system_skills[143].index};
  if (HasSkill(Unknown71()->GetSkillList(7), key)) {
    args->warning.Assign("MID_BtlMenu_Warning_TurnEnd");
  }
}

void PollutionMenuItem::Unknown70(menu::InfoDetailArgs* args) {
  if (skill_.GetIndex() == 0) {
    return;
  }
  args->unit = Unknown71();
  args->skill = skill_;
  args->kind = 3;
}

void UniqueSkillMenuItem::Unknown70(menu::InfoDetailArgs* args) {
  if (skill_.GetIndex() == 0) {
    return;
  }
  const Unit* unit = Unknown71();
  const int kind = Unknown86();
  args->unit = unit;
  args->skill = skill_;
  args->kind = kind;
}

void PollutionMenuItem::OnClose() {
  GameMenuItem::OnClose();
  Unknown82();
}

bool PollutionMenuItem::GetCheckVisible() {
  return skill_.GetIndex() != 0 && Unknown78();
}

void PollutionMenuItem::Unknown85() {
  const std::string name = "PollutionMenuItem";
  MapDrawManager::GetInstance()->Request({
    .unit = Unknown71(),
    .skill = SkillFile::GetInstance()->At(skill_.GetIndex()),
    .unknown_31_ = true,
    .name = name,
  });
}

void AssistMenuItem::Unknown85() {
  const std::string name = "AssistMenuItem";
  MapDrawManager::GetInstance()->Request({
    .unit = Unknown71(),
    .unknown_31_ = true,
    .unknown_34_ = 12,
    .name = name,
  });
}

void GambitMenuItem::Unknown85() {
  const std::string name = "GambitMenuItem";
  MapDrawManager::GetInstance()->Request({
    .unit = Unknown71(),
    .skill = g_skill_file->At(skill_.GetIndex()),
    .command = Unknown76(),
    .unknown_31_ = true,
    .name = name,
  });
}

void RageMenuItem::Unknown85() {
  const std::string name = "RageMenuItem";
  MapDrawManager::GetInstance()->Request({
    .unit = Unknown71(),
    .skill = g_skill_file->At(skill_.GetIndex()),
    .command = Unknown76(),
    .unknown_31_ = true,
    .name = name,
  });
}

bool MorphMenuItem::GetCheckEnable() {
  return Unknown78();
}

const char* GimmickMenuItem::GetMid() {
  const TrickData* trick = Unknown73();
  if (trick == nullptr) {
    return nullptr;
  }
  const TerrainData* data = trick->GetData();
  if (data == nullptr) {
    return nullptr;
  }
  const char* mid = RowReader<TerrainData>::Read<const char*>(data, 0xc8);
  return mid != nullptr && *mid != '\0' ? mid : "";
}

void GimmickMenuItem::Unknown82() {
  active_ = unknown_60_;
}

void GimmickMenuItem::Unknown85() {
  const std::string name = "GimmickMenuItem";
  MapDrawManager::GetInstance()->Request({
    .unit = Unknown71(),
    .trick = Unknown73(),
    .command = 30,
    .unknown_31_ = true,
    .unknown_34_ = 1,
    .name = name,
  });
}

void WarpMenuItem::Unknown85() {
  const std::string name = "WarpMenuItem";
  MapDrawManager::GetInstance()->Request({
    .unit = Unknown71(),
    .command = Unknown76(),
    .unknown_31_ = true,
    .unknown_34_ = 17,
    .name = name,
  });
}

// The dismounted form of the job, kept by the mounted one.
const JobData* GetDismountedJob(const JobData* job) {
  return RowReader<JobData>::Read<const JobData*>(job, 0x58);
}

const char* RideMenuItem::GetMid() {
  return Unknown71()->IsMounted() ? "MID_BtlMenu_RideOff" :
    "MID_BtlMenu_RideOn";
}

int RideMenuItem::ACall() {
  if (!IsActive()) {
    return 1;
  }
  g_mind->SetCommand(Unknown76());
  return Decide(26);
}

uint8_t RideMenuItem::Unknown76() {
  return Unknown71()->IsMounted() ? 13 : 12;
}

void RideMenuItem::Unknown81() {
  const Unit* unit = Unknown71();
  const JobData* job = unit->GetBaseJob();
  const JobData* dismounted = GetDismountedJob(job);
  if (!unit->HasState(0x40000)) {
    job = dismounted;
  }
  decidable_ = dismounted != nullptr && job != nullptr;
}

void RideMenuItem::Unknown82() {
  active_ = Unknown74();
}

void RideMenuItem::Unknown85() {
  Unit* unit = Unknown71();
  const Unit* rider = Unknown71();
  const JobData* job = rider->GetBaseJob();
  const JobData* dismounted = GetDismountedJob(job);
  if (!rider->HasState(0x40000)) {
    job = dismounted;
  }
  const std::string name = "RideMenuItem";
  MapDrawManager::GetInstance()->Request({
    .unit = unit,
    .job = dismounted != nullptr ? job : nullptr,
    .unknown_31_ = true,
    .unknown_34_ = 1,
    .name = name,
  });
}

int ItemMenuItem::ACall() {
  return Decide(17);
}

void ItemMenuItem::Unknown81() {
  Unknown75(GetCheckVisible());
}

bool ItemMenuItem::GetCheckVisible() {
  return Unknown15e09d0(Unknown71());
}

void ItemMenuItem::Unknown85() {
  const std::string name = "UnitMenuItem_SelfPos";
  MapDrawManager::GetInstance()->Request({
    .unit = Unknown71(),
    .unknown_31_ = true,
    .unknown_34_ = 17,
    .name = name,
  });
}

int TransportMenuItem::ACall() {
  return Decide(19);
}

void TransportMenuItem::Unknown85() {
  const std::string name = "UnitMenuItem_SelfPos";
  MapDrawManager::GetInstance()->Request({
    .unit = Unknown71(),
    .unknown_31_ = true,
    .unknown_34_ = 17,
    .name = name,
  });
}

int FixedMenuItem::ACall() {
  Mind* mind = g_mind;
  if (const Unit* unit = Unknown71()) {
    mind->SetPos(unit->GetX(), unit->GetZ());
  }
  g_mind->SetCommand(1);
  return Decide(26);
}

void FixedMenuItem::Unknown85() {
  const std::string name = "UnitMenuItem_SelfPos";
  MapDrawManager::GetInstance()->Request({
    .unit = Unknown71(),
    .unknown_31_ = true,
    .unknown_34_ = 17,
    .name = name,
  });
}

const char* DirectSkillMenuItem::GetMid() {
  const char* mid = GetSkillMid();
  return mid != nullptr && *mid != '\0' ? GetSkillMid() : nullptr;
}

int DirectSkillMenuItem::ACall() {
  if (!IsActive() || Unknown80() == 0 || !Unknown79()) {
    return 1;
  }
  SetMindCommand();
  return Decide(Unknown80());
}

bool DirectSkillMenuItem::Unknown77(VTarget* target) {
  if (skill_.GetIndex() == 0) {
    return false;
  }
  target->Setup(Unknown71(), Unknown76());
  target->SetKey(g_skill_file->At(skill_.GetIndex()));
  return target->IsValid();
}

// The uses left, kinds 5 and 6 add the extra levels.
bool DirectSkillMenuItem::GetCheckVisible() {
  const SkillData* data = g_skill_file->At(skill_.GetIndex());
  const uint8_t kind = SkillRow::GetKind(data);
  const int extra = kind - 5u < 2 ? skill_.GetExtra() : 0;
  const int uses = extra - skill_.GetLevel() + SkillRow::GetUses(data);
  return skill_.GetIndex() != 0 || uses > 0;
}

bool DirectSkillMenuItem::GetCheckEnable() {
  const GameVariable* wait = GameModeData::FindVariable(g_gimmick_argument);
  if (wait != nullptr && wait->value > 0) {
    return false;
  }
  ITarget target(Unknown71(), Unknown76());
  target.SetKey(g_skill_file->At(skill_.GetIndex()));
  return target.IsValid();
}

void DirectSkillMenuItem::Unknown85() {
  const std::string name = "DirectSkillMenuItem";
  MapDrawManager::GetInstance()->Request({
    .unit = Unknown71(),
    .skill = g_skill_file->At(skill_.GetIndex()),
    .command = Unknown76(),
    .unknown_31_ = true,
    .name = name,
  });
}

int SpecialMenuItem::ACall() {
  if (Unknown80() == 0) {
    return 1;
  }
  UnitMenuItem::Unknown77(g_target);
  SetMindCommand();
  return Decide(Unknown80());
}

int ArtsMenuItem::ACall() {
  if (Unknown80() == 0) {
    return 1;
  }
  UnitMenuItem::Unknown77(g_target);
  SetMindCommand();
  return Decide(Unknown80());
}

// Unique skills keep the map drawing at least once more.
int UniqueSkillMenuItem::ACall() {
  if (!IsActive() || !UnitMenuItem::Unknown77(g_target)) {
    return 1;
  }
  SetMindCommand();
  const int result = Decide(23);
  MapDrawManager* manager = MapDrawManager::GetInstance();
  manager->SetUnknown1114(std::max(manager->GetUnknown1114(), 1));
  return result;
}

int MorphMenuItem::ACall() {
  if (Unknown80() == 0) {
    return 1;
  }
  Unknown77(g_target);
  SetMindCommand();
  const int result = Decide(Unknown80());
  g_target->ClearKey();
  return result;
}

void WarpMenuItem::Unknown81() {
  const Unit* unit = Unknown71();
  Unknown75(unit != nullptr &&
    g_trick->FindAt(unit->GetX(), unit->GetZ()) != nullptr);
}

// Gimmicks are found through the access of command 30.
void GimmickMenuItem::Unknown81() {
  VTarget* target = g_target;
  target->Setup(Unknown71(), 30);
  bool found = false;
  if (target->IsValid() && target->HasSingleAccess()) {
    access_ = target->GetAccess();
    found = true;
  }
  Unknown75(found);
}

// Units without the transport skill check the skill row out of line.
void TransportMenuItem::Unknown81() {
  const HashedString& ban = GetBanVariable(static_cast<BanVariable>(13));
  if (!GameModeData::IsVariableSet(ban) &&
    GameModeData::GetInstance() != nullptr &&
    GameModeData::GetInstance()->GetMode() != GameModeData::kModeNone &&
    (g_mind->GetFlags() & 0x8) == 0) {
    const SkillKey key = {g_shared_system_skills[3].index};
    if (HasSkill(Unknown71()->GetSkillList(7), key)) {
      Unknown75(true);
    }
    else {
      // The row lookup takes the whole key as its index.
      const int raw = std::bit_cast<int>(g_shared_system_skills[3]);
      Unknown75(Unknown752f80(Unknown71(), g_skill_file->At(raw)));
    }
  }
  else {
    decidable_ = false;
  }
}

void TradeMenuItem::Unknown81() {
  const HashedString& ban = GetBanVariable(static_cast<BanVariable>(14));
  if (!GameModeData::IsVariableSet(ban) &&
    GameModeData::GetInstance() != nullptr &&
    GameModeData::GetInstance()->GetMode() != GameModeData::kModeNone &&
    (g_mind->GetFlags() & 0x4) == 0) {
    UnitMenuItem::Unknown81();
  }
  else {
    decidable_ = false;
  }
}

}

#pragma GCC visibility pop

}
