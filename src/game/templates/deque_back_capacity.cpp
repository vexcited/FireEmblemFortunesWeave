#include <deque>

#include "game/templates/unrecovered.hpp"

namespace game {

// Pushing is what instantiates the block map growth, libc++ keeps
// __add_back_capacity out of explicit instantiations.
template <unsigned N>
void PushBack(std::deque<Unrecovered<N>*>& queue, Unrecovered<N>* value) {
  queue.push_back(value);
}

}

template void game::PushBack<100>(
  std::deque<game::Unrecovered<100>*>&, game::Unrecovered<100>*);
template void game::PushBack<101>(
  std::deque<game::Unrecovered<101>*>&, game::Unrecovered<101>*);
template void game::PushBack<102>(
  std::deque<game::Unrecovered<102>*>&, game::Unrecovered<102>*);
template void game::PushBack<103>(
  std::deque<game::Unrecovered<103>*>&, game::Unrecovered<103>*);
template void game::PushBack<104>(
  std::deque<game::Unrecovered<104>*>&, game::Unrecovered<104>*);
template void game::PushBack<105>(
  std::deque<game::Unrecovered<105>*>&, game::Unrecovered<105>*);
template void game::PushBack<106>(
  std::deque<game::Unrecovered<106>*>&, game::Unrecovered<106>*);
template void game::PushBack<107>(
  std::deque<game::Unrecovered<107>*>&, game::Unrecovered<107>*);
template void game::PushBack<108>(
  std::deque<game::Unrecovered<108>*>&, game::Unrecovered<108>*);
