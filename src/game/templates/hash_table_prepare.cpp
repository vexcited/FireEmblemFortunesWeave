#include <cstdint>
#include <unordered_map>

#include "game/templates/unrecovered.hpp"

namespace game {

template<unsigned N>
using HashIndex = std::unordered_map<std::uint64_t, Unrecovered<N>*>;

}

// Finds an equal key or grows the table before a node is linked in.
#define PREPARE(n) \
  template game::HashIndex<n>::__table::__next_pointer \
  game::HashIndex<n>::__table::__node_insert_unique_prepare( \
    std::size_t, game::HashIndex<n>::__table::value_type&);

PREPARE(0)
PREPARE(1)
PREPARE(2)
PREPARE(3)
PREPARE(4)
PREPARE(5)
PREPARE(6)
