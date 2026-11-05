#include <deque>

#include "game/templates/unrecovered.hpp"

namespace game {

template <unsigned N>
using PointerQueue = std::deque<Unrecovered<N>*>;

template <unsigned N, std::size_t Size, std::size_t Align = Size>
using ValueQueue = std::deque<UnrecoveredValue<N, Size, Align>>;

template <unsigned N>
using PointerQueueMap = std::__split_buffer<Unrecovered<N>**,
  std::allocator<Unrecovered<N>**>>;

}

template void game::PointerQueueMap<0>::emplace_back(
  game::Unrecovered<0>**&);
template void game::PointerQueueMap<1>::emplace_back(
  game::Unrecovered<1>**&);
template void game::PointerQueueMap<2>::emplace_back(
  game::Unrecovered<2>**&);
template void game::PointerQueueMap<3>::emplace_back(
  game::Unrecovered<3>**&);
template void game::PointerQueueMap<4>::emplace_back(
  game::Unrecovered<4>**&);
template void game::PointerQueueMap<5>::emplace_back(
  game::Unrecovered<5>**&);
template void game::PointerQueueMap<6>::emplace_back(
  game::Unrecovered<6>**&);
template void game::PointerQueueMap<7>::emplace_back(
  game::Unrecovered<7>**&);
template void game::PointerQueueMap<8>::emplace_back(
  game::Unrecovered<8>**&);
template void game::PointerQueueMap<9>::emplace_back(
  game::Unrecovered<9>**&);
template void game::PointerQueueMap<10>::emplace_back(
  game::Unrecovered<10>**&);
template void game::PointerQueueMap<11>::emplace_back(
  game::Unrecovered<11>**&);
template void game::PointerQueueMap<12>::emplace_back(
  game::Unrecovered<12>**&);
template void game::PointerQueueMap<13>::emplace_back(
  game::Unrecovered<13>**&);
template void game::PointerQueueMap<14>::emplace_back(
  game::Unrecovered<14>**&);
template void game::PointerQueueMap<15>::emplace_back(
  game::Unrecovered<15>**&);
template void game::PointerQueueMap<16>::emplace_back(
  game::Unrecovered<16>**&);
template void game::PointerQueueMap<17>::emplace_back(
  game::Unrecovered<17>**&);
template void game::PointerQueueMap<18>::emplace_back(
  game::Unrecovered<18>**&);
template void game::PointerQueueMap<19>::emplace_back(
  game::Unrecovered<19>**&);
template void game::PointerQueueMap<20>::emplace_back(
  game::Unrecovered<20>**&);
template void game::PointerQueueMap<21>::emplace_back(
  game::Unrecovered<21>**&);
template void game::PointerQueueMap<22>::emplace_back(
  game::Unrecovered<22>**&);
template void game::PointerQueueMap<23>::emplace_back(
  game::Unrecovered<23>**&);
template void game::PointerQueueMap<24>::emplace_back(
  game::Unrecovered<24>**&);
template void game::PointerQueueMap<25>::emplace_back(
  game::Unrecovered<25>**&);
template void game::PointerQueueMap<26>::emplace_back(
  game::Unrecovered<26>**&);
template void game::PointerQueueMap<27>::emplace_back(
  game::Unrecovered<27>**&);
template void game::PointerQueueMap<28>::emplace_back(
  game::Unrecovered<28>**&);
template void game::PointerQueueMap<29>::emplace_back(
  game::Unrecovered<29>**&);
template void game::PointerQueueMap<30>::emplace_back(
  game::Unrecovered<30>**&);
template void game::PointerQueueMap<31>::emplace_back(
  game::Unrecovered<31>**&);
template void game::PointerQueueMap<32>::emplace_back(
  game::Unrecovered<32>**&);
template void game::PointerQueueMap<33>::emplace_back(
  game::Unrecovered<33>**&);
template void game::PointerQueueMap<34>::emplace_back(
  game::Unrecovered<34>**&);
template void game::PointerQueueMap<35>::emplace_back(
  game::Unrecovered<35>**&);
template void game::PointerQueueMap<36>::emplace_back(
  game::Unrecovered<36>**&);
template void game::PointerQueueMap<37>::emplace_back(
  game::Unrecovered<37>**&);
template void game::PointerQueueMap<38>::emplace_back(
  game::Unrecovered<38>**&);
template void game::PointerQueueMap<39>::emplace_back(
  game::Unrecovered<39>**&);
template void game::PointerQueueMap<40>::emplace_back(
  game::Unrecovered<40>**&);
