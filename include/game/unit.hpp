#pragma once

#include <stdint.h>

#include <functional>
#include <map>
#include <string>
#include <vector>

#include "game/interpolator.hpp"

namespace game {

#pragma GCC visibility push(hidden)

class Stream;
class Unit;
class UnitSkill;
struct ForceMask;
struct ItemData;

class Force {
public:
  Unit* GetFirst() const {
    return first_;
  }

  Unit* GetLast() const {
    return last_;
  }

  Unit* Find(const char* pid) const;

  uint8_t GetType() const {
    return type_;
  }

private:
  Unit* first_;
  Unit* last_;
  uint8_t type_;
};

struct JobData;
struct PersonData;

struct Data;
struct HashedString;

// A skill row index in its low 12 bits.
struct SkillKey {
  // Looks the skill up by its name.
  void Assign(const HashedString& name);

  // The uses left, kinds 5 and 6 add the extra levels.
  int GetRemainingUses() const;
  bool IsUsable() const;

  uint32_t index : 12;
  uint32_t level : 7;
  uint32_t extra : 5;
  uint32_t unknown_18_ : 8;
};

// The skills the engine tests by name, other units read them through the
// global offset table.
extern const SkillKey g_system_skills[];
[[gnu::visibility("default")]] extern const SkillKey g_shared_system_skills[];

// An item owned by a unit, keyed by the item row index. The accessors that
// read the row are defined in unit_item.hpp.
class UnitItem {
public:
  static constexpr uint8_t kFlagEquipped = 0x01;
  static constexpr uint8_t kFlagDiscarded = 0x02;
  static constexpr uint8_t kFlagFull = 0x08;
  static constexpr uint8_t kFlagLocked = 0x10;
  static constexpr uint8_t kFlagBroken = 0x20;

  const ItemData* GetData() const;
  const ItemData* GetSharedData() const;

  uint16_t GetIndex() const {
    return index_;
  }

  uint8_t GetUses() const {
    return uses_;
  }

  bool IsBroken() const {
    return flags_ & kFlagBroken;
  }

  int GetCount() const {
    return count_;
  }

  bool IsEquipped() const {
    return flags_ & kFlagEquipped;
  }

  // Weapons are the item kinds up to 7.
  bool IsWeapon() const;

  bool IsDiscarded() const {
    return flags_ & kFlagDiscarded;
  }

  void ClearUses() {
    if (uses_ != 0) {
      uses_ = 0;
    }
  }

  // Defined in unit_item.hpp, it also updates the full flag.
  void SetUses(uint8_t uses);

  void Equip() {
    flags_ |= kFlagEquipped;
  }

  void Unequip() {
    if (flags_ & kFlagEquipped) {
      flags_ &= ~kFlagEquipped;
    }
  }

  int GetMaxUses() const;
  int GetSharedMaxUses() const;

  bool CanEquip(const Unit* unit) const;
  bool Restore(int amount);
  bool IsUsable() const;
  void Deserialize(Stream& stream);

  void Clear() {
    if (index_ != 0) {
      *this = UnitItem();
    }
  }

private:
  uint16_t index_;
  uint8_t uses_;
  uint8_t flags_;
  uint32_t count_ : 4;
  uint32_t level_ : 10;
  uint32_t unknown_04_ : 18;
};

static_assert(sizeof(UnitItem) == 8);

// The items a unit holds, the first six are carried.
struct UnitItemList {
  static constexpr int kCount = 30;
  static constexpr int kCarried = 6;

  int Find(const ItemData* data) const;
  int Find(const char* iid) const;
  int FindEquipped() const;
  int FindEquippedWeapon() const;
  int FindEquipped(uint8_t type) const;
  void EachItem(const std::function<void(const UnitItem&)>& function) const;
  void ClearStockUses();
  bool HasStockUses() const;
  bool RemoveDiscarded();
  int Count(const ItemData* data) const;

  void Unknown712d40(Unit* unit);

  // Kinds 5 and 6 and stock items go to the slots after the carried ones.
  bool Add(int& slot, const UnitItem& item, bool stock);

  // Sorts a range by priority: equipped weapons first, empty slots last.
  bool Sort(int start, int count);

  void SortAll() {
    Sort(0, kCarried);
    Sort(kCarried, kCount - kCarried);
  }

  // Weapons replace the equipped weapon, kind 13 another item.
  bool Equip(int index);

