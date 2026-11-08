#include <stdint.h>

using U8 = uint8_t;
using U16 = uint16_t;
using U32 = uint32_t;
using U64 = uint64_t;

template <typename T>
[[gnu::always_inline]] inline T& At(U64 address, U64 offset) {
  return *reinterpret_cast<T*>(address + offset);
}

[[gnu::visibility("hidden")]] extern const U64 GameSlot_2134008;
[[gnu::visibility("hidden")]] extern U8 GameData_2178be8[];
[[gnu::visibility("hidden")]] extern U8 GameData_1f50948[];
[[gnu::visibility("hidden")]] U64 GameRoutine_2b0(U64, U64, U64);
[[gnu::visibility("hidden")]] extern const U64 GameSlot_212c410;
[[gnu::visibility("hidden")]] extern const U64 GameSlot_212c5d8;
[[gnu::visibility("hidden")]] extern const U64 GameSlot_212c5e8;
[[gnu::visibility("hidden")]] extern const U64 GameSlot_212c6b8;
[[gnu::visibility("hidden")]] extern const U64 GameSlot_212c820;
[[gnu::visibility("hidden")]] extern const U64 GameSlot_212ddf0;
[[gnu::visibility("hidden")]] extern const U64 GameSlot_212de08;
[[gnu::visibility("hidden")]] extern const U64 GameSlot_212e078;
[[gnu::visibility("hidden")]] extern const U64 GameSlot_212e088;
[[gnu::visibility("hidden")]] extern const U64 GameSlot_212e308;
[[gnu::visibility("hidden")]] extern const U64 GameSlot_212e338;
[[gnu::visibility("hidden")]] extern const U64 GameSlot_212c138;
[[gnu::visibility("hidden")]] extern U8 GameData_2167540[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fc0ae0[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fc0b20[];
[[gnu::visibility("hidden")]] extern U8 GameData_2167560[];
[[gnu::visibility("hidden")]] extern U8 GameData_2167580[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fc0ff0[];
[[gnu::visibility("hidden")]] extern const U64 GameSlot_212e540;
[[gnu::visibility("hidden")]] extern U8 GameData_1fc6bd0[];
[[gnu::visibility("hidden")]] extern U8 GameData_21675d0[];
[[gnu::visibility("hidden")]] extern const U64 GameSlot_212e9a8;
[[gnu::visibility("hidden")]] extern U8 GameData_21675f0[];
[[gnu::visibility("hidden")]] extern const U64 GameSlot_212dd70;
[[gnu::visibility("hidden")]] extern U8 GameData_22031a8[];
[[gnu::visibility("hidden")]] extern const U64 GameSlot_212ea78;
[[gnu::visibility("hidden")]] extern U8 GameData_1fd15d8[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fd19d8[];
[[gnu::visibility("hidden")]] extern U8 GameData_220b698[];
[[gnu::visibility("hidden")]] extern const U64 GameSlot_212ecf8;
[[gnu::visibility("hidden")]] extern U8 GameData_2167628[];
[[gnu::visibility("hidden")]] extern U8 GameData_2167648[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fdbe18[];
[[gnu::visibility("hidden")]] extern U8 GameData_21676c8[];
[[gnu::visibility("hidden")]] extern const U64 GameSlot_212f248;
[[gnu::visibility("hidden")]] extern U8 GameData_21676e0[];
[[gnu::visibility("hidden")]] extern U8 GameData_2167710[];
[[gnu::visibility("hidden")]] extern const U64 GameSlot_212f6a0;
[[gnu::visibility("hidden")]] U64 GameRoutine_16ec100(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_16dd9a0(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_221b408[];
[[gnu::visibility("hidden")]] extern const U64 GameSlot_212f890;
[[gnu::visibility("hidden")]] extern U8 GameData_221fed0[];
[[gnu::visibility("hidden")]] extern U8 GameData_2167780[];
[[gnu::visibility("hidden")]] extern U8 GameData_216dc28[];
[[gnu::visibility("hidden")]] extern U8 GameData_216dc48[];
[[gnu::visibility("hidden")]] extern const U64 GameSlot_21305f8;
[[gnu::visibility("hidden")]] extern const U64 GameSlot_2130908;
[[gnu::visibility("hidden")]] extern const U64 GameSlot_2130958;
[[gnu::visibility("hidden")]] U64 GameRoutine_132fca0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_132d640(U64);
[[gnu::visibility("hidden")]] extern const U64 GameSlot_2130f88;
[[gnu::visibility("hidden")]] extern const U64 GameSlot_21312c8;
[[gnu::visibility("hidden")]] U32 GameRoutine_948a50(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_203fd20[];
[[gnu::visibility("hidden")]] U32 GameRoutine_94af40(U64);
[[gnu::visibility("hidden")]] U32 GameRoutine_94a820(U64);
[[gnu::visibility("hidden")]] U32 GameRoutine_947af0(U64);
[[gnu::visibility("hidden")]] U32 GameRoutine_948340(U64);
[[gnu::visibility("hidden")]] U32 GameRoutine_94a1d0(U64);
[[gnu::visibility("hidden")]] U32 GameRoutine_94b560(U64);
[[gnu::visibility("hidden")]] U32 GameRoutine_948b80(U64);
[[gnu::visibility("hidden")]] U32 GameRoutine_947a30(U64);
[[gnu::visibility("hidden")]] U32 GameRoutine_94bdc0(U64);
[[gnu::visibility("hidden")]] extern const U64 GameSlot_2131be0;
[[gnu::visibility("hidden")]] U64 GameRoutine_16ed000(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_170acf0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_16e1ce0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_178cae0(U64);
[[gnu::visibility("hidden")]] extern const U64 GameSlot_2131e30;
[[gnu::visibility("hidden")]] U64 GameRoutine_1874060(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_186e010(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_18735e0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_16defa0(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_2108ec8[];
[[gnu::visibility("hidden")]] extern U8 GameData_2108f08[];
[[gnu::visibility("hidden")]] U64 GameRoutine_4e8a0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_4e860(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_1916610(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_4e960(U64);

[[gnu::visibility("hidden")]] U64 GameStub_5f650() {
  return GameRoutine_2b0(GameSlot_2134008,
    reinterpret_cast<U64>(GameData_2178be8),
    reinterpret_cast<U64>(GameData_1f50948));
}

[[gnu::visibility("hidden")]] void GameStub_64bd30(U64 object) {
  using Method = void (*)(U64);
  const U64 target = At<U64>(object, 0x18);
  if (target != 0) {
    At<Method>(At<U64>(target, 0), 0x8)(target);
  }
}

[[gnu::visibility("hidden")]] U64 GameStub_64bd50(U64 object, U64 type) {
  return At<U64>(type, 8) == GameSlot_212c410 ? object + 0x18 : 0;
}

[[gnu::visibility("hidden")]] void GameStub_64bdf0(U64 object) {
  using Method = void (*)(U64);
  const U64 target = At<U64>(object, 0x18);
  if (target != 0) {
    At<Method>(At<U64>(target, 0), 0x8)(target);
  }
}

[[gnu::visibility("hidden")]] void GameStub_64bf80(U64 object) {
  using Method = void (*)(U64);
  const U64 target = At<U64>(object, 0x18);
  if (target != 0) {
    At<Method>(At<U64>(target, 0), 0x8)(target);
  }
}

[[gnu::visibility("hidden")]] void GameStub_64c040(U64 object) {
  using Method = void (*)(U64);
  const U64 target = At<U64>(object, 0x18);
  if (target != 0) {
    At<Method>(At<U64>(target, 0), 0x8)(target);
  }
}

[[gnu::visibility("hidden")]] void GameStub_64dc60(U64 object) {
  using Method = void (*)(U64);
  const U64 target = At<U64>(object, 0x18);
  if (target != 0) {
    At<Method>(At<U64>(target, 0), 0x8)(target);
  }
}

[[gnu::visibility("hidden")]] void GameStub_64e430(U64 object) {
  using Method = void (*)(U64);
  const U64 target = At<U64>(object, 0x18);
  if (target != 0) {
    At<Method>(At<U64>(target, 0), 0x8)(target);
  }
}

[[gnu::visibility("hidden")]] U64 GameStub_654950(U64 object, U64 type) {
  return At<U64>(type, 8) == GameSlot_212c5d8 ? object + 0x8 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_654ad0(U64 object, U64 type) {
  return At<U64>(type, 8) == GameSlot_212c5e8 ? object + 0x8 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_6680b0(U64 object, U64 type) {
  return At<U64>(type, 8) == GameSlot_212c6b8 ? object + 0x8 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_66cec0(U64 object, U64 type) {
  return At<U64>(type, 8) == GameSlot_212c820 ? object + 0x8 : 0;
}

[[gnu::visibility("hidden")]] void GameStub_87a8a0(U64 object) {
  using Method = void (*)(U64);
  const U64 target = At<U64>(object, 0xe0);
  if (target != 0) {
    At<Method>(At<U64>(target, 0), 0x30)(target);
  }
}

[[gnu::visibility("hidden")]] void GameStub_87b680(U64 object) {
  using Method = void (*)(U64);
  const U64 target = At<U64>(object, 0x110);
  if (target != 0) {
    At<Method>(At<U64>(target, 0), 0x30)(target);
  }
}

[[gnu::visibility("hidden")]] U64 GameStub_94e510(U64 object, U64 type) {
  return At<U64>(type, 8) == GameSlot_212ddf0 ? object + 0x8 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_94e7a0(U64 object, U64 type) {
  return At<U64>(type, 8) == GameSlot_212de08 ? object + 0x8 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_9d0920(U64 object, U64 type) {
  return At<U64>(type, 8) == GameSlot_212e078 ? object + 0x8 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_9d1830(U64 object, U64 type) {
  return At<U64>(type, 8) == GameSlot_212e088 ? object + 0x8 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_a49f40(U64 object, U64 type) {
  return At<U64>(type, 8) == GameSlot_212e308 ? object + 0x8 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_a52f10(U64 object, U64 type) {
  return At<U64>(type, 8) == GameSlot_212e338 ? object + 0x8 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_a7ab60() {
  return GameRoutine_2b0(GameSlot_212c138,
    reinterpret_cast<U64>(GameData_2167540),
    reinterpret_cast<U64>(GameData_1f50948));
}

[[gnu::visibility("hidden")]] void GameStub_a7f930(U64 object) {
  using Method = void (*)(U64);
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1fc0ae0);
  const U64 owned = At<U64>(object, 0x10);
  At<U64>(object, 0x10) = 0;
  if (owned != 0) {
    At<Method>(At<U64>(owned, 0), 0x8)(owned);
  }
}

[[gnu::visibility("hidden")]] void GameStub_a7f9f0(U64 object) {
  using Method = void (*)(U64);
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1fc0b20);
  const U64 owned = At<U64>(object, 0x10);
  At<U64>(object, 0x10) = 0;
  if (owned != 0) {
    At<Method>(At<U64>(owned, 0), 0x8)(owned);
  }
}

[[gnu::visibility("hidden")]] U64 GameStub_a8a680() {
  return GameRoutine_2b0(GameSlot_212c138,
    reinterpret_cast<U64>(GameData_2167560),
    reinterpret_cast<U64>(GameData_1f50948));
}

[[gnu::visibility("hidden")]] U64 GameStub_a8d960() {
  return GameRoutine_2b0(GameSlot_212c138,
    reinterpret_cast<U64>(GameData_2167580),
    reinterpret_cast<U64>(GameData_1f50948));
}

[[gnu::visibility("hidden")]] void GameStub_a93310(U64 object) {
  using Method = void (*)(U64);
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1fc0ff0);
  const U64 owned = At<U64>(object, 0x10);
  At<U64>(object, 0x10) = 0;
  if (owned != 0) {
    At<Method>(At<U64>(owned, 0), 0x8)(owned);
  }
}

[[gnu::visibility("hidden")]] void GameStub_aa14d0(U64 object) {
  using Method = void (*)(U64);
  const U64 target = At<U64>(object, 0x18);
  if (target != 0) {
    At<Method>(At<U64>(target, 0), 0x8)(target);
  }
}

[[gnu::visibility("hidden")]] U64 GameStub_aa14f0(U64 object, U64 type) {
  return At<U64>(type, 8) == GameSlot_212e540 ? object + 0x18 : 0;
}

[[gnu::visibility("hidden")]] void GameStub_b67f50(U64 object) {
  using Method = void (*)(U64);
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1fc6bd0);
  const U64 owned = At<U64>(object, 0x10);
  At<U64>(object, 0x10) = 0;
  if (owned != 0) {
    At<Method>(At<U64>(owned, 0), 0x8)(owned);
  }
}

[[gnu::visibility("hidden")]] U64 GameStub_bc8ef0() {
  return GameRoutine_2b0(GameSlot_212c138,
    reinterpret_cast<U64>(GameData_21675d0),
    reinterpret_cast<U64>(GameData_1f50948));
}

[[gnu::visibility("hidden")]] U64 GameStub_bc9550(U64 object, U64 type) {
  return At<U64>(type, 8) == GameSlot_212e9a8 ? object + 0x8 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_bceb70() {
  return GameRoutine_2b0(GameSlot_212c138,
    reinterpret_cast<U64>(GameData_21675f0),
    reinterpret_cast<U64>(GameData_1f50948));
}

[[gnu::visibility("hidden")]] U64 GameStub_bfc980() {
  return GameRoutine_2b0(GameSlot_212dd70,
    reinterpret_cast<U64>(GameData_22031a8),
    reinterpret_cast<U64>(GameData_1f50948));
}

[[gnu::visibility("hidden")]] U64 GameStub_c06bd0(U64 object, U64 type) {
  return At<U64>(type, 8) == GameSlot_212ea78 ? object + 0x18 : 0;
}

[[gnu::visibility("hidden")]] void GameStub_c06c20(U64 object) {
  using Method = void (*)(U64);
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1fd15d8);
  const U64 owned = At<U64>(object, 0x10);
  At<U64>(object, 0x10) = 0;
  if (owned != 0) {
    At<Method>(At<U64>(owned, 0), 0x8)(owned);
  }
}

[[gnu::visibility("hidden")]] void GameStub_c0ec10(U64 object) {
  using Method = void (*)(U64);
  const U64 target = At<U64>(object, 0x18);
  if (target != 0) {
    At<Method>(At<U64>(target, 0), 0x8)(target);
  }
}

[[gnu::visibility("hidden")]] void GameStub_c0ec80(U64 object) {
  using Method = void (*)(U64);
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1fd19d8);
  const U64 owned = At<U64>(object, 0x10);
  At<U64>(object, 0x10) = 0;
  if (owned != 0) {
    At<Method>(At<U64>(owned, 0), 0x8)(owned);
  }
}

[[gnu::visibility("hidden")]] U64 GameStub_ca8760() {
  return GameRoutine_2b0(GameSlot_212dd70,
    reinterpret_cast<U64>(GameData_220b698),
    reinterpret_cast<U64>(GameData_1f50948));
}

[[gnu::visibility("hidden")]] U64 GameStub_d0ba00(U64 object, U64 type) {
  return At<U64>(type, 8) == GameSlot_212ecf8 ? object + 0x8 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_d18d80() {
  return GameRoutine_2b0(GameSlot_212c138,
    reinterpret_cast<U64>(GameData_2167628),
    reinterpret_cast<U64>(GameData_1f50948));
}

[[gnu::visibility("hidden")]] U64 GameStub_d3e000() {
  return GameRoutine_2b0(GameSlot_212dd70,
    reinterpret_cast<U64>(GameData_2167648),
    reinterpret_cast<U64>(GameData_1f50948));
}

[[gnu::visibility("hidden")]] void GameStub_d43450(U64 object) {
  using Method = void (*)(U64);
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1fdbe18);
  const U64 owned = At<U64>(object, 0x18);
  At<U64>(object, 0x18) = 0;
  if (owned != 0) {
    At<Method>(At<U64>(owned, 0), 0x8)(owned);
  }
}

[[gnu::visibility("hidden")]] U64 GameStub_e023a0() {
  return GameRoutine_2b0(GameSlot_212dd70,
    reinterpret_cast<U64>(GameData_21676c8),
    reinterpret_cast<U64>(GameData_1f50948));
}

[[gnu::visibility("hidden")]] U64 GameStub_e14490(U64 object, U64 type) {
  return At<U64>(type, 8) == GameSlot_212f248 ? object + 0x8 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_e1f120() {
  return GameRoutine_2b0(GameSlot_212dd70,
    reinterpret_cast<U64>(GameData_21676e0),
    reinterpret_cast<U64>(GameData_1f50948));
}

[[gnu::visibility("hidden")]] U64 GameStub_e2a7d0() {
  return GameRoutine_2b0(GameSlot_212dd70,
    reinterpret_cast<U64>(GameData_2167710),
    reinterpret_cast<U64>(GameData_1f50948));
}

[[gnu::visibility("hidden")]] void GameStub_e51b30(U64 object) {
  using Method = void (*)(U64);
  const U64 target = At<U64>(object, 0x60);
  if (target != 0) {
    At<Method>(At<U64>(target, 0), 0x30)(target);
  }
}

[[gnu::visibility("hidden")]] U64 GameStub_e92a30(U64 object, U64 type) {
  return At<U64>(type, 8) == GameSlot_212f6a0 ? object + 0x8 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_e96320(U64 object) {
  GameRoutine_16ec100(object);
  return GameRoutine_16dd9a0(object);
}

[[gnu::visibility("hidden")]] U64 GameStub_e98080() {
  return GameRoutine_2b0(GameSlot_212dd70,
    reinterpret_cast<U64>(GameData_221b408),
    reinterpret_cast<U64>(GameData_1f50948));
}

[[gnu::visibility("hidden")]] U64 GameStub_f0e940(U64 object, U64 type) {
  return At<U64>(type, 8) == GameSlot_212f890 ? object + 0x8 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_f2c730() {
  return GameRoutine_2b0(GameSlot_212dd70,
    reinterpret_cast<U64>(GameData_221fed0),
    reinterpret_cast<U64>(GameData_1f50948));
}

[[gnu::visibility("hidden")]] U64 GameStub_ff1e60() {
  return GameRoutine_2b0(GameSlot_212c138,
    reinterpret_cast<U64>(GameData_2167780),
    reinterpret_cast<U64>(GameData_1f50948));
}

[[gnu::visibility("hidden")]] void GameStub_108eab0(U64 object) {
  using Method = void (*)(U64);
  const U64 target = At<U64>(object, 0x40);
  if (target != 0) {
    At<Method>(At<U64>(target, 0), 0x30)(target);
  }
}

[[gnu::visibility("hidden")]] void GameStub_108eb30(U64 object) {
  using Method = void (*)(U64);
  const U64 target = At<U64>(object, 0xa0);
  if (target != 0) {
    At<Method>(At<U64>(target, 0), 0x30)(target);
  }
}

[[gnu::visibility("hidden")]] void GameStub_10d55f0(U64 object) {
  using Method = void (*)(U64);
  const U64 target = At<U64>(object, 0xa8);
  if (target != 0) {
    At<Method>(At<U64>(target, 0), 0x18)(target);
  }
}

[[gnu::visibility("hidden")]] void GameStub_10d6490(U64 object) {
  using Method = void (*)(U64);
  const U64 target = At<U64>(object, 0xa8);
  if (target != 0) {
    At<Method>(At<U64>(target, 0), 0x20)(target);
  }
}

[[gnu::visibility("hidden")]] U64 GameStub_10ea280() {
  return GameRoutine_2b0(GameSlot_212c138,
    reinterpret_cast<U64>(GameData_216dc28),
    reinterpret_cast<U64>(GameData_1f50948));
}

[[gnu::visibility("hidden")]] U64 GameStub_112a8f0() {
  return GameRoutine_2b0(GameSlot_212c138,
    reinterpret_cast<U64>(GameData_216dc48),
    reinterpret_cast<U64>(GameData_1f50948));
}

[[gnu::visibility("hidden")]] U64 GameStub_11c37b0(U64 object, U64 type) {
  return At<U64>(type, 8) == GameSlot_21305f8 ? object + 0x8 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_11f7660(U64 object, U64 type) {
  return At<U64>(type, 8) == GameSlot_2130908 ? object + 0x8 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_11ffff0(U64 object, U64 type) {
  return At<U64>(type, 8) == GameSlot_2130958 ? object + 0x8 : 0;
}

[[gnu::visibility("hidden")]] void GameStub_1254c50(U64 object) {
  using Method = void (*)(U64);
  const U64 target = At<U64>(object, 0x100);
  if (target != 0) {
    At<Method>(At<U64>(target, 0), 0x30)(target);
  }
}

[[gnu::visibility("hidden")]] U64 GameStub_13375c0(U64 object) {
  GameRoutine_132fca0(object);
  return GameRoutine_132d640(object);
}

[[gnu::visibility("hidden")]] U64 GameStub_13882f0(U64 object, U64 type) {
  return At<U64>(type, 8) == GameSlot_2130f88 ? object + 0x8 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_13faac0(U64 object, U64 type) {
  return At<U64>(type, 8) == GameSlot_21312c8 ? object + 0x8 : 0;
}

[[gnu::visibility("hidden")]] bool GameStub_1436200(U64 object) {
  return GameRoutine_948a50(object) == 0;
}

[[gnu::visibility("hidden")]] void GameStub_1461fa0(U64 object) {
  using Method = void (*)(U64);
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_203fd20);
  const U64 owned = At<U64>(object, 0x10);
  At<U64>(object, 0x10) = 0;
  if (owned != 0) {
    At<Method>(At<U64>(owned, 0), 0x8)(owned);
  }
}

[[gnu::visibility("hidden")]] bool GameStub_15e6990(U64 object) {
  return GameRoutine_94af40(object) == 0;
}

[[gnu::visibility("hidden")]] bool GameStub_15f3a70(U64 object) {
  return GameRoutine_94a820(object) == 0;
}

[[gnu::visibility("hidden")]] bool GameStub_15f4c30(U64 object) {
  return GameRoutine_947af0(object) == 0;
}

[[gnu::visibility("hidden")]] bool GameStub_1691790(U64 object) {
  return GameRoutine_94a820(object) == 0;
}

[[gnu::visibility("hidden")]] bool GameStub_16918e0(U64 object) {
  return GameRoutine_947af0(object) == 0;
}

[[gnu::visibility("hidden")]] bool GameStub_1695240(U64 object) {
  return GameRoutine_948340(object) == 0;
}

[[gnu::visibility("hidden")]] bool GameStub_1695380(U64 object) {
  return GameRoutine_94a1d0(object) == 0;
}

[[gnu::visibility("hidden")]] bool GameStub_1695450(U64 object) {
  return GameRoutine_94af40(object) == 0;
}

[[gnu::visibility("hidden")]] bool GameStub_1695490(U64 object) {
  return GameRoutine_94b560(object) == 0;
}

[[gnu::visibility("hidden")]] bool GameStub_16955f0(U64 object) {
  return GameRoutine_948a50(object) == 0;
}

[[gnu::visibility("hidden")]] bool GameStub_16956f0(U64 object) {
  return GameRoutine_948b80(object) == 0;
}

[[gnu::visibility("hidden")]] bool GameStub_1695c80(U64 object) {
  return GameRoutine_947a30(object) == 0;
}

[[gnu::visibility("hidden")]] bool GameStub_1695df0(U64 object) {
  return GameRoutine_94bdc0(object) == 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_169e750(U64 object) {
  GameRoutine_16ec100(object);
  return GameRoutine_16dd9a0(object);
}

[[gnu::visibility("hidden")]] bool GameStub_16b38a0(U64 object) {
  return GameRoutine_948340(object) == 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_16d8be0(U64 object, U64 type) {
  return At<U64>(type, 8) == GameSlot_2131be0 ? object + 0x8 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_1700df0(U64 object) {
  GameRoutine_16ed000(object);
  return GameRoutine_170acf0(object);
}

[[gnu::visibility("hidden")]] U64 GameStub_1703620(U64 object) {
  GameRoutine_16ed000(object);
  return GameRoutine_170acf0(object);
}

[[gnu::visibility("hidden")]] U64 GameStub_178cab0(U64 object) {
  GameRoutine_16e1ce0(object);
  return GameRoutine_178cae0(object);
}

[[gnu::visibility("hidden")]] U64 GameStub_17e1c70(U64 object, U64 type) {
  return At<U64>(type, 8) == GameSlot_2131e30 ? object + 0x8 : 0;
}

[[gnu::visibility("hidden")]] void GameStub_17e5340(U64 object) {
  using Method = void (*)(U64);
  const U64 target = At<U64>(object, 0x98);
  if (target != 0) {
    At<Method>(At<U64>(target, 0), 0x90)(target);
  }
}

[[gnu::visibility("hidden")]] U64 GameStub_1865d80(U64 object) {
  GameRoutine_16ed000(object);
  return GameRoutine_170acf0(object);
}

[[gnu::visibility("hidden")]] U64 GameStub_186d390(U64 object) {
  GameRoutine_1874060(object);
  return GameRoutine_186e010(object);
}

[[gnu::visibility("hidden")]] U64 GameStub_1879230(U64 object) {
  GameRoutine_18735e0(object);
  return GameRoutine_16defa0(object);
}

[[gnu::visibility("hidden")]] bool GameStub_18846a0(U64 object) {
  return GameRoutine_947a30(object) == 0;
}

[[gnu::visibility("hidden")]] void GameStub_18cf380(U64 object) {
  using Method = void (*)(U64);
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_2108ec8);
  const U64 owned = At<U64>(object, 0x10);
  At<U64>(object, 0x10) = 0;
  if (owned != 0) {
    At<Method>(At<U64>(owned, 0), 0x8)(owned);
  }
}

[[gnu::visibility("hidden")]] void GameStub_18cf440(U64 object) {
  using Method = void (*)(U64);
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_2108f08);
  const U64 owned = At<U64>(object, 0x10);
  At<U64>(object, 0x10) = 0;
  if (owned != 0) {
    At<Method>(At<U64>(owned, 0), 0x8)(owned);
  }
}

[[gnu::visibility("hidden")]] U64 GameStub_1918130(U64 object) {
  GameRoutine_4e8a0(object);
  return GameRoutine_4e860(object);
}

[[gnu::visibility("hidden")]] U64 GameStub_1918320(U64 object) {
  GameRoutine_1916610(object);
  return GameRoutine_4e860(object);
}

[[gnu::visibility("hidden")]] U64 GameStub_1919580(U64 object) {
  GameRoutine_4e960(object);
  return GameRoutine_4e860(object);
}

[[gnu::visibility("hidden")]] void GameStub_1959b80(U64 object) {
  using Method = void (*)(U64);
  const U64 target = At<U64>(object, 0xe0);
  if (target != 0) {
    At<Method>(At<U64>(target, 0), 0x30)(target);
  }
}

[[gnu::visibility("hidden")]] bool GameStub_196a3a0(U64 object) {
  return GameRoutine_94bdc0(object) == 0;
}
