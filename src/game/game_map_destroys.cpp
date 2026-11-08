#include <stdint.h>

#include "memory/heap_manager.hpp"

using U64 = uint64_t;

template <typename T>
[[gnu::always_inline]] inline T& At(U64 address, U64 offset) {
  return *reinterpret_cast<T*>(address + offset);
}

[[gnu::visibility("hidden")]] extern const U64 GameSlot_212f8b0;

namespace {

[[gnu::always_inline]] inline void Free(U64 address) {
  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(address));
}

// Map nodes whose value holds a polymorphic object at 0x30 with a vector of
// 0x40 byte polymorphic elements at 0x90 and a plain vector at 0xa8.
template <void (*Self)(U64)>
[[gnu::always_inline]] inline void DestroyNode(U64 node) {
  if (node == 0) {
    return;
  }

  Self(At<U64>(node, 0));
  Self(At<U64>(node, 8));
  At<U64>(node, 0x30) = GameSlot_212f8b0 + 0x10;

  const U64 data = At<U64>(node, 0xa8);
  if (data != 0) {
    At<U64>(node, 0xb0) = data;
    Free(data);
  }

  const U64 begin = At<U64>(node, 0x90);
  if (begin != 0) {
    U64 end = At<U64>(node, 0x98);
    U64 buffer = begin;
    if (end != begin) {
      do {
        end -= 0x40;
        At<void (*)(U64)>(At<U64>(end, 0), 0)(end);
      } while (end != begin);

      buffer = At<U64>(node, 0x90);
      At<U64>(node, 0x98) = begin;
    }

    if (buffer != 0) {
      Free(buffer);
    }
  }

  Free(node);
}

}

#define GAME_MAP_DESTROY(address) \
  [[gnu::visibility("hidden")]] void GameMapDestroy_##address(U64 node) { \
    DestroyNode<GameMapDestroy_##address>(node); \
  }

GAME_MAP_DESTROY(f14f80)
GAME_MAP_DESTROY(f150c0)
GAME_MAP_DESTROY(f15200)
GAME_MAP_DESTROY(f1e9a0)
GAME_MAP_DESTROY(f235c0)
GAME_MAP_DESTROY(f4c840)
GAME_MAP_DESTROY(f59d40)
GAME_MAP_DESTROY(f85d20)
GAME_MAP_DESTROY(f9f480)
GAME_MAP_DESTROY(fa4400)
GAME_MAP_DESTROY(103d5c0)
GAME_MAP_DESTROY(1045980)
GAME_MAP_DESTROY(1045ac0)
