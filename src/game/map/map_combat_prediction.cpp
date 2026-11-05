#include <stdlib.h>

#include "game/unit.hpp"
#include "game/unit_item.hpp"

namespace game {

#pragma GCC visibility push(hidden)

struct TargetCell {
  uint8_t unknown_00_;
  int8_t x;
  int8_t z;
};

class CombatPredictionBase {
public:
  virtual bool CanUseItem(const UnitItem& item) const;

  virtual int PredictItem(const UnitItem& item) const {
    return 1;
  }

  virtual bool IsItemInRange(const UnitItem& item) const {
    return true;
  }

  virtual bool IsSkillInRange(const UnitSkill& skill) const;

  virtual void Unknown04() {}

  virtual int Unknown05() const {
    return 0;
  }

protected:
  uint8_t unknown_08_[0x48];
  const UnitItem* item_;
  const UnitSkill* skill_;
  const Unit* unit_;
  uint8_t unknown_68_[0x8];
  const TargetCell* target_;
};

static bool IsSpentHealItem(const UnitItem& item, const ItemData* data) {
  const uint8_t kind = ItemRow::GetKind(data);
  return (kind == 5 || kind == 6) &&
    static_cast<unsigned>(item.GetCount() * ItemRow::GetUses(data)) - 1 <
      item.GetUses();
}

// Item types 2 to 4 and 6 to 10 heal or support instead of attacking.
static bool IsSupportType(uint8_t type) {
  return (1ull << type) & 0x7dc;
}

bool CombatPredictionBase::CanUseItem(const UnitItem& item) const {
  const ItemData* data = item.GetSharedData();
  const uint8_t kind = ItemRow::GetKind(data);
  const uint8_t type = ItemRow::GetType(data);

  if (kind <= 7 && type == 1 && !IsSpentHealItem(item, data) &&
      !item.IsBroken()) {
    return item.CanEquip(unit_);
  }

  if (kind > 7 || !IsSupportType(type)) {
    return false;
  }

  if (IsSpentHealItem(item, data)) {
    return false;
  }

  return !item.IsBroken() && type == 7;
}

bool CombatPredictionBase::IsSkillInRange(const UnitSkill& skill) const {
  return true;
}

namespace map {

struct ItemSlot {
  const UnitItem* item;
  const void* unknown_08_ = nullptr;
};

class MapCombatPrediction : public CombatPredictionBase {
public:
  int PredictItem(const UnitItem& item) const override;
  bool IsItemInRange(const UnitItem& item) const override;
  bool IsSkillInRange(const UnitSkill& skill) const override;
  void Unknown04() override;
  int Unknown05() const override;

private:
  int FindItem(const Unit* unit, const ItemSlot& slot) const;

  static int Predict(const Unit* unit, const TargetCell* target, int item,
    int kind);

  // The distance from the target to the nearest cell the unit covers.
  int GetDistance() const {
    const int x = target_->x;
    const int z = target_->z;
    const int left = unit_->GetX();
    const int top = unit_->GetZ();
    const int size = unit_->GetSize();

    if (static_cast<unsigned>(size * size) < 2) {
      return abs(x - left) + abs(z - top);
    }

    unsigned distance = 10000;
    for (int cz = top; cz < top + size; cz++) {
      for (int cx = left; cx < left + size; cx++) {
        const unsigned current = abs(x - cx) + abs(z - cz);
        if (current < distance) {
          distance = current;
        }
      }
    }

    return distance;
  }
};

int MapCombatPrediction::PredictItem(const UnitItem& item) const {
  const Unit* unit = unit_;

  if (unit == nullptr || target_ == nullptr) {
    return 0;
  }

  const int index = FindItem(unit, ItemSlot{&item});
  const ItemData* data = item.GetSharedData();
  const uint8_t kind = ItemRow::GetKind(data);
  const uint8_t type = ItemRow::GetType(data);

  if (kind <= 7 && type == 1 && !IsSpentHealItem(item, data) &&
      !item.IsBroken()) {
    return Predict(unit, target_, index, 3);
  }

  if (kind <= 7 && IsSupportType(type) && !IsSpentHealItem(item, data) &&
      !item.IsBroken()) {
    return Predict(unit, target_, index, 4);
  }

  return 0;
}

bool MapCombatPrediction::IsItemInRange(const UnitItem& item) const {
  if (unit_ == nullptr || target_ == nullptr) {
    return false;
  }

  int min = 0;
  int max = 0;

  if (item.GetIndex() != 0) {
    const ItemData* data = item.GetData();
    const SkillData* skill = ItemRow::GetSkill(data);
    const SkillData* range = nullptr;

    if (skill != nullptr && ItemRow::GetKind(data) <= 7 &&
        SkillRow::HasRange(skill) && SkillRow::GetKind(skill) != 2) {
      range = skill;
    }

    min = range != nullptr ?
      SkillRow::GetMinRange(range) : ItemRow::GetMinRange(data);
    const int base = range != nullptr ?
      SkillRow::GetMaxRange(range) : ItemRow::GetMaxRange(data);
    max = unit_->GetSkillBonus(ItemRow::GetBonusKey(data) + 0x8) + base;
  }

  const int distance = GetDistance();
  return min <= distance && distance <= max;
}

bool MapCombatPrediction::IsSkillInRange(const UnitSkill& skill) const {
  if (unit_ == nullptr || target_ == nullptr) {
    return false;
  }

  const SkillData* data = skill.GetSharedData();
  const int min = SkillRow::GetMinRange(data);
  const int max = SkillRow::GetMaxRange(data);
  const int bonus = skill.GetIndex() != 0 ?
    unit_->GetSkillBonus(SkillRow::GetBonusKey(data) + 0xe0) : 0;

  const int distance = GetDistance();
  return distance >= min && distance <= bonus + max;
}

}

#pragma GCC visibility pop

}
