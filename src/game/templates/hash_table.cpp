#include <cstdint>
#include <string>
#include <string_view>
#include <unordered_map>
#include <vector>

#include "game/templates/unrecovered.hpp"

namespace game {

template <unsigned N>
using HashIndex = std::unordered_map<std::uint64_t, Unrecovered<N>*>;

template <unsigned N>
using NameIndex = std::unordered_map<std::string, Unrecovered<N>*>;

template <unsigned N>
using ListIndex =
  std::unordered_map<std::uint64_t, std::vector<Unrecovered<N>*>>;

template <unsigned N>
using LabelIndex = std::unordered_map<Unrecovered<N>*, std::string>;

// Stands for the transparent string hash of the maps searched by string view.
// It hashes the characters like std::hash, its name was not recovered.
struct UnrecoveredStringHash {
  using is_transparent = void;

  std::size_t operator()(std::string_view text) const {
    return std::hash<std::string_view>()(text);
  }
};

template <unsigned N>
using TextIndex = std::unordered_map<std::string, Unrecovered<N>*,
  UnrecoveredStringHash, std::equal_to<>>;

}

// The original keeps the bucket clearing loop of __do_rehash, so the spec
// builds this file with -fno-builtin-memset.
template void game::HashIndex<0>::__table::__do_rehash<true>(std::size_t);
template void game::HashIndex<1>::__table::__do_rehash<true>(std::size_t);
template void game::HashIndex<2>::__table::__do_rehash<true>(std::size_t);
template void game::HashIndex<3>::__table::__do_rehash<true>(std::size_t);
template void game::HashIndex<4>::__table::__do_rehash<true>(std::size_t);
template void game::HashIndex<5>::__table::__do_rehash<true>(std::size_t);
template void game::HashIndex<6>::__table::__do_rehash<true>(std::size_t);
template void game::HashIndex<7>::__table::__do_rehash<true>(std::size_t);
template void game::HashIndex<8>::__table::__do_rehash<true>(std::size_t);
template void game::HashIndex<9>::__table::__do_rehash<true>(std::size_t);
template void game::HashIndex<10>::__table::__do_rehash<true>(std::size_t);
template void game::HashIndex<11>::__table::__do_rehash<true>(std::size_t);
template void game::HashIndex<12>::__table::__do_rehash<true>(std::size_t);
template void game::HashIndex<13>::__table::__do_rehash<true>(std::size_t);
template void game::HashIndex<14>::__table::__do_rehash<true>(std::size_t);
template void game::HashIndex<15>::__table::__do_rehash<true>(std::size_t);
template void game::HashIndex<16>::__table::__do_rehash<true>(std::size_t);
template void game::HashIndex<17>::__table::__do_rehash<true>(std::size_t);
template void game::HashIndex<18>::__table::__do_rehash<true>(std::size_t);
template void game::HashIndex<19>::__table::__do_rehash<true>(std::size_t);
template void game::HashIndex<20>::__table::__do_rehash<true>(std::size_t);
template void game::HashIndex<21>::__table::__do_rehash<true>(std::size_t);
template void game::HashIndex<22>::__table::__do_rehash<true>(std::size_t);
template void game::HashIndex<23>::__table::__do_rehash<true>(std::size_t);
template void game::HashIndex<24>::__table::__do_rehash<true>(std::size_t);
template void game::HashIndex<25>::__table::__do_rehash<true>(std::size_t);
template void game::HashIndex<26>::__table::__do_rehash<true>(std::size_t);
template void game::HashIndex<27>::__table::__do_rehash<true>(std::size_t);
template void game::HashIndex<28>::__table::__do_rehash<true>(std::size_t);
template void game::HashIndex<29>::__table::__do_rehash<true>(std::size_t);
template void game::HashIndex<30>::__table::__do_rehash<true>(std::size_t);
template void game::HashIndex<31>::__table::__do_rehash<true>(std::size_t);
template void game::HashIndex<32>::__table::__do_rehash<true>(std::size_t);
template void game::HashIndex<33>::__table::__do_rehash<true>(std::size_t);
template void game::HashIndex<34>::__table::__do_rehash<true>(std::size_t);
template void game::HashIndex<35>::__table::__do_rehash<true>(std::size_t);
template void game::HashIndex<36>::__table::__do_rehash<true>(std::size_t);
template void game::HashIndex<37>::__table::__do_rehash<true>(std::size_t);
template void game::HashIndex<38>::__table::__do_rehash<true>(std::size_t);
template void game::HashIndex<39>::__table::__do_rehash<true>(std::size_t);
template void game::HashIndex<40>::__table::__do_rehash<true>(std::size_t);
template void game::HashIndex<41>::__table::__do_rehash<true>(std::size_t);
template void game::HashIndex<42>::__table::__do_rehash<true>(std::size_t);
template void game::HashIndex<43>::__table::__do_rehash<true>(std::size_t);
template void game::HashIndex<44>::__table::__do_rehash<true>(std::size_t);
template void game::HashIndex<45>::__table::__do_rehash<true>(std::size_t);
template void game::HashIndex<46>::__table::__do_rehash<true>(std::size_t);
template void game::HashIndex<47>::__table::__do_rehash<true>(std::size_t);
template void game::HashIndex<48>::__table::__do_rehash<true>(std::size_t);
template void game::HashIndex<49>::__table::__do_rehash<true>(std::size_t);
template void game::HashIndex<50>::__table::__do_rehash<true>(std::size_t);
template void game::HashIndex<51>::__table::__do_rehash<true>(std::size_t);
template void game::HashIndex<52>::__table::__do_rehash<true>(std::size_t);
template void game::HashIndex<53>::__table::__do_rehash<true>(std::size_t);
template void game::HashIndex<54>::__table::__do_rehash<true>(std::size_t);

