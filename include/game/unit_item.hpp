#pragma once

#include <stdint.h>
#include <string.h>

#include "game/data/data_files.hpp"
#include "game/unit.hpp"

namespace game {

#pragma GCC visibility push(hidden)

class Stream;
class Unit;

// Other units reach the item and skill files through the global offset table.
[[gnu::visibility("default")]] extern ItemFile* g_item_file;
[[gnu::visibility("default")]] extern SkillFile* g_skill_file;

// The row layouts are not reconstructed, these read their fields.
template<typename R>
struct RowReader {
  template<typename T>
  static T Read(const R* data, size_t offset) {
    T value;
    memcpy(&value, reinterpret_cast<const char*>(data) + offset, sizeof(T));
    return value;
  }

  // The first body field points to the row the skill bonuses are keyed by.
  static const char* GetBonusKey(const R* data) {
    return Read<const char*>(data, 0x18);
  }
};

struct SkillRow : RowReader<SkillData> {
  static uint8_t GetKind(const SkillData* data) {
    return Read<uint8_t>(data, 0x68);
  }

  static uint8_t GetUses(const SkillData* data) {
    return Read<uint8_t>(data, 0x111);
  }

  static bool HasRange(const SkillData* data) {
    return Read<uint8_t>(data, 0x69) != 0;
  }

  static uint8_t GetMinRange(const SkillData* data) {
    return Read<uint8_t>(data, 0x116);
  }

  static uint8_t GetMaxRange(const SkillData* data) {
    return Read<uint8_t>(data, 0x117);
  }
};

struct ItemRow : RowReader<ItemData> {

  static uint8_t GetKind(const ItemData* data) {
    return Read<uint8_t>(data, 0x48);
  }

  static uint8_t GetType(const ItemData* data) {
    return Read<uint8_t>(data, 0x49);
  }

  static uint8_t GetUses(const ItemData* data) {
    return Read<uint8_t>(data, 0x57);
  }

  static uint8_t GetWeight(const ItemData* data) {
    return Read<uint8_t>(data, 0x59);
  }

  static uint8_t GetMinRange(const ItemData* data) {
    return Read<uint8_t>(data, 0x5c);
  }

  static uint8_t GetMaxRange(const ItemData* data) {
    return Read<uint8_t>(data, 0x5d);
  }

  static const SkillData* GetSkill(const ItemData* data) {
    return Read<const SkillData*>(data, 0xc0);
  }

  static uint32_t GetFlags(const ItemData* data) {
    return Read<uint32_t>(data, 0x150);
  }
};

inline const ItemData* UnitItem::GetData() const {
  return ItemFile::GetInstance()->At(index_);
}

inline const ItemData* UnitItem::GetSharedData() const {
  return g_item_file->At(index_);
}

inline bool UnitItem::IsWeapon() const {
  return ItemRow::GetKind(GetSharedData()) < 8;
}

inline int UnitItemList::FindEquippedWeapon() const {
  for (int i = 0; i < kCount; i++) {
    const UnitItem& item = items[i];
    if (item.GetIndex() != 0 && item.IsEquipped() && item.IsWeapon()) {
      return i;
    }
  }
  return -1;
}

inline int UnitItem::GetMaxUses() const {
  return count_ * ItemRow::GetUses(GetData());
}

inline int UnitItem::GetSharedMaxUses() const {
  return count_ * ItemRow::GetUses(GetSharedData());
}

// A skill owned by a unit, keyed by the skill row index.
class UnitSkill {
public:
  uint32_t GetIndex() const {
    return index_;
  }

  int GetLevel() const {
    return level_;
  }

  int GetExtra() const {
    return extra_;
  }

  const SkillData* GetSharedData() const {
    return g_skill_file->At(index_);
  }

  void Deserialize(Stream& stream);

private:
  uint32_t index_ : 12;
  uint32_t level_ : 7;
  uint32_t extra_ : 5;
  uint32_t unknown_18_ : 8;
};

#pragma GCC visibility pop

}
