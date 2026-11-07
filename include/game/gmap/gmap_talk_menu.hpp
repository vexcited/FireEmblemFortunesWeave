#pragma once

#include "game/menu/belonging_menu.hpp"

namespace game::gmap {

// The talk menu of the world map, final so casts compare its table.
class GmapTalkMenu final : public menu::BelongingMenu {
public:
  ~GmapTalkMenu() override;
};

// Whether a process above the given one runs the talk menu.
inline bool IsUnderTalkMenu(const ProcInst* proc) {
  for (const ProcInst* parent = proc->GetUnknown20(); parent != nullptr;
    parent = parent->GetUnknown20()) {
    if (dynamic_cast<const GmapTalkMenu*>(parent) != nullptr) {
      return true;
    }
  }
  return false;
}

}
