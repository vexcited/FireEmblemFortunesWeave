#include <algorithm>
#include <cstdint>

#include "game/templates/unrecovered.hpp"

namespace game {

// Stands for a game value sorted by the 32 bit key at offset 8, largest
// first. The lambda comparing the keys was not recovered.
template <unsigned N>
struct UnrecoveredKeyedValue {
  Unrecovered<N>* unknown_00;
  std::uint32_t key;
};

struct KeyGreater {
  template <class T>
  bool operator()(const T& left, const T& right) const {
    return left.key > right.key;
  }
};

template <unsigned N>
using ByPointer = bool (*)(Unrecovered<N>*, Unrecovered<N>*);

}

template void std::__introsort<std::_ClassicAlgPolicy, game::KeyGreater&,
  game::UnrecoveredKeyedValue<200>*, false>(
    game::UnrecoveredKeyedValue<200>*, game::UnrecoveredKeyedValue<200>*,
    game::KeyGreater&, std::ptrdiff_t, bool);
template void std::__introsort<std::_ClassicAlgPolicy, game::ByPointer<201>&,
  game::Unrecovered<201>**, false>(game::Unrecovered<201>**,
    game::Unrecovered<201>**, game::ByPointer<201>&, std::ptrdiff_t, bool);
