#include <stdint.h>

#include "memory/heap_manager.hpp"

using U8 = uint8_t;
using U64 = uint64_t;

template <typename T>
[[gnu::always_inline]] inline T& At(U64 address, U64 offset) {
  return *reinterpret_cast<T*>(address + offset);
}

namespace nn::os {

struct MutexType;

void FinalizeMutex(MutexType* mutex);

}

[[gnu::visibility("hidden")]] extern const U64 GameData_1f8e628[];
[[gnu::visibility("hidden")]] extern const U64 GameData_1f8e5f8[];
[[gnu::visibility("hidden")]] extern const U64 GameData_1f8e5c8[];
[[gnu::visibility("hidden")]] extern const U64 GameData_1f8e598[];
[[gnu::visibility("hidden")]] extern const U64 GameData_1f8f5f0[];
[[gnu::visibility("hidden")]] extern const U64 GameData_1f8f620[];
[[gnu::visibility("hidden")]] extern const U64 GameData_1f8f650[];
[[gnu::visibility("hidden")]] extern const U64 GameData_1f8f680[];
[[gnu::visibility("hidden")]] extern const U64 GameData_1f8f6b0[];
[[gnu::visibility("hidden")]] extern const U64 GameData_1f8f6e0[];

namespace {

[[gnu::always_inline]] inline void Free(U64 address) {
  fw::memory::g_heap_manager->GetAllocator(3).Free(
    reinterpret_cast<void*>(address));
}

// Both buffers belong to pool 3 and are only released when the second one
// is set.
[[gnu::always_inline]] inline void Release(U64 self) {
  if (At<U64>(self, 0x10) == 0) {
    return;
  }

  const U64 first = At<U64>(self, 8);
  if (first != 0) {
    Free(first);
  }

  const U64 second = At<U64>(self, 0x10);
  if (second != 0) {
    Free(second);
  }

  At<U64>(self, 8) = 0;
  At<U64>(self, 0x10) = 0;
  At<U64>(self, 0x18) = 0;
}

[[gnu::always_inline]] inline void Destroy(U64 self, const U64* vtable) {
  At<const U64*>(self, 0) = vtable;
  if (At<U8>(self, 0x40) == 1) {
    Release(self);
    At<U8>(self, 0x40) = 0;
  }
  else {
    Release(self);
  }

  nn::os::FinalizeMutex(reinterpret_cast<nn::os::MutexType*>(self + 0x20));
}

}

[[gnu::visibility("hidden")]] void GamePoolOwner_6266f0(U64 self) {
  Destroy(self, GameData_1f8e628);
}

[[gnu::visibility("hidden")]] void GamePoolOwner_626830(U64 self) {
  Destroy(self, GameData_1f8e5f8);
}

[[gnu::visibility("hidden")]] void GamePoolOwner_626970(U64 self) {
  Destroy(self, GameData_1f8e5c8);
}

[[gnu::visibility("hidden")]] void GamePoolOwner_626ab0(U64 self) {
  Destroy(self, GameData_1f8e598);
}

[[gnu::visibility("hidden")]] void GamePoolOwner_654b70(U64 self) {
  Destroy(self, GameData_1f8f5f0);
}

[[gnu::visibility("hidden")]] void GamePoolOwner_654cb0(U64 self) {
  Destroy(self, GameData_1f8f620);
}

[[gnu::visibility("hidden")]] void GamePoolOwner_654df0(U64 self) {
  Destroy(self, GameData_1f8f650);
}

[[gnu::visibility("hidden")]] void GamePoolOwner_654f30(U64 self) {
  Destroy(self, GameData_1f8f680);
}

[[gnu::visibility("hidden")]] void GamePoolOwner_655070(U64 self) {
  Destroy(self, GameData_1f8f6b0);
}

[[gnu::visibility("hidden")]] void GamePoolOwner_6551b0(U64 self) {
  Destroy(self, GameData_1f8f6e0);
}