template game::HashIndex<0>::__table::__node_holder
  game::HashIndex<0>::__table::remove(
    game::HashIndex<0>::__table::const_iterator);
template game::HashIndex<1>::__table::__node_holder
  game::HashIndex<1>::__table::remove(
    game::HashIndex<1>::__table::const_iterator);
template game::HashIndex<2>::__table::__node_holder
  game::HashIndex<2>::__table::remove(
    game::HashIndex<2>::__table::const_iterator);
template game::HashIndex<3>::__table::__node_holder
  game::HashIndex<3>::__table::remove(
    game::HashIndex<3>::__table::const_iterator);
template game::HashIndex<4>::__table::__node_holder
  game::HashIndex<4>::__table::remove(
    game::HashIndex<4>::__table::const_iterator);
template game::HashIndex<5>::__table::__node_holder
  game::HashIndex<5>::__table::remove(
    game::HashIndex<5>::__table::const_iterator);
template game::HashIndex<6>::__table::__node_holder
  game::HashIndex<6>::__table::remove(
    game::HashIndex<6>::__table::const_iterator);
template game::HashIndex<7>::__table::__node_holder
  game::HashIndex<7>::__table::remove(
    game::HashIndex<7>::__table::const_iterator);
template game::HashIndex<8>::__table::__node_holder
  game::HashIndex<8>::__table::remove(
    game::HashIndex<8>::__table::const_iterator);
template game::HashIndex<9>::__table::__node_holder
  game::HashIndex<9>::__table::remove(
    game::HashIndex<9>::__table::const_iterator);
template game::HashIndex<10>::__table::__node_holder
  game::HashIndex<10>::__table::remove(
    game::HashIndex<10>::__table::const_iterator);
template game::HashIndex<11>::__table::__node_holder
  game::HashIndex<11>::__table::remove(
    game::HashIndex<11>::__table::const_iterator);
template game::HashIndex<12>::__table::__node_holder
  game::HashIndex<12>::__table::remove(
    game::HashIndex<12>::__table::const_iterator);
template game::HashIndex<13>::__table::__node_holder
  game::HashIndex<13>::__table::remove(
    game::HashIndex<13>::__table::const_iterator);

template game::HashIndex<0>::~unordered_map();
template game::HashIndex<1>::~unordered_map();
template game::HashIndex<2>::~unordered_map();
template game::HashIndex<3>::~unordered_map();
template game::HashIndex<4>::~unordered_map();
template game::HashIndex<5>::~unordered_map();
template game::HashIndex<6>::~unordered_map();
template game::HashIndex<7>::~unordered_map();
template game::HashIndex<8>::~unordered_map();
template game::HashIndex<9>::~unordered_map();
template game::HashIndex<10>::~unordered_map();
template game::HashIndex<11>::~unordered_map();
template game::HashIndex<12>::~unordered_map();
template game::HashIndex<13>::~unordered_map();
template game::HashIndex<14>::~unordered_map();
template game::HashIndex<15>::~unordered_map();
template game::HashIndex<16>::~unordered_map();
template game::HashIndex<17>::~unordered_map();
template game::HashIndex<18>::~unordered_map();
template game::HashIndex<19>::~unordered_map();

