#include <algorithm>
#include <utility>

#include "game/templates/unrecovered.hpp"

namespace game {

template <unsigned N>
using Range = std::pair<Unrecovered<N>**, Unrecovered<N>**>;

template <unsigned N>
using ValueRange =
  std::pair<UnrecoveredValue<N, 4>*, UnrecoveredValue<N, 4>*>;

}

// Copies returning both ends come from __rotate, the others from std::rotate.
template game::Range<0> std::__rotate<std::_ClassicAlgPolicy>(
  game::Unrecovered<0>**, game::Unrecovered<0>**, game::Unrecovered<0>**);
template game::Range<1> std::__rotate<std::_ClassicAlgPolicy>(
  game::Unrecovered<1>**, game::Unrecovered<1>**, game::Unrecovered<1>**);
template game::Range<2> std::__rotate<std::_ClassicAlgPolicy>(
  game::Unrecovered<2>**, game::Unrecovered<2>**, game::Unrecovered<2>**);
template game::Range<3> std::__rotate<std::_ClassicAlgPolicy>(
  game::Unrecovered<3>**, game::Unrecovered<3>**, game::Unrecovered<3>**);
template game::Range<4> std::__rotate<std::_ClassicAlgPolicy>(
  game::Unrecovered<4>**, game::Unrecovered<4>**, game::Unrecovered<4>**);
template game::Range<5> std::__rotate<std::_ClassicAlgPolicy>(
  game::Unrecovered<5>**, game::Unrecovered<5>**, game::Unrecovered<5>**);

template game::ValueRange<0> std::__rotate<std::_ClassicAlgPolicy>(
  game::UnrecoveredValue<0, 4>*, game::UnrecoveredValue<0, 4>*,
  game::UnrecoveredValue<0, 4>*);

template game::Unrecovered<8>** std::rotate(
  game::Unrecovered<8>**, game::Unrecovered<8>**, game::Unrecovered<8>**);
template game::Unrecovered<9>** std::rotate(
  game::Unrecovered<9>**, game::Unrecovered<9>**, game::Unrecovered<9>**);
template game::Unrecovered<10>** std::rotate(
  game::Unrecovered<10>**, game::Unrecovered<10>**, game::Unrecovered<10>**);
template game::Unrecovered<11>** std::rotate(
  game::Unrecovered<11>**, game::Unrecovered<11>**, game::Unrecovered<11>**);
template game::Unrecovered<12>** std::rotate(
  game::Unrecovered<12>**, game::Unrecovered<12>**, game::Unrecovered<12>**);
template game::Unrecovered<13>** std::rotate(
  game::Unrecovered<13>**, game::Unrecovered<13>**, game::Unrecovered<13>**);
