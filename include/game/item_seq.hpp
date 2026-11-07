#pragma once

#include <vector>

#include "game/proc/proc_inst.hpp"
#include "game/unit.hpp"
#include "game/vstring.hpp"

namespace game {

#pragma GCC visibility push(hidden)

class ItemSeqConst {
public:
  class List {
  public:
    void Add(const UnitItem& item);

  private:
    std::vector<UnitItem> items_;
  };
};

class ItemSeq {
public:
  // Gives the items to the unit, or to the convoy without one.
  static ProcInst* GainBind(ProcInst* parent, const ItemSeqConst::List& list,
    Unit* unit, const vstring& mid, const vstring& unknown);

  // Gives the items without a message, to the convoy without a unit.
  static bool GainSilent(const ItemSeqConst::List& list, Unit* unit,
    bool unknown);

  // Changes the item the player holds for its upgrade.
  static ProcInst* ChangeBind(ProcInst* parent, const ItemData* item);
};

#pragma GCC visibility pop

}