template game::NameIndex<0>::__table::iterator
  game::NameIndex<0>::__table::find(const std::string&);
template game::NameIndex<1>::__table::iterator
  game::NameIndex<1>::__table::find(const std::string&);
template game::NameIndex<2>::__table::iterator
  game::NameIndex<2>::__table::find(const std::string&);
template game::NameIndex<3>::__table::iterator
  game::NameIndex<3>::__table::find(const std::string&);
template game::NameIndex<4>::__table::iterator
  game::NameIndex<4>::__table::find(const std::string&);
template game::NameIndex<5>::__table::iterator
  game::NameIndex<5>::__table::find(const std::string&);
template game::NameIndex<6>::__table::iterator
  game::NameIndex<6>::__table::find(const std::string&);
template game::NameIndex<7>::__table::iterator
  game::NameIndex<7>::__table::find(const std::string&);
template game::NameIndex<8>::__table::iterator
  game::NameIndex<8>::__table::find(const std::string&);
template game::NameIndex<9>::__table::iterator
  game::NameIndex<9>::__table::find(const std::string&);
template game::NameIndex<10>::__table::iterator
  game::NameIndex<10>::__table::find(const std::string&);
template game::NameIndex<11>::__table::iterator
  game::NameIndex<11>::__table::find(const std::string&);
template game::NameIndex<12>::__table::iterator
  game::NameIndex<12>::__table::find(const std::string&);
template game::NameIndex<13>::__table::iterator
  game::NameIndex<13>::__table::find(const std::string&);
template game::NameIndex<14>::__table::iterator
  game::NameIndex<14>::__table::find(const std::string&);
template game::NameIndex<15>::__table::iterator
  game::NameIndex<15>::__table::find(const std::string&);
template game::NameIndex<16>::__table::iterator
  game::NameIndex<16>::__table::find(const std::string&);
template game::NameIndex<17>::__table::iterator
  game::NameIndex<17>::__table::find(const std::string&);
template game::NameIndex<18>::__table::iterator
  game::NameIndex<18>::__table::find(const std::string&);
template game::NameIndex<19>::__table::iterator
  game::NameIndex<19>::__table::find(const std::string&);
template game::NameIndex<20>::__table::iterator
  game::NameIndex<20>::__table::find(const std::string&);
template game::NameIndex<21>::__table::iterator
  game::NameIndex<21>::__table::find(const std::string&);
template game::NameIndex<22>::__table::iterator
  game::NameIndex<22>::__table::find(const std::string&);
template game::NameIndex<23>::__table::iterator
  game::NameIndex<23>::__table::find(const std::string&);

template game::ListIndex<0>::~unordered_map();
template game::ListIndex<1>::~unordered_map();
template game::ListIndex<2>::~unordered_map();
template game::ListIndex<3>::~unordered_map();
template game::ListIndex<4>::~unordered_map();
template game::ListIndex<5>::~unordered_map();
template game::ListIndex<6>::~unordered_map();
template game::ListIndex<7>::~unordered_map();

template game::NameIndex<0>::~unordered_map();
template game::NameIndex<1>::~unordered_map();
template game::NameIndex<2>::~unordered_map();
template game::NameIndex<3>::~unordered_map();

template game::LabelIndex<0>::~unordered_map();

template game::TextIndex<0>::__table::iterator
  game::TextIndex<0>::__table::find(const std::string_view&);
template game::TextIndex<1>::__table::iterator
  game::TextIndex<1>::__table::find(const std::string_view&);
template game::TextIndex<2>::__table::iterator
  game::TextIndex<2>::__table::find(const std::string_view&);
template game::TextIndex<3>::__table::iterator
  game::TextIndex<3>::__table::find(const std::string_view&);
template game::TextIndex<4>::__table::iterator
  game::TextIndex<4>::__table::find(const std::string_view&);
template game::TextIndex<5>::__table::iterator
  game::TextIndex<5>::__table::find(const std::string_view&);
template game::TextIndex<6>::__table::iterator
  game::TextIndex<6>::__table::find(const std::string_view&);
template game::TextIndex<7>::__table::iterator
  game::TextIndex<7>::__table::find(const std::string_view&);
template game::TextIndex<8>::__table::iterator
  game::TextIndex<8>::__table::find(const std::string_view&);
template game::TextIndex<9>::__table::iterator
  game::TextIndex<9>::__table::find(const std::string_view&);
template game::TextIndex<10>::__table::iterator
  game::TextIndex<10>::__table::find(const std::string_view&);
