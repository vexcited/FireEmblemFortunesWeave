#include <cstdint>
#include <memory>
#include <vector>

#include "game/templates/unrecovered.hpp"

namespace game {

template <unsigned N>
using PointerList = std::vector<Unrecovered<N>*>;

template <unsigned N>
using WordList = std::vector<UnrecoveredValue<N, 4>>;

template <unsigned N>
using LongList = std::vector<UnrecoveredValue<N, 8>>;

template <unsigned N>
using PairList = std::vector<UnrecoveredValue<N, 16, 8>>;

template <unsigned N, std::size_t Size, std::size_t Align>
using ValueList = std::vector<UnrecoveredValue<N, Size, Align>>;

template <unsigned N>
using SharedList = std::vector<std::shared_ptr<Unrecovered<N>>>;

template <unsigned N>
using WeakList = std::vector<std::weak_ptr<Unrecovered<N>>>;

}

template void game::WordList<0>::push_back(
  const game::UnrecoveredValue<0, 4>&);
template void game::WordList<1>::push_back(
  const game::UnrecoveredValue<1, 4>&);
template void game::WordList<2>::push_back(
  const game::UnrecoveredValue<2, 4>&);
template void game::WordList<3>::push_back(
  const game::UnrecoveredValue<3, 4>&);
template void game::WordList<4>::push_back(
  const game::UnrecoveredValue<4, 4>&);
template void game::WordList<5>::push_back(
  const game::UnrecoveredValue<5, 4>&);
template void game::WordList<6>::push_back(
  const game::UnrecoveredValue<6, 4>&);
template void game::WordList<7>::push_back(
  const game::UnrecoveredValue<7, 4>&);
template void game::WordList<8>::push_back(
  const game::UnrecoveredValue<8, 4>&);
template void game::WordList<9>::push_back(
  const game::UnrecoveredValue<9, 4>&);
template void game::WordList<10>::push_back(
  const game::UnrecoveredValue<10, 4>&);
template void game::WordList<11>::push_back(
  const game::UnrecoveredValue<11, 4>&);
template void game::WordList<12>::push_back(
  const game::UnrecoveredValue<12, 4>&);

template void game::LongList<0>::push_back(
  const game::UnrecoveredValue<0, 8>&);
template void game::LongList<1>::push_back(
  const game::UnrecoveredValue<1, 8>&);
template void game::LongList<2>::push_back(
  const game::UnrecoveredValue<2, 8>&);
template void game::LongList<3>::push_back(
  const game::UnrecoveredValue<3, 8>&);
template void game::LongList<4>::push_back(
  const game::UnrecoveredValue<4, 8>&);
template void game::LongList<5>::push_back(
  const game::UnrecoveredValue<5, 8>&);
template void game::LongList<6>::push_back(
  const game::UnrecoveredValue<6, 8>&);
template void game::LongList<7>::push_back(
  const game::UnrecoveredValue<7, 8>&);
template void game::LongList<8>::push_back(
  const game::UnrecoveredValue<8, 8>&);
template void game::LongList<9>::push_back(
  const game::UnrecoveredValue<9, 8>&);
template void game::LongList<10>::push_back(
  const game::UnrecoveredValue<10, 8>&);
template void game::LongList<11>::push_back(
  const game::UnrecoveredValue<11, 8>&);
template void game::LongList<12>::push_back(
  const game::UnrecoveredValue<12, 8>&);
template void game::LongList<13>::push_back(
  const game::UnrecoveredValue<13, 8>&);
template void game::LongList<14>::push_back(
  const game::UnrecoveredValue<14, 8>&);
template void game::LongList<15>::push_back(
  const game::UnrecoveredValue<15, 8>&);

template void game::PairList<0>::push_back(
  const game::UnrecoveredValue<0, 16, 8>&);
template void game::PairList<1>::push_back(
  const game::UnrecoveredValue<1, 16, 8>&);
template void game::PairList<2>::push_back(
  const game::UnrecoveredValue<2, 16, 8>&);
