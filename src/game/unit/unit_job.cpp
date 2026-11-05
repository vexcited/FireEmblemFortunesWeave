#include "game/game_mode_data.hpp"
#include "game/random_seed.hpp"
#include "game/unit.hpp"
#include "game/unit_item.hpp"

namespace game {

#pragma GCC visibility push(hidden)

namespace {

struct JobRow : RowReader<JobData> {
  static uint8_t GetSize(const JobData* data) {
    return Read<uint8_t>(data, 0x1a1);
  }

  static const char* GetId(const JobData* data) {
    return Read<const char*>(data, 0x8);
  }

  static uint8_t GetUnknown30(const JobData* data) {
    return Read<uint8_t>(data, 0x30);
  }

  static int16_t GetBase(const JobData* data, int kind) {
    return Read<int16_t>(data, 0x120 + 2 * kind);
  }

  static const JobData* GetDismounted(const JobData* data) {
    return Read<const JobData*>(data, 0x58);
  }

  static int16_t GetLimitBonus(const JobData* data, int kind) {
    return Read<int16_t>(data, 0x136 + 2 * kind);
  }

  static int16_t GetLimit(const JobData* data, int kind) {
    return Read<int16_t>(data, 0x14c + 2 * kind);
  }
};

// Jobs whose link at 0x18 holds a mount at 0x458 keep their mounted form.
struct JobLink {
  uint8_t unknown_00_[0x458];
  const void* mount;
};

bool IsMountFixed(const JobData* job) {
  return JobRow::Read<const JobLink*>(job, 0x18)->mount != nullptr;
}

struct PersonRow : RowReader<PersonData> {
  static int16_t GetBase(const PersonData* data, int kind) {
    return Read<int16_t>(data, 0x1c2 + 2 * kind);
  }

  static int16_t GetGradeBonus(const PersonData* data, int grade, int kind) {
    return Read<int16_t>(data, 0x1d8 + 22 * grade + 2 * kind);
  }

