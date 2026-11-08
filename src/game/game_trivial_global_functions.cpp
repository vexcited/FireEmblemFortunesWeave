#include <stdint.h>

using U8 = uint8_t;
using U16 = uint16_t;
using U32 = uint32_t;
using U64 = uint64_t;

template <typename T>
[[gnu::always_inline]] inline T& At(U64 address, U64 offset) {
  return *reinterpret_cast<T*>(address + offset);
}

// Destroys a std::function, small ones live in their own buffer.
[[gnu::always_inline]] inline void DestroyFunction(U64 function) {
  using Method = void (*)(U64);
  const U64 target = At<U64>(function, 0x20);
  if (target == function) {
    At<Method>(At<U64>(target, 0), 0x20)(target);
  }
  else if (target != 0) {
    At<Method>(At<U64>(target, 0), 0x28)(target);
  }
}

[[gnu::visibility("hidden")]] extern U8 GameData_225f5c0[];
[[gnu::visibility("hidden")]] extern U8 GameData_225f590[];
[[gnu::visibility("hidden")]] extern U8 GameData_225f560[];
[[gnu::visibility("hidden")]] extern U8 GameData_225f530[];
[[gnu::visibility("hidden")]] extern U8 GameData_225f8c0[];
[[gnu::visibility("hidden")]] extern U8 GameData_225f890[];
[[gnu::visibility("hidden")]] extern U8 GameData_225f860[];
[[gnu::visibility("hidden")]] extern U8 GameData_225f830[];
[[gnu::visibility("hidden")]] extern U8 GameData_2260040[];
[[gnu::visibility("hidden")]] extern U8 GameData_2260010[];
[[gnu::visibility("hidden")]] extern U8 GameData_225ffe0[];
[[gnu::visibility("hidden")]] extern U8 GameData_225ffb0[];
[[gnu::visibility("hidden")]] extern U8 GameData_2260100[];
[[gnu::visibility("hidden")]] extern U8 GameData_22600d0[];
[[gnu::visibility("hidden")]] extern U8 GameData_22600a0[];
[[gnu::visibility("hidden")]] extern U8 GameData_2260070[];
[[gnu::visibility("hidden")]] extern U8 GameData_22601c0[];
[[gnu::visibility("hidden")]] extern U8 GameData_2260190[];
[[gnu::visibility("hidden")]] extern U8 GameData_2260160[];
[[gnu::visibility("hidden")]] extern U8 GameData_2260130[];
[[gnu::visibility("hidden")]] extern U8 GameData_2260280[];
[[gnu::visibility("hidden")]] extern U8 GameData_2260250[];
[[gnu::visibility("hidden")]] extern U8 GameData_2260220[];
[[gnu::visibility("hidden")]] extern U8 GameData_22601f0[];
[[gnu::visibility("hidden")]] extern U8 GameData_2260340[];
[[gnu::visibility("hidden")]] extern U8 GameData_2260310[];
[[gnu::visibility("hidden")]] extern U8 GameData_22602e0[];
[[gnu::visibility("hidden")]] extern U8 GameData_22602b0[];
[[gnu::visibility("hidden")]] extern U8 GameData_2260400[];
[[gnu::visibility("hidden")]] extern U8 GameData_22603d0[];
[[gnu::visibility("hidden")]] extern U8 GameData_22603a0[];
[[gnu::visibility("hidden")]] extern U8 GameData_2260370[];
[[gnu::visibility("hidden")]] extern U8 GameData_22604c0[];
[[gnu::visibility("hidden")]] extern U8 GameData_2260490[];
[[gnu::visibility("hidden")]] extern U8 GameData_2260460[];
[[gnu::visibility("hidden")]] extern U8 GameData_2260430[];
[[gnu::visibility("hidden")]] extern U8 GameData_2260580[];
[[gnu::visibility("hidden")]] extern U8 GameData_2260550[];
[[gnu::visibility("hidden")]] extern U8 GameData_2260520[];
[[gnu::visibility("hidden")]] extern U8 GameData_22604f0[];
[[gnu::visibility("hidden")]] extern U8 GameData_2260640[];
[[gnu::visibility("hidden")]] extern U8 GameData_2260610[];
[[gnu::visibility("hidden")]] extern U8 GameData_22605e0[];
[[gnu::visibility("hidden")]] extern U8 GameData_22605b0[];

