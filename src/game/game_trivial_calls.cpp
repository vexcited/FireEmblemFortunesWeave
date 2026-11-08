#include <stdint.h>

using U8 = uint8_t;
using U16 = uint16_t;
using U32 = uint32_t;
using U64 = uint64_t;

template <typename T>
[[gnu::always_inline]] inline T& At(U64 address, U64 offset) {
  return *reinterpret_cast<T*>(address + offset);
}

[[gnu::visibility("hidden")]] extern U8 GameData_1b0920f[];
[[gnu::visibility("hidden")]] extern U8 GameData_1b09289[];
[[gnu::visibility("hidden")]] extern U8 GameData_1b09303[];
[[gnu::visibility("hidden")]] extern U8 GameData_1b32f44[];
[[gnu::visibility("hidden")]] extern U8 GameData_1b01748[];
[[gnu::visibility("hidden")]] extern U8 GameData_1b32f6c[];
[[gnu::visibility("hidden")]] extern U8 GameData_1b32f80[];
[[gnu::visibility("hidden")]] extern U8 GameData_1b32fcc[];
[[gnu::visibility("hidden")]] extern U8 GameData_1b0b9a4[];
[[gnu::visibility("hidden")]] extern U8 GameData_1b3306c[];
[[gnu::visibility("hidden")]] extern U8 GameData_1b3300c[];
[[gnu::visibility("hidden")]] extern U8 GameData_1b33048[];
[[gnu::visibility("hidden")]] extern U8 GameData_1b330a8[];
[[gnu::visibility("hidden")]] extern U8 GameData_1b3620c[];
[[gnu::visibility("hidden")]] extern U8 GameData_1b36292[];
[[gnu::visibility("hidden")]] extern U8 GameData_1b36314[];
[[gnu::visibility("hidden")]] extern U8 GameData_1b36494[];
[[gnu::visibility("hidden")]] extern U8 GameData_1b3656c[];
[[gnu::visibility("hidden")]] extern U8 GameData_1b3663d[];
[[gnu::visibility("hidden")]] extern U8 GameData_1b37a66[];
[[gnu::visibility("hidden")]] extern U8 GameData_1b3b619[];
[[gnu::visibility("hidden")]] extern U8 GameData_1b3c311[];
[[gnu::visibility("hidden")]] extern U8 GameData_1b3e04c[];
[[gnu::visibility("hidden")]] extern U8 GameData_1b3e14f[];
[[gnu::visibility("hidden")]] extern U8 GameData_1b3e4bb[];
[[gnu::visibility("hidden")]] extern U8 GameData_1b3e593[];
[[gnu::visibility("hidden")]] extern U8 GameData_1b3e66b[];
[[gnu::visibility("hidden")]] extern U8 GameData_1b3f93e[];
[[gnu::visibility("hidden")]] extern U8 GameData_1b4000c[];
[[gnu::visibility("hidden")]] extern U8 GameData_1b4010f[];
[[gnu::visibility("hidden")]] extern U8 GameData_1b4020b[];
[[gnu::visibility("hidden")]] extern U8 GameData_1b403eb[];
[[gnu::visibility("hidden")]] extern U8 GameData_1b40d94[];
[[gnu::visibility("hidden")]] extern U8 GameData_1b41ef8[];
[[gnu::visibility("hidden")]] extern U8 GameData_1b42b76[];
[[gnu::visibility("hidden")]] extern U8 GameData_1b43ab9[];
[[gnu::visibility("hidden")]] extern U8 GameData_1b47147[];
[[gnu::visibility("hidden")]] extern U8 GameData_1b49032[];
[[gnu::visibility("hidden")]] extern U8 GameData_1b490e3[];
[[gnu::visibility("hidden")]] extern U8 GameData_1b4959e[];
[[gnu::visibility("hidden")]] extern U8 GameData_1b496b9[];
[[gnu::visibility("hidden")]] extern U8 GameData_1b4dc50[];
[[gnu::visibility("hidden")]] extern U8 GameData_1b50a01[];
[[gnu::visibility("hidden")]] extern U8 GameData_1b50f6e[];
[[gnu::visibility("hidden")]] extern U8 GameData_1b5197a[];
[[gnu::visibility("hidden")]] extern U8 GameData_1b51a42[];
[[gnu::visibility("hidden")]] extern U8 GameData_1b51f8c[];
[[gnu::visibility("hidden")]] extern U8 GameData_1b524af[];
[[gnu::visibility("hidden")]] U64 GameRoutine_19590d0(U64, U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_1958ed0(U64, U64);
[[gnu::visibility("hidden")]] extern U8 GameData_1b53512[];
[[gnu::visibility("hidden")]] extern U8 GameData_1a857ca[];
[[gnu::visibility("hidden")]] U64 GameRoutine_f9a740(U64, U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_fb33c0(U64, U64);
[[gnu::visibility("hidden")]] extern U8 GameData_1b5e22e[];
[[gnu::visibility("hidden")]] extern U8 GameData_1b5fabc[];
[[gnu::visibility("hidden")]] extern U8 GameData_1b5fbc7[];
[[gnu::visibility("hidden")]] extern U8 GameData_1b5fcd6[];
[[gnu::visibility("hidden")]] extern U8 GameData_1b60f07[];
[[gnu::visibility("hidden")]] extern U8 GameData_1b610dd[];
[[gnu::visibility("hidden")]] extern U8 GameData_1b6117a[];
[[gnu::visibility("hidden")]] extern U8 GameData_1b64649[];
[[gnu::visibility("hidden")]] extern U8 GameData_1b6476f[];
[[gnu::visibility("hidden")]] extern U8 GameData_1b7af42[];
[[gnu::visibility("hidden")]] extern U8 GameData_1b7afda[];
[[gnu::visibility("hidden")]] extern U8 GameData_1b7e1e6[];
[[gnu::visibility("hidden")]] extern U8 GameData_1b7f49b[];
[[gnu::visibility("hidden")]] extern U8 GameData_1b7fa7e[];
[[gnu::visibility("hidden")]] extern U8 GameData_1b7ff93[];
[[gnu::visibility("hidden")]] extern U8 GameData_1b82e33[];
[[gnu::visibility("hidden")]] extern U8 GameData_1b8824f[];
[[gnu::visibility("hidden")]] extern U8 GameData_1b88452[];
[[gnu::visibility("hidden")]] extern U8 GameData_1b8bcfe[];
[[gnu::visibility("hidden")]] extern U8 GameData_1b8bdc5[];
[[gnu::visibility("hidden")]] extern U8 GameData_1b8be8a[];
[[gnu::visibility("hidden")]] extern U8 GameData_1b8d2e2[];
[[gnu::visibility("hidden")]] extern U8 GameData_1b91eab[];
[[gnu::visibility("hidden")]] extern U8 GameData_1abc929[];
[[gnu::visibility("hidden")]] U64 GameRoutine_1560070(U64, U64);
[[gnu::visibility("hidden")]] extern U8 GameData_1ae2ce5[];
[[gnu::visibility("hidden")]] extern U8 GameData_1b94cbb[];
[[gnu::visibility("hidden")]] extern U8 GameData_1b99f31[];
[[gnu::visibility("hidden")]] extern U8 GameData_1b99fdf[];
[[gnu::visibility("hidden")]] extern U8 GameData_1aaff81[];
[[gnu::visibility("hidden")]] extern U8 GameData_1ba661b[];
[[gnu::visibility("hidden")]] extern U8 GameData_1ba6a1d[];
[[gnu::visibility("hidden")]] extern U8 GameData_1ba67a3[];
[[gnu::visibility("hidden")]] extern U8 GameData_1ba68ac[];
[[gnu::visibility("hidden")]] extern U8 GameData_1ba6b04[];
[[gnu::visibility("hidden")]] extern U8 GameData_1ba6db9[];
[[gnu::visibility("hidden")]] extern U8 GameData_1ba7385[];
[[gnu::visibility("hidden")]] extern U8 GameData_1ba8b78[];
[[gnu::visibility("hidden")]] extern U8 GameData_1ba8ce7[];
[[gnu::visibility("hidden")]] extern U8 GameData_1ba9524[];
[[gnu::visibility("hidden")]] extern U8 GameData_1bad99d[];
[[gnu::visibility("hidden")]] extern U8 GameData_1bb3e03[];
[[gnu::visibility("hidden")]] extern U8 GameData_1bb3eca[];
[[gnu::visibility("hidden")]] extern U8 GameData_1bb402d[];
[[gnu::visibility("hidden")]] extern U8 GameData_1bb43fb[];
[[gnu::visibility("hidden")]] extern U8 GameData_1bb4498[];
[[gnu::visibility("hidden")]] extern U8 GameData_1bb62b5[];
[[gnu::visibility("hidden")]] extern U8 GameData_1bb639b[];
[[gnu::visibility("hidden")]] extern U8 GameData_1bca9c9[];
[[gnu::visibility("hidden")]] U64 GameRoutine_9476c0(U64, U64);
[[gnu::visibility("hidden")]] extern U8 GameData_1bcdf63[];
[[gnu::visibility("hidden")]] extern U8 GameData_1bce4aa[];
[[gnu::visibility("hidden")]] extern U8 GameData_1bce3f4[];
[[gnu::visibility("hidden")]] extern U8 GameData_1bce5f4[];
[[gnu::visibility("hidden")]] U64 GameRoutine_1373cd0(U64, U64);
[[gnu::visibility("hidden")]] extern U8 GameData_1abd591[];
[[gnu::visibility("hidden")]] U64 GameRoutine_1764d60(U64, U64);
[[gnu::visibility("hidden")]] extern U8 GameData_1bd1f79[];
[[gnu::visibility("hidden")]] extern U8 GameData_1bd3762[];
[[gnu::visibility("hidden")]] extern U8 GameData_1bd47f2[];
[[gnu::visibility("hidden")]] extern U8 GameData_1bd664e[];
[[gnu::visibility("hidden")]] extern U8 GameData_1ab00b4[];
[[gnu::visibility("hidden")]] extern U8 GameData_1ab00c8[];
[[gnu::visibility("hidden")]] extern U8 GameData_1bece92[];
[[gnu::visibility("hidden")]] extern U8 GameData_1beccc5[];
[[gnu::visibility("hidden")]] extern U8 GameData_1bece03[];
[[gnu::visibility("hidden")]] extern U8 GameData_1bed190[];
[[gnu::visibility("hidden")]] extern U8 GameData_1beeda3[];
[[gnu::visibility("hidden")]] extern U8 GameData_1bf09f9[];
[[gnu::visibility("hidden")]] extern U8 GameData_1bf0893[];
[[gnu::visibility("hidden")]] extern U8 GameData_1bf0985[];
[[gnu::visibility("hidden")]] extern U8 GameData_1bf0d69[];
[[gnu::visibility("hidden")]] extern U8 GameData_1bf0cf2[];
[[gnu::visibility("hidden")]] extern U8 GameData_1ac4f33[];
[[gnu::visibility("hidden")]] extern U8 GameData_1aeb93d[];
[[gnu::visibility("hidden")]] extern U8 GameData_1bf7b28[];
[[gnu::visibility("hidden")]] extern U8 GameData_1bf7c7e[];
[[gnu::visibility("hidden")]] extern U8 GameData_1bf7f0e[];
[[gnu::visibility("hidden")]] extern U8 GameData_1ad4b55[];
[[gnu::visibility("hidden")]] extern U8 GameData_1aeba94[];
[[gnu::visibility("hidden")]] extern U8 GameData_1bfcd9a[];
[[gnu::visibility("hidden")]] extern U8 GameData_1bfce7f[];
[[gnu::visibility("hidden")]] extern U8 GameData_1bff35d[];
[[gnu::visibility("hidden")]] extern U8 GameData_1bff5e1[];
[[gnu::visibility("hidden")]] extern U8 GameData_1c0138c[];
[[gnu::visibility("hidden")]] extern U8 GameData_1c014cb[];
[[gnu::visibility("hidden")]] extern U8 GameData_1aa6652[];
[[gnu::visibility("hidden")]] U64 GameRoutine_1562cf0(U64, U64);
[[gnu::visibility("hidden")]] extern U8 GameData_1ae7e6a[];
[[gnu::visibility("hidden")]] extern U8 GameData_1c0fdc0[];
[[gnu::visibility("hidden")]] extern U8 GameData_1c0feab[];
[[gnu::visibility("hidden")]] extern U8 GameData_1c10461[];
[[gnu::visibility("hidden")]] extern U8 GameData_1c12a5a[];
[[gnu::visibility("hidden")]] extern U8 GameData_1c12bde[];
[[gnu::visibility("hidden")]] extern U8 GameData_1c1571c[];
[[gnu::visibility("hidden")]] extern U8 GameData_1c1afcc[];
[[gnu::visibility("hidden")]] extern U8 GameData_1c1d7f6[];
[[gnu::visibility("hidden")]] U64 GameRoutine_144d9c0(U64, U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_17746d0(U64, U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_1774dd0(U64, U64);
[[gnu::visibility("hidden")]] extern U8 GameData_1c22672[];
[[gnu::visibility("hidden")]] extern U8 GameData_1aefbc0[];
[[gnu::visibility("hidden")]] extern U8 GameData_1ab23ef[];
[[gnu::visibility("hidden")]] extern U8 GameData_1ac1d9b[];
[[gnu::visibility("hidden")]] extern U8 GameData_1ad1102[];
[[gnu::visibility("hidden")]] extern U8 GameData_1af329c[];
[[gnu::visibility("hidden")]] U64 GameRoutine_155f480(U64, U64);
[[gnu::visibility("hidden")]] extern U8 GameData_1c27cbf[];
[[gnu::visibility("hidden")]] extern U8 GameData_1c27d73[];

[[gnu::visibility("hidden")]] U64 GameStub_13d200(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1b0920f) ? object + 0x8 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_13d340(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1b09289) ? object + 0x8 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_13d480(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1b09303) ? object + 0x8 : 0;
}

[[gnu::visibility("hidden")]] void GameStub_27f650(U64 object) {
  At<U8>(object, 0x41) = 1;
}

[[gnu::visibility("hidden")]] void GameStub_2806d0(U64 object) {
  At<U8>(object, 0xf4) = 1;
}

[[gnu::visibility("hidden")]] void GameStub_281e60(U64 object) {
  At<U64>(object, 0x28) = 0;
}

[[gnu::visibility("hidden")]] void GameStub_281e80(U64 object) {
  At<U64>(object, 0x30) = 0;
}

[[gnu::visibility("hidden")]] void GameStub_289110(U64 object) {
  At<U64>(object, 0x0) = 0;
}

[[gnu::visibility("hidden")]] void GameStub_28e3e0(U64 object) {
  At<U8>(object, 0x41) = 1;
}

[[gnu::visibility("hidden")]] void GameStub_291e10(U64 object) {
  At<U64>(object, 0xe0) = 0;
}

[[gnu::visibility("hidden")]] void GameStub_2ad4c0(U64 object) {
  At<U8>(object, 0x41) = 1;
}

[[gnu::visibility("hidden")]] void GameStub_2b3d70(U64 object, U64 a1, U64 a2) {
  using Method = void (*)(U64, U64, U64);
  const U64 target = At<U64>(object, 0x8);
  At<Method>(At<U64>(target, 0), 0x60)(target, a1, a2);
}

[[gnu::visibility("hidden")]] void GameStub_2b3df0(U64 object, U64 a1, U64 a2,
    U64 a3) {
  using Method = void (*)(U64, U64, U64, U64);
  const U64 target = At<U64>(object, 0x8);
  At<Method>(At<U64>(target, 0), 0x20)(target, a1, a2, a3);
}

[[gnu::visibility("hidden")]] void GameStub_2b3e00(U64 object, U64 a1, U64 a2,
    U64 a3) {
  using Method = void (*)(U64, U64, U64, U64);
  const U64 target = At<U64>(object, 0x8);
  At<Method>(At<U64>(target, 0), 0x28)(target, a1, a2, a3);
}

[[gnu::visibility("hidden")]] void GameStub_2b3ee0(U64 object, U64 a1, U64 a2) {
  using Method = void (*)(U64, U64, U64);
  const U64 target = At<U64>(object, 0x8);
  At<Method>(At<U64>(target, 0), 0x70)(target, a1, a2);
}

[[gnu::visibility("hidden")]] void GameStub_2b3f00(U64, U64 other) {
  using Method = void (*)(U64);
  const U64 target = At<U64>(other, 0x8);
  At<Method>(At<U64>(target, 0), 0x80)(target);
}

[[gnu::visibility("hidden")]] void GameStub_2b3f30(U64 object, U64 a1) {
  using Method = void (*)(U64, U64);
  const U64 target = At<U64>(object, 0x8);
  At<Method>(At<U64>(target, 0), 0x98)(target, a1);
}

[[gnu::visibility("hidden")]] void GameStub_5752a0(U64 object, U64 a1, U64 a2,
    U64 a3) {
  using Method = void (*)(U64, U64, U64, U64);
  At<Method>(At<U64>(object, 0), 0x40)(object, a1, a2, a3);
}

[[gnu::visibility("hidden")]] void GameStub_575370(U64 object, U64 a1, U64 a2,
    U64 a3) {
  using Method = void (*)(U64, U64, U64, U64);
  At<Method>(At<U64>(object, 0), 0x40)(object, a1, a2, a3);
}

[[gnu::visibility("hidden")]] void GameStub_5768e0(U64 object) {
  At<U64>(object, 0xc0) = 0;
}

[[gnu::visibility("hidden")]] void GameStub_57d030(U64 object, U64 a1, U64 a2) {
  using Method = void (*)(U64, U64, U64);
  const U64 target = At<U64>(object, 0x40);
  At<Method>(At<U64>(target, 0), 0x88)(target, a1, a2);
}

[[gnu::visibility("hidden")]] void GameStub_57d040(U64 object, U64 a1, U64 a2,
    U64 a3, U64 a4) {
  using Method = void (*)(U64, U64, U64, U64, U64);
  const U64 target = At<U64>(object, 0x40);
  At<Method>(At<U64>(target, 0), 0x90)(target, a1, a2, a3, a4);
}

[[gnu::visibility("hidden")]] void GameStub_58e1c0(U64 object, U64 a1, U64 a2) {
  using Method = void (*)(U64, U64, U64);
  At<Method>(At<U64>(object, 0), 0x78)(object, a1, a2);
}

[[gnu::visibility("hidden")]] void GameStub_58e2d0(U64 object, U64 a1, U64 a2) {
  using Method = void (*)(U64, U64, U64);
  At<Method>(At<U64>(object, 0), 0x88)(object, a1, a2);
}

[[gnu::visibility("hidden")]] void GameStub_5974d0(U64 object, U64 a1, U64 a2,
    U64 a3) {
  using Method = void (*)(U64, U64, U64, U64);
  At<Method>(At<U64>(object, 0), 0x40)(object, a1, a2, a3);
}

[[gnu::visibility("hidden")]] void GameStub_5a5fa0(U64 object) {
  At<U64>(object, 0x38) = 0;
}

[[gnu::visibility("hidden")]] void GameStub_5af070(U64 object, U64 a1, U64 a2) {
  using Method = void (*)(U64, U64, U64);
  At<Method>(At<U64>(object, 0), 0x88)(object, a1, a2);
}

[[gnu::visibility("hidden")]] void GameStub_5b24d0(U64 object, U64 a1, U64 a2,
    U64 a3, U64 a4) {
  using Method = void (*)(U64, U64, U64, U64, U64);
  At<Method>(At<U64>(object, 0), 0x10)(object, a1, a2, a3, a4);
}

[[gnu::visibility("hidden")]] void GameStub_5fc180(U64 object) {
  At<U64>(object, 0x0) = 0;
}

[[gnu::visibility("hidden")]] void GameStub_5fc3c0(U64 object) {
  At<U64>(object, 0x0) = 0;
}

[[gnu::visibility("hidden")]] void GameStub_5fe250(U64 object) {
  At<U8>(object, 0x0) = 2;
}

[[gnu::visibility("hidden")]] void GameStub_5fe260(U64 object) {
  At<U8>(object, 0x0) = 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_6035a0(U32 index) {
  return reinterpret_cast<const U32*>(GameData_1b32f44)[index];
}

[[gnu::visibility("hidden")]] U32 GameStub_6035b0(U32 index) {
  return reinterpret_cast<const U32*>(GameData_1b01748)[index];
}

[[gnu::visibility("hidden")]] U32 GameStub_6035c0(U32 index) {
  return reinterpret_cast<const U32*>(GameData_1b01748)[index];
}

[[gnu::visibility("hidden")]] U32 GameStub_6035d0(U32 index) {
  return reinterpret_cast<const U32*>(GameData_1b01748)[index];
}

[[gnu::visibility("hidden")]] U32 GameStub_6035e0(U32 index) {
  return reinterpret_cast<const U32*>(GameData_1b32f6c)[index];
}

[[gnu::visibility("hidden")]] U32 GameStub_6035f0(U32 index) {
  return reinterpret_cast<const U32*>(GameData_1b32f80)[index];
}

[[gnu::visibility("hidden")]] U32 GameStub_603600(U32 index) {
  return reinterpret_cast<const U32*>(GameData_1b32fcc)[index];
}

[[gnu::visibility("hidden")]] U32 GameStub_603610(U32 index) {
  return reinterpret_cast<const U32*>(GameData_1b0b9a4)[index];
}

[[gnu::visibility("hidden")]] U32 GameStub_603620(U32 index) {
  return reinterpret_cast<const U32*>(GameData_1b3306c)[index];
}

[[gnu::visibility("hidden")]] U32 GameStub_603630(U32 index) {
  return reinterpret_cast<const U32*>(GameData_1b3300c)[index];
}

[[gnu::visibility("hidden")]] U32 GameStub_603640(U32 index) {
  return reinterpret_cast<const U32*>(GameData_1b33048)[index];
}

[[gnu::visibility("hidden")]] U32 GameStub_6036a0(U32 index) {
  return reinterpret_cast<const U32*>(GameData_1b3306c)[index];
}

[[gnu::visibility("hidden")]] U32 GameStub_6036b0(U32 index) {
  return reinterpret_cast<const U32*>(GameData_1b3306c)[index];
}

[[gnu::visibility("hidden")]] U32 GameStub_603c30(U32 index) {
  return reinterpret_cast<const U32*>(GameData_1b330a8)[index];
}

[[gnu::visibility("hidden")]] U64 GameStub_64be10(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1b3620c) ? object + 0x18 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_64bfa0(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1b36292) ? object + 0x18 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_64c060(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1b36314) ? object + 0x18 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_64dc80(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1b36494) ? object + 0x18 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_64dd90(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1b3656c) ? object + 0x18 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_64e450(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1b3663d) ? object + 0x18 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_6897e0(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1b37a66) ? object + 0x10 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_743320(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1b3b619) ? object + 0x10 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_75cfc0(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1b3c311) ? object + 0x10 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_77f7c0(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1b3e04c) ? object + 0x10 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_780280(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1b3e14f) ? object + 0x10 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_781350(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1b3e4bb) ? object + 0x10 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_781720(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1b3e593) ? object + 0x10 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_781a20(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1b3e66b) ? object + 0x10 : 0;
}

[[gnu::visibility("hidden")]] void GameStub_781b10(U64 object) {
  At<U8>(At<U64>(object, 0x8), 0) = 1;
}

[[gnu::visibility("hidden")]] U64 GameStub_7a73b0(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1b3f93e) ? object + 0x10 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_7ab560(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1b4000c) ? object + 0x10 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_7ab8e0(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1b4010f) ? object + 0x10 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_7abc60(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1b4020b) ? object + 0x10 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_7ac710(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1b403eb) ? object + 0x10 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_7b92c0(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1b40d94) ? object + 0x10 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_7d0be0(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1b41ef8) ? object + 0x10 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_7d4670(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1b42b76) ? object + 0x10 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_7f6e30(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1b43ab9) ? object + 0x10 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_836250(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1b47147) ? object + 0x10 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_857da0(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1b49032) ? object + 0x8 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_858080(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1b490e3) ? object + 0x8 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_858a60(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1b4959e) ? object + 0x10 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_858d30(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1b496b9) ? object + 0x10 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_8b31d0(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1b4dc50) ? object + 0x8 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_8f2930(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1b50a01) ? object + 0x8 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_8f38e0(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1b50f6e) ? object + 0x10 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_8f8530(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1b5197a) ? object + 0x8 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_8f88f0(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1b51a42) ? object + 0x10 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_900af0(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1b51f8c) ? object + 0x10 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_9189c0(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1b524af) ? object + 0x10 : 0;
}

[[gnu::visibility("hidden")]] void GameStub_918f90(U64 object, U64 source) {
  At<U32>(At<U64>(object, 0), 0) = At<U32>(source, 0);
}

[[gnu::visibility("hidden")]] void GameStub_918fb0(U64 object, U64 source) {
  At<U32>(At<U64>(object, 0), 0) = At<U32>(source, 0);
}

[[gnu::visibility("hidden")]] U64 GameStub_929bc0(U64 object) {
  return GameRoutine_19590d0(object + 0x98, object);
}

[[gnu::visibility("hidden")]] U64 GameStub_929c80(U64 object) {
  return GameRoutine_1958ed0(object + 0x98, object);
}

[[gnu::visibility("hidden")]] U64 GameStub_944230(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1b53512) ? object + 0x8 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_9ab8e0(U64 object) {
  return GameRoutine_f9a740(object, reinterpret_cast<U64>(GameData_1a857ca));
}

[[gnu::visibility("hidden")]] U64 GameStub_9bca40(U64 object) {
  return GameRoutine_fb33c0(object, object + 0xa8);
}

[[gnu::visibility("hidden")]] U64 GameStub_a0c700(U64 object) {
  return GameRoutine_19590d0(object + 0x98, object);
}

[[gnu::visibility("hidden")]] U64 GameStub_a0d970(U64 object) {
  return GameRoutine_1958ed0(object + 0x98, object);
}

[[gnu::visibility("hidden")]] void GameStub_a3aa10(U64 object) {
  At<U8>(object, 0x40) = 1;
}

[[gnu::visibility("hidden")]] void GameStub_a3aa30(U64 object) {
  At<U8>(object, 0x41) = 1;
}

[[gnu::visibility("hidden")]] U64 GameStub_a79c30(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1b5e22e) ? object + 0x8 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_adbc70(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1b5fabc) ? object + 0x10 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_adbf20(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1b5fbc7) ? object + 0x10 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_adc1d0(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1b5fcd6) ? object + 0x10 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_b2dbd0(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1b60f07) ? object + 0x18 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_b3a5d0(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1b610dd) ? object + 0x18 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_b3a700(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1b6117a) ? object + 0x18 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_b6cda0(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1b64649) ? object + 0x8 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_b6cec0(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1b6476f) ? object + 0x8 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_bbd880(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1b7af42) ? object + 0x18 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_bbda20(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1b7afda) ? object + 0x18 : 0;
}

[[gnu::visibility("hidden")]] void GameStub_bcabc0(U64 object) {
  At<U8>(object, 0xb4) = 1;
}

[[gnu::visibility("hidden")]] U64 GameStub_beeb20(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1b7e1e6) ? object + 0x10 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_c0ec30(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1b7f49b) ? object + 0x18 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_c3b3a0(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1b7fa7e) ? object + 0x18 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_c49610(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1b7ff93) ? object + 0x10 : 0;
}