  static int16_t GetLimit(const PersonData* data, int kind) {
    return Read<int16_t>(data, 0x232 + 2 * kind);
  }
};

}

// Each order lists the parameter read for each kind, some swap the strength
// with the technique or the magic with the resistance.
extern const uint8_t* const g_param_orders[];
extern const int g_param_minimums[UnitParams::kCount];

const char* GetJobName(const JobData* job, const PersonData* const& person);

bool HasSkill(const Unit::SkillList& list, const SkillKey& key) {
  return list.Contains(key.index) && HasActiveSkill(key, list);
}

namespace {

constexpr int kSkillPollutionGuard = 119;
constexpr int kSkillImmobile = 16;
constexpr int kSkillLock = 17;
constexpr int kSkillDownLock = 81;
constexpr int kSkillMountLock = 109;
constexpr int kSkillUnknown19 = 19;
constexpr int kSkillUnknown45 = 45;
constexpr int kSkillUnknown56 = 56;

constexpr int kSkillPollutionBoost = 55;
constexpr int kSkillPollutionBlock = 48;
constexpr int kSkillUnknown94 = 94;
constexpr int kSkillUnknown95 = 95;
constexpr int kSkillUnknown96 = 96;
constexpr int kSkillUnknown88 = 88;
constexpr int kSkillUnknown1 = 1;
constexpr int kSkillUnknown51 = 51;
constexpr int kSkillUnknown52 = 52;

// Players and the forces from 4 on can be polluted.
constexpr uint32_t kPollutableForces = 0xf1;

[[gnu::always_inline]] inline bool HasSystemSkill(
  const Unit::SkillList& list, int kind
) {
  const SkillKey key = {g_system_skills[kind].index};
  return HasSkill(list, key);
}

[[gnu::always_inline]] inline bool HasSharedSkill(
  const Unit::SkillList& list, int kind
) {
  const SkillKey key = {g_shared_system_skills[kind].index};
  return HasSkill(list, key);
}

constexpr SystemVariable kVariableBoostLimitAlly =
  static_cast<SystemVariable>(62);
constexpr SystemVariable kVariableBoostLimitEnemy =
  static_cast<SystemVariable>(63);

}

// The source of a skill the list holds.
[[gnu::always_inline]] inline uint32_t* FindSource(
  Unit::SkillList& list, uint32_t index
) {
  if (!list.Contains(index) || list.sources.empty()) {
    return nullptr;
  }

  int64_t found = -1;
  for (size_t i = 0; i < list.sources.size(); i++) {
    if (((list.sources[i] ^ index) & 0xfff) == 0) {
      found = i;
      break;
    }
  }
  if (found < 0) {
    return nullptr;
  }

  return &list.sources[static_cast<uint32_t>(found)];
}

// Map kinds 6 and 7 always dismount, kind 2 follows the unit.
[[gnu::always_inline]] const JobData* Unit::GetJob() const {
  if (class_job_ != nullptr) {
    return class_job_;
  }

  if (job_ == nullptr || JobRow::GetDismounted(job_) == nullptr) {
    return job_;
  }

  if (GameModeData::IsVariableSet(
    GetSystemVariable(SystemVariable::kForceMount)
  )) {
    return job_;
  }

  if (GameModeData::IsVariableSet(
    GetSystemVariable(SystemVariable::kForceDismount)
  )) {
    return JobRow::GetDismounted(job_);
  }

  const GameModeData* data = GameModeData::GetInstance();
  if (data == nullptr) {
    return job_;
  }

  switch (data->GetMapKind()) {
    case 6:
    case 7:
      return JobRow::GetDismounted(job_);
    case 2:
      return state_ & 0x40000 ? JobRow::GetDismounted(job_) : job_;
    default:
      return job_;
  }
}

bool Unit::HasSkill(const SkillKey& key) const {
  return game::HasSkill(skill_lists_[7], key);
}

// Units without hit points left also lock with their own skill.
[[gnu::always_inline]] bool Unit::IsLocked() const {
  const SkillList& skills = skill_lists_[7];
  return HasSharedSkill(skills, kSkillLock) ||
    (hp_ == 0 && unknown_1f0_ == 0 && HasSharedSkill(skills, kSkillDownLock));
}

bool Unit::IsUnlocked() const {
  return !IsLocked();
}

bool Unit::IsHeld() const {
  return (state_ & 0x1) != 0 || IsLocked();
}

bool Unit::IsImmobile() const {
  return IsLocked() || (state_ & 0x4) != 0 ||
    HasSharedSkill(skill_lists_[7], kSkillImmobile);
}

bool Unit::CanSwitchMount() const {
  if (IsLocked() || class_job_ != nullptr ||
    HasSharedSkill(skill_lists_[7], kSkillMountLock)) {
    return false;
  }

  return JobRow::GetDismounted(job_) != nullptr;
}

bool Unit::Unknown6c8f90() const {
  return !IsLocked() && !HasSharedSkill(skill_lists_[7], kSkillUnknown19);
}

bool Unit::Unknown6c90c0() const {
  return !IsLocked() && !HasSharedSkill(skill_lists_[7], kSkillUnknown45);
}

bool Unit::Unknown6c9450() const {
  return !IsLocked() && skill_lists_[7].Count({0, 1}) > 0;
}

bool Unit::Unknown6c9980() const {
  if (IsLocked()) {
    return true;
  }

  return class_job_ == nullptr &&
    !HasSharedSkill(skill_lists_[7], kSkillUnknown56);
}

[[gnu::always_inline]] int Unit::GetMaxPollution() const {
  if ((1 << GetForceType() & kPollutableForces) == 0 ||
    GameModeData::IsVariableSet(GetBanVariable(BanVariable::kPollution))) {
    return 0;
  }

  return HasSystemSkill(skill_lists_[7], kSkillPollutionBoost) ? 12 : 6;
}

int Unit::SetPollution(int value) {
  const int old = pollution_;
  if (value == old) {
    return 0;
  }

  const int max = GetMaxPollution();
  const int pollution = value < 0 ? 0 : (max < value ? max : value);
  pollution_ = pollution;
  if (pollution != old) {
    state_ |= 0x8000;
  }
  return pollution - old;
}

int Unit::GetMaxBurst() const {
  static const HashedString kMaxBurst("汚染_バースト最大数");
  if ((1 << GetForceType() & kPollutableForces) == 0 ||
    GameModeData::IsVariableSet(GetBanVariable(BanVariable::kPollution))) {
    return 0;
  }

  const GameVariable* variable = GameModeData::FindVariable(kMaxBurst);
  return variable != nullptr ? variable->value : 0;
}

bool Unit::CanPollute() const {
  if (GetMaxPollution() == 0) {
    return false;
  }

  return !HasSystemSkill(skill_lists_[7], kSkillPollutionBlock);
}

int Unit::GetUnknown6cba30() const {
  const SkillList& skills = skill_lists_[7];
  if (HasSharedSkill(skills, kSkillUnknown95)) {
    return 3;
  }

  if (HasSharedSkill(skills, kSkillUnknown96)) {
    return 2;
  }

  return HasSharedSkill(skills, kSkillUnknown94);
}

int Unit::GetUnknown6cbca0() const {
  const SkillList& skills = skill_lists_[7];
  if (HasSharedSkill(skills, kSkillUnknown88) ||
    HasSharedSkill(skills, kSkillUnknown51)) {
    return 0;
  }

  return HasSharedSkill(skills, kSkillUnknown52) ? -1 : 1;
}

[[gnu::always_inline]] bool Unit::IsMounted() const {
  return JobRow::GetDismounted(GetJob()) != nullptr;
}

// Bit 0x40000 of the state marks a dismounted unit.
void Unit::ToggleMount() {
  const bool mounted = IsMounted();
  const bool can_switch = CanSwitchMount();
  if (mounted) {
    if (can_switch && (state_ & 0x40000) == 0) {
      state_ |= 0x40000;
      OnJobChanged();
    }
  }
  else if (can_switch && (state_ & 0x40000) != 0) {
    state_ &= ~0x40000;
    OnJobChanged();
  }
}

bool Unit::ResetMount() {
  const bool mounted = IsMounted();
  if (job_ == nullptr) {
    return false;
  }

  const bool has_dismounted = JobRow::GetDismounted(job_) != nullptr;
  if (mounted) {
    if (has_dismounted) {
      if (IsMountFixed(job_) || (state_ & 0x40000) != 0) {
        return false;
      }

      state_ |= 0x40000;
      OnJobChanged();
      return true;
    }
  }
  else if (has_dismounted && !IsMountFixed(job_)) {
    return false;
  }

  if ((state_ & 0x40000) == 0) {
    return false;
  }

  state_ &= ~0x40000;
  OnJobChanged();
  return true;
}

void Unit::OnHpChanged() {
  UpdateSkills();
  if (GetParam(UnitParams::kHp, 1) < hp_) {
    SetHp(GetParam(UnitParams::kHp, 1));
  }
  Unknown81b840();
}

void Unit::Unknown6cd8f0() {
  Unknown6c4610();
  if (GetParam(UnitParams::kHp, 1) < hp_) {
    SetHp(GetParam(UnitParams::kHp, 1));
  }
  dirty_ |= 0x5;
}

void Unit::Unknown6cd010() {
  const int hp = hp_;
  const int max = GetParam(UnitParams::kHp, 1);
  SkillList& list = skill_lists_[2];
  if (static_cast<int>(list.sources.size()) >= 1) {
    list.Clear();
    UpdateSkills();
  }
  KeepHpLost(hp, max);
}

bool Unit::Unknown6ccf10(const SkillKey& from, const SkillKey& to) {
  const int hp = hp_;
  const int max = GetParam(UnitParams::kHp, 1);
  const bool changed = skill_lists_[2].Unknown84dea0(from, to);
  if (changed) {
    UpdateSkills();
  }
  KeepHpLost(hp, max);
  return changed;
}

void Unit::Unknown6d2380() {
  Unknown6cdd40(0);
  Unknown6cdf80(0);
  if (unknown_1f1_ != unknown_1f0_) {
    unknown_1f0_ = unknown_1f1_;
    UpdateSkills();
  }
  SetHp(GetParam(UnitParams::kHp, 1));
  state_ |= 0x40;
}

void Unit::UpdateShape() {
  shape_.Set(JobRow::GetSize(GetJob()), 0, 0);
}

// Skill sources keep a level in bits 12 to 18 and, for kinds 5 and 6, extra
// levels in bits 19 to 23.
void Unit::LevelUpSkill(const SkillKey& key) {
  SkillList& list = skill_lists_[4];
  uint32_t* found = FindSource(list, key.index);
  if (found == nullptr) {
    return;
  }

  uint32_t& source = *found;
  const SkillData* data = g_skill_file->At(source & 0xfff);
  const int uses = SkillRow::GetUses(data);
  if (uses == 0) {
    return;
  }

  const uint8_t kind = SkillRow::GetKind(data);
  if (kind == 6 && (1 << GetForceType() & kPollutableForces) == 0) {
    return;
  }

  const uint32_t level = source >> 12 & 0x7f;
  const int extra = kind - 5 < 2u ? source >> 19 & 0x1f : 0;
  if (static_cast<int>(extra + uses - level) >= 1) {
    source = (source & 0xfff80fff) | ((level + 1) & 0x7f) << 12;
  }
}

bool Unit::ResetSkillLevel(const char* name) {
  if (name == nullptr) {
    return false;
  }

  SkillKey key = {};
  key.Assign(HashedString(name));
  uint32_t* source = FindSource(skill_lists_[4], key.index);
  if (source != nullptr && (*source & 0x7f000) != 0 &&
    SkillRow::GetKind(g_skill_file->At(*source & 0xfff)) != 9) {
    *source &= 0xfff80fff;
  }
  return false;
}

void Unit::ClearItems() {
  for (int i = 0; i < UnitItemList::kCarried; i++) {
    items_list_.items[i].Clear();
  }
  UpdateSkills();
  Unknown81a240();
}

[[gnu::always_inline]] bool Unit::EquipItem(int index) {
  if (index < 0 || !items_list_.items[index].CanEquip(this) ||
    !items_list_.Equip(index)) {
    return false;
  }

  UpdateSkills();
  Unknown81a240();
  return true;
}

bool Unit::EquipItem(const ItemData* data) {
  if (data == nullptr) {
    return false;
  }

  return EquipItem(items_list_.Find(data));
}

bool Unit::RemoveItem(int index) {
  if (index < 0) {
    return false;
  }

  UnitItem& item = items_list_.items[index];
  if (item.GetIndex() == 0) {
    return false;
  }

  item = UnitItem();
  items_list_.SortAll();
  UpdateSkills();
  Unknown81a240();
  return true;
}

bool Unit::UnequipWeapon() {
  const int index = items_list_.FindEquippedWeapon();
  if (index < 0) {
    return false;
  }

  UnitItem& item = items_list_.items[index];
  if (!item.IsEquipped()) {
    return false;
  }

  item.Unequip();
  UpdateSkills();
  Unknown81a240();
  return true;
}

bool Unit::EquipFirstWeapon() {
  if (items_list_.FindEquippedWeapon() >= 0) {
    return false;
  }

  for (int i = 0; i < UnitItemList::kCount; i++) {
    const UnitItem& item = items_list_.items[i];
    if (item.IsWeapon() && item.CanEquip(this) && items_list_.Equip(i)) {
      UpdateSkills();
      Unknown81a240();
      return true;
    }
  }
  return false;
}

// Moves an item between the carried and the stock slots.
bool Unit::MoveItem(int index) {
  if (index < 0) {
    return false;
  }

  UnitItem& item = items_list_.items[index];
  const UnitItem moved = item;
  const bool stock = Unknown6de520(moved.GetSharedData());
  if (item.GetIndex() != 0) {
    item = UnitItem();
    items_list_.SortAll();
  }

  int slot;
  items_list_.Add(slot, moved, stock);
  UpdateSkills();
  return true;
}

// The unit draws from its own seed, which advances on every roll.
bool Unit::RollPercent(int percent) {
  RandomSeed random;
  random.Initialize(random_seed_);
  random_seed_ = random.Next() & 0x7fffffff;
  if (percent < 1) {
    return false;
  }

  const uint32_t value = (random.Next() & 0x7fffffff) % 1000000;
  return percent * 10000.0f > value;
}

// Units under a third of their hit points play Select_C, wounded ones
// Select_B.
bool Unit::UpdateHpState() {
  const char* anim;
  if (3 * hp_ < GetParam(UnitParams::kHp, 1)) {
    anim = "Select_C";
  }
  else if (GetParam(UnitParams::kHp, 1) <= hp_) {
    anim = "Select_A";
  }
  else {
    anim = "Select_B";
  }

  uint32_t state;
  if (3 * hp_ < GetParam(UnitParams::kHp, 1)) {
    state = 0x3000000;
  }
  else if (GetParam(UnitParams::kHp, 1) <= hp_) {
    state = 0x1000000;
  }
  else {
    state = 0x2000000;
  }

  if ((state_ & 0x3000000) == state) {
    return false;
  }

  Unknown81b5a0(anim, 1.0f);
  state_ = (state_ & ~0x3000000) | state;
  return true;
}

// Drops used up weapons and unequips the items the unit can no longer use,
// the kind 13 items of types 26 to 31 included.
bool Unit::CheckEquipment() {
  bool changed = false;
  const int index = items_list_.FindEquippedWeapon();
  if (index >= 0) {
    UnitItem& item = items_list_.items[index];
    if (item.IsUsable()) {
      if (item.GetIndex() != 0) {
        item = UnitItem();
        items_list_.SortAll();
        UpdateSkills();
        Unknown81a240();
        changed = true;
      }
    }
    else if (!item.CanEquip(this) && item.IsEquipped()) {
      item.Unequip();
      UpdateSkills();
      Unknown81a240();
      changed = true;
    }
  }

  for (uint8_t type = 26; type < 32; type++) {
    const int other = items_list_.FindEquipped(type);
    if (other >= 0 && !items_list_.items[other].CanEquip(this)) {
      UnitItem& item = items_list_.items[other];
      if (item.IsEquipped()) {
        item.Unequip();
        UpdateSkills();
        Unknown81a240();
      }
      changed = true;
    }
  }
  return changed;
}

Unit::SkillList& Unit::Unknown6c4610() {
  if (GetPerson() != nullptr) {
    skill_lists_[0].Unknown84fac0(this);
    UpdateSkills();
    items_list_.Unknown712d40(this);
    skill_lists_[1].Unknown84e240(skill_lists_[0]);
    skill_lists_[2].Unknown84e240(skill_lists_[0]);
    UpdateSkills();
  }
  return skill_lists_[0];
}

void Unit::Unknown6c7f10() {
  Unknown6c4610();
  CheckEquipment();
  EquipFirstWeapon();
  Unknown6ddce0();
  Unknown6cdd40(0);
  Unknown6cdf80(0);
  UpdateSkills();
}

// Jobs with a dismounted form start dismounted unless the mount is fixed.
void Unit::Unknown6c8630() {
  if (job_ != nullptr) {
    if (JobRow::GetDismounted(job_) != nullptr) {
      if (!IsMountFixed(job_) && (state_ & 0x40000) == 0) {
        state_ |= 0x40000;
        OnJobChanged();
      }
    }
    else if ((state_ & 0x40000) != 0) {
      state_ &= ~0x40000;
      OnJobChanged();
    }
  }

  UpdateShape();
  Unknown6c4610();
  CheckEquipment();
  UpdateSkills();
}

// The leader of the play, units in state 0x80000 and the holders of system
// skill 1 only force kind 9.
int Unit::Unknown6c46e0(const uint8_t& kind) const {
  const GameModeData* data = GameModeData::GetInstance();
  const PersonData* leader = data != nullptr ? data->GetLeader() : nullptr;
  bool forced = true;
  if (GetPerson() == leader || (state_ & 0x80000) != 0 ||
    HasSystemSkill(skill_lists_[7], kSkillUnknown1)) {
    forced = kind == 9;
  }
  return Unknown6c47b0(kind, forced, 0);
}

// A drawn lottery entry points to its row at 0x28.
struct LotteryPick {
  uint8_t unknown_00_[0x28];
  const Data* row;
};

const LotteryPick* DrawLottery(const void* group, int roll, int range);

// The person lottery at 0x190 is drawn with the unit lottery seed, which is
// not advanced.
const Data* Unit::DrawPersonLottery() const {
  const PersonData* person = GetPerson();
  if (person == nullptr) {
    return nullptr;
  }

  const void* group = PersonRow::Read<const void*>(person, 0x190);
  if (group == nullptr) {
    return nullptr;
  }

  RandomSeed random;
  random.Initialize(lottery_seed_);
  const int roll = (random.Next() & 0x7fffffff) % 1000;
  const LotteryPick* pick = DrawLottery(group, roll, 1000);
  if (pick == nullptr || pick->row == nullptr || pick->row->index == 0) {
    return nullptr;
  }
  return pick->row;
}

// Players and allies are friends.
bool Unit::IsFriend(const Unit* other) const {
  if (other == nullptr) {
    return false;
  }

  const uint8_t type = other->GetForceType();
  const uint8_t own = force_->GetType();
  if (own == type) {
    return true;
  }

  return own != 0 ? type == 0 && own == 3 : type == 3;
}

const char* Unit::GetJobId() const {
  const JobData* job = GetJob();
  return job != nullptr ? JobRow::GetId(job) : nullptr;
}

const char* Unit::GetJobName() const {
  const JobData* job = GetJob();
  return job != nullptr ? game::GetJobName(job, GetPerson()) : nullptr;
}

uint8_t Unit::GetJobUnknown30() const {
  const JobData* job = GetJob();
  return job != nullptr ? JobRow::GetUnknown30(job) : 0;
}

int Unit::GetParam(const uint8_t& kind, int mode) const {
  return GetParam(kind, GetJob(), mode & 1);
}

// The person base falls back to the job base. Modified values add the
// boost limit of the force, and polluted units lose hit points by the burst
// decay rate unless a skill guards them.
int Unit::GetParam(
  const uint8_t& kind, const JobData* job, bool modified
) const {
  const PersonData* person = GetPerson();
  if (person == nullptr) {
    return 0;
  }

  const int index = g_param_orders[param_order_][kind];
  int value = PersonRow::GetBase(person, index);
  if (job != nullptr) {
    if (value == 0) {
      value = JobRow::GetBase(job, index);
    }
    value += JobRow::GetLimitBonus(job, index);
  }
  value += param_bonuses_[index] +
    PersonRow::GetGradeBonus(person, grade_, index);

  int limit = PersonRow::GetLimit(person, index);
  if (job != nullptr) {
    const int job_limit = JobRow::GetLimit(job, index);
    limit = (job_limit < limit ? job_limit : limit) +
      JobRow::GetLimitBonus(job, index);
  }
  value = value < 0 ? 0 : (limit < value ? limit : value);

  if (modified) {
    const ParamModifier& modifier = param_modifiers_[index];
    const uint8_t force = GetForceType();
    const GameVariable* boost = GameModeData::FindVariable(GetSystemVariable(
      (1 << force & 6) != 0 ? kVariableBoostLimitEnemy :
        kVariableBoostLimitAlly
    ));
    const int boosted = (boost != nullptr ? boost->value : 0) + value;
    const float scaled = modifier.scale > 1.0f ?
      modifier.base + value * modifier.scale :
      modifier.scale * (value + modifier.base);
    const int capped = static_cast<int>(scaled);
    value = (boosted < capped ? boosted : capped) + modifier.offset;

    if (kind == UnitParams::kHp) {
      static const HashedString kBurstDecay("汚染_バースト減衰率");
      const int burst = burst_;
      if (burst != 0) {
        const GameVariable* rate = GameModeData::FindVariable(kBurstDecay);
        const int decay = (rate != nullptr ? rate->value : 0) * burst;
        if (decay >= 1) {
          const SkillKey guard = {g_system_skills[kSkillPollutionGuard].index};
          const SkillList& skills = skill_lists_[7];
          if (!game::HasSkill(skills, guard)) {
            const int floor = value < 1 ? value : 1;
            const int decayed = (100 - decay) * value / 100;
            value = floor > decayed ? floor : decayed;
          }
        }
      }
    }
  }

  if (kind == UnitParams::kMove && IsImmobile()) {
    value = 0;
  }

  const int minimum = g_param_minimums[index];
  return value < minimum ? minimum : (value < 255 ? value : 255);
}

int Unit::GetParamLimit(const uint8_t& kind) const {
  const JobData* job = GetJob();
  const PersonData* person = GetPerson();
  if (person == nullptr) {
    return 0;
  }

  int limit = PersonRow::GetLimit(person, kind);
  if (job != nullptr) {
    const int job_limit = JobRow::GetLimit(job, kind);
    limit = (job_limit < limit ? job_limit : limit) +
      JobRow::GetLimitBonus(job, kind);
  }

  return limit;
}

#pragma GCC visibility pop

}