  UnitItem items[kCount];
};

// The eleven parameters of a unit, hit points first. The other kinds follow
// the order of Fire Emblem Engage, which shares this engine.
struct UnitParams {
  enum Kind : uint8_t {
    kHp,
    kStrength,
    kTechnique,
    kSpeed,
    kLuck,
    kDefense,
    kMagic,
    kResistance,
    kBuild,
    kSight,
    kMove,
    kCount,
  };

  uint16_t values[kCount];
};

// The values derived from the parameters and the equipped item. The names
// are guesses from the parameters they start from.
struct UnitDerivedParams {
  enum Kind : uint8_t {
    kAttack,
    kTechniqueAttack,
    kMagicAttack,
    kMagicGuard,
    kUnknown4,
    kUnknown5,
    kUnknown6,
    kGuard,
    kUnknown8,
    kCount,
  };
};

// Scales a value by a factor and caps it at 999 before the final offset.
// Factors above one scale the value alone, the others the value and base.
struct ParamModifier {
  int Apply(int value) const {
    const float scaled = scale > 1.0f ?
      base + value * scale : scale * (value + base);
    const int result = static_cast<int>(scaled);
    return (result >= 999 ? 999 : result) + offset;
  }

  int16_t base;
  int16_t offset;
  float scale;
};

// Shared base of units and world map troops.
class UnitActor {
public:
  virtual ~UnitActor();

  virtual void Unknown02();
  virtual void Unknown03();
  virtual void Unknown04();

  const PersonData* GetPerson() const {
    return person_;
  }

  uint32_t GetMotion() const {
    return motion_;
  }

  // A fade runs until the alpha reaches its target.
  bool IsFading() const {
    return alpha_ != target_alpha_;
  }

  // The angle the unit faces in degrees.
  float GetRotation() const {
    return rotation_.GetSettled();
  }

  // Bit 2 rebuilds the model of the unit.
  void MarkDirty(uint16_t mask) {
    dirty_ |= mask;
  }

protected:
  uint8_t unknown_08_[0x8];
  uint32_t motion_;
  uint16_t dirty_;
  uint8_t unknown_16_[0x5a];
  InterpolatorFloat rotation_;
  uint8_t unknown_98_[0x8];
  float target_alpha_;
  float alpha_;
  uint8_t unknown_a8_[0xe0];

private:
  const PersonData* person_;
};

class UnitConst {};

class UnitStatus {};

class UnitEdit {
public:
  virtual ~UnitEdit() = default;

  bool HasName() const {
    return has_name_ != 0;
  }

  const char* GetName() const;

private:
  std::string name_;
  uint8_t has_name_;
  uint8_t unknown_21_[0x3f];
};

// The cells a unit covers, as offsets from its position.
struct UnitShape {
  // The cells a unit covers, barriers keep their hit points in them.
  struct Cell {
    int8_t x;
    int8_t z;
    int8_t hp;
    uint8_t flags;
  };

  void Set(int size, int a, int b);

  int size;
  std::vector<Cell> cells;
};

// The argument of an AI operation, kept by name.
class AiArgument {
public:
  void Set(const char* text);

private:
  const void* unknown_00_;
};

class Unit : public UnitActor, public UnitConst, public UnitStatus {
public:
  static constexpr uint8_t kNoForce = 9;

  ~Unit() override;

  // Units of a force are chained in a list.
  Unit* GetNext() const {
    return next_;
  }

  const Force* GetForce() const {
    return force_;
  }

  Unit* GetNextIn(const ForceMask& mask) const;

  uint8_t GetForceType() const {
    return force_ != nullptr ? force_->GetType() : kNoForce;
  }

  // Units that left the map keep this flag.
  bool IsOnMap() const {
    return !(state_ & 0x8);
  }

  bool IsInCorps() const {
    return state_ & 0x100000;
  }

  bool IsCorpsLeader() const {
    return state_ & 0x80000;
  }

  int GetCorps() const {
    return IsInCorps() ? corps_ : -1;
  }

  // The hit point stocks left, shown by the gauges.
  uint8_t GetHpStock() const {
    return unknown_1f0_;
  }

  int GetHp() const {
    return hp_;
  }

  uint8_t GetLevel() const {
    return unknown_1f2_;
  }

  uint8_t GetPollution() const {
    return pollution_;
  }

