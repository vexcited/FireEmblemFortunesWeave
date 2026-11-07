#pragma once

#include <cstdint>

#include "game/proc/proc_singleton.hpp"
#include "ui/layout_accessor.hpp"

namespace game::talk {

class Seq;

}

namespace game {

// The menus reach the talk sequence through the global offset table.
template<>
[[gnu::visibility("default")]] talk::Seq* ProcSingleton<talk::Seq>::instance_;

}

namespace game::talk {

// Only the members read outside of the sequence are declared.
class Seq : public ProcSingleton<Seq> {
public:
  bool IsAutoPlay() const {
    return auto_play_ == 1;
  }

private:
  uint8_t unknown_98_[0x89];
  uint8_t auto_play_;
};

// The talk window layout, shared by the talk sequence and its menus.
extern ui::LayoutAccessor g_window_layout;

}
