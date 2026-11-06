#include <algorithm>
#include <cstdint>
#include <optional>
#include <string>

#include "game/game_mode_data.hpp"
#include "game/map/script_singletons.hpp"
#include "game/menu/unit_command_menu_item.hpp"
#include "game/unit_item.hpp"
#include "game/unit_pool.hpp"

namespace game::map {

#pragma GCC visibility push(hidden)

// The command target the items check before they are decidable.
class VTarget {
public:
  // The access info of the only target, a cell and the trick on it.
  struct Access {
    uint8_t kind;
    int8_t x;
    int8_t z;
    uint8_t unknown_03_[0x3];
    int16_t trick;
    uint32_t unknown_08_;
  };

  virtual ~VTarget();
  virtual void Unknown02();
  virtual bool IsValid();

  void Setup(Unit* unit, uint8_t command, const void* option = nullptr);

  void SetKey(const Data* data) {
    key_.index = data != nullptr ? data->index : 0;
  }

  void SetTrick(int trick) {
    trick_ = trick;
  }

  bool HasSingleAccess() const {
    return access_count_ == 1;
  }

  const Access& GetAccess() const {
    return access_;
  }

  void ClearKey() {
    key_.index = 0;
  }

private:
  uint8_t unknown_08_[0x20];
  SkillKey key_;
  int trick_;
  uint8_t unknown_30_[0xc];
  Access access_;
  uint8_t unknown_48_[0x2ff4];
  int access_count_;
};

class Target : public Singleton<Target>, public VTarget {};

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
  virtual bool Unknown83() { return Unknown78(); }
  virtual bool Unknown84() { return true; }
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
    SkillKey skill_;
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

bool UnitMenuItem::Unknown79() {
  return Unknown77(Target::GetInstance());
}

void UnitMenuItem::Unknown81() {
  if (Unknown76() != 0) {
    Unknown75(Unknown83());
  }
}

void UnitMenuItem::Unknown82() {
  if (Unknown76() != 0) {
    active_ = Unknown84();
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
  bool Unknown83() override;
  bool Unknown84() override;
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

class UnitSkillMenuItem : public UnitMenuItem {
public:
  const Data* Unknown72() override;
  bool Unknown84() override;
  virtual int Unknown86() = 0;
};

class SpecialMenuItem : public UnitSkillMenuItem {
public:
  SpecialMenuItem();

  const char* GetMid() override { return "MID_BtlMenu_Special"; }
  int ACall() override;
  void Unknown70() override;
  uint8_t Unknown76() override { return 6; }
  int Unknown80() override { return 15; }
  bool Unknown83() override;
  bool Unknown84() override;
  int Unknown86() override { return 3; }
};

[[gnu::used]] SpecialMenuItem::SpecialMenuItem() = default;

class PollutionMenuItem : public UnitSkillMenuItem {
public:
  PollutionMenuItem();

  const char* GetMid() override { return "MID_BtlMenu_SpecialGauge"; }
  void OnClose() override;
  void Unknown70() override;
  uint8_t Unknown76() override { return 6; }
  int Unknown80() override { return 24; }
  bool Unknown83() override;
  bool Unknown84() override { return true; }
  void Unknown85() override;
  int Unknown86() override { return 3; }
};

[[gnu::used]] PollutionMenuItem::PollutionMenuItem() = default;

class ArtsMenuItem : public UnitSkillMenuItem {
public:
  ArtsMenuItem();

  const char* GetMid() override { return "MID_BtlMenu_Arts"; }
  int ACall() override;
  uint8_t Unknown76() override { return 5; }
  int Unknown80() override { return 14; }
  bool Unknown83() override;
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
  void Unknown70() override;
};

class GambitMenuItem : public UniqueSkillMenuItem {
public:
  GambitMenuItem();

  const char* GetMid() override { return "MID_BtlMenu_Gambit"; }
  uint8_t Unknown76() override { return 8; }
  bool Unknown83() override;
  void Unknown85() override;
  int Unknown86() override { return 5; }
};

[[gnu::used]] GambitMenuItem::GambitMenuItem() = default;

class RageMenuItem : public UniqueSkillMenuItem {
public:
  RageMenuItem();

  const char* GetMid() override { return "MID_BtlMenu_Rage"; }
  uint8_t Unknown76() override { return 9; }
  bool Unknown83() override;
  void Unknown85() override;
  int Unknown86() override { return 6; }
};

[[gnu::used]] RageMenuItem::RageMenuItem() = default;

class MorphMenuItem : public UnitSkillMenuItem {
public:
  MorphMenuItem();

  const char* GetMid() override { return "MID_BtlMenu_Morph"; }
  int ACall() override;
  uint8_t Unknown76() override { return 16; }
  int Unknown80() override { return 16; }
  bool Unknown83() override;
  bool Unknown84() override;
  int Unknown86() override { return 9; }
};

[[gnu::used]] MorphMenuItem::MorphMenuItem() = default;

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
  void Unknown70() override;
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
  void Unknown70() override;
  uint8_t Unknown76() override { return 28; }
  void Unknown81() override;
  bool Unknown84() override { return unknown_60_; }
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
  bool Unknown83() override;
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
      g_skill_file->At(skill_.index), 0x50);
  }

