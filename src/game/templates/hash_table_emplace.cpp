#include <cstdint>
#include <unordered_map>
#include <utility>

#include "game/templates/unrecovered.hpp"

namespace game {

template <unsigned N>
using HashIndex = std::unordered_map<std::uint64_t, Unrecovered<N>*>;

template <unsigned N>
using HashIndexEntry =
  std::pair<typename HashIndex<N>::__table::iterator, bool>;

}

#define EMPLACE(n) \
  template game::HashIndexEntry<n> \
  game::HashIndex<n>::__table::__emplace_unique_key_args( \
    const std::uint64_t&, std::uint64_t&, game::Unrecovered<n>*&);

EMPLACE(0)
EMPLACE(1)
EMPLACE(2)
EMPLACE(3)
EMPLACE(4)
EMPLACE(5)