[[gnu::visibility("hidden")]] void GameStub_c8c200(U64 object, U64 source) {
  At<U32>(At<U64>(object, 0), 0) = At<U32>(source, 0);
}

[[gnu::visibility("hidden")]] void GameStub_cb2ec0(U64 object, U64 source) {
  At<U32>(At<U64>(object, 0), 0) = At<U32>(source, 0);
}

[[gnu::visibility("hidden")]] void GameStub_cb2ee0(U64 object, U64 source) {
  At<U32>(At<U64>(object, 0), 0) = At<U32>(source, 0);
}

[[gnu::visibility("hidden")]] U64 GameStub_cdd110(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1b82e33) ? object + 0x8 : 0;
}

[[gnu::visibility("hidden")]] void GameStub_d437e0(U64 object) {
  At<U64>(object, 0x10) = 0;
}

[[gnu::visibility("hidden")]] void GameStub_d4ae60(U64 object, U64 source) {
  At<U32>(At<U64>(object, 0), 0) = At<U32>(source, 0);
}

[[gnu::visibility("hidden")]] void GameStub_d4ae80(U64 object, U64 source) {
  At<U32>(At<U64>(object, 0), 0) = At<U32>(source, 0);
}

[[gnu::visibility("hidden")]] void GameStub_d4aff0(U64 object, U64 source) {
  At<U32>(At<U64>(object, 0), 0) = At<U32>(source, 0);
}