  const char* GetMid() override;
  int ACall() override;
  void Unknown70() override;
  uint8_t Unknown76() override { return 18; }
  bool Unknown77(VTarget* target) override;
  int Unknown80() override { return 24; }
  bool Unknown83() override;
  bool Unknown84() override;
  void Unknown85() override;
};

[[gnu::used]] DirectSkillMenuItem::DirectSkillMenuItem() = default;

void UnitMenuItem::Unknown85() {
  if (Unknown76() > 24 || ((1 << Unknown76()) & 0x1400404) == 0) {
    MapDrawManager* manager = g_map_draw_manager;
    manager->Request({
      .unit = Unknown71(),
      .unknown_31_ = true,
      .unknown_34_ = 1,
      .name = "UnitMenuNull",
    });
  }
  else {
    const uint8_t command = Unknown76();
    MapDrawManager::GetInstance()->Request({
      .unit = Unknown71(),
      .command = command,
      .unknown_31_ = true,
      .unknown_34_ = 1,
      .name = "UnitMenuItem_Mind",
    });
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

bool CannonMenuItem::Unknown84() {
  return Unknown78();
}

void CannonMenuItem::Unknown85() {
  g_map_draw_manager->Request({
    .unit = Unknown71(),
    .trick = Unknown73(),
    .unknown_31_ = true,
    .unknown_34_ = 32,
    .name = "CannonMenuItem",
  });
}

void AttackMenuItem::Unknown85() {
  MapDrawManager::GetInstance()->Request({
    .unit = Unknown71(),
    .unknown_31_ = true,
    .unknown_34_ = 10,
    .name = "AttackMenuItem",
  });
}

const Data* UnitSkillMenuItem::Unknown72() {
  return g_skill_file->At(skill_.index);
}

void PollutionMenuItem::OnClose() {
  GameMenuItem::OnClose();
  Unknown82();
}

bool PollutionMenuItem::Unknown83() {
  return skill_.index != 0 && Unknown78();
}

void PollutionMenuItem::Unknown85() {
  MapDrawManager::GetInstance()->Request({
    .unit = Unknown71(),
    .skill = SkillFile::GetInstance()->At(skill_.index),
    .unknown_31_ = true,
    .name = "PollutionMenuItem",
  });
}

void AssistMenuItem::Unknown85() {
  MapDrawManager::GetInstance()->Request({
    .unit = Unknown71(),
    .unknown_31_ = true,
    .unknown_34_ = 12,
    .name = "AssistMenuItem",
  });
}

void GambitMenuItem::Unknown85() {
  MapDrawManager::GetInstance()->Request({
    .unit = Unknown71(),
    .skill = g_skill_file->At(skill_.index),
    .command = Unknown76(),
    .unknown_31_ = true,
    .name = "GambitMenuItem",
  });
}

void RageMenuItem::Unknown85() {
  MapDrawManager::GetInstance()->Request({
    .unit = Unknown71(),
    .skill = g_skill_file->At(skill_.index),
    .command = Unknown76(),
    .unknown_31_ = true,
    .name = "RageMenuItem",
  });
}

bool MorphMenuItem::Unknown84() {
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
  MapDrawManager::GetInstance()->Request({
    .unit = Unknown71(),
    .trick = Unknown73(),
    .command = 30,
    .unknown_31_ = true,
    .unknown_34_ = 1,
    .name = "GimmickMenuItem",
  });
}

void WarpMenuItem::Unknown85() {
  MapDrawManager::GetInstance()->Request({
    .unit = Unknown71(),
    .command = Unknown76(),
    .unknown_31_ = true,
    .unknown_34_ = 17,
    .name = "WarpMenuItem",
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
  MapDrawManager::GetInstance()->Request({
    .unit = unit,
    .job = dismounted != nullptr ? job : nullptr,
    .unknown_31_ = true,
    .unknown_34_ = 1,
    .name = "RideMenuItem",
  });
}

int TransportMenuItem::ACall() {
  return Decide(19);
}

void TransportMenuItem::Unknown85() {
  MapDrawManager::GetInstance()->Request({
    .unit = Unknown71(),
    .unknown_31_ = true,
    .unknown_34_ = 17,
    .name = "UnitMenuItem_SelfPos",
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
  MapDrawManager::GetInstance()->Request({
    .unit = Unknown71(),
    .unknown_31_ = true,
    .unknown_34_ = 17,
    .name = "UnitMenuItem_SelfPos",
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
  if (skill_.index == 0) {
    return false;
  }
  target->Setup(Unknown71(), Unknown76());
  target->SetKey(g_skill_file->At(skill_.index));
  return target->IsValid();
}

// The uses left, kinds 5 and 6 add the extra levels.
bool DirectSkillMenuItem::Unknown83() {
  const SkillData* data = g_skill_file->At(skill_.index);
  const uint8_t kind = SkillRow::GetKind(data);
  const int extra = kind - 5u < 2 ? skill_.extra : 0;
  const int uses = extra - skill_.level + SkillRow::GetUses(data);
  return skill_.index != 0 || uses > 0;
}

void DirectSkillMenuItem::Unknown85() {
  MapDrawManager::GetInstance()->Request({
    .unit = Unknown71(),
    .skill = g_skill_file->At(skill_.index),
    .command = Unknown76(),
    .unknown_31_ = true,
    .name = "DirectSkillMenuItem",
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
