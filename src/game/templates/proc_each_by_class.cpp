#include "game/proc/proc_manager.hpp"

// Placeholders named after the RTTI strings of the EachByClass wrappers.
// Only their type information is used, through dynamic_cast.

namespace game::cmdbtl {

class DungeonSortieMenu : public ProcInst {};
class QuickBtlSortieMenu : public ProcInst {};

}

#pragma GCC visibility push(hidden)

namespace game::combat {

class MagicInst : public ProcInst {};

}

namespace game::character {

class EvaporatorImpl : public ProcInst {};

}

namespace game::talk {

class ProcWait : public ProcInst {};

}

namespace game::map {

namespace {

class ProcMapDrawer : public ProcInst {};
class ProcFadeTimeSlip : public ProcInst {};

}

}

namespace game::gmap {

namespace {

class ProcGmapShopGuideMenu : public ProcInst {};

}

}

namespace {

class MotionProc : public game::ProcInst {};

}

#pragma GCC visibility pop

template void game::ProcManager::EachByClass(
  const std::function<void(game::cmdbtl::DungeonSortieMenu*)>&);
template void game::ProcManager::EachByClass(
  const std::function<void(game::cmdbtl::QuickBtlSortieMenu*)>&);
template void game::ProcManager::EachByClass(
  const std::function<void(game::combat::MagicInst*)>&);
template void game::ProcManager::EachByClass(
  const std::function<void(game::character::EvaporatorImpl*)>&);
template void game::ProcManager::EachByClass(
  const std::function<void(game::talk::ProcWait*)>&);

namespace {

template <class T>
using EachWrapper = void (*)(const std::function<void(T*)>&);

// Explicit instantiations over internal types are dropped when unused, so
// these wrappers are kept through their addresses.
[[gnu::used]] const EachWrapper<game::map::ProcMapDrawer> kEachMapDrawer =
  &game::ProcManager::EachByClass<game::map::ProcMapDrawer>;
[[gnu::used]] const EachWrapper<game::map::ProcFadeTimeSlip>
  kEachFadeTimeSlip =
    &game::ProcManager::EachByClass<game::map::ProcFadeTimeSlip>;
[[gnu::used]] const EachWrapper<game::gmap::ProcGmapShopGuideMenu>
  kEachShopGuideMenu =
    &game::ProcManager::EachByClass<game::gmap::ProcGmapShopGuideMenu>;
[[gnu::used]] const EachWrapper<MotionProc> kEachMotionProc =
  &game::ProcManager::EachByClass<MotionProc>;

}
