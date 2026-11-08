#include <stdint.h>

using U8 = uint8_t;
using U16 = uint16_t;
using U32 = uint32_t;
using U64 = uint64_t;

template <typename T>
[[gnu::always_inline]] inline T& At(U64 address, U64 offset) {
  return *reinterpret_cast<T*>(address + offset);
}

[[gnu::visibility("hidden")]] extern const U64 GameSlot_2134248;
[[gnu::visibility("hidden")]] U64 GameRoutine_112460(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_651250(U64, U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_12e0c0(U64, U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_2a4b00(U64, U64, U64, U32);
[[gnu::visibility("hidden")]] U64 GameRoutine_299a60(U64, U64, U64, U64, U32,
  U32, U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_2a0cc0(U64, U64, U32);
[[gnu::visibility("hidden")]] U64 GameRoutine_2a2ab0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_1a0a040(U64, U32, U32);
[[gnu::visibility("hidden")]] U64 GameRoutine_561450(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_59e360(U64, U64, U32);
[[gnu::visibility("hidden")]] U64 GameRoutine_576d40(U64, U64, U64, U32);
[[gnu::visibility("hidden")]] U64 GameRoutine_57c660(U64, U64, U64, U64, U32);
[[gnu::visibility("hidden")]] U64 GameRoutine_597d80(U64, U64, U64, U64, U64,
  U64, U64, U32);
[[gnu::visibility("hidden")]] U64 GameRoutine_1a0ba50(U64, U32, U32);
[[gnu::visibility("hidden")]] U64 GameRoutine_631b00(U64, U64, U64, U64, U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_1738620(U64, U32, U32);
[[gnu::visibility("hidden")]] U64 GameRoutine_1566440(U64, U32);
[[gnu::visibility("hidden")]] U64 GameRoutine_75d120(U64, U32);
[[gnu::visibility("hidden")]] U64 GameRoutine_7bc4e0(U64, U32);
[[gnu::visibility("hidden")]] U64 GameRoutine_17a5a00(U64, U32, U32);
[[gnu::visibility("hidden")]] U64 GameRoutine_1157bf0(U64, U32);
[[gnu::visibility("hidden")]] U64 GameRoutine_145ca80(U64, U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_1469d90(U64, U32);
[[gnu::visibility("hidden")]] U64 GameRoutine_161fdc0(U64, U32);
[[gnu::visibility("hidden")]] U64 GameRoutine_1752580(U64, U32);
[[gnu::visibility("hidden")]] U64 GameRoutine_1832b70(U64, U32, U32);
[[gnu::visibility("hidden")]] U64 GameRoutine_1874560(U64, U64, U32);
[[gnu::visibility("hidden")]] U64 GameRoutine_1883490(U64, U32);
[[gnu::visibility("hidden")]] U64 GameRoutine_1964a60(U64, U32);
[[gnu::visibility("hidden")]] U64 GameRoutine_155e830(U64, U32);
[[gnu::visibility("hidden")]] U64 GameRoutine_1a01550(U64, U64, U32, U32);

[[gnu::visibility("hidden")]] U64 GameStub_103ac0(U64 object) {
  At<U64>(object, 0) = GameSlot_2134248 + 0x10;
  GameRoutine_112460(object);
  return GameRoutine_651250(object, 0x10);
}

[[gnu::visibility("hidden")]] U64 GameStub_12e0b0(U64 object) {
  return GameRoutine_12e0c0(object, 0x0);
}

[[gnu::visibility("hidden")]] U64 GameStub_293ae0(U64 object, U64 a1, U64 a2) {
  return GameRoutine_2a4b00(object + 0x10, a1, a2, 0x270);
}

[[gnu::visibility("hidden")]] U64 GameStub_299a40(U64 object, U64 a1, U64 a2,
  U64 a3) {
  return GameRoutine_299a60(object, a1, a2, a3, 0x0, 0x0, 0x0);
}

[[gnu::visibility("hidden")]] U64 GameStub_2a0eb0(U64 object, U64 a1) {
  return GameRoutine_2a0cc0(object, a1, 0x0);
}

[[gnu::visibility("hidden")]] U64 GameStub_2ae320(U64 object) {
  GameRoutine_2a2ab0(object);
  return GameRoutine_651250(object, 0xa0);
}

[[gnu::visibility("hidden")]] U64 GameStub_55b720(U64 object) {
  return GameRoutine_1a0a040(object, 0x1, 0x0);
}

[[gnu::visibility("hidden")]] U64 GameStub_5697b0(U64 object) {
  GameRoutine_561450(object);
  return GameRoutine_651250(object, 0x8);
}

[[gnu::visibility("hidden")]] U64 GameStub_573e30(U64 object, U64 a1) {
  return GameRoutine_59e360(object + 0x108, a1, 0x0);
}

[[gnu::visibility("hidden")]] U64 GameStub_574470(U64 object, U64 a1, U64 a2) {
  return GameRoutine_576d40(object + 0x18, a1, a2, 0x0);
}

[[gnu::visibility("hidden")]] U64 GameStub_575210(U64 object, U64 a1) {
  return GameRoutine_59e360(object + 0x28, a1, 0x0);
}

[[gnu::visibility("hidden")]] U64 GameStub_57c640(U64 object, U64 a1, U64 a2,
  U64 a3) {
  return GameRoutine_57c660(object, a1, a2, a3, 0x0);
}

[[gnu::visibility("hidden")]] U64 GameStub_597d60(U64 object, U64 a1, U64 a2) {
  return GameRoutine_597d80(object, a1, a2, 0x0, 0x0, 0x0, 0x0, 0x3);
}

[[gnu::visibility("hidden")]] U64 GameStub_5fcc20(U64 object) {
  return GameRoutine_1a0ba50(object, 0x0, 0x108);
}

[[gnu::visibility("hidden")]] U64 GameStub_5fe2f0(U64 object) {
  return GameRoutine_1a0ba50(object, 0x0, 0x120);
}

[[gnu::visibility("hidden")]] U64 GameStub_606890(U64 object) {
  return GameRoutine_1a0ba50(object, 0x0, 0x3018);
}

[[gnu::visibility("hidden")]] U64 GameStub_631ae0(U64 object, U64 a1, U64 a2,
  U64 a3) {
  return GameRoutine_631b00(object, a1, a2, a3, 0x0);
}

[[gnu::visibility("hidden")]] U64 GameStub_726d00(U64 object) {
  return GameRoutine_1738620(object, 0x0, 0x1);
}

[[gnu::visibility("hidden")]] U64 GameStub_736ab0(U64 object) {
  return GameRoutine_1566440(object + 0xd0, 0x0);
}

[[gnu::visibility("hidden")]] U64 GameStub_75d110(U64 object) {
  return GameRoutine_75d120(object, 0x0);
}

[[gnu::visibility("hidden")]] U64 GameStub_7bc0d0(U64 object) {
  return GameRoutine_7bc4e0(object, 0x0);
}

[[gnu::visibility("hidden")]] U64 GameStub_1138930(U64 object) {
  return GameRoutine_17a5a00(object, 0x0, 0x3);
}

[[gnu::visibility("hidden")]] U64 GameStub_1157be0(U64 object) {
  return GameRoutine_1157bf0(object, 0x0);
}

[[gnu::visibility("hidden")]] U64 GameStub_145c260(U64 object) {
  return GameRoutine_145ca80(object, 0x0);
}

[[gnu::visibility("hidden")]] U64 GameStub_146b310(U64 object) {
  return GameRoutine_1469d90(object, 0x0);
}

[[gnu::visibility("hidden")]] U64 GameStub_14ca320(U64 object) {
  return GameRoutine_17a5a00(object, 0x0, 0x3);
}

[[gnu::visibility("hidden")]] U64 GameStub_16199c0(U64 object) {
  return GameRoutine_161fdc0(object, 0x0);
}

[[gnu::visibility("hidden")]] U64 GameStub_17596e0(U64 object) {
  return GameRoutine_1752580(object + 0x68, 0x0);
}

[[gnu::visibility("hidden")]] U64 GameStub_183de00(U64 object) {
  return GameRoutine_1832b70(object, 0x1, 0x0);
}

[[gnu::visibility("hidden")]] U64 GameStub_1876a40(U64 object, U64 a1) {
  return GameRoutine_1874560(object, a1, 0x1);
}

[[gnu::visibility("hidden")]] U64 GameStub_1879860(U64 object, U64 a1) {
  return GameRoutine_1874560(object, a1, 0x1);
}

[[gnu::visibility("hidden")]] U64 GameStub_187b5c0(U64 object, U64 a1) {
  return GameRoutine_1874560(object, a1, 0x1);
}

[[gnu::visibility("hidden")]] U64 GameStub_1883190(U64 object) {
  return GameRoutine_1883490(object, 0x0);
}

[[gnu::visibility("hidden")]] U64 GameStub_1967390(U64 object) {
  return GameRoutine_1964a60(object + 0xb8, 0x0);
}

[[gnu::visibility("hidden")]] U64 GameStub_19aaee0(U64 object) {
  return GameRoutine_155e830(object + 0x28, 0x0);
}

[[gnu::visibility("hidden")]] U64 GameStub_19aaef0(U64 object) {
  return GameRoutine_155e830(object + 0x20, 0x0);
}

[[gnu::visibility("hidden")]] U64 GameStub_1a03c40(U64 object, U64 a1) {
  return GameRoutine_1a01550(object, a1, 0x1, 0x1);
}
