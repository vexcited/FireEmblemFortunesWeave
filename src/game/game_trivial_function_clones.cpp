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

// Copies a std::function member, which lives in its own buffer when small.
[[gnu::always_inline]] inline void CopyFunction(U64 from, U64 to, U64 buffer,
  U64 pointer) {
  using Clone = U64 (*)(U64);
  using CloneInto = void (*)(U64, U64);
  const U64 function = At<U64>(from, pointer);
  if (function == 0) {
    At<U64>(to, pointer) = 0;
  }
  else if (function == from + buffer) {
    At<U64>(to, pointer) = to + buffer;
    At<CloneInto>(At<U64>(function, 0), 0x18)(function, to + buffer);
  }
  else {
    At<U64>(to, pointer) = At<Clone>(At<U64>(function, 0), 0x10)(function);
  }
}

[[gnu::visibility("hidden")]] extern U8 GameData_1f94cd8[];
[[gnu::visibility("hidden")]] extern U8 GameData_1f95958[];
[[gnu::visibility("hidden")]] extern U8 GameData_1f99748[];
[[gnu::visibility("hidden")]] extern U8 GameData_1f9f930[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fac2a0[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fc2718[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fc2798[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fc2818[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fd0ad0[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fdd3d0[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fe81c8[];
[[gnu::visibility("hidden")]] extern U8 GameData_2109938[];

[[gnu::visibility("hidden")]] U64 GameStub_743010(U64 self) {
  const U64 copy = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x50, 16, 0));
  At<U64>(copy, 0) = reinterpret_cast<U64>(GameData_1f94cd8);
  At<U64>(copy, 0x10) = At<U64>(self, 0x10);
  CopyFunction(self, copy, 0x20, 0x40);
  return copy;
}

[[gnu::visibility("hidden")]] void GameStub_7430c0(U64 self, U64 copy) {
  At<U64>(copy, 0) = reinterpret_cast<U64>(GameData_1f94cd8);
  At<U64>(copy, 0x10) = At<U64>(self, 0x10);
  CopyFunction(self, copy, 0x20, 0x40);
}

[[gnu::visibility("hidden")]] U64 GameStub_75cd90(U64 self) {
  const U64 copy = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x50, 16, 0));
  At<U64>(copy, 0) = reinterpret_cast<U64>(GameData_1f95958);
  At<U64>(copy, 0x10) = At<U64>(self, 0x10);
  CopyFunction(self, copy, 0x20, 0x40);
  return copy;
}

[[gnu::visibility("hidden")]] void GameStub_75ce40(U64 self, U64 copy) {
  At<U64>(copy, 0) = reinterpret_cast<U64>(GameData_1f95958);
  At<U64>(copy, 0x10) = At<U64>(self, 0x10);
  CopyFunction(self, copy, 0x20, 0x40);
}

[[gnu::visibility("hidden")]] U64 GameStub_7b8ef0(U64 self) {
  const U64 copy = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x50, 16, 0));
  At<U64>(copy, 0) = reinterpret_cast<U64>(GameData_1f99748);
  At<U64>(copy, 0x10) = At<U64>(self, 0x10);
  CopyFunction(self, copy, 0x20, 0x40);
  return copy;
}

[[gnu::visibility("hidden")]] void GameStub_7b8fa0(U64 self, U64 copy) {
  At<U64>(copy, 0) = reinterpret_cast<U64>(GameData_1f99748);
  At<U64>(copy, 0x10) = At<U64>(self, 0x10);
  CopyFunction(self, copy, 0x20, 0x40);
}

[[gnu::visibility("hidden")]] U64 GameStub_836040(U64 self) {
  const U64 copy = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x50, 16, 0));
  At<U64>(copy, 0) = reinterpret_cast<U64>(GameData_1f9f930);
  At<U64>(copy, 0x10) = At<U64>(self, 0x10);
  CopyFunction(self, copy, 0x20, 0x40);
  return copy;
}

[[gnu::visibility("hidden")]] void GameStub_8360f0(U64 self, U64 copy) {
  At<U64>(copy, 0) = reinterpret_cast<U64>(GameData_1f9f930);
  At<U64>(copy, 0x10) = At<U64>(self, 0x10);
  CopyFunction(self, copy, 0x20, 0x40);
}

[[gnu::visibility("hidden")]] U64 GameStub_8f3700(U64 self) {
  const U64 copy = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x50, 16, 0));
  At<U64>(copy, 0) = reinterpret_cast<U64>(GameData_1fac2a0);
  At<U64>(copy, 0x10) = At<U64>(self, 0x10);
  CopyFunction(self, copy, 0x20, 0x40);
  return copy;
}

[[gnu::visibility("hidden")]] void GameStub_8f37b0(U64 self, U64 copy) {
  At<U64>(copy, 0) = reinterpret_cast<U64>(GameData_1fac2a0);
  At<U64>(copy, 0x10) = At<U64>(self, 0x10);
  CopyFunction(self, copy, 0x20, 0x40);
}