  bool HasState(uint32_t mask) const {
    return state_ & mask;
  }

  uint8_t GetLegion() const {
    return legion_;
  }

  uint16_t GetEquippedIndex() const {
    return equipped_index_;
  }

  const UnitItem& GetItem(int index) const {
    return items_list_.items[index];
  }

  UnitItemList& GetItemList() {
    return items_list_;
  }

  uint8_t GetBand() const {
    return band_;
  }

  bool IsAiActive() const {
    return ai_active_ != 0;
  }

  void SetState(uint32_t mask) {
    state_ |= mask;
    if (mask & 1) {
      dirty_ |= 4;
    }
  }

  void ClearState(uint32_t mask) {
    state_ &= ~mask;
    if (mask & 1) {
      dirty_ |= 4;
    }
  }

  // The AI settings the scripts change.
  void SetAiFlag(uint32_t mask, bool enable) {
    ai_flags_ = (ai_flags_ & ~mask) | (enable ? mask : 0);
  }

  void SetBand(uint8_t band) {
    band_ = band;
  }

  void SetAiActive(bool active) {
    ai_active_ = active;
  }

  void SetPriority(uint8_t priority) {
    priority_ = priority;
  }

  void SetRageOpArg(const char* arg) {
    rage_op_arg_.Set(arg);
  }

  void SetRageOp(uint8_t op) {
    rage_op_ = op;
  }

  void SetRageTarget(uint8_t x, uint8_t z) {
    rage_x_ = x;
    rage_z_ = z;
  }

  void SetRageProhibitTurn(uint8_t turn) {
    rage_prohibit_turn_ = turn;
  }

  void ClearMoveLimit() {
    move_limit_ = 0;
    for (int8_t& value : move_limit_area_) {
      value = -1;
    }
  }

  const UnitEdit& GetEdit() const {
    return edit_;
  }

  // The scripts clamp the hit points before setting them.
  void ChangeHp(int hp) {
    SetHp(hp);
    UpdateSkills();
  }

  // Bit 0x40000 of the state marks a dismounted unit.
  void SetRide(bool ride) {
    const bool can_switch = CanSwitchMount();
    if (ride) {
      if (can_switch && (state_ & 0x40000) != 0) {
        state_ &= ~0x40000;
        OnJobChanged();
      }
    }
    else if (can_switch && (state_ & 0x40000) == 0) {
      state_ |= 0x40000;
      OnJobChanged();
    }
  }

  // The cells of the shape keep the barrier hit points in their third byte.
  int GetBarrierHp(int x, int z) const {
    if (x < 0 || z < 0 || barrier_skill_.index == 0) {
      return 0;
    }
    const int size = shape_.size;
    if (x >= size || z >= size) {
      return 0;
    }
    // Wraps instead of overflowing, the original still tests the sign.
    const int cell = static_cast<int>(static_cast<unsigned>(x) + size * z);
    if (cell < 0) {
      return 0;
    }
    return shape_.cells[cell].hp;
  }

  void SetBarrierHp(int8_t hp) {
    if (barrier_skill_.index == 0) {
      return;
    }
    // Stored as plain bytes, the original reloads the cells after each one.
    for (int i = 0; i < static_cast<int>(shape_.cells.size()); i++) {
      int8_t* cell_hp = &shape_.cells[i].hp;
      *cell_hp = hp;
    }
  }

  void SetBarrierHp(int x, int z, int8_t hp);

  // Breaks every cell of a barrier still standing.
  void BreakBarrier(bool effect) {
    if (barrier_skill_.index == 0) {
      return;
    }
    int count = 0;
    for (int i = 0; i < static_cast<int>(shape_.cells.size()); i++) {
      if (shape_.cells[i].hp != 0) {
        count++;
      }
    }
    if (count == 0) {
      return;
    }
    for (const UnitShape::Cell& cell : shape_.cells) {
      BreakBarrier(nullptr, cell.x, cell.z, effect);
    }
  }

  void BreakBarrier(const Unit* source, int x, int z, bool effect);
  void RepairBarrier(const Unit* source, int x, int z, bool effect);

  // The AI sequences, each with four arguments.
  struct [[gnu::packed]] SequenceArg {
    uint32_t type : 8;
    int32_t unknown : 8;
    int32_t x : 8;
    int32_t z : 8;
  };

  static constexpr int kSequenceCount = 4;