template void game::PointerQueueMap<41>::emplace_back(
  game::Unrecovered<41>**&);
template void game::PointerQueueMap<42>::emplace_back(
  game::Unrecovered<42>**&);
template void game::PointerQueueMap<43>::emplace_back(
  game::Unrecovered<43>**&);
template void game::PointerQueueMap<44>::emplace_back(
  game::Unrecovered<44>**&);
template void game::PointerQueueMap<45>::emplace_back(
  game::Unrecovered<45>**&);
template void game::PointerQueueMap<46>::emplace_back(
  game::Unrecovered<46>**&);
template void game::PointerQueueMap<47>::emplace_back(
  game::Unrecovered<47>**&);
template void game::PointerQueueMap<48>::emplace_back(
  game::Unrecovered<48>**&);
template void game::PointerQueueMap<49>::emplace_back(
  game::Unrecovered<49>**&);
template void game::PointerQueueMap<50>::emplace_back(
  game::Unrecovered<50>**&);
template void game::PointerQueueMap<51>::emplace_back(
  game::Unrecovered<51>**&);
template void game::PointerQueueMap<52>::emplace_back(
  game::Unrecovered<52>**&);
template void game::PointerQueueMap<53>::emplace_back(
  game::Unrecovered<53>**&);
template void game::PointerQueueMap<54>::emplace_back(
  game::Unrecovered<54>**&);
template void game::PointerQueueMap<55>::emplace_back(
  game::Unrecovered<55>**&);
template void game::PointerQueueMap<56>::emplace_back(
  game::Unrecovered<56>**&);

template void game::PointerQueueMap<0>::emplace_front(
  game::Unrecovered<0>**&);
template void game::PointerQueueMap<1>::emplace_front(
  game::Unrecovered<1>**&);
template void game::PointerQueueMap<2>::emplace_front(
  game::Unrecovered<2>**&);
template void game::PointerQueueMap<3>::emplace_front(
  game::Unrecovered<3>**&);
template void game::PointerQueueMap<4>::emplace_front(
  game::Unrecovered<4>**&);
template void game::PointerQueueMap<5>::emplace_front(
  game::Unrecovered<5>**&);
template void game::PointerQueueMap<6>::emplace_front(
  game::Unrecovered<6>**&);
template void game::PointerQueueMap<7>::emplace_front(
  game::Unrecovered<7>**&);
template void game::PointerQueueMap<8>::emplace_front(
  game::Unrecovered<8>**&);
template void game::PointerQueueMap<9>::emplace_front(
  game::Unrecovered<9>**&);
template void game::PointerQueueMap<10>::emplace_front(
  game::Unrecovered<10>**&);
template void game::PointerQueueMap<11>::emplace_front(
  game::Unrecovered<11>**&);
template void game::PointerQueueMap<12>::emplace_front(
  game::Unrecovered<12>**&);
template void game::PointerQueueMap<13>::emplace_front(
  game::Unrecovered<13>**&);
template void game::PointerQueueMap<14>::emplace_front(
  game::Unrecovered<14>**&);
template void game::PointerQueueMap<15>::emplace_front(
  game::Unrecovered<15>**&);
template void game::PointerQueueMap<16>::emplace_front(
  game::Unrecovered<16>**&);
template void game::PointerQueueMap<17>::emplace_front(
  game::Unrecovered<17>**&);
template void game::PointerQueueMap<18>::emplace_front(
  game::Unrecovered<18>**&);
template void game::PointerQueueMap<19>::emplace_front(
  game::Unrecovered<19>**&);

template game::PointerQueue<0>::~deque();
template game::PointerQueue<1>::~deque();
template game::PointerQueue<2>::~deque();
template game::PointerQueue<3>::~deque();
template game::PointerQueue<4>::~deque();
template game::PointerQueue<5>::~deque();
template game::PointerQueue<6>::~deque();
template game::PointerQueue<7>::~deque();
template game::PointerQueue<8>::~deque();
template game::PointerQueue<9>::~deque();
template game::PointerQueue<10>::~deque();
template game::PointerQueue<11>::~deque();

template game::ValueQueue<0, 4, 4>::~deque();
template game::ValueQueue<1, 4, 4>::~deque();
template game::ValueQueue<2, 4, 4>::~deque();
template game::ValueQueue<3, 4, 4>::~deque();

template game::ValueQueue<0, 80, 8>::~deque();

template game::ValueQueue<0, 16, 8>::~deque();

template game::ValueQueue<0, 1, 1>::~deque();

template game::ValueQueue<0, 12, 4>::~deque();