[[gnu::visibility("hidden")]] U64 GameStub_adbac0(U64 self) {
  const U64 copy = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x50, 16, 0));
  At<U64>(copy, 0) = reinterpret_cast<U64>(GameData_1fc2718);
  At<U64>(copy, 0x10) = At<U64>(self, 0x10);
  CopyFunction(self, copy, 0x20, 0x40);
  return copy;
}

[[gnu::visibility("hidden")]] void GameStub_adbb70(U64 self, U64 copy) {
  At<U64>(copy, 0) = reinterpret_cast<U64>(GameData_1fc2718);
  At<U64>(copy, 0x10) = At<U64>(self, 0x10);
  CopyFunction(self, copy, 0x20, 0x40);
}

[[gnu::visibility("hidden")]] U64 GameStub_adbd70(U64 self) {
  const U64 copy = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x50, 16, 0));
  At<U64>(copy, 0) = reinterpret_cast<U64>(GameData_1fc2798);
  At<U64>(copy, 0x10) = At<U64>(self, 0x10);
  CopyFunction(self, copy, 0x20, 0x40);
  return copy;
}

[[gnu::visibility("hidden")]] void GameStub_adbe20(U64 self, U64 copy) {
  At<U64>(copy, 0) = reinterpret_cast<U64>(GameData_1fc2798);
  At<U64>(copy, 0x10) = At<U64>(self, 0x10);
  CopyFunction(self, copy, 0x20, 0x40);
}

[[gnu::visibility("hidden")]] U64 GameStub_adc020(U64 self) {
  const U64 copy = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x50, 16, 0));
  At<U64>(copy, 0) = reinterpret_cast<U64>(GameData_1fc2818);
  At<U64>(copy, 0x10) = At<U64>(self, 0x10);
  CopyFunction(self, copy, 0x20, 0x40);
  return copy;
}

[[gnu::visibility("hidden")]] void GameStub_adc0d0(U64 self, U64 copy) {
  At<U64>(copy, 0) = reinterpret_cast<U64>(GameData_1fc2818);
  At<U64>(copy, 0x10) = At<U64>(self, 0x10);
  CopyFunction(self, copy, 0x20, 0x40);
}

[[gnu::visibility("hidden")]] U64 GameStub_bec940(U64 self) {
  const U64 copy = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x50, 16, 0));
  At<U64>(copy, 0) = reinterpret_cast<U64>(GameData_1fd0ad0);
  At<U64>(copy, 0x10) = At<U64>(self, 0x10);
  CopyFunction(self, copy, 0x20, 0x40);
  return copy;
}

[[gnu::visibility("hidden")]] void GameStub_bec9f0(U64 self, U64 copy) {
  At<U64>(copy, 0) = reinterpret_cast<U64>(GameData_1fd0ad0);
  At<U64>(copy, 0x10) = At<U64>(self, 0x10);
  CopyFunction(self, copy, 0x20, 0x40);
}

[[gnu::visibility("hidden")]] U64 GameStub_d70b10(U64 self) {
  const U64 copy = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x50, 16, 0));
  At<U64>(copy, 0) = reinterpret_cast<U64>(GameData_1fdd3d0);
  At<U64>(copy, 0x10) = At<U64>(self, 0x10);
  CopyFunction(self, copy, 0x20, 0x40);
  return copy;
}

[[gnu::visibility("hidden")]] void GameStub_d70bc0(U64 self, U64 copy) {
  At<U64>(copy, 0) = reinterpret_cast<U64>(GameData_1fdd3d0);
  At<U64>(copy, 0x10) = At<U64>(self, 0x10);
  CopyFunction(self, copy, 0x20, 0x40);
}

[[gnu::visibility("hidden")]] U64 GameStub_e7ef70(U64 self) {
  const U64 copy = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x50, 16, 0));
  At<U64>(copy, 0) = reinterpret_cast<U64>(GameData_1fe81c8);
  At<U64>(copy, 0x10) = At<U64>(self, 0x10);
  CopyFunction(self, copy, 0x20, 0x40);
  return copy;
}

[[gnu::visibility("hidden")]] void GameStub_e7f020(U64 self, U64 copy) {
  At<U64>(copy, 0) = reinterpret_cast<U64>(GameData_1fe81c8);
  At<U64>(copy, 0x10) = At<U64>(self, 0x10);
  CopyFunction(self, copy, 0x20, 0x40);
}

[[gnu::visibility("hidden")]] U64 GameStub_18d60f0(U64 self) {
  const U64 copy = reinterpret_cast<U64>(
    fw::memory::g_heap_manager->Allocate(0x50, 16, 0));
  At<U64>(copy, 0) = reinterpret_cast<U64>(GameData_2109938);
  At<U64>(copy, 0x10) = At<U64>(self, 0x10);
  CopyFunction(self, copy, 0x20, 0x40);
  return copy;
}

[[gnu::visibility("hidden")]] void GameStub_18d61a0(U64 self, U64 copy) {
  At<U64>(copy, 0) = reinterpret_cast<U64>(GameData_2109938);
  At<U64>(copy, 0x10) = At<U64>(self, 0x10);
  CopyFunction(self, copy, 0x20, 0x40);
}
