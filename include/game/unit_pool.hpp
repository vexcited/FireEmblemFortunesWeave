#pragma once

#include <stdint.h>

#include <unordered_map>

#include "game/singleton.hpp"
#include "game/unit.hpp"

namespace game {

#pragma GCC visibility push(hidden)

// One bit per force type.
struct ForceMask {
  bool Contains(int force) const {
    return bits >> force & 1;
  }

  uint32_t bits;
};

class UnitPool : public Singleton<UnitPool> {
public:
  // The last force keeps the units that left the map.
  static constexpr int kForceCount = 10;

  static const Force& GetForce(int force) {
    return GetInstance()->impl_->forces[force];
  }

  static Unit* Get(const uint8_t& index);
  static Unit* Find(const PersonData* const& person);
  static Unit* Find(const PersonData* const& person, const ForceMask& mask);
  static Unit* GetFirst(const ForceMask& mask);
  static Unit* GetLast(const ForceMask& mask);
  static int Count(const ForceMask& mask);
  static int CountAll(const ForceMask& mask);
  static Unit* GetNext(const Unit* unit, const ForceMask& mask);

  // The slots of all units, null before the pool is built.
  static Unit* GetUnits() {
    Impl* impl = GetInstance()->impl_;
    return impl != nullptr ? impl->units : nullptr;
  }

  static constexpr int kUnitCount = 250;

  // The slot of a unit index, the indices start at 1. The address is computed
  // as an integer since the original still tests the slot against null.
  static Unit* GetSlot(uint8_t index) {
    if (index > kUnitCount) {
      return nullptr;
    }
    const uintptr_t units =
      reinterpret_cast<uintptr_t>(GetInstance()->impl_->units);
    return reinterpret_cast<Unit*>(units + sizeof(Unit) * (index - 1));
  }

private:
  struct Impl {
    Unit units[kUnitCount];
    Force forces[kForceCount];
    std::unordered_map<uint8_t, Unit*> units_by_index;
  };

  uint8_t unknown_08_[0x30];
  Impl* impl_;
};

#pragma GCC visibility pop

}