[[gnu::visibility("hidden")]] void GameStub_d4b010(U64 object, U64 source) {
  At<U32>(At<U64>(object, 0), 0) = At<U32>(source, 0);
}

[[gnu::visibility("hidden")]] U64 GameStub_d69a10(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1b8824f) ? object + 0x8 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_d70e40(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1b88452) ? object + 0x10 : 0;
}

[[gnu::visibility("hidden")]] void GameStub_d88560(U64 object) {
  At<U8>(object, 0xda) = 1;
}

[[gnu::visibility("hidden")]] U64 GameStub_dfe790(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1b8bcfe) ? object + 0x10 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_dfea30(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1b8bdc5) ? object + 0x10 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_dfedf0(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1b8be8a) ? object + 0x10 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_e205e0(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1b8d2e2) ? object + 0x8 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_e7f140(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1b91eab) ? object + 0x10 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_e97b40(U64 object) {
  return GameRoutine_1560070(object + 0x350,
    reinterpret_cast<U64>(GameData_1abc929));
}

[[gnu::visibility("hidden")]] U64 GameStub_e97b50(U64 object) {
  return GameRoutine_1560070(object + 0x350,
    reinterpret_cast<U64>(GameData_1ae2ce5));
}

[[gnu::visibility("hidden")]] U64 GameStub_eb4fa0(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1b94cbb) ? object + 0x8 : 0;
}

