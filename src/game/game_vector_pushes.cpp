#include <stdint.h>

#include <vector>

using U64 = uint64_t;

template <int N>
struct Item;

namespace {

// Each tag stands for one vector instantiation, so every copy calls its own
// out of line length error.
template <int N, U64 kClosure, U64 kVector>
[[gnu::always_inline]] inline void Push(U64 self, Item<N>* const* value) {
  const U64 owner = *reinterpret_cast<U64*>(self + kClosure);
  auto* vector = reinterpret_cast<std::vector<Item<N>*>*>(owner + kVector);
  [[clang::always_inline]] vector->push_back(*value);
}

}

#define GAME_PUSH(address, tag, closure, vector) \
  [[gnu::visibility("hidden")]] void GamePush_##address(U64 self, \
    Item<tag>* const* value) { \
    Push<tag, closure, vector>(self, value); \
  }

GAME_PUSH(94e540, 0, 0, 0)
GAME_PUSH(96d9a0, 0, 8, 0)
GAME_PUSH(14b43c0, 0, 8, 0)
GAME_PUSH(1518e70, 0, 8, 0)
GAME_PUSH(9857c0, 1, 8, 0)
GAME_PUSH(132cb00, 2, 8, 0)
GAME_PUSH(132cd10, 2, 8, 0)
GAME_PUSH(132cf20, 2, 8, 0)
GAME_PUSH(132d140, 2, 8, 0)
GAME_PUSH(1357bd0, 3, 8, 0)
GAME_PUSH(1357ff0, 3, 8, 0)
GAME_PUSH(15b5170, 4, 8, 0)
GAME_PUSH(19e7590, 5, 8, 0x70)
GAME_PUSH(19ecee0, 5, 8, 0x18)
