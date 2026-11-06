#include <algorithm>
#include <cstdint>

#include "game/templates/unrecovered.hpp"

namespace game {

// Stands for a sound data entry sorted by the 32 bit key at offset 8. The
// lambda comparing the keys was not recovered either.
template <unsigned N>
struct UnrecoveredKeyed {
  Unrecovered<N>* unknown_00;
  std::uint32_t key;
};

struct KeyLess {
  template <class T>
  bool operator()(const T* left, const T* right) const {
    return left->key < right->key;
  }
};

template <unsigned N>
using KeyedRange = UnrecoveredKeyed<N>**;

}

template bool std::__insertion_sort_incomplete<std::_ClassicAlgPolicy,
  game::KeyLess&, game::KeyedRange<0>>(game::KeyedRange<0>,
    game::KeyedRange<0>, game::KeyLess&);
template bool std::__insertion_sort_incomplete<std::_ClassicAlgPolicy,
  game::KeyLess&, game::KeyedRange<1>>(game::KeyedRange<1>,
    game::KeyedRange<1>, game::KeyLess&);
template bool std::__insertion_sort_incomplete<std::_ClassicAlgPolicy,
  game::KeyLess&, game::KeyedRange<2>>(game::KeyedRange<2>,
    game::KeyedRange<2>, game::KeyLess&);
template bool std::__insertion_sort_incomplete<std::_ClassicAlgPolicy,
  game::KeyLess&, game::KeyedRange<3>>(game::KeyedRange<3>,
    game::KeyedRange<3>, game::KeyLess&);
template bool std::__insertion_sort_incomplete<std::_ClassicAlgPolicy,
  game::KeyLess&, game::KeyedRange<4>>(game::KeyedRange<4>,
    game::KeyedRange<4>, game::KeyLess&);

template void std::__introsort<std::_ClassicAlgPolicy, game::KeyLess&,
  game::KeyedRange<0>, false>(game::KeyedRange<0>, game::KeyedRange<0>,
    game::KeyLess&, std::ptrdiff_t, bool);
template void std::__introsort<std::_ClassicAlgPolicy, game::KeyLess&,
  game::KeyedRange<1>, false>(game::KeyedRange<1>, game::KeyedRange<1>,
    game::KeyLess&, std::ptrdiff_t, bool);
template void std::__introsort<std::_ClassicAlgPolicy, game::KeyLess&,
  game::KeyedRange<2>, false>(game::KeyedRange<2>, game::KeyedRange<2>,
    game::KeyLess&, std::ptrdiff_t, bool);
template void std::__introsort<std::_ClassicAlgPolicy, game::KeyLess&,
  game::KeyedRange<3>, false>(game::KeyedRange<3>, game::KeyedRange<3>,
    game::KeyLess&, std::ptrdiff_t, bool);
template void std::__introsort<std::_ClassicAlgPolicy, game::KeyLess&,
  game::KeyedRange<4>, false>(game::KeyedRange<4>, game::KeyedRange<4>,
    game::KeyLess&, std::ptrdiff_t, bool);