[[gnu::visibility("hidden")]] void GameStub_ed53e0(U64 object, U64 source) {
  At<U32>(At<U64>(object, 0), 0) = At<U32>(source, 0);
}

[[gnu::visibility("hidden")]] U64 GameStub_f34580(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1b99f31) ? object + 0x8 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_f347c0(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1b99fdf) ? object + 0x8 : 0;
}

[[gnu::visibility("hidden")]] void GameStub_f50210(U64 object) {
  At<U64>(object, 0x10) = 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_f6e2f0(U64 object) {
  return GameRoutine_f9a740(object, reinterpret_cast<U64>(GameData_1aaff81));
}

[[gnu::visibility("hidden")]] U64 GameStub_1051080(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1ba661b) ? object + 0x8 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_1051d70(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1ba6a1d) ? object + 0x8 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_10521e0(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1ba67a3) ? object + 0x8 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_10525f0(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1ba68ac) ? object + 0x8 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_1052a90(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1ba6b04) ? object + 0x8 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_1052f90(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1ba6db9) ? object + 0x10 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_1064400(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1ba7385) ? object + 0x10 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_1089290(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1ba8b78) ? object + 0x8 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_1089390(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1ba8ce7) ? object + 0x8 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_108a3e0(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1ba9524) ? object + 0x10 : 0;
}