  uint8_t GetSequence(int order) const {
    return sequences_[order];
  }

  const SequenceArg& GetSequenceArg(int order, int index) const {
    return sequence_args_[order][index];
  }

  int GetX() const {
    return x_;
  }

  int GetZ() const {
    return z_;
  }

  bool IsDone() const;

  const JobData* GetBaseJob() const {
    return job_;
  }

  const JobData* GetClassJob() const {
    return class_job_;
  }

  int GetSize() const {
    return shape_.size;
  }

  uint8_t GetIndex() const {
    return index_;
  }

  // Jobs with a dismounted form switch to it on some maps.
  const JobData* GetJob() const;
  int GetParam(const uint8_t& kind, int mode) const;
  int GetParam(const uint8_t& kind, const JobData* job, bool modified) const;
  bool IsImmobile() const;
  bool IsLocked() const;
  bool IsUnlocked() const;
  bool IsHeld() const;
  bool CanSwitchMount() const;
  bool HasSkill(const SkillKey& key) const;
  bool IsFriend(const Unit* other) const;
  const char* GetJobId() const;
  const char* GetJobName() const;
  uint8_t GetJobUnknown30() const;
  bool Unknown6c8f90() const;
  bool Unknown6c90c0() const;
  bool Unknown6c9450() const;
  bool Unknown6c9980() const;
  int GetMaxPollution() const;
  int SetPollution(int value);
  int GetMaxBurst() const;
  bool CanPollute() const;
  int GetUnknown6cba30() const;
  int GetUnknown6cbca0() const;
  bool IsMounted() const;
  void ToggleMount();
  bool ResetMount();
  void OnJobChanged();
  void Unknown6cd8f0();
  void Unknown6cd010();
  bool Unknown6ccf10(const SkillKey& from, const SkillKey& to);
  void Unknown6d2380();
  void UpdateShape();
  void LevelUpSkill(const SkillKey& key);
  void Unknown6cdd40(int a);
  void Unknown6cdf80(int a);
  void Unknown81a240();
  void Unknown81a990();
  void AddEquipSkill(const SkillKey& key, bool unknown);
  void RemoveEquipSkill(const SkillKey& key);
  bool AddPrivateSkill(const SkillKey& key);
  bool RemovePrivateSkill(const SkillKey& key);
  void ClearItems();
  bool EquipItem(int index);
  bool EquipItem(const ItemData* data);
  bool ResetSkillLevel(const char* name);
  bool Unknown6de520(const ItemData* data) const;
  bool RemoveItem(int index);
  bool UnequipWeapon();
  bool EquipFirstWeapon();
  bool MoveItem(int index);
  bool RollPercent(int percent);
  bool UpdateHpState();
  void Unknown81b5a0(const char* name, float rate);
  void Unknown6c7f10();
  void Unknown6c8630();
  bool CheckEquipment();
  const Data* DrawPersonLottery() const;
  int Unknown6c46e0(const uint8_t& kind) const;
  int Unknown6c47b0(const uint8_t& kind, bool forced, int mode) const;
  void Unknown6ddce0();
  int GetParamLimit(const uint8_t& kind) const;
  UnitParams GetParams(int mode) const;
  bool CanGrow(const uint8_t& kind) const;
  int Recover(int amount);
  void OnHpChanged();
  struct SkillList;
  SkillList& Unknown6c4610();
  void Unknown6c51e0();
  void Unknown6c6da0();
  void Unknown6c6ec0();
  void Unknown81b840();
  int GetStrength(int mode) const;
  int GetTechnique(int mode) const;
  int GetSpeed(int mode) const;
  int GetLuck(int mode) const;
  int GetDefense(int mode) const;
  int GetMagic(int mode) const;
  int GetResistance(int mode) const;
  int GetBuild(int mode) const;
  int GetSight(int mode) const;
  int GetMaxHp(int mode) const;

  // Bit 0 of the mode applies the modifiers, the values never go negative.
  int GetAttack(bool technique, int might, int count, bool modified) const;
  int GetMagicAttack(int mode) const;
  int GetMagicGuard(int mode) const;
  int GetUnknown5(int mode) const;
  int GetUnknown6(bool modified) const;
  int GetGuard(int mode) const;
  int GetAttackSpeed(int mode) const;
  int GetUnknown4(bool modified) const;
  int GetEquippedAttack(bool modified) const;