template void game::PairList<3>::push_back(
  const game::UnrecoveredValue<3, 16, 8>&);
template void game::PairList<4>::push_back(
  const game::UnrecoveredValue<4, 16, 8>&);
template void game::PairList<5>::push_back(
  const game::UnrecoveredValue<5, 16, 8>&);
template void game::PairList<6>::push_back(
  const game::UnrecoveredValue<6, 16, 8>&);
template void game::PairList<7>::push_back(
  const game::UnrecoveredValue<7, 16, 8>&);
template void game::PairList<8>::push_back(
  const game::UnrecoveredValue<8, 16, 8>&);
template void game::PairList<9>::push_back(
  const game::UnrecoveredValue<9, 16, 8>&);

template void game::PointerList<0>::__assign_with_size(
  game::Unrecovered<0>**, game::Unrecovered<0>**, long);
template void game::PointerList<1>::__assign_with_size(
  game::Unrecovered<1>**, game::Unrecovered<1>**, long);
template void game::PointerList<2>::__assign_with_size(
  game::Unrecovered<2>**, game::Unrecovered<2>**, long);
template void game::PointerList<3>::__assign_with_size(
  game::Unrecovered<3>**, game::Unrecovered<3>**, long);
template void game::PointerList<4>::__assign_with_size(
  game::Unrecovered<4>**, game::Unrecovered<4>**, long);
template void game::PointerList<5>::__assign_with_size(
  game::Unrecovered<5>**, game::Unrecovered<5>**, long);
template void game::PointerList<6>::__assign_with_size(
  game::Unrecovered<6>**, game::Unrecovered<6>**, long);
template void game::PointerList<7>::__assign_with_size(
  game::Unrecovered<7>**, game::Unrecovered<7>**, long);
template void game::PointerList<8>::__assign_with_size(
  game::Unrecovered<8>**, game::Unrecovered<8>**, long);
template void game::PointerList<9>::__assign_with_size(
  game::Unrecovered<9>**, game::Unrecovered<9>**, long);
template void game::PointerList<10>::__assign_with_size(
  game::Unrecovered<10>**, game::Unrecovered<10>**, long);
template void game::PointerList<11>::__assign_with_size(
  game::Unrecovered<11>**, game::Unrecovered<11>**, long);
template void game::PointerList<12>::__assign_with_size(
  game::Unrecovered<12>**, game::Unrecovered<12>**, long);
template void game::PointerList<13>::__assign_with_size(
  game::Unrecovered<13>**, game::Unrecovered<13>**, long);
template void game::PointerList<14>::__assign_with_size(
  game::Unrecovered<14>**, game::Unrecovered<14>**, long);

template void game::WordList<0>::__assign_with_size(
  game::UnrecoveredValue<0, 4>*, game::UnrecoveredValue<0, 4>*, long);
template void game::WordList<1>::__assign_with_size(
  game::UnrecoveredValue<1, 4>*, game::UnrecoveredValue<1, 4>*, long);
template void game::WordList<2>::__assign_with_size(
  game::UnrecoveredValue<2, 4>*, game::UnrecoveredValue<2, 4>*, long);
template void game::WordList<3>::__assign_with_size(
  game::UnrecoveredValue<3, 4>*, game::UnrecoveredValue<3, 4>*, long);