[[gnu::visibility("hidden")]] void GameStub_10bbba0(U64 object) {
  At<U8>(object, 0x64) = 1;
}

[[gnu::visibility("hidden")]] void GameStub_10c7740(U64 object) {
  At<U64>(object, 0x10) = 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_10d3c20(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1bad99d) ? object + 0x8 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_1152d60(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1bb3e03) ? object + 0x8 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_11536a0(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1bb3eca) ? object + 0x8 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_1160960(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1bb402d) ? object + 0x8 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_1161950(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1bb43fb) ? object + 0x8 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_1161e10(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1bb4498) ? object + 0x8 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_11c6810(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1bb62b5) ? object + 0x8 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_11c6c70(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1bb639b) ? object + 0x10 : 0;
}

[[gnu::visibility("hidden")]] void GameStub_11f8060(U64 object) {
  At<U8>(At<U64>(object, 0x8), 0) = 1;
}

[[gnu::visibility("hidden")]] void GameStub_1356ef0(U64 object) {
  At<U8>(At<U64>(object, 0x8), 0) = 1;
}

[[gnu::visibility("hidden")]] void GameStub_1356ff0(U64 object) {
  At<U8>(At<U64>(object, 0x8), 0) = 1;
}

[[gnu::visibility("hidden")]] U64 GameStub_1390990(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1bca9c9) ? object + 0x8 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_13dc0a0(U64 object) {
  return GameRoutine_9476c0(object, object + 0xb8);
}