  // Items with a range skill take the range of the skill.
  int GetMinRange(const UnitItem& item) const;
  int GetMaxRange(const UnitItem& item) const;

  // Adds the bonuses of the active skills to a row value.
  int GetSkillBonus(const void* key) const {
    return skill_lists_[7].GetBonus(key);
  }

  // Selects skills by kind, read out of line.
  struct SkillFilter {
    int unknown00;
    int unknown04;
  };

  struct SkillList {
    int GetBonus(const void* key) const;
    int Count(const SkillFilter& filter) const;
    bool Unknown84dea0(const SkillKey& from, const SkillKey& to);
    bool Replace(const SkillKey& from, const SkillKey& to);
    bool ContainsAny(const SkillList& other) const;
    int IndexOf(const SkillKey& key) const;
    int FindKind(uint8_t kind) const;
    int FindCategory(uint8_t category) const;

    // The sources of this list that the owner holds active.
    int CountActive(const SkillList& owner) const;

    void Unknown84fac0(Unit* unit);
    void Unknown84e240(const SkillList& base);

    // Moves the bit of a skill to another, keeping the count of set bits.
    void MoveBit(const SkillKey& from, const SkillKey& to);

    // Calls back the sources whose skill kind is in the mask.
    void EachIndirectSkill(
      const uint16_t& kinds,
      const std::function<void(const UnitSkill&)>& callback
    ) const;

    const SkillKey& GetSource(size_t i) const {
      return reinterpret_cast<const SkillKey&>(sources[i]);
    }

    SkillKey& GetSource(size_t i) {
      return reinterpret_cast<SkillKey&>(sources[i]);
    }

    // The skill indices are a bit set.
    bool Contains(uint32_t index) const {
      const uint32_t word = index >> 5;
      return word + 1 <= skills.size() && (skills[word] >> (index & 31) & 1);
    }

    // Sources keep the skill index in their low 12 bits.
    int FindSource(uint32_t index) const {
      for (size_t i = 0; i < sources.size(); i++) {
        if (((sources[i] ^ index) & 0xfff) == 0) {
          return i;
        }
      }
      return -1;
    }

    void Clear() {
      sources.clear();
      count = 0;
      unknown_50_[0] = 0;
      unknown_50_[1] = 0;
      skills.clear();
    }

    std::vector<uint32_t> skills;
    int count;
    uint8_t unknown_1c_[0x4];
    std::vector<uint32_t> sources;
    std::vector<uint32_t> levels;
    uint64_t unknown_50_[2];
  };

  const SkillList& GetSkillList(int index) const {
    return skill_lists_[index];
  }

  SkillList& GetSkillList(int index) {
    return skill_lists_[index];
  }

private:
  // The three skill passes run once, nested updates are skipped.
  void UpdateSkills() {
    if (state_ & 0x10000000) {
      return;
    }

    state_ |= 0x10000000;
    Unknown6c51e0();
    Unknown6c6da0();
    Unknown6c6ec0();
    state_ &= ~0x10000000;
  }

  void SetHp(int value) {
    const int max = GetParam(UnitParams::kHp, 1);
    if (pending_hp_ != 0 && value != pending_hp_) {
      pending_hp_ = 0;
    }

    const int hp = value < 0 ? 0 : (max < value ? max : value);
    if (hp != hp_) {
      hp_ = hp;
    }
  }

  // Keeps the hit points lost when the maximum changes, leaving at least one.
  void KeepHpLost(int hp, int old_max) {
    const int max = GetParam(UnitParams::kHp, 1);
    if (max == old_max) {
      return;
    }

    const int value = max - old_max + hp;
    if (pending_hp_ != 0 && value != pending_hp_) {
      pending_hp_ = 0;
    }

    const int clamped = value < 1 ? 1 : (max < value ? max : value);
    if (clamped != hp_) {
      hp_ = clamped;
    }
  }

  struct Variables {
    ~Variables() {
      Clear();
    }

    // Copies member by member after clearing.
    Variables& operator=(const Variables& other);

    void Clear() {
      flags = 0;
      unknown_00_ = 0;
      unknown_01_ = 0;
      unknown_02_ = 0;
      unknown_03_ = 0;
      unknown_04_ = 0;
      name.clear();
      values.clear();
    }