template game::PointerList<0>::~vector();
template game::PointerList<1>::~vector();
template game::PointerList<2>::~vector();
template game::PointerList<3>::~vector();
template game::PointerList<4>::~vector();
template game::PointerList<5>::~vector();
template game::PointerList<6>::~vector();
template game::PointerList<7>::~vector();
template game::PointerList<8>::~vector();
template game::PointerList<9>::~vector();
template game::PointerList<10>::~vector();
template game::PointerList<11>::~vector();
template game::PointerList<12>::~vector();
template game::PointerList<13>::~vector();
template game::PointerList<14>::~vector();
template game::PointerList<15>::~vector();
template game::PointerList<16>::~vector();
template game::PointerList<17>::~vector();
template game::PointerList<18>::~vector();
template game::PointerList<19>::~vector();
template game::PointerList<20>::~vector();
template game::PointerList<21>::~vector();
template game::PointerList<22>::~vector();
template game::PointerList<23>::~vector();
template game::PointerList<24>::~vector();
template game::PointerList<25>::~vector();
template game::PointerList<26>::~vector();
template game::PointerList<27>::~vector();
template game::PointerList<28>::~vector();
template game::PointerList<29>::~vector();
template game::PointerList<30>::~vector();
template game::PointerList<31>::~vector();
template game::PointerList<32>::~vector();
template game::PointerList<33>::~vector();
template game::PointerList<34>::~vector();
template game::PointerList<35>::~vector();
template game::PointerList<36>::~vector();
template game::PointerList<37>::~vector();

template std::shared_ptr<game::Unrecovered<0>>&
  game::SharedList<0>::emplace_back(
    const std::shared_ptr<game::Unrecovered<0>>&);
template std::shared_ptr<game::Unrecovered<1>>&
  game::SharedList<1>::emplace_back(
    const std::shared_ptr<game::Unrecovered<1>>&);
template std::shared_ptr<game::Unrecovered<2>>&
  game::SharedList<2>::emplace_back(
    const std::shared_ptr<game::Unrecovered<2>>&);
template std::shared_ptr<game::Unrecovered<3>>&
  game::SharedList<3>::emplace_back(
    const std::shared_ptr<game::Unrecovered<3>>&);
template std::shared_ptr<game::Unrecovered<4>>&
  game::SharedList<4>::emplace_back(
    const std::shared_ptr<game::Unrecovered<4>>&);
template std::shared_ptr<game::Unrecovered<5>>&
  game::SharedList<5>::emplace_back(
    const std::shared_ptr<game::Unrecovered<5>>&);
template std::shared_ptr<game::Unrecovered<6>>&
  game::SharedList<6>::emplace_back(
    const std::shared_ptr<game::Unrecovered<6>>&);
template std::shared_ptr<game::Unrecovered<7>>&
  game::SharedList<7>::emplace_back(
    const std::shared_ptr<game::Unrecovered<7>>&);
template std::shared_ptr<game::Unrecovered<8>>&
  game::SharedList<8>::emplace_back(
    const std::shared_ptr<game::Unrecovered<8>>&);
template std::shared_ptr<game::Unrecovered<9>>&
  game::SharedList<9>::emplace_back(
    const std::shared_ptr<game::Unrecovered<9>>&);
template std::shared_ptr<game::Unrecovered<10>>&
  game::SharedList<10>::emplace_back(
    const std::shared_ptr<game::Unrecovered<10>>&);
template std::shared_ptr<game::Unrecovered<11>>&
  game::SharedList<11>::emplace_back(
    const std::shared_ptr<game::Unrecovered<11>>&);
template std::shared_ptr<game::Unrecovered<12>>&
  game::SharedList<12>::emplace_back(
    const std::shared_ptr<game::Unrecovered<12>>&);
template std::shared_ptr<game::Unrecovered<13>>&
  game::SharedList<13>::emplace_back(
    const std::shared_ptr<game::Unrecovered<13>>&);
template std::shared_ptr<game::Unrecovered<14>>&
  game::SharedList<14>::emplace_back(
    const std::shared_ptr<game::Unrecovered<14>>&);

template std::weak_ptr<game::Unrecovered<0>>&
  game::WeakList<0>::emplace_back(
    const std::weak_ptr<game::Unrecovered<0>>&);
template std::weak_ptr<game::Unrecovered<1>>&
  game::WeakList<1>::emplace_back(
    const std::weak_ptr<game::Unrecovered<1>>&);
template std::weak_ptr<game::Unrecovered<2>>&
  game::WeakList<2>::emplace_back(
    const std::weak_ptr<game::Unrecovered<2>>&);
