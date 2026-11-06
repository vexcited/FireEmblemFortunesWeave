#include <deque>

#include "game/templates/unrecovered.hpp"

namespace game {

template <unsigned N, std::size_t Size, std::size_t Align = Size>
using ValueQueue = std::deque<UnrecoveredValue<N, Size, Align>>;

// Pushing is what instantiates the block map growth, libc++ keeps
// __add_back_capacity out of explicit instantiations.
template <unsigned N, std::size_t Size, std::size_t Align>
void PushBack(ValueQueue<N, Size, Align>& queue,
  const UnrecoveredValue<N, Size, Align>& value) {
  queue.push_back(value);
}

}

#define VALUE(n, size, align) \
  template void game::PushBack(game::ValueQueue<n, size, align>&, \
    const game::UnrecoveredValue<n, size, align>&);

VALUE(0, 4, 4)
VALUE(1, 4, 4)
VALUE(2, 1, 1)
VALUE(3, 1, 1)
VALUE(4, 244, 4)
VALUE(5, 16, 8)
