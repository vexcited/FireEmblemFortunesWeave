#include <stdint.h>

#include "memory/heap_manager.hpp"

using U8 = uint8_t;
using U16 = uint16_t;
using U32 = uint32_t;
using U64 = uint64_t;

template <typename T>
[[gnu::always_inline]] inline T& At(U64 address, U64 offset) {
  return *reinterpret_cast<T*>(address + offset);
}

[[gnu::visibility("hidden")]] extern U8 GameData_1fc07e8[];
[[gnu::visibility("hidden")]] U64 GameRoutine_1a09c50(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_1fd87d8[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fdeb90[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fe4c08[];
[[gnu::visibility("hidden")]] extern U8 GameData_1ff3f48[];
[[gnu::visibility("hidden")]] extern U8 GameData_1ff3fc8[];
[[gnu::visibility("hidden")]] extern U8 GameData_2007868[];
[[gnu::visibility("hidden")]] extern U8 GameData_203de10[];
[[gnu::visibility("hidden")]] extern U8 GameData_2043320[];

[[gnu::visibility("hidden")]] void GameStub_a792e0(U64 object) {
  using Method = void (*)(U64);
  const U64 control = At<U64>(object, 0x18);
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1fc07e8);
  if (control != 0 &&
    __atomic_fetch_add(&At<U64>(control, 8), -1, __ATOMIC_ACQ_REL) == 0) {
    At<Method>(At<U64>(control, 0), 0x10)(control);
    GameRoutine_1a09c50(control);
  }

  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(object));
}

[[gnu::visibility("hidden")]] void GameStub_cfc720(U64 object) {
  using Method = void (*)(U64);
  const U64 control = At<U64>(object, 0x18);
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1fd87d8);
  if (control != 0 &&
    __atomic_fetch_add(&At<U64>(control, 8), -1, __ATOMIC_ACQ_REL) == 0) {
    At<Method>(At<U64>(control, 0), 0x10)(control);
    GameRoutine_1a09c50(control);
  }

  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(object));
}

[[gnu::visibility("hidden")]] void GameStub_d96420(U64 object) {
  using Method = void (*)(U64);
  const U64 control = At<U64>(object, 0x38);
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1fdeb90);
  if (control != 0 &&
    __atomic_fetch_add(&At<U64>(control, 8), -1, __ATOMIC_ACQ_REL) == 0) {
    At<Method>(At<U64>(control, 0), 0x10)(control);
    GameRoutine_1a09c50(control);
  }

  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(object));
}

[[gnu::visibility("hidden")]] void GameStub_e40640(U64 object) {
  using Method = void (*)(U64);
  const U64 control = At<U64>(object, 0x18);
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1fe4c08);
  if (control != 0 &&
    __atomic_fetch_add(&At<U64>(control, 8), -1, __ATOMIC_ACQ_REL) == 0) {
    At<Method>(At<U64>(control, 0), 0x10)(control);
    GameRoutine_1a09c50(control);
  }

  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(object));
}

[[gnu::visibility("hidden")]] void GameStub_f343e0(U64 object) {
  using Method = void (*)(U64);
  const U64 control = At<U64>(object, 0x10);
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1ff3f48);
  if (control != 0 &&
    __atomic_fetch_add(&At<U64>(control, 8), -1, __ATOMIC_ACQ_REL) == 0) {
    At<Method>(At<U64>(control, 0), 0x10)(control);
    GameRoutine_1a09c50(control);
  }

  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(object));
}

[[gnu::visibility("hidden")]] void GameStub_f34620(U64 object) {
  using Method = void (*)(U64);
  const U64 control = At<U64>(object, 0x10);
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1ff3fc8);
  if (control != 0 &&
    __atomic_fetch_add(&At<U64>(control, 8), -1, __ATOMIC_ACQ_REL) == 0) {
    At<Method>(At<U64>(control, 0), 0x10)(control);
    GameRoutine_1a09c50(control);
  }

  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(object));
}

[[gnu::visibility("hidden")]] void GameStub_108efc0(U64 object) {
  using Method = void (*)(U64);
  const U64 control = At<U64>(object, 0x20);
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_2007868);
  if (control != 0 &&
    __atomic_fetch_add(&At<U64>(control, 8), -1, __ATOMIC_ACQ_REL) == 0) {
    At<Method>(At<U64>(control, 0), 0x10)(control);
    GameRoutine_1a09c50(control);
  }

  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(object));
}

[[gnu::visibility("hidden")]] void GameStub_14396a0(U64 object) {
  using Method = void (*)(U64);
  const U64 control = At<U64>(object, 0x10);
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_203de10);
  if (control != 0 &&
    __atomic_fetch_add(&At<U64>(control, 8), -1, __ATOMIC_ACQ_REL) == 0) {
    At<Method>(At<U64>(control, 0), 0x10)(control);
    GameRoutine_1a09c50(control);
  }

  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(object));
}

[[gnu::visibility("hidden")]] void GameStub_148d6b0(U64 object) {
  using Method = void (*)(U64);
  const U64 control = At<U64>(object, 0x10);
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_2043320);
  if (control != 0 &&
    __atomic_fetch_add(&At<U64>(control, 8), -1, __ATOMIC_ACQ_REL) == 0) {
    At<Method>(At<U64>(control, 0), 0x10)(control);
    GameRoutine_1a09c50(control);
  }

  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(object));
}