[[gnu::visibility("hidden")]] U64 GameStub_13fe800(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1bcdf63) ? object + 0x10 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_14033d0(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1bce4aa) ? object + 0x10 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_14037a0(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1bce3f4) ? object + 0x10 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_1403c00(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1bce5f4) ? object + 0x10 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_141b950(U64 object) {
  return GameRoutine_9476c0(object, object + 0xc8);
}

[[gnu::visibility("hidden")]] U64 GameStub_141bb80(U64 object) {
  return GameRoutine_1373cd0(object, object + 0xb8);
}

[[gnu::visibility("hidden")]] U64 GameStub_141feb0(U64 object) {
  return GameRoutine_1764d60(object, reinterpret_cast<U64>(GameData_1abd591));
}

[[gnu::visibility("hidden")]] U64 GameStub_1428040(U64 object) {
  return GameRoutine_9476c0(object, object + 0xc8);
}

[[gnu::visibility("hidden")]] U64 GameStub_1439860(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1bd1f79) ? object + 0x8 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_1457280(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1bd3762) ? object + 0x10 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_1467640(U64 object) {
  return GameRoutine_1373cd0(object, object + 0xb8);
}

[[gnu::visibility("hidden")]] U64 GameStub_146bf50(U64 object) {
  return GameRoutine_19590d0(object + 0xd0, object);
}

