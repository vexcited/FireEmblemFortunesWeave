#include "game/unit.hpp"
#include "game/unit_item.hpp"

namespace game {

#pragma GCC visibility push(hidden)

// A skill row index in its low 12 bits.
struct SkillKey {
  uint32_t index : 12;
  uint32_t unknown_00_ : 20;
};

// The skills the engine tests by name, other units read them through the
// global offset table.
extern const SkillKey g_system_skills[];
[[gnu::visibility("default")]] extern const SkillKey g_shared_system_skills[];

namespace {

constexpr int kSkillTechniqueBlock = 25;
constexpr int kSkillTechnique = 27;

// The skills of an item as a bit set.
struct ItemSkills {
  bool Contains(SkillKey key) const {
    const uint32_t word = key.index >> 5;
    return word + 1 <= words.size() && (words[word] >> key.index & 1);
  }

  uint8_t unknown_00_[0x8];
  std::vector<uint32_t> words;
};

const ItemSkills* GetItemSkills(const ItemData* data) {
  return ItemRow::Read<const ItemSkills*>(data, 0x18);
}

// The item rows keep one bonus per derived value from 0x6c on.
int16_t GetItemBonus(const ItemData* data, int kind) {
  return ItemRow::Read<int16_t>(data, 0x6c + 2 * kind);
}

const SkillData* GetRangeSkill(const ItemData* data) {
  const SkillData* skill = ItemRow::GetSkill(data);
  if (skill == nullptr || ItemRow::GetKind(data) > 7 ||
    !SkillRow::HasRange(skill) || SkillRow::GetKind(skill) == 2) {
    return nullptr;
  }

  return skill;
}

int ClampPositive(int value) {
  return value < 0 ? 0 : value;
}

}

int Unit::GetMaxHp(int mode) const {
  return GetParam(UnitParams::kHp, mode);
}

// Used up weapons give half of their bonus.
int Unit::GetAttack(
  bool technique, int might, int count, bool modified
) const {
  const int base = might * count;
  const int used_up = (equipped_flags_ & 0x8) != 0;
  int value;

  if (technique) {
    value = GetParam(UnitParams::kTechnique, modified) + base +
      derived_bonuses_[UnitDerivedParams::kTechniqueAttack];
    if (equipped_index_ != 0) {
      const ItemData* data = ItemFile::GetInstance()->At(equipped_index_);
      value += GetItemBonus(data, UnitDerivedParams::kTechniqueAttack) >>
        used_up;
    }
    if (modified) {
      value = derived_modifiers_[UnitDerivedParams::kTechniqueAttack]
        .Apply(value);
    }
  }
  else {
    value = GetParam(UnitParams::kStrength, modified) + base +
      derived_bonuses_[UnitDerivedParams::kAttack];
    if (equipped_index_ != 0) {
      const ItemData* data = ItemFile::GetInstance()->At(equipped_index_);
      value += GetItemBonus(data, UnitDerivedParams::kAttack) >> used_up;
    }
    if (modified) {
      value = derived_modifiers_[UnitDerivedParams::kAttack].Apply(value);
    }
  }

  return ClampPositive(value);
}

// Weapons with the skill or of kinds 5 and 6 count the mean of two
// parameters, the others only one of them.
int Unit::GetUnknown4(bool modified) const {
  constexpr int kind = UnitDerivedParams::kUnknown4;

  if (equipped_index_ == 0) {
    return 0;
  }

  const ItemData* data = ItemFile::GetInstance()->At(equipped_index_);
  const uint8_t type = ItemRow::GetType(data);
  if (type != 7 && type != 1) {
    return 100;
  }

  const int used_up = (equipped_flags_ & 0x8) != 0;
  const int bonus = (GetItemBonus(data, kind) >> used_up) +
    derived_bonuses_[kind];
  int value;

  if (GetItemSkills(data)->Contains(g_system_skills[kSkillTechnique]) ||
    static_cast<unsigned>(ItemRow::GetKind(data) - 5) <= 1) {
    const int defense = GetParam(UnitParams::kDefense, modified);
    value = bonus + (GetParam(UnitParams::kSpeed, modified) + defense) / 2;
  }
  else {
    value = bonus + GetParam(UnitParams::kSpeed, modified);
  }

  if (modified) {
    value = derived_modifiers_[kind].Apply(value);
  }

  return ClampPositive(value);
}

// The attack of the equipped weapon from its might, an empty slot reads the
// first item row.
int Unit::GetEquippedAttack(bool modified) const {
  const bool equipped = equipped_index_ != 0;
  const ItemData* data =
    ItemFile::GetInstance()->At(equipped ? equipped_index_ : 0);
  const uint8_t kind = ItemRow::GetKind(data);

  if (kind > 7 || ItemRow::GetType(data) != 1) {
    return 0;
  }

  const ItemSkills* skills = GetItemSkills(data);
  bool technique;
  if (skills->Contains(g_shared_system_skills[kSkillTechniqueBlock])) {
    technique = false;
  }
  else {
    technique =
      skills->Contains(g_shared_system_skills[kSkillTechnique]) ||
      static_cast<unsigned>(kind - 5) < 2;
  }

  const int used_up = equipped && (equipped_flags_ & 0x8) != 0;
  const int might = ItemRow::Read<uint8_t>(data, 0x58) >> used_up;
  return GetAttack(technique, might, 1, modified);
}

int Unit::GetMagicAttack(int mode) const {
  constexpr int kind = UnitDerivedParams::kMagicAttack;
  int value = GetParam(UnitParams::kMagic, mode) + derived_bonuses_[kind];

  if (equipped_index_ != 0) {
    value += GetItemBonus(ItemFile::GetInstance()->At(equipped_index_), kind);
  }

  if (mode & 1) {
    value = derived_modifiers_[kind].Apply(value);
  }

  return ClampPositive(value);
}

int Unit::GetMagicGuard(int mode) const {
  constexpr int kind = UnitDerivedParams::kMagicGuard;
  int value =
    GetParam(UnitParams::kResistance, mode) + derived_bonuses_[kind];

  if (equipped_index_ != 0) {
    value += GetItemBonus(ItemFile::GetInstance()->At(equipped_index_), kind);
  }

  if (mode & 1) {
    value = derived_modifiers_[kind].Apply(value);
  }

  return ClampPositive(value);
}

int Unit::GetUnknown5(int mode) const {
  constexpr int kind = UnitDerivedParams::kUnknown5;
  int value = GetAttackSpeed(mode) + derived_bonuses_[kind];

  if (equipped_index_ != 0) {
    value += GetItemBonus(ItemFile::GetInstance()->At(equipped_index_), kind);
  }

  if (mode & 1) {
    value = derived_modifiers_[kind].Apply(value);
  }

  return ClampPositive(value);
}

// Only items of type 1 give it, from the mean of two parameters.
int Unit::GetUnknown6(bool modified) const {
  constexpr int kind = UnitDerivedParams::kUnknown6;

  if (equipped_index_ == 0) {
    return 0;
  }

  const ItemData* data = ItemFile::GetInstance()->At(equipped_index_);
  if (ItemRow::GetType(data) != 1) {
    return 0;
  }

  const int bonus = derived_bonuses_[kind] + GetItemBonus(data, kind);
  const int defense = GetParam(UnitParams::kDefense, modified);
  int value = bonus + (GetParam(UnitParams::kSpeed, modified) + defense) / 2;

  if (modified) {
    value = derived_modifiers_[kind].Apply(value);
  }

  return ClampPositive(value);
}

int Unit::GetGuard(int mode) const {
  constexpr int kind = UnitDerivedParams::kGuard;
  int value = GetParam(UnitParams::kDefense, mode) + derived_bonuses_[kind];

  if (equipped_index_ != 0) {
    value += GetItemBonus(ItemFile::GetInstance()->At(equipped_index_), kind);
  }

  if (mode & 1) {
    value = derived_modifiers_[kind].Apply(value);
  }

  return ClampPositive(value);
}

int Unit::GetMinRange(const UnitItem& item) const {
  if (item.GetIndex() == 0) {
    return 0;
  }

  const ItemData* data = item.GetData();
  const SkillData* skill = GetRangeSkill(data);
  return skill != nullptr ?
    SkillRow::GetMinRange(skill) : ItemRow::GetMinRange(data);
}

int Unit::GetMaxRange(const UnitItem& item) const {
  if (item.GetIndex() == 0) {
    return 0;
  }

  const ItemData* data = item.GetData();
  const SkillData* skill = GetRangeSkill(data);
  const int max = skill != nullptr ?
    SkillRow::GetMaxRange(skill) : ItemRow::GetMaxRange(data);
  return GetSkillBonus(ItemRow::GetBonusKey(data) + 0x8) + max;
}

#pragma GCC visibility pop

}
