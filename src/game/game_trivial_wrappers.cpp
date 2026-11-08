#include <stdint.h>

using U8 = uint8_t;
using U16 = uint16_t;
using U32 = uint32_t;
using U64 = uint64_t;

template <typename T>
[[gnu::always_inline]] inline T& At(U64 address, U64 offset) {
  return *reinterpret_cast<T*>(address + offset);
}

[[gnu::visibility("hidden")]] extern U8 GameData_2178cb0[];
[[gnu::visibility("hidden")]] U64 GameRoutine_e6f20(U64, U64);
[[gnu::visibility("hidden")]] extern U8 GameData_2178d00[];
[[gnu::visibility("hidden")]] U64 GameRoutine_ec280(U64, U64, U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_ec560(U64, U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_118980(U64, U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_118b20(U64, U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_105350(U64, U64, U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_105c80(U64, U64, U64, U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_105780(U64, U64, U64, U32);
[[gnu::visibility("hidden")]] U64 GameRoutine_135980(U64, U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_135d20(U64, U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_118c10(U64, U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_1a0c010(U32, U32, U32, U32);
[[gnu::visibility("hidden")]] U64 GameRoutine_1a0c0a0(U32, U32);
[[gnu::visibility("hidden")]] U64 GameRoutine_1a0c110(U32, U32, U32, U32, U32);
[[gnu::visibility("hidden")]] U64 GameRoutine_1a0c1a0(U32, U32, U32);
[[gnu::visibility("hidden")]] U64 GameRoutine_1a0c1b0(U64, U64, U64, U64, U64,
  U32);
[[gnu::visibility("hidden")]] U64 GameRoutine_27a400(U64, U64, U64, U64, U64,
  U32, U64, U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_1a0b950(U64, U64, U32);
[[gnu::visibility("hidden")]] U64 GameRoutine_2ab7c0(U32, U32);
[[gnu::visibility("hidden")]] U64 GameRoutine_294f60(U64, U32, U32, U32, U32);
[[gnu::visibility("hidden")]] U64 GameRoutine_28c2e0(U64, U64, U32);
[[gnu::visibility("hidden")]] U64 GameRoutine_1a09b80(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_5645a0(U64, U64, U16);
[[gnu::visibility("hidden")]] U64 GameRoutine_572470(U64, U64, U64, U64, U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_5fcd30(U64, U32, U32, U64, U32,
  U32);
[[gnu::visibility("hidden")]] U64 GameRoutine_5fd480(U64, U32, U64, U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_598720(U64, U64, U16);
[[gnu::visibility("hidden")]] U64 GameRoutine_5def60(U64, U64, U32, U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_5c5620(U64, U64, U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_5d2580(U64, U64, U64, U64, U64,
  U32, U64, U32);
[[gnu::visibility("hidden")]] U64 GameRoutine_5e7f80(U64, U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_5e80f0(U64, U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_5e8370(U64, U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_1a09bd0(U32);
[[gnu::visibility("hidden")]] U64 GameRoutine_636e40(U64, U64);
[[gnu::visibility("hidden")]] extern U8 GameData_212bf68[];
[[gnu::visibility("hidden")]] U64 GameRoutine_651b90(U64, U64, U32, U32);
[[gnu::visibility("hidden")]] U64 GameRoutine_8eb020(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_8eb7a0(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_21cd130[];
[[gnu::visibility("hidden")]] U64 GameRoutine_731180(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_7317c0(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_212d0d0[];
[[gnu::visibility("hidden")]] U64 GameRoutine_182ae70(U64, U32);
[[gnu::visibility("hidden")]] U64 GameRoutine_772ce0(U64, U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_730e40(U64, U64);
[[gnu::visibility("hidden")]] extern U8 GameData_212cfb8[];
[[gnu::visibility("hidden")]] U64 GameRoutine_7c9c50(U64, U64, U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_826e40(U64, U32, U64, U32, U32,
  U32, U32, U32);
[[gnu::visibility("hidden")]] extern U8 GameData_21ed0a8[];
[[gnu::visibility("hidden")]] U64 GameRoutine_827070(U64, U32, U64, U64, U32,
  U32);
[[gnu::visibility("hidden")]] extern U8 GameData_21f61c0[];
[[gnu::visibility("hidden")]] U64 GameRoutine_9b1710(U64, U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_84b0e0(U64, U64, U32, U64);
[[gnu::visibility("hidden")]] extern U8 GameData_21ee318[];
[[gnu::visibility("hidden")]] U64 GameRoutine_1566440(U64, U32);
[[gnu::visibility("hidden")]] U64 GameRoutine_18d4680(U64, U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_87bb70(U64, U64, U32);
[[gnu::visibility("hidden")]] U64 GameRoutine_14acef0(U64, U32);
[[gnu::visibility("hidden")]] U64 GameRoutine_87f520(U64, U8);
[[gnu::visibility("hidden")]] U64 GameRoutine_6d8180(U64, U64, U32);
[[gnu::visibility("hidden")]] U64 GameRoutine_6cc580(U64, U64, U32);
[[gnu::visibility("hidden")]] U64 GameRoutine_6cc9e0(U64, U64, U32);
[[gnu::visibility("hidden")]] U64 GameRoutine_6ca760(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_1382760(U64, U32, U32);
[[gnu::visibility("hidden")]] U64 GameRoutine_1153ca0(U64, U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_8eeec0(U64, U32, U32);
[[gnu::visibility("hidden")]] U64 GameRoutine_828700(U64, U64, U32);
[[gnu::visibility("hidden")]] U64 GameRoutine_6d86a0(U64, U64, U32);
[[gnu::visibility("hidden")]] U64 GameRoutine_1649ba0(U64, U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_8f8560(U64, U64);
[[gnu::visibility("hidden")]] extern U8 GameData_212c6c0[];
[[gnu::visibility("hidden")]] U64 GameRoutine_12ddb80(U64, U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_989cc0(U64, U32);
[[gnu::visibility("hidden")]] U64 GameRoutine_177af50(U64, U64, U8, U32);
[[gnu::visibility("hidden")]] extern U8 GameData_1acadf8[];
[[gnu::visibility("hidden")]] U64 GameRoutine_7a7dc0(U64, U32);
[[gnu::visibility("hidden")]] U64 GameRoutine_651b90(U64, U64, U64, U32);
[[gnu::visibility("hidden")]] U64 GameRoutine_a937c0(U64, U64, U64);
[[gnu::visibility("hidden")]] extern U8 GameData_21a60d8[];
[[gnu::visibility("hidden")]] U64 GameRoutine_6160c0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_bc8700(U64, U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_649d50(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_212d458[];
[[gnu::visibility("hidden")]] U64 GameRoutine_fb7640(U64, U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_cdd140(U64, U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_d45840(U64, U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_d5bf40(U64, U64, U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_d69a40(U64, U64);
[[gnu::visibility("hidden")]] extern U8 GameData_212dbb8[];
[[gnu::visibility("hidden")]] U64 GameRoutine_d55330(U64, U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_ceca80(U64, U32, U32);
[[gnu::visibility("hidden")]] U64 GameRoutine_e337a0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_e339c0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_e40be0(U64, U32);
[[gnu::visibility("hidden")]] U64 GameRoutine_e40f80(U64, U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_e4c790(U64, U64, U32);
[[gnu::visibility("hidden")]] U64 GameRoutine_e4cbb0(U64, U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_e5d040(U64, U64);
[[gnu::visibility("hidden")]] extern U8 GameData_1adb49e[];
[[gnu::visibility("hidden")]] U64 GameRoutine_540(U32, U64, U32);
[[gnu::visibility("hidden")]] extern U8 GameData_1ac7aa3[];
[[gnu::visibility("hidden")]] extern U8 GameData_1a95a21[];
[[gnu::visibility("hidden")]] extern U8 GameData_1af9e68[];
[[gnu::visibility("hidden")]] extern U8 GameData_1af1f51[];
[[gnu::visibility("hidden")]] extern U8 GameData_1ad3755[];
[[gnu::visibility("hidden")]] extern U8 GameData_1a95a27[];
[[gnu::visibility("hidden")]] extern U8 GameData_1aa92f7[];
[[gnu::visibility("hidden")]] extern U8 GameData_1aea4c9[];
[[gnu::visibility("hidden")]] extern U8 GameData_1a99823[];
[[gnu::visibility("hidden")]] extern U8 GameData_1a95a38[];
[[gnu::visibility("hidden")]] extern U8 GameData_1a8e04a[];
[[gnu::visibility("hidden")]] extern U8 GameData_1a91b25[];
[[gnu::visibility("hidden")]] extern U8 GameData_1a8a086[];
[[gnu::visibility("hidden")]] extern U8 GameData_1af1f5e[];
[[gnu::visibility("hidden")]] extern U8 GameData_1ae2c88[];
[[gnu::visibility("hidden")]] extern U8 GameData_1ac0773[];
[[gnu::visibility("hidden")]] extern U8 GameData_1a8636a[];
[[gnu::visibility("hidden")]] extern U8 GameData_1a8a08d[];
[[gnu::visibility("hidden")]] extern U8 GameData_1a9982a[];
[[gnu::visibility("hidden")]] extern U8 GameData_1af9e73[];
[[gnu::visibility("hidden")]] extern U8 GameData_1acbafc[];
[[gnu::visibility("hidden")]] U64 GameRoutine_e5d3b0(U64, U64, U64, U64);
[[gnu::visibility("hidden")]] extern U8 GameData_2203490[];
[[gnu::visibility("hidden")]] U64 GameRoutine_e734e0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_e7a740(U64, U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_155e830(U64, U32);
[[gnu::visibility("hidden")]] extern U8 GameData_1a8e073[];
[[gnu::visibility("hidden")]] U64 GameRoutine_60a020(U64, U64);
[[gnu::visibility("hidden")]] extern U8 GameData_221bea8[];
[[gnu::visibility("hidden")]] U64 GameRoutine_1007580(U64, U64, U32);
[[gnu::visibility("hidden")]] U64 GameRoutine_1433140(U64, U64);
[[gnu::visibility("hidden")]] extern U8 GameData_22054a8[];
[[gnu::visibility("hidden")]] U64 GameRoutine_1196940(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_212dbf0[];
[[gnu::visibility("hidden")]] U64 GameRoutine_efb8b0(U64, U64, U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_f321d0(U64, U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_e738c0(U64, U32);
[[gnu::visibility("hidden")]] U64 GameRoutine_f486e0(U64, U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_caaee0(U64, U32, U32);
[[gnu::visibility("hidden")]] U64 GameRoutine_1380770(U64, U8, U32);
[[gnu::visibility("hidden")]] extern U8 GameData_21f3d10[];
[[gnu::visibility("hidden")]] U64 GameRoutine_f48cc0(U64, U64);
[[gnu::visibility("hidden")]] extern U8 GameData_21c96f8[];
[[gnu::visibility("hidden")]] U64 GameRoutine_13602c0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_10420c0(U64, U64, U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_177ba70(U64, U64, U32);
[[gnu::visibility("hidden")]] U64 GameRoutine_10dea20(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_108c3c0(U32);
[[gnu::visibility("hidden")]] U64 GameRoutine_10b2650(U64, U32);
[[gnu::visibility("hidden")]] U64 GameRoutine_1159cf0(U64, U64, U64);
[[gnu::visibility("hidden")]] extern U8 GameData_21d9188[];
[[gnu::visibility("hidden")]] U64 GameRoutine_1286f60(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_121b950(U64, U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_1260fa0(U64, U64, U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_11fd9e0(U64, U64);
[[gnu::visibility("hidden")]] extern U8 GameData_21f1780[];
[[gnu::visibility("hidden")]] U64 GameRoutine_89aac0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_1383a10(U64, U32);
[[gnu::visibility("hidden")]] U64 GameRoutine_132b100(U64, U8);
[[gnu::visibility("hidden")]] U64 GameRoutine_132b100(U64, U32);
[[gnu::visibility("hidden")]] extern U8 GameData_21c96e8[];
[[gnu::visibility("hidden")]] U64 GameRoutine_134d2e0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_1341d60(U64, U32);
[[gnu::visibility("hidden")]] extern U8 GameData_a470e0[];
[[gnu::visibility("hidden")]] extern U8 GameData_22416e0[];
[[gnu::visibility("hidden")]] extern U8 GameData_1f50948[];
[[gnu::visibility("hidden")]] U64 GameRoutine_2b0(U64, U64, U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_1400b90(U64, U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_947f80(U32);
[[gnu::visibility("hidden")]] U64 GameRoutine_1430380(U64, U32);
[[gnu::visibility("hidden")]] U64 GameRoutine_fa6560(U64, U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_146ea70(U64, U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_177c100(U64, U64, U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_14a7aa0(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_21f1620[];
[[gnu::visibility("hidden")]] U64 GameRoutine_14b7e60(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_14cbc80(U64, U64);
[[gnu::visibility("hidden")]] extern U8 GameData_212d728[];
[[gnu::visibility("hidden")]] U64 GameRoutine_17bd3e0(U64, U32);
[[gnu::visibility("hidden")]] U64 GameRoutine_1537c80(U64, U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_1778700(U64, U64);
[[gnu::visibility("hidden")]] extern U8 GameData_212d700[];
[[gnu::visibility("hidden")]] U64 GameRoutine_153a3d0(U64, U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_1559e20(U64, U32, U32, U32);
[[gnu::visibility("hidden")]] extern U8 GameData_1abb7f8[];
[[gnu::visibility("hidden")]] U64 GameRoutine_1563280(U64, U64, U32);
[[gnu::visibility("hidden")]] U64 GameRoutine_e6cfa0(U32, U32);
[[gnu::visibility("hidden")]] U64 GameRoutine_96bae0(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_1a8f256[];
[[gnu::visibility("hidden")]] U64 GameRoutine_1560ec0(U64, U64, U32);
[[gnu::visibility("hidden")]] U64 GameRoutine_80cec0(U8);
[[gnu::visibility("hidden")]] U64 GameRoutine_16ac260(U64, U32, U32);
[[gnu::visibility("hidden")]] U64 GameRoutine_1843470(U64, U32);
[[gnu::visibility("hidden")]] extern U8 GameData_67e7e0[];
[[gnu::visibility("hidden")]] extern U8 GameData_22628f8[];
[[gnu::visibility("hidden")]] U64 GameRoutine_16f0fe0(U64, U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_1841930(U64, U64, U32);
[[gnu::visibility("hidden")]] extern U8 GameData_2175540[];
[[gnu::visibility("hidden")]] U64 GameRoutine_1713a00(U64, U32);
[[gnu::visibility("hidden")]] extern U8 GameData_1a949a5[];
[[gnu::visibility("hidden")]] U64 GameRoutine_1563380(U64, U64, U32);
[[gnu::visibility("hidden")]] extern U8 GameData_212d870[];
[[gnu::visibility("hidden")]] U64 GameRoutine_1762ce0(U64, U64, U32, U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_17871c0(U64, U32, U32);
[[gnu::visibility("hidden")]] extern U8 GameData_2272140[];
[[gnu::visibility("hidden")]] U64 GameRoutine_19987a0(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_2265ee0[];
[[gnu::visibility("hidden")]] U64 GameRoutine_184a010(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_8c7910(U64, U64);
[[gnu::visibility("hidden")]] extern U8 GameData_1af6b2f[];
[[gnu::visibility("hidden")]] U64 GameRoutine_9db9e0(U32, U32);
[[gnu::visibility("hidden")]] U64 GameRoutine_187d290(U64, U64, U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_18bf640(U64, U32, U32);
[[gnu::visibility("hidden")]] U64 GameRoutine_18bfe00(U64, U32);
[[gnu::visibility("hidden")]] U64 GameRoutine_18bfa40(U64, U32);
[[gnu::visibility("hidden")]] U64 GameRoutine_18bfc30(U64, U32);
[[gnu::visibility("hidden")]] U64 GameRoutine_1a0b310(U64, U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_1a0b310(U64, U32);
[[gnu::visibility("hidden")]] U64 GameRoutine_1903880(U64, U32);
[[gnu::visibility("hidden")]] U64 GameRoutine_19094a0(U64, U64, U32, U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_16bede0(U64, U64, U64);
[[gnu::visibility("hidden")]] extern U8 GameData_1aefb5f[];
[[gnu::visibility("hidden")]] U64 GameRoutine_1980330(U64, U64, U32);
[[gnu::visibility("hidden")]] extern U8 GameData_1a97410[];
[[gnu::visibility("hidden")]] U64 GameRoutine_196a790(U64, U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_94bc80(U32);
[[gnu::visibility("hidden")]] extern U8 GameData_212dcd0[];
[[gnu::visibility("hidden")]] U64 GameRoutine_948620(U64, U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_19bf2f0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_1a084d0(U64, U64);

[[gnu::visibility("hidden")]] U64 GameStub_e7670(U64 object) {
  return GameRoutine_e6f20(At<U64>(reinterpret_cast<U64>(GameData_2178cb0),
    0x0), object);
}

[[gnu::visibility("hidden")]] U64 GameStub_ecb50(U64 object, U64 a1) {
  return GameRoutine_ec280(At<U64>(reinterpret_cast<U64>(GameData_2178d00),
    0x0), object, a1);
}

[[gnu::visibility("hidden")]] U64 GameStub_ecb70(U64 object) {
  return GameRoutine_ec560(At<U64>(reinterpret_cast<U64>(GameData_2178d00),
    0x0), object);
}

[[gnu::visibility("hidden")]] U64 GameStub_101c20(U64 object) {
  return GameRoutine_118980(At<U64>(object, 0x20), object);
}

[[gnu::visibility("hidden")]] U64 GameStub_112870(U64 object) {
  return GameRoutine_118b20(At<U64>(object, 0x20), object);
}

[[gnu::visibility("hidden")]] U64 GameStub_118f00(U64 object, U64 a1, U64 a2) {
  return GameRoutine_105350(At<U64>(object, 0x860), a2, a1);
}

[[gnu::visibility("hidden")]] U64 GameStub_118f20(U64 object, U64 a1, U64 a2,
  U64 a3) {
  return GameRoutine_105c80(At<U64>(object, 0x860), a1, a3, a2);
}

[[gnu::visibility("hidden")]] U64 GameStub_118f40(U64 object, U64 a1, U64 a2) {
  return GameRoutine_105780(At<U64>(object, 0x860), a1, a2, 0x0u);
}

[[gnu::visibility("hidden")]] U64 GameStub_124eb0(U64 object, U64 a1) {
  return GameRoutine_135980(At<U64>(a1, 0x0), At<U64>(object, 0x8));
}

[[gnu::visibility("hidden")]] U64 GameStub_125050(U64 object, U64 a1) {
  return GameRoutine_135d20(At<U64>(a1, 0x0), At<U64>(object, 0x8));
}

[[gnu::visibility("hidden")]] U64 GameStub_132800(U64 object) {
  return GameRoutine_118c10(At<U64>(object, 0x20), object);
}

[[gnu::visibility("hidden")]] U64 GameStub_189b70(U64 object, U32 a1, U32 a2,
  U32 a3, U32 a4) {
  return GameRoutine_1a0c010(a1, a2, a3, a4);
}

[[gnu::visibility("hidden")]] U64 GameStub_189c30(U64 object, U32 a1, U32 a2) {
  return GameRoutine_1a0c0a0(a1, a2);
}

[[gnu::visibility("hidden")]] U64 GameStub_189cd0(U64 object, U32 a1, U32 a2,
  U32 a3, U32 a4) {
  return GameRoutine_1a0c110(a1, a2, a3, a4, At<U32>(object, 0x40));
}

[[gnu::visibility("hidden")]] U64 GameStub_189dc0(U64 object, U32 a1, U32 a2) {
  return GameRoutine_1a0c1a0(a1, a2, At<U32>(object, 0x38));
}

[[gnu::visibility("hidden")]] U64 GameStub_189df0(U64 object, U64 a1, U64 a2,
  U64 a3, U64 a4) {
  return GameRoutine_1a0c1b0(object + 0x8, a1, a2, a3, a4, At<U32>(object,
    0x38));
}

[[gnu::visibility("hidden")]] U64 GameStub_27a3e0(U64 object, U64 a1, U64 a2,
  U32 a3, U64 a4, U64 a5) {
  return GameRoutine_27a400(object, a1, a2, 0x0ul, 0x0ul, a3, a4, a5);
}

[[gnu::visibility("hidden")]] U64 GameStub_283c70(U64 object, U64 a1) {
  return GameRoutine_1a0b950(At<U64>(object, 0x20), a1, 0xc0u);
}

[[gnu::visibility("hidden")]] U64 GameStub_289830(U64 object, U32 a1, U32 a2) {
  return GameRoutine_2ab7c0(a1, a2);
}

[[gnu::visibility("hidden")]] U64 GameStub_28d3e0(U64 object, U64 a1, U32 a2,
  U32 a3, U32 a4, U32 a5) {
  return GameRoutine_294f60(a1, a2, a3, a4, a5);
}

[[gnu::visibility("hidden")]] U64 GameStub_293b70(U64 object, U32 a1) {
  return GameRoutine_28c2e0(At<U64>(object, 0x268), object, a1);
}

[[gnu::visibility("hidden")]] U64 GameStub_55b990(U64 object) {
  return GameRoutine_1a09b80(At<U64>(At<U64>(object, 0x0), 0x0));
}

[[gnu::visibility("hidden")]] U64 GameStub_560f20(U64 object, U64 a1) {
  return GameRoutine_5645a0(At<U64>(object, 0x10), a1, At<U16>(object, 0x32));
}

[[gnu::visibility("hidden")]] U64 GameStub_573810(U64 object, U64 a1, U64 a2,
  U64 a3) {
  return GameRoutine_572470(object + 0x8, object + 0x128, a2, a3, a1);
}

[[gnu::visibility("hidden")]] U64 GameStub_5764b0(U64 object, U64 a1) {
  return GameRoutine_5fcd30(object, 0x3u, 0x1u, At<U64>(a1, 0xb8) + 0x248,
    0x6u, 0x0u);
}

[[gnu::visibility("hidden")]] U64 GameStub_576a70(U64 object, U64 a1) {
  return GameRoutine_5fd480(a1, 0x1u, object + 0xf8, At<U64>(object, 0x150));
}

[[gnu::visibility("hidden")]] U64 GameStub_58c810(U64 object, U64 a1) {
  return GameRoutine_598720(At<U64>(object, 0x20), a1, At<U16>(object, 0x4a));
}

[[gnu::visibility("hidden")]] U64 GameStub_5b3d60(U64 object, U32 a1, U64 a2) {
  return GameRoutine_5def60(object + 0x7a8, At<U64>(object, 0x700), a1, a2);
}

[[gnu::visibility("hidden")]] U64 GameStub_5b6af0(U64 object, U64 a1) {
  return GameRoutine_5c5620(object + 0x118, a1, At<U64>(object, 0x10) + 0x898);
}

[[gnu::visibility("hidden")]] U64 GameStub_5d27a0(U64 object, U64 a1, U64 a2,
  U64 a3, U64 a4, U64 a5, U32 a6) {
  return GameRoutine_5d2580(object, a1, a2, a3, a4, 0x0u, a5, a6);
}

[[gnu::visibility("hidden")]] U64 GameStub_5e9b20(U64 object) {
  return GameRoutine_5e7f80(At<U64>(object, 0x60), At<U64>(object, 0x48));
}

[[gnu::visibility("hidden")]] U64 GameStub_5e9d80(U64 object) {
  return GameRoutine_5e80f0(At<U64>(object, 0x60), At<U64>(object, 0x48));
}

[[gnu::visibility("hidden")]] U64 GameStub_5e9fe0(U64 object) {
  return GameRoutine_5e8370(At<U64>(object, 0x60), At<U64>(object, 0x48));
}

[[gnu::visibility("hidden")]] U64 GameStub_606c00(U64 object) {
  return GameRoutine_1a09bd0(At<U32>(object, 0x10));
}

[[gnu::visibility("hidden")]] U64 GameStub_631920(U64 object) {
  return GameRoutine_636e40(At<U64>(object, 0x8), object + 0x10);
}

[[gnu::visibility("hidden")]] U64 GameStub_6565d0(U64 object) {
  return
    GameRoutine_651b90(At<U64>(At<U64>(reinterpret_cast<U64>(GameData_212bf68), 0x0), 0x0), object, 0x10u, 0x0u);
}

[[gnu::visibility("hidden")]] U64 GameStub_71d9c0(U64 object) {
  return GameRoutine_8eb020(At<U64>(At<U64>(object, 0x8), 0xb0));
}

[[gnu::visibility("hidden")]] U64 GameStub_71ecf0(U64 object) {
  return GameRoutine_8eb7a0(At<U64>(At<U64>(object, 0x8), 0xb0));
}

[[gnu::visibility("hidden")]] U64 GameStub_738060(U64 object) {
  return
    GameRoutine_731180(At<U64>(At<U64>(reinterpret_cast<U64>(GameData_21cd130), 0x0), 0x30));
}

[[gnu::visibility("hidden")]] U64 GameStub_738180(U64 object) {
  return
    GameRoutine_7317c0(At<U64>(At<U64>(reinterpret_cast<U64>(GameData_21cd130), 0x0), 0x30));
}

[[gnu::visibility("hidden")]] U64 GameStub_73a300(U64 object) {
  return
    GameRoutine_182ae70(At<U64>(At<U64>(reinterpret_cast<U64>(GameData_212d0d0), 0x0), 0x0), 0x0u);
}

[[gnu::visibility("hidden")]] U64 GameStub_7686c0(U64 object) {
  return GameRoutine_772ce0(object, At<U64>(object, 0x8));
}

[[gnu::visibility("hidden")]] U64 GameStub_76e390(U64 object) {
  return
    GameRoutine_730e40(At<U64>(At<U64>(reinterpret_cast<U64>(GameData_21cd130), 0x0), 0x30), At<U64>(object, 0x98));
}

[[gnu::visibility("hidden")]] U64 GameStub_7710b0(U64 object) {
  return
    GameRoutine_730e40(At<U64>(At<U64>(reinterpret_cast<U64>(GameData_21cd130), 0x0), 0x30), At<U64>(object, 0x98));
}

[[gnu::visibility("hidden")]] U64 GameStub_7b7440(U64 object, U64 a1) {
  return
    GameRoutine_7c9c50(At<U64>(At<U64>(At<U64>(reinterpret_cast<U64>(GameData_212cfb8), 0x0), 0x0), 0x10), At<U64>(object, 0x8), At<U64>(a1, 0x0));
}

[[gnu::visibility("hidden")]] U64 GameStub_830fe0(U64 object, U64 a1) {
  return GameRoutine_826e40(At<U64>(object, 0x8), 0x4u, a1, 0x0u, 0x0u, 0x0u,
    0xffffffffu, 0x2u);
}

[[gnu::visibility("hidden")]] U64 GameStub_831220(U64 object, U64 a1) {
  return GameRoutine_827070(At<U64>(object, 0x8), 0x4u, a1,
    reinterpret_cast<U64>(GameData_21ed0a8), 0x0u, 0x1u);
}

[[gnu::visibility("hidden")]] U64 GameStub_831340(U64 object, U64 a1, U64 a2) {
  return GameRoutine_826e40(At<U64>(object, 0x8), 0x4u, a1, 0x0u, 0x0u, 0x0u,
    At<U32>(a2, 0x0), 0x0u);
}

[[gnu::visibility("hidden")]] U64 GameStub_833df0(U64 object, U64 a1) {
  return GameRoutine_827070(At<U64>(object, 0x8), 0xbu, a1,
    reinterpret_cast<U64>(GameData_21ed0a8), 0x0u, 0x1u);
}

[[gnu::visibility("hidden")]] U64 GameStub_833f00(U64 object) {
  return GameRoutine_9b1710(reinterpret_cast<U64>(GameData_21f61c0),
    At<U64>(object, 0x8));
}

[[gnu::visibility("hidden")]] U64 GameStub_8341d0(U64 object, U64 a1) {
  return GameRoutine_826e40(At<U64>(object, 0x8), 0xdu, a1, 0x0u, 0x0u, 0x0u,
    0xffffffffu, 0x2u);
}

[[gnu::visibility("hidden")]] U64 GameStub_84b410(U64 object, U64 a1) {
  return GameRoutine_84b0e0(At<U64>(object, 0x8), At<U64>(a1, 0x0),
    At<U32>(object, 0x10), object + 0x18);
}

[[gnu::visibility("hidden")]] U64 GameStub_86f310(U64 object) {
  return GameRoutine_1566440(reinterpret_cast<U64>(GameData_21ee318), 0x0u);
}

[[gnu::visibility("hidden")]] U64 GameStub_870570(U64 object) {
  return GameRoutine_1566440(reinterpret_cast<U64>(GameData_21ee318), 0x0u);
}

[[gnu::visibility("hidden")]] U64 GameStub_870920(U64 object) {
  return
    GameRoutine_182ae70(At<U64>(At<U64>(reinterpret_cast<U64>(GameData_212d0d0), 0x0), 0x0), 0x0u);
}

[[gnu::visibility("hidden")]] U64 GameStub_87ba30(U64 object, U64 a1) {
  return GameRoutine_18d4680(At<U64>(At<U64>(object, 0x8), 0x130), a1 + 0x8);
}

[[gnu::visibility("hidden")]] U64 GameStub_87bb30(U64 object, U64 a1) {
  return GameRoutine_87bb70(At<U64>(object, 0x8), a1, 0x40000000u);
}

[[gnu::visibility("hidden")]] U64 GameStub_87c3c0(U64 object, U64 a1) {
  return GameRoutine_87bb70(At<U64>(object, 0x8), a1, 0x20000000u);
}

[[gnu::visibility("hidden")]] U64 GameStub_885120(U64 object) {
  return GameRoutine_14acef0(object, At<U32>(object, 0x114));
}

[[gnu::visibility("hidden")]] U64 GameStub_887270(U64 object, U64 a1) {
  return GameRoutine_87f520(At<U64>(object, 0x8), At<U8>(a1, 0x0));
}

[[gnu::visibility("hidden")]] U64 GameStub_894840(U64 object, U64 a1, U64 a2) {
  return GameRoutine_6d8180(At<U64>(a1, 0x0), At<U64>(a2, 0x0), 0x0u);
}

[[gnu::visibility("hidden")]] U64 GameStub_8adf50(U64 object, U64 a1, U64 a2) {
  return GameRoutine_6cc580(At<U64>(a1, 0x0), a2, 0x0u);
}

[[gnu::visibility("hidden")]] U64 GameStub_8ae030(U64 object, U64 a1, U64 a2) {
  return GameRoutine_6cc9e0(At<U64>(a1, 0x0), a2, 0x0u);
}

[[gnu::visibility("hidden")]] U64 GameStub_8b26c0(U64 object) {
  return GameRoutine_6ca760(At<U64>(At<U64>(object, 0x8), 0x108));
}

[[gnu::visibility("hidden")]] U64 GameStub_8b2e90(U64 object, U64 a1) {
  return GameRoutine_1382760(At<U64>(a1, 0x0), At<U32>(At<U64>(object, 0x8),
    0x98), At<U32>(object, 0x10));
}

[[gnu::visibility("hidden")]] U64 GameStub_8cf640(U64 object) {
  return GameRoutine_1153ca0(object, At<U64>(At<U64>(At<U64>(object, 0x98),
    0x18), 0x8));
}

[[gnu::visibility("hidden")]] U64 GameStub_8eee60(U64 object, U64 a1) {
  return GameRoutine_8eeec0(At<U64>(object, 0x8), At<U32>(At<U64>(a1, 0x0),
    0x0), At<U32>(At<U64>(a1, 0x0), 0x20));
}

[[gnu::visibility("hidden")]] U64 GameStub_8f0b10(U64 object, U64 a1, U64 a2) {
  return GameRoutine_828700(At<U64>(object, 0x8), a1, At<U32>(a2, 0x0));
}

[[gnu::visibility("hidden")]] U64 GameStub_8f0c10(U64 object, U64 a1) {
  return GameRoutine_8eeec0(At<U64>(object, 0x8), At<U32>(At<U64>(a1, 0x0),
    0x0), At<U32>(At<U64>(a1, 0x0), 0x20));
}

[[gnu::visibility("hidden")]] U64 GameStub_8f1ab0(U64 object, U64 a1) {
  return GameRoutine_6d86a0(At<U64>(a1, 0x0), At<U64>(object, 0x8), 0x0u);
}

[[gnu::visibility("hidden")]] U64 GameStub_8f2920(U64 object, U64 a1) {
  return GameRoutine_1649ba0(At<U64>(a1, 0x0), object + 0x8);
}

[[gnu::visibility("hidden")]] U64 GameStub_8f83e0(U64 object, U64 a1) {
  return GameRoutine_8f8560(a1, object + 0x8);
}

[[gnu::visibility("hidden")]] U64 GameStub_9174c0(U64 object) {
  return
    GameRoutine_12ddb80(At<U64>(At<U64>(reinterpret_cast<U64>(GameData_212c6c0), 0x0), 0x0), object);
}

[[gnu::visibility("hidden")]] U64 GameStub_969370(U64 object, U64 a1) {
  return GameRoutine_989cc0(At<U64>(a1, 0x0), 0x1u);
}

[[gnu::visibility("hidden")]] U64 GameStub_9d64e0(U64 object, U64 a1) {
  return GameRoutine_177af50(At<U64>(a1, 0x0), At<U64>(object, 0x8),
    At<U8>(object, 0x18), At<U32>(object, 0x1c));
}

[[gnu::visibility("hidden")]] U64 GameStub_a0a580(U64 object) {
  return GameRoutine_7a7dc0(reinterpret_cast<U64>(GameData_1acadf8),
    At<U32>(object, 0x28));
}

[[gnu::visibility("hidden")]] U64 GameStub_a0b1f0(U64 object) {
  return GameRoutine_7a7dc0(reinterpret_cast<U64>(GameData_1acadf8),
    At<U32>(object, 0x28));
}

[[gnu::visibility("hidden")]] U64 GameStub_a49810(U64 object, U64 a1) {
  return
    GameRoutine_651b90(At<U64>(At<U64>(reinterpret_cast<U64>(GameData_212bf68), 0x0), 0x0), object, a1, 0x0u);
}

[[gnu::visibility("hidden")]] U64 GameStub_a52760(U64 object) {
  return
    GameRoutine_651b90(At<U64>(At<U64>(reinterpret_cast<U64>(GameData_212bf68), 0x0), 0x0), object, 0x10u, 0x0u);
}

[[gnu::visibility("hidden")]] U64 GameStub_ad4350(U64 object, U64 a1) {
  return GameRoutine_a937c0(At<U64>(At<U64>(object, 0x8), 0x8),
    At<U64>(object, 0x8) + 0x88, At<U64>(a1, 0x0));
}

[[gnu::visibility("hidden")]] U64 GameStub_bc3d50(U64 object) {
  return
    GameRoutine_6160c0(At<U64>(At<U64>(reinterpret_cast<U64>(GameData_21a60d8), 0x0), 0x228));
}

[[gnu::visibility("hidden")]] U64 GameStub_bc7f70(U64 object, U64 a1, U64 a2) {
  return
    GameRoutine_651b90(At<U64>(At<U64>(reinterpret_cast<U64>(GameData_212bf68), 0x0), 0x0), a1, a2, 0x5u);
}

[[gnu::visibility("hidden")]] U64 GameStub_bc8eb0(U64 object) {
  return GameRoutine_bc8700(object + 0x18, At<U64>(object, 0x20));
}

[[gnu::visibility("hidden")]] U64 GameStub_c5dc60(U64 object) {
  return GameRoutine_649d50(At<U64>(At<U64>(object, 0x8), 0x0));
}

[[gnu::visibility("hidden")]] U64 GameStub_c8b2d0(U64 object, U64 a1) {
  return
    GameRoutine_651b90(At<U64>(At<U64>(reinterpret_cast<U64>(GameData_212bf68), 0x0), 0x0), object, a1, 0x6u);
}

[[gnu::visibility("hidden")]] U64 GameStub_cb5d30(U64 object) {
  return
    GameRoutine_fb7640(At<U64>(At<U64>(At<U64>(reinterpret_cast<U64>(GameData_212d458), 0x0), 0x0), 0x68), At<U64>(object, 0x8));
}

[[gnu::visibility("hidden")]] U64 GameStub_cdcf10(U64 object, U64 a1) {
  return GameRoutine_cdd140(a1, object + 0x8);
}

[[gnu::visibility("hidden")]] U64 GameStub_d46b40(U64 object, U64 a1) {
  return GameRoutine_d45840(At<U64>(object, 0x8), At<U64>(a1, 0x0));
}

[[gnu::visibility("hidden")]] U64 GameStub_d46c40(U64 object) {
  return GameRoutine_d45840(At<U64>(object, 0x8), 0x0ul);
}

[[gnu::visibility("hidden")]] U64 GameStub_d5c060(U64 object, U64 a1) {
  return GameRoutine_d5bf40(At<U64>(object, 0x0), a1, a1);
}

[[gnu::visibility("hidden")]] U64 GameStub_d69810(U64 object, U64 a1) {
  return GameRoutine_d69a40(a1, object + 0x8);
}

[[gnu::visibility("hidden")]] U64 GameStub_d88570(U64 object) {
  return
    GameRoutine_d55330(At<U64>(At<U64>(reinterpret_cast<U64>(GameData_212dbb8), 0x0), 0x0), object);
}

[[gnu::visibility("hidden")]] U64 GameStub_d8b700(U64 object) {
  return
    GameRoutine_d55330(At<U64>(At<U64>(reinterpret_cast<U64>(GameData_212dbb8), 0x0), 0x0), object);
}

[[gnu::visibility("hidden")]] U64 GameStub_e17ba0(U64 object) {
  return GameRoutine_ceca80(At<U64>(At<U64>(At<U64>(object, 0x8), 0x8), 0x18),
    0x80u, 0x1u);
}

[[gnu::visibility("hidden")]] U64 GameStub_e35600(U64 object) {
  return GameRoutine_e337a0(At<U64>(At<U64>(object, 0x8), 0xd8));
}

[[gnu::visibility("hidden")]] U64 GameStub_e35700(U64 object) {
  return GameRoutine_e339c0(At<U64>(At<U64>(object, 0x8), 0xd8));
}

[[gnu::visibility("hidden")]] U64 GameStub_e35a80(U64 object) {
  return GameRoutine_e40be0(At<U64>(At<U64>(object, 0x28), 0x68), 0x0u);
}

[[gnu::visibility("hidden")]] U64 GameStub_e36800(U64 object) {
  return GameRoutine_e40f80(At<U64>(At<U64>(object, 0x28), 0x68),
    object + 0x34);
}

[[gnu::visibility("hidden")]] U64 GameStub_e4ea50(U64 object, U64 a1) {
  return GameRoutine_e4c790(At<U64>(object, 0x8), At<U64>(a1, 0x0), 0x0u);
}

[[gnu::visibility("hidden")]] U64 GameStub_e4fa60(U64 object, U64 a1) {
  return GameRoutine_e4c790(At<U64>(object, 0x8), At<U64>(a1, 0x0), 0x1u);
}

[[gnu::visibility("hidden")]] U64 GameStub_e51f90(U64 object) {
  return GameRoutine_e4cbb0(At<U64>(object, 0x30), object + 0x38);
}

[[gnu::visibility("hidden")]] U64 GameStub_e526c0(U64 object) {
  return GameRoutine_e5d040(At<U64>(At<U64>(object, 0x30), 0x70),
    object + 0x38);
}

[[gnu::visibility("hidden")]] U64 GameStub_e528a0(U64 object) {
  return GameRoutine_540(0x0u, reinterpret_cast<U64>(GameData_1adb49e), 0x7u);
}

[[gnu::visibility("hidden")]] U64 GameStub_e52a70(U64 object) {
  return GameRoutine_540(0x0u, reinterpret_cast<U64>(GameData_1ac7aa3), 0xdu);
}

[[gnu::visibility("hidden")]] U64 GameStub_e52b50(U64 object) {
  return GameRoutine_540(0x0u, reinterpret_cast<U64>(GameData_1a95a21), 0x5u);
}

[[gnu::visibility("hidden")]] U64 GameStub_e52c40(U64 object) {
  return GameRoutine_540(0x0u, reinterpret_cast<U64>(GameData_1af9e68), 0xau);
}

[[gnu::visibility("hidden")]] U64 GameStub_e52e30(U64 object) {
  return GameRoutine_540(0x0u, reinterpret_cast<U64>(GameData_1af1f51), 0xcu);
}

[[gnu::visibility("hidden")]] U64 GameStub_e53020(U64 object) {
  return GameRoutine_540(0x0u, reinterpret_cast<U64>(GameData_1ad3755), 0xbu);
}

[[gnu::visibility("hidden")]] U64 GameStub_e53110(U64 object) {
  return GameRoutine_540(0x0u, reinterpret_cast<U64>(GameData_1a95a27), 0x10u);
}

[[gnu::visibility("hidden")]] U64 GameStub_e532e0(U64 object) {
  return GameRoutine_540(0x0u, reinterpret_cast<U64>(GameData_1aa92f7), 0xbu);
}

[[gnu::visibility("hidden")]] U64 GameStub_e534b0(U64 object) {
  return GameRoutine_540(0x0u, reinterpret_cast<U64>(GameData_1aea4c9), 0xcu);
}

[[gnu::visibility("hidden")]] U64 GameStub_e536e0(U64 object) {
  return GameRoutine_540(0x0u, reinterpret_cast<U64>(GameData_1a99823), 0x6u);
}

[[gnu::visibility("hidden")]] U64 GameStub_e538d0(U64 object) {
  return GameRoutine_540(0x0u, reinterpret_cast<U64>(GameData_1a95a38), 0x9u);
}

[[gnu::visibility("hidden")]] U64 GameStub_e539c0(U64 object) {
  return GameRoutine_540(0x0u, reinterpret_cast<U64>(GameData_1a8e04a), 0xbu);
}

[[gnu::visibility("hidden")]] U64 GameStub_e53bf0(U64 object) {
  return GameRoutine_540(0x0u, reinterpret_cast<U64>(GameData_1a91b25), 0x6u);
}

[[gnu::visibility("hidden")]] U64 GameStub_e53e20(U64 object) {
  return GameRoutine_540(0x0u, reinterpret_cast<U64>(GameData_1a8a086), 0x6u);
}

[[gnu::visibility("hidden")]] U64 GameStub_e54010(U64 object) {
  return GameRoutine_540(0x0u, reinterpret_cast<U64>(GameData_1af1f5e), 0xeu);
}

[[gnu::visibility("hidden")]] U64 GameStub_e54100(U64 object) {
  return GameRoutine_540(0x0u, reinterpret_cast<U64>(GameData_1ae2c88), 0xfu);
}

[[gnu::visibility("hidden")]] U64 GameStub_e541f0(U64 object) {
  return GameRoutine_540(0x0u, reinterpret_cast<U64>(GameData_1ac0773), 0xeu);
}

[[gnu::visibility("hidden")]] U64 GameStub_e542e0(U64 object) {
  return GameRoutine_540(0x0u, reinterpret_cast<U64>(GameData_1a8636a), 0x10u);
}

[[gnu::visibility("hidden")]] U64 GameStub_e54530(U64 object) {
  return GameRoutine_540(0x0u, reinterpret_cast<U64>(GameData_1a8a08d), 0xcu);
}

[[gnu::visibility("hidden")]] U64 GameStub_e54780(U64 object) {
  return GameRoutine_540(0x0u, reinterpret_cast<U64>(GameData_1a9982a), 0xfu);
}

[[gnu::visibility("hidden")]] U64 GameStub_e54970(U64 object) {
  return GameRoutine_540(0x0u, reinterpret_cast<U64>(GameData_1af9e73), 0x8u);
}

[[gnu::visibility("hidden")]] U64 GameStub_e54aa0(U64 object) {
  return GameRoutine_540(0x0u, reinterpret_cast<U64>(GameData_1acbafc), 0x4u);
}

[[gnu::visibility("hidden")]] U64 GameStub_e56650(U64 object, U64 a1) {
  return GameRoutine_e5d3b0(At<U64>(At<U64>(At<U64>(object, 0x8), 0x30),
    0x70), At<U64>(a1, 0x0), At<U64>(object, 0x8) + 0x38, At<U64>(object,
    0x8) + 0x50);
}

[[gnu::visibility("hidden")]] U64 GameStub_e65db0(U64 object) {
  return GameRoutine_e734e0(At<U64>(reinterpret_cast<U64>(GameData_2203490),
    0x0) + 0x2a0);
}

[[gnu::visibility("hidden")]] U64 GameStub_e7e9d0(U64 object, U64 a1) {
  return GameRoutine_e7a740(At<U64>(object, 0x8), At<U64>(a1, 0x0));
}

[[gnu::visibility("hidden")]] U64 GameStub_e7ead0(U64 object, U64 a1) {
  return GameRoutine_e7a740(At<U64>(object, 0x8), At<U64>(a1, 0x0));
}

[[gnu::visibility("hidden")]] U64 GameStub_e96250(U64 object) {
  return GameRoutine_155e830(At<U64>(At<U64>(object, 0x528), 0x8) + 0x350,
    0x1u);
}

[[gnu::visibility("hidden")]] U64 GameStub_e97550(U64 object, U64 a1) {
  return GameRoutine_60a020(a1 + 0x8, reinterpret_cast<U64>(GameData_1a8e073));
}

[[gnu::visibility("hidden")]] U64 GameStub_e991d0(U64 object) {
  return GameRoutine_1007580(object,
    At<U64>(At<U64>(reinterpret_cast<U64>(GameData_221bea8), 0x0), 0xd0), 0x0u);
}

[[gnu::visibility("hidden")]] U64 GameStub_e991f0(U64 object) {
  return GameRoutine_1433140(object,
    At<U64>(At<U64>(reinterpret_cast<U64>(GameData_221bea8), 0x0), 0xd0));
}

[[gnu::visibility("hidden")]] U64 GameStub_eabba0(U64 object) {
  return GameRoutine_1196940(At<U64>(reinterpret_cast<U64>(GameData_22054a8),
    0x0) + 0x28);
}

[[gnu::visibility("hidden")]] U64 GameStub_efd430(U64 object) {
  return
    GameRoutine_efb8b0(At<U64>(At<U64>(reinterpret_cast<U64>(GameData_212dbf0), 0x0), 0x0), object, object + 0x98);
}

[[gnu::visibility("hidden")]] U64 GameStub_f34570(U64 object, U64 a1) {
  return GameRoutine_f321d0(At<U64>(a1, 0x0), At<U64>(At<U64>(object, 0x8),
    0x10));
}

[[gnu::visibility("hidden")]] U64 GameStub_f347b0(U64 object, U64 a1) {
  return GameRoutine_f321d0(At<U64>(a1, 0x0), At<U64>(At<U64>(object, 0x8),
    0x10));
}

[[gnu::visibility("hidden")]] U64 GameStub_f37cd0(U64 object) {
  return GameRoutine_e738c0(At<U64>(reinterpret_cast<U64>(GameData_2203490),
    0x0) + 0x320, At<U32>(At<U64>(reinterpret_cast<U64>(GameData_2203490),
    0x0), 0x328));
}

[[gnu::visibility("hidden")]] U64 GameStub_f497f0(U64 object) {
  return GameRoutine_f486e0(At<U64>(object, 0x98), object + 0xa0);
}

[[gnu::visibility("hidden")]] U64 GameStub_f6aaa0(U64 object) {
  return GameRoutine_caaee0(At<U64>(object, 0xa8), 0x3u, 0x0u);
}

[[gnu::visibility("hidden")]] U64 GameStub_fba500(U64 object, U64 a1) {
  return GameRoutine_1380770(At<U64>(a1, 0x0), At<U8>(object, 0x8),
    At<U32>(object, 0xc));
}

[[gnu::visibility("hidden")]] U64 GameStub_fc44c0(U64 object) {
  return GameRoutine_f48cc0(object,
    At<U64>(At<U64>(reinterpret_cast<U64>(GameData_21f3d10), 0x0), 0xd8));
}

[[gnu::visibility("hidden")]] U64 GameStub_10297a0(U64 object) {
  return
    GameRoutine_13602c0(At<U64>(At<U64>(reinterpret_cast<U64>(GameData_21c96f8), 0x0), 0x10));
}

[[gnu::visibility("hidden")]] U64 GameStub_1042070(U64 object, U64 a1) {
  return GameRoutine_10420c0(At<U64>(a1, 0x0), At<U64>(object, 0x8),
    object + 0x10);
}

[[gnu::visibility("hidden")]] U64 GameStub_1051060(U64 object, U64 a1) {
  return GameRoutine_177ba70(At<U64>(a1, 0x0), At<U64>(object, 0x10), 0x1u);
}

[[gnu::visibility("hidden")]] U64 GameStub_1052a80(U64 object, U64 a1) {
  return GameRoutine_1649ba0(At<U64>(a1, 0x0), object + 0x18);
}

[[gnu::visibility("hidden")]] U64 GameStub_10630c0(U64 object) {
  return GameRoutine_10dea20(At<U64>(At<U64>(object, 0x8), 0x18) + 0x48);
}

[[gnu::visibility("hidden")]] U64 GameStub_108eb50(U64 object) {
  return GameRoutine_108c3c0(At<U32>(object, 0x18));
}

[[gnu::visibility("hidden")]] U64 GameStub_10b3200(U64 object, U64 a1) {
  return GameRoutine_10b2650(At<U64>(object, 0x8), At<U32>(a1, 0x0));
}

[[gnu::visibility("hidden")]] U64 GameStub_1161930(U64 object) {
  return GameRoutine_1159cf0(object + 0x8, object + 0x20, object + 0x38);
}

[[gnu::visibility("hidden")]] U64 GameStub_11ed7d0(U64 object) {
  return
    GameRoutine_1286f60(At<U64>(At<U64>(At<U64>(reinterpret_cast<U64>(GameData_21d9188), 0x0), 0x10), 0x5870));
}

[[gnu::visibility("hidden")]] U64 GameStub_120a810(U64 object, U64 a1) {
  return GameRoutine_121b950(At<U64>(At<U64>(object, 0x8), 0x8), At<U64>(a1,
    0x0));
}

[[gnu::visibility("hidden")]] U64 GameStub_1254500(U64 object) {
  return GameRoutine_1260fa0(At<U64>(object, 0x98), object + 0xc0,
    object + 0x110);
}

[[gnu::visibility("hidden")]] U64 GameStub_1287ba0(U64 object, U64 a1, U64 a2) {
  return GameRoutine_11fd9e0(At<U64>(a1, 0x0), At<U64>(a2, 0x0));
}

[[gnu::visibility("hidden")]] U64 GameStub_12c6d50(U64 object) {
  return
    GameRoutine_89aac0(At<U64>(At<U64>(reinterpret_cast<U64>(GameData_21f1780), 0x0), 0x8));
}

[[gnu::visibility("hidden")]] U64 GameStub_12c6dd0(U64 object) {
  return GameRoutine_89aac0(At<U64>(At<U64>(object, 0x8), 0x8));
}

[[gnu::visibility("hidden")]] U64 GameStub_12e1980(U64 object) {
  return GameRoutine_1007580(object, At<U64>(At<U64>(object, 0x98), 0x0), 0x1u);
}

[[gnu::visibility("hidden")]] U64 GameStub_12e20f0(U64 object, U64 a1) {
  return GameRoutine_1383a10(At<U64>(a1, 0x0), 0x1u);
}

[[gnu::visibility("hidden")]] U64 GameStub_133b910(U64 object, U64 a1) {
  return GameRoutine_132b100(At<U64>(a1, 0x0), At<U8>(object, 0x8));
}

[[gnu::visibility("hidden")]] U64 GameStub_133b9f0(U64 object, U64 a1) {
  return GameRoutine_132b100(At<U64>(a1, 0x0), 0x0u);
}

[[gnu::visibility("hidden")]] U64 GameStub_134d2b0(U64 object) {
  return
    GameRoutine_134d2e0(At<U64>(At<U64>(reinterpret_cast<U64>(GameData_21c96e8), 0x0), 0x8));
}

[[gnu::visibility("hidden")]] U64 GameStub_1356df0(U64 object, U64 a1) {
  return GameRoutine_1341d60(At<U64>(a1, 0x0), 0x0u);
}

[[gnu::visibility("hidden")]] U64 GameStub_1358c10(U64 object, U64 a1) {
  return GameRoutine_1341d60(At<U64>(a1, 0x0), 0x0u);
}

[[gnu::visibility("hidden")]] U64 GameStub_1363060(U64 object) {
  return
    GameRoutine_6160c0(At<U64>(At<U64>(reinterpret_cast<U64>(GameData_21a60d8), 0x0), 0x228));
}

[[gnu::visibility("hidden")]] U64 GameStub_1365120(U64 object) {
  return
    GameRoutine_6160c0(At<U64>(At<U64>(reinterpret_cast<U64>(GameData_21a60d8), 0x0), 0x228));
}

[[gnu::visibility("hidden")]] U64 GameStub_13697b0(U64 object) {
  return GameRoutine_2b0(reinterpret_cast<U64>(GameData_a470e0),
    reinterpret_cast<U64>(GameData_22416e0),
    reinterpret_cast<U64>(GameData_1f50948));
}

[[gnu::visibility("hidden")]] U64 GameStub_1369810(U64 object) {
  return
    GameRoutine_6160c0(At<U64>(At<U64>(reinterpret_cast<U64>(GameData_21a60d8), 0x0), 0x228));
}

[[gnu::visibility("hidden")]] U64 GameStub_13903c0(U64 object, U64 a1) {
  return GameRoutine_1400b90(At<U64>(a1, 0x0), object + 0x8);
}

[[gnu::visibility("hidden")]] U64 GameStub_1420000(U64 object) {
  return GameRoutine_947f80(At<U32>(object, 0xb8));
}

[[gnu::visibility("hidden")]] U64 GameStub_1430340(U64 object) {
  return GameRoutine_1430380(At<U64>(object, 0x8), 0x0u);
}

[[gnu::visibility("hidden")]] U64 GameStub_14308e0(U64 object) {
  return GameRoutine_1430380(At<U64>(object, 0x8), 0x1u);
}

[[gnu::visibility("hidden")]] U64 GameStub_1433c70(U64 object) {
  return GameRoutine_fa6560(object + 0x10, At<U64>(object, 0xe0));
}

[[gnu::visibility("hidden")]] U64 GameStub_146e990(U64 object, U64 a1) {
  return GameRoutine_146ea70(a1, object + 0x10);
}

[[gnu::visibility("hidden")]] U64 GameStub_14729c0(U64 object, U64 a1) {
  return GameRoutine_826e40(At<U64>(object, 0x8), 0x9u, a1, 0x0u, 0x0u, 0x0u,
    0xffffffffu, 0x2u);
}

[[gnu::visibility("hidden")]] U64 GameStub_14760e0(U64 object) {
  return GameRoutine_177c100(object, At<U64>(object, 0xc0), object + 0xc8);
}

[[gnu::visibility("hidden")]] U64 GameStub_149f7e0(U64 object, U64 a1) {
  return
    GameRoutine_651b90(At<U64>(At<U64>(reinterpret_cast<U64>(GameData_212bf68), 0x0), 0x0), a1, 0x10u, 0x7u);
}

[[gnu::visibility("hidden")]] U64 GameStub_14ab960(U64 object) {
  return GameRoutine_14a7aa0(At<U64>(At<U64>(At<U64>(object, 0xd0), 0x0), 0x0));
}

[[gnu::visibility("hidden")]] U64 GameStub_14b35d0(U64 object) {
  return
    GameRoutine_14b7e60(At<U64>(At<U64>(reinterpret_cast<U64>(GameData_21f1620), 0x0), 0x8));
}

[[gnu::visibility("hidden")]] U64 GameStub_14c8b10(U64 object) {
  return GameRoutine_14acef0(object, At<U32>(object, 0xd0));
}

[[gnu::visibility("hidden")]] U64 GameStub_14cc310(U64 object, U64 a1) {
  return GameRoutine_14cbc80(object + 0x8, At<U64>(a1, 0x0));
}

[[gnu::visibility("hidden")]] U64 GameStub_1521b00(U64 object) {
  return
    GameRoutine_17bd3e0(At<U64>(At<U64>(At<U64>(reinterpret_cast<U64>(GameData_212d728), 0x0), 0x0), 0x8), 0x1u);
}

[[gnu::visibility("hidden")]] U64 GameStub_152b950(U64 object) {
  return
    GameRoutine_134d2e0(At<U64>(At<U64>(reinterpret_cast<U64>(GameData_21c96e8), 0x0), 0x8));
}

[[gnu::visibility("hidden")]] U64 GameStub_15376b0(U64 object) {
  return GameRoutine_1537c80(object, At<U64>(object, 0x98));
}

[[gnu::visibility("hidden")]] U64 GameStub_1537a80(U64 object) {
  return GameRoutine_1778700(object, At<U64>(object, 0xa0));
}

[[gnu::visibility("hidden")]] U64 GameStub_154ea10(U64 object) {
  return
    GameRoutine_153a3d0(At<U64>(At<U64>(reinterpret_cast<U64>(GameData_212d700), 0x0), 0x0), object);
}

[[gnu::visibility("hidden")]] U64 GameStub_155b810(U64 object) {
  return GameRoutine_1559e20(At<U64>(object, 0x8), 0x7u, 0x1u, 0x3u);
}

[[gnu::visibility("hidden")]] U64 GameStub_155bcd0(U64 object) {
  return GameRoutine_1559e20(At<U64>(object, 0x8), 0x7u, 0x1u, 0x3u);
}

[[gnu::visibility("hidden")]] U64 GameStub_15e4620(U64 object) {
  return GameRoutine_1563280(object + 0xa8,
    reinterpret_cast<U64>(GameData_1abb7f8), 0x0u);
}

[[gnu::visibility("hidden")]] U64 GameStub_15e4640(U64 object) {
  return GameRoutine_1563280(object + 0xa8,
    reinterpret_cast<U64>(GameData_1abb7f8), 0x0u);
}

[[gnu::visibility("hidden")]] U64 GameStub_161d790(U64 object) {
  return GameRoutine_e6cfa0(At<U32>(object, 0x28), 0x5u);
}

[[gnu::visibility("hidden")]] U64 GameStub_1647220(U64 object) {
  return GameRoutine_96bae0(At<U64>(object, 0x58) + 0x180);
}

[[gnu::visibility("hidden")]] U64 GameStub_165be20(U64 object, U32 a1) {
  return GameRoutine_1560ec0(At<U64>(object, 0x8),
    reinterpret_cast<U64>(GameData_1a8f256), a1);
}

[[gnu::visibility("hidden")]] U64 GameStub_16771d0(U64 object) {
  return GameRoutine_80cec0(At<U8>(object, 0xc1));
}

[[gnu::visibility("hidden")]] U64 GameStub_16ab850(U64 object, U32 a1) {
  return GameRoutine_16ac260(object, 0x1u, a1);
}

[[gnu::visibility("hidden")]] U64 GameStub_16ab860(U64 object, U32 a1) {
  return GameRoutine_16ac260(object, 0x0u, a1);
}

[[gnu::visibility("hidden")]] U64 GameStub_16c3cf0(U64 object, U64 a1, U32 a2) {
  return GameRoutine_1843470(a1, a2);
}

[[gnu::visibility("hidden")]] U64 GameStub_16e8b90(U64 object) {
  return GameRoutine_2b0(reinterpret_cast<U64>(GameData_67e7e0),
    reinterpret_cast<U64>(GameData_22628f8),
    reinterpret_cast<U64>(GameData_1f50948));
}

[[gnu::visibility("hidden")]] U64 GameStub_16f4260(U64 object, U64 a1, U64 a2) {
  return GameRoutine_16f0fe0(At<U64>(a1, 0x0), At<U64>(a2, 0x0));
}

[[gnu::visibility("hidden")]] U64 GameStub_16f92c0(U64 object, U64 a1, U64 a2) {
  return GameRoutine_16f0fe0(At<U64>(a1, 0x0), At<U64>(a2, 0x0));
}

[[gnu::visibility("hidden")]] U64 GameStub_16fa8a0(U64 object, U64 a1) {
  return GameRoutine_1841930(At<U64>(a1, 0x0), At<U64>(object, 0x8), 0x0u);
}

[[gnu::visibility("hidden")]] U64 GameStub_1713540(U64 object) {
  return GameRoutine_1713a00(object,
    At<U32>(reinterpret_cast<U64>(GameData_2175540), 0x0));
}

[[gnu::visibility("hidden")]] U64 GameStub_1722ce0(U64 object) {
  return GameRoutine_1563380(object + 0x350,
    reinterpret_cast<U64>(GameData_1a949a5), 0x0u);
}

[[gnu::visibility("hidden")]] U64 GameStub_176d040(U64 object) {
  return GameRoutine_1762ce0(object, At<U64>(object, 0x4c0), At<U32>(object,
    0x4c8), At<U64>(At<U64>(reinterpret_cast<U64>(GameData_212d870), 0x0),
    0x0));
}

[[gnu::visibility("hidden")]] U64 GameStub_1786730(U64 object) {
  return GameRoutine_17871c0(object, At<U32>(object, 0x160), 0x0u);
}

[[gnu::visibility("hidden")]] U64 GameStub_17e0480(U64 object) {
  return
    GameRoutine_19987a0(At<U64>(At<U64>(reinterpret_cast<U64>(GameData_2272140), 0x0), 0x0));
}

[[gnu::visibility("hidden")]] U64 GameStub_17e0550(U64 object, U64 a1, U64 a2) {
  return GameRoutine_651b90(At<U64>(reinterpret_cast<U64>(GameData_2265ee0),
    0x0), At<U64>(a1, 0x0), At<U64>(a2, 0x0), 0x4u);
}

[[gnu::visibility("hidden")]] U64 GameStub_17e2e30(U64 object, U64 a1, U64 a2) {
  return GameRoutine_651b90(At<U64>(reinterpret_cast<U64>(GameData_2265ee0),
    0x0), At<U64>(a1, 0x0), At<U64>(a2, 0x0), 0x0u);
}

[[gnu::visibility("hidden")]] U64 GameStub_182bc40(U64 object) {
  return GameRoutine_155e830(At<U64>(object, 0x8) + 0x30, 0x0u);
}

[[gnu::visibility("hidden")]] U64 GameStub_184b500(U64 object) {
  return GameRoutine_184a010(At<U64>(At<U64>(object, 0x8), 0x8));
}

[[gnu::visibility("hidden")]] U64 GameStub_1852550(U64 object, U64 a1) {
  return GameRoutine_8c7910(At<U64>(a1, 0x0), At<U64>(object, 0x8));
}

[[gnu::visibility("hidden")]] U64 GameStub_185abb0(U64 object) {
  return GameRoutine_1560ec0(object + 0x350,
    reinterpret_cast<U64>(GameData_1af6b2f), 0x0u);
}

[[gnu::visibility("hidden")]] U64 GameStub_1876f20(U64 object) {
  return GameRoutine_9db9e0(0x16u, At<U32>(At<U64>(object, 0x70), 0x2c));
}

[[gnu::visibility("hidden")]] U64 GameStub_187ba40(U64 object) {
  return GameRoutine_9db9e0(0x16u, At<U32>(At<U64>(object, 0x70), 0xc));
}

[[gnu::visibility("hidden")]] U64 GameStub_18819f0(U64 object) {
  return GameRoutine_187d290(object, At<U64>(object, 0x98), object + 0xa0);
}

[[gnu::visibility("hidden")]] U64 GameStub_18c8ef0(U64 object, U64 a1) {
  return GameRoutine_18bf640(At<U64>(a1, 0x0), At<U32>(At<U64>(object, 0x8),
    0x0), 0x0u);
}

[[gnu::visibility("hidden")]] U64 GameStub_18c91c0(U64 object, U64 a1) {
  return GameRoutine_18bfe00(At<U64>(a1, 0x0), At<U32>(At<U64>(object, 0x8),
    0x0));
}

[[gnu::visibility("hidden")]] U64 GameStub_18c92c0(U64 object, U64 a1) {
  return GameRoutine_18bfa40(At<U64>(a1, 0x0), At<U32>(At<U64>(object, 0x8),
    0x0));
}

[[gnu::visibility("hidden")]] U64 GameStub_18c93c0(U64 object, U64 a1) {
  return GameRoutine_18bfc30(At<U64>(a1, 0x0), At<U32>(At<U64>(object, 0x8),
    0x0));
}

[[gnu::visibility("hidden")]] U64 GameStub_18c94c0(U64 object, U64 a1) {
  return GameRoutine_18bf640(At<U64>(a1, 0x0), At<U32>(At<U64>(object, 0x8),
    0x0), 0x0u);
}

[[gnu::visibility("hidden")]] U64 GameStub_18c95d0(U64 object, U64 a1) {
  return GameRoutine_18bf640(At<U64>(a1, 0x0), At<U32>(At<U64>(object, 0x8),
    0x0), 0x1u);
}

[[gnu::visibility("hidden")]] U64 GameStub_18c99c0(U64 object, U64 a1) {
  return GameRoutine_18bf640(At<U64>(a1, 0x0), At<U32>(At<U64>(object, 0x8),
    0x0), 0x0u);
}

[[gnu::visibility("hidden")]] U64 GameStub_18d2fc0(U64 object) {
  return GameRoutine_1a0b310(At<U64>(object, 0x8) + 0xe00, 0x0ul);
}

[[gnu::visibility("hidden")]] U64 GameStub_18d3270(U64 object) {
  return GameRoutine_1a0b310(At<U64>(object, 0x8) + 0xe00, 0x1u);
}

[[gnu::visibility("hidden")]] U64 GameStub_18d3370(U64 object) {
  return GameRoutine_1a0b310(At<U64>(object, 0x8) + 0xe00, 0x2u);
}

[[gnu::visibility("hidden")]] U64 GameStub_19030d0(U64 object) {
  return GameRoutine_1903880(object, At<U32>(object, 0x4b0));
}

[[gnu::visibility("hidden")]] U64 GameStub_1909a30(U64 object, U32 a1, U64 a2) {
  return GameRoutine_19094a0(object, a2, a1, 0x0ul);
}

[[gnu::visibility("hidden")]] U64 GameStub_190d1d0(U64 object, U64 a1) {
  return
    GameRoutine_651b90(At<U64>(At<U64>(reinterpret_cast<U64>(GameData_212bf68), 0x0), 0x0), a1, 0x10u, 0x0u);
}

[[gnu::visibility("hidden")]] U64 GameStub_1954ef0(U64 object) {
  return GameRoutine_16bede0(object, object + 0xb8, At<U64>(object, 0x128));
}

[[gnu::visibility("hidden")]] U64 GameStub_1964420(U64 object) {
  return GameRoutine_1980330(object, reinterpret_cast<U64>(GameData_1aefb5f),
    0x1u);
}

[[gnu::visibility("hidden")]] U64 GameStub_1964460(U64 object) {
  return GameRoutine_1980330(object, reinterpret_cast<U64>(GameData_1a97410),
    0x1u);
}

[[gnu::visibility("hidden")]] U64 GameStub_1966d90(U64 object) {
  return GameRoutine_196a790(object, At<U64>(object, 0xe8));
}

[[gnu::visibility("hidden")]] U64 GameStub_19683b0(U64 object) {
  return GameRoutine_94bc80(At<U32>(object, 0xb8));
}

[[gnu::visibility("hidden")]] U64 GameStub_197e910(U64 object) {
  return GameRoutine_948620(At<U64>(object, 0x58),
    At<U64>(At<U64>(reinterpret_cast<U64>(GameData_212dcd0), 0x0), 0x0) + 0x30);
}

[[gnu::visibility("hidden")]] U64 GameStub_1980830(U64 object) {
  return GameRoutine_1153ca0(object, At<U64>(At<U64>(object, 0xb8), 0x20));
}

[[gnu::visibility("hidden")]] U64 GameStub_19bf0d0(U64 object) {
  return GameRoutine_19bf2f0(At<U64>(At<U64>(object, 0xd8), 0x10));
}

[[gnu::visibility("hidden")]] U64 GameStub_1a082a0(U64 object, U64 a1) {
  return GameRoutine_1a084d0(a1, object + 0x8);
}