[[gnu::visibility("hidden")]] U64 GameStub_146df20(U64 object) {
  return GameRoutine_1958ed0(object + 0xd0, object);
}

[[gnu::visibility("hidden")]] U64 GameStub_146ea40(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1bd47f2) ? object + 0x10 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_148d9d0(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1bd664e) ? object + 0x10 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_14b07a0(U64 object) {
  return GameRoutine_1764d60(object, reinterpret_cast<U64>(GameData_1abd591));
}

[[gnu::visibility("hidden")]] U64 GameStub_15c6240(U64 object) {
  return GameRoutine_1560070(object + 0x350,
    reinterpret_cast<U64>(GameData_1ab00b4));
}

[[gnu::visibility("hidden")]] U64 GameStub_15c6250(U64 object) {
  return GameRoutine_1560070(object + 0x350,
    reinterpret_cast<U64>(GameData_1ab00c8));
}

[[gnu::visibility("hidden")]] U64 GameStub_15caa60(U64 object) {
  return GameRoutine_1560070(object + 0x350,
    reinterpret_cast<U64>(GameData_1ab00b4));
}

[[gnu::visibility("hidden")]] U64 GameStub_15caa70(U64 object) {
  return GameRoutine_1560070(object + 0x350,
    reinterpret_cast<U64>(GameData_1ab00c8));
}

[[gnu::visibility("hidden")]] U64 GameStub_15edd90(U64 object) {
  return GameRoutine_19590d0(object + 0xd0, object);
}

[[gnu::visibility("hidden")]] U64 GameStub_15f0530(U64 object) {
  return GameRoutine_1958ed0(object + 0xd0, object);
}

[[gnu::visibility("hidden")]] U64 GameStub_166b2a0(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1bece92) ? object + 0x10 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_166b410(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1beccc5) ? object + 0x8 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_166b6b0(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1bece03) ? object + 0x10 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_166bfa0(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1bed190) ? object + 0x10 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_169a800(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1beeda3) ? object + 0x10 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_16a8a40(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1bf09f9) ? object + 0x8 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_16a8fa0(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1bf0893) ? object + 0x10 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_16a9080(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1bf0985) ? object + 0x8 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_16a9450(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1bf0d69) ? object + 0x8 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_16a95d0(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1bf0cf2) ? object + 0x8 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_16baf50(U64 object) {
  return GameRoutine_1560070(object + 0x350,
    reinterpret_cast<U64>(GameData_1ac4f33));
}

[[gnu::visibility("hidden")]] U64 GameStub_16baf60(U64 object) {
  return GameRoutine_1560070(object + 0x350,
    reinterpret_cast<U64>(GameData_1aeb93d));
}

[[gnu::visibility("hidden")]] U64 GameStub_16fc590(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1bf7b28) ? object + 0x10 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_16fc8a0(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1bf7c7e) ? object + 0x8 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_16fd890(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1bf7f0e) ? object + 0x10 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_172f5f0(U64 object) {
  return GameRoutine_1560070(object + 0x3b8,
    reinterpret_cast<U64>(GameData_1ad4b55));
}

[[gnu::visibility("hidden")]] U64 GameStub_172f600(U64 object) {
  return GameRoutine_1560070(object + 0x3b8,
    reinterpret_cast<U64>(GameData_1aeba94));
}

[[gnu::visibility("hidden")]] U64 GameStub_1733c20(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1bfcd9a) ? object + 0x8 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_1734390(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1bfce7f) ? object + 0x8 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_1780130(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1bff35d) ? object + 0x8 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_1780b20(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1bff5e1) ? object + 0x8 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_1793260(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1c0138c) ? object + 0x8 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_1794530(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1c014cb) ? object + 0x8 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_179e610(U64 object) {
  return GameRoutine_1562cf0(object + 0x3b8,
    reinterpret_cast<U64>(GameData_1aa6652));
}

[[gnu::visibility("hidden")]] U64 GameStub_179eff0(U64 object) {
  return GameRoutine_1562cf0(object + 0x3b8,
    reinterpret_cast<U64>(GameData_1ae7e6a));
}

[[gnu::visibility("hidden")]] void GameStub_17e53f0(U64 object) {
  At<U64>(object, 0x98) = 0;
}