    uint8_t unknown_00_ = 0;
    uint8_t unknown_01_ = 0;
    uint8_t unknown_02_ = 0;
    uint8_t unknown_03_ = 0;
    uint32_t unknown_04_ = 0;
    int flags = 0;
    std::map<uint8_t, uint16_t> values;
    std::string name;
  };

  struct Work {
    uint8_t unknown_00_[0x18];
    std::vector<uint8_t> cells;
    uint8_t unknown_30_[0xa20];
    std::vector<uint8_t> routes;
  };

  static int count_;

  const JobData* job_;
  const JobData* class_job_;
  uint32_t state_;
  uint8_t unknown_1a4_[0xc];
  Unit* next_;
  const Force* force_;
  uint32_t random_seed_;
  uint32_t lottery_seed_;
  uint8_t unknown_1c8_[0xc];
  int16_t param_bonuses_[UnitParams::kCount];
  uint8_t unknown_1ea_[0x2];
  int16_t hp_;
  int16_t pending_hp_;
  uint8_t unknown_1f0_;
  uint8_t unknown_1f1_;
  uint8_t unknown_1f2_;
  uint8_t pollution_;
  uint8_t burst_;
  uint8_t corps_;
  uint8_t unknown_1f6_[0x3a];
  std::vector<uint32_t> items_;
  int8_t x_;
  int8_t z_;
  uint8_t unknown_24a_[0x6];
  UnitShape shape_;
  uint8_t grade_;
  uint8_t unknown_271_;
  int16_t derived_bonuses_[UnitDerivedParams::kCount];
  ParamModifier derived_modifiers_[UnitDerivedParams::kCount];
  ParamModifier param_modifiers_[UnitParams::kCount];
  uint8_t param_order_;
  uint8_t unknown_325_[0x17];
  UnitItemList items_list_;
  uint8_t unknown_42c_[0x4];
  SkillList skill_lists_[8];
  std::vector<uint32_t> unknown_730_;
  uint8_t unknown_748_[0x8];
  SkillKey barrier_skill_;
  uint8_t unknown_754_[0x4];
  Variables variables_;
  uint8_t legion_;
  uint8_t unknown_799_[0x7];
  // The equipped item, laid out as a UnitItem.
  uint16_t equipped_index_;
  uint8_t equipped_uses_;
  uint8_t equipped_flags_;
  uint8_t unknown_7a4_[0xc];
  AiArgument rage_op_arg_;
  uint32_t ai_flags_;
  uint8_t unknown_7bc_;
  uint8_t band_;
  uint8_t ai_active_;
  uint8_t priority_;
  uint8_t unknown_7c0_[0x4];
  uint8_t rage_op_;
  uint8_t unknown_7c5_[0x3];
  uint8_t rage_x_;
  uint8_t unknown_7c9_[0x7];
  uint8_t rage_z_;
  uint8_t unknown_7d1_[0x7];
  uint8_t rage_prohibit_turn_;
  uint8_t unknown_7d9_[0x4];
  uint8_t move_limit_;
  int8_t move_limit_area_[4];
  uint8_t sequences_[kSequenceCount];
  SequenceArg sequence_args_[kSequenceCount][4];
  uint8_t unknown_826_[0x2];
  uint8_t index_;
  uint8_t unknown_829_[0xf];
  UnitEdit edit_;
  Work* work_;
  uint8_t unknown_8a0_[0x10];
};

static_assert(sizeof(Unit) == 0x8b0);

bool HasActiveSkill(const SkillKey& key, const Unit::SkillList& list);

// Whether the list holds the skill and the skill is active.
bool HasSkill(const Unit::SkillList& list, const SkillKey& key);

// Shared system skill 105 makes the barrier break and heal as a whole.
inline void Unit::SetBarrierHp(int x, int z, int8_t hp) {
  if (barrier_skill_.index == 0) {
    return;
  }
  const SkillKey whole = {g_shared_system_skills[105].index};
  if (game::HasSkill(skill_lists_[7], whole)) {
    SetBarrierHp(hp);
    return;
  }
  if (x < 0 || z < 0) {
    return;
  }
  const int size = shape_.size;
  if (x >= size || z >= size) {
    return;
  }
  // Wraps instead of overflowing, the original still tests the sign.
  const int cell = static_cast<int>(static_cast<unsigned>(x) + size * z);
  if (cell >= 0) {
    shape_.cells[cell].hp = hp;
  }
}

#pragma GCC visibility pop

}