template std::weak_ptr<game::Unrecovered<3>>&
  game::WeakList<3>::emplace_back(
    const std::weak_ptr<game::Unrecovered<3>>&);
template std::weak_ptr<game::Unrecovered<4>>&
  game::WeakList<4>::emplace_back(
    const std::weak_ptr<game::Unrecovered<4>>&);
template std::weak_ptr<game::Unrecovered<5>>&
  game::WeakList<5>::emplace_back(
    const std::weak_ptr<game::Unrecovered<5>>&);
template std::weak_ptr<game::Unrecovered<6>>&
  game::WeakList<6>::emplace_back(
    const std::weak_ptr<game::Unrecovered<6>>&);

// Link time optimization inlined emplace_back into these, so the spec builds
// this file in that mode.
template void game::SharedList<0>::push_back(
  std::shared_ptr<game::Unrecovered<0>>&&);
template void game::SharedList<1>::push_back(
  std::shared_ptr<game::Unrecovered<1>>&&);
template void game::SharedList<2>::push_back(
  std::shared_ptr<game::Unrecovered<2>>&&);
template void game::SharedList<3>::push_back(
  std::shared_ptr<game::Unrecovered<3>>&&);
template void game::SharedList<4>::push_back(
  std::shared_ptr<game::Unrecovered<4>>&&);
template void game::SharedList<5>::push_back(
  std::shared_ptr<game::Unrecovered<5>>&&);
template void game::SharedList<6>::push_back(
  std::shared_ptr<game::Unrecovered<6>>&&);
template void game::SharedList<7>::push_back(
  std::shared_ptr<game::Unrecovered<7>>&&);
template void game::SharedList<8>::push_back(
  std::shared_ptr<game::Unrecovered<8>>&&);
template void game::SharedList<9>::push_back(
  std::shared_ptr<game::Unrecovered<9>>&&);
template void game::SharedList<10>::push_back(
  std::shared_ptr<game::Unrecovered<10>>&&);
template void game::SharedList<11>::push_back(
  std::shared_ptr<game::Unrecovered<11>>&&);
template void game::SharedList<12>::push_back(
  std::shared_ptr<game::Unrecovered<12>>&&);

template void game::ValueList<0, 16, 8>::__append(std::size_t);
template void game::ValueList<1, 16, 8>::__append(std::size_t);

template void game::ValueList<0, 8, 8>::__append(std::size_t);
template void game::ValueList<1, 8, 8>::__append(std::size_t);
template void game::ValueList<2, 8, 8>::__append(std::size_t);
template void game::ValueList<3, 8, 8>::__append(std::size_t);
template void game::ValueList<4, 8, 8>::__append(std::size_t);

template void game::ValueList<0, 4, 4>::__append(std::size_t);
template void game::ValueList<1, 4, 4>::__append(std::size_t);

template void game::ValueList<0, 24, 8>::__append(std::size_t);
template void game::ValueList<1, 24, 8>::__append(std::size_t);
template void game::ValueList<2, 24, 8>::__append(std::size_t);
template void game::ValueList<3, 24, 8>::__append(std::size_t);
template void game::ValueList<4, 24, 8>::__append(std::size_t);

template void game::ValueList<0, 12, 4>::__append(std::size_t);
template void game::ValueList<1, 12, 4>::__append(std::size_t);

template void game::ValueList<0, 4, 4>::__append(std::size_t,
  const game::UnrecoveredValue<0, 4, 4>&);
template void game::ValueList<1, 4, 4>::__append(std::size_t,
  const game::UnrecoveredValue<1, 4, 4>&);

template void game::ValueList<0, 8, 8>::__append(std::size_t,
  const game::UnrecoveredValue<0, 8, 8>&);
template void game::ValueList<1, 8, 8>::__append(std::size_t,
  const game::UnrecoveredValue<1, 8, 8>&);
template void game::ValueList<2, 8, 8>::__append(std::size_t,
  const game::UnrecoveredValue<2, 8, 8>&);
