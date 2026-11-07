#pragma once

#include <cstdint>
#include <functional>
#include <memory>
#include <vector>

namespace game {

class Unit;

#pragma GCC visibility push(hidden)

namespace facility {

// Selects the units a facility list is rebuilt from.
struct FacilityUnitListBuildArgs {
  uint8_t kind;
  std::function<bool(Unit*)> filter;
};

}

// A list of units the menus cycle through with the shoulder buttons.
class UnitCycleList {
public:
  Unit* GetNext(Unit* unit, int mode);
  Unit* GetPrevious(Unit* unit, int mode);
  void Build(const facility::FacilityUnitListBuildArgs& args);
};

// The facility state of a unit in a list.
struct UnitListEntry {
  Unit* unit;
  uint8_t unknown_08_[0x28];
  uint16_t flags;
};

// The flags of the units missing from the lists.
[[gnu::visibility("default")]] extern const uint16_t kNoUnitListFlags;

// The unit lists of the hub facilities, owned by a global pointer.
class UnitListSet {
public:
  static UnitListSet* instance_;

  UnitCycleList* GetList(int index) const {
    return lists_[index];
  }

  std::shared_ptr<UnitListEntry> Find(int kind, const Unit* unit) const {
    for (const std::shared_ptr<UnitListEntry>& entry : entries_[kind]->list) {
      if (entry->unit == unit) {
        return entry;
      }
    }
    return nullptr;
  }

private:
  struct Entries {
    std::vector<std::shared_ptr<UnitListEntry>> list;
  };

  Entries* entries_[3];
  UnitCycleList* lists_[3];
};

#pragma GCC visibility pop

}