[[gnu::visibility("hidden")]] void GameStub_1832080(U64 object) {
  At<U8>(At<U64>(object, 0x8), 0) = 1;
}

[[gnu::visibility("hidden")]] U64 GameStub_18501e0(U64 object) {
  return GameRoutine_1560070(object + 0x350,
    reinterpret_cast<U64>(GameData_1ab00b4));
}

[[gnu::visibility("hidden")]] U64 GameStub_18501f0(U64 object) {
  return GameRoutine_1560070(object + 0x350,
    reinterpret_cast<U64>(GameData_1ab00c8));
}

[[gnu::visibility("hidden")]] U64 GameStub_1852560(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1c0fdc0) ? object + 0x8 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_18526e0(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1c0feab) ? object + 0x8 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_1854080(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1c10461) ? object + 0x8 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_186ca20(U64 object) {
  return GameRoutine_1560070(object + 0x350,
    reinterpret_cast<U64>(GameData_1ab00b4));
}

[[gnu::visibility("hidden")]] U64 GameStub_186ca30(U64 object) {
  return GameRoutine_1560070(object + 0x350,
    reinterpret_cast<U64>(GameData_1ab00c8));
}

[[gnu::visibility("hidden")]] U64 GameStub_186f880(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1c12a5a) ? object + 0x8 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_186fea0(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1c12bde) ? object + 0x8 : 0;
}

[[gnu::visibility("hidden")]] void GameStub_18727e0(U64 object) {
  At<U8>(At<U64>(object, 0x8), 0) = 1;
}

[[gnu::visibility("hidden")]] U64 GameStub_1878d90(U64 object) {
  return GameRoutine_1560070(object + 0x350,
    reinterpret_cast<U64>(GameData_1ab00b4));
}

[[gnu::visibility("hidden")]] U64 GameStub_1878da0(U64 object) {
  return GameRoutine_1560070(object + 0x350,
    reinterpret_cast<U64>(GameData_1ab00c8));
}

[[gnu::visibility("hidden")]] void GameStub_187a3d0(U64 object) {
  At<U8>(At<U64>(object, 0x8), 0) = 1;
}

[[gnu::visibility("hidden")]] U64 GameStub_187a6b0(U64 object) {
  return GameRoutine_1560070(object + 0x350,
    reinterpret_cast<U64>(GameData_1ab00b4));
}

[[gnu::visibility("hidden")]] U64 GameStub_187a6c0(U64 object) {
  return GameRoutine_1560070(object + 0x350,
    reinterpret_cast<U64>(GameData_1ab00c8));
}

[[gnu::visibility("hidden")]] void GameStub_187c570(U64 object) {
  At<U8>(At<U64>(object, 0x8), 0) = 1;
}

[[gnu::visibility("hidden")]] void GameStub_187d030(U64 object) {
  At<U8>(At<U64>(object, 0x8), 0) = 1;
}

[[gnu::visibility("hidden")]] U64 GameStub_1881eb0(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1c1571c) ? object + 0x8 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_18d62c0(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1c1afcc) ? object + 0x10 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_1919010(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1c1d7f6) ? object + 0x10 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_194df40(U64 object) {
  return GameRoutine_19590d0(object + 0x98, object);
}

[[gnu::visibility("hidden")]] U64 GameStub_194e210(U64 object) {
  return GameRoutine_144d9c0(object, object + 0xb8);
}

[[gnu::visibility("hidden")]] U64 GameStub_194e220(U64 object) {
  return GameRoutine_1958ed0(object + 0x98, object);
}

[[gnu::visibility("hidden")]] U64 GameStub_1967660(U64 object) {
  return GameRoutine_17746d0(object, object + 0xb8);
}

[[gnu::visibility("hidden")]] U64 GameStub_1968f10(U64 object) {
  return GameRoutine_1774dd0(object, object + 0xb8);
}

[[gnu::visibility("hidden")]] U64 GameStub_19886d0(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1c22672) ? object + 0x8 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_19e3a60(U64 object) {
  return GameRoutine_1560070(object + 0x350,
    reinterpret_cast<U64>(GameData_1aefbc0));
}

[[gnu::visibility("hidden")]] U64 GameStub_19e3a70(U64 object) {
  return GameRoutine_1560070(object + 0x350,
    reinterpret_cast<U64>(GameData_1ab23ef));
}

[[gnu::visibility("hidden")]] U64 GameStub_19e9d80(U64 object) {
  return GameRoutine_1560070(object + 0x350,
    reinterpret_cast<U64>(GameData_1ab00b4));
}

[[gnu::visibility("hidden")]] U64 GameStub_19e9d90(U64 object) {
  return GameRoutine_1560070(object + 0x350,
    reinterpret_cast<U64>(GameData_1ab00c8));
}

[[gnu::visibility("hidden")]] U64 GameStub_19e9da0(U64 object) {
  return GameRoutine_1560070(object + 0x350,
    reinterpret_cast<U64>(GameData_1ac1d9b));
}

[[gnu::visibility("hidden")]] U64 GameStub_19e9db0(U64 object) {
  return GameRoutine_1560070(object + 0x350,
    reinterpret_cast<U64>(GameData_1ad1102));
}

[[gnu::visibility("hidden")]] U64 GameStub_1a07910(U64 object) {
  return GameRoutine_155f480(object + 0xa8,
    reinterpret_cast<U64>(GameData_1af329c));
}

[[gnu::visibility("hidden")]] U64 GameStub_1a084a0(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1c27cbf) ? object + 0x8 : 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_1a08da0(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(GameData_1c27d73) ? object + 0x8 : 0;
}
