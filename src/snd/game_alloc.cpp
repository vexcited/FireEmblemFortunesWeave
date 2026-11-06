#include "snd/fnd/fast_alloc.hpp"
#include "snd/game.hpp"

namespace snd {

namespace {

[[gnu::used]] fnd::FastAlloc<Env::Pos, 0> s_envPositions;
[[gnu::used]] fnd::FastAlloc<Env::Element, 0> s_envElements;
[[gnu::used]] fnd::FastAlloc<Env::Group, 0> s_envGroups;
[[gnu::used]] fnd::FastAlloc<Wind::Pos, 0> s_windPositions;
[[gnu::used]] fnd::FastAlloc<Wind::Element, 0> s_windElements;
[[gnu::used]] fnd::FastAlloc<Wind::Group, 0> s_windGroups;

[[gnu::used]] Env::Element s_envElement;
[[gnu::used]] Env::Group s_envGroup;
[[gnu::used]] Wind::Element s_windElement;
[[gnu::used]] Wind::Group s_windGroup;

}

static_assert(sizeof(Env::Element) == 0xd8);
static_assert(sizeof(Env::Group) == 0x40);
static_assert(sizeof(Wind::Element) == 0xb0);
static_assert(sizeof(Wind::Group) == 0x38);

}