[[gnu::visibility("hidden")]] void GameStub_16927a0() {
  DestroyFunction(reinterpret_cast<U64>(GameData_225f5c0));
  DestroyFunction(reinterpret_cast<U64>(GameData_225f590));
  DestroyFunction(reinterpret_cast<U64>(GameData_225f560));
  DestroyFunction(reinterpret_cast<U64>(GameData_225f530));
}

[[gnu::visibility("hidden")]] void GameStub_1692ae0() {
  DestroyFunction(reinterpret_cast<U64>(GameData_225f8c0));
  DestroyFunction(reinterpret_cast<U64>(GameData_225f890));
  DestroyFunction(reinterpret_cast<U64>(GameData_225f860));
  DestroyFunction(reinterpret_cast<U64>(GameData_225f830));
}

[[gnu::visibility("hidden")]] void GameStub_16932c0() {
  DestroyFunction(reinterpret_cast<U64>(GameData_2260040));
  DestroyFunction(reinterpret_cast<U64>(GameData_2260010));
  DestroyFunction(reinterpret_cast<U64>(GameData_225ffe0));
  DestroyFunction(reinterpret_cast<U64>(GameData_225ffb0));
}

[[gnu::visibility("hidden")]] void GameStub_16933a0() {
  DestroyFunction(reinterpret_cast<U64>(GameData_2260100));
  DestroyFunction(reinterpret_cast<U64>(GameData_22600d0));
  DestroyFunction(reinterpret_cast<U64>(GameData_22600a0));
  DestroyFunction(reinterpret_cast<U64>(GameData_2260070));
}

[[gnu::visibility("hidden")]] void GameStub_1693480() {
  DestroyFunction(reinterpret_cast<U64>(GameData_22601c0));
  DestroyFunction(reinterpret_cast<U64>(GameData_2260190));
  DestroyFunction(reinterpret_cast<U64>(GameData_2260160));
  DestroyFunction(reinterpret_cast<U64>(GameData_2260130));
}

[[gnu::visibility("hidden")]] void GameStub_1693560() {
  DestroyFunction(reinterpret_cast<U64>(GameData_2260280));
  DestroyFunction(reinterpret_cast<U64>(GameData_2260250));
  DestroyFunction(reinterpret_cast<U64>(GameData_2260220));
  DestroyFunction(reinterpret_cast<U64>(GameData_22601f0));
}

[[gnu::visibility("hidden")]] void GameStub_1693640() {
  DestroyFunction(reinterpret_cast<U64>(GameData_2260340));
  DestroyFunction(reinterpret_cast<U64>(GameData_2260310));
  DestroyFunction(reinterpret_cast<U64>(GameData_22602e0));
  DestroyFunction(reinterpret_cast<U64>(GameData_22602b0));
}

[[gnu::visibility("hidden")]] void GameStub_1693720() {
  DestroyFunction(reinterpret_cast<U64>(GameData_2260400));
  DestroyFunction(reinterpret_cast<U64>(GameData_22603d0));
  DestroyFunction(reinterpret_cast<U64>(GameData_22603a0));
  DestroyFunction(reinterpret_cast<U64>(GameData_2260370));
}

[[gnu::visibility("hidden")]] void GameStub_1693800() {
  DestroyFunction(reinterpret_cast<U64>(GameData_22604c0));
  DestroyFunction(reinterpret_cast<U64>(GameData_2260490));
  DestroyFunction(reinterpret_cast<U64>(GameData_2260460));
  DestroyFunction(reinterpret_cast<U64>(GameData_2260430));
}

[[gnu::visibility("hidden")]] void GameStub_16938e0() {
  DestroyFunction(reinterpret_cast<U64>(GameData_2260580));
  DestroyFunction(reinterpret_cast<U64>(GameData_2260550));
  DestroyFunction(reinterpret_cast<U64>(GameData_2260520));
  DestroyFunction(reinterpret_cast<U64>(GameData_22604f0));
}

[[gnu::visibility("hidden")]] void GameStub_16939c0() {
  DestroyFunction(reinterpret_cast<U64>(GameData_2260640));
  DestroyFunction(reinterpret_cast<U64>(GameData_2260610));
  DestroyFunction(reinterpret_cast<U64>(GameData_22605e0));
  DestroyFunction(reinterpret_cast<U64>(GameData_22605b0));
}
