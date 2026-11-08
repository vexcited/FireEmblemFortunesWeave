#include <stdint.h>

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

[[gnu::visibility("hidden")]] extern U8 GameData_1f909e0[];
[[gnu::visibility("hidden")]] extern U8 GameData_1f9b7a8[];
[[gnu::visibility("hidden")]] extern U8 GameData_1f9c968[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fa13e8[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fa1468[];
[[gnu::visibility("hidden")]] extern U8 GameData_1faca60[];
[[gnu::visibility("hidden")]] extern U8 GameData_1facf80[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fd20c0[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fe1ff0[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fe2070[];
[[gnu::visibility("hidden")]] extern U8 GameData_2005218[];
[[gnu::visibility("hidden")]] extern U8 GameData_207b428[];
[[gnu::visibility("hidden")]] extern U8 GameData_2088c70[];

[[gnu::visibility("hidden")]] void GameStub_6896d0(U64 self, U64 copy) {
  At<U64>(copy, 0) = reinterpret_cast<U64>(GameData_1f909e0);
  CopyFunction(self, copy, 0x10, 0x30);
}

[[gnu::visibility("hidden")]] void GameStub_7d4570(U64 self, U64 copy) {
  At<U64>(copy, 0) = reinterpret_cast<U64>(GameData_1f9b7a8);
  CopyFunction(self, copy, 0x10, 0x30);
}

[[gnu::visibility("hidden")]] void GameStub_7f6cc0(U64 self, U64 copy) {
  At<U64>(copy, 0) = reinterpret_cast<U64>(GameData_1f9c968);
  CopyFunction(self, copy, 0x10, 0x30);
}

[[gnu::visibility("hidden")]] void GameStub_858940(U64 self, U64 copy) {
  At<U64>(copy, 0) = reinterpret_cast<U64>(GameData_1fa13e8);
  CopyFunction(self, copy, 0x10, 0x30);
}

[[gnu::visibility("hidden")]] void GameStub_858c10(U64 self, U64 copy) {
  At<U64>(copy, 0) = reinterpret_cast<U64>(GameData_1fa1468);
  CopyFunction(self, copy, 0x10, 0x30);
}

[[gnu::visibility("hidden")]] void GameStub_8f8800(U64 self, U64 copy) {
  At<U64>(copy, 0) = reinterpret_cast<U64>(GameData_1faca60);
  CopyFunction(self, copy, 0x10, 0x30);
}

[[gnu::visibility("hidden")]] void GameStub_9009c0(U64 self, U64 copy) {
  At<U64>(copy, 0) = reinterpret_cast<U64>(GameData_1facf80);
  CopyFunction(self, copy, 0x10, 0x30);
}

[[gnu::visibility("hidden")]] void GameStub_c49510(U64 self, U64 copy) {
  At<U64>(copy, 0) = reinterpret_cast<U64>(GameData_1fd20c0);
  CopyFunction(self, copy, 0x10, 0x30);
}

[[gnu::visibility("hidden")]] void GameStub_dfe940(U64 self, U64 copy) {
  At<U64>(copy, 0) = reinterpret_cast<U64>(GameData_1fe1ff0);
  CopyFunction(self, copy, 0x10, 0x30);
}

[[gnu::visibility("hidden")]] void GameStub_dfebe0(U64 self, U64 copy) {
  At<U64>(copy, 0) = reinterpret_cast<U64>(GameData_1fe2070);
  CopyFunction(self, copy, 0x10, 0x30);
}

[[gnu::visibility("hidden")]] void GameStub_1052e90(U64 self, U64 copy) {
  At<U64>(copy, 0) = reinterpret_cast<U64>(GameData_2005218);
  CopyFunction(self, copy, 0x10, 0x30);
}

[[gnu::visibility("hidden")]] void GameStub_166b5c0(U64 self, U64 copy) {
  At<U64>(copy, 0) = reinterpret_cast<U64>(GameData_207b428);
  CopyFunction(self, copy, 0x10, 0x30);
}

[[gnu::visibility("hidden")]] void GameStub_16a8e90(U64 self, U64 copy) {
  At<U64>(copy, 0) = reinterpret_cast<U64>(GameData_2088c70);
  CopyFunction(self, copy, 0x10, 0x30);
}
