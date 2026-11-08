#include <stdint.h>

using U8 = uint8_t;
using U16 = uint16_t;
using U32 = uint32_t;
using U64 = uint64_t;

template <typename T>
[[gnu::always_inline]] inline T& At(U64 address, U64 offset) {
  return *reinterpret_cast<T*>(address + offset);
}

[[gnu::visibility("hidden")]] extern U8 GameData_1a828d0[];
[[gnu::visibility("hidden")]] extern U8 GameData_1c27e73[];
[[gnu::visibility("hidden")]] void GameRoutine_4e8a0();
[[gnu::visibility("hidden")]] extern U8 GameData_21774d0[];
[[gnu::visibility("hidden")]] void GameRoutine_c6490();
[[gnu::visibility("hidden")]] void GameRoutine_1a09f60();
[[gnu::visibility("hidden")]] void GameRoutine_ec160();
[[gnu::visibility("hidden")]] void GameRoutine_ebc60();
[[gnu::visibility("hidden")]] void GameRoutine_eb4e0();
[[gnu::visibility("hidden")]] void GameRoutine_ebfc0();
[[gnu::visibility("hidden")]] void GameRoutine_ec280();
[[gnu::visibility("hidden")]] void GameRoutine_ec560();
[[gnu::visibility("hidden")]] void GameRoutine_ecad0();
[[gnu::visibility("hidden")]] U64 GameRoutine_101a70(U64);
[[gnu::visibility("hidden")]] void GameRoutine_10b360();
[[gnu::visibility("hidden")]] U64 GameRoutine_1126e0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_106240(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_1063a0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_132ac0(U64, U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_1129c0(U64, U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_102300(U64, U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_1330a0(U64, U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_135ee0(U64, U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_132c40(U64, U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_1322c0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_1370c0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_1371f0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_137310(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_137440(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_1375c0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_1376f0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_137800(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_137910(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_137a30(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_10cff0(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_1f5a7d8[];
[[gnu::visibility("hidden")]] extern U8 GameData_1f5a858[];
[[gnu::visibility("hidden")]] extern U8 GameData_1f5a8d8[];
[[gnu::visibility("hidden")]] U64 GameRoutine_145700(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_1482c0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_148950(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_148cc0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_149f60(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_153b20(U64);
[[gnu::visibility("hidden")]] void GameRoutine_178ac0();
[[gnu::visibility("hidden")]] void GameRoutine_178b80();
[[gnu::visibility("hidden")]] U64 GameRoutine_1679b0(U64);
[[gnu::visibility("hidden")]] void GameRoutine_2af380();
[[gnu::visibility("hidden")]] U64 GameRoutine_16f0e0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_178880(U64);
[[gnu::visibility("hidden")]] void GameRoutine_2afd50();
[[gnu::visibility("hidden")]] U64 GameRoutine_17eb90(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_183be0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_1a0c020(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_1a0c030(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_1a0c040(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_1a0c050(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_1a0c060(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_1a0c070(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_1a0c080(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_1a0c090(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_1a0c0b0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_1a0c0c0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_1a0c0d0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_1a0c0e0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_1a0c0f0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_1a0c100(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_1a0c130(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_1a0c140(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_1a0c160(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_1a0c170(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_1a0c180(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_1a0c190(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_1a0c1c0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_1a0c1d0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_1a0c1e0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_1a0c1f0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_1a0c200(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_1aaedc4[];
[[gnu::visibility("hidden")]] void GameRoutine_2785a0();
[[gnu::visibility("hidden")]] U64 GameRoutine_276be0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_285340(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_285360(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_285380(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_2853a0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_2853c0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_285cb0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_285d20(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_29f1d0(U64);
[[gnu::visibility("hidden")]] void GameRoutine_29f610();
[[gnu::visibility("hidden")]] U64 GameRoutine_286230(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_27b680(U64);
[[gnu::visibility("hidden")]] void GameRoutine_276af0();
[[gnu::visibility("hidden")]] U64 GameRoutine_27f3d0(U64);
[[gnu::visibility("hidden")]] void GameRoutine_1a0c2d0();
[[gnu::visibility("hidden")]] U64 GameRoutine_27bd30(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_1a0c3a0(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_219d0cc[];
[[gnu::visibility("hidden")]] U64 GameRoutine_1a0c440(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_276ac0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_28dca0(U64);
[[gnu::visibility("hidden")]] void GameRoutine_28dff0();
[[gnu::visibility("hidden")]] U64 GameRoutine_28f950(U64);
[[gnu::visibility("hidden")]] void GameRoutine_28fcd0();
[[gnu::visibility("hidden")]] U64 GameRoutine_28fcd0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_2913a0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_2914a0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_27e140(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_297780(U64);
[[gnu::visibility("hidden")]] void GameRoutine_299e80();
[[gnu::visibility("hidden")]] U64 GameRoutine_299e80(U64);
[[gnu::visibility("hidden")]] void GameRoutine_2a0650();
[[gnu::visibility("hidden")]] U64 GameRoutine_1a09b70(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_1a09b80(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_2b8ee0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_2b3fb0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_2acf30(U64);
[[gnu::visibility("hidden")]] void GameRoutine_2ad6d0();
[[gnu::visibility("hidden")]] U64 GameRoutine_2ad6d0(U64);
[[gnu::visibility("hidden")]] void GameRoutine_2b4bd0();
[[gnu::visibility("hidden")]] U64 GameRoutine_1a0b1c0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_1a0b1b0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_2ba070(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_2ba230(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_2ba320(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_2ba460(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_2ba470(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_2ba480(U64);
[[gnu::visibility("hidden")]] void GameRoutine_4763a0();
[[gnu::visibility("hidden")]] void GameRoutine_474890();
[[gnu::visibility("hidden")]] void GameRoutine_4744c0();
[[gnu::visibility("hidden")]] void GameRoutine_467a20();
[[gnu::visibility("hidden")]] void GameRoutine_453a40();
[[gnu::visibility("hidden")]] void GameRoutine_474b10();
[[gnu::visibility("hidden")]] void GameRoutine_474e20();
[[gnu::visibility("hidden")]] void GameRoutine_476500();
[[gnu::visibility("hidden")]] void GameRoutine_4685c0();
[[gnu::visibility("hidden")]] void GameRoutine_469d00();
[[gnu::visibility("hidden")]] void GameRoutine_46a220();
[[gnu::visibility("hidden")]] void GameRoutine_453280();
[[gnu::visibility("hidden")]] void GameRoutine_451c80();
[[gnu::visibility("hidden")]] void GameRoutine_4557f0();
[[gnu::visibility("hidden")]] void GameRoutine_455f00();
[[gnu::visibility("hidden")]] void GameRoutine_44fa20();
[[gnu::visibility("hidden")]] void GameRoutine_4581c0();
[[gnu::visibility("hidden")]] void GameRoutine_45b340();
[[gnu::visibility("hidden")]] void GameRoutine_45bc10();
[[gnu::visibility("hidden")]] void GameRoutine_45f080();
[[gnu::visibility("hidden")]] void GameRoutine_45f680();
[[gnu::visibility("hidden")]] void GameRoutine_4594f0();
[[gnu::visibility("hidden")]] void GameRoutine_45ada0();
[[gnu::visibility("hidden")]] void GameRoutine_45b4b0();
[[gnu::visibility("hidden")]] void GameRoutine_46dd00();
[[gnu::visibility("hidden")]] void GameRoutine_4f2460();
[[gnu::visibility("hidden")]] void GameRoutine_4f40a0();
[[gnu::visibility("hidden")]] void GameRoutine_4f3060();
[[gnu::visibility("hidden")]] void GameRoutine_4f7340();
[[gnu::visibility("hidden")]] void GameRoutine_4f0be0();
[[gnu::visibility("hidden")]] void GameRoutine_4f0200();
[[gnu::visibility("hidden")]] void GameRoutine_4f1280();
[[gnu::visibility("hidden")]] void GameRoutine_4d9c80();
[[gnu::visibility("hidden")]] void GameRoutine_4d9000();
[[gnu::visibility("hidden")]] void GameRoutine_4da620();
[[gnu::visibility("hidden")]] void GameRoutine_4de000();
[[gnu::visibility("hidden")]] void GameRoutine_4dce40();
[[gnu::visibility("hidden")]] void GameRoutine_4d3180();
[[gnu::visibility("hidden")]] void GameRoutine_4d61a0();
[[gnu::visibility("hidden")]] void GameRoutine_4eba20();
[[gnu::visibility("hidden")]] void GameRoutine_4ea2d0();
[[gnu::visibility("hidden")]] void GameRoutine_4e2c60();
[[gnu::visibility("hidden")]] void GameRoutine_4eb4e0();
[[gnu::visibility("hidden")]] void GameRoutine_4e9dc0();
[[gnu::visibility("hidden")]] void GameRoutine_1a0a110();
[[gnu::visibility("hidden")]] void GameRoutine_1a0b7f0();
[[gnu::visibility("hidden")]] void GameRoutine_1a0cd00();
[[gnu::visibility("hidden")]] void GameRoutine_533ef0();
[[gnu::visibility("hidden")]] void GameRoutine_54c550();
[[gnu::visibility("hidden")]] void GameRoutine_55d6e0();
[[gnu::visibility("hidden")]] void GameRoutine_55c180();
[[gnu::visibility("hidden")]] extern U8 GameData_21a3770[];
[[gnu::visibility("hidden")]] extern U8 GameData_21a3790[];
[[gnu::visibility("hidden")]] void GameRoutine_58c850();
[[gnu::visibility("hidden")]] U64 GameRoutine_572ae0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_572d30(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_572ec0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_573070(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_59e520(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_57ce20(U64);
[[gnu::visibility("hidden")]] void GameRoutine_56e710();
[[gnu::visibility("hidden")]] void GameRoutine_582c80();
[[gnu::visibility("hidden")]] U64 GameRoutine_588cc0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_58c720(U64);
[[gnu::visibility("hidden")]] void GameRoutine_597d80();
[[gnu::visibility("hidden")]] U64 GameRoutine_59f020(U64);
[[gnu::visibility("hidden")]] void GameRoutine_5b2400();
[[gnu::visibility("hidden")]] U64 GameRoutine_5c57f0(U64);
[[gnu::visibility("hidden")]] void GameRoutine_5bc5c0();
[[gnu::visibility("hidden")]] extern U8 GameData_21664d4[];
[[gnu::visibility("hidden")]] extern U8 GameData_21a3a58[];
[[gnu::visibility("hidden")]] U64 GameRoutine_5faea0(U64);
[[gnu::visibility("hidden")]] void GameRoutine_1a09ba0();
[[gnu::visibility("hidden")]] void GameRoutine_60b3e0();
[[gnu::visibility("hidden")]] void GameRoutine_6315e0();
[[gnu::visibility("hidden")]] U64 GameRoutine_a8f100(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_1f8f550[];
[[gnu::visibility("hidden")]] extern U8 GameData_1f8f5d0[];
[[gnu::visibility("hidden")]] void GameRoutine_656110();
[[gnu::visibility("hidden")]] void GameRoutine_6563b0();
[[gnu::visibility("hidden")]] void GameRoutine_65dda0();
[[gnu::visibility("hidden")]] void GameRoutine_65f100();
[[gnu::visibility("hidden")]] void GameRoutine_7213b0();
[[gnu::visibility("hidden")]] void GameRoutine_666ba0();
[[gnu::visibility("hidden")]] void GameRoutine_e5fe60();
[[gnu::visibility("hidden")]] void GameRoutine_66aae0();
[[gnu::visibility("hidden")]] extern U8 GameData_1f90160[];
[[gnu::visibility("hidden")]] U64 GameRoutine_65a020(U64);
[[gnu::visibility("hidden")]] void GameRoutine_66caa0();
[[gnu::visibility("hidden")]] extern U8 GameData_1f90320[];
[[gnu::visibility("hidden")]] U64 GameRoutine_676460(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_680040(U64);
[[gnu::visibility("hidden")]] void GameRoutine_6821e0();
[[gnu::visibility("hidden")]] extern U8 GameData_1f90a40[];
[[gnu::visibility("hidden")]] U64 GameRoutine_68f500(U64);
[[gnu::visibility("hidden")]] void GameRoutine_6bb360();
[[gnu::visibility("hidden")]] extern U8 GameData_1a89065[];
[[gnu::visibility("hidden")]] U64 GameRoutine_6e9fa0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_6ed9a0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_6fd360(U64);
[[gnu::visibility("hidden")]] void GameRoutine_703360();
[[gnu::visibility("hidden")]] extern U8 GameData_1a90b94[];
[[gnu::visibility("hidden")]] void GameRoutine_716760();
[[gnu::visibility("hidden")]] void GameRoutine_7188e0();
[[gnu::visibility("hidden")]] void GameRoutine_11944d0();
[[gnu::visibility("hidden")]] void GameRoutine_80f430();
[[gnu::visibility("hidden")]] extern U8 GameData_1a890bc[];
[[gnu::visibility("hidden")]] U64 GameRoutine_727ca0(U64);
[[gnu::visibility("hidden")]] void GameRoutine_728700();
[[gnu::visibility("hidden")]] void GameRoutine_728a50();
[[gnu::visibility("hidden")]] U64 GameRoutine_72c580(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_72c900(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_1ad2860[];
[[gnu::visibility("hidden")]] U64 GameRoutine_733b30(U64);
[[gnu::visibility("hidden")]] void GameRoutine_1670ea0();
[[gnu::visibility("hidden")]] U64 GameRoutine_742af0(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_1f94dc8[];
[[gnu::visibility("hidden")]] extern U8 GameData_1f959b8[];
[[gnu::visibility("hidden")]] void GameRoutine_868190();
[[gnu::visibility("hidden")]] void GameRoutine_811140();
[[gnu::visibility("hidden")]] U64 GameRoutine_90fd20(U64);
[[gnu::visibility("hidden")]] void GameRoutine_80ef70();
[[gnu::visibility("hidden")]] U64 GameRoutine_819400(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_8194d0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_81a7a0(U64);
[[gnu::visibility("hidden")]] void GameRoutine_18c62f0();
[[gnu::visibility("hidden")]] extern U8 GameData_1f978f0[];
[[gnu::visibility("hidden")]] extern U8 GameData_1f97970[];
[[gnu::visibility("hidden")]] extern U8 GameData_1f97b70[];
[[gnu::visibility("hidden")]] extern U8 GameData_1f97bf0[];
[[gnu::visibility("hidden")]] extern U8 GameData_1f97c70[];
[[gnu::visibility("hidden")]] U64 GameRoutine_78f680(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_1f98b58[];
[[gnu::visibility("hidden")]] extern U8 GameData_1f98fa8[];
[[gnu::visibility("hidden")]] extern U8 GameData_1f99028[];
[[gnu::visibility("hidden")]] extern U8 GameData_1f990a8[];
[[gnu::visibility("hidden")]] extern U8 GameData_1f991a8[];
[[gnu::visibility("hidden")]] void GameRoutine_7b6b80();
[[gnu::visibility("hidden")]] void GameRoutine_76cbc0();
[[gnu::visibility("hidden")]] extern U8 GameData_1f997a8[];
[[gnu::visibility("hidden")]] U64 GameRoutine_7ba1a0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_7b9d30(U64);
[[gnu::visibility("hidden")]] void GameRoutine_7bb560();
[[gnu::visibility("hidden")]] U64 GameRoutine_7c23c0(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_1ab38e4[];
[[gnu::visibility("hidden")]] U64 GameRoutine_7c1bb0(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_1abb9af[];
[[gnu::visibility("hidden")]] U64 GameRoutine_7cb620(U64);
[[gnu::visibility("hidden")]] void GameRoutine_7d6320();
[[gnu::visibility("hidden")]] void GameRoutine_7e5900();
[[gnu::visibility("hidden")]] void GameRoutine_7e7020();
[[gnu::visibility("hidden")]] extern U8 GameData_1f9c9c8[];
[[gnu::visibility("hidden")]] U64 GameRoutine_824380(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_1f9f990[];
[[gnu::visibility("hidden")]] void GameRoutine_837e40();
[[gnu::visibility("hidden")]] void GameRoutine_838e20();
[[gnu::visibility("hidden")]] void GameRoutine_83d840();
[[gnu::visibility("hidden")]] U64 GameRoutine_6e3d00(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_1fa10c8[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fa1148[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fa1448[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fa14c8[];
[[gnu::visibility("hidden")]] extern U8 GameData_1aed7f8[];
[[gnu::visibility("hidden")]] void GameRoutine_870ea0();
[[gnu::visibility("hidden")]] void GameRoutine_86fca0();
[[gnu::visibility("hidden")]] U64 GameRoutine_182bc80(U64, U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_873200(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_1aa476f[];
[[gnu::visibility("hidden")]] extern U8 GameData_1aa4780[];
[[gnu::visibility("hidden")]] U64 GameRoutine_18d3f20(U64);
[[gnu::visibility("hidden")]] void GameRoutine_14ccc60();
[[gnu::visibility("hidden")]] void GameRoutine_14cced0();
[[gnu::visibility("hidden")]] void GameRoutine_152ae80();
[[gnu::visibility("hidden")]] void GameRoutine_88f100();
[[gnu::visibility("hidden")]] void GameRoutine_88fe60();
[[gnu::visibility("hidden")]] extern U8 GameData_1a98d40[];
[[gnu::visibility("hidden")]] U64 GameRoutine_89b540(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_89c4e0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_89c760(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_1ade0f3[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fa9060[];
[[gnu::visibility("hidden")]] void GameRoutine_8c7ba0();
[[gnu::visibility("hidden")]] void GameRoutine_8c9500();
[[gnu::visibility("hidden")]] extern U8 GameData_1acee41[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fabf80[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fac300[];
[[gnu::visibility("hidden")]] extern U8 GameData_1faca40[];
[[gnu::visibility("hidden")]] extern U8 GameData_1facac0[];
[[gnu::visibility("hidden")]] extern U8 GameData_1facfe0[];
[[gnu::visibility("hidden")]] void GameRoutine_901640();
[[gnu::visibility("hidden")]] void GameRoutine_104e460();
[[gnu::visibility("hidden")]] void GameRoutine_104e7a0();
[[gnu::visibility("hidden")]] void GameRoutine_fd3ee0();
[[gnu::visibility("hidden")]] extern U8 GameData_1fad798[];
[[gnu::visibility("hidden")]] U64 GameRoutine_81a990(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_929080(U64);
[[gnu::visibility("hidden")]] void GameRoutine_196adf0();
[[gnu::visibility("hidden")]] U64 GameRoutine_92a050(U64);
[[gnu::visibility("hidden")]] void GameRoutine_92a360();
[[gnu::visibility("hidden")]] U64 GameRoutine_929a00(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_92ba80(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_1ae1ffb[];
[[gnu::visibility("hidden")]] U64 GameRoutine_937fe0(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_1aa0a38[];
[[gnu::visibility("hidden")]] U64 GameRoutine_93bb80(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_93d360(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_1faf338[];
[[gnu::visibility("hidden")]] U64 GameRoutine_94e540(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_1faf438[];
[[gnu::visibility("hidden")]] extern U8 GameData_1faf4b8[];
[[gnu::visibility("hidden")]] void GameRoutine_959600();
[[gnu::visibility("hidden")]] U64 GameRoutine_975c80(U64);
[[gnu::visibility("hidden")]] void GameRoutine_97f3e0();
[[gnu::visibility("hidden")]] void GameRoutine_990d60();
[[gnu::visibility("hidden")]] void GameRoutine_9b0da0();
[[gnu::visibility("hidden")]] extern U8 GameData_1a9c9a1[];
[[gnu::visibility("hidden")]] extern U8 GameData_1ade232[];
[[gnu::visibility("hidden")]] extern U8 GameData_1aac216[];
[[gnu::visibility("hidden")]] extern U8 GameData_1aa861e[];
[[gnu::visibility("hidden")]] U64 GameRoutine_9bfbc0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_9c1550(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_9c1920(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_9c2060(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_9c2410(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_1ada68f[];
[[gnu::visibility("hidden")]] extern U8 GameData_1af52e1[];
[[gnu::visibility("hidden")]] U64 GameRoutine_9c5a90(U64);
[[gnu::visibility("hidden")]] void GameRoutine_9c6240();
[[gnu::visibility("hidden")]] void GameRoutine_9cac00();
[[gnu::visibility("hidden")]] extern U8 GameData_1abbd47[];
[[gnu::visibility("hidden")]] extern U8 GameData_1a94e63[];
[[gnu::visibility("hidden")]] extern U8 GameData_1ab7f3b[];
[[gnu::visibility("hidden")]] U64 GameRoutine_9cfe30(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_1fb77e0[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fb7bc8[];
[[gnu::visibility("hidden")]] void GameRoutine_9dc5a0();
[[gnu::visibility("hidden")]] void GameRoutine_9dcac0();
[[gnu::visibility("hidden")]] void GameRoutine_9e8160();
[[gnu::visibility("hidden")]] void GameRoutine_9e9960();
[[gnu::visibility("hidden")]] void GameRoutine_9ec060();
[[gnu::visibility("hidden")]] void GameRoutine_9ec4a0();
[[gnu::visibility("hidden")]] void GameRoutine_9ec9c0();
[[gnu::visibility("hidden")]] void GameRoutine_9feea0();
[[gnu::visibility("hidden")]] extern U8 GameData_1a89387[];
[[gnu::visibility("hidden")]] extern U8 GameData_1ae2188[];
[[gnu::visibility("hidden")]] extern U8 GameData_1afd013[];
[[gnu::visibility("hidden")]] extern U8 GameData_1a9f09e[];
[[gnu::visibility("hidden")]] extern U8 GameData_1ae99f4[];
[[gnu::visibility("hidden")]] U64 GameRoutine_1495040(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_a0ecc0(U64);
[[gnu::visibility("hidden")]] void GameRoutine_1a09b80();
[[gnu::visibility("hidden")]] extern U8 GameData_1fbf6f8[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fbfb30[];
[[gnu::visibility("hidden")]] extern U8 GameData_1aedae6[];
[[gnu::visibility("hidden")]] extern U8 GameData_1acf183[];
[[gnu::visibility("hidden")]] U64 GameRoutine_a619c0(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_1fc0848[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fc0d88[];
[[gnu::visibility("hidden")]] U64 GameRoutine_a929a0(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_1fc2778[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fc27f8[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fc2878[];
[[gnu::visibility("hidden")]] void GameRoutine_ae29c0();
[[gnu::visibility("hidden")]] extern U8 GameData_1fc6ef0[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fc6f70[];
[[gnu::visibility("hidden")]] U64 GameRoutine_bc4ae0(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_1fd0220[];
[[gnu::visibility("hidden")]] extern U8 GameData_1ada336[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fd0b30[];
[[gnu::visibility("hidden")]] extern U8 GameData_1aa8d7e[];
[[gnu::visibility("hidden")]] extern U8 GameData_1ae615f[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fd2120[];
[[gnu::visibility("hidden")]] U64 GameRoutine_c8b340(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_cb3d30(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_1fd4e10[];
[[gnu::visibility("hidden")]] extern U8 GameData_1afd969[];
[[gnu::visibility("hidden")]] extern U8 GameData_1acf951[];
[[gnu::visibility("hidden")]] extern U8 GameData_1aac0a4[];
[[gnu::visibility("hidden")]] extern U8 GameData_1ab460c[];
[[gnu::visibility("hidden")]] extern U8 GameData_1a8562d[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fda8b8[];
[[gnu::visibility("hidden")]] void GameRoutine_d21160();
[[gnu::visibility("hidden")]] extern U8 GameData_1a996c2[];
[[gnu::visibility("hidden")]] extern U8 GameData_1aa5019[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fdd208[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fdd430[];
[[gnu::visibility("hidden")]] U64 GameRoutine_d7c8b0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_d8a4f0(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_1af5cd3[];
[[gnu::visibility("hidden")]] void GameRoutine_da1870();
[[gnu::visibility("hidden")]] void GameRoutine_d85af0();
[[gnu::visibility("hidden")]] void GameRoutine_fccd00();
[[gnu::visibility("hidden")]] U64 GameRoutine_db7ec0(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_1ad36e2[];
[[gnu::visibility("hidden")]] void GameRoutine_db7ba0();
[[gnu::visibility("hidden")]] U64 GameRoutine_db7ba0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_db8ca0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_dba820(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_2213f98[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fe1fd0[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fe2050[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fe20d0[];
[[gnu::visibility("hidden")]] void GameRoutine_e05790();
[[gnu::visibility("hidden")]] extern U8 GameData_1fe2be0[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fe35c8[];
[[gnu::visibility("hidden")]] void GameRoutine_e382a0();
[[gnu::visibility("hidden")]] void GameRoutine_ce59d0();
[[gnu::visibility("hidden")]] void GameRoutine_f45a10();
[[gnu::visibility("hidden")]] void GameRoutine_ebeb40();
[[gnu::visibility("hidden")]] void GameRoutine_ebeca0();
[[gnu::visibility("hidden")]] extern U8 GameData_1aea53a[];
[[gnu::visibility("hidden")]] U64 GameRoutine_e66fa0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_e6c240(U64);
[[gnu::visibility("hidden")]] void GameRoutine_e6e0a0();
[[gnu::visibility("hidden")]] extern U8 GameData_1fe8228[];
[[gnu::visibility("hidden")]] extern U8 GameData_1abc918[];
[[gnu::visibility("hidden")]] extern U8 GameData_1ac3c56[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fe9868[];
[[gnu::visibility("hidden")]] extern U8 GameData_1ad70d9[];
[[gnu::visibility("hidden")]] extern U8 GameData_1aedba4[];
[[gnu::visibility("hidden")]] void GameRoutine_1020f60();
[[gnu::visibility("hidden")]] U64 GameRoutine_eac5a0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_eaca20(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_1fedfa8[];
[[gnu::visibility("hidden")]] void GameRoutine_efe380();
[[gnu::visibility("hidden")]] extern U8 GameData_1ff1e48[];
[[gnu::visibility("hidden")]] U64 GameRoutine_f45180(U64);
[[gnu::visibility("hidden")]] void GameRoutine_f2c8c0();
[[gnu::visibility("hidden")]] extern U8 GameData_1ff3fa8[];
[[gnu::visibility("hidden")]] extern U8 GameData_1ff4028[];
[[gnu::visibility("hidden")]] extern U8 GameData_1a85550[];
[[gnu::visibility("hidden")]] void GameRoutine_f93d90();
[[gnu::visibility("hidden")]] extern U8 GameData_1aee4e7[];
[[gnu::visibility("hidden")]] void GameRoutine_f9a740();
[[gnu::visibility("hidden")]] U64 GameRoutine_8c4be0(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_1aee08e[];
[[gnu::visibility("hidden")]] void GameRoutine_7c6120();
[[gnu::visibility("hidden")]] extern U8 GameData_1ad39db[];
[[gnu::visibility("hidden")]] extern U8 GameData_1acbd39[];
[[gnu::visibility("hidden")]] void GameRoutine_fefea0();
[[gnu::visibility("hidden")]] extern U8 GameData_1adf0b4[];
[[gnu::visibility("hidden")]] extern U8 GameData_1aee3c5[];
[[gnu::visibility("hidden")]] extern U8 GameData_1af620e[];
[[gnu::visibility("hidden")]] extern U8 GameData_1abfa21[];
[[gnu::visibility("hidden")]] extern U8 GameData_1acbce6[];
[[gnu::visibility("hidden")]] void GameRoutine_717660();
[[gnu::visibility("hidden")]] void GameRoutine_717b40();
[[gnu::visibility("hidden")]] U64 GameRoutine_10098a0(U64, U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_100eaa0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_155ea30(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_155e830(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_1027620(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_2004e78[];
[[gnu::visibility("hidden")]] extern U8 GameData_2005078[];
[[gnu::visibility("hidden")]] extern U8 GameData_2004f68[];
[[gnu::visibility("hidden")]] extern U8 GameData_2004fe8[];
[[gnu::visibility("hidden")]] extern U8 GameData_20050f8[];
[[gnu::visibility("hidden")]] extern U8 GameData_2005278[];
[[gnu::visibility("hidden")]] U64 GameRoutine_1053c60(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_1aea93d[];
[[gnu::visibility("hidden")]] extern U8 GameData_1ad3c29[];
[[gnu::visibility("hidden")]] extern U8 GameData_1ab8e0e[];
[[gnu::visibility("hidden")]] extern U8 GameData_1afde88[];
[[gnu::visibility("hidden")]] extern U8 GameData_1a91b25[];
[[gnu::visibility("hidden")]] extern U8 GameData_2005d50[];
[[gnu::visibility("hidden")]] extern U8 GameData_1a9d5a3[];
[[gnu::visibility("hidden")]] extern U8 GameData_1aee1a7[];
[[gnu::visibility("hidden")]] U64 GameRoutine_107b100(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_1ad6702[];
[[gnu::visibility("hidden")]] U64 GameRoutine_1086960(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_1ad752e[];
[[gnu::visibility("hidden")]] extern U8 GameData_1adf19d[];
[[gnu::visibility("hidden")]] extern U8 GameData_1ac4169[];
[[gnu::visibility("hidden")]] extern U8 GameData_1a8e431[];
[[gnu::visibility("hidden")]] extern U8 GameData_20071e8[];
[[gnu::visibility("hidden")]] extern U8 GameData_2007278[];
[[gnu::visibility("hidden")]] extern U8 GameData_2007638[];
[[gnu::visibility("hidden")]] extern U8 GameData_1af2411[];
[[gnu::visibility("hidden")]] extern U8 GameData_1ab8e26[];
[[gnu::visibility("hidden")]] extern U8 GameData_1adb91c[];
[[gnu::visibility("hidden")]] extern U8 GameData_1aafefa[];
[[gnu::visibility("hidden")]] extern U8 GameData_1aa5442[];
[[gnu::visibility("hidden")]] U64 GameRoutine_10b2f90(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_1afa1eb[];
[[gnu::visibility("hidden")]] extern U8 GameData_1aa55d6[];
[[gnu::visibility("hidden")]] U64 GameRoutine_10b85b0(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_1acfe30[];
[[gnu::visibility("hidden")]] extern U8 GameData_1aea9a9[];
[[gnu::visibility("hidden")]] extern U8 GameData_1abcdc6[];
[[gnu::visibility("hidden")]] extern U8 GameData_200b6d0[];
[[gnu::visibility("hidden")]] U64 GameRoutine_106d400(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_10d68d0(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_1ac802a[];
[[gnu::visibility("hidden")]] extern U8 GameData_1adba36[];
[[gnu::visibility("hidden")]] extern U8 GameData_1aee6ce[];
[[gnu::visibility("hidden")]] extern U8 GameData_1a99cf4[];
[[gnu::visibility("hidden")]] extern U8 GameData_1af23f5[];
[[gnu::visibility("hidden")]] U64 GameRoutine_10e4580(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_1a86858[];
[[gnu::visibility("hidden")]] extern U8 GameData_1ab8e8e[];
[[gnu::visibility("hidden")]] U64 GameRoutine_10e5ca0(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_1ae6e76[];
[[gnu::visibility("hidden")]] extern U8 GameData_1a8e4f2[];
[[gnu::visibility("hidden")]] extern U8 GameData_1a95f37[];
[[gnu::visibility("hidden")]] extern U8 GameData_1ad763f[];
[[gnu::visibility("hidden")]] extern U8 GameData_1a9dc86[];
[[gnu::visibility("hidden")]] extern U8 GameData_1ac41fc[];
[[gnu::visibility("hidden")]] extern U8 GameData_1adf1ad[];
[[gnu::visibility("hidden")]] extern U8 GameData_1ab4eff[];
[[gnu::visibility("hidden")]] extern U8 GameData_1ac0c30[];
[[gnu::visibility("hidden")]] extern U8 GameData_1ab8ea1[];
[[gnu::visibility("hidden")]] extern U8 GameData_1aa977e[];
[[gnu::visibility("hidden")]] extern U8 GameData_1ab8eaa[];
[[gnu::visibility("hidden")]] extern U8 GameData_1acbf52[];
[[gnu::visibility("hidden")]] extern U8 GameData_1aad566[];
[[gnu::visibility("hidden")]] extern U8 GameData_1a8e503[];
[[gnu::visibility("hidden")]] extern U8 GameData_1a9dc96[];
[[gnu::visibility("hidden")]] extern U8 GameData_1acbe99[];
[[gnu::visibility("hidden")]] extern U8 GameData_1a99d14[];
[[gnu::visibility("hidden")]] extern U8 GameData_1afa2ad[];
[[gnu::visibility("hidden")]] U64 GameRoutine_112a0e0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_109d5e0(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_1ae6ec2[];
[[gnu::visibility("hidden")]] extern U8 GameData_1af63d4[];
[[gnu::visibility("hidden")]] U64 GameRoutine_1130ae0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_1149600(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_2013400[];
[[gnu::visibility("hidden")]] extern U8 GameData_2013480[];
[[gnu::visibility("hidden")]] extern U8 GameData_2013580[];
[[gnu::visibility("hidden")]] extern U8 GameData_2013800[];
[[gnu::visibility("hidden")]] extern U8 GameData_2013880[];
[[gnu::visibility("hidden")]] U64 GameRoutine_1194e80(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_2016830[];
[[gnu::visibility("hidden")]] extern U8 GameData_2016930[];
[[gnu::visibility("hidden")]] extern U8 GameData_20169b0[];
[[gnu::visibility("hidden")]] U64 GameRoutine_11f4360(U64, U64);
[[gnu::visibility("hidden")]] extern U8 GameData_2018548[];
[[gnu::visibility("hidden")]] extern U8 GameData_20189a8[];
[[gnu::visibility("hidden")]] U64 GameRoutine_1244f60(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_12645e0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_1259360(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_1a86bf0[];
[[gnu::visibility("hidden")]] void GameRoutine_1258820();
[[gnu::visibility("hidden")]] U64 GameRoutine_1258820(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_125ee80(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_12601e0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_1274220(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_1274a50(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_12b49e0(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_1ae72d2[];
[[gnu::visibility("hidden")]] void GameRoutine_12b42e0();
[[gnu::visibility("hidden")]] U64 GameRoutine_12b42e0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_12b5ce0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_12b6160(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_12bcb40(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_12daf80(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_1adf70d[];
[[gnu::visibility("hidden")]] U64 GameRoutine_12debe0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_12df740(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_12e6980(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_1adbf06[];
[[gnu::visibility("hidden")]] U64 GameRoutine_130d180(U64);
[[gnu::visibility("hidden")]] void GameRoutine_1317050();
[[gnu::visibility("hidden")]] U64 GameRoutine_131cdf0(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_1ac10b2[];
[[gnu::visibility("hidden")]] U64 GameRoutine_1340cb0(U64, U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_6cfa20(U64, U64);
[[gnu::visibility("hidden")]] extern U8 GameData_1aa5d4f[];
[[gnu::visibility("hidden")]] U64 GameRoutine_135fcc0(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_1afe396[];
[[gnu::visibility("hidden")]] U64 GameRoutine_1360620(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_13608e0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_5791a0(U64, U64);
[[gnu::visibility("hidden")]] void GameRoutine_137d940();
[[gnu::visibility("hidden")]] extern U8 GameData_2032c40[];
[[gnu::visibility("hidden")]] extern U8 GameData_2033308[];
[[gnu::visibility("hidden")]] void GameRoutine_13920a0();
[[gnu::visibility("hidden")]] void GameRoutine_15f9b40();
[[gnu::visibility("hidden")]] U64 GameRoutine_13da3a0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_13e2550(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_13dabb0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_13e3030(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_13dafd0(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_2037930[];
[[gnu::visibility("hidden")]] U64 GameRoutine_94abe0(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_2038568[];
[[gnu::visibility("hidden")]] U64 GameRoutine_a0d9a0(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_20388b8[];
[[gnu::visibility("hidden")]] extern U8 GameData_20388a8[];
[[gnu::visibility("hidden")]] extern U8 GameData_2038938[];
[[gnu::visibility("hidden")]] U64 GameRoutine_14084c0(U64);
[[gnu::visibility("hidden")]] void GameRoutine_14086a0();
[[gnu::visibility("hidden")]] U64 GameRoutine_14087c0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_140a590(U64);
[[gnu::visibility("hidden")]] void GameRoutine_15e6500();
[[gnu::visibility("hidden")]] U64 GameRoutine_14164a0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_141ad20(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_141c620(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_141b2c0(U64);
[[gnu::visibility("hidden")]] void GameRoutine_197ebc0();
[[gnu::visibility("hidden")]] void GameRoutine_1924d00();
[[gnu::visibility("hidden")]] void GameRoutine_f9af30();
[[gnu::visibility("hidden")]] U64 GameRoutine_1425d40(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_1428820(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_14269e0(U64);
[[gnu::visibility("hidden")]] void GameRoutine_1429bc0();
[[gnu::visibility("hidden")]] void GameRoutine_15f5ec0();
[[gnu::visibility("hidden")]] void GameRoutine_142c160();
[[gnu::visibility("hidden")]] void GameRoutine_1435d90();
[[gnu::visibility("hidden")]] extern U8 GameData_1aa95d0[];
[[gnu::visibility("hidden")]] U64 GameRoutine_1437cc0(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_203de70[];
[[gnu::visibility("hidden")]] extern U8 GameData_203f470[];
[[gnu::visibility("hidden")]] void GameRoutine_1457460();
[[gnu::visibility("hidden")]] extern U8 GameData_1ae37b6[];
[[gnu::visibility("hidden")]] U64 GameRoutine_9bb020(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_1427b00(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_1427120(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_141b5f0(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_2040f48[];
[[gnu::visibility("hidden")]] U64 GameRoutine_146f400(U64);
[[gnu::visibility("hidden")]] void GameRoutine_1470260();
[[gnu::visibility("hidden")]] extern U8 GameData_1ab1794[];
[[gnu::visibility("hidden")]] U64 GameRoutine_81a240(U64, U64);
[[gnu::visibility("hidden")]] void GameRoutine_1474710();
[[gnu::visibility("hidden")]] void GameRoutine_16dac80();
[[gnu::visibility("hidden")]] void GameRoutine_1474c40();
[[gnu::visibility("hidden")]] U64 GameRoutine_1472c90(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_1472dc0(U64);
[[gnu::visibility("hidden")]] void GameRoutine_1477340();
[[gnu::visibility("hidden")]] U64 GameRoutine_14771f0(U64);
[[gnu::visibility("hidden")]] void GameRoutine_147af00();
[[gnu::visibility("hidden")]] void GameRoutine_147bc20();
[[gnu::visibility("hidden")]] void GameRoutine_147e0e0();
[[gnu::visibility("hidden")]] extern U8 GameData_2043438[];
[[gnu::visibility("hidden")]] void GameRoutine_1451220();
[[gnu::visibility("hidden")]] void GameRoutine_140b880();
[[gnu::visibility("hidden")]] void GameRoutine_140bf80();
[[gnu::visibility("hidden")]] void GameRoutine_135e7e0();
[[gnu::visibility("hidden")]] void GameRoutine_1958720();
[[gnu::visibility("hidden")]] void GameRoutine_1546b40();
[[gnu::visibility("hidden")]] void GameRoutine_155c590();
[[gnu::visibility("hidden")]] void GameRoutine_14b9660();
[[gnu::visibility("hidden")]] void GameRoutine_14db740();
[[gnu::visibility("hidden")]] U64 GameRoutine_13289e0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_13289e0(U64, U64);
[[gnu::visibility("hidden")]] void GameRoutine_14d4c90();
[[gnu::visibility("hidden")]] void GameRoutine_65a640();
[[gnu::visibility("hidden")]] void GameRoutine_867df0();
[[gnu::visibility("hidden")]] void GameRoutine_134e920();
[[gnu::visibility("hidden")]] U64 GameRoutine_14defe0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_15a0060(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_1aa60e7[];
[[gnu::visibility("hidden")]] extern U8 GameData_1a87162[];
[[gnu::visibility("hidden")]] void GameRoutine_15c0400();
[[gnu::visibility("hidden")]] extern U8 GameData_1aa25da[];
[[gnu::visibility("hidden")]] U64 GameRoutine_15c3080(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_1abf9a3[];
[[gnu::visibility("hidden")]] extern U8 GameData_1ac14b7[];
[[gnu::visibility("hidden")]] extern U8 GameData_1aef10c[];
[[gnu::visibility("hidden")]] void GameRoutine_16defa0();
[[gnu::visibility("hidden")]] extern U8 GameData_1abd8d4[];
[[gnu::visibility("hidden")]] extern U8 GameData_21ca308[];
[[gnu::visibility("hidden")]] extern U8 GameData_1a94d7c[];
[[gnu::visibility("hidden")]] extern U8 GameData_1aeb57f[];
[[gnu::visibility("hidden")]] extern U8 GameData_1aa553e[];
[[gnu::visibility("hidden")]] void GameRoutine_9495e0();
[[gnu::visibility("hidden")]] void GameRoutine_949930();
[[gnu::visibility("hidden")]] U64 GameRoutine_14212c0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_15f0d90(U64);
[[gnu::visibility("hidden")]] void GameRoutine_15f1100();
[[gnu::visibility("hidden")]] void GameRoutine_15e99e0();
[[gnu::visibility("hidden")]] extern U8 GameData_1aa850c[];
[[gnu::visibility("hidden")]] extern U8 GameData_1ab8cfb[];
[[gnu::visibility("hidden")]] void GameRoutine_16c2460();
[[gnu::visibility("hidden")]] extern U8 GameData_1abd8a7[];
[[gnu::visibility("hidden")]] extern U8 GameData_1ac1541[];
[[gnu::visibility("hidden")]] extern U8 GameData_1ae3a59[];
[[gnu::visibility("hidden")]] extern U8 GameData_1acacd8[];
[[gnu::visibility("hidden")]] extern U8 GameData_1ac4ba4[];
[[gnu::visibility("hidden")]] void GameRoutine_15f6150();
[[gnu::visibility("hidden")]] void GameRoutine_f5ca50();
[[gnu::visibility("hidden")]] void GameRoutine_15f81c0();
[[gnu::visibility("hidden")]] extern U8 GameData_1a8f056[];
[[gnu::visibility("hidden")]] extern U8 GameData_1ae78c6[];
[[gnu::visibility("hidden")]] void GameRoutine_16205a0();
[[gnu::visibility("hidden")]] void GameRoutine_15c1740();
[[gnu::visibility("hidden")]] void GameRoutine_1622c80();
[[gnu::visibility("hidden")]] U64 GameRoutine_161a3e0(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_1aad099[];
[[gnu::visibility("hidden")]] extern U8 GameData_1abd990[];
[[gnu::visibility("hidden")]] extern U8 GameData_1a872bf[];
[[gnu::visibility("hidden")]] extern U8 GameData_1af2ffd[];
[[gnu::visibility("hidden")]] extern U8 GameData_1a98d5a[];
[[gnu::visibility("hidden")]] extern U8 GameData_1a8f1e0[];
[[gnu::visibility("hidden")]] void GameRoutine_80d410();
[[gnu::visibility("hidden")]] U64 GameRoutine_1640020(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_1ab4827[];
[[gnu::visibility("hidden")]] extern U8 GameData_1aa6320[];
[[gnu::visibility("hidden")]] U64 GameRoutine_1661400(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_1ae7ae4[];
[[gnu::visibility("hidden")]] extern U8 GameData_207b498[];
[[gnu::visibility("hidden")]] extern U8 GameData_207b408[];
[[gnu::visibility("hidden")]] extern U8 GameData_207b488[];
[[gnu::visibility("hidden")]] extern U8 GameData_207bb50[];
[[gnu::visibility("hidden")]] extern U8 GameData_1abfa0f[];
[[gnu::visibility("hidden")]] extern U8 GameData_1ac175b[];
[[gnu::visibility("hidden")]] U64 GameRoutine_167b240(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_1aeec5b[];
[[gnu::visibility("hidden")]] extern U8 GameData_1accd38[];
[[gnu::visibility("hidden")]] extern U8 GameData_1ad4225[];
[[gnu::visibility("hidden")]] extern U8 GameData_1aa2298[];
[[gnu::visibility("hidden")]] extern U8 GameData_1afe4b1[];
[[gnu::visibility("hidden")]] extern U8 GameData_1aef1b3[];
[[gnu::visibility("hidden")]] extern U8 GameData_1aa617b[];
[[gnu::visibility("hidden")]] extern U8 GameData_1aadcd2[];
[[gnu::visibility("hidden")]] extern U8 GameData_1ae7846[];
[[gnu::visibility("hidden")]] extern U8 GameData_1adfc5b[];
[[gnu::visibility("hidden")]] extern U8 GameData_1ab1ca0[];
[[gnu::visibility("hidden")]] extern U8 GameData_1aef348[];
[[gnu::visibility("hidden")]] extern U8 GameData_1aa299b[];
[[gnu::visibility("hidden")]] extern U8 GameData_1aef4b3[];
[[gnu::visibility("hidden")]] extern U8 GameData_1afea98[];
[[gnu::visibility("hidden")]] extern U8 GameData_1adc748[];
[[gnu::visibility("hidden")]] extern U8 GameData_1ab1a1a[];
[[gnu::visibility("hidden")]] extern U8 GameData_1ae7891[];
[[gnu::visibility("hidden")]] extern U8 GameData_1ad81a7[];
[[gnu::visibility("hidden")]] extern U8 GameData_1ae78b2[];
[[gnu::visibility("hidden")]] extern U8 GameData_1ae782e[];
[[gnu::visibility("hidden")]] extern U8 GameData_1ab1de1[];
[[gnu::visibility("hidden")]] extern U8 GameData_1a9e9e7[];
[[gnu::visibility("hidden")]] extern U8 GameData_1ae0007[];
[[gnu::visibility("hidden")]] extern U8 GameData_1ac8c9e[];
[[gnu::visibility("hidden")]] extern U8 GameData_1ac11ff[];
[[gnu::visibility("hidden")]] extern U8 GameData_1a92724[];
[[gnu::visibility("hidden")]] extern U8 GameData_1afe5bd[];
[[gnu::visibility("hidden")]] extern U8 GameData_1ac91ca[];
[[gnu::visibility("hidden")]] extern U8 GameData_1afaf3b[];
[[gnu::visibility("hidden")]] extern U8 GameData_1aa2959[];
[[gnu::visibility("hidden")]] extern U8 GameData_1a92e41[];
[[gnu::visibility("hidden")]] extern U8 GameData_1ad0fa4[];
[[gnu::visibility("hidden")]] extern U8 GameData_1ae3d2a[];
[[gnu::visibility("hidden")]] extern U8 GameData_1af1f7e[];
[[gnu::visibility("hidden")]] extern U8 GameData_1acd40d[];
[[gnu::visibility("hidden")]] extern U8 GameData_1a9ef35[];
[[gnu::visibility("hidden")]] extern U8 GameData_1ab1d6e[];
[[gnu::visibility("hidden")]] extern U8 GameData_1a92d49[];
[[gnu::visibility("hidden")]] extern U8 GameData_1a9dada[];
[[gnu::visibility("hidden")]] extern U8 GameData_2083370[];
[[gnu::visibility("hidden")]] U64 GameRoutine_16a6de0(U64, U64);
[[gnu::visibility("hidden")]] extern U8 GameData_1ad0a34[];
[[gnu::visibility("hidden")]] void GameRoutine_80d680();
[[gnu::visibility("hidden")]] void GameRoutine_80d750();
[[gnu::visibility("hidden")]] U64 GameRoutine_16a5aa0(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_1aef3ee[];
[[gnu::visibility("hidden")]] void GameRoutine_16a75e0();
[[gnu::visibility("hidden")]] extern U8 GameData_2088d60[];
[[gnu::visibility("hidden")]] extern U8 GameData_2088cd0[];
[[gnu::visibility("hidden")]] extern U8 GameData_2088d50[];
[[gnu::visibility("hidden")]] extern U8 GameData_2088f60[];
[[gnu::visibility("hidden")]] extern U8 GameData_2088f50[];
[[gnu::visibility("hidden")]] U64 GameRoutine_16b44a0(U64);
[[gnu::visibility("hidden")]] void GameRoutine_16e1a00();
[[gnu::visibility("hidden")]] extern U8 GameData_1a85728[];
[[gnu::visibility("hidden")]] extern U8 GameData_1ab5b66[];
[[gnu::visibility("hidden")]] extern U8 GameData_1ae3d91[];
[[gnu::visibility("hidden")]] extern U8 GameData_1aef446[];
[[gnu::visibility("hidden")]] extern U8 GameData_1afaee4[];
[[gnu::visibility("hidden")]] extern U8 GameData_1ac1063[];
[[gnu::visibility("hidden")]] extern U8 GameData_1af2943[];
[[gnu::visibility("hidden")]] extern U8 GameData_1a92997[];
[[gnu::visibility("hidden")]] U64 GameRoutine_16dd440(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_16d1ca0(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_209a668[];
[[gnu::visibility("hidden")]] extern U8 GameData_1af139c[];
[[gnu::visibility("hidden")]] U64 GameRoutine_16e7370(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_1ab1e51[];
[[gnu::visibility("hidden")]] void GameRoutine_16f5ea0();
[[gnu::visibility("hidden")]] U64 GameRoutine_16f5a10(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_16fb800(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_1aaa01d[];
[[gnu::visibility("hidden")]] extern U8 GameData_1aae0b1[];
[[gnu::visibility("hidden")]] extern U8 GameData_20a3430[];
[[gnu::visibility("hidden")]] extern U8 GameData_20a3520[];
[[gnu::visibility("hidden")]] U64 GameRoutine_16fce10(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_1aeb9e5[];
[[gnu::visibility("hidden")]] extern U8 GameData_20a3cc8[];
[[gnu::visibility("hidden")]] U64 GameRoutine_1703f40(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_1706db0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_1709fa0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_1709a60(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_1710500(U64);
[[gnu::visibility("hidden")]] void GameRoutine_80d8f0();
[[gnu::visibility("hidden")]] void GameRoutine_80d820();
[[gnu::visibility("hidden")]] U64 GameRoutine_1712810(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_1ad4a8e[];
[[gnu::visibility("hidden")]] extern U8 GameData_1ac5028[];
[[gnu::visibility("hidden")]] void GameRoutine_80d140();
[[gnu::visibility("hidden")]] U64 GameRoutine_1715920(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_1715b60(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_1715730(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_1accea1[];
[[gnu::visibility("hidden")]] void GameRoutine_80dd00();
[[gnu::visibility("hidden")]] void GameRoutine_80ddd0();
[[gnu::visibility("hidden")]] U64 GameRoutine_17186b0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_1718560(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_1718020(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_1ab1e91[];
[[gnu::visibility("hidden")]] extern U8 GameData_1ac5070[];
[[gnu::visibility("hidden")]] void GameRoutine_16626c0();
[[gnu::visibility("hidden")]] U64 GameRoutine_17260c0(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_20b6138[];
[[gnu::visibility("hidden")]] extern U8 GameData_20b61b8[];
[[gnu::visibility("hidden")]] void GameRoutine_1744940();
[[gnu::visibility("hidden")]] extern U8 GameData_20c2380[];
[[gnu::visibility("hidden")]] extern U8 GameData_20c2480[];
[[gnu::visibility("hidden")]] U64 GameRoutine_1768ea0(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_1abf9dc[];
[[gnu::visibility("hidden")]] extern U8 GameData_1aa2b6d[];
[[gnu::visibility("hidden")]] U64 GameRoutine_1783620(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_1aef64c[];
[[gnu::visibility("hidden")]] void GameRoutine_1788180();
[[gnu::visibility("hidden")]] extern U8 GameData_1aa83de[];
[[gnu::visibility("hidden")]] U64 GameRoutine_1786fb0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_1788900(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_1788c00(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_178a2c0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_178b670(U64);
[[gnu::visibility("hidden")]] void GameRoutine_178cae0();
[[gnu::visibility("hidden")]] void GameRoutine_16de4d0();
[[gnu::visibility("hidden")]] void GameRoutine_178c760();
[[gnu::visibility("hidden")]] U64 GameRoutine_17903d0(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_20c9298[];
[[gnu::visibility("hidden")]] extern U8 GameData_20c9318[];
[[gnu::visibility("hidden")]] U64 GameRoutine_179c5f0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_179d560(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_1aaa509[];
[[gnu::visibility("hidden")]] extern U8 GameData_1ae3f3d[];
[[gnu::visibility("hidden")]] extern U8 GameData_1aa2ba0[];
[[gnu::visibility("hidden")]] extern U8 GameData_1ab5d52[];
[[gnu::visibility("hidden")]] extern U8 GameData_1ac51b6[];
[[gnu::visibility("hidden")]] extern U8 GameData_1a93085[];
[[gnu::visibility("hidden")]] extern U8 GameData_1ab5d5e[];
[[gnu::visibility("hidden")]] U64 GameRoutine_17a67c0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_17a6c40(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_17a7290(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_1aef113[];
[[gnu::visibility("hidden")]] U64 GameRoutine_17b49b0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_16dd9a0(U64);
[[gnu::visibility("hidden")]] void GameRoutine_17b9000();
[[gnu::visibility("hidden")]] U64 GameRoutine_17c7f60(U64);
[[gnu::visibility("hidden")]] void GameRoutine_17ce880();
[[gnu::visibility("hidden")]] U64 GameRoutine_17ce880(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_c7f20(U64, U64);
[[gnu::visibility("hidden")]] extern U8 GameData_20da5c0[];
[[gnu::visibility("hidden")]] void GameRoutine_1a0a740();
[[gnu::visibility("hidden")]] void GameRoutine_1a0a0b0();
[[gnu::visibility("hidden")]] extern U8 GameData_1ab5ea2[];
[[gnu::visibility("hidden")]] U64 GameRoutine_1828a40(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_182bfd0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_1845630(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_184c2d0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_184fca0(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_20e8c08[];
[[gnu::visibility("hidden")]] extern U8 GameData_20e8c88[];
[[gnu::visibility("hidden")]] extern U8 GameData_20e9098[];
[[gnu::visibility("hidden")]] extern U8 GameData_1ab978a[];
[[gnu::visibility("hidden")]] extern U8 GameData_1abbb17[];
[[gnu::visibility("hidden")]] extern U8 GameData_1a93332[];
[[gnu::visibility("hidden")]] U64 GameRoutine_185c7a0(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_1ad0c98[];
[[gnu::visibility("hidden")]] extern U8 GameData_1aef125[];
[[gnu::visibility("hidden")]] U64 GameRoutine_18674a0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_1867b40(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_1868580(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_1868d40(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_1869d60(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_186a6e0(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_1acef04[];
[[gnu::visibility("hidden")]] void GameRoutine_16dd9a0();
[[gnu::visibility("hidden")]] extern U8 GameData_1a96f09[];
[[gnu::visibility("hidden")]] U64 GameRoutine_186d630(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_186ddb0(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_20f3828[];
[[gnu::visibility("hidden")]] extern U8 GameData_20f3928[];
[[gnu::visibility("hidden")]] extern U8 GameData_1afcf99[];
[[gnu::visibility("hidden")]] extern U8 GameData_1ae0565[];
[[gnu::visibility("hidden")]] extern U8 GameData_1abbc6b[];
[[gnu::visibility("hidden")]] extern U8 GameData_1afaea0[];
[[gnu::visibility("hidden")]] extern U8 GameData_1adcb6a[];
[[gnu::visibility("hidden")]] extern U8 GameData_1ab0092[];
[[gnu::visibility("hidden")]] extern U8 GameData_1af74d3[];
[[gnu::visibility("hidden")]] U64 GameRoutine_1876f30(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_18770e0(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_1ae41c5[];
[[gnu::visibility("hidden")]] extern U8 GameData_1ad70c3[];
[[gnu::visibility("hidden")]] extern U8 GameData_1aa689f[];
[[gnu::visibility("hidden")]] extern U8 GameData_1a9eda2[];
[[gnu::visibility("hidden")]] extern U8 GameData_1a8f7f2[];
[[gnu::visibility("hidden")]] extern U8 GameData_1ae41db[];
[[gnu::visibility("hidden")]] U64 GameRoutine_187ba50(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_187bd30(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_20fd608[];
[[gnu::visibility("hidden")]] extern U8 GameData_1a8798a[];
[[gnu::visibility("hidden")]] extern U8 GameData_1ac6c41[];
[[gnu::visibility("hidden")]] extern U8 GameData_1abfaa2[];
[[gnu::visibility("hidden")]] extern U8 GameData_1a9732c[];
[[gnu::visibility("hidden")]] U64 GameRoutine_18837e0(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_1ad73c0[];
[[gnu::visibility("hidden")]] U64 GameRoutine_1888840(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_1886020(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_188b680(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_1891c20(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_18960c0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_189bb00(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_189bc60(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_189e180(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_189fa60(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_189fb80(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_18a2440(U64);
[[gnu::visibility("hidden")]] void GameRoutine_1888840();
[[gnu::visibility("hidden")]] U64 GameRoutine_18abec0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_18ac200(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_18b2b00(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_18b3800(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_18b49e0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_18b59e0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_18b6260(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_18bac00(U64);
[[gnu::visibility("hidden")]] void GameRoutine_18c7220();
[[gnu::visibility("hidden")]] U64 GameRoutine_18bf740(U64, U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_18bfef0(U64, U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_18bf8c0(U64, U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_18c0790(U64, U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_18c0980(U64, U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_18ca480(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_18caf00(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_2109998[];
[[gnu::visibility("hidden")]] void GameRoutine_d4ee0();
[[gnu::visibility("hidden")]] void GameRoutine_d9210();
[[gnu::visibility("hidden")]] void GameRoutine_d9340();
[[gnu::visibility("hidden")]] void GameRoutine_d93b0();
[[gnu::visibility("hidden")]] U64 GameRoutine_18f9f90(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_1a879e2[];
[[gnu::visibility("hidden")]] extern U8 GameData_1aebf67[];
[[gnu::visibility("hidden")]] extern U8 GameData_1af373d[];
[[gnu::visibility("hidden")]] extern U8 GameData_1aef2ee[];
[[gnu::visibility("hidden")]] U64 GameRoutine_18fefc0(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_1ab7e51[];
[[gnu::visibility("hidden")]] extern U8 GameData_1a87a01[];
[[gnu::visibility("hidden")]] void GameRoutine_80dc30();
[[gnu::visibility("hidden")]] void GameRoutine_80db60();
[[gnu::visibility("hidden")]] void GameRoutine_5612b0();
[[gnu::visibility("hidden")]] void GameRoutine_19e70();
[[gnu::visibility("hidden")]] extern U8 GameData_2110260[];
[[gnu::visibility("hidden")]] void GameRoutine_4e960();
[[gnu::visibility("hidden")]] U64 GameRoutine_60a060(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_1a87a3d[];
[[gnu::visibility("hidden")]] extern U8 GameData_1ae5940[];
[[gnu::visibility("hidden")]] extern U8 GameData_1aa95bd[];
[[gnu::visibility("hidden")]] U64 GameRoutine_1925580(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_1ac1d0e[];
[[gnu::visibility("hidden")]] extern U8 GameData_1ae80a7[];
[[gnu::visibility("hidden")]] U64 GameRoutine_94b1e0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_1934160(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_1ac924f[];
[[gnu::visibility("hidden")]] extern U8 GameData_1a98ed2[];
[[gnu::visibility("hidden")]] U64 GameRoutine_194ea60(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_1953de0(U64);
[[gnu::visibility("hidden")]] void GameRoutine_1955a20();
[[gnu::visibility("hidden")]] void GameRoutine_194e230();
[[gnu::visibility("hidden")]] U64 GameRoutine_1959cc0(U64);
[[gnu::visibility("hidden")]] void GameRoutine_1969870();
[[gnu::visibility("hidden")]] void GameRoutine_19650f0();
[[gnu::visibility("hidden")]] void GameRoutine_19699c0();
[[gnu::visibility("hidden")]] U64 GameRoutine_1964760(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_1964870(U64);
[[gnu::visibility("hidden")]] void GameRoutine_196cb60();
[[gnu::visibility("hidden")]] U64 GameRoutine_1965060(U64);
[[gnu::visibility("hidden")]] void GameRoutine_1968280();
[[gnu::visibility("hidden")]] void GameRoutine_19683c0();
[[gnu::visibility("hidden")]] U64 GameRoutine_1964d30(U64);
[[gnu::visibility("hidden")]] void GameRoutine_94bf40();
[[gnu::visibility("hidden")]] void GameRoutine_1969320();
[[gnu::visibility("hidden")]] extern U8 GameData_1aff195[];
[[gnu::visibility("hidden")]] extern U8 GameData_211d508[];
[[gnu::visibility("hidden")]] extern U8 GameData_1a8f27f[];
[[gnu::visibility("hidden")]] extern U8 GameData_1afb722[];
[[gnu::visibility("hidden")]] void GameRoutine_199c0d0();
[[gnu::visibility("hidden")]] U64 GameRoutine_199c0d0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_199c220(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_199c530(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_199c6f0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_199c400(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_19a9e80(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_19ac160(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_19acc40(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_19ad8a0(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_1afe7ab[];
[[gnu::visibility("hidden")]] extern U8 GameData_1a8d5f6[];
[[gnu::visibility("hidden")]] extern U8 GameData_1afa930[];
[[gnu::visibility("hidden")]] extern U8 GameData_1aaa98f[];
[[gnu::visibility("hidden")]] extern U8 GameData_1aa3104[];
[[gnu::visibility("hidden")]] extern U8 GameData_1a87b23[];
[[gnu::visibility("hidden")]] extern U8 GameData_1af76c9[];
[[gnu::visibility("hidden")]] void GameRoutine_178ab20();
[[gnu::visibility("hidden")]] U64 GameRoutine_19eac80(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_19eadc0(U64);
[[gnu::visibility("hidden")]] void GameRoutine_15c1520();
[[gnu::visibility("hidden")]] extern U8 GameData_212bb18[];
[[gnu::visibility("hidden")]] extern U8 GameData_212bb98[];

[[gnu::visibility("hidden")]] void GameStub_20() {
}

[[gnu::visibility("hidden")]] U64 GameStub_400() {
  return reinterpret_cast<U64>(GameData_1a828d0);
}

[[gnu::visibility("hidden")]] U64 GameStub_410() {
  return reinterpret_cast<U64>(GameData_1c27e73);
}

[[gnu::visibility("hidden")]] void GameStub_4e960() {
  GameRoutine_4e8a0();
}

[[gnu::visibility("hidden")]] U64 GameStub_53050() {
  return reinterpret_cast<U64>(GameData_21774d0);
}

[[gnu::visibility("hidden")]] void GameStub_c7f20() {
  GameRoutine_c6490();
}

[[gnu::visibility("hidden")]] void GameStub_eaf80() {
  GameRoutine_1a09f60();
}

[[gnu::visibility("hidden")]] void GameStub_eb3f0() {
  GameRoutine_ec160();
}

[[gnu::visibility("hidden")]] void GameStub_eb400() {
  GameRoutine_ebc60();
}

[[gnu::visibility("hidden")]] void GameStub_ebfb0() {
  GameRoutine_eb4e0();
}

[[gnu::visibility("hidden")]] void GameStub_ec260() {
  GameRoutine_ebfc0();
}

[[gnu::visibility("hidden")]] void GameStub_ec6e0() {
  GameRoutine_ec280();
}

[[gnu::visibility("hidden")]] void GameStub_ec6f0() {
  GameRoutine_ec560();
}

[[gnu::visibility("hidden")]] void GameStub_ecb40() {
  GameRoutine_ecad0();
}

[[gnu::visibility("hidden")]] void GameStub_f90c0() {
}

[[gnu::visibility("hidden")]] void GameStub_fa370() {
}

[[gnu::visibility("hidden")]] void GameStub_fb7b0() {
}

[[gnu::visibility("hidden")]] void GameStub_fcbf0() {
}

[[gnu::visibility("hidden")]] void GameStub_101b50(U64 object) {
  GameRoutine_101a70(object - 0x28);
}

[[gnu::visibility("hidden")]] void GameStub_101b60(U64 object) {
  GameRoutine_101a70(object - 0x15d8);
}

[[gnu::visibility("hidden")]] void GameStub_101c30() {
}

[[gnu::visibility("hidden")]] void GameStub_1034d0(U64 object, U32 value) {
  At<U32>(object, 0x1664) = value;
}

[[gnu::visibility("hidden")]] U32 GameStub_1034e0(U64 object) {
  return At<U32>(object, 0x1664);
}

[[gnu::visibility("hidden")]] void GameStub_104640() {
}

[[gnu::visibility("hidden")]] void GameStub_107d90() {
}

[[gnu::visibility("hidden")]] void GameStub_109050() {
}

[[gnu::visibility("hidden")]] void GameStub_10c3c0() {
  GameRoutine_10b360();
}

[[gnu::visibility("hidden")]] void GameStub_10df50() {
}

[[gnu::visibility("hidden")]] void GameStub_10df60() {
}

[[gnu::visibility("hidden")]] void GameStub_10e2e0() {
}

[[gnu::visibility("hidden")]] void GameStub_110270() {
}

[[gnu::visibility("hidden")]] U8 GameStub_111070(U64 object) {
  return At<U8>(object, 0x81);
}

[[gnu::visibility("hidden")]] void GameStub_1127a0(U64 object) {
  GameRoutine_1126e0(object - 0x28);
}

[[gnu::visibility("hidden")]] void GameStub_1127b0(U64 object) {
  GameRoutine_1126e0(object - 0x15d8);
}

[[gnu::visibility("hidden")]] void GameStub_112880() {
}

[[gnu::visibility("hidden")]] U64 GameStub_117bb0(U64 object) {
  return At<U64>(object, 0x858);
}

[[gnu::visibility("hidden")]] U64 GameStub_118f50(U64 object) {
  return GameRoutine_106240(At<U64>(object, 0x860));
}

[[gnu::visibility("hidden")]] U64 GameStub_118f60(U64 object) {
  return GameRoutine_1063a0(At<U64>(object, 0x860));
}

[[gnu::visibility("hidden")]] float GameStub_118fc0(U64 object) {
  return At<float>(object, 0xc5c);
}

[[gnu::visibility("hidden")]] U64 GameStub_118fd0(U64 object) {
  return At<U64>(object, 0x860);
}

[[gnu::visibility("hidden")]] U64 GameStub_118fe0(U64 object) {
  return At<U64>(object, 0x868);
}

[[gnu::visibility("hidden")]] U64 GameStub_118ff0(U64 object) {
  return At<U64>(object, 0x870);
}

[[gnu::visibility("hidden")]] U64 GameStub_119000(U64 object) {
  return At<U64>(object, 0x878);
}

[[gnu::visibility("hidden")]] U64 GameStub_119010(U64 object) {
  return At<U64>(object, 0x880);
}

[[gnu::visibility("hidden")]] U64 GameStub_119020(U64 object) {
  return At<U64>(object, 0x888);
}

[[gnu::visibility("hidden")]] U64 GameStub_119030(U64 object) {
  return At<U64>(object, 0x890);
}

[[gnu::visibility("hidden")]] U32 GameStub_119080(U64 object) {
  return At<U32>(object, 0xc38);
}

[[gnu::visibility("hidden")]] U8 GameStub_11e850(U64 object) {
  return At<U8>(object, 0xc58);
}

[[gnu::visibility("hidden")]] U64 GameStub_123bc0(U64, U64 other) {
  return GameRoutine_132ac0(At<U64>(other, 0x0), other);
}

[[gnu::visibility("hidden")]] void GameStub_124a20() {
}

[[gnu::visibility("hidden")]] U64 GameStub_124aa0(U64, U64 other) {
  return GameRoutine_1129c0(At<U64>(other, 0x0), other);
}

[[gnu::visibility("hidden")]] U64 GameStub_124b50(U64, U64 other) {
  return GameRoutine_102300(At<U64>(other, 0x0), other);
}

[[gnu::visibility("hidden")]] U64 GameStub_124c00(U64, U64 other) {
  return GameRoutine_1330a0(At<U64>(other, 0x0), other);
}

[[gnu::visibility("hidden")]] U64 GameStub_125100(U64, U64 other) {
  return GameRoutine_135ee0(At<U64>(other, 0x0), other);
}

[[gnu::visibility("hidden")]] void GameStub_1259b0() {
}

[[gnu::visibility("hidden")]] void GameStub_125b50() {
}

[[gnu::visibility("hidden")]] void GameStub_125c80() {
}

[[gnu::visibility("hidden")]] U64 GameStub_125e70(U64, U64 other) {
  return GameRoutine_132c40(At<U64>(other, 0x0), other);
}

[[gnu::visibility("hidden")]] void GameStub_132730(U64 object) {
  GameRoutine_1322c0(object - 0x28);
}

[[gnu::visibility("hidden")]] void GameStub_132740(U64 object) {
  GameRoutine_1322c0(object - 0x15d8);
}

[[gnu::visibility("hidden")]] void GameStub_1371e0(U64 object) {
  GameRoutine_1370c0(object - 0x28);
}

[[gnu::visibility("hidden")]] void GameStub_137300(U64 object) {
  GameRoutine_1371f0(object - 0x28);
}

[[gnu::visibility("hidden")]] void GameStub_137430(U64 object) {
  GameRoutine_137310(object - 0x28);
}

[[gnu::visibility("hidden")]] void GameStub_1375b0(U64 object) {
  GameRoutine_137440(object - 0x28);
}

[[gnu::visibility("hidden")]] void GameStub_1376e0(U64 object) {
  GameRoutine_1375c0(object - 0x28);
}

[[gnu::visibility("hidden")]] void GameStub_1377f0(U64 object) {
  GameRoutine_1376f0(object - 0x28);
}

[[gnu::visibility("hidden")]] void GameStub_137900(U64 object) {
  GameRoutine_137800(object - 0x28);
}

[[gnu::visibility("hidden")]] void GameStub_137a20(U64 object) {
  GameRoutine_137910(object - 0x28);
}

[[gnu::visibility("hidden")]] void GameStub_137b30(U64 object) {
  GameRoutine_137a30(object - 0x28);
}

[[gnu::visibility("hidden")]] void GameStub_13d1c0(U64 object) {
  GameRoutine_10cff0(object + 0x10);
}

[[gnu::visibility("hidden")]] U64 GameStub_13d220() {
  return reinterpret_cast<U64>(GameData_1f5a7d8);
}

[[gnu::visibility("hidden")]] void GameStub_13d300(U64 object) {
  GameRoutine_10cff0(object + 0x10);
}

[[gnu::visibility("hidden")]] U64 GameStub_13d360() {
  return reinterpret_cast<U64>(GameData_1f5a858);
}

[[gnu::visibility("hidden")]] void GameStub_13d440(U64 object) {
  GameRoutine_10cff0(object + 0x10);
}

[[gnu::visibility("hidden")]] U64 GameStub_13d4a0() {
  return reinterpret_cast<U64>(GameData_1f5a8d8);
}

[[gnu::visibility("hidden")]] void GameStub_13d6c0() {
}

[[gnu::visibility("hidden")]] void GameStub_13d7b0() {
}

[[gnu::visibility("hidden")]] void GameStub_13d8a0() {
}

[[gnu::visibility("hidden")]] void GameStub_13e430() {
}

[[gnu::visibility("hidden")]] U8 GameStub_13e770(U64 object) {
  return At<U8>(object, 0x41);
}

[[gnu::visibility("hidden")]] void GameStub_145ad0(U64 object) {
  GameRoutine_145700(object - 0x28);
}

[[gnu::visibility("hidden")]] void GameStub_145ae0(U64 object) {
  GameRoutine_145700(object - 0x15d8);
}

[[gnu::visibility("hidden")]] void GameStub_148590(U64 object) {
  GameRoutine_1482c0(object - 0x28);
}

[[gnu::visibility("hidden")]] void GameStub_148b60(U64 object) {
  GameRoutine_148950(object - 0x28);
}

[[gnu::visibility("hidden")]] void GameStub_148e20(U64 object) {
  GameRoutine_148cc0(object - 0x28);
}

[[gnu::visibility("hidden")]] void GameStub_14a140(U64 object) {
  GameRoutine_149f60(object - 0x28);
}

[[gnu::visibility("hidden")]] void GameStub_14a160(U64 object) {
  GameRoutine_149f60(object - 0x15d8);
}

[[gnu::visibility("hidden")]] void GameStub_14b870(U64 object, U32 value) {
  At<U32>(object, 0x8) = value;
}

[[gnu::visibility("hidden")]] void GameStub_14b8b0(U64 object, U32 value) {
  At<U32>(object, 0xc) = value;
}

[[gnu::visibility("hidden")]] void GameStub_14b8c0(U64 object, U32 value) {
  At<U32>(object, 0x10) = value;
}

[[gnu::visibility("hidden")]] U32 GameStub_14b8d0(U64 object) {
  return At<U32>(object, 0x10);
}

[[gnu::visibility("hidden")]] U32 GameStub_14b930(U64 object) {
  return At<U32>(object, 0x14);
}

[[gnu::visibility("hidden")]] void GameStub_14bc30(U64 object, U32 value) {
  At<U32>(object, 0x1c) = value;
}

[[gnu::visibility("hidden")]] U32 GameStub_14bc40(U64 object) {
  return At<U32>(object, 0x1c);
}

[[gnu::visibility("hidden")]] void GameStub_152150() {
}

[[gnu::visibility("hidden")]] void GameStub_152160() {
}

[[gnu::visibility("hidden")]] void GameStub_152170() {
}

[[gnu::visibility("hidden")]] void GameStub_152510() {
}

[[gnu::visibility("hidden")]] void GameStub_153040() {
}

[[gnu::visibility("hidden")]] void GameStub_153c90(U64 object) {
  GameRoutine_153b20(object - 0x28);
}

[[gnu::visibility("hidden")]] void GameStub_153ca0(U64 object) {
  GameRoutine_153b20(object - 0x15d8);
}

[[gnu::visibility("hidden")]] void GameStub_153d60() {
}

[[gnu::visibility("hidden")]] void GameStub_154460() {
}

[[gnu::visibility("hidden")]] void GameStub_154890() {
}

[[gnu::visibility("hidden")]] void GameStub_154cb0() {
}

[[gnu::visibility("hidden")]] void GameStub_155030() {
}

[[gnu::visibility("hidden")]] void GameStub_1553b0() {
}

[[gnu::visibility("hidden")]] void GameStub_1558c0() {
}

[[gnu::visibility("hidden")]] void GameStub_155c60() {
}

[[gnu::visibility("hidden")]] void GameStub_156110() {
}

[[gnu::visibility("hidden")]] void GameStub_156570() {
}

[[gnu::visibility("hidden")]] void GameStub_156980() {
}

[[gnu::visibility("hidden")]] void GameStub_156da0() {
  GameRoutine_178ac0();
}

[[gnu::visibility("hidden")]] void GameStub_156db0() {
  GameRoutine_178b80();
}

[[gnu::visibility("hidden")]] void GameStub_15a460() {
}

[[gnu::visibility("hidden")]] U32 GameStub_162ea0() {
  return 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_162eb0() {
  return 0x0;
}

[[gnu::visibility("hidden")]] U32 GameStub_162ec0() {
  return 0xffffffff;
}

[[gnu::visibility("hidden")]] U32 GameStub_162ed0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 GameStub_162ee0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 GameStub_162ef0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 GameStub_162f00() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 GameStub_162f10() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 GameStub_162f20() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 GameStub_162f30() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 GameStub_162f40() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 GameStub_162f50() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 GameStub_162f60() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 GameStub_162f70() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 GameStub_162f80() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 GameStub_162f90() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 GameStub_163060() {
  return 0;
}

[[gnu::visibility("hidden")]] void GameStub_163070() {
}

[[gnu::visibility("hidden")]] U32 GameStub_163080(U64 object) {
  return At<U32>(object, 0x8);
}

[[gnu::visibility("hidden")]] void GameStub_163090() {
}

[[gnu::visibility("hidden")]] void GameStub_1630c0() {
}

[[gnu::visibility("hidden")]] void GameStub_1630d0() {
}

[[gnu::visibility("hidden")]] void GameStub_1630e0() {
}

[[gnu::visibility("hidden")]] float GameStub_1630f0(U64 object) {
  return At<float>(object, 0x28);
}

[[gnu::visibility("hidden")]] void GameStub_163100() {
}

[[gnu::visibility("hidden")]] U32 GameStub_163110(U64 object) {
  return At<U32>(object, 0x2c);
}

[[gnu::visibility("hidden")]] void GameStub_163120(U64 object, U32 value) {
  At<U32>(object, 0x2c) = value;
}

[[gnu::visibility("hidden")]] U8 GameStub_163130(U64 object) {
  return At<U8>(object, 0x30);
}

[[gnu::visibility("hidden")]] void GameStub_164160() {
}

[[gnu::visibility("hidden")]] void GameStub_164170() {
}

[[gnu::visibility("hidden")]] U32 GameStub_164180() {
  return 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_164190() {
  return 0x0;
}

[[gnu::visibility("hidden")]] void GameStub_1641a0() {
}

[[gnu::visibility("hidden")]] U32 GameStub_1641b0() {
  return 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_1641c0() {
  return 0x0;
}

[[gnu::visibility("hidden")]] U32 GameStub_1641d0() {
  return 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_1641e0() {
  return 0x0;
}

[[gnu::visibility("hidden")]] void GameStub_1641f0() {
}

[[gnu::visibility("hidden")]] void GameStub_164200() {
}

[[gnu::visibility("hidden")]] void GameStub_164210() {
}

[[gnu::visibility("hidden")]] void GameStub_164220() {
}

[[gnu::visibility("hidden")]] void GameStub_164230() {
}

[[gnu::visibility("hidden")]] U32 GameStub_164240() {
  return 0;
}

[[gnu::visibility("hidden")]] void GameStub_166e80() {
}

[[gnu::visibility("hidden")]] void GameStub_166e90() {
}

[[gnu::visibility("hidden")]] U32 GameStub_166ea0() {
  return 1;
}

[[gnu::visibility("hidden")]] void GameStub_167850(U64 object) {
  GameRoutine_1679b0(object - 0x28);
}

[[gnu::visibility("hidden")]] void GameStub_1678a0(U64 object) {
  GameRoutine_1679b0(object - 0x15d8);
}

[[gnu::visibility("hidden")]] void GameStub_167a20(U64 object) {
  GameRoutine_1679b0(object - 0x28);
}

[[gnu::visibility("hidden")]] void GameStub_167a30(U64 object) {
  GameRoutine_1679b0(object - 0x15d8);
}

[[gnu::visibility("hidden")]] void GameStub_167c90(U64 object) {
  GameRoutine_1679b0(object - 0x28);
}

[[gnu::visibility("hidden")]] void GameStub_167ce0(U64 object) {
  GameRoutine_1679b0(object - 0x15d8);
}

[[gnu::visibility("hidden")]] void GameStub_167d90() {
  GameRoutine_2af380();
}

[[gnu::visibility("hidden")]] void GameStub_1680f0(U64 object) {
  GameRoutine_1679b0(object - 0x28);
}

[[gnu::visibility("hidden")]] void GameStub_168140(U64 object) {
  GameRoutine_1679b0(object - 0x15d8);
}

[[gnu::visibility("hidden")]] void GameStub_1682a0(U64 object) {
  GameRoutine_1679b0(object - 0x28);
}

[[gnu::visibility("hidden")]] void GameStub_1682f0(U64 object) {
  GameRoutine_1679b0(object - 0x15d8);
}

[[gnu::visibility("hidden")]] void GameStub_1683a0() {
  GameRoutine_2af380();
}

[[gnu::visibility("hidden")]] void GameStub_168700(U64 object) {
  GameRoutine_1679b0(object - 0x28);
}

[[gnu::visibility("hidden")]] void GameStub_168750(U64 object) {
  GameRoutine_1679b0(object - 0x15d8);
}

[[gnu::visibility("hidden")]] void GameStub_1688b0(U64 object) {
  GameRoutine_1679b0(object - 0x28);
}

[[gnu::visibility("hidden")]] void GameStub_168900(U64 object) {
  GameRoutine_1679b0(object - 0x15d8);
}

[[gnu::visibility("hidden")]] void GameStub_1689c0() {
  GameRoutine_2af380();
}

[[gnu::visibility("hidden")]] void GameStub_168d30(U64 object) {
  GameRoutine_1679b0(object - 0x28);
}

[[gnu::visibility("hidden")]] void GameStub_168d80(U64 object) {
  GameRoutine_1679b0(object - 0x15d8);
}

[[gnu::visibility("hidden")]] void GameStub_168ee0(U64 object) {
  GameRoutine_1679b0(object - 0x28);
}

[[gnu::visibility("hidden")]] void GameStub_168f30(U64 object) {
  GameRoutine_1679b0(object - 0x15d8);
}

[[gnu::visibility("hidden")]] void GameStub_168fe0() {
  GameRoutine_2af380();
}

[[gnu::visibility("hidden")]] void GameStub_169440(U64 object) {
  GameRoutine_1679b0(object - 0x28);
}

[[gnu::visibility("hidden")]] void GameStub_169490(U64 object) {
  GameRoutine_1679b0(object - 0x15d8);
}

[[gnu::visibility("hidden")]] void GameStub_16a320(U64 object) {
  GameRoutine_1679b0(object - 0x28);
}

[[gnu::visibility("hidden")]] void GameStub_16a370(U64 object) {
  GameRoutine_1679b0(object - 0x15d8);
}

[[gnu::visibility("hidden")]] void GameStub_16ceb0(U64 object) {
  GameRoutine_1679b0(object - 0x28);
}

[[gnu::visibility("hidden")]] void GameStub_16cf00(U64 object) {
  GameRoutine_1679b0(object - 0x15d8);
}

[[gnu::visibility("hidden")]] U32 GameStub_16dc00() {
  return 0xffffff9c;
}

[[gnu::visibility("hidden")]] void GameStub_16dc20(U64 object) {
  GameRoutine_1679b0(object - 0x28);
}

[[gnu::visibility("hidden")]] void GameStub_16dc70(U64 object) {
  GameRoutine_1679b0(object - 0x15d8);
}

[[gnu::visibility("hidden")]] void GameStub_16dd00() {
  GameRoutine_2af380();
}

[[gnu::visibility("hidden")]] void GameStub_16e170(U64 object) {
  GameRoutine_1679b0(object - 0x28);
}

[[gnu::visibility("hidden")]] void GameStub_16e1c0(U64 object) {
  GameRoutine_1679b0(object - 0x15d8);
}

[[gnu::visibility("hidden")]] void GameStub_16f250(U64 object) {
  GameRoutine_16f0e0(object - 0x28);
}

[[gnu::visibility("hidden")]] void GameStub_16f260(U64 object) {
  GameRoutine_16f0e0(object - 0x15d8);
}

[[gnu::visibility("hidden")]] void GameStub_16f720() {
}

[[gnu::visibility("hidden")]] U32 GameStub_16f730() {
  return 0;
}

[[gnu::visibility("hidden")]] void GameStub_170020(U64 object) {
  GameRoutine_1679b0(object - 0x28);
}

[[gnu::visibility("hidden")]] void GameStub_170070(U64 object) {
  GameRoutine_1679b0(object - 0x15d8);
}

[[gnu::visibility("hidden")]] void GameStub_1733e0(U64 object) {
  GameRoutine_1679b0(object - 0x28);
}

[[gnu::visibility("hidden")]] void GameStub_173430(U64 object) {
  GameRoutine_1679b0(object - 0x15d8);
}

[[gnu::visibility("hidden")]] void GameStub_174110(U64 object) {
  GameRoutine_1679b0(object - 0x28);
}

[[gnu::visibility("hidden")]] void GameStub_174160(U64 object) {
  GameRoutine_1679b0(object - 0x15d8);
}

[[gnu::visibility("hidden")]] void GameStub_1741f0() {
  GameRoutine_2af380();
}

[[gnu::visibility("hidden")]] void GameStub_174590(U64 object) {
  GameRoutine_1679b0(object - 0x28);
}

[[gnu::visibility("hidden")]] void GameStub_1745e0(U64 object) {
  GameRoutine_1679b0(object - 0x15d8);
}

[[gnu::visibility("hidden")]] void GameStub_174670() {
  GameRoutine_2af380();
}

[[gnu::visibility("hidden")]] void GameStub_174b70(U64 object) {
  GameRoutine_1679b0(object - 0x28);
}

[[gnu::visibility("hidden")]] void GameStub_174bc0(U64 object) {
  GameRoutine_1679b0(object - 0x15d8);
}

[[gnu::visibility("hidden")]] void GameStub_175e30(U64 object) {
  GameRoutine_1679b0(object - 0x28);
}

[[gnu::visibility("hidden")]] void GameStub_175e80(U64 object) {
  GameRoutine_1679b0(object - 0x15d8);
}

[[gnu::visibility("hidden")]] void GameStub_176790(U64 object) {
  GameRoutine_1679b0(object - 0x28);
}

[[gnu::visibility("hidden")]] void GameStub_1767e0(U64 object) {
  GameRoutine_1679b0(object - 0x15d8);
}

[[gnu::visibility("hidden")]] void GameStub_176880() {
  GameRoutine_2af380();
}

[[gnu::visibility("hidden")]] void GameStub_1770a0(U64 object) {
  GameRoutine_1679b0(object - 0x28);
}

[[gnu::visibility("hidden")]] void GameStub_1770f0(U64 object) {
  GameRoutine_1679b0(object - 0x15d8);
}

[[gnu::visibility("hidden")]] void GameStub_1774e0(U64 object) {
  GameRoutine_1679b0(object - 0x28);
}

[[gnu::visibility("hidden")]] void GameStub_177530(U64 object) {
  GameRoutine_1679b0(object - 0x15d8);
}

[[gnu::visibility("hidden")]] void GameStub_1789f0(U64 object) {
  GameRoutine_178880(object - 0x28);
}

[[gnu::visibility("hidden")]] void GameStub_178a00(U64 object) {
  GameRoutine_178880(object - 0x15d8);
}

[[gnu::visibility("hidden")]] void GameStub_179980() {
}

[[gnu::visibility("hidden")]] void GameStub_179990() {
}

[[gnu::visibility("hidden")]] void GameStub_1799a0() {
}

[[gnu::visibility("hidden")]] void GameStub_1799b0() {
}

[[gnu::visibility("hidden")]] U32 GameStub_1799c0() {
  return 1;
}

[[gnu::visibility("hidden")]] U64 GameStub_1799d0() {
  return 0x0;
}

[[gnu::visibility("hidden")]] U32 GameStub_1799e0() {
  return 0;
}

[[gnu::visibility("hidden")]] void GameStub_1799f0() {
}

[[gnu::visibility("hidden")]] void GameStub_179a00() {
}

[[gnu::visibility("hidden")]] U32 GameStub_179a10() {
  return 1;
}

[[gnu::visibility("hidden")]] U64 GameStub_179a20() {
  return 0x0;
}

[[gnu::visibility("hidden")]] U32 GameStub_179a30() {
  return 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_179a40() {
  return 0x0;
}

[[gnu::visibility("hidden")]] U64 GameStub_179a50() {
  return 0x0;
}

[[gnu::visibility("hidden")]] void GameStub_179b70(U64 object) {
  GameRoutine_1679b0(object - 0x28);
}

[[gnu::visibility("hidden")]] void GameStub_179bc0(U64 object) {
  GameRoutine_1679b0(object - 0x15d8);
}

[[gnu::visibility("hidden")]] void GameStub_179c80() {
  GameRoutine_2afd50();
}

[[gnu::visibility("hidden")]] U32 GameStub_17a580() {
  return 6;
}

[[gnu::visibility("hidden")]] void GameStub_17be60() {
}

[[gnu::visibility("hidden")]] void GameStub_17ca30() {
}

[[gnu::visibility("hidden")]] void GameStub_17ec00(U64 object) {
  GameRoutine_17eb90(object - 0x15b0);
}

[[gnu::visibility("hidden")]] void GameStub_183040(U64 object, U32 value) {
  At<U32>(object, 0x17c8) = value;
}

[[gnu::visibility("hidden")]] void GameStub_183d60(U64 object) {
  GameRoutine_183be0(object - 0x15b0);
}

[[gnu::visibility("hidden")]] void GameStub_1889a0() {
}

[[gnu::visibility("hidden")]] U32 GameStub_188bf0() {
  return 0;
}

[[gnu::visibility("hidden")]] bool GameStub_188c80(U64 object) {
  return At<U32>(object, 0x48) == 3u;
}

[[gnu::visibility("hidden")]] U32 GameStub_188ea0() {
  return 1;
}

[[gnu::visibility("hidden")]] U8 GameStub_189b20(U64 object) {
  return At<U8>(object, 0x28);
}

[[gnu::visibility("hidden")]] U8 GameStub_189b40(U64 object) {
  return At<U8>(object, 0x2a);
}

[[gnu::visibility("hidden")]] U8 GameStub_189b50(U64 object) {
  return At<U8>(object, 0x2b);
}

[[gnu::visibility("hidden")]] bool GameStub_189b90(U64 object) {
  return At<U64>(object, 0x8) != 0;
}

[[gnu::visibility("hidden")]] void GameStub_189ba0(U64 object) {
  GameRoutine_1a0c020(object + 0x8);
}

[[gnu::visibility("hidden")]] void GameStub_189bb0(U64 object) {
  GameRoutine_1a0c030(object + 0x8);
}

[[gnu::visibility("hidden")]] void GameStub_189bc0(U64 object) {
  GameRoutine_1a0c040(object + 0x8);
}

[[gnu::visibility("hidden")]] void GameStub_189bd0(U64 object) {
  GameRoutine_1a0c050(object + 0x8);
}

[[gnu::visibility("hidden")]] void GameStub_189be0(U64 object) {
  GameRoutine_1a0c060(object + 0x8);
}

[[gnu::visibility("hidden")]] void GameStub_189bf0(U64 object) {
  GameRoutine_1a0c070(object + 0x8);
}

[[gnu::visibility("hidden")]] void GameStub_189c00(U64 object) {
  GameRoutine_1a0c080(object + 0x8);
}

[[gnu::visibility("hidden")]] void GameStub_189c10(U64 object) {
  GameRoutine_1a0c090(object + 0x8);
}

[[gnu::visibility("hidden")]] bool GameStub_189c40(U64 object) {
  return At<U64>(object, 0x8) != 0;
}

[[gnu::visibility("hidden")]] void GameStub_189c50(U64 object) {
  GameRoutine_1a0c0b0(object + 0x8);
}

[[gnu::visibility("hidden")]] void GameStub_189c60(U64 object) {
  GameRoutine_1a0c0c0(object + 0x8);
}

[[gnu::visibility("hidden")]] void GameStub_189c70(U64 object) {
  GameRoutine_1a0c0d0(object + 0x8);
}

[[gnu::visibility("hidden")]] void GameStub_189c80(U64 object) {
  GameRoutine_1a0c0e0(object + 0x8);
}

[[gnu::visibility("hidden")]] void GameStub_189c90(U64 object) {
  GameRoutine_1a0c0f0(object + 0x8);
}

[[gnu::visibility("hidden")]] void GameStub_189ca0(U64 object) {
  GameRoutine_1a0c100(object + 0x8);
}

[[gnu::visibility("hidden")]] bool GameStub_189cf0(U64 object) {
  return At<U64>(object, 0x8) != 0;
}

[[gnu::visibility("hidden")]] void GameStub_189d30(U64 object) {
  GameRoutine_1a0c130(object + 0x8);
}

[[gnu::visibility("hidden")]] void GameStub_189d40(U64 object) {
  GameRoutine_1a0c140(object + 0x8);
}

[[gnu::visibility("hidden")]] void GameStub_189d60(U64 object) {
  GameRoutine_1a0c160(object + 0x8);
}

[[gnu::visibility("hidden")]] void GameStub_189d70(U64 object) {
  GameRoutine_1a0c170(object + 0x8);
}

[[gnu::visibility("hidden")]] void GameStub_189d80(U64 object) {
  GameRoutine_1a0c180(object + 0x8);
}

[[gnu::visibility("hidden")]] void GameStub_189d90(U64 object) {
  GameRoutine_1a0c190(object + 0x8);
}

[[gnu::visibility("hidden")]] void GameStub_189da0() {
}

[[gnu::visibility("hidden")]] bool GameStub_189de0(U64 object) {
  return At<U64>(object, 0x8) != 0;
}

[[gnu::visibility("hidden")]] void GameStub_189e00(U64 object) {
  GameRoutine_1a0c1c0(object + 0x8);
}

[[gnu::visibility("hidden")]] void GameStub_189e10(U64 object) {
  GameRoutine_1a0c1d0(object + 0x8);
}

[[gnu::visibility("hidden")]] void GameStub_189e20(U64 object) {
  GameRoutine_1a0c1e0(object + 0x8);
}

[[gnu::visibility("hidden")]] void GameStub_189e30(U64 object) {
  GameRoutine_1a0c1f0(object + 0x8);
}

[[gnu::visibility("hidden")]] void GameStub_189e40(U64 object) {
  GameRoutine_1a0c200(object + 0x8);
}

[[gnu::visibility("hidden")]] void GameStub_18b500() {
}

[[gnu::visibility("hidden")]] U32 GameStub_18d480(U64 object) {
  return At<U32>(object, 0x19c);
}

[[gnu::visibility("hidden")]] void GameStub_190750() {
}

[[gnu::visibility("hidden")]] U32 GameStub_190760() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_1907e0() {
  return 48000;
}

[[gnu::visibility("hidden")]] U64 GameStub_1907f0() {
  return 0x0;
}

[[gnu::visibility("hidden")]] void GameStub_190820(U64 object) {
  GameRoutine_1679b0(object - 0x28);
}

[[gnu::visibility("hidden")]] void GameStub_190870(U64 object) {
  GameRoutine_1679b0(object - 0x15d8);
}

[[gnu::visibility("hidden")]] void GameStub_190aa0() {
}

[[gnu::visibility("hidden")]] U64 GameStub_194210(U64 object) {
  return At<U64>(object, 0x18);
}

[[gnu::visibility("hidden")]] U64 GameStub_1c33e0() {
  return reinterpret_cast<U64>(GameData_1aaedc4);
}

[[gnu::visibility("hidden")]] U32 GameStub_2633c0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 GameStub_2763e0() {
  return 8;
}

[[gnu::visibility("hidden")]] U64 GameStub_276680() {
  return 0x0;
}

[[gnu::visibility("hidden")]] U32 GameStub_276690() {
  return 0;
}

[[gnu::visibility("hidden")]] void GameStub_2766e0() {
  GameRoutine_2785a0();
}

[[gnu::visibility("hidden")]] U64 GameStub_2769b0() {
  return 0x0;
}

[[gnu::visibility("hidden")]] U32 GameStub_2769c0() {
  return 32;
}

[[gnu::visibility("hidden")]] void GameStub_276c60(U64 object) {
  GameRoutine_276be0(object - 0xd0);
}

[[gnu::visibility("hidden")]] void GameStub_277230(U64 object, U64 value) {
  At<U64>(object, 0x0) = value;
}

[[gnu::visibility("hidden")]] void GameStub_277cf0(U64 object, float value) {
  At<float>(object, 0x60) = value;
}

[[gnu::visibility("hidden")]] void GameStub_277d00(U64 object, float value) {
  At<float>(object, 0x64) = value;
}

[[gnu::visibility("hidden")]] void GameStub_277d10(U64 object, float value) {
  At<float>(object, 0x68) = value;
}

[[gnu::visibility("hidden")]] void GameStub_277d20(U64 object, float value) {
  At<float>(object, 0x70) = value;
}

[[gnu::visibility("hidden")]] void GameStub_277d30(U64 object, float value) {
  At<float>(object, 0x74) = value;
}

[[gnu::visibility("hidden")]] void GameStub_278070(U64 object, U32 value) {
  At<U32>(object, 0x4c) = value;
}

[[gnu::visibility("hidden")]] void GameStub_2780a0() {
}

[[gnu::visibility("hidden")]] void GameStub_2785a0() {
}

[[gnu::visibility("hidden")]] bool GameStub_2785c0(U64 object) {
  return At<U64>(object, 0x8) != 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_278640(U64 object) {
  return GameRoutine_285340(At<U64>(object, 0x8));
}

[[gnu::visibility("hidden")]] U64 GameStub_278650(U64 object) {
  return GameRoutine_285360(At<U64>(object, 0x8));
}

[[gnu::visibility("hidden")]] U64 GameStub_278660(U64 object) {
  return GameRoutine_285380(At<U64>(object, 0x8));
}

[[gnu::visibility("hidden")]] U64 GameStub_278670(U64 object) {
  return GameRoutine_2853a0(At<U64>(object, 0x8));
}

[[gnu::visibility("hidden")]] U64 GameStub_278680(U64 object) {
  return GameRoutine_2853c0(At<U64>(object, 0x8));
}

[[gnu::visibility("hidden")]] U64 GameStub_278bd0(U64 object) {
  return GameRoutine_285cb0(At<U64>(object, 0x8));
}

[[gnu::visibility("hidden")]] U64 GameStub_279010(U64 object) {
  return GameRoutine_285d20(At<U64>(object, 0x8));
}

[[gnu::visibility("hidden")]] void GameStub_279c50(U64 object) {
  GameRoutine_29f1d0(object + 0x210);
}

[[gnu::visibility("hidden")]] void GameStub_279c70() {
  GameRoutine_29f610();
}

[[gnu::visibility("hidden")]] U64 GameStub_27a290(U64 object) {
  return At<U64>(object, 0x8);
}

[[gnu::visibility("hidden")]] void GameStub_27b680(U64 object) {
  GameRoutine_286230(object + 0x18);
}

[[gnu::visibility("hidden")]] void GameStub_27b690(U64 object) {
  GameRoutine_27b680(object - 0x18);
}

[[gnu::visibility("hidden")]] void GameStub_27bd10() {
}

[[gnu::visibility("hidden")]] void GameStub_27c9c0(U64 object, U32 value) {
  At<U32>(object, 0x44) = value;
}

[[gnu::visibility("hidden")]] void GameStub_27e5c0() {
}

[[gnu::visibility("hidden")]] bool GameStub_27f300(U64 object) {
  return At<U64>(object, 0x230) != 0;
}

[[gnu::visibility("hidden")]] void GameStub_27f320() {
  GameRoutine_276af0();
}

[[gnu::visibility("hidden")]] void GameStub_27f360() {
}

[[gnu::visibility("hidden")]] void GameStub_27f430(U64 object) {
  GameRoutine_27f3d0(object - 0xc8);
}

[[gnu::visibility("hidden")]] void GameStub_27f6d0(U64 object, U8 value) {
  At<U8>(object, 0x42) = value;
}

[[gnu::visibility("hidden")]] void GameStub_27fc90(U64 object, U8 value) {
  At<U8>(object, 0x40) = value;
}

[[gnu::visibility("hidden")]] void GameStub_280120() {
  GameRoutine_1a0c2d0();
}

[[gnu::visibility("hidden")]] void GameStub_280680(U64 object, U32 value) {
  At<U32>(object, 0x118) = value;
}

[[gnu::visibility("hidden")]] bool GameStub_280690(U64 object) {
  return At<U64>(object, 0x10) != 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_2806a0(U64 object) {
  return GameRoutine_27bd30(At<U64>(object, 0x10));
}

[[gnu::visibility("hidden")]] bool GameStub_2806b0(U64 object) {
  return At<U64>(object, 0x18) != 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_2806c0(U64 object) {
  return GameRoutine_27bd30(At<U64>(object, 0x18));
}

[[gnu::visibility("hidden")]] void GameStub_281e30(U64 object, U64 value) {
  At<U64>(object, 0x20) = value;
}

[[gnu::visibility("hidden")]] void GameStub_281e50(U64 object, U64 value) {
  At<U64>(object, 0x28) = value;
}

[[gnu::visibility("hidden")]] void GameStub_281e70(U64 object, U64 value) {
  At<U64>(object, 0x30) = value;
}

[[gnu::visibility("hidden")]] void GameStub_2823e0(U64 object, float value) {
  At<float>(object, 0x12c) = value;
}

[[gnu::visibility("hidden")]] void GameStub_2823f0(U64 object, float value) {
  At<float>(object, 0x130) = value;
}

[[gnu::visibility("hidden")]] void GameStub_282420(U64 object, U32 value) {
  At<U32>(object, 0x160) = value;
}

[[gnu::visibility("hidden")]] void GameStub_282430(U64 object, float value) {
  At<float>(object, 0x164) = value;
}

[[gnu::visibility("hidden")]] void GameStub_282440(U64 object, float value) {
  At<float>(object, 0x168) = value;
}

[[gnu::visibility("hidden")]] void GameStub_282450(U64 object, float value) {
  At<float>(object, 0x16c) = value;
}

[[gnu::visibility("hidden")]] void GameStub_282880(U64 object, U64 value) {
  At<U64>(object, 0x38) = value;
}

[[gnu::visibility("hidden")]] bool GameStub_283920(U64 object) {
  return At<U64>(object, 0x0) != 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_283aa0(U64 object) {
  return At<U64>(object, 0x10);
}

[[gnu::visibility("hidden")]] U64 GameStub_283ab0(U64 object) {
  return At<U64>(object, 0x18);
}

[[gnu::visibility("hidden")]] bool GameStub_283b10(U64 object) {
  return At<U64>(object, 0x18) != 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_283c20(U64 object) {
  return At<U64>(object, 0x20);
}

[[gnu::visibility("hidden")]] U64 GameStub_283c30(U64 object) {
  return At<U64>(object, 0x20);
}

[[gnu::visibility("hidden")]] U64 GameStub_283c60(U64 object) {
  return At<U64>(object, 0x20);
}

[[gnu::visibility("hidden")]] bool GameStub_283cd0(U64 object) {
  return At<U64>(object, 0x20) != 0;
}

[[gnu::visibility("hidden")]] bool GameStub_283d50(U64 object) {
  return At<U64>(object, 0x28) != 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_284600(U64 object) {
  return object + At<int32_t>(object, 0x4);
}

[[gnu::visibility("hidden")]] U64 GameStub_284690(U64 object) {
  return object + At<int32_t>(object, 0x2c);
}

[[gnu::visibility("hidden")]] U64 GameStub_2846e0(U64 object) {
  return object + At<int32_t>(object, 0xc);
}

[[gnu::visibility("hidden")]] U64 GameStub_284730(U64 object) {
  return object + At<int32_t>(object, 0x24);
}

[[gnu::visibility("hidden")]] U64 GameStub_284780(U64 object) {
  return object + At<int32_t>(object, 0x1c);
}

[[gnu::visibility("hidden")]] U64 GameStub_2847c0(U64 object) {
  return object + At<int32_t>(object, 0x34);
}

[[gnu::visibility("hidden")]] U64 GameStub_284980(U64 object) {
  return object + At<int32_t>(object, 0x10);
}

[[gnu::visibility("hidden")]] U64 GameStub_284b10(U64 object) {
  return object + At<int32_t>(object, 0x3c);
}

[[gnu::visibility("hidden")]] U64 GameStub_284b20(U64 object) {
  return object + At<int32_t>(object, 0x10);
}

[[gnu::visibility("hidden")]] U64 GameStub_284b30(U64 object) {
  return object + At<int32_t>(object, 0x10);
}

[[gnu::visibility("hidden")]] U64 GameStub_284b40(U64 object) {
  return object + At<int32_t>(object, 0x10);
}

[[gnu::visibility("hidden")]] U64 GameStub_284ff0(U64 object) {
  return object + At<int32_t>(object, 0x14);
}

[[gnu::visibility("hidden")]] U64 GameStub_286200(U64 object) {
  return At<U64>(object, 0x30);
}

[[gnu::visibility("hidden")]] void GameStub_286260(U64 object, U64 value) {
  At<U64>(object, 0x8) = value;
}

[[gnu::visibility("hidden")]] U64 GameStub_289090(U64 object) {
  return object + At<int32_t>(object, 0xc);
}

[[gnu::visibility("hidden")]] void GameStub_289190() {
}

[[gnu::visibility("hidden")]] void GameStub_289fe0(U64 object) {
  GameRoutine_1a0c3a0(object + 0x18);
}

[[gnu::visibility("hidden")]] U64 GameStub_28ad60() {
  return reinterpret_cast<U64>(GameData_219d0cc);
}

[[gnu::visibility("hidden")]] void GameStub_28b220(U64 object) {
  GameRoutine_1a0c440(object + 0x90);
}

[[gnu::visibility("hidden")]] void GameStub_28b750() {
}

[[gnu::visibility("hidden")]] U64 GameStub_28bec0(U64 object) {
  return object + At<int32_t>(object, 0x4);
}

[[gnu::visibility("hidden")]] U64 GameStub_28bed0(U64 object) {
  return object + At<int32_t>(object, 0xc);
}

[[gnu::visibility("hidden")]] void GameStub_28d440() {
}

[[gnu::visibility("hidden")]] bool GameStub_28d8c0(U64 object) {
  return At<U64>(object, 0x230) != 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_28d8d0(U64 object) {
  return GameRoutine_276ac0(At<U64>(object, 0x230));
}

[[gnu::visibility("hidden")]] void GameStub_28db10() {
}

[[gnu::visibility("hidden")]] void GameStub_28dd10(U64 object) {
  GameRoutine_28dca0(object - 0xc8);
}

[[gnu::visibility("hidden")]] void GameStub_28dd20(U64 object) {
  GameRoutine_28dca0(object - 0xe0);
}

[[gnu::visibility("hidden")]] void GameStub_28e3f0() {
  GameRoutine_28dff0();
}

[[gnu::visibility("hidden")]] void GameStub_28e580(U64 object, float value) {
  At<float>(object, 0x100) = value;
}

[[gnu::visibility("hidden")]] void GameStub_28e590(U64 object, U8 value) {
  At<U8>(object, 0x128) = value;
}

[[gnu::visibility("hidden")]] void GameStub_28e5a0(U64 object, U8 value) {
  At<U8>(object, 0xf8) = value;
}

[[gnu::visibility("hidden")]] void GameStub_28ea10(U64 object, float value) {
  At<float>(object, 0xc) = value;
}

[[gnu::visibility("hidden")]] void GameStub_28eaf0(U64 object, float value) {
  At<float>(object, 0x10) = value;
}

[[gnu::visibility("hidden")]] void GameStub_28ebd0(U64 object, float value) {
  At<float>(object, 0x1fc) = value;
}

[[gnu::visibility("hidden")]] void GameStub_28f1f0(U64 object, float value) {
  At<float>(object, 0x18) = value;
}

[[gnu::visibility("hidden")]] void GameStub_28f690(U64 object, float value) {
  At<float>(object, 0x50) = value;
}

[[gnu::visibility("hidden")]] void GameStub_28f770(U64 object, float value) {
  At<float>(object, 0x54) = value;
}

[[gnu::visibility("hidden")]] void GameStub_28f850(U64 object, float value) {
  At<float>(object, 0x58) = value;
}

[[gnu::visibility("hidden")]] void GameStub_28fbd0(U64 object) {
  GameRoutine_28f950(object - 0xc8);
}

[[gnu::visibility("hidden")]] void GameStub_290fa0() {
}

[[gnu::visibility("hidden")]] void GameStub_290fb0() {
  GameRoutine_28fcd0();
}

[[gnu::visibility("hidden")]] void GameStub_290fe0(U64 object) {
  GameRoutine_28fcd0(object - 0xe0);
}

[[gnu::visibility("hidden")]] U64 GameStub_2912d0(U64 object) {
  return At<U64>(object, 0x8);
}

[[gnu::visibility("hidden")]] U64 GameStub_2912e0(U64 object) {
  return GameRoutine_2913a0(At<U64>(object, 0x10));
}

[[gnu::visibility("hidden")]] void GameStub_291520(U64 object) {
  GameRoutine_2914a0(object - 0x18);
}

[[gnu::visibility("hidden")]] void GameStub_291e20() {
}

[[gnu::visibility("hidden")]] void GameStub_291e30() {
}

[[gnu::visibility("hidden")]] void GameStub_293870() {
}

[[gnu::visibility("hidden")]] void GameStub_293b00() {
}

[[gnu::visibility("hidden")]] void GameStub_293bb0() {
}

[[gnu::visibility("hidden")]] void GameStub_293bc0() {
}

[[gnu::visibility("hidden")]] void GameStub_293dd0(U64 object, U8 value) {
  At<U8>(object, 0x8) = value;
}

[[gnu::visibility("hidden")]] void GameStub_294e80(U64 object, U8 value) {
  At<U8>(object, 0x17b) = value;
}

[[gnu::visibility("hidden")]] void GameStub_294e90(U64 object, U8 value) {
  At<U8>(object, 0x1ec) = value;
}

[[gnu::visibility("hidden")]] void GameStub_294ea0(U64 object, U8 value) {
  At<U8>(object, 0x1e8) = value;
}

[[gnu::visibility("hidden")]] void GameStub_294eb0(U64 object, U32 value) {
  At<U32>(object, 0x204) = value;
}

[[gnu::visibility("hidden")]] bool GameStub_2964a0(U64 object) {
  return At<U64>(object, 0x230) != 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_2964b0(U64 object) {
  return GameRoutine_27e140(At<U64>(object, 0x230));
}

[[gnu::visibility("hidden")]] void GameStub_296e80() {
}

[[gnu::visibility("hidden")]] void GameStub_2977e0(U64 object) {
  GameRoutine_297780(object - 0xc8);
}

[[gnu::visibility("hidden")]] void GameStub_29b6f0() {
  GameRoutine_299e80();
}

[[gnu::visibility("hidden")]] void GameStub_29b730(U64 object) {
  GameRoutine_299e80(object - 0xc8);
}

[[gnu::visibility("hidden")]] void GameStub_29e590(U64 object, U64 value) {
  At<U64>(object, 0x28) = value;
}

[[gnu::visibility("hidden")]] bool GameStub_29e5b0(U64 object) {
  return At<U32>(object, 0x18) == 0u;
}

[[gnu::visibility("hidden")]] U64 GameStub_29ec30(U64 object) {
  return object + At<int32_t>(object, 0x10);
}

[[gnu::visibility("hidden")]] void GameStub_29ec40() {
}

[[gnu::visibility("hidden")]] void GameStub_29eca0() {
}

[[gnu::visibility("hidden")]] void GameStub_2a0640() {
}

[[gnu::visibility("hidden")]] void GameStub_2a1960() {
  GameRoutine_2a0650();
}

[[gnu::visibility("hidden")]] void GameStub_2a1dd0() {
}

[[gnu::visibility("hidden")]] void GameStub_2a2000(U64 object) {
  GameRoutine_1a09b70(object + 0x368);
}

[[gnu::visibility("hidden")]] void GameStub_2a2010(U64 object) {
  GameRoutine_1a09b80(object + 0x368);
}

[[gnu::visibility("hidden")]] void GameStub_2a2c10(U64 object) {
  GameRoutine_2b8ee0(object + 0x1a0);
}

[[gnu::visibility("hidden")]] void GameStub_2a2f90() {
}

[[gnu::visibility("hidden")]] void GameStub_2a3510(U64 object, U8 value) {
  At<U8>(object, 0x18) = value;
}

[[gnu::visibility("hidden")]] void GameStub_2a37b0() {
}

[[gnu::visibility("hidden")]] U64 GameStub_2a3ac0(U64 object) {
  return At<U64>(object, 0x10);
}

[[gnu::visibility("hidden")]] void GameStub_2a3d90(U64 object) {
  GameRoutine_2b3fb0(object + 0x18);
}

[[gnu::visibility("hidden")]] U32 GameStub_2a3dd0() {
  return 1;
}

[[gnu::visibility("hidden")]] void GameStub_2a3e60() {
}

[[gnu::visibility("hidden")]] U8 GameStub_2a3e80(U64 object) {
  return At<U8>(object, 0x70);
}

[[gnu::visibility("hidden")]] U64 GameStub_2a3e90() {
  return 0x0;
}

[[gnu::visibility("hidden")]] U64 GameStub_2a3ea0(U64 object) {
  return At<U64>(object, 0x8);
}

[[gnu::visibility("hidden")]] U32 GameStub_2a3eb0() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_2a3ec0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 GameStub_2a3ed0() {
  return 1;
}

[[gnu::visibility("hidden")]] void GameStub_2a3ee0() {
}

[[gnu::visibility("hidden")]] U32 GameStub_2a3ef0() {
  return 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_2a3f00() {
  return 0x0;
}

[[gnu::visibility("hidden")]] void GameStub_2a3f10() {
}

[[gnu::visibility("hidden")]] void GameStub_2a3f30() {
}

[[gnu::visibility("hidden")]] U64 GameStub_2a4000() {
  return 0x0;
}

[[gnu::visibility("hidden")]] U64 GameStub_2a4120(U64 object) {
  return At<U64>(At<U64>(object, 0x8), 0x8);
}

[[gnu::visibility("hidden")]] bool GameStub_2a4ed0(U64 object) {
  return At<U64>(object, 0x8) != 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_2a4ee0() {
  return 0x0;
}

[[gnu::visibility("hidden")]] U64 GameStub_2a4ef0(U64 object) {
  return At<U64>(object, 0x18);
}

[[gnu::visibility("hidden")]] U64 GameStub_2a4f00(U64 object) {
  return At<U64>(object, 0x10);
}

[[gnu::visibility("hidden")]] U32 GameStub_2a4f10() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_2a4f20() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 GameStub_2a4f30() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_2a4f40() {
  return 0x80000000;
}

[[gnu::visibility("hidden")]] void GameStub_2a4f50() {
}

[[gnu::visibility("hidden")]] void GameStub_2a4f60() {
}

[[gnu::visibility("hidden")]] void GameStub_2a4f70() {
}

[[gnu::visibility("hidden")]] U32 GameStub_2a4f80() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 GameStub_2a4f90() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_2a4fa0() {
  return 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_2a4fb0() {
  return 0x0;
}

[[gnu::visibility("hidden")]] U64 GameStub_2a4fc0() {
  return 0x0;
}

[[gnu::visibility("hidden")]] U64 GameStub_2a4fd0() {
  return 0x0;
}

[[gnu::visibility("hidden")]] U32 GameStub_2a5790() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_2a9e00(U64 object) {
  return At<U32>(object, 0x168);
}

[[gnu::visibility("hidden")]] void GameStub_2a9ec0(U64 object, U32 value) {
  At<U32>(object, 0xc0) = value;
}

[[gnu::visibility("hidden")]] void GameStub_2abdf0() {
}

[[gnu::visibility("hidden")]] bool GameStub_2ac540(U64 object) {
  return At<U64>(object, 0x230) != 0;
}

[[gnu::visibility("hidden")]] void GameStub_2ac550() {
}

[[gnu::visibility("hidden")]] void GameStub_2ac820() {
}

[[gnu::visibility("hidden")]] U64 GameStub_2acb00(U64 object) {
  return object + At<int32_t>(object, 0x4);
}

[[gnu::visibility("hidden")]] U64 GameStub_2acb10(U64 object) {
  return object + At<int32_t>(object, 0x4);
}

[[gnu::visibility("hidden")]] void GameStub_2acf90(U64 object) {
  GameRoutine_2acf30(object - 0xc8);
}

[[gnu::visibility("hidden")]] void GameStub_2acfa0(U64 object) {
  GameRoutine_2acf30(object - 0xe0);
}

[[gnu::visibility("hidden")]] void GameStub_2ad590(U64 object, U8 value) {
  At<U8>(object, 0xfa) = value;
}

[[gnu::visibility("hidden")]] void GameStub_2ad5a0(U64 object, U8 value) {
  At<U8>(object, 0xf9) = value;
}

[[gnu::visibility("hidden")]] void GameStub_2adf40() {
  GameRoutine_2ad6d0();
}

[[gnu::visibility("hidden")]] void GameStub_2adf70(U64 object) {
  GameRoutine_2ad6d0(object - 0xe0);
}

[[gnu::visibility("hidden")]] void GameStub_2ae3d0() {
}

[[gnu::visibility("hidden")]] void GameStub_2af380() {
}

[[gnu::visibility("hidden")]] U32 GameStub_2af3a0() {
  return 1;
}

[[gnu::visibility("hidden")]] void GameStub_2af3b0() {
}

[[gnu::visibility("hidden")]] void GameStub_2af3c0() {
}

[[gnu::visibility("hidden")]] void GameStub_2afd50() {
}

[[gnu::visibility("hidden")]] void GameStub_2afd70() {
}

[[gnu::visibility("hidden")]] void GameStub_2afdc0() {
}

[[gnu::visibility("hidden")]] U32 GameStub_2afdd0(U64 object) {
  return At<U32>(object, 0x1c);
}

[[gnu::visibility("hidden")]] void GameStub_2afe00() {
}

[[gnu::visibility("hidden")]] U32 GameStub_2afe10() {
  return 0;
}

[[gnu::visibility("hidden")]] void GameStub_2afe90() {
  GameRoutine_2afd50();
}

[[gnu::visibility("hidden")]] U32 GameStub_2b0860() {
  return 6;
}

[[gnu::visibility("hidden")]] U32 GameStub_2b1620() {
  return 6;
}

[[gnu::visibility("hidden")]] U32 GameStub_2b2020() {
  return 6;
}

[[gnu::visibility("hidden")]] void GameStub_2b20a0() {
  GameRoutine_2afd50();
}

[[gnu::visibility("hidden")]] void GameStub_2b3260() {
}

[[gnu::visibility("hidden")]] void GameStub_2b3510(U64 object) {
  GameRoutine_2b3fb0(object + 0x28);
}

[[gnu::visibility("hidden")]] U32 GameStub_2b39c0() {
  return 1;
}

[[gnu::visibility("hidden")]] void GameStub_2b39d0(U64 object, U64 value) {
  At<U64>(object, 0x78) = value;
}

[[gnu::visibility("hidden")]] void GameStub_2b3a70() {
}

[[gnu::visibility("hidden")]] U64 GameStub_2b3cb0(U64 object) {
  return At<U64>(At<U64>(object, 0x8), 0x20);
}

[[gnu::visibility("hidden")]] void GameStub_2b4a10() {
  GameRoutine_2b4bd0();
}

[[gnu::visibility("hidden")]] void GameStub_2b4b80(U64 object) {
  GameRoutine_1a0b1c0(object + 0x8);
}

[[gnu::visibility("hidden")]] void GameStub_2b4bc0() {
}

[[gnu::visibility("hidden")]] void GameStub_2b4bd0(U64 object) {
  GameRoutine_1a0b1b0(object + 0x8);
}

[[gnu::visibility("hidden")]] U32 GameStub_2b4e00() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_2b4e20(U64 object) {
  return At<U32>(object, 0x54);
}

[[gnu::visibility("hidden")]] U32 GameStub_2b4e40() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_2b7970(U64 object) {
  return At<U32>(object, 0xa8);
}

[[gnu::visibility("hidden")]] void GameStub_2b79c0(U64 object, U8 value) {
  At<U8>(object, 0xf9) = value;
}

[[gnu::visibility("hidden")]] U32 GameStub_2b81c0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 GameStub_2b81e0(U64 object) {
  return At<U32>(object, 0xac);
}

[[gnu::visibility("hidden")]] void GameStub_2b8ee0(U64 object, U8 value) {
  At<U8>(object, 0x30) = value;
}

[[gnu::visibility("hidden")]] void GameStub_2b91e0(U64 object) {
  GameRoutine_2ba070(object + 0x50);
}

[[gnu::visibility("hidden")]] void GameStub_2b91f0(U64 object) {
  GameRoutine_2ba230(object + 0x50);
}

[[gnu::visibility("hidden")]] void GameStub_2b9200(U64 object) {
  GameRoutine_2ba320(object + 0x50);
}

[[gnu::visibility("hidden")]] void GameStub_2b9210(U64 object) {
  GameRoutine_2ba460(object + 0x50);
}

[[gnu::visibility("hidden")]] void GameStub_2b9220(U64 object) {
  GameRoutine_2ba470(object + 0x50);
}

[[gnu::visibility("hidden")]] void GameStub_2b9230(U64 object) {
  GameRoutine_2ba480(object + 0x50);
}

[[gnu::visibility("hidden")]] U32 GameStub_2b9550(U64 object) {
  return At<U32>(object, 0x6c);
}

[[gnu::visibility("hidden")]] U32 GameStub_2b9560(U64 object) {
  return At<U32>(object, 0x88);
}

[[gnu::visibility("hidden")]] U32 GameStub_2b9570(U64 object) {
  return At<U32>(object, 0x70);
}

[[gnu::visibility("hidden")]] void GameStub_2b9ac0(U64 object) {
  GameRoutine_2ba070(object + 0x40);
}

[[gnu::visibility("hidden")]] void GameStub_2b9ad0(U64 object) {
  GameRoutine_2ba230(object + 0x40);
}

[[gnu::visibility("hidden")]] void GameStub_2b9ae0(U64 object) {
  GameRoutine_2ba320(object + 0x40);
}

[[gnu::visibility("hidden")]] void GameStub_2b9af0(U64 object) {
  GameRoutine_2ba460(object + 0x40);
}

[[gnu::visibility("hidden")]] void GameStub_2b9b00(U64 object) {
  GameRoutine_2ba470(object + 0x40);
}

[[gnu::visibility("hidden")]] void GameStub_2b9b10(U64 object) {
  GameRoutine_2ba480(object + 0x40);
}

[[gnu::visibility("hidden")]] U32 GameStub_2b9e20(U64 object) {
  return At<U32>(object, 0x84);
}

[[gnu::visibility("hidden")]] U32 GameStub_2b9e30(U64 object) {
  return At<U32>(object, 0x6c);
}

[[gnu::visibility("hidden")]] U32 GameStub_2b9e40(U64 object) {
  return At<U32>(object, 0x88);
}

[[gnu::visibility("hidden")]] U32 GameStub_2b9e50(U64 object) {
  return At<U32>(object, 0x70);
}

[[gnu::visibility("hidden")]] U8 GameStub_2f74c0(U64 object) {
  return At<U8>(object, 0x18f);
}

[[gnu::visibility("hidden")]] float GameStub_2f7620(U64 object) {
  return At<float>(object, 0x174);
}

[[gnu::visibility("hidden")]] U64 GameStub_2f82f0(U64 object) {
  return At<U64>(object, 0x1b0);
}

[[gnu::visibility("hidden")]] U64 GameStub_2f8300(U64 object) {
  return At<U64>(object, 0x1b8);
}

[[gnu::visibility("hidden")]] void GameStub_386590() {
}

[[gnu::visibility("hidden")]] void GameStub_3b1190() {
  GameRoutine_4763a0();
}

[[gnu::visibility("hidden")]] void GameStub_3b11b0() {
  GameRoutine_474890();
}

[[gnu::visibility("hidden")]] void GameStub_3b11c0() {
  GameRoutine_4744c0();
}

[[gnu::visibility("hidden")]] void GameStub_3b11d0() {
  GameRoutine_467a20();
}

[[gnu::visibility("hidden")]] void GameStub_3b11e0() {
  GameRoutine_453a40();
}

[[gnu::visibility("hidden")]] U32 GameStub_3b11f0() {
  return 0;
}

[[gnu::visibility("hidden")]] void GameStub_3b1200() {
  GameRoutine_474b10();
}

[[gnu::visibility("hidden")]] void GameStub_3b1210() {
  GameRoutine_474e20();
}

[[gnu::visibility("hidden")]] void GameStub_3b1220() {
  GameRoutine_476500();
}

[[gnu::visibility("hidden")]] void GameStub_3b1250() {
  GameRoutine_4685c0();
}

[[gnu::visibility("hidden")]] void GameStub_3b1260() {
  GameRoutine_469d00();
}

[[gnu::visibility("hidden")]] void GameStub_3b1270() {
  GameRoutine_46a220();
}

[[gnu::visibility("hidden")]] void GameStub_3b1280() {
  GameRoutine_453280();
}

[[gnu::visibility("hidden")]] void GameStub_3b1290() {
  GameRoutine_451c80();
}

[[gnu::visibility("hidden")]] void GameStub_3b12a0() {
  GameRoutine_453a40();
}

[[gnu::visibility("hidden")]] void GameStub_3b12b0() {
  GameRoutine_4557f0();
}

[[gnu::visibility("hidden")]] void GameStub_3b12c0() {
  GameRoutine_455f00();
}

[[gnu::visibility("hidden")]] void GameStub_3b12d0() {
  GameRoutine_44fa20();
}

[[gnu::visibility("hidden")]] void GameStub_3b12e0() {
  GameRoutine_4581c0();
}

[[gnu::visibility("hidden")]] void GameStub_3b12f0() {
  GameRoutine_45b340();
}

[[gnu::visibility("hidden")]] void GameStub_3b1300() {
  GameRoutine_45bc10();
}

[[gnu::visibility("hidden")]] void GameStub_3b1310() {
  GameRoutine_45f080();
}

[[gnu::visibility("hidden")]] void GameStub_3b1320() {
  GameRoutine_45f680();
}

[[gnu::visibility("hidden")]] void GameStub_3b1330() {
  GameRoutine_4594f0();
}

[[gnu::visibility("hidden")]] void GameStub_3b1340() {
  GameRoutine_45ada0();
}

[[gnu::visibility("hidden")]] void GameStub_3b1350() {
  GameRoutine_45b4b0();
}

[[gnu::visibility("hidden")]] void GameStub_3b1360() {
  GameRoutine_46dd00();
}

[[gnu::visibility("hidden")]] void GameStub_3b13b0() {
  GameRoutine_467a20();
}

[[gnu::visibility("hidden")]] void GameStub_3b13c0() {
  GameRoutine_4f2460();
}

[[gnu::visibility("hidden")]] void GameStub_3b13d0() {
  GameRoutine_4f40a0();
}

[[gnu::visibility("hidden")]] void GameStub_3b13e0() {
  GameRoutine_4f3060();
}

[[gnu::visibility("hidden")]] void GameStub_3b13f0() {
  GameRoutine_4f7340();
}

[[gnu::visibility("hidden")]] void GameStub_3b1400() {
  GameRoutine_4f0be0();
}

[[gnu::visibility("hidden")]] void GameStub_3b1410() {
  GameRoutine_4f0200();
}

[[gnu::visibility("hidden")]] void GameStub_3b1420() {
  GameRoutine_4685c0();
}

[[gnu::visibility("hidden")]] void GameStub_3b1430() {
  GameRoutine_4f1280();
}

[[gnu::visibility("hidden")]] void GameStub_3b1440() {
  GameRoutine_46a220();
}

[[gnu::visibility("hidden")]] void GameStub_3b1450() {
  GameRoutine_4d9c80();
}

[[gnu::visibility("hidden")]] void GameStub_3b1460() {
  GameRoutine_4d9000();
}

[[gnu::visibility("hidden")]] void GameStub_3b1470() {
  GameRoutine_4da620();
}

[[gnu::visibility("hidden")]] void GameStub_3b1480() {
  GameRoutine_4de000();
}

[[gnu::visibility("hidden")]] void GameStub_3b1490() {
  GameRoutine_4dce40();
}

[[gnu::visibility("hidden")]] void GameStub_3b14a0() {
  GameRoutine_4d3180();
}

[[gnu::visibility("hidden")]] void GameStub_3b14b0() {
  GameRoutine_4d61a0();
}

[[gnu::visibility("hidden")]] void GameStub_3b14c0() {
  GameRoutine_4eba20();
}

[[gnu::visibility("hidden")]] void GameStub_3b14d0() {
  GameRoutine_4ea2d0();
}

[[gnu::visibility("hidden")]] void GameStub_3b14e0() {
  GameRoutine_45f080();
}

[[gnu::visibility("hidden")]] void GameStub_3b14f0() {
  GameRoutine_45f680();
}

[[gnu::visibility("hidden")]] void GameStub_3b1500() {
  GameRoutine_4e2c60();
}

[[gnu::visibility("hidden")]] void GameStub_3b1510() {
  GameRoutine_4eb4e0();
}

[[gnu::visibility("hidden")]] void GameStub_3b1520() {
  GameRoutine_4e9dc0();
}

[[gnu::visibility("hidden")]] void GameStub_3b1530() {
  GameRoutine_46dd00();
}

[[gnu::visibility("hidden")]] U32 GameStub_55b760() {
  return 32;
}

[[gnu::visibility("hidden")]] U32 GameStub_55b9a0() {
  return 48;
}

[[gnu::visibility("hidden")]] void GameStub_55bbf0() {
  GameRoutine_1a0a110();
}

[[gnu::visibility("hidden")]] U32 GameStub_55be10() {
  return 0x100000;
}

[[gnu::visibility("hidden")]] void GameStub_55bec0() {
  GameRoutine_1a0b7f0();
}

[[gnu::visibility("hidden")]] void GameStub_55c120() {
  GameRoutine_1a0cd00();
}

[[gnu::visibility("hidden")]] void GameStub_55c130() {
  GameRoutine_533ef0();
}

[[gnu::visibility("hidden")]] void GameStub_55c140() {
  GameRoutine_54c550();
}

[[gnu::visibility("hidden")]] void GameStub_55c180() {
}

[[gnu::visibility("hidden")]] void GameStub_55c5f0() {
}

[[gnu::visibility("hidden")]] void GameStub_55c640() {
}

[[gnu::visibility("hidden")]] void GameStub_55c7b0(U64 object, U64 value) {
  At<U64>(object, 0xb0) = value;
}

[[gnu::visibility("hidden")]] void GameStub_55d680(U64 object, float value) {
  At<float>(object, 0xbc) = value;
}

[[gnu::visibility("hidden")]] void GameStub_55d850() {
}

[[gnu::visibility("hidden")]] void GameStub_55dd50() {
  GameRoutine_55d6e0();
}

[[gnu::visibility("hidden")]] U32 GameStub_55e0b0() {
  return 3;
}

[[gnu::visibility("hidden")]] U64 GameStub_55f1b0(U64 object) {
  return At<U64>(At<U64>(object, 0x28), 0x88);
}

[[gnu::visibility("hidden")]] U32 GameStub_55f330() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_55fd00(U64 object) {
  return At<U32>(object, 0x58);
}

[[gnu::visibility("hidden")]] U8 GameStub_55fd10(U64 object) {
  return At<U8>(object, 0x40);
}

[[gnu::visibility("hidden")]] void GameStub_55fd20(U64 object, U8 value) {
  At<U8>(object, 0x40) = value;
}

[[gnu::visibility("hidden")]] U64 GameStub_5602f0(U64 object) {
  return At<U64>(At<U64>(object, 0x28), 0x88);
}

[[gnu::visibility("hidden")]] void GameStub_5603a0() {
  GameRoutine_55d6e0();
}

[[gnu::visibility("hidden")]] U32 GameStub_560590(U64 object) {
  return At<U32>(object, 0x18);
}

[[gnu::visibility("hidden")]] U32 GameStub_5605a0(U64 object) {
  return At<U32>(object, 0x1c);
}

[[gnu::visibility("hidden")]] U32 GameStub_5605b0(U64 object) {
  return At<U32>(object, 0x20);
}

[[gnu::visibility("hidden")]] U32 GameStub_5605d0(U64 object) {
  return At<U32>(object, 0x18);
}

[[gnu::visibility("hidden")]] U32 GameStub_5605e0() {
  return 2;
}

[[gnu::visibility("hidden")]] U32 GameStub_5605f0() {
  return 8;
}

[[gnu::visibility("hidden")]] U32 GameStub_560600(U64 object) {
  return At<U32>(object, 0x28);
}

[[gnu::visibility("hidden")]] void GameStub_560620(U64 object, U32 value) {
  At<U32>(object, 0x28) = value;
}

[[gnu::visibility("hidden")]] U32 GameStub_560c60() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_560c70(U64 object) {
  return At<U32>(object, 0x24);
}

[[gnu::visibility("hidden")]] U32 GameStub_560c80(U64 object) {
  return At<U32>(object, 0x1c);
}

[[gnu::visibility("hidden")]] U32 GameStub_560c90(U64 object) {
  return At<U32>(object, 0x18);
}

[[gnu::visibility("hidden")]] void GameStub_560ca0() {
}

[[gnu::visibility("hidden")]] U32 GameStub_560cb0() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_560cc0() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_560cd0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 GameStub_560ce0() {
  return 1;
}

[[gnu::visibility("hidden")]] void GameStub_560d10() {
}

[[gnu::visibility("hidden")]] U32 GameStub_560f30() {
  return 1;
}

[[gnu::visibility("hidden")]] void GameStub_560fc0() {
}

[[gnu::visibility("hidden")]] void GameStub_5612a0() {
}

[[gnu::visibility("hidden")]] void GameStub_5612b0() {
}

[[gnu::visibility("hidden")]] void GameStub_5612c0() {
}

[[gnu::visibility("hidden")]] void GameStub_5612d0() {
}

[[gnu::visibility("hidden")]] void GameStub_5612e0() {
}

[[gnu::visibility("hidden")]] void GameStub_5612f0() {
}

[[gnu::visibility("hidden")]] void GameStub_561300() {
}

[[gnu::visibility("hidden")]] void GameStub_561310() {
}

[[gnu::visibility("hidden")]] void GameStub_561450() {
}

[[gnu::visibility("hidden")]] void GameStub_561730() {
}

[[gnu::visibility("hidden")]] void GameStub_561740() {
}

[[gnu::visibility("hidden")]] void GameStub_561750() {
}

[[gnu::visibility("hidden")]] void GameStub_561760() {
}

[[gnu::visibility("hidden")]] void GameStub_561770() {
}

[[gnu::visibility("hidden")]] void GameStub_561780() {
}

[[gnu::visibility("hidden")]] void GameStub_561790() {
}

[[gnu::visibility("hidden")]] void GameStub_5617a0() {
}

[[gnu::visibility("hidden")]] U64 GameStub_565690() {
  return 0x0;
}

[[gnu::visibility("hidden")]] U64 GameStub_5656a0() {
  return 0x0;
}

[[gnu::visibility("hidden")]] void GameStub_5662e0() {
  GameRoutine_55c180();
}

[[gnu::visibility("hidden")]] U64 GameStub_566350() {
  return reinterpret_cast<U64>(GameData_21a3770);
}

[[gnu::visibility("hidden")]] void GameStub_567cd0() {
  GameRoutine_55c180();
}

[[gnu::visibility("hidden")]] U64 GameStub_567d40() {
  return reinterpret_cast<U64>(GameData_21a3790);
}

[[gnu::visibility("hidden")]] void GameStub_56b550() {
  GameRoutine_58c850();
}

[[gnu::visibility("hidden")]] float GameStub_56b6a0(U64 object) {
  return At<float>(object, 0xd8);
}

[[gnu::visibility("hidden")]] void GameStub_56ce00() {
}

[[gnu::visibility("hidden")]] void GameStub_56e680() {
}

[[gnu::visibility("hidden")]] void GameStub_56e690(U64 object, U8 value) {
  At<U8>(object, 0x24) = value;
}

[[gnu::visibility("hidden")]] void GameStub_573a60(U64 object) {
  GameRoutine_572ae0(object + 0x8);
}

[[gnu::visibility("hidden")]] void GameStub_573a70(U64 object) {
  GameRoutine_572d30(object + 0x8);
}

[[gnu::visibility("hidden")]] void GameStub_573a80(U64 object) {
  GameRoutine_572ec0(object + 0x8);
}

[[gnu::visibility("hidden")]] void GameStub_573a90(U64 object) {
  GameRoutine_573070(object + 0x8);
}

[[gnu::visibility("hidden")]] void GameStub_573e40(U64 object) {
  GameRoutine_59e520(object + 0x108);
}

[[gnu::visibility("hidden")]] void GameStub_575220(U64 object) {
  GameRoutine_59e520(object + 0x28);
}

[[gnu::visibility("hidden")]] U32 GameStub_5752f0() {
  return 1;
}

[[gnu::visibility("hidden")]] void GameStub_576530() {
}

[[gnu::visibility("hidden")]] void GameStub_576540() {
}

[[gnu::visibility("hidden")]] void GameStub_576550() {
}

[[gnu::visibility("hidden")]] void GameStub_576560() {
}

[[gnu::visibility("hidden")]] U64 GameStub_576570() {
  return 0x0;
}

[[gnu::visibility("hidden")]] void GameStub_576580() {
}

[[gnu::visibility("hidden")]] void GameStub_576880() {
}

[[gnu::visibility("hidden")]] void GameStub_576a90() {
}

[[gnu::visibility("hidden")]] U64 GameStub_576b70(U64 object) {
  return At<U64>(object, 0xe8);
}

[[gnu::visibility("hidden")]] U64 GameStub_576b80(U64 object) {
  return At<U64>(object, 0xf0);
}

[[gnu::visibility("hidden")]] void GameStub_576c00() {
}

[[gnu::visibility("hidden")]] void GameStub_576c10() {
}

[[gnu::visibility("hidden")]] void GameStub_579070() {
}

[[gnu::visibility("hidden")]] void GameStub_57b060() {
}

[[gnu::visibility("hidden")]] U64 GameStub_57ce00(U64 object) {
  return GameRoutine_57ce20(At<U64>(object, 0x18));
}

[[gnu::visibility("hidden")]] void GameStub_57d4c0() {
}

[[gnu::visibility("hidden")]] void GameStub_57dd40() {
}

[[gnu::visibility("hidden")]] U32 GameStub_580d20() {
  return 1;
}

[[gnu::visibility("hidden")]] void GameStub_581270() {
  GameRoutine_58c850();
}

[[gnu::visibility("hidden")]] void GameStub_5812b0() {
}

[[gnu::visibility("hidden")]] void GameStub_5812c0() {
}

[[gnu::visibility("hidden")]] void GameStub_5814c0() {
}

[[gnu::visibility("hidden")]] U64 GameStub_582370(U64 object) {
  return At<U64>(object, 0x38);
}

[[gnu::visibility("hidden")]] void GameStub_5827c0() {
}

[[gnu::visibility("hidden")]] U64 GameStub_582b60() {
  return 0x0;
}

[[gnu::visibility("hidden")]] void GameStub_582c80() {
  GameRoutine_56e710();
}

[[gnu::visibility("hidden")]] void GameStub_583fb0() {
  GameRoutine_58c850();
}

[[gnu::visibility("hidden")]] void GameStub_583ff0() {
}

[[gnu::visibility("hidden")]] void GameStub_5847d0() {
  GameRoutine_582c80();
}

[[gnu::visibility("hidden")]] void GameStub_5850c0() {
}

[[gnu::visibility("hidden")]] void GameStub_58c850() {
}

[[gnu::visibility("hidden")]] U32 GameStub_58e0a0() {
  return 0xffffffff;
}

[[gnu::visibility("hidden")]] void GameStub_58e0b0() {
}

[[gnu::visibility("hidden")]] U32 GameStub_58e100() {
  return 255;
}

[[gnu::visibility("hidden")]] void GameStub_58e110() {
}

[[gnu::visibility("hidden")]] void GameStub_58e5c0() {
}

[[gnu::visibility("hidden")]] void GameStub_58e720() {
}

[[gnu::visibility("hidden")]] void GameStub_58f600() {
}

[[gnu::visibility("hidden")]] U32 GameStub_58f900() {
  return 0;
}

[[gnu::visibility("hidden")]] void GameStub_591740() {
}

[[gnu::visibility("hidden")]] void GameStub_591750() {
}

[[gnu::visibility("hidden")]] void GameStub_594690() {
  GameRoutine_58c850();
}

[[gnu::visibility("hidden")]] void GameStub_595030() {
}

[[gnu::visibility("hidden")]] void GameStub_595040() {
}

[[gnu::visibility("hidden")]] bool GameStub_595190(U64 object) {
  return At<U64>(object, 0xd8) != 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_5962d0(U64 object) {
  return GameRoutine_588cc0(At<U64>(object, 0xd8));
}

[[gnu::visibility("hidden")]] U64 GameStub_5962e0(U64 object) {
  return GameRoutine_58c720(At<U64>(object, 0xd8));
}

[[gnu::visibility("hidden")]] void GameStub_597120() {
}

[[gnu::visibility("hidden")]] U64 GameStub_5974b0() {
  return 0x0;
}

[[gnu::visibility("hidden")]] void GameStub_5974c0() {
}

[[gnu::visibility("hidden")]] void GameStub_597520() {
  GameRoutine_58c850();
}

[[gnu::visibility("hidden")]] U32 GameStub_5979c0(U64 object) {
  return At<U32>(At<U64>(object, 0x10), 0x1c);
}

[[gnu::visibility("hidden")]] U64 GameStub_597a30(U64 object) {
  return At<U64>(At<U64>(object, 0x10), 0x88);
}

[[gnu::visibility("hidden")]] U64 GameStub_597a40(U64 object) {
  return At<U64>(At<U64>(object, 0x10), 0x88);
}

[[gnu::visibility("hidden")]] void GameStub_597ac0() {
}

[[gnu::visibility("hidden")]] void GameStub_597ad0() {
}

[[gnu::visibility("hidden")]] void GameStub_599e80() {
}

[[gnu::visibility("hidden")]] void GameStub_599f10() {
}

[[gnu::visibility("hidden")]] void GameStub_599f20() {
}

[[gnu::visibility("hidden")]] void GameStub_59b6a0() {
}

[[gnu::visibility("hidden")]] void GameStub_59b6b0() {
}

[[gnu::visibility("hidden")]] bool GameStub_59b7d0(U64 object) {
  return At<U64>(object, 0x140) != 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_59cc10(U64 object) {
  return GameRoutine_588cc0(At<U64>(object, 0x140));
}

[[gnu::visibility("hidden")]] U64 GameStub_59cc20(U64 object) {
  return GameRoutine_58c720(At<U64>(object, 0x140));
}

[[gnu::visibility("hidden")]] U64 GameStub_59d3b0(U64 object) {
  return At<U64>(object, 0xf0);
}

[[gnu::visibility("hidden")]] void GameStub_59d5f0() {
}

[[gnu::visibility("hidden")]] void GameStub_59e0e0() {
}

[[gnu::visibility("hidden")]] void GameStub_59e0f0() {
}

[[gnu::visibility("hidden")]] U32 GameStub_59ead0(U64 object) {
  return At<U32>(object, 0xd0);
}

[[gnu::visibility("hidden")]] bool GameStub_59eae0(U64 object) {
  return At<U32>(object, 0xd0) != 0u;
}

[[gnu::visibility("hidden")]] U64 GameStub_59eaf0(U64 object) {
  return At<U64>(object, 0x20);
}

[[gnu::visibility("hidden")]] U64 GameStub_59eb00(U64 object) {
  return At<U64>(object, 0x20);
}

[[gnu::visibility("hidden")]] U64 GameStub_59eb10(U64 object) {
  return At<U64>(object, 0x38);
}

[[gnu::visibility("hidden")]] U32 GameStub_59ebd0() {
  return 1;
}

[[gnu::visibility("hidden")]] U64 GameStub_59ebe0() {
  return 0x0;
}

[[gnu::visibility("hidden")]] U64 GameStub_59ebf0() {
  return 0x0;
}

[[gnu::visibility("hidden")]] void GameStub_59ed50() {
  GameRoutine_597d80();
}

[[gnu::visibility("hidden")]] U64 GameStub_59f140(U64 object) {
  return GameRoutine_59f020(At<U64>(object, 0x18));
}

[[gnu::visibility("hidden")]] float GameStub_59fbe0(U64 object) {
  return At<float>(object, 0x2c);
}

[[gnu::visibility("hidden")]] void GameStub_5a1f40() {
  GameRoutine_5b2400();
}

[[gnu::visibility("hidden")]] void GameStub_5a3c10() {
}

[[gnu::visibility("hidden")]] U32 GameStub_5a42a0(U64 object) {
  return At<U32>(At<U64>(object, 0x20), 0x18);
}

[[gnu::visibility("hidden")]] void GameStub_5a4b80() {
}

[[gnu::visibility("hidden")]] void GameStub_5a4bc0() {
}

[[gnu::visibility("hidden")]] void GameStub_5a4bd0() {
}

[[gnu::visibility("hidden")]] void GameStub_5a50f0() {
}

[[gnu::visibility("hidden")]] void GameStub_5a5130() {
}

[[gnu::visibility("hidden")]] void GameStub_5a5140() {
}

[[gnu::visibility("hidden")]] void GameStub_5a5f60() {
}

[[gnu::visibility("hidden")]] void GameStub_5a5fb0() {
}

[[gnu::visibility("hidden")]] U32 GameStub_5a65b0(U64 object) {
  return At<U32>(object, 0x30);
}

[[gnu::visibility("hidden")]] void GameStub_5a6e30() {
}

[[gnu::visibility("hidden")]] void GameStub_5a9850() {
}

[[gnu::visibility("hidden")]] void GameStub_5a9860() {
}

[[gnu::visibility("hidden")]] U32 GameStub_5ae1a0() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_5ae1e0() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_5ae210() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_5ae240() {
  return 1;
}

[[gnu::visibility("hidden")]] void GameStub_5ae250() {
}

[[gnu::visibility("hidden")]] void GameStub_5ae260() {
}

[[gnu::visibility("hidden")]] void GameStub_5ae270() {
}

[[gnu::visibility("hidden")]] void GameStub_5aece0() {
}

[[gnu::visibility("hidden")]] void GameStub_5aecf0() {
}

[[gnu::visibility("hidden")]] U64 GameStub_5afbf0(U64 object) {
  return GameRoutine_588cc0(At<U64>(object, 0x118));
}

[[gnu::visibility("hidden")]] U64 GameStub_5afc00(U64 object) {
  return GameRoutine_58c720(At<U64>(object, 0x118));
}

[[gnu::visibility("hidden")]] void GameStub_5b2400() {
}

[[gnu::visibility("hidden")]] U64 GameStub_5b2420(U64 object) {
  return At<U64>(object, 0x8);
}

[[gnu::visibility("hidden")]] U64 GameStub_5b2430(U64 object) {
  return At<U64>(object, 0x10);
}

[[gnu::visibility("hidden")]] U64 GameStub_5b2470(U64 object) {
  return At<U64>(object, 0x30);
}

[[gnu::visibility("hidden")]] U64 GameStub_5b2480(U64 object) {
  return At<U64>(object, 0x38);
}

[[gnu::visibility("hidden")]] U32 GameStub_5b2490(U64 object) {
  return At<U32>(object, 0x18);
}

[[gnu::visibility("hidden")]] U32 GameStub_5b24a0(U64 object) {
  return At<U32>(object, 0x1c);
}

[[gnu::visibility("hidden")]] U32 GameStub_5b24b0(U64 object) {
  return At<U32>(object, 0x24);
}

[[gnu::visibility("hidden")]] U32 GameStub_5b24c0(U64 object) {
  return At<U32>(object, 0x28);
}

[[gnu::visibility("hidden")]] void GameStub_5b24e0(U64 object, U64 value) {
  At<U64>(object, 0x10) = value;
}

[[gnu::visibility("hidden")]] void GameStub_5b24f0(U64 object, U64 value) {
  At<U64>(object, 0x8) = value;
}

[[gnu::visibility("hidden")]] U32 GameStub_5b2920() {
  return 1;
}

[[gnu::visibility("hidden")]] void GameStub_5b4770(U64 object, U32 value) {
  At<U32>(object, 0x400) = value;
}

[[gnu::visibility("hidden")]] void GameStub_5b6b00(U64 object) {
  GameRoutine_5c57f0(object + 0x118);
}

[[gnu::visibility("hidden")]] void GameStub_5b9980() {
}

[[gnu::visibility("hidden")]] void GameStub_5bd950() {
  GameRoutine_5bc5c0();
}

[[gnu::visibility("hidden")]] void GameStub_5c01a0() {
  GameRoutine_1a09f60();
}

[[gnu::visibility("hidden")]] void GameStub_5c01c0() {
}

[[gnu::visibility("hidden")]] void GameStub_5c02b0() {
}

[[gnu::visibility("hidden")]] void GameStub_5c02c0() {
}

[[gnu::visibility("hidden")]] void GameStub_5c04e0() {
}

[[gnu::visibility("hidden")]] void GameStub_5c04f0() {
}

[[gnu::visibility("hidden")]] U64 GameStub_5c52e0() {
  return reinterpret_cast<U64>(GameData_21664d4);
}

[[gnu::visibility("hidden")]] U32 GameStub_5c7af0(U64 object) {
  return At<U32>(object, 0x10);
}

[[gnu::visibility("hidden")]] U32 GameStub_5c7b00(U64 object) {
  return At<U32>(object, 0x14);
}

[[gnu::visibility("hidden")]] U64 GameStub_5c7b10(U64 object) {
  return At<U64>(object, 0x20);
}

[[gnu::visibility("hidden")]] U64 GameStub_5c7b20(U64 object) {
  return At<U64>(object, 0x28);
}

[[gnu::visibility("hidden")]] U32 GameStub_5c7b50() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_5c7b60() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 GameStub_5c7b70() {
  return 6405;
}

[[gnu::visibility("hidden")]] U32 GameStub_5c7b80() {
  return 2;
}

[[gnu::visibility("hidden")]] U32 GameStub_5c7cd0(U64 object) {
  return At<U32>(At<U64>(object, 0x18), 0x50);
}

[[gnu::visibility("hidden")]] U32 GameStub_5c7ce0(U64 object) {
  return At<U32>(At<U64>(object, 0x28), 0x2c);
}

[[gnu::visibility("hidden")]] U32 GameStub_5c7d80(U64 object) {
  return At<U32>(At<U64>(object, 0x28), 0x28);
}

[[gnu::visibility("hidden")]] U32 GameStub_5ca5a0() {
  return 1;
}

[[gnu::visibility("hidden")]] void GameStub_5db9d0() {
}

[[gnu::visibility("hidden")]] U32 GameStub_5ddcf0() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_5ddd30() {
  return 1;
}

[[gnu::visibility("hidden")]] void GameStub_5de740() {
}

[[gnu::visibility("hidden")]] void GameStub_5df110() {
}

[[gnu::visibility("hidden")]] U64 GameStub_5dfd10() {
  return reinterpret_cast<U64>(GameData_21a3a58);
}

[[gnu::visibility("hidden")]] void GameStub_5e0910() {
}

[[gnu::visibility("hidden")]] void GameStub_5e1fd0() {
}

[[gnu::visibility("hidden")]] U64 GameStub_5e3aa0(U64 object) {
  return GameRoutine_5faea0(At<U64>(object, 0x20));
}

[[gnu::visibility("hidden")]] void GameStub_5fca00() {
}

[[gnu::visibility("hidden")]] void GameStub_5fcb70() {
}

[[gnu::visibility("hidden")]] void GameStub_5fcc30() {
}

[[gnu::visibility("hidden")]] void GameStub_5fe240() {
}

[[gnu::visibility("hidden")]] U32 GameStub_5fe2d0() {
  return 4096;
}

[[gnu::visibility("hidden")]] U32 GameStub_5fe2e0() {
  return 4096;
}

[[gnu::visibility("hidden")]] void GameStub_5fe300() {
}

[[gnu::visibility("hidden")]] void GameStub_5fe410() {
}

[[gnu::visibility("hidden")]] void GameStub_6036c0() {
}

[[gnu::visibility("hidden")]] void GameStub_604050() {
}

[[gnu::visibility("hidden")]] void GameStub_6054b0() {
}

[[gnu::visibility("hidden")]] void GameStub_6056b0() {
}

[[gnu::visibility("hidden")]] U64 GameStub_6056d0(U64 object) {
  return At<U64>(object, 0x0);
}

[[gnu::visibility("hidden")]] void GameStub_605900() {
}

[[gnu::visibility("hidden")]] void GameStub_605c80() {
}

[[gnu::visibility("hidden")]] U64 GameStub_605ca0(U64 object) {
  return At<U64>(object, 0x10);
}

[[gnu::visibility("hidden")]] void GameStub_606010() {
}

[[gnu::visibility("hidden")]] void GameStub_606390() {
}

[[gnu::visibility("hidden")]] void GameStub_606500() {
}

[[gnu::visibility("hidden")]] void GameStub_606680() {
}

[[gnu::visibility("hidden")]] void GameStub_6067a0() {
}

[[gnu::visibility("hidden")]] void GameStub_606880() {
}

[[gnu::visibility("hidden")]] void GameStub_6068a0() {
}

[[gnu::visibility("hidden")]] U32 GameStub_6068c0() {
  return 100;
}

[[gnu::visibility("hidden")]] U32 GameStub_6068d0() {
  return 1;
}

[[gnu::visibility("hidden")]] bool GameStub_606980(U64 object) {
  return At<U64>(object, 0x0) != 0;
}

[[gnu::visibility("hidden")]] void GameStub_606b00() {
}

[[gnu::visibility("hidden")]] void GameStub_606b90() {
  GameRoutine_1a09ba0();
}

[[gnu::visibility("hidden")]] U32 GameStub_606be0() {
  return 0;
}

[[gnu::visibility("hidden")]] void GameStub_606c20() {
}

[[gnu::visibility("hidden")]] U32 GameStub_608eb0() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_608ec0() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_608ed0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 GameStub_608ee0() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_608f40() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 GameStub_60a000() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 GameStub_60a010() {
  return 1;
}

[[gnu::visibility("hidden")]] void GameStub_60a330() {
}

[[gnu::visibility("hidden")]] U32 GameStub_60ab10() {
  return 1;
}

[[gnu::visibility("hidden")]] void GameStub_60bb80() {
  GameRoutine_60b3e0();
}

[[gnu::visibility("hidden")]] void GameStub_617d00() {
  GameRoutine_1a09f60();
}

[[gnu::visibility("hidden")]] U32 GameStub_62ec40() {
  return 0;
}

[[gnu::visibility("hidden")]] void GameStub_62ec50() {
}

[[gnu::visibility("hidden")]] void GameStub_630870() {
}

[[gnu::visibility("hidden")]] U32 GameStub_630c60() {
  return 1;
}

[[gnu::visibility("hidden")]] void GameStub_630c70() {
}

[[gnu::visibility("hidden")]] void GameStub_630c80() {
}

[[gnu::visibility("hidden")]] void GameStub_630c90() {
}

[[gnu::visibility("hidden")]] void GameStub_631160() {
  GameRoutine_6315e0();
}

[[gnu::visibility("hidden")]] U32 GameStub_6313e0() {
  return 1;
}

[[gnu::visibility("hidden")]] void GameStub_631810() {
}

[[gnu::visibility("hidden")]] U32 GameStub_631a80() {
  return 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_648490(U64 object) {
  return GameRoutine_a8f100(At<U64>(object, 0x33a8));
}

[[gnu::visibility("hidden")]] void GameStub_6502e0() {
}

[[gnu::visibility("hidden")]] void GameStub_652060() {
}

[[gnu::visibility("hidden")]] void GameStub_652070() {
}

[[gnu::visibility("hidden")]] void GameStub_652080() {
}

[[gnu::visibility("hidden")]] void GameStub_6547a0() {
}

[[gnu::visibility("hidden")]] void GameStub_654860() {
}

[[gnu::visibility("hidden")]] U64 GameStub_654970() {
  return reinterpret_cast<U64>(GameData_1f8f550);
}

[[gnu::visibility("hidden")]] void GameStub_654a30() {
}

[[gnu::visibility("hidden")]] U64 GameStub_654af0() {
  return reinterpret_cast<U64>(GameData_1f8f5d0);
}

[[gnu::visibility("hidden")]] void GameStub_654b00() {
  GameRoutine_1a09f60();
}

[[gnu::visibility("hidden")]] void GameStub_6565b0() {
  GameRoutine_656110();
}

[[gnu::visibility("hidden")]] void GameStub_6565c0() {
  GameRoutine_6563b0();
}

[[gnu::visibility("hidden")]] U32 GameStub_656db0() {
  return 0;
}

[[gnu::visibility("hidden")]] void GameStub_657440() {
}

[[gnu::visibility("hidden")]] void GameStub_660be0() {
  GameRoutine_65dda0();
}

[[gnu::visibility("hidden")]] void GameStub_660c20() {
  GameRoutine_65f100();
}

[[gnu::visibility("hidden")]] void GameStub_664230() {
}

[[gnu::visibility("hidden")]] void GameStub_664440() {
}

[[gnu::visibility("hidden")]] void GameStub_665f90() {
  GameRoutine_7213b0();
}

[[gnu::visibility("hidden")]] void GameStub_666e70() {
  GameRoutine_666ba0();
}

[[gnu::visibility("hidden")]] void GameStub_667000() {
  GameRoutine_e5fe60();
}

[[gnu::visibility("hidden")]] void GameStub_6673f0() {
}

[[gnu::visibility("hidden")]] void GameStub_6676a0() {
}

[[gnu::visibility("hidden")]] void GameStub_6676b0() {
  GameRoutine_66aae0();
}

[[gnu::visibility("hidden")]] void GameStub_668030() {
}

[[gnu::visibility("hidden")]] U64 GameStub_6680d0() {
  return reinterpret_cast<U64>(GameData_1f90160);
}

[[gnu::visibility("hidden")]] void GameStub_668540() {
}

[[gnu::visibility("hidden")]] void GameStub_668800() {
}

[[gnu::visibility("hidden")]] U64 GameStub_6689d0(U64 object) {
  return GameRoutine_65a020(At<U64>(object, 0x8));
}

[[gnu::visibility("hidden")]] U32 GameStub_66bbd0() {
  return 1;
}

[[gnu::visibility("hidden")]] void GameStub_66bbe0() {
  GameRoutine_66caa0();
}

[[gnu::visibility("hidden")]] void GameStub_66ce20() {
}

[[gnu::visibility("hidden")]] U64 GameStub_66cee0() {
  return reinterpret_cast<U64>(GameData_1f90320);
}

[[gnu::visibility("hidden")]] U32 GameStub_670460() {
  return 0;
}

[[gnu::visibility("hidden")]] void GameStub_670470() {
}

[[gnu::visibility("hidden")]] void GameStub_673f90() {
}

[[gnu::visibility("hidden")]] void GameStub_673fa0() {
}

[[gnu::visibility("hidden")]] U32 GameStub_6740b0() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_6740f0() {
  return 0;
}

[[gnu::visibility("hidden")]] void GameStub_674100() {
}

[[gnu::visibility("hidden")]] void GameStub_6751d0() {
}

[[gnu::visibility("hidden")]] U32 GameStub_6751e0() {
  return 0;
}

[[gnu::visibility("hidden")]] void GameStub_6751f0() {
}

[[gnu::visibility("hidden")]] void GameStub_6755f0() {
}

[[gnu::visibility("hidden")]] U32 GameStub_675600() {
  return 0;
}

[[gnu::visibility("hidden")]] void GameStub_675610() {
}

[[gnu::visibility("hidden")]] void GameStub_676dc0(U64 object) {
  GameRoutine_676460(object - 0x8);
}

[[gnu::visibility("hidden")]] void GameStub_67e6b0() {
}

[[gnu::visibility("hidden")]] void GameStub_6821c0(U64 object) {
  GameRoutine_680040(object - 0x8);
}

[[gnu::visibility("hidden")]] void GameStub_682650() {
  GameRoutine_6821e0();
}

[[gnu::visibility("hidden")]] U64 GameStub_689800() {
  return reinterpret_cast<U64>(GameData_1f90a40);
}

[[gnu::visibility("hidden")]] void GameStub_68d670() {
}

[[gnu::visibility("hidden")]] void GameStub_690070(U64 object) {
  GameRoutine_68f500(object - 0x8);
}

[[gnu::visibility("hidden")]] void GameStub_6bbf10() {
  GameRoutine_6bb360();
}

[[gnu::visibility("hidden")]] void GameStub_6e6af0() {
}

[[gnu::visibility("hidden")]] void GameStub_6e8230() {
}

[[gnu::visibility("hidden")]] void GameStub_6e85e0() {
}

[[gnu::visibility("hidden")]] U64 GameStub_6eb580() {
  return reinterpret_cast<U64>(GameData_1a89065);
}

[[gnu::visibility("hidden")]] U32 GameStub_6eb590() {
  return 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_6eb5a0(U64 object) {
  return GameRoutine_6e9fa0(At<U64>(object, 0x38));
}

[[gnu::visibility("hidden")]] void GameStub_6eb5b0() {
}

[[gnu::visibility("hidden")]] void GameStub_6eed00(U64 object) {
  GameRoutine_6ed9a0(object - 0x8);
}

[[gnu::visibility("hidden")]] void GameStub_703340(U64 object) {
  GameRoutine_6fd360(object - 0x8);
}

[[gnu::visibility("hidden")]] void GameStub_703630() {
  GameRoutine_703360();
}

[[gnu::visibility("hidden")]] void GameStub_708dc0() {
}

[[gnu::visibility("hidden")]] void GameStub_708ef0() {
}

[[gnu::visibility("hidden")]] U64 GameStub_718fd0() {
  return reinterpret_cast<U64>(GameData_1a90b94);
}

[[gnu::visibility("hidden")]] U32 GameStub_718fe0() {
  return 23;
}

[[gnu::visibility("hidden")]] void GameStub_718ff0() {
  GameRoutine_716760();
}

[[gnu::visibility("hidden")]] void GameStub_719000() {
}

[[gnu::visibility("hidden")]] bool GameStub_71bd20(U64 object) {
  return At<U64>(object, 0xa88) == 0;
}

[[gnu::visibility("hidden")]] U32 GameStub_71bd30() {
  return 1;
}

[[gnu::visibility("hidden")]] void GameStub_71da00() {
  GameRoutine_7188e0();
}

[[gnu::visibility("hidden")]] void GameStub_71ec20() {
}

[[gnu::visibility("hidden")]] void GameStub_71f770() {
}

[[gnu::visibility("hidden")]] void GameStub_7241e0() {
}

[[gnu::visibility("hidden")]] void GameStub_724ad0() {
}

[[gnu::visibility("hidden")]] void GameStub_724e50() {
}

[[gnu::visibility("hidden")]] void GameStub_726960() {
  GameRoutine_11944d0();
}

[[gnu::visibility("hidden")]] void GameStub_727020() {
  GameRoutine_80f430();
}

[[gnu::visibility("hidden")]] void GameStub_7286c0() {
}

[[gnu::visibility("hidden")]] void GameStub_7286d0() {
}

[[gnu::visibility("hidden")]] U64 GameStub_7286e0() {
  return reinterpret_cast<U64>(GameData_1a890bc);
}

[[gnu::visibility("hidden")]] U32 GameStub_7286f0() {
  return 0;
}

[[gnu::visibility("hidden")]] void GameStub_728d50(U64 object) {
  GameRoutine_727ca0(object - 0xd0);
}

[[gnu::visibility("hidden")]] U64 GameStub_728dd0() {
  return reinterpret_cast<U64>(GameData_1a890bc);
}

[[gnu::visibility("hidden")]] U32 GameStub_728de0() {
  return 0;
}

[[gnu::visibility("hidden")]] void GameStub_728e10() {
  GameRoutine_728700();
}

[[gnu::visibility("hidden")]] void GameStub_728e20() {
  GameRoutine_728a50();
}

[[gnu::visibility("hidden")]] void GameStub_728e30(U64 object) {
  GameRoutine_727ca0(object - 0xd8);
}

[[gnu::visibility("hidden")]] U32 GameStub_72c550() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 GameStub_72c560() {
  return 0;
}

[[gnu::visibility("hidden")]] void GameStub_72c8e0(U64 object) {
  GameRoutine_72c580(object - 0x8);
}

[[gnu::visibility("hidden")]] void GameStub_72cba0(U64 object) {
  GameRoutine_72c900(object - 0x8);
}

[[gnu::visibility("hidden")]] U64 GameStub_72ce70() {
  return reinterpret_cast<U64>(GameData_1ad2860);
}

[[gnu::visibility("hidden")]] U64 GameStub_72ce80() {
  return reinterpret_cast<U64>(GameData_1ad2860);
}

[[gnu::visibility("hidden")]] void GameStub_72dbe0() {
}

[[gnu::visibility("hidden")]] void GameStub_72dbf0() {
}

[[gnu::visibility("hidden")]] void GameStub_72ead0() {
}

[[gnu::visibility("hidden")]] void GameStub_72fdd0() {
}

[[gnu::visibility("hidden")]] void GameStub_733db0(U64 object) {
  GameRoutine_733b30(object - 0x8);
}

[[gnu::visibility("hidden")]] void GameStub_734ca0() {
}

[[gnu::visibility("hidden")]] void GameStub_739d00() {
  GameRoutine_1670ea0();
}

[[gnu::visibility("hidden")]] void GameStub_73a2f0() {
}

[[gnu::visibility("hidden")]] U32 GameStub_73a400() {
  return 1;
}

[[gnu::visibility("hidden")]] void GameStub_7425b0() {
}

[[gnu::visibility("hidden")]] void GameStub_742c50(U64 object) {
  GameRoutine_742af0(object - 0x98);
}

[[gnu::visibility("hidden")]] U64 GameStub_743340() {
  return reinterpret_cast<U64>(GameData_1f94dc8);
}

[[gnu::visibility("hidden")]] void GameStub_743350() {
}

[[gnu::visibility("hidden")]] void GameStub_743740() {
}

[[gnu::visibility("hidden")]] void GameStub_743750() {
}

[[gnu::visibility("hidden")]] void GameStub_747470() {
}

[[gnu::visibility("hidden")]] void GameStub_74c460() {
}

[[gnu::visibility("hidden")]] void GameStub_74c470() {
}

[[gnu::visibility("hidden")]] U64 GameStub_75cfe0() {
  return reinterpret_cast<U64>(GameData_1f959b8);
}

[[gnu::visibility("hidden")]] void GameStub_75cff0() {
}

[[gnu::visibility("hidden")]] void GameStub_75f1c0() {
  GameRoutine_868190();
}

[[gnu::visibility("hidden")]] void GameStub_75f300() {
  GameRoutine_811140();
}

[[gnu::visibility("hidden")]] U64 GameStub_7620f0(U64 object) {
  return GameRoutine_90fd20(At<U64>(object, 0x8));
}

[[gnu::visibility("hidden")]] void GameStub_7623d0() {
  GameRoutine_80ef70();
}

[[gnu::visibility("hidden")]] U32 GameStub_7623e0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 GameStub_7623f0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 GameStub_762400() {
  return 0;
}

[[gnu::visibility("hidden")]] void GameStub_762410() {
}

[[gnu::visibility("hidden")]] void GameStub_762420() {
}

[[gnu::visibility("hidden")]] void GameStub_7624b0() {
}

[[gnu::visibility("hidden")]] void GameStub_7624c0() {
  GameRoutine_80ef70();
}

[[gnu::visibility("hidden")]] void GameStub_767790() {
}

[[gnu::visibility("hidden")]] void GameStub_767d60() {
}

[[gnu::visibility("hidden")]] U64 GameStub_76e850(U64 object) {
  return GameRoutine_819400(At<U64>(object, 0x98));
}

[[gnu::visibility("hidden")]] U64 GameStub_76e860(U64 object) {
  return GameRoutine_8194d0(At<U64>(object, 0x98));
}

[[gnu::visibility("hidden")]] U64 GameStub_770da0(U64 object) {
  return GameRoutine_81a7a0(At<U64>(object, 0x98));
}

[[gnu::visibility("hidden")]] U64 GameStub_771080() {
  return 0x0;
}

[[gnu::visibility("hidden")]] void GameStub_772580() {
  GameRoutine_18c62f0();
}

[[gnu::visibility("hidden")]] void GameStub_772960() {
  GameRoutine_18c62f0();
}

[[gnu::visibility("hidden")]] U32 GameStub_77bbc0() {
  return 1;
}

[[gnu::visibility("hidden")]] void GameStub_77e920() {
}

[[gnu::visibility("hidden")]] void GameStub_77ed20() {
}

[[gnu::visibility("hidden")]] U64 GameStub_77f7e0() {
  return reinterpret_cast<U64>(GameData_1f978f0);
}

[[gnu::visibility("hidden")]] U64 GameStub_7802a0() {
  return reinterpret_cast<U64>(GameData_1f97970);
}

[[gnu::visibility("hidden")]] void GameStub_780e00() {
}

[[gnu::visibility("hidden")]] U64 GameStub_781370() {
  return reinterpret_cast<U64>(GameData_1f97b70);
}

[[gnu::visibility("hidden")]] U64 GameStub_781740() {
  return reinterpret_cast<U64>(GameData_1f97bf0);
}

[[gnu::visibility("hidden")]] U64 GameStub_781a40() {
  return reinterpret_cast<U64>(GameData_1f97c70);
}

[[gnu::visibility("hidden")]] void GameStub_787880() {
}

[[gnu::visibility("hidden")]] void GameStub_78fea0() {
}

[[gnu::visibility("hidden")]] void GameStub_78feb0(U64 object) {
  GameRoutine_78f680(object - 0xd0);
}

[[gnu::visibility("hidden")]] void GameStub_797fd0() {
}

[[gnu::visibility("hidden")]] void GameStub_797fe0() {
}

[[gnu::visibility("hidden")]] U64 GameStub_7a73d0() {
  return reinterpret_cast<U64>(GameData_1f98b58);
}

[[gnu::visibility("hidden")]] void GameStub_7a7c70() {
}

[[gnu::visibility("hidden")]] U64 GameStub_7ab580() {
  return reinterpret_cast<U64>(GameData_1f98fa8);
}

[[gnu::visibility("hidden")]] U64 GameStub_7ab900() {
  return reinterpret_cast<U64>(GameData_1f99028);
}

[[gnu::visibility("hidden")]] U64 GameStub_7abc80() {
  return reinterpret_cast<U64>(GameData_1f990a8);
}

[[gnu::visibility("hidden")]] U32 GameStub_7ac3a0() {
  return 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_7ac730() {
  return reinterpret_cast<U64>(GameData_1f991a8);
}

[[gnu::visibility("hidden")]] void GameStub_7b00b0() {
  GameRoutine_7b6b80();
}

[[gnu::visibility("hidden")]] void GameStub_7b0210() {
}

[[gnu::visibility("hidden")]] void GameStub_7b4550() {
  GameRoutine_18c62f0();
}

[[gnu::visibility("hidden")]] void GameStub_7b5ac0() {
  GameRoutine_76cbc0();
}

[[gnu::visibility("hidden")]] void GameStub_7b60e0() {
}

[[gnu::visibility("hidden")]] void GameStub_7b7490() {
}

[[gnu::visibility("hidden")]] U64 GameStub_7b92e0() {
  return reinterpret_cast<U64>(GameData_1f997a8);
}

[[gnu::visibility("hidden")]] void GameStub_7b98e0() {
}

[[gnu::visibility("hidden")]] void GameStub_7ba080() {
}

[[gnu::visibility("hidden")]] void GameStub_7ba090() {
}

[[gnu::visibility("hidden")]] void GameStub_7baa70() {
}

[[gnu::visibility("hidden")]] void GameStub_7baba0(U64 object) {
  GameRoutine_7ba1a0(object - 0x98);
}

[[gnu::visibility("hidden")]] void GameStub_7bace0(U64 object) {
  GameRoutine_7b9d30(object - 0xa0);
}

[[gnu::visibility("hidden")]] void GameStub_7bad50() {
}

[[gnu::visibility("hidden")]] void GameStub_7bad60() {
}

[[gnu::visibility("hidden")]] void GameStub_7bafd0() {
  GameRoutine_7bb560();
}

[[gnu::visibility("hidden")]] void GameStub_7bc4a0() {
}

[[gnu::visibility("hidden")]] U64 GameStub_7c1800(U64 object) {
  return GameRoutine_7c23c0(At<U64>(object, 0x1b0));
}

[[gnu::visibility("hidden")]] U64 GameStub_7c1810(U64 object) {
  return GameRoutine_7c23c0(At<U64>(object, 0x10));
}

[[gnu::visibility("hidden")]] void GameStub_7c1820() {
}

[[gnu::visibility("hidden")]] void GameStub_7c1830() {
}

[[gnu::visibility("hidden")]] U64 GameStub_7c1840() {
  return reinterpret_cast<U64>(GameData_1ab38e4);
}

[[gnu::visibility("hidden")]] U64 GameStub_7c1850() {
  return reinterpret_cast<U64>(GameData_1ab38e4);
}

[[gnu::visibility("hidden")]] U32 GameStub_7c1860() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_7c1870() {
  return 1;
}

[[gnu::visibility("hidden")]] U64 GameStub_7c1dc0(U64 object) {
  return GameRoutine_7c1bb0(At<U64>(object, 0x1a8));
}

[[gnu::visibility("hidden")]] void GameStub_7c5d00() {
}

[[gnu::visibility("hidden")]] void GameStub_7c6940() {
}

[[gnu::visibility("hidden")]] void GameStub_7cb3e0() {
}

[[gnu::visibility("hidden")]] U64 GameStub_7cb490() {
  return reinterpret_cast<U64>(GameData_1abb9af);
}

[[gnu::visibility("hidden")]] U64 GameStub_7cb4a0() {
  return reinterpret_cast<U64>(GameData_1abb9af);
}

[[gnu::visibility("hidden")]] U32 GameStub_7cb4b0() {
  return 4;
}

[[gnu::visibility("hidden")]] U32 GameStub_7cb4c0() {
  return 4;
}

[[gnu::visibility("hidden")]] U64 GameStub_7cb970(U64 object) {
  return GameRoutine_7cb620(At<U64>(object, 0x8));
}

[[gnu::visibility("hidden")]] void GameStub_7d4280() {
}

[[gnu::visibility("hidden")]] void GameStub_7d66e0() {
  GameRoutine_7d6320();
}

[[gnu::visibility("hidden")]] void GameStub_7db9c0() {
}

[[gnu::visibility("hidden")]] void GameStub_7db9d0() {
}

[[gnu::visibility("hidden")]] void GameStub_7db9e0() {
}

[[gnu::visibility("hidden")]] void GameStub_7db9f0() {
}

[[gnu::visibility("hidden")]] void GameStub_7dba00() {
}

[[gnu::visibility("hidden")]] void GameStub_7dba10() {
}

[[gnu::visibility("hidden")]] void GameStub_7dba20() {
}

[[gnu::visibility("hidden")]] void GameStub_7dba30() {
}

[[gnu::visibility("hidden")]] void GameStub_7e7010() {
  GameRoutine_7e5900();
}

[[gnu::visibility("hidden")]] void GameStub_7e71f0() {
  GameRoutine_7e7020();
}

[[gnu::visibility("hidden")]] U32 GameStub_7f23e0() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_7f2670() {
  return 1;
}

[[gnu::visibility("hidden")]] void GameStub_7f2ce0() {
}

[[gnu::visibility("hidden")]] void GameStub_7f31c0() {
}

[[gnu::visibility("hidden")]] U64 GameStub_7f6e50() {
  return reinterpret_cast<U64>(GameData_1f9c9c8);
}

[[gnu::visibility("hidden")]] void GameStub_7fb070() {
}

[[gnu::visibility("hidden")]] void GameStub_7fea90() {
}

[[gnu::visibility("hidden")]] void GameStub_809600() {
}

[[gnu::visibility("hidden")]] void GameStub_824700(U64 object) {
  GameRoutine_824380(object - 0x18);
}

[[gnu::visibility("hidden")]] bool GameStub_827060(U64 object) {
  return At<U32>(object, 0x20) != 0u;
}

[[gnu::visibility("hidden")]] void GameStub_830430() {
}

[[gnu::visibility("hidden")]] void GameStub_831270() {
}

[[gnu::visibility("hidden")]] void GameStub_831660() {
}

[[gnu::visibility("hidden")]] void GameStub_833c00() {
}

[[gnu::visibility("hidden")]] void GameStub_834230() {
}

[[gnu::visibility("hidden")]] void GameStub_834970() {
}

[[gnu::visibility("hidden")]] U64 GameStub_836270() {
  return reinterpret_cast<U64>(GameData_1f9f990);
}

[[gnu::visibility("hidden")]] void GameStub_837680() {
}

[[gnu::visibility("hidden")]] void GameStub_837a00() {
}

[[gnu::visibility("hidden")]] void GameStub_838e10() {
  GameRoutine_837e40();
}

[[gnu::visibility("hidden")]] void GameStub_8390d0() {
  GameRoutine_838e20();
}

[[gnu::visibility("hidden")]] void GameStub_83d970() {
  GameRoutine_83d840();
}

[[gnu::visibility("hidden")]] void GameStub_83d980() {
}

[[gnu::visibility("hidden")]] void GameStub_83d990() {
}

[[gnu::visibility("hidden")]] void GameStub_84b460() {
}

[[gnu::visibility("hidden")]] void GameStub_84c290() {
}

[[gnu::visibility("hidden")]] U64 GameStub_857ab0(U64 object) {
  return GameRoutine_6e3d00(At<U64>(object, 0x8));
}

[[gnu::visibility("hidden")]] U64 GameStub_857dc0() {
  return reinterpret_cast<U64>(GameData_1fa10c8);
}

[[gnu::visibility("hidden")]] U64 GameStub_8580a0() {
  return reinterpret_cast<U64>(GameData_1fa1148);
}

[[gnu::visibility("hidden")]] U64 GameStub_858a80() {
  return reinterpret_cast<U64>(GameData_1fa1448);
}

[[gnu::visibility("hidden")]] U64 GameStub_858d50() {
  return reinterpret_cast<U64>(GameData_1fa14c8);
}

[[gnu::visibility("hidden")]] void GameStub_868f30() {
}

[[gnu::visibility("hidden")]] U64 GameStub_86a820() {
  return reinterpret_cast<U64>(GameData_1aed7f8);
}

[[gnu::visibility("hidden")]] U32 GameStub_86a830() {
  return 1;
}

[[gnu::visibility("hidden")]] void GameStub_86a860() {
}

[[gnu::visibility("hidden")]] void GameStub_86d440() {
}

[[gnu::visibility("hidden")]] void GameStub_86d510() {
}

[[gnu::visibility("hidden")]] void GameStub_86f070() {
  GameRoutine_870ea0();
}

[[gnu::visibility("hidden")]] void GameStub_86f2a0() {
  GameRoutine_86fca0();
}

[[gnu::visibility("hidden")]] U64 GameStub_870470(U64, U64 other) {
  return GameRoutine_182bc80(At<U64>(other, 0x0), other);
}

[[gnu::visibility("hidden")]] void GameStub_8733b0(U64 object) {
  GameRoutine_873200(object - 0x420);
}

[[gnu::visibility("hidden")]] U64 GameStub_873f50() {
  return reinterpret_cast<U64>(GameData_1aa476f);
}

[[gnu::visibility("hidden")]] U64 GameStub_8741b0() {
  return reinterpret_cast<U64>(GameData_1aa4780);
}

[[gnu::visibility("hidden")]] U32 GameStub_874400() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 GameStub_8745e0() {
  return 3;
}

[[gnu::visibility("hidden")]] void GameStub_876ca0() {
}

[[gnu::visibility("hidden")]] void GameStub_876cb0() {
}

[[gnu::visibility("hidden")]] void GameStub_876cd0() {
}

[[gnu::visibility("hidden")]] void GameStub_87a8c0() {
}

[[gnu::visibility("hidden")]] U64 GameStub_87ad50(U64 object) {
  return GameRoutine_18d3f20(At<U64>(object, 0x130));
}

[[gnu::visibility("hidden")]] void GameStub_87b6a0() {
}

[[gnu::visibility("hidden")]] void GameStub_87c2f0() {
}

[[gnu::visibility("hidden")]] U32 GameStub_87cec0() {
  return 12;
}

[[gnu::visibility("hidden")]] U32 GameStub_87d320() {
  return 34;
}

[[gnu::visibility("hidden")]] U32 GameStub_87d700() {
  return 33;
}

[[gnu::visibility("hidden")]] void GameStub_87f510() {
  GameRoutine_14ccc60();
}

[[gnu::visibility("hidden")]] void GameStub_884fe0() {
  GameRoutine_14cced0();
}

[[gnu::visibility("hidden")]] void GameStub_885110() {
  GameRoutine_152ae80();
}

[[gnu::visibility("hidden")]] void GameStub_886a80() {
}

[[gnu::visibility("hidden")]] void GameStub_8873c0() {
}

[[gnu::visibility("hidden")]] void GameStub_887470() {
}

[[gnu::visibility("hidden")]] void GameStub_888c00() {
}

[[gnu::visibility("hidden")]] void GameStub_888d20() {
}

[[gnu::visibility("hidden")]] void GameStub_88fe50() {
  GameRoutine_88f100();
}

[[gnu::visibility("hidden")]] void GameStub_890150() {
  GameRoutine_88fe60();
}

[[gnu::visibility("hidden")]] void GameStub_894880() {
}

[[gnu::visibility("hidden")]] void GameStub_8a16b0() {
}

[[gnu::visibility("hidden")]] U64 GameStub_8a1930() {
  return reinterpret_cast<U64>(GameData_1a98d40);
}

[[gnu::visibility("hidden")]] U32 GameStub_8a1940() {
  return 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_8a1950(U64 object) {
  return GameRoutine_89b540(At<U64>(object, 0x10));
}

[[gnu::visibility("hidden")]] void GameStub_8a1960() {
}

[[gnu::visibility("hidden")]] U64 GameStub_8a1970(U64 object) {
  return GameRoutine_89c4e0(At<U64>(object, 0x10));
}

[[gnu::visibility("hidden")]] U64 GameStub_8a1980(U64 object) {
  return GameRoutine_89c760(At<U64>(object, 0x10));
}

[[gnu::visibility("hidden")]] void GameStub_8a9760() {
}

[[gnu::visibility("hidden")]] U64 GameStub_8acbb0() {
  return reinterpret_cast<U64>(GameData_1ade0f3);
}

[[gnu::visibility("hidden")]] U32 GameStub_8acbc0() {
  return 3;
}

[[gnu::visibility("hidden")]] void GameStub_8acc50() {
}

[[gnu::visibility("hidden")]] void GameStub_8ad3a0() {
}

[[gnu::visibility("hidden")]] U64 GameStub_8b31f0() {
  return reinterpret_cast<U64>(GameData_1fa9060);
}

[[gnu::visibility("hidden")]] void GameStub_8b3410() {
}

[[gnu::visibility("hidden")]] U32 GameStub_8b45f0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 GameStub_8b4600() {
  return 0;
}

[[gnu::visibility("hidden")]] void GameStub_8b6bd0() {
}

[[gnu::visibility("hidden")]] void GameStub_8b6cc0() {
}

[[gnu::visibility("hidden")]] void GameStub_8b96d0() {
}

[[gnu::visibility("hidden")]] void GameStub_8bc340() {
}

[[gnu::visibility("hidden")]] void GameStub_8bd720() {
}

[[gnu::visibility("hidden")]] void GameStub_8bdce0() {
}

[[gnu::visibility("hidden")]] void GameStub_8bfa30() {
}

[[gnu::visibility("hidden")]] void GameStub_8c4160() {
}

[[gnu::visibility("hidden")]] void GameStub_8c43d0() {
}

[[gnu::visibility("hidden")]] void GameStub_8c6960() {
}

[[gnu::visibility("hidden")]] void GameStub_8c7770() {
}

[[gnu::visibility("hidden")]] void GameStub_8c7780() {
}

[[gnu::visibility("hidden")]] void GameStub_8c7790() {
}

[[gnu::visibility("hidden")]] void GameStub_8c77a0() {
}

[[gnu::visibility("hidden")]] void GameStub_8c94e0() {
  GameRoutine_8c7ba0();
}

[[gnu::visibility("hidden")]] void GameStub_8c9800() {
  GameRoutine_8c9500();
}

[[gnu::visibility("hidden")]] void GameStub_8ca0a0() {
}

[[gnu::visibility("hidden")]] void GameStub_8ca0b0() {
}

[[gnu::visibility("hidden")]] void GameStub_8ca720() {
}

[[gnu::visibility("hidden")]] void GameStub_8ca730() {
}

[[gnu::visibility("hidden")]] void GameStub_8ca740() {
}

[[gnu::visibility("hidden")]] void GameStub_8ca750() {
}

[[gnu::visibility("hidden")]] void GameStub_8cefb0() {
}

[[gnu::visibility("hidden")]] void GameStub_8e31b0() {
}

[[gnu::visibility("hidden")]] U64 GameStub_8ee660() {
  return reinterpret_cast<U64>(GameData_1acee41);
}

[[gnu::visibility("hidden")]] U64 GameStub_8f2950() {
  return reinterpret_cast<U64>(GameData_1fabf80);
}

[[gnu::visibility("hidden")]] void GameStub_8f32e0() {
}

[[gnu::visibility("hidden")]] U64 GameStub_8f3900() {
  return reinterpret_cast<U64>(GameData_1fac300);
}

[[gnu::visibility("hidden")]] void GameStub_8f61f0() {
}

[[gnu::visibility("hidden")]] void GameStub_8f6410() {
}

[[gnu::visibility("hidden")]] void GameStub_8f6a80() {
}

[[gnu::visibility("hidden")]] U64 GameStub_8f8550() {
  return reinterpret_cast<U64>(GameData_1faca40);
}

[[gnu::visibility("hidden")]] U64 GameStub_8f8910() {
  return reinterpret_cast<U64>(GameData_1facac0);
}

[[gnu::visibility("hidden")]] U64 GameStub_900b10() {
  return reinterpret_cast<U64>(GameData_1facfe0);
}

[[gnu::visibility("hidden")]] void GameStub_901c00() {
  GameRoutine_901640();
}

[[gnu::visibility("hidden")]] bool GameStub_914810(U64 object) {
  return At<U64>(object, 0x28) != 0;
}

[[gnu::visibility("hidden")]] void GameStub_917220() {
  GameRoutine_104e460();
}

[[gnu::visibility("hidden")]] void GameStub_917230() {
  GameRoutine_104e7a0();
}

[[gnu::visibility("hidden")]] void GameStub_917310() {
  GameRoutine_fd3ee0();
}

[[gnu::visibility("hidden")]] U64 GameStub_9189e0() {
  return reinterpret_cast<U64>(GameData_1fad798);
}

[[gnu::visibility("hidden")]] void GameStub_918ee0() {
}

[[gnu::visibility("hidden")]] void GameStub_918ef0() {
}

[[gnu::visibility("hidden")]] void GameStub_918f00() {
}

[[gnu::visibility("hidden")]] void GameStub_918f10() {
}

[[gnu::visibility("hidden")]] void GameStub_918f80() {
}

[[gnu::visibility("hidden")]] U64 GameStub_91afe0(U64 object) {
  return GameRoutine_81a990(At<U64>(object, 0x98));
}

[[gnu::visibility("hidden")]] void GameStub_91b400() {
}

[[gnu::visibility("hidden")]] void GameStub_924990() {
}

[[gnu::visibility("hidden")]] void GameStub_9249a0() {
}

[[gnu::visibility("hidden")]] void GameStub_9249b0() {
}

[[gnu::visibility("hidden")]] void GameStub_9249c0() {
}

[[gnu::visibility("hidden")]] void GameStub_929c00(U64 object) {
  GameRoutine_929080(object + 0xb8);
}

[[gnu::visibility("hidden")]] void GameStub_929c10() {
  GameRoutine_196adf0();
}

[[gnu::visibility("hidden")]] void GameStub_92a760(U64 object) {
  GameRoutine_92a050(object - 0x98);
}

[[gnu::visibility("hidden")]] void GameStub_92a770() {
  GameRoutine_92a360();
}

[[gnu::visibility("hidden")]] void GameStub_92a870(U64 object) {
  GameRoutine_929a00(object + 0x20);
}

[[gnu::visibility("hidden")]] void GameStub_92bee0(U64 object) {
  GameRoutine_92ba80(object - 0x8);
}

[[gnu::visibility("hidden")]] void GameStub_92bef0() {
}

[[gnu::visibility("hidden")]] void GameStub_92bf00() {
}

[[gnu::visibility("hidden")]] U64 GameStub_93acc0() {
  return reinterpret_cast<U64>(GameData_1ae1ffb);
}

[[gnu::visibility("hidden")]] U32 GameStub_93acd0() {
  return 3;
}

[[gnu::visibility("hidden")]] void GameStub_93af10() {
}

[[gnu::visibility("hidden")]] U64 GameStub_93af20(U64 object) {
  return GameRoutine_937fe0(At<U64>(object, 0x10));
}

[[gnu::visibility("hidden")]] U64 GameStub_93e8c0() {
  return reinterpret_cast<U64>(GameData_1aa0a38);
}

[[gnu::visibility("hidden")]] U32 GameStub_93e8d0() {
  return 3;
}

[[gnu::visibility("hidden")]] U64 GameStub_93e8e0(U64 object) {
  return GameRoutine_93bb80(At<U64>(object, 0x10));
}

[[gnu::visibility("hidden")]] void GameStub_93e8f0() {
}

[[gnu::visibility("hidden")]] U64 GameStub_93e900(U64 object) {
  return GameRoutine_93d360(At<U64>(object, 0x10));
}

[[gnu::visibility("hidden")]] void GameStub_941c90() {
}

[[gnu::visibility("hidden")]] void GameStub_941ca0() {
}

[[gnu::visibility("hidden")]] void GameStub_941cb0() {
}

[[gnu::visibility("hidden")]] void GameStub_941cc0() {
}

[[gnu::visibility("hidden")]] void GameStub_9422b0() {
}

[[gnu::visibility("hidden")]] void GameStub_9422c0() {
}

[[gnu::visibility("hidden")]] U64 GameStub_944250() {
  return reinterpret_cast<U64>(GameData_1faf338);
}

[[gnu::visibility("hidden")]] void GameStub_94e4e0() {
}

[[gnu::visibility("hidden")]] void GameStub_94e500(U64 object) {
  GameRoutine_94e540(object + 0x8);
}

[[gnu::visibility("hidden")]] U64 GameStub_94e530() {
  return reinterpret_cast<U64>(GameData_1faf438);
}

[[gnu::visibility("hidden")]] void GameStub_94e710() {
}

[[gnu::visibility("hidden")]] U64 GameStub_94e7c0() {
  return reinterpret_cast<U64>(GameData_1faf4b8);
}

[[gnu::visibility("hidden")]] void GameStub_94ecd0() {
}

[[gnu::visibility("hidden")]] void GameStub_94ef20() {
}

[[gnu::visibility("hidden")]] void GameStub_950380() {
}

[[gnu::visibility("hidden")]] void GameStub_950e70() {
}

[[gnu::visibility("hidden")]] void GameStub_950e80() {
}

[[gnu::visibility("hidden")]] void GameStub_950e90() {
}

[[gnu::visibility("hidden")]] void GameStub_950ea0() {
}

[[gnu::visibility("hidden")]] void GameStub_954540() {
}

[[gnu::visibility("hidden")]] void GameStub_959890() {
  GameRoutine_959600();
}

[[gnu::visibility("hidden")]] void GameStub_9692c0() {
}

[[gnu::visibility("hidden")]] void GameStub_969d30() {
}

[[gnu::visibility("hidden")]] void GameStub_96d2a0() {
}

[[gnu::visibility("hidden")]] void GameStub_96dbf0() {
}

[[gnu::visibility("hidden")]] void GameStub_976770(U64 object) {
  GameRoutine_975c80(object - 0x8);
}

[[gnu::visibility("hidden")]] void GameStub_976780() {
}

[[gnu::visibility("hidden")]] void GameStub_976790() {
}

[[gnu::visibility("hidden")]] void GameStub_977b10() {
}

[[gnu::visibility("hidden")]] void GameStub_97c660() {
}

[[gnu::visibility("hidden")]] void GameStub_97f580() {
  GameRoutine_97f3e0();
}

[[gnu::visibility("hidden")]] void GameStub_991260() {
  GameRoutine_990d60();
}

[[gnu::visibility("hidden")]] void GameStub_991270() {
  GameRoutine_9b0da0();
}

[[gnu::visibility("hidden")]] void GameStub_991280() {
  GameRoutine_9b0da0();
}

[[gnu::visibility("hidden")]] void GameStub_9b2ce0() {
}

[[gnu::visibility("hidden")]] void GameStub_9b4390() {
}

[[gnu::visibility("hidden")]] void GameStub_9b43a0() {
}

[[gnu::visibility("hidden")]] void GameStub_9b43b0() {
}

[[gnu::visibility("hidden")]] void GameStub_9b43c0() {
}

[[gnu::visibility("hidden")]] void GameStub_9b9830() {
}

[[gnu::visibility("hidden")]] U64 GameStub_9bb290() {
  return reinterpret_cast<U64>(GameData_1a9c9a1);
}

[[gnu::visibility("hidden")]] U64 GameStub_9bb2a0() {
  return reinterpret_cast<U64>(GameData_1ade232);
}

[[gnu::visibility("hidden")]] U64 GameStub_9bb360() {
  return reinterpret_cast<U64>(GameData_1aac216);
}

[[gnu::visibility("hidden")]] U32 GameStub_9bb430() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_9bb440() {
  return 9;
}

[[gnu::visibility("hidden")]] U32 GameStub_9bb450() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 GameStub_9bb460() {
  return 1;
}

[[gnu::visibility("hidden")]] U64 GameStub_9bb470() {
  return reinterpret_cast<U64>(GameData_1aa861e);
}

[[gnu::visibility("hidden")]] U64 GameStub_9bb480() {
  return 0x0;
}

[[gnu::visibility("hidden")]] U32 GameStub_9bb490() {
  return 9;
}

[[gnu::visibility("hidden")]] U64 GameStub_9bb4a0() {
  return reinterpret_cast<U64>(GameData_1aa861e);
}

[[gnu::visibility("hidden")]] U64 GameStub_9bb4b0() {
  return 0x0;
}

[[gnu::visibility("hidden")]] U32 GameStub_9bb4c0() {
  return 0;
}

[[gnu::visibility("hidden")]] void GameStub_9bb4d0() {
}

[[gnu::visibility("hidden")]] U32 GameStub_9bb4e0() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_9bb9d0() {
  return 3;
}

[[gnu::visibility("hidden")]] void GameStub_9bba10() {
}

[[gnu::visibility("hidden")]] U32 GameStub_9bbec0() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 GameStub_9bc6a0() {
  return 3;
}

[[gnu::visibility("hidden")]] void GameStub_9bfe40(U64 object) {
  GameRoutine_9bfbc0(object - 0x420);
}

[[gnu::visibility("hidden")]] void GameStub_9bffb0() {
}

[[gnu::visibility("hidden")]] void GameStub_9c0280() {
}

[[gnu::visibility("hidden")]] void GameStub_9c1900(U64 object) {
  GameRoutine_9c1550(object - 0x60);
}

[[gnu::visibility("hidden")]] void GameStub_9c2050(U64 object) {
  GameRoutine_9c1920(object - 0x60);
}

[[gnu::visibility("hidden")]] void GameStub_9c2400(U64 object) {
  GameRoutine_9c2060(object - 0x60);
}

[[gnu::visibility("hidden")]] void GameStub_9c24e0(U64 object) {
  GameRoutine_9c2410(object - 0x60);
}

[[gnu::visibility("hidden")]] U64 GameStub_9c24f0() {
  return reinterpret_cast<U64>(GameData_1ada68f);
}

[[gnu::visibility("hidden")]] U64 GameStub_9c2500() {
  return reinterpret_cast<U64>(GameData_1ada68f);
}

[[gnu::visibility("hidden")]] U64 GameStub_9c2510() {
  return reinterpret_cast<U64>(GameData_1af52e1);
}

[[gnu::visibility("hidden")]] U64 GameStub_9c2520() {
  return reinterpret_cast<U64>(GameData_1af52e1);
}

[[gnu::visibility("hidden")]] U32 GameStub_9c2cb0() {
  return 1;
}

[[gnu::visibility("hidden")]] U64 GameStub_9c2cf0() {
  return 0x0;
}

[[gnu::visibility("hidden")]] U64 GameStub_9c2d00() {
  return 0x0;
}

[[gnu::visibility("hidden")]] void GameStub_9c3cb0() {
}

[[gnu::visibility("hidden")]] void GameStub_9c3df0() {
}

[[gnu::visibility("hidden")]] void GameStub_9c5c80(U64 object) {
  GameRoutine_9c5a90(object - 0x420);
}

[[gnu::visibility("hidden")]] void GameStub_9c6340() {
  GameRoutine_9c6240();
}

[[gnu::visibility("hidden")]] void GameStub_9cb370() {
  GameRoutine_9cac00();
}

[[gnu::visibility("hidden")]] U32 GameStub_9cf990() {
  return 1;
}

[[gnu::visibility("hidden")]] U64 GameStub_9cf9a0() {
  return reinterpret_cast<U64>(GameData_1abbd47);
}

[[gnu::visibility("hidden")]] U64 GameStub_9cfe20() {
  return reinterpret_cast<U64>(GameData_1a94e63);
}

[[gnu::visibility("hidden")]] U32 GameStub_9cffe0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 GameStub_9cfff0() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_9d0570() {
  return 1;
}

[[gnu::visibility("hidden")]] U64 GameStub_9d0580() {
  return reinterpret_cast<U64>(GameData_1ab7f3b);
}

[[gnu::visibility("hidden")]] U32 GameStub_9d05a0() {
  return 8;
}

[[gnu::visibility("hidden")]] U32 GameStub_9d05b0() {
  return 1;
}

[[gnu::visibility("hidden")]] U64 GameStub_9d05d0() {
  return reinterpret_cast<U64>(GameData_1a94e63);
}

[[gnu::visibility("hidden")]] U64 GameStub_9d05e0() {
  return reinterpret_cast<U64>(GameData_1ab7f3b);
}

[[gnu::visibility("hidden")]] U32 GameStub_9d05f0() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_9d0600() {
  return 8;
}

[[gnu::visibility("hidden")]] void GameStub_9d0610(U64 object) {
  GameRoutine_9cfe30(object - 0x420);
}

[[gnu::visibility("hidden")]] void GameStub_9d08a0() {
}

[[gnu::visibility("hidden")]] U64 GameStub_9d0940() {
  return reinterpret_cast<U64>(GameData_1fb77e0);
}

[[gnu::visibility("hidden")]] U32 GameStub_9d0b80() {
  return 3;
}

[[gnu::visibility("hidden")]] void GameStub_9d17b0() {
}

[[gnu::visibility("hidden")]] U64 GameStub_9d1850() {
  return reinterpret_cast<U64>(GameData_1fb7bc8);
}

[[gnu::visibility("hidden")]] U32 GameStub_9d1b00() {
  return 3;
}

[[gnu::visibility("hidden")]] void GameStub_9d49c0() {
}

[[gnu::visibility("hidden")]] U32 GameStub_9d4be0() {
  return 3;
}

[[gnu::visibility("hidden")]] void GameStub_9d6850() {
}

[[gnu::visibility("hidden")]] void GameStub_9d6860() {
}

[[gnu::visibility("hidden")]] void GameStub_9d6870() {
}

[[gnu::visibility("hidden")]] void GameStub_9d6880() {
}

[[gnu::visibility("hidden")]] void GameStub_9dcaa0() {
  GameRoutine_9dc5a0();
}

[[gnu::visibility("hidden")]] void GameStub_9dce00() {
  GameRoutine_9dcac0();
}

[[gnu::visibility("hidden")]] void GameStub_9e10d0() {
}

[[gnu::visibility("hidden")]] void GameStub_9e9440() {
  GameRoutine_9e8160();
}

[[gnu::visibility("hidden")]] void GameStub_9ec040() {
  GameRoutine_9e9960();
}

[[gnu::visibility("hidden")]] void GameStub_9ec480() {
  GameRoutine_9ec060();
}

[[gnu::visibility("hidden")]] void GameStub_9ec6e0() {
  GameRoutine_9ec4a0();
}

[[gnu::visibility("hidden")]] void GameStub_9ed220() {
  GameRoutine_9ec9c0();
}

[[gnu::visibility("hidden")]] void GameStub_9f4470() {
}

[[gnu::visibility("hidden")]] void GameStub_9ff880() {
  GameRoutine_9feea0();
}

[[gnu::visibility("hidden")]] void GameStub_a03ac0() {
}

[[gnu::visibility("hidden")]] void GameStub_a03ad0() {
}

[[gnu::visibility("hidden")]] U64 GameStub_a09d30() {
  return reinterpret_cast<U64>(GameData_1a89387);
}

[[gnu::visibility("hidden")]] U64 GameStub_a09d40() {
  return reinterpret_cast<U64>(GameData_1ae2188);
}

[[gnu::visibility("hidden")]] U64 GameStub_a0a030() {
  return reinterpret_cast<U64>(GameData_1afd013);
}

[[gnu::visibility("hidden")]] U64 GameStub_a0a2a0() {
  return reinterpret_cast<U64>(GameData_1a9f09e);
}

[[gnu::visibility("hidden")]] void GameStub_a0a5c0() {
}

[[gnu::visibility("hidden")]] void GameStub_a0a6e0() {
}

[[gnu::visibility("hidden")]] U64 GameStub_a0a950() {
  return reinterpret_cast<U64>(GameData_1a89387);
}

[[gnu::visibility("hidden")]] U64 GameStub_a0a960() {
  return reinterpret_cast<U64>(GameData_1ae2188);
}

[[gnu::visibility("hidden")]] U64 GameStub_a0ac40() {
  return reinterpret_cast<U64>(GameData_1ae99f4);
}

[[gnu::visibility("hidden")]] U64 GameStub_a0af10() {
  return reinterpret_cast<U64>(GameData_1a9f09e);
}

[[gnu::visibility("hidden")]] void GameStub_a0b230() {
}

[[gnu::visibility("hidden")]] void GameStub_a0b350() {
}

[[gnu::visibility("hidden")]] U32 GameStub_a0dc40() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 GameStub_a0dc50() {
  return 0;
}

[[gnu::visibility("hidden")]] void GameStub_a0ea40(U64 object) {
  GameRoutine_1495040(object - 0x98);
}

[[gnu::visibility("hidden")]] U32 GameStub_a0eab0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 GameStub_a0eac0() {
  return 0;
}

[[gnu::visibility("hidden")]] void GameStub_a0ead0() {
}

[[gnu::visibility("hidden")]] void GameStub_a0eae0() {
}

[[gnu::visibility("hidden")]] void GameStub_a0f1d0(U64 object) {
  GameRoutine_a0ecc0(object - 0x98);
}

[[gnu::visibility("hidden")]] bool GameStub_a0f990(U64 object) {
  return At<U64>(object, 0x40) != 0;
}

[[gnu::visibility("hidden")]] U32 GameStub_a193f0() {
  return 1;
}

[[gnu::visibility("hidden")]] void GameStub_a19430() {
}

[[gnu::visibility("hidden")]] U64 GameStub_a1c2c0() {
  return 0x0;
}

[[gnu::visibility("hidden")]] U64 GameStub_a1c2d0() {
  return 0x0;
}

[[gnu::visibility("hidden")]] U32 GameStub_a1c310() {
  return 48;
}

[[gnu::visibility("hidden")]] U32 GameStub_a1c320() {
  return 1024;
}

[[gnu::visibility("hidden")]] U32 GameStub_a1c330() {
  return 1024;
}

[[gnu::visibility("hidden")]] U32 GameStub_a1c340() {
  return 128;
}

[[gnu::visibility("hidden")]] U32 GameStub_a1c350() {
  return 2048;
}

[[gnu::visibility("hidden")]] U32 GameStub_a1e790() {
  return 1024;
}

[[gnu::visibility("hidden")]] U32 GameStub_a1e7a0() {
  return 8;
}

[[gnu::visibility("hidden")]] U32 GameStub_a1e7b0() {
  return 32;
}

[[gnu::visibility("hidden")]] U32 GameStub_a1e7c0() {
  return 32;
}

[[gnu::visibility("hidden")]] U32 GameStub_a1e7d0() {
  return 8;
}

[[gnu::visibility("hidden")]] void GameStub_a1efd0() {
  GameRoutine_1a09b80();
}

[[gnu::visibility("hidden")]] void GameStub_a376f0() {
}

[[gnu::visibility("hidden")]] void GameStub_a38980() {
}

[[gnu::visibility("hidden")]] U8 GameStub_a39600(U64 object) {
  return At<U8>(object, 0x5e);
}

[[gnu::visibility("hidden")]] void GameStub_a3a130() {
}

[[gnu::visibility("hidden")]] void GameStub_a3a140() {
}

[[gnu::visibility("hidden")]] void GameStub_a3a1c0() {
}

[[gnu::visibility("hidden")]] void GameStub_a3a1d0() {
}

[[gnu::visibility("hidden")]] U32 GameStub_a3a1e0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 GameStub_a3a1f0() {
  return 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_a3a200() {
  return 0x0;
}

[[gnu::visibility("hidden")]] void GameStub_a3a210() {
}

[[gnu::visibility("hidden")]] U32 GameStub_a3a250() {
  return 8;
}

[[gnu::visibility("hidden")]] void GameStub_a3ab50() {
}

[[gnu::visibility("hidden")]] void GameStub_a3ab60() {
}

[[gnu::visibility("hidden")]] void GameStub_a3ab70(U64 object, float value) {
  At<float>(object, 0x10) = value;
}

[[gnu::visibility("hidden")]] void GameStub_a3ab80(U64 object, float value) {
  At<float>(object, 0x14) = value;
}

[[gnu::visibility("hidden")]] void GameStub_a3ab90(U64 object, float value) {
  At<float>(object, 0x18) = value;
}

[[gnu::visibility("hidden")]] void GameStub_a3b650() {
}

[[gnu::visibility("hidden")]] void GameStub_a3b710() {
}

[[gnu::visibility("hidden")]] void GameStub_a3b780() {
}

[[gnu::visibility("hidden")]] void GameStub_a47140() {
}

[[gnu::visibility("hidden")]] void GameStub_a472d0() {
}

[[gnu::visibility("hidden")]] U64 GameStub_a48d10(U64 object) {
  return At<U64>(object, 0x10);
}

[[gnu::visibility("hidden")]] U64 GameStub_a48d20(U64 object) {
  return At<U64>(object, 0x18);
}

[[gnu::visibility("hidden")]] U8 GameStub_a48d30(U64 object) {
  return At<U8>(object, 0x41);
}

[[gnu::visibility("hidden")]] void GameStub_a48d40() {
}

[[gnu::visibility("hidden")]] U32 GameStub_a494e0() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_a494f0() {
  return 1;
}

[[gnu::visibility("hidden")]] void GameStub_a49f00() {
}

[[gnu::visibility("hidden")]] U64 GameStub_a49f60() {
  return reinterpret_cast<U64>(GameData_1fbf6f8);
}

[[gnu::visibility("hidden")]] void GameStub_a4b3b0() {
}

[[gnu::visibility("hidden")]] void GameStub_a52e30() {
}

[[gnu::visibility("hidden")]] U64 GameStub_a52f30() {
  return reinterpret_cast<U64>(GameData_1fbfb30);
}

[[gnu::visibility("hidden")]] U32 GameStub_a53400() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_a539b0() {
  return 1;
}

[[gnu::visibility("hidden")]] U64 GameStub_a5a220() {
  return reinterpret_cast<U64>(GameData_1aedae6);
}

[[gnu::visibility("hidden")]] void GameStub_a5deb0() {
}

[[gnu::visibility("hidden")]] U64 GameStub_a5ef00() {
  return reinterpret_cast<U64>(GameData_1acf183);
}

[[gnu::visibility("hidden")]] void GameStub_a610f0() {
}

[[gnu::visibility("hidden")]] void GameStub_a61100() {
}

[[gnu::visibility("hidden")]] void GameStub_a61110() {
}

[[gnu::visibility("hidden")]] void GameStub_a61120() {
}

[[gnu::visibility("hidden")]] void GameStub_a61130() {
}

[[gnu::visibility("hidden")]] void GameStub_a61530() {
}

[[gnu::visibility("hidden")]] U64 GameStub_a619b0(U64 object) {
  return GameRoutine_a619c0(At<U64>(object, 0x8));
}

[[gnu::visibility("hidden")]] void GameStub_a67230() {
}

[[gnu::visibility("hidden")]] void GameStub_a697d0() {
}

[[gnu::visibility("hidden")]] void GameStub_a71c00() {
}

[[gnu::visibility("hidden")]] void GameStub_a71cf0() {
}

[[gnu::visibility("hidden")]] void GameStub_a71d00() {
}

[[gnu::visibility("hidden")]] void GameStub_a72140() {
}

[[gnu::visibility("hidden")]] U64 GameStub_a79c50() {
  return reinterpret_cast<U64>(GameData_1fc0848);
}

[[gnu::visibility("hidden")]] void GameStub_a79da0() {
}

[[gnu::visibility("hidden")]] U64 GameStub_a89020() {
  return reinterpret_cast<U64>(GameData_1fc0d88);
}

[[gnu::visibility("hidden")]] void GameStub_a91760() {
}

[[gnu::visibility("hidden")]] U64 GameStub_a93490(U64 object) {
  return GameRoutine_a929a0(At<U64>(object, 0x8));
}

[[gnu::visibility("hidden")]] void GameStub_a95cb0() {
}

[[gnu::visibility("hidden")]] void GameStub_a95d60() {
}

[[gnu::visibility("hidden")]] void GameStub_a95da0() {
}

[[gnu::visibility("hidden")]] void GameStub_a95e50() {
}

[[gnu::visibility("hidden")]] void GameStub_ad43a0() {
}

[[gnu::visibility("hidden")]] U64 GameStub_adbc90() {
  return reinterpret_cast<U64>(GameData_1fc2778);
}

[[gnu::visibility("hidden")]] U64 GameStub_adbf40() {
  return reinterpret_cast<U64>(GameData_1fc27f8);
}

[[gnu::visibility("hidden")]] U64 GameStub_adc1f0() {
  return reinterpret_cast<U64>(GameData_1fc2878);
}

[[gnu::visibility("hidden")]] void GameStub_ae14b0() {
}

[[gnu::visibility("hidden")]] void GameStub_ae14c0() {
}

[[gnu::visibility("hidden")]] void GameStub_ae14d0() {
}

[[gnu::visibility("hidden")]] void GameStub_ae14e0() {
}

[[gnu::visibility("hidden")]] void GameStub_ae1b80() {
}

[[gnu::visibility("hidden")]] void GameStub_ae1b90() {
}

[[gnu::visibility("hidden")]] void GameStub_ae1ba0() {
}

[[gnu::visibility("hidden")]] void GameStub_ae1bb0() {
}

[[gnu::visibility("hidden")]] void GameStub_ae1f90() {
}

[[gnu::visibility("hidden")]] void GameStub_ae1fa0() {
}

[[gnu::visibility("hidden")]] void GameStub_ae1fb0() {
}

[[gnu::visibility("hidden")]] void GameStub_ae1fc0() {
}

[[gnu::visibility("hidden")]] void GameStub_ae2460() {
}

[[gnu::visibility("hidden")]] void GameStub_ae2470() {
}

[[gnu::visibility("hidden")]] void GameStub_ae2480() {
}

[[gnu::visibility("hidden")]] void GameStub_ae2490() {
}

[[gnu::visibility("hidden")]] void GameStub_ae2780() {
}

[[gnu::visibility("hidden")]] void GameStub_ae2790() {
}

[[gnu::visibility("hidden")]] void GameStub_ae27a0() {
}

[[gnu::visibility("hidden")]] void GameStub_ae27b0() {
}

[[gnu::visibility("hidden")]] void GameStub_ae32d0() {
  GameRoutine_ae29c0();
}

[[gnu::visibility("hidden")]] void GameStub_ae3790() {
}

[[gnu::visibility("hidden")]] void GameStub_ae37a0() {
}

[[gnu::visibility("hidden")]] void GameStub_ae37b0() {
}

[[gnu::visibility("hidden")]] void GameStub_ae37c0() {
}

[[gnu::visibility("hidden")]] void GameStub_ae3970() {
}

[[gnu::visibility("hidden")]] void GameStub_ae3980() {
}

[[gnu::visibility("hidden")]] void GameStub_ae3990() {
}

[[gnu::visibility("hidden")]] void GameStub_ae39a0() {
}

[[gnu::visibility("hidden")]] void GameStub_aef830() {
}

[[gnu::visibility("hidden")]] void GameStub_aef840() {
}

[[gnu::visibility("hidden")]] void GameStub_af0f80() {
}

[[gnu::visibility("hidden")]] void GameStub_af0f90() {
}

[[gnu::visibility("hidden")]] void GameStub_af10f0() {
}

[[gnu::visibility("hidden")]] void GameStub_af1100() {
}

[[gnu::visibility("hidden")]] void GameStub_af1c80() {
}

[[gnu::visibility("hidden")]] void GameStub_af1c90() {
}

[[gnu::visibility("hidden")]] void GameStub_b08f70() {
}

[[gnu::visibility("hidden")]] float GameStub_b25e60(U64 object) {
  return At<float>(object, 0x10);
}

[[gnu::visibility("hidden")]] U64 GameStub_b330b0(U64 object) {
  return At<U64>(object, 0x28);
}

[[gnu::visibility("hidden")]] U64 GameStub_b4a1b0(U64 object) {
  return At<U64>(object, 0x28);
}

[[gnu::visibility("hidden")]] void GameStub_b4e180() {
}

[[gnu::visibility("hidden")]] U64 GameStub_b533d0(U64 object) {
  return At<U64>(object, 0x28);
}

[[gnu::visibility("hidden")]] void GameStub_b608b0() {
}

[[gnu::visibility("hidden")]] void GameStub_b6afc0() {
}

[[gnu::visibility("hidden")]] void GameStub_b6cd60() {
}

[[gnu::visibility("hidden")]] U64 GameStub_b6cdc0() {
  return reinterpret_cast<U64>(GameData_1fc6ef0);
}

[[gnu::visibility("hidden")]] void GameStub_b6ce80() {
}

[[gnu::visibility("hidden")]] U64 GameStub_b6cee0() {
  return reinterpret_cast<U64>(GameData_1fc6f70);
}

[[gnu::visibility("hidden")]] void GameStub_b777b0() {
}

[[gnu::visibility("hidden")]] void GameStub_b79190() {
}

[[gnu::visibility("hidden")]] void GameStub_b79530() {
}

[[gnu::visibility("hidden")]] void GameStub_b884d0() {
}

[[gnu::visibility("hidden")]] void GameStub_b886c0() {
}

[[gnu::visibility("hidden")]] void GameStub_b88b50() {
}

[[gnu::visibility("hidden")]] void GameStub_b88d00() {
}

[[gnu::visibility("hidden")]] void GameStub_b8b9f0() {
}

[[gnu::visibility("hidden")]] void GameStub_b8bb90() {
}

[[gnu::visibility("hidden")]] void GameStub_b8bf30() {
}

[[gnu::visibility("hidden")]] void GameStub_b8c210() {
}

[[gnu::visibility("hidden")]] void GameStub_b8c6a0() {
}

[[gnu::visibility("hidden")]] void GameStub_b8c980() {
}

[[gnu::visibility("hidden")]] void GameStub_b8cd40() {
}

[[gnu::visibility("hidden")]] void GameStub_b8cf20() {
}

[[gnu::visibility("hidden")]] void GameStub_b8d140() {
}

[[gnu::visibility("hidden")]] void GameStub_b8d310() {
}

[[gnu::visibility("hidden")]] void GameStub_b8d6b0() {
}

[[gnu::visibility("hidden")]] void GameStub_b8d910() {
}

[[gnu::visibility("hidden")]] void GameStub_b8dca0() {
}

[[gnu::visibility("hidden")]] void GameStub_b8dee0() {
}

[[gnu::visibility("hidden")]] void GameStub_b8e280() {
}

[[gnu::visibility("hidden")]] void GameStub_b8e4b0() {
}

[[gnu::visibility("hidden")]] void GameStub_b8e920() {
}

[[gnu::visibility("hidden")]] void GameStub_b8eb30() {
}

[[gnu::visibility("hidden")]] void GameStub_b8ef20() {
}

[[gnu::visibility("hidden")]] void GameStub_b8f0d0() {
}

[[gnu::visibility("hidden")]] void GameStub_b91e80() {
}

[[gnu::visibility("hidden")]] void GameStub_b92090() {
}

[[gnu::visibility("hidden")]] void GameStub_b92710() {
}

[[gnu::visibility("hidden")]] void GameStub_b92910() {
}

[[gnu::visibility("hidden")]] void GameStub_b93060() {
}

[[gnu::visibility("hidden")]] void GameStub_b931f0() {
}

[[gnu::visibility("hidden")]] void GameStub_b93980() {
}

[[gnu::visibility("hidden")]] void GameStub_b93b70() {
}

[[gnu::visibility("hidden")]] void GameStub_b940a0() {
}

[[gnu::visibility("hidden")]] void GameStub_b94320() {
}

[[gnu::visibility("hidden")]] void GameStub_b944e0() {
}

[[gnu::visibility("hidden")]] void GameStub_b94590() {
}

[[gnu::visibility("hidden")]] void GameStub_b945d0() {
}

[[gnu::visibility("hidden")]] void GameStub_b97290() {
}

[[gnu::visibility("hidden")]] void GameStub_b97b80() {
}

[[gnu::visibility("hidden")]] void GameStub_b98270() {
}

[[gnu::visibility("hidden")]] void GameStub_b984b0() {
}

[[gnu::visibility("hidden")]] void GameStub_b989c0() {
}

[[gnu::visibility("hidden")]] void GameStub_b98b60() {
}

[[gnu::visibility("hidden")]] void GameStub_b994e0() {
}

[[gnu::visibility("hidden")]] void GameStub_b99730() {
}

[[gnu::visibility("hidden")]] void GameStub_b99890() {
}

[[gnu::visibility("hidden")]] void GameStub_b99a10() {
}

[[gnu::visibility("hidden")]] void GameStub_b9a1c0() {
}

[[gnu::visibility("hidden")]] void GameStub_b9a3b0() {
}

[[gnu::visibility("hidden")]] void GameStub_b9ad90() {
}

[[gnu::visibility("hidden")]] void GameStub_b9af70() {
}

[[gnu::visibility("hidden")]] void GameStub_b9b170() {
}

[[gnu::visibility("hidden")]] U64 GameStub_b9b760(U64 object) {
  return At<U64>(object, 0x28);
}

[[gnu::visibility("hidden")]] void GameStub_b9b770() {
}

[[gnu::visibility("hidden")]] void GameStub_b9b780() {
}

[[gnu::visibility("hidden")]] void GameStub_b9b790() {
}

[[gnu::visibility("hidden")]] void GameStub_b9bc40() {
}

[[gnu::visibility("hidden")]] void GameStub_b9bde0() {
}

[[gnu::visibility("hidden")]] void GameStub_b9c300() {
}

[[gnu::visibility("hidden")]] void GameStub_b9c550() {
}

[[gnu::visibility("hidden")]] void GameStub_ba3a60() {
}

[[gnu::visibility("hidden")]] void GameStub_ba3c30() {
}

[[gnu::visibility("hidden")]] void GameStub_ba40e0() {
}

[[gnu::visibility("hidden")]] void GameStub_ba42d0() {
}

[[gnu::visibility("hidden")]] void GameStub_ba47a0() {
}

[[gnu::visibility("hidden")]] void GameStub_ba49a0() {
}

[[gnu::visibility("hidden")]] void GameStub_ba4d40() {
}

[[gnu::visibility("hidden")]] void GameStub_ba4f60() {
}

[[gnu::visibility("hidden")]] void GameStub_ba53a0() {
}

[[gnu::visibility("hidden")]] void GameStub_ba59d0() {
}

[[gnu::visibility("hidden")]] void GameStub_ba5da0() {
}

[[gnu::visibility("hidden")]] void GameStub_ba5f60() {
}

[[gnu::visibility("hidden")]] void GameStub_ba6310() {
}

[[gnu::visibility("hidden")]] void GameStub_ba6570() {
}

[[gnu::visibility("hidden")]] void GameStub_ba6aa0() {
}

[[gnu::visibility("hidden")]] void GameStub_ba6ca0() {
}

[[gnu::visibility("hidden")]] void GameStub_ba7110() {
}

[[gnu::visibility("hidden")]] void GameStub_ba7370() {
}

[[gnu::visibility("hidden")]] void GameStub_ba7750() {
}

[[gnu::visibility("hidden")]] void GameStub_ba7960() {
}

[[gnu::visibility("hidden")]] void GameStub_ba7dd0() {
}

[[gnu::visibility("hidden")]] void GameStub_ba7fc0() {
}

[[gnu::visibility("hidden")]] void GameStub_ba8a50() {
}

[[gnu::visibility("hidden")]] void GameStub_ba8d10() {
}

[[gnu::visibility("hidden")]] void GameStub_ba90d0() {
}

[[gnu::visibility("hidden")]] void GameStub_ba9220() {
}

[[gnu::visibility("hidden")]] void GameStub_ba95f0() {
}

[[gnu::visibility("hidden")]] void GameStub_ba97b0() {
}

[[gnu::visibility("hidden")]] void GameStub_ba9c70() {
}

[[gnu::visibility("hidden")]] void GameStub_ba9e90() {
}

[[gnu::visibility("hidden")]] void GameStub_baa3c0() {
}

[[gnu::visibility("hidden")]] void GameStub_baa540() {
}

[[gnu::visibility("hidden")]] void GameStub_baa8e0() {
}

[[gnu::visibility("hidden")]] void GameStub_baaa40() {
}

[[gnu::visibility("hidden")]] void GameStub_baadc0() {
}

[[gnu::visibility("hidden")]] void GameStub_baaf80() {
}

[[gnu::visibility("hidden")]] void GameStub_bab360() {
}

[[gnu::visibility("hidden")]] void GameStub_bab4b0() {
}

[[gnu::visibility("hidden")]] void GameStub_bab830() {
}

[[gnu::visibility("hidden")]] void GameStub_baba20() {
}

[[gnu::visibility("hidden")]] void GameStub_babdf0() {
}

[[gnu::visibility("hidden")]] void GameStub_babff0() {
}

[[gnu::visibility("hidden")]] void GameStub_bac3c0() {
}

[[gnu::visibility("hidden")]] void GameStub_bac5b0() {
}

[[gnu::visibility("hidden")]] void GameStub_bacad0() {
}

[[gnu::visibility("hidden")]] void GameStub_bacce0() {
}

[[gnu::visibility("hidden")]] void GameStub_bad0e0() {
}

[[gnu::visibility("hidden")]] void GameStub_bad390() {
}

[[gnu::visibility("hidden")]] void GameStub_bad7c0() {
}

[[gnu::visibility("hidden")]] void GameStub_bad960() {
}

[[gnu::visibility("hidden")]] void GameStub_badda0() {
}

[[gnu::visibility("hidden")]] void GameStub_badfb0() {
}

[[gnu::visibility("hidden")]] void GameStub_bae160() {
}

[[gnu::visibility("hidden")]] void GameStub_bae3c0() {
}

[[gnu::visibility("hidden")]] void GameStub_bb0fa0() {
}

[[gnu::visibility("hidden")]] void GameStub_bb1140() {
}

[[gnu::visibility("hidden")]] void GameStub_bb1340() {
}

[[gnu::visibility("hidden")]] void GameStub_bb1510() {
}

[[gnu::visibility("hidden")]] void GameStub_bb19e0() {
}

[[gnu::visibility("hidden")]] void GameStub_bb1ba0() {
}

[[gnu::visibility("hidden")]] void GameStub_bb1f40() {
}

[[gnu::visibility("hidden")]] void GameStub_bb2220() {
}

[[gnu::visibility("hidden")]] void GameStub_bb2610() {
}

[[gnu::visibility("hidden")]] void GameStub_bb29a0() {
}

[[gnu::visibility("hidden")]] void GameStub_bb2e00() {
}

[[gnu::visibility("hidden")]] void GameStub_bb3090() {
}

[[gnu::visibility("hidden")]] void GameStub_bb34f0() {
}

[[gnu::visibility("hidden")]] void GameStub_bb3970() {
}

[[gnu::visibility("hidden")]] void GameStub_bb3e30() {
}

[[gnu::visibility("hidden")]] void GameStub_bb4350() {
}

[[gnu::visibility("hidden")]] void GameStub_bb4af0() {
}

[[gnu::visibility("hidden")]] void GameStub_bb4c80() {
}

[[gnu::visibility("hidden")]] void GameStub_bb50c0() {
}

[[gnu::visibility("hidden")]] void GameStub_bb53a0() {
}

[[gnu::visibility("hidden")]] void GameStub_bb5820() {
}

[[gnu::visibility("hidden")]] void GameStub_bb59d0() {
}

[[gnu::visibility("hidden")]] void GameStub_bbce30() {
}

[[gnu::visibility("hidden")]] void GameStub_bbcee0() {
}

[[gnu::visibility("hidden")]] void GameStub_bbcf20() {
}

[[gnu::visibility("hidden")]] void GameStub_bbd250() {
}

[[gnu::visibility("hidden")]] void GameStub_bbd300() {
}

[[gnu::visibility("hidden")]] void GameStub_bbd340() {
}

[[gnu::visibility("hidden")]] U64 GameStub_bbddd0(U64 object) {
  return At<U64>(object, 0x28);
}

[[gnu::visibility("hidden")]] void GameStub_bbdde0() {
}

[[gnu::visibility("hidden")]] void GameStub_bbddf0() {
}

[[gnu::visibility("hidden")]] U64 GameStub_bbde90(U64 object) {
  return At<U64>(object, 0x28);
}

[[gnu::visibility("hidden")]] void GameStub_bbdea0() {
}

[[gnu::visibility("hidden")]] void GameStub_bbdeb0() {
}

[[gnu::visibility("hidden")]] void GameStub_bbdec0() {
}

[[gnu::visibility("hidden")]] void GameStub_bbe0b0() {
}

[[gnu::visibility("hidden")]] void GameStub_bbe4a0() {
}

[[gnu::visibility("hidden")]] void GameStub_bbe670() {
}

[[gnu::visibility("hidden")]] void GameStub_bbea20() {
}

[[gnu::visibility("hidden")]] void GameStub_bbeb60() {
}

[[gnu::visibility("hidden")]] void GameStub_bc09b0() {
}

[[gnu::visibility("hidden")]] void GameStub_bc0a60() {
}

[[gnu::visibility("hidden")]] void GameStub_bc0aa0() {
}

[[gnu::visibility("hidden")]] void GameStub_bc0ef0() {
}

[[gnu::visibility("hidden")]] void GameStub_bc0fa0() {
}

[[gnu::visibility("hidden")]] void GameStub_bc0fe0() {
}

[[gnu::visibility("hidden")]] void GameStub_bc13b0() {
}

[[gnu::visibility("hidden")]] void GameStub_bc1580() {
}

[[gnu::visibility("hidden")]] void GameStub_bc2190() {
}

[[gnu::visibility("hidden")]] void GameStub_bc2240() {
}

[[gnu::visibility("hidden")]] void GameStub_bc2280() {
}

[[gnu::visibility("hidden")]] void GameStub_bc26b0() {
}

[[gnu::visibility("hidden")]] void GameStub_bc3220() {
}

[[gnu::visibility("hidden")]] void GameStub_bc35a0() {
}

[[gnu::visibility("hidden")]] void GameStub_bc38c0() {
}

[[gnu::visibility("hidden")]] U64 GameStub_bc8940(U64 object) {
  return GameRoutine_bc4ae0(At<U64>(object, 0x8));
}

[[gnu::visibility("hidden")]] void GameStub_bc93d0() {
}

[[gnu::visibility("hidden")]] U64 GameStub_bc9570() {
  return reinterpret_cast<U64>(GameData_1fd0220);
}

[[gnu::visibility("hidden")]] U32 GameStub_bcb760() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 GameStub_bcb8b0() {
  return 0;
}

[[gnu::visibility("hidden")]] void GameStub_bcd730() {
}

[[gnu::visibility("hidden")]] U32 GameStub_bda000() {
  return 197;
}

[[gnu::visibility("hidden")]] U64 GameStub_bda010() {
  return reinterpret_cast<U64>(GameData_1ada336);
}

[[gnu::visibility("hidden")]] void GameStub_bda620() {
}

[[gnu::visibility("hidden")]] U64 GameStub_beeb40() {
  return reinterpret_cast<U64>(GameData_1fd0b30);
}

[[gnu::visibility("hidden")]] U64 GameStub_bf2bd0() {
  return reinterpret_cast<U64>(GameData_1aa8d7e);
}

[[gnu::visibility("hidden")]] U32 GameStub_c05630() {
  return 128;
}

[[gnu::visibility("hidden")]] U64 GameStub_c05640() {
  return reinterpret_cast<U64>(GameData_1ae615f);
}

[[gnu::visibility("hidden")]] void GameStub_c19c30() {
}

[[gnu::visibility("hidden")]] void GameStub_c26480() {
}

[[gnu::visibility("hidden")]] U64 GameStub_c49630() {
  return reinterpret_cast<U64>(GameData_1fd2120);
}

[[gnu::visibility("hidden")]] void GameStub_c55340() {
}

[[gnu::visibility("hidden")]] void GameStub_c8b460(U64 object) {
  GameRoutine_c8b340(object - 0x8);
}

[[gnu::visibility("hidden")]] void GameStub_ca8210() {
}

[[gnu::visibility("hidden")]] U64 GameStub_cb3ca0(U64 object) {
  return GameRoutine_cb3d30(At<U64>(object, 0x0));
}

[[gnu::visibility("hidden")]] void GameStub_cb52d0() {
}

[[gnu::visibility("hidden")]] void GameStub_cb5c60() {
}

[[gnu::visibility("hidden")]] void GameStub_cb5f50() {
}

[[gnu::visibility("hidden")]] void GameStub_cb6130() {
}

[[gnu::visibility("hidden")]] void GameStub_cbe3b0() {
}

[[gnu::visibility("hidden")]] void GameStub_ccc790() {
}

[[gnu::visibility("hidden")]] U64 GameStub_cdd130() {
  return reinterpret_cast<U64>(GameData_1fd4e10);
}

[[gnu::visibility("hidden")]] U64 GameStub_ce0190() {
  return reinterpret_cast<U64>(GameData_1afd969);
}

[[gnu::visibility("hidden")]] U64 GameStub_ce01a0() {
  return reinterpret_cast<U64>(GameData_1afd969);
}

[[gnu::visibility("hidden")]] U64 GameStub_ce06c0() {
  return reinterpret_cast<U64>(GameData_1acf951);
}

[[gnu::visibility("hidden")]] U64 GameStub_ce06d0() {
  return reinterpret_cast<U64>(GameData_1acf951);
}

[[gnu::visibility("hidden")]] U64 GameStub_ce0730() {
  return reinterpret_cast<U64>(GameData_1aac0a4);
}

[[gnu::visibility("hidden")]] U64 GameStub_ce0740() {
  return reinterpret_cast<U64>(GameData_1ab460c);
}

[[gnu::visibility("hidden")]] U64 GameStub_ce0750() {
  return reinterpret_cast<U64>(GameData_1a8562d);
}

[[gnu::visibility("hidden")]] U32 GameStub_ce0760() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_ce0770() {
  return 1;
}

[[gnu::visibility("hidden")]] void GameStub_ce8bb0() {
}

[[gnu::visibility("hidden")]] void GameStub_cf8820() {
}

[[gnu::visibility("hidden")]] void GameStub_cf8830() {
}

[[gnu::visibility("hidden")]] void GameStub_cf8da0() {
}

[[gnu::visibility("hidden")]] void GameStub_cf8db0() {
}

[[gnu::visibility("hidden")]] void GameStub_cf8df0() {
}

[[gnu::visibility("hidden")]] void GameStub_cf9080() {
}

[[gnu::visibility("hidden")]] void GameStub_cf9ee0() {
}

[[gnu::visibility("hidden")]] void GameStub_cfa530() {
}

[[gnu::visibility("hidden")]] void GameStub_cfaf40() {
}

[[gnu::visibility("hidden")]] void GameStub_cfb900() {
}

[[gnu::visibility("hidden")]] void GameStub_d0b9d0() {
}

[[gnu::visibility("hidden")]] U64 GameStub_d0ba20() {
  return reinterpret_cast<U64>(GameData_1fda8b8);
}

[[gnu::visibility("hidden")]] void GameStub_d0ba30() {
}

[[gnu::visibility("hidden")]] void GameStub_d23960() {
}

[[gnu::visibility("hidden")]] U32 GameStub_d23980() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 GameStub_d23990() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 GameStub_d23d90() {
  return 1;
}

[[gnu::visibility("hidden")]] void GameStub_d25650() {
  GameRoutine_d21160();
}

[[gnu::visibility("hidden")]] U32 GameStub_d32de0() {
  return 1;
}

[[gnu::visibility("hidden")]] void GameStub_d38ef0() {
}

[[gnu::visibility("hidden")]] void GameStub_d3a1a0() {
}

[[gnu::visibility("hidden")]] U32 GameStub_d3d5f0() {
  return 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_d3d600() {
  return reinterpret_cast<U64>(GameData_1a996c2);
}

[[gnu::visibility("hidden")]] void GameStub_d3de60() {
}

[[gnu::visibility("hidden")]] void GameStub_d43570() {
}

[[gnu::visibility("hidden")]] void GameStub_d43610() {
}

[[gnu::visibility("hidden")]] void GameStub_d437a0() {
}

[[gnu::visibility("hidden")]] void GameStub_d4a5a0() {
}

[[gnu::visibility("hidden")]] void GameStub_d4a5b0() {
}

[[gnu::visibility("hidden")]] void GameStub_d4a5c0() {
}

[[gnu::visibility("hidden")]] void GameStub_d4a5d0() {
}

[[gnu::visibility("hidden")]] void GameStub_d4a620() {
}

[[gnu::visibility("hidden")]] void GameStub_d4a630() {
}

[[gnu::visibility("hidden")]] void GameStub_d4a640() {
}

[[gnu::visibility("hidden")]] U64 GameStub_d4e4d0() {
  return reinterpret_cast<U64>(GameData_1aa5019);
}

[[gnu::visibility("hidden")]] void GameStub_d4f5d0() {
}

[[gnu::visibility("hidden")]] void GameStub_d4fb70() {
}

[[gnu::visibility("hidden")]] void GameStub_d4fc90() {
}

[[gnu::visibility("hidden")]] U64 GameStub_d69a30() {
  return reinterpret_cast<U64>(GameData_1fdd208);
}

[[gnu::visibility("hidden")]] U64 GameStub_d70e60() {
  return reinterpret_cast<U64>(GameData_1fdd430);
}

[[gnu::visibility("hidden")]] void GameStub_d72f60() {
}

[[gnu::visibility("hidden")]] U64 GameStub_d7b950(U64 object) {
  return GameRoutine_d7c8b0(At<U64>(object, 0x30));
}

[[gnu::visibility("hidden")]] void GameStub_d7e9c0() {
}

[[gnu::visibility("hidden")]] void GameStub_d83ff0() {
}

[[gnu::visibility("hidden")]] void GameStub_d87ab0() {
}

[[gnu::visibility("hidden")]] void GameStub_d884b0() {
}

[[gnu::visibility("hidden")]] void GameStub_d8a4b0() {
}

[[gnu::visibility("hidden")]] void GameStub_d8af10(U64 object) {
  GameRoutine_d8a4f0(object - 0xd0);
}

[[gnu::visibility("hidden")]] U64 GameStub_d8b140() {
  return reinterpret_cast<U64>(GameData_1af5cd3);
}

[[gnu::visibility("hidden")]] U32 GameStub_d8b150() {
  return 0;
}

[[gnu::visibility("hidden")]] void GameStub_d8b160() {
}

[[gnu::visibility("hidden")]] void GameStub_d8b170() {
}

[[gnu::visibility("hidden")]] void GameStub_d95540() {
}

[[gnu::visibility("hidden")]] void GameStub_d96260() {
}

[[gnu::visibility("hidden")]] void GameStub_d964c0() {
}

[[gnu::visibility("hidden")]] void GameStub_da1860() {
  GameRoutine_da1870();
}

[[gnu::visibility("hidden")]] void GameStub_da7770() {
  GameRoutine_d85af0();
}

[[gnu::visibility("hidden")]] void GameStub_da7780() {
  GameRoutine_fccd00();
}

[[gnu::visibility("hidden")]] void GameStub_da7790() {
  GameRoutine_fccd00();
}

[[gnu::visibility("hidden")]] void GameStub_db6ef0() {
}

[[gnu::visibility("hidden")]] void GameStub_db6fe0() {
}

[[gnu::visibility("hidden")]] void GameStub_db8480(U64 object) {
  GameRoutine_db7ec0(object - 0x8);
}

[[gnu::visibility("hidden")]] U64 GameStub_db8c20() {
  return reinterpret_cast<U64>(GameData_1ad36e2);
}

[[gnu::visibility("hidden")]] U64 GameStub_db8c30() {
  return reinterpret_cast<U64>(GameData_1ad36e2);
}

[[gnu::visibility("hidden")]] U32 GameStub_db8c40() {
  return 21;
}

[[gnu::visibility("hidden")]] U32 GameStub_db8c50() {
  return 21;
}

[[gnu::visibility("hidden")]] void GameStub_db8c60() {
  GameRoutine_db7ba0();
}

[[gnu::visibility("hidden")]] void GameStub_db8c70(U64 object) {
  GameRoutine_db7ba0(object - 0x8);
}

[[gnu::visibility("hidden")]] void GameStub_db8c80() {
}

[[gnu::visibility("hidden")]] void GameStub_db8c90() {
}

[[gnu::visibility("hidden")]] void GameStub_dba800(U64 object) {
  GameRoutine_db8ca0(object - 0x8);
}

[[gnu::visibility("hidden")]] void GameStub_dbc050(U64 object) {
  GameRoutine_dba820(object - 0x8);
}

[[gnu::visibility("hidden")]] void GameStub_df5e70() {
}

[[gnu::visibility("hidden")]] void GameStub_df5ef0() {
}

[[gnu::visibility("hidden")]] U32 GameStub_df6230() {
  return 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_df6250() {
  return reinterpret_cast<U64>(GameData_2213f98);
}

[[gnu::visibility("hidden")]] void GameStub_df67a0() {
}

[[gnu::visibility("hidden")]] U32 GameStub_df7180() {
  return 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_dfe7b0() {
  return reinterpret_cast<U64>(GameData_1fe1fd0);
}

[[gnu::visibility("hidden")]] U64 GameStub_dfea50() {
  return reinterpret_cast<U64>(GameData_1fe2050);
}

[[gnu::visibility("hidden")]] U64 GameStub_dfee10() {
  return reinterpret_cast<U64>(GameData_1fe20d0);
}

[[gnu::visibility("hidden")]] U32 GameStub_e032a0() {
  return 0;
}

[[gnu::visibility("hidden")]] void GameStub_e032b0() {
}

[[gnu::visibility("hidden")]] void GameStub_e059e0() {
  GameRoutine_e05790();
}

[[gnu::visibility("hidden")]] U32 GameStub_e06000() {
  return 2;
}

[[gnu::visibility("hidden")]] U32 GameStub_e06010() {
  return 2;
}

[[gnu::visibility("hidden")]] U32 GameStub_e06020() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 GameStub_e06060(U64 object) {
  return At<U32>(object, 0x14);
}

[[gnu::visibility("hidden")]] U32 GameStub_e060a0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 GameStub_e060b0() {
  return 2;
}

[[gnu::visibility("hidden")]] void GameStub_e079e0() {
}

[[gnu::visibility("hidden")]] void GameStub_e14410() {
}

[[gnu::visibility("hidden")]] U64 GameStub_e144b0() {
  return reinterpret_cast<U64>(GameData_1fe2be0);
}

[[gnu::visibility("hidden")]] void GameStub_e16ae0() {
}

[[gnu::visibility("hidden")]] void GameStub_e16af0() {
}

[[gnu::visibility("hidden")]] void GameStub_e16b00() {
}

[[gnu::visibility("hidden")]] void GameStub_e17af0() {
}

[[gnu::visibility("hidden")]] void GameStub_e17f10() {
}

[[gnu::visibility("hidden")]] void GameStub_e1dd30() {
  GameRoutine_d85af0();
}

[[gnu::visibility("hidden")]] void GameStub_e1dd40() {
}

[[gnu::visibility("hidden")]] void GameStub_e200d0() {
}

[[gnu::visibility("hidden")]] U64 GameStub_e20600() {
  return reinterpret_cast<U64>(GameData_1fe35c8);
}

[[gnu::visibility("hidden")]] void GameStub_e30440() {
}

[[gnu::visibility("hidden")]] void GameStub_e308b0() {
}

[[gnu::visibility("hidden")]] void GameStub_e30dd0() {
}

[[gnu::visibility("hidden")]] U32 GameStub_e36d70() {
  return 1;
}

[[gnu::visibility("hidden")]] U8 GameStub_e372e0(U64 object) {
  return At<U8>(object, 0x3d);
}

[[gnu::visibility("hidden")]] void GameStub_e37aa0() {
}

[[gnu::visibility("hidden")]] void GameStub_e37ab0() {
}

[[gnu::visibility("hidden")]] void GameStub_e37ac0() {
}

[[gnu::visibility("hidden")]] U32 GameStub_e37ad0() {
  return 1;
}

[[gnu::visibility("hidden")]] void GameStub_e3c460() {
}

[[gnu::visibility("hidden")]] void GameStub_e3c470() {
  GameRoutine_e382a0();
}

[[gnu::visibility("hidden")]] void GameStub_e3c840() {
}

[[gnu::visibility("hidden")]] void GameStub_e3c850() {
  GameRoutine_e382a0();
}

[[gnu::visibility("hidden")]] void GameStub_e3cee0() {
}

[[gnu::visibility("hidden")]] void GameStub_e3cef0() {
  GameRoutine_e382a0();
}

[[gnu::visibility("hidden")]] void GameStub_e3d190() {
}

[[gnu::visibility("hidden")]] void GameStub_e3d1a0() {
  GameRoutine_e382a0();
}

[[gnu::visibility("hidden")]] void GameStub_e3df40() {
}

[[gnu::visibility("hidden")]] void GameStub_e3df50() {
}

[[gnu::visibility("hidden")]] void GameStub_e3df90() {
}

[[gnu::visibility("hidden")]] void GameStub_e3e120() {
}

[[gnu::visibility("hidden")]] void GameStub_e3e130() {
}

[[gnu::visibility("hidden")]] void GameStub_e3e170() {
}

[[gnu::visibility("hidden")]] void GameStub_e3e6c0() {
}

[[gnu::visibility("hidden")]] void GameStub_e3e6d0() {
}

[[gnu::visibility("hidden")]] void GameStub_e3e710() {
}

[[gnu::visibility("hidden")]] void GameStub_e50e60() {
}

[[gnu::visibility("hidden")]] void GameStub_e51510() {
}

[[gnu::visibility("hidden")]] void GameStub_e51660() {
}

[[gnu::visibility("hidden")]] void GameStub_e51bc0() {
}

[[gnu::visibility("hidden")]] void GameStub_e528c0() {
  GameRoutine_ce59d0();
}

[[gnu::visibility("hidden")]] void GameStub_e52a90() {
  GameRoutine_ce59d0();
}

[[gnu::visibility("hidden")]] void GameStub_e52b70() {
  GameRoutine_ce59d0();
}

[[gnu::visibility("hidden")]] void GameStub_e52c60() {
  GameRoutine_ce59d0();
}

[[gnu::visibility("hidden")]] void GameStub_e52e50() {
  GameRoutine_ce59d0();
}

[[gnu::visibility("hidden")]] void GameStub_e53040() {
  GameRoutine_ce59d0();
}

[[gnu::visibility("hidden")]] void GameStub_e53130() {
  GameRoutine_ce59d0();
}

[[gnu::visibility("hidden")]] void GameStub_e53300() {
  GameRoutine_ce59d0();
}

[[gnu::visibility("hidden")]] void GameStub_e534d0() {
  GameRoutine_ce59d0();
}

[[gnu::visibility("hidden")]] void GameStub_e53700() {
  GameRoutine_ce59d0();
}

[[gnu::visibility("hidden")]] void GameStub_e538f0() {
  GameRoutine_ce59d0();
}

[[gnu::visibility("hidden")]] void GameStub_e539e0() {
  GameRoutine_ce59d0();
}

[[gnu::visibility("hidden")]] void GameStub_e53c10() {
  GameRoutine_ce59d0();
}

[[gnu::visibility("hidden")]] void GameStub_e53e40() {
  GameRoutine_ce59d0();
}

[[gnu::visibility("hidden")]] void GameStub_e54030() {
  GameRoutine_ce59d0();
}

[[gnu::visibility("hidden")]] void GameStub_e54120() {
  GameRoutine_ce59d0();
}

[[gnu::visibility("hidden")]] void GameStub_e54210() {
  GameRoutine_ce59d0();
}

[[gnu::visibility("hidden")]] void GameStub_e54300() {
  GameRoutine_ce59d0();
}

[[gnu::visibility("hidden")]] void GameStub_e54550() {
  GameRoutine_ce59d0();
}

[[gnu::visibility("hidden")]] void GameStub_e547a0() {
  GameRoutine_ce59d0();
}

[[gnu::visibility("hidden")]] void GameStub_e54990() {
  GameRoutine_ce59d0();
}

[[gnu::visibility("hidden")]] void GameStub_e54ac0() {
  GameRoutine_ce59d0();
}

[[gnu::visibility("hidden")]] void GameStub_e5ec20() {
}

[[gnu::visibility("hidden")]] void GameStub_e5f410() {
}

[[gnu::visibility("hidden")]] void GameStub_e623f0() {
}

[[gnu::visibility("hidden")]] void GameStub_e63380() {
}

[[gnu::visibility("hidden")]] void GameStub_e64320() {
  GameRoutine_f45a10();
}

[[gnu::visibility("hidden")]] void GameStub_e65dd0() {
  GameRoutine_ebeb40();
}

[[gnu::visibility("hidden")]] void GameStub_e65de0() {
  GameRoutine_ebeca0();
}

[[gnu::visibility("hidden")]] U32 GameStub_e665c0() {
  return 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_e67200() {
  return reinterpret_cast<U64>(GameData_1aea53a);
}

[[gnu::visibility("hidden")]] U32 GameStub_e67210() {
  return 0;
}

[[gnu::visibility("hidden")]] void GameStub_e67310(U64 object) {
  GameRoutine_e66fa0(object - 0xd0);
}

[[gnu::visibility("hidden")]] U64 GameStub_e67380() {
  return reinterpret_cast<U64>(GameData_1aea53a);
}

[[gnu::visibility("hidden")]] U32 GameStub_e67390() {
  return 0;
}

[[gnu::visibility("hidden")]] void GameStub_e68700() {
}

[[gnu::visibility("hidden")]] void GameStub_e6b750() {
}

[[gnu::visibility("hidden")]] void GameStub_e6c230() {
  GameRoutine_80ef70();
}

[[gnu::visibility("hidden")]] U32 GameStub_e6c400() {
  return 0;
}

[[gnu::visibility("hidden")]] void GameStub_e6c4f0(U64 object) {
  GameRoutine_e6c240(object - 0x98);
}

[[gnu::visibility("hidden")]] U32 GameStub_e6c500() {
  return 0;
}

[[gnu::visibility("hidden")]] void GameStub_e6c560() {
  GameRoutine_80ef70();
}

[[gnu::visibility("hidden")]] void GameStub_e6e090() {
  GameRoutine_e6e0a0();
}

[[gnu::visibility("hidden")]] void GameStub_e6ee90() {
}

[[gnu::visibility("hidden")]] void GameStub_e6f450() {
}

[[gnu::visibility("hidden")]] U64 GameStub_e7f160() {
  return reinterpret_cast<U64>(GameData_1fe8228);
}

[[gnu::visibility("hidden")]] U64 GameStub_e92070() {
  return reinterpret_cast<U64>(GameData_1abc918);
}

[[gnu::visibility("hidden")]] U64 GameStub_e92080() {
  return reinterpret_cast<U64>(GameData_1ac3c56);
}

[[gnu::visibility("hidden")]] U64 GameStub_e920a0() {
  return reinterpret_cast<U64>(GameData_1abc918);
}

[[gnu::visibility("hidden")]] U64 GameStub_e920b0() {
  return reinterpret_cast<U64>(GameData_1ac3c56);
}

[[gnu::visibility("hidden")]] U32 GameStub_e92170() {
  return 4;
}

[[gnu::visibility("hidden")]] U32 GameStub_e92250() {
  return 3;
}

[[gnu::visibility("hidden")]] void GameStub_e929b0() {
}

[[gnu::visibility("hidden")]] U64 GameStub_e92a50() {
  return reinterpret_cast<U64>(GameData_1fe9868);
}

[[gnu::visibility("hidden")]] U32 GameStub_e92c70() {
  return 3;
}

[[gnu::visibility("hidden")]] U8 GameStub_e95620(U64 object) {
  return At<U8>(object, 0x91);
}

[[gnu::visibility("hidden")]] U32 GameStub_e96120() {
  return 23;
}

[[gnu::visibility("hidden")]] U32 GameStub_e96350() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 GameStub_e96370() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 GameStub_e96390() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_e96660() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_e96670() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 GameStub_e96680() {
  return 0;
}

[[gnu::visibility("hidden")]] void GameStub_e96800() {
}

[[gnu::visibility("hidden")]] U32 GameStub_e97b00() {
  return 23;
}

[[gnu::visibility("hidden")]] U64 GameStub_e97b10() {
  return reinterpret_cast<U64>(GameData_1aac0a4);
}

[[gnu::visibility("hidden")]] U64 GameStub_e97b20() {
  return reinterpret_cast<U64>(GameData_1ad70d9);
}

[[gnu::visibility("hidden")]] U32 GameStub_e97b30() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_e97b60() {
  return 7;
}

[[gnu::visibility("hidden")]] U32 GameStub_e97b70() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_e97b80() {
  return 1;
}

[[gnu::visibility("hidden")]] U64 GameStub_e97ce0() {
  return reinterpret_cast<U64>(GameData_1aedba4);
}

[[gnu::visibility("hidden")]] U32 GameStub_e97cf0() {
  return 8;
}

[[gnu::visibility("hidden")]] U32 GameStub_e97d00() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_e97e70() {
  return 8;
}

[[gnu::visibility("hidden")]] U32 GameStub_e97fe0() {
  return 1;
}

[[gnu::visibility("hidden")]] void GameStub_e99200() {
  GameRoutine_1020f60();
}

[[gnu::visibility("hidden")]] void GameStub_e992a0() {
}

[[gnu::visibility("hidden")]] void GameStub_eac750(U64 object) {
  GameRoutine_eac5a0(object - 0x8);
}

[[gnu::visibility("hidden")]] void GameStub_eacb60(U64 object) {
  GameRoutine_eaca20(object - 0x8);
}

[[gnu::visibility("hidden")]] U32 GameStub_eae040(U64 object) {
  return At<U32>(object, 0x38);
}

[[gnu::visibility("hidden")]] U64 GameStub_eb4fc0() {
  return reinterpret_cast<U64>(GameData_1fedfa8);
}

[[gnu::visibility("hidden")]] void GameStub_ebf230() {
}

[[gnu::visibility("hidden")]] void GameStub_ec01a0() {
}

[[gnu::visibility("hidden")]] void GameStub_ec01b0() {
}

[[gnu::visibility("hidden")]] void GameStub_ec01f0() {
}

[[gnu::visibility("hidden")]] U8 GameStub_ec0660(U64 object) {
  return At<U8>(object, 0x11);
}

[[gnu::visibility("hidden")]] U32 GameStub_ec06a0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 GameStub_ed5180() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 GameStub_ed51e0() {
  return 4;
}

[[gnu::visibility("hidden")]] U32 GameStub_ed5240() {
  return 5;
}

[[gnu::visibility("hidden")]] U32 GameStub_ed5470() {
  return 9;
}

[[gnu::visibility("hidden")]] U32 GameStub_ed54d0() {
  return 10;
}

[[gnu::visibility("hidden")]] U32 GameStub_ed5530() {
  return 11;
}

[[gnu::visibility("hidden")]] U32 GameStub_ed5590() {
  return 6;
}

[[gnu::visibility("hidden")]] U32 GameStub_ed55f0() {
  return 7;
}

[[gnu::visibility("hidden")]] U32 GameStub_ed5650() {
  return 8;
}

[[gnu::visibility("hidden")]] U32 GameStub_ed56b0() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_ed5710() {
  return 2;
}

[[gnu::visibility("hidden")]] void GameStub_edb370() {
}

[[gnu::visibility("hidden")]] void GameStub_efe550() {
  GameRoutine_efe380();
}

[[gnu::visibility("hidden")]] void GameStub_f0c470() {
}

[[gnu::visibility("hidden")]] void GameStub_f0e870() {
}

[[gnu::visibility("hidden")]] U64 GameStub_f0e960() {
  return reinterpret_cast<U64>(GameData_1ff1e48);
}

[[gnu::visibility("hidden")]] void GameStub_f0ea20() {
}

[[gnu::visibility("hidden")]] void GameStub_f0ea30() {
}

[[gnu::visibility("hidden")]] void GameStub_f0ea40() {
}

[[gnu::visibility("hidden")]] void GameStub_f16870(U64 object) {
  GameRoutine_f45180(object + 0x10);
}

[[gnu::visibility("hidden")]] U32 GameStub_f1fc80() {
  return 2;
}

[[gnu::visibility("hidden")]] U32 GameStub_f235a0() {
  return 11;
}

[[gnu::visibility("hidden")]] bool GameStub_f2cad0(U64 object) {
  return At<U32>(object, 0x40) != 2u;
}

[[gnu::visibility("hidden")]] void GameStub_f2cae0() {
}

[[gnu::visibility("hidden")]] void GameStub_f2caf0() {
}

[[gnu::visibility("hidden")]] void GameStub_f2cb00() {
}

[[gnu::visibility("hidden")]] bool GameStub_f2d5e0(U64 object) {
  return At<U32>(object, 0x40) != 2u;
}

[[gnu::visibility("hidden")]] void GameStub_f2d5f0() {
}

[[gnu::visibility("hidden")]] void GameStub_f2d600() {
}

[[gnu::visibility("hidden")]] void GameStub_f321b0() {
  GameRoutine_f2c8c0();
}

[[gnu::visibility("hidden")]] U32 GameStub_f321c0() {
  return 1;
}

[[gnu::visibility("hidden")]] U64 GameStub_f345a0() {
  return reinterpret_cast<U64>(GameData_1ff3fa8);
}

[[gnu::visibility("hidden")]] U64 GameStub_f347e0() {
  return reinterpret_cast<U64>(GameData_1ff4028);
}

[[gnu::visibility("hidden")]] U32 GameStub_f34cc0() {
  return 0;
}

[[gnu::visibility("hidden")]] void GameStub_f374c0() {
}

[[gnu::visibility("hidden")]] U64 GameStub_f3d060() {
  return reinterpret_cast<U64>(GameData_1a85550);
}

[[gnu::visibility("hidden")]] void GameStub_f417e0() {
}

[[gnu::visibility("hidden")]] U8 GameStub_f45840(U64 object) {
  return At<U8>(object, 0xf4);
}

[[gnu::visibility("hidden")]] void GameStub_f49920() {
  GameRoutine_d85af0();
}

[[gnu::visibility("hidden")]] void GameStub_f50460() {
}

[[gnu::visibility("hidden")]] void GameStub_f54220() {
}

[[gnu::visibility("hidden")]] void GameStub_f54350() {
}

[[gnu::visibility("hidden")]] void GameStub_f58600() {
}

[[gnu::visibility("hidden")]] U32 GameStub_f59d30() {
  return 1;
}

[[gnu::visibility("hidden")]] void GameStub_f5fe40() {
}

[[gnu::visibility("hidden")]] U32 GameStub_f633d0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 GameStub_f64950() {
  return 1;
}

[[gnu::visibility("hidden")]] void GameStub_f6a9a0() {
  GameRoutine_f93d90();
}

[[gnu::visibility("hidden")]] U32 GameStub_f6d070() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_f816c0() {
  return 8;
}

[[gnu::visibility("hidden")]] U32 GameStub_f86830() {
  return 12;
}

[[gnu::visibility("hidden")]] void GameStub_f8c600() {
  GameRoutine_d85af0();
}

[[gnu::visibility("hidden")]] U64 GameStub_f8e9d0() {
  return reinterpret_cast<U64>(GameData_1aee4e7);
}

[[gnu::visibility("hidden")]] void GameStub_f9a8a0() {
  GameRoutine_f9a740();
}

[[gnu::visibility("hidden")]] void GameStub_f9b600() {
}

[[gnu::visibility("hidden")]] void GameStub_f9c740() {
}

[[gnu::visibility("hidden")]] void GameStub_f9e550() {
}

[[gnu::visibility("hidden")]] U64 GameStub_fa5660(U64 object) {
  return GameRoutine_8c4be0(At<U64>(object, 0xc0));
}

[[gnu::visibility("hidden")]] U64 GameStub_fa6550() {
  return reinterpret_cast<U64>(GameData_1aee08e);
}

[[gnu::visibility("hidden")]] U32 GameStub_fa7fa0() {
  return 3;
}

[[gnu::visibility("hidden")]] void GameStub_fb0da0() {
  GameRoutine_7c6120();
}

[[gnu::visibility("hidden")]] U32 GameStub_fb3fa0() {
  return 4;
}

[[gnu::visibility("hidden")]] U32 GameStub_fb4080() {
  return 3;
}

[[gnu::visibility("hidden")]] void GameStub_fb40c0() {
}

[[gnu::visibility("hidden")]] U32 GameStub_fb4440() {
  return 0;
}

[[gnu::visibility("hidden")]] void GameStub_fb5cb0() {
}

[[gnu::visibility("hidden")]] U32 GameStub_fb8a90() {
  return 124;
}

[[gnu::visibility("hidden")]] U64 GameStub_fb8aa0() {
  return reinterpret_cast<U64>(GameData_1ad39db);
}

[[gnu::visibility("hidden")]] void GameStub_fbd780() {
  GameRoutine_d85af0();
}

[[gnu::visibility("hidden")]] void GameStub_fbeb60() {
}

[[gnu::visibility("hidden")]] void GameStub_fbeb70() {
}

[[gnu::visibility("hidden")]] void GameStub_fbeb80() {
}

[[gnu::visibility("hidden")]] void GameStub_fbeb90() {
}

[[gnu::visibility("hidden")]] U32 GameStub_fc3f20() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 GameStub_fc5000(U64 object) {
  return At<U32>(object, 0x8);
}

[[gnu::visibility("hidden")]] U64 GameStub_fc6df0() {
  return reinterpret_cast<U64>(GameData_1acbd39);
}

[[gnu::visibility("hidden")]] void GameStub_fc6e00() {
}

[[gnu::visibility("hidden")]] U32 GameStub_fc6e10() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 GameStub_fc9e10() {
  return 0;
}

[[gnu::visibility("hidden")]] void GameStub_fc9ec0() {
  GameRoutine_d85af0();
}

[[gnu::visibility("hidden")]] void GameStub_fd0090() {
}

[[gnu::visibility("hidden")]] void GameStub_fd00a0() {
}

[[gnu::visibility("hidden")]] void GameStub_fd00b0() {
}

[[gnu::visibility("hidden")]] void GameStub_fd00c0() {
}

[[gnu::visibility("hidden")]] void GameStub_fe1680() {
  GameRoutine_fefea0();
}

[[gnu::visibility("hidden")]] void GameStub_fe6e80() {
}

[[gnu::visibility("hidden")]] void GameStub_fe6e90() {
}

[[gnu::visibility("hidden")]] bool GameStub_fe6ff0(U64 object) {
  return At<U64>(object, 0x8) != 0;
}

[[gnu::visibility("hidden")]] void GameStub_fe8250() {
}

[[gnu::visibility("hidden")]] void GameStub_fe8cc0() {
}

[[gnu::visibility("hidden")]] void GameStub_fe8d00() {
}

[[gnu::visibility("hidden")]] void GameStub_fe8d10() {
}

[[gnu::visibility("hidden")]] void GameStub_fe8d20() {
}

[[gnu::visibility("hidden")]] U32 GameStub_fe8e70() {
  return 1;
}

[[gnu::visibility("hidden")]] void GameStub_fea8c0() {
}

[[gnu::visibility("hidden")]] U32 GameStub_feb1d0() {
  return 4;
}

[[gnu::visibility("hidden")]] void GameStub_febf90(U64 object, float value) {
  At<float>(object, 0x2c) = value;
}

[[gnu::visibility("hidden")]] U64 GameStub_febfa0() {
  return reinterpret_cast<U64>(GameData_1adf0b4);
}

[[gnu::visibility("hidden")]] U32 GameStub_ff0340() {
  return 11;
}

[[gnu::visibility("hidden")]] U64 GameStub_ff0350() {
  return reinterpret_cast<U64>(GameData_1aee3c5);
}

[[gnu::visibility("hidden")]] U64 GameStub_ff0360() {
  return reinterpret_cast<U64>(GameData_1af620e);
}

[[gnu::visibility("hidden")]] U32 GameStub_ff0370() {
  return 11;
}

[[gnu::visibility("hidden")]] U32 GameStub_ff05a0() {
  return 3;
}

[[gnu::visibility("hidden")]] void GameStub_ff0ae0() {
}

[[gnu::visibility("hidden")]] void GameStub_ff0af0() {
  GameRoutine_e382a0();
}

[[gnu::visibility("hidden")]] void GameStub_1003c30() {
}

[[gnu::visibility("hidden")]] U32 GameStub_1009d80() {
  return 20;
}

[[gnu::visibility("hidden")]] U64 GameStub_1009d90() {
  return reinterpret_cast<U64>(GameData_1abfa21);
}

[[gnu::visibility("hidden")]] U64 GameStub_1009da0() {
  return reinterpret_cast<U64>(GameData_1acbce6);
}

[[gnu::visibility("hidden")]] U32 GameStub_1009db0() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 GameStub_1009eb0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 GameStub_1009f00() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_1009f50() {
  return 1;
}

[[gnu::visibility("hidden")]] void GameStub_100a000() {
  GameRoutine_717660();
}

[[gnu::visibility("hidden")]] void GameStub_100a3a0() {
  GameRoutine_717b40();
}

[[gnu::visibility("hidden")]] U64 GameStub_100a480(U64, U64 other) {
  return GameRoutine_10098a0(At<U64>(other, 0x0), other);
}

[[gnu::visibility("hidden")]] U64 GameStub_100ea50(U64 object) {
  return GameRoutine_100eaa0(At<U64>(object, 0x8));
}

[[gnu::visibility("hidden")]] void GameStub_10106a0(U64 object) {
  GameRoutine_155ea30(object + 0x58);
}

[[gnu::visibility("hidden")]] void GameStub_10106b0(U64 object) {
  GameRoutine_155e830(object + 0x58);
}

[[gnu::visibility("hidden")]] void GameStub_1010c70() {
}

[[gnu::visibility("hidden")]] void GameStub_1015450() {
}

[[gnu::visibility("hidden")]] void GameStub_1015490() {
}

[[gnu::visibility("hidden")]] U32 GameStub_10154b0() {
  return 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_10154d0() {
  return 0x0;
}

[[gnu::visibility("hidden")]] U64 GameStub_10154e0() {
  return 0x0;
}

[[gnu::visibility("hidden")]] U64 GameStub_10154f0() {
  return 0x0;
}

[[gnu::visibility("hidden")]] void GameStub_101bd50() {
}

[[gnu::visibility("hidden")]] void GameStub_101bea0() {
}

[[gnu::visibility("hidden")]] U32 GameStub_101ce20() {
  return 14;
}

[[gnu::visibility("hidden")]] void GameStub_1027850(U64 object) {
  GameRoutine_1027620(object - 0x98);
}

[[gnu::visibility("hidden")]] void GameStub_1028d40() {
  GameRoutine_d85af0();
}

[[gnu::visibility("hidden")]] void GameStub_10311c0() {
}

[[gnu::visibility("hidden")]] void GameStub_103bea0() {
}

[[gnu::visibility("hidden")]] U32 GameStub_103d590() {
  return 7;
}

[[gnu::visibility("hidden")]] void GameStub_1043b20() {
}

[[gnu::visibility("hidden")]] U32 GameStub_1045960() {
  return 9;
}

[[gnu::visibility("hidden")]] U32 GameStub_104d700() {
  return 2;
}

[[gnu::visibility("hidden")]] U32 GameStub_104dbb0() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 GameStub_104dc90() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 GameStub_104dd70() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 GameStub_104df50() {
  return 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_10510a0() {
  return reinterpret_cast<U64>(GameData_2004e78);
}

[[gnu::visibility("hidden")]] U64 GameStub_1051d90() {
  return reinterpret_cast<U64>(GameData_2005078);
}

[[gnu::visibility("hidden")]] U64 GameStub_1052200() {
  return reinterpret_cast<U64>(GameData_2004f68);
}

[[gnu::visibility("hidden")]] U64 GameStub_1052610() {
  return reinterpret_cast<U64>(GameData_2004fe8);
}

[[gnu::visibility("hidden")]] U32 GameStub_10526c0() {
  return 1;
}

[[gnu::visibility("hidden")]] U64 GameStub_1052ab0() {
  return reinterpret_cast<U64>(GameData_20050f8);
}

[[gnu::visibility("hidden")]] U64 GameStub_1052fb0() {
  return reinterpret_cast<U64>(GameData_2005278);
}

[[gnu::visibility("hidden")]] void GameStub_1053f30(U64 object) {
  GameRoutine_1053c60(object - 0x8);
}

[[gnu::visibility("hidden")]] U64 GameStub_1062c10() {
  return reinterpret_cast<U64>(GameData_1aea93d);
}

[[gnu::visibility("hidden")]] U32 GameStub_1062c50() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_1062c60() {
  return 1;
}

[[gnu::visibility("hidden")]] void GameStub_1062c70() {
}

[[gnu::visibility("hidden")]] U64 GameStub_1062c80() {
  return reinterpret_cast<U64>(GameData_1ad3c29);
}

[[gnu::visibility("hidden")]] U32 GameStub_1062cc0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 GameStub_1062cd0() {
  return 0;
}

[[gnu::visibility("hidden")]] void GameStub_1062ce0() {
}

[[gnu::visibility("hidden")]] U64 GameStub_1062cf0() {
  return reinterpret_cast<U64>(GameData_1ab8e0e);
}

[[gnu::visibility("hidden")]] U64 GameStub_1062d30() {
  return reinterpret_cast<U64>(GameData_1afde88);
}

[[gnu::visibility("hidden")]] void GameStub_1062d40() {
}

[[gnu::visibility("hidden")]] U64 GameStub_1062d80() {
  return reinterpret_cast<U64>(GameData_1a91b25);
}

[[gnu::visibility("hidden")]] U64 GameStub_1064420() {
  return reinterpret_cast<U64>(GameData_2005d50);
}

[[gnu::visibility("hidden")]] U64 GameStub_1066800() {
  return reinterpret_cast<U64>(GameData_1a9d5a3);
}

[[gnu::visibility("hidden")]] void GameStub_1066840() {
}

[[gnu::visibility("hidden")]] void GameStub_1067490() {
}

[[gnu::visibility("hidden")]] U64 GameStub_107ad90() {
  return reinterpret_cast<U64>(GameData_1aee1a7);
}

[[gnu::visibility("hidden")]] void GameStub_107b4c0(U64 object) {
  GameRoutine_107b100(object - 0x18);
}

[[gnu::visibility("hidden")]] U64 GameStub_10860b0() {
  return reinterpret_cast<U64>(GameData_1ad6702);
}

[[gnu::visibility("hidden")]] U64 GameStub_1086910(U64 object) {
  return GameRoutine_1086960(At<U64>(object, 0x28));
}

[[gnu::visibility("hidden")]] U64 GameStub_1086ba0() {
  return reinterpret_cast<U64>(GameData_1ad752e);
}

[[gnu::visibility("hidden")]] U64 GameStub_1086c50() {
  return reinterpret_cast<U64>(GameData_1adf19d);
}

[[gnu::visibility("hidden")]] U64 GameStub_1086e00() {
  return reinterpret_cast<U64>(GameData_1ac4169);
}

[[gnu::visibility("hidden")]] U64 GameStub_1088420() {
  return reinterpret_cast<U64>(GameData_1a8e431);
}

[[gnu::visibility("hidden")]] void GameStub_1089250() {
}

[[gnu::visibility("hidden")]] U64 GameStub_10892b0() {
  return reinterpret_cast<U64>(GameData_20071e8);
}

[[gnu::visibility("hidden")]] void GameStub_1089350() {
}

[[gnu::visibility("hidden")]] U64 GameStub_10893b0() {
  return reinterpret_cast<U64>(GameData_2007278);
}

[[gnu::visibility("hidden")]] void GameStub_10895b0() {
}

[[gnu::visibility("hidden")]] void GameStub_108a240() {
}

[[gnu::visibility("hidden")]] U64 GameStub_108a400() {
  return reinterpret_cast<U64>(GameData_2007638);
}

[[gnu::visibility("hidden")]] void GameStub_108aa90() {
}

[[gnu::visibility("hidden")]] U64 GameStub_108ed10(U64 object) {
  return At<U64>(object, 0xb0);
}

[[gnu::visibility("hidden")]] U64 GameStub_108eef0() {
  return reinterpret_cast<U64>(GameData_1af2411);
}

[[gnu::visibility("hidden")]] U32 GameStub_108ef30() {
  return 1;
}

[[gnu::visibility("hidden")]] U64 GameStub_108ef40() {
  return reinterpret_cast<U64>(GameData_1ab8e26);
}

[[gnu::visibility("hidden")]] U64 GameStub_10953a0() {
  return reinterpret_cast<U64>(GameData_1adb91c);
}

[[gnu::visibility("hidden")]] U32 GameStub_10953e0() {
  return 1;
}

[[gnu::visibility("hidden")]] U64 GameStub_10965a0() {
  return reinterpret_cast<U64>(GameData_1aafefa);
}

[[gnu::visibility("hidden")]] void GameStub_1098090() {
}

[[gnu::visibility("hidden")]] void GameStub_10982e0() {
}

[[gnu::visibility("hidden")]] void GameStub_10a2fb0() {
}

[[gnu::visibility("hidden")]] void GameStub_10aad20() {
}

[[gnu::visibility("hidden")]] U64 GameStub_10b30c0() {
  return reinterpret_cast<U64>(GameData_1aa5442);
}

[[gnu::visibility("hidden")]] void GameStub_10b30d0(U64 object) {
  GameRoutine_10b2f90(object - 0x38);
}

[[gnu::visibility("hidden")]] U64 GameStub_10b64e0() {
  return reinterpret_cast<U64>(GameData_1afa1eb);
}

[[gnu::visibility("hidden")]] U32 GameStub_10b86f0() {
  return 1;
}

[[gnu::visibility("hidden")]] U64 GameStub_10b8700() {
  return reinterpret_cast<U64>(GameData_1aa55d6);
}

[[gnu::visibility("hidden")]] void GameStub_10b8710(U64 object) {
  GameRoutine_10b85b0(object - 0x38);
}

[[gnu::visibility("hidden")]] U64 GameStub_10bb610() {
  return reinterpret_cast<U64>(GameData_1acfe30);
}

[[gnu::visibility("hidden")]] void GameStub_10bc320() {
}

[[gnu::visibility("hidden")]] void GameStub_10bce00() {
}

[[gnu::visibility("hidden")]] U64 GameStub_10c3100() {
  return reinterpret_cast<U64>(GameData_1aea9a9);
}

[[gnu::visibility("hidden")]] void GameStub_10c64d0() {
}

[[gnu::visibility("hidden")]] void GameStub_10c6b60() {
}

[[gnu::visibility("hidden")]] void GameStub_10c75c0() {
}

[[gnu::visibility("hidden")]] void GameStub_10c7a70() {
}

[[gnu::visibility("hidden")]] void GameStub_10c7ab0() {
}

[[gnu::visibility("hidden")]] void GameStub_10c7d40() {
}

[[gnu::visibility("hidden")]] void GameStub_10c83f0() {
}

[[gnu::visibility("hidden")]] U64 GameStub_10ce250() {
  return reinterpret_cast<U64>(GameData_1abcdc6);
}

[[gnu::visibility("hidden")]] void GameStub_10d3b00() {
}

[[gnu::visibility("hidden")]] U64 GameStub_10d3c40() {
  return reinterpret_cast<U64>(GameData_200b6d0);
}

[[gnu::visibility("hidden")]] U64 GameStub_10d5560(U64 object) {
  return GameRoutine_106d400(At<U64>(object, 0xa0));
}

[[gnu::visibility("hidden")]] void GameStub_10d6b80(U64 object) {
  GameRoutine_10d68d0(object - 0x98);
}

[[gnu::visibility("hidden")]] U64 GameStub_10d8db0() {
  return reinterpret_cast<U64>(GameData_1ac802a);
}

[[gnu::visibility("hidden")]] U64 GameStub_10d8df0() {
  return reinterpret_cast<U64>(GameData_1adba36);
}

[[gnu::visibility("hidden")]] U64 GameStub_10d8e70() {
  return reinterpret_cast<U64>(GameData_1aee6ce);
}

[[gnu::visibility("hidden")]] void GameStub_10de1a0() {
}

[[gnu::visibility("hidden")]] U64 GameStub_10e03b0() {
  return reinterpret_cast<U64>(GameData_1a99cf4);
}

[[gnu::visibility("hidden")]] U32 GameStub_10e3050() {
  return 127;
}

[[gnu::visibility("hidden")]] U64 GameStub_10e3060() {
  return reinterpret_cast<U64>(GameData_1af23f5);
}

[[gnu::visibility("hidden")]] void GameStub_10e3070() {
}

[[gnu::visibility("hidden")]] void GameStub_10e46e0(U64 object) {
  GameRoutine_10e4580(object - 0x28);
}

[[gnu::visibility("hidden")]] U64 GameStub_10e4b90() {
  return reinterpret_cast<U64>(GameData_1a86858);
}

[[gnu::visibility("hidden")]] U32 GameStub_10e4ba0() {
  return 1;
}

[[gnu::visibility("hidden")]] U64 GameStub_10e5db0() {
  return reinterpret_cast<U64>(GameData_1ab8e8e);
}

[[gnu::visibility("hidden")]] void GameStub_10e5eb0(U64 object) {
  GameRoutine_10e5ca0(object - 0x28);
}

[[gnu::visibility("hidden")]] U64 GameStub_10e6c00() {
  return reinterpret_cast<U64>(GameData_1ae6e76);
}

[[gnu::visibility("hidden")]] U64 GameStub_10f5f70() {
  return reinterpret_cast<U64>(GameData_1a8e4f2);
}

[[gnu::visibility("hidden")]] void GameStub_10f7be0() {
}

[[gnu::visibility("hidden")]] void GameStub_10f8340() {
}

[[gnu::visibility("hidden")]] void GameStub_10f9eb0() {
}

[[gnu::visibility("hidden")]] U64 GameStub_10fa9d0() {
  return reinterpret_cast<U64>(GameData_1a95f37);
}

[[gnu::visibility("hidden")]] void GameStub_10fb3a0() {
}

[[gnu::visibility("hidden")]] U64 GameStub_10fc9b0() {
  return reinterpret_cast<U64>(GameData_1ad763f);
}

[[gnu::visibility("hidden")]] U64 GameStub_10fdee0() {
  return reinterpret_cast<U64>(GameData_1a9dc86);
}

[[gnu::visibility("hidden")]] void GameStub_1100e70() {
}

[[gnu::visibility("hidden")]] void GameStub_1101cc0() {
}

[[gnu::visibility("hidden")]] void GameStub_1102690() {
}

[[gnu::visibility("hidden")]] U64 GameStub_1103e70() {
  return reinterpret_cast<U64>(GameData_1ac41fc);
}

[[gnu::visibility("hidden")]] U32 GameStub_1106a70() {
  return 126;
}

[[gnu::visibility("hidden")]] U64 GameStub_1106a80() {
  return reinterpret_cast<U64>(GameData_1adf1ad);
}

[[gnu::visibility("hidden")]] void GameStub_1107760() {
}

[[gnu::visibility("hidden")]] U64 GameStub_1108470() {
  return reinterpret_cast<U64>(GameData_1ab4eff);
}

[[gnu::visibility("hidden")]] U32 GameStub_11084b0() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_11084c0() {
  return 1;
}

[[gnu::visibility("hidden")]] U64 GameStub_11084d0() {
  return reinterpret_cast<U64>(GameData_1ac0c30);
}

[[gnu::visibility("hidden")]] U32 GameStub_1108510() {
  return 1;
}

[[gnu::visibility("hidden")]] U64 GameStub_1108520() {
  return reinterpret_cast<U64>(GameData_1ab8ea1);
}

[[gnu::visibility("hidden")]] U64 GameStub_1108560() {
  return reinterpret_cast<U64>(GameData_1aa977e);
}

[[gnu::visibility("hidden")]] U32 GameStub_11085a0() {
  return 1;
}

[[gnu::visibility("hidden")]] U64 GameStub_1109240() {
  return reinterpret_cast<U64>(GameData_1ab8eaa);
}

[[gnu::visibility("hidden")]] U64 GameStub_110a350() {
  return reinterpret_cast<U64>(GameData_1acbf52);
}

[[gnu::visibility("hidden")]] U32 GameStub_110a6c0() {
  return 1;
}

[[gnu::visibility("hidden")]] U64 GameStub_110afc0() {
  return reinterpret_cast<U64>(GameData_1aad566);
}

[[gnu::visibility("hidden")]] U64 GameStub_110b000() {
  return reinterpret_cast<U64>(GameData_1a8e503);
}

[[gnu::visibility("hidden")]] U32 GameStub_110d1b0() {
  return 1;
}

[[gnu::visibility("hidden")]] void GameStub_110d1c0() {
}

[[gnu::visibility("hidden")]] U32 GameStub_110d5a0() {
  return 2;
}

[[gnu::visibility("hidden")]] void GameStub_110d5b0() {
}

[[gnu::visibility("hidden")]] U64 GameStub_110e210() {
  return reinterpret_cast<U64>(GameData_1a9dc96);
}

[[gnu::visibility("hidden")]] void GameStub_1114db0() {
}

[[gnu::visibility("hidden")]] U32 GameStub_1115160() {
  return 7;
}

[[gnu::visibility("hidden")]] U32 GameStub_1115170() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_1115180() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_1115360() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 GameStub_1115370() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_1115680() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_1116430() {
  return 254;
}

[[gnu::visibility("hidden")]] U64 GameStub_1116440() {
  return reinterpret_cast<U64>(GameData_1acbe99);
}

[[gnu::visibility("hidden")]] U32 GameStub_111d780() {
  return 999;
}

[[gnu::visibility("hidden")]] U64 GameStub_111d790() {
  return reinterpret_cast<U64>(GameData_1a99d14);
}

[[gnu::visibility("hidden")]] U64 GameStub_112a280() {
  return reinterpret_cast<U64>(GameData_1afa2ad);
}

[[gnu::visibility("hidden")]] void GameStub_112a290(U64 object) {
  GameRoutine_112a0e0(object - 0x18);
}

[[gnu::visibility("hidden")]] void GameStub_112a320() {
}

[[gnu::visibility("hidden")]] void GameStub_112b400(U64 object) {
  GameRoutine_109d5e0(object + 0x58);
}

[[gnu::visibility("hidden")]] U32 GameStub_112b510() {
  return 126;
}

[[gnu::visibility("hidden")]] U64 GameStub_112b520() {
  return reinterpret_cast<U64>(GameData_1ae6ec2);
}

[[gnu::visibility("hidden")]] U64 GameStub_112ca80() {
  return reinterpret_cast<U64>(GameData_1af63d4);
}

[[gnu::visibility("hidden")]] void GameStub_11310c0(U64 object) {
  GameRoutine_1130ae0(object - 0x98);
}

[[gnu::visibility("hidden")]] void GameStub_11310d0(U64 object) {
  GameRoutine_1130ae0(object - 0xa0);
}

[[gnu::visibility("hidden")]] void GameStub_11354d0() {
}

[[gnu::visibility("hidden")]] void GameStub_1138940() {
}

[[gnu::visibility("hidden")]] void GameStub_1139570() {
}

[[gnu::visibility("hidden")]] void GameStub_1148910() {
}

[[gnu::visibility("hidden")]] void GameStub_1149d20(U64 object) {
  GameRoutine_1149600(object - 0x98);
}

[[gnu::visibility("hidden")]] void GameStub_1151a00() {
}

[[gnu::visibility("hidden")]] U64 GameStub_1152d80() {
  return reinterpret_cast<U64>(GameData_2013400);
}

[[gnu::visibility("hidden")]] U64 GameStub_11536c0() {
  return reinterpret_cast<U64>(GameData_2013480);
}

[[gnu::visibility("hidden")]] U64 GameStub_1160980() {
  return reinterpret_cast<U64>(GameData_2013580);
}

[[gnu::visibility("hidden")]] U64 GameStub_1161970() {
  return reinterpret_cast<U64>(GameData_2013800);
}

[[gnu::visibility("hidden")]] U64 GameStub_1161e30() {
  return reinterpret_cast<U64>(GameData_2013880);
}

[[gnu::visibility("hidden")]] void GameStub_118a0b0() {
}

[[gnu::visibility("hidden")]] U32 GameStub_11918a0() {
  return 0;
}

[[gnu::visibility("hidden")]] void GameStub_1195180(U64 object) {
  GameRoutine_1194e80(object - 0x98);
}

[[gnu::visibility("hidden")]] void GameStub_119cab0() {
}

[[gnu::visibility("hidden")]] void GameStub_11c36f0() {
}

[[gnu::visibility("hidden")]] U64 GameStub_11c37d0() {
  return reinterpret_cast<U64>(GameData_2016830);
}

[[gnu::visibility("hidden")]] U64 GameStub_11c6830() {
  return reinterpret_cast<U64>(GameData_2016930);
}

[[gnu::visibility("hidden")]] void GameStub_11c6be0() {
}

[[gnu::visibility("hidden")]] U64 GameStub_11c6c90() {
  return reinterpret_cast<U64>(GameData_20169b0);
}

[[gnu::visibility("hidden")]] void GameStub_11ce8e0() {
}

[[gnu::visibility("hidden")]] U32 GameStub_11eec40() {
  return 1;
}

[[gnu::visibility("hidden")]] void GameStub_11eec80() {
}

[[gnu::visibility("hidden")]] U64 GameStub_11eed30(U64, U64 other) {
  return GameRoutine_11f4360(At<U64>(other, 0x0), other);
}

[[gnu::visibility("hidden")]] void GameStub_11f75e0() {
}

[[gnu::visibility("hidden")]] U64 GameStub_11f7680() {
  return reinterpret_cast<U64>(GameData_2018548);
}

[[gnu::visibility("hidden")]] void GameStub_11f8630() {
}

[[gnu::visibility("hidden")]] U32 GameStub_11f8730() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_11fb7c0() {
  return 1;
}

[[gnu::visibility("hidden")]] void GameStub_11ffe10() {
}

[[gnu::visibility("hidden")]] U64 GameStub_1200010() {
  return reinterpret_cast<U64>(GameData_20189a8);
}

[[gnu::visibility("hidden")]] void GameStub_12002e0() {
}

[[gnu::visibility("hidden")]] void GameStub_1200390() {
}

[[gnu::visibility("hidden")]] void GameStub_12003d0() {
}

[[gnu::visibility("hidden")]] void GameStub_1200480() {
}

[[gnu::visibility("hidden")]] void GameStub_12099f0() {
}

[[gnu::visibility("hidden")]] void GameStub_120a240() {
}

[[gnu::visibility("hidden")]] void GameStub_120a850() {
}

[[gnu::visibility("hidden")]] void GameStub_1215aa0() {
}

[[gnu::visibility("hidden")]] U32 GameStub_1215e90() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_1216330() {
  return 1;
}

[[gnu::visibility("hidden")]] void GameStub_1223d60() {
}

[[gnu::visibility("hidden")]] U32 GameStub_12248b0() {
  return 1;
}

[[gnu::visibility("hidden")]] void GameStub_122f7c0() {
}

[[gnu::visibility("hidden")]] void GameStub_122fef0() {
}

[[gnu::visibility("hidden")]] void GameStub_1232250() {
}

[[gnu::visibility("hidden")]] void GameStub_1235470() {
}

[[gnu::visibility("hidden")]] void GameStub_12354f0() {
}

[[gnu::visibility("hidden")]] void GameStub_123ce90() {
}

[[gnu::visibility("hidden")]] void GameStub_12435f0() {
}

[[gnu::visibility("hidden")]] void GameStub_1243770() {
}

[[gnu::visibility("hidden")]] void GameStub_1243df0() {
}

[[gnu::visibility("hidden")]] void GameStub_1244390() {
}

[[gnu::visibility("hidden")]] void GameStub_1244ba0() {
}

[[gnu::visibility("hidden")]] void GameStub_1244bb0() {
}

[[gnu::visibility("hidden")]] void GameStub_1244bc0() {
}

[[gnu::visibility("hidden")]] void GameStub_1244bd0() {
}

[[gnu::visibility("hidden")]] void GameStub_1245220(U64 object) {
  GameRoutine_1244f60(object - 0x8);
}

[[gnu::visibility("hidden")]] void GameStub_1245230() {
}

[[gnu::visibility("hidden")]] void GameStub_1245240() {
}

[[gnu::visibility("hidden")]] void GameStub_12493d0() {
}

[[gnu::visibility("hidden")]] U64 GameStub_12546a0(U64 object) {
  return GameRoutine_12645e0(At<U64>(object, 0x98));
}

[[gnu::visibility("hidden")]] void GameStub_12595b0(U64 object) {
  GameRoutine_1259360(object - 0x8);
}

[[gnu::visibility("hidden")]] U64 GameStub_125edf0() {
  return reinterpret_cast<U64>(GameData_1a86bf0);
}

[[gnu::visibility("hidden")]] U64 GameStub_125ee00() {
  return reinterpret_cast<U64>(GameData_1a86bf0);
}

[[gnu::visibility("hidden")]] U32 GameStub_125ee10() {
  return 4;
}

[[gnu::visibility("hidden")]] U32 GameStub_125ee20() {
  return 4;
}

[[gnu::visibility("hidden")]] void GameStub_125ee30() {
  GameRoutine_1258820();
}

[[gnu::visibility("hidden")]] void GameStub_125ee40(U64 object) {
  GameRoutine_1258820(object - 0x8);
}

[[gnu::visibility("hidden")]] void GameStub_125ee50() {
}

[[gnu::visibility("hidden")]] void GameStub_125ee60() {
}

[[gnu::visibility("hidden")]] void GameStub_12601c0(U64 object) {
  GameRoutine_125ee80(object - 0x8);
}

[[gnu::visibility("hidden")]] void GameStub_12609c0(U64 object) {
  GameRoutine_12601e0(object - 0x8);
}

[[gnu::visibility("hidden")]] U32 GameStub_12619a0() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_12619b0() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_1261c90() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_1261ca0() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_1261cb0() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_1265b70() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_1265b80() {
  return 1;
}

[[gnu::visibility("hidden")]] void GameStub_1265bd0() {
}

[[gnu::visibility("hidden")]] U32 GameStub_1265be0() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_1265bf0() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_1265c00() {
  return 1;
}

[[gnu::visibility("hidden")]] void GameStub_1269880() {
}

[[gnu::visibility("hidden")]] void GameStub_126de30() {
}

[[gnu::visibility("hidden")]] U32 GameStub_1272730() {
  return 3;
}

[[gnu::visibility("hidden")]] void GameStub_12740c0() {
}

[[gnu::visibility("hidden")]] void GameStub_12744c0(U64 object) {
  GameRoutine_1274220(object - 0x38);
}

[[gnu::visibility("hidden")]] void GameStub_12744d0() {
}

[[gnu::visibility("hidden")]] void GameStub_1274bc0(U64 object) {
  GameRoutine_1274a50(object - 0x3248);
}

[[gnu::visibility("hidden")]] void GameStub_1275340() {
}

[[gnu::visibility("hidden")]] void GameStub_1275350() {
}

[[gnu::visibility("hidden")]] void GameStub_1281610() {
}

[[gnu::visibility("hidden")]] void GameStub_1281740() {
}

[[gnu::visibility("hidden")]] U32 GameStub_12817f0() {
  return 1;
}

[[gnu::visibility("hidden")]] void GameStub_1281830() {
}

[[gnu::visibility("hidden")]] U32 GameStub_12818e0() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_12819c0() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_1281aa0() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_1281b80() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_1281c60() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_1281d40() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_1281e20() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_1285600() {
  return 1;
}

[[gnu::visibility("hidden")]] void GameStub_1286ca0() {
}

[[gnu::visibility("hidden")]] void GameStub_1286ed0() {
}

[[gnu::visibility("hidden")]] U32 GameStub_129b450() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_129b460() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_129bb00() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_129d640() {
  return 1;
}

[[gnu::visibility("hidden")]] void GameStub_12a1040() {
}

[[gnu::visibility("hidden")]] U32 GameStub_12a2a90() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 GameStub_12a2aa0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 GameStub_12a2ab0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 GameStub_12a2ac0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 GameStub_12a2ad0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 GameStub_12a2ae0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 GameStub_12a2b20() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 GameStub_12a2ce0() {
  return 1;
}

[[gnu::visibility("hidden")]] void GameStub_12a3a00() {
}

[[gnu::visibility("hidden")]] U32 GameStub_12a4b60() {
  return 1;
}

[[gnu::visibility("hidden")]] void GameStub_12a4ba0() {
}

[[gnu::visibility("hidden")]] U32 GameStub_12a4c50() {
  return 1;
}

[[gnu::visibility("hidden")]] void GameStub_12a72b0() {
}

[[gnu::visibility("hidden")]] void GameStub_12a74d0() {
}

[[gnu::visibility("hidden")]] void GameStub_12adab0() {
}

[[gnu::visibility("hidden")]] void GameStub_12adac0() {
}

[[gnu::visibility("hidden")]] void GameStub_12ae080() {
}

[[gnu::visibility("hidden")]] void GameStub_12ae270() {
}

[[gnu::visibility("hidden")]] void GameStub_12b4b70(U64 object) {
  GameRoutine_12b49e0(object - 0x8);
}

[[gnu::visibility("hidden")]] U64 GameStub_12b5c60() {
  return reinterpret_cast<U64>(GameData_1ae72d2);
}

[[gnu::visibility("hidden")]] U64 GameStub_12b5c70() {
  return reinterpret_cast<U64>(GameData_1ae72d2);
}

[[gnu::visibility("hidden")]] U32 GameStub_12b5c80() {
  return 4;
}

[[gnu::visibility("hidden")]] U32 GameStub_12b5c90() {
  return 4;
}

[[gnu::visibility("hidden")]] void GameStub_12b5ca0() {
  GameRoutine_12b42e0();
}

[[gnu::visibility("hidden")]] void GameStub_12b5cb0(U64 object) {
  GameRoutine_12b42e0(object - 0x8);
}

[[gnu::visibility("hidden")]] void GameStub_12b5cc0() {
}

[[gnu::visibility("hidden")]] void GameStub_12b5cd0() {
}

[[gnu::visibility("hidden")]] void GameStub_12b6140(U64 object) {
  GameRoutine_12b5ce0(object - 0x8);
}

[[gnu::visibility("hidden")]] void GameStub_12b6af0(U64 object) {
  GameRoutine_12b6160(object - 0x8);
}

[[gnu::visibility("hidden")]] void GameStub_12bd010(U64 object) {
  GameRoutine_12bcb40(object - 0x8);
}

[[gnu::visibility("hidden")]] void GameStub_12bd020() {
}

[[gnu::visibility("hidden")]] void GameStub_12bd030() {
}

[[gnu::visibility("hidden")]] U32 GameStub_12c6070(U64 object) {
  return At<U32>(object, 0x60);
}

[[gnu::visibility("hidden")]] U32 GameStub_12c6080() {
  return 1;
}

[[gnu::visibility("hidden")]] U64 GameStub_12c6090(U64 object) {
  return At<U64>(object, 0x60);
}

[[gnu::visibility("hidden")]] U32 GameStub_12c60a0(U64 object) {
  return At<U32>(object, 0x6c);
}

[[gnu::visibility("hidden")]] U32 GameStub_12c60b0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 GameStub_12c60d0(U64 object) {
  return At<U32>(object, 0x74);
}

[[gnu::visibility("hidden")]] U32 GameStub_12c60e0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 GameStub_12c6e10() {
  return 200;
}

[[gnu::visibility("hidden")]] void GameStub_12c7080() {
}

[[gnu::visibility("hidden")]] void GameStub_12c7090() {
}

[[gnu::visibility("hidden")]] void GameStub_12c70a0() {
}

[[gnu::visibility("hidden")]] void GameStub_12c70b0() {
}

[[gnu::visibility("hidden")]] void GameStub_12c7210() {
}

[[gnu::visibility("hidden")]] void GameStub_12c7220() {
}

[[gnu::visibility("hidden")]] void GameStub_12c7230() {
}

[[gnu::visibility("hidden")]] void GameStub_12c7240() {
}

[[gnu::visibility("hidden")]] void GameStub_12c90f0() {
}

[[gnu::visibility("hidden")]] void GameStub_12c9100() {
}

[[gnu::visibility("hidden")]] void GameStub_12c9110() {
}

[[gnu::visibility("hidden")]] void GameStub_12c9120() {
}

[[gnu::visibility("hidden")]] void GameStub_12db250(U64 object) {
  GameRoutine_12daf80(object - 0x8);
}

[[gnu::visibility("hidden")]] U64 GameStub_12deaa0() {
  return reinterpret_cast<U64>(GameData_1adf70d);
}

[[gnu::visibility("hidden")]] U64 GameStub_12deab0() {
  return reinterpret_cast<U64>(GameData_1adf70d);
}

[[gnu::visibility("hidden")]] U32 GameStub_12deac0() {
  return 6;
}

[[gnu::visibility("hidden")]] U32 GameStub_12dead0() {
  return 6;
}

[[gnu::visibility("hidden")]] void GameStub_12debc0() {
}

[[gnu::visibility("hidden")]] void GameStub_12debd0() {
}

[[gnu::visibility("hidden")]] void GameStub_12df720(U64 object) {
  GameRoutine_12debe0(object - 0x8);
}

[[gnu::visibility("hidden")]] void GameStub_12dff80(U64 object) {
  GameRoutine_12df740(object - 0x8);
}

[[gnu::visibility("hidden")]] void GameStub_12e0570() {
}

[[gnu::visibility("hidden")]] U32 GameStub_12e1eb0() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 GameStub_12e1f90() {
  return 3;
}

[[gnu::visibility("hidden")]] void GameStub_12e2590() {
}

[[gnu::visibility("hidden")]] void GameStub_12e6bf0(U64 object) {
  GameRoutine_12e6980(object - 0x8);
}

[[gnu::visibility("hidden")]] void GameStub_12e6c00() {
}

[[gnu::visibility("hidden")]] void GameStub_12e6c10() {
}

[[gnu::visibility("hidden")]] void GameStub_12f37c0() {
}

[[gnu::visibility("hidden")]] U32 GameStub_12f3ad0() {
  return 1;
}

[[gnu::visibility("hidden")]] void GameStub_12f3b10() {
}

[[gnu::visibility("hidden")]] void GameStub_12f4730() {
}

[[gnu::visibility("hidden")]] void GameStub_1309ff0() {
}

[[gnu::visibility("hidden")]] void GameStub_130a000() {
}

[[gnu::visibility("hidden")]] void GameStub_130a080() {
}

[[gnu::visibility("hidden")]] U64 GameStub_130ce70() {
  return reinterpret_cast<U64>(GameData_1adbf06);
}

[[gnu::visibility("hidden")]] U64 GameStub_130ce80() {
  return reinterpret_cast<U64>(GameData_1adbf06);
}

[[gnu::visibility("hidden")]] U32 GameStub_130ce90() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 GameStub_130cea0() {
  return 0;
}

[[gnu::visibility("hidden")]] void GameStub_130ced0() {
}

[[gnu::visibility("hidden")]] void GameStub_130cee0() {
}

[[gnu::visibility("hidden")]] void GameStub_130d4e0(U64 object) {
  GameRoutine_130d180(object - 0x8);
}

[[gnu::visibility("hidden")]] void GameStub_1310da0() {
}

[[gnu::visibility("hidden")]] void GameStub_1311680() {
}

[[gnu::visibility("hidden")]] void GameStub_1317280() {
  GameRoutine_1317050();
}

[[gnu::visibility("hidden")]] void GameStub_131cfa0(U64 object) {
  GameRoutine_131cdf0(object - 0x420);
}

[[gnu::visibility("hidden")]] void GameStub_131d100() {
}

[[gnu::visibility("hidden")]] U64 GameStub_131d160() {
  return reinterpret_cast<U64>(GameData_1ac10b2);
}

[[gnu::visibility("hidden")]] U32 GameStub_131d170() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_131d180() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_131e330() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 GameStub_131e8b0() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 GameStub_131ec00() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 GameStub_131f590() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 GameStub_1320440() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 GameStub_1321e50() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 GameStub_1322390() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 GameStub_1323070() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 GameStub_1323710() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 GameStub_1323e20() {
  return 3;
}

[[gnu::visibility("hidden")]] void GameStub_13250c0() {
}

[[gnu::visibility("hidden")]] void GameStub_132d070() {
}

[[gnu::visibility("hidden")]] U32 GameStub_132d330() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_13375b0() {
  return 20;
}

[[gnu::visibility("hidden")]] void GameStub_13375f0() {
}

[[gnu::visibility("hidden")]] U32 GameStub_1338c80() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_1338d60() {
  return 1;
}

[[gnu::visibility("hidden")]] void GameStub_133b540() {
}

[[gnu::visibility("hidden")]] U32 GameStub_1345320() {
  return 1;
}

[[gnu::visibility("hidden")]] U64 GameStub_1354290(U64, U64 other) {
  return GameRoutine_1340cb0(At<U64>(other, 0x0), other);
}

[[gnu::visibility("hidden")]] U32 GameStub_1356490() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_1356840() {
  return 1;
}

[[gnu::visibility("hidden")]] void GameStub_1356c00() {
}

[[gnu::visibility("hidden")]] U64 GameStub_1359ce0(U64, U64 other) {
  return GameRoutine_6cfa20(At<U64>(other, 0x0), other);
}

[[gnu::visibility("hidden")]] U64 GameStub_1359dc0(U64, U64 other) {
  return GameRoutine_6cfa20(At<U64>(other, 0x0), other);
}

[[gnu::visibility("hidden")]] U64 GameStub_135aec0() {
  return reinterpret_cast<U64>(GameData_1aa5d4f);
}

[[gnu::visibility("hidden")]] U64 GameStub_135aed0() {
  return reinterpret_cast<U64>(GameData_1aa5d4f);
}

[[gnu::visibility("hidden")]] void GameStub_135f5a0() {
}

[[gnu::visibility("hidden")]] void GameStub_135ff30(U64 object) {
  GameRoutine_135fcc0(object - 0x8);
}

[[gnu::visibility("hidden")]] U64 GameStub_13604b0() {
  return reinterpret_cast<U64>(GameData_1afe396);
}

[[gnu::visibility("hidden")]] U64 GameStub_13604c0() {
  return reinterpret_cast<U64>(GameData_1afe396);
}

[[gnu::visibility("hidden")]] U32 GameStub_13604d0() {
  return 12;
}

[[gnu::visibility("hidden")]] U32 GameStub_13604e0() {
  return 12;
}

[[gnu::visibility("hidden")]] void GameStub_13605f0() {
}

[[gnu::visibility("hidden")]] void GameStub_1360600() {
}

[[gnu::visibility("hidden")]] void GameStub_13608d0(U64 object) {
  GameRoutine_1360620(object - 0x8);
}

[[gnu::visibility("hidden")]] void GameStub_1360b70(U64 object) {
  GameRoutine_13608e0(object - 0x8);
}

[[gnu::visibility("hidden")]] void GameStub_1364530() {
}

[[gnu::visibility("hidden")]] U64 GameStub_13645e0(U64, U64 other) {
  return GameRoutine_5791a0(At<U64>(other, 0x0), other);
}

[[gnu::visibility("hidden")]] U32 GameStub_1368ac0() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_1368ad0() {
  return 4096;
}

[[gnu::visibility("hidden")]] U32 GameStub_136bb50() {
  return 1;
}

[[gnu::visibility("hidden")]] void GameStub_137e4b0() {
  GameRoutine_137d940();
}

[[gnu::visibility("hidden")]] void GameStub_13881c0() {
}

[[gnu::visibility("hidden")]] U64 GameStub_1388310() {
  return reinterpret_cast<U64>(GameData_2032c40);
}

[[gnu::visibility("hidden")]] void GameStub_1388450() {
}

[[gnu::visibility("hidden")]] void GameStub_138fd50() {
}

[[gnu::visibility("hidden")]] void GameStub_13904f0() {
}

[[gnu::visibility("hidden")]] U64 GameStub_13909b0() {
  return reinterpret_cast<U64>(GameData_2033308);
}

[[gnu::visibility("hidden")]] void GameStub_1391810() {
}

[[gnu::visibility("hidden")]] void GameStub_1391820() {
}

[[gnu::visibility("hidden")]] void GameStub_1391830() {
}

[[gnu::visibility("hidden")]] void GameStub_1391840() {
}

[[gnu::visibility("hidden")]] void GameStub_1392330() {
  GameRoutine_13920a0();
}

[[gnu::visibility("hidden")]] void GameStub_13d2980() {
}

[[gnu::visibility("hidden")]] void GameStub_13db8c0() {
  GameRoutine_15f9b40();
}

[[gnu::visibility("hidden")]] void GameStub_13defd0(U64 object) {
  GameRoutine_13da3a0(object + 0xb8);
}

[[gnu::visibility("hidden")]] void GameStub_13e29a0(U64 object) {
  GameRoutine_13e2550(object - 0x98);
}

[[gnu::visibility("hidden")]] void GameStub_13e2b30(U64 object) {
  GameRoutine_13dabb0(object + 0xb8);
}

[[gnu::visibility("hidden")]] void GameStub_13e3440(U64 object) {
  GameRoutine_13e3030(object - 0x98);
}

[[gnu::visibility("hidden")]] void GameStub_13e3550(U64 object) {
  GameRoutine_13dafd0(object + 0x20);
}

[[gnu::visibility("hidden")]] void GameStub_13e57e0() {
}

[[gnu::visibility("hidden")]] void GameStub_13e57f0() {
}

[[gnu::visibility("hidden")]] void GameStub_13e5800() {
}

[[gnu::visibility("hidden")]] void GameStub_13e5810() {
}

[[gnu::visibility("hidden")]] void GameStub_13e5cf0() {
}

[[gnu::visibility("hidden")]] void GameStub_13e5d00() {
}

[[gnu::visibility("hidden")]] void GameStub_13e5d10() {
}

[[gnu::visibility("hidden")]] void GameStub_13e5d20() {
}

[[gnu::visibility("hidden")]] U64 GameStub_13faae0() {
  return reinterpret_cast<U64>(GameData_2037930);
}

[[gnu::visibility("hidden")]] U32 GameStub_13fb060() {
  return 3;
}

[[gnu::visibility("hidden")]] U64 GameStub_13fb2c0(U64 object) {
  return GameRoutine_94abe0(At<U64>(object, 0x58));
}

[[gnu::visibility("hidden")]] U64 GameStub_13fe820() {
  return reinterpret_cast<U64>(GameData_2038568);
}

[[gnu::visibility("hidden")]] void GameStub_1402be0(U64 object) {
  GameRoutine_a0d9a0(object + 0x20);
}

[[gnu::visibility("hidden")]] U64 GameStub_14033f0() {
  return reinterpret_cast<U64>(GameData_20388b8);
}

[[gnu::visibility("hidden")]] void GameStub_1403660(U64 object) {
  GameRoutine_a0d9a0(object + 0x20);
}

[[gnu::visibility("hidden")]] U64 GameStub_14037c0() {
  return reinterpret_cast<U64>(GameData_20388a8);
}

[[gnu::visibility("hidden")]] U64 GameStub_1403c20() {
  return reinterpret_cast<U64>(GameData_2038938);
}

[[gnu::visibility("hidden")]] void GameStub_1403e00() {
}

[[gnu::visibility("hidden")]] void GameStub_1404d60() {
}

[[gnu::visibility("hidden")]] void GameStub_1405220() {
}

[[gnu::visibility("hidden")]] void GameStub_1408ec0(U64 object) {
  GameRoutine_14084c0(object - 0x98);
}

[[gnu::visibility("hidden")]] void GameStub_1408f30() {
  GameRoutine_14086a0();
}

[[gnu::visibility("hidden")]] void GameStub_1408f40(U64 object) {
  GameRoutine_14087c0(object - 0x98);
}

[[gnu::visibility("hidden")]] void GameStub_1408f50(U64 object) {
  GameRoutine_140a590(object + 0x20);
}

[[gnu::visibility("hidden")]] bool GameStub_1408ff0(U64 object) {
  return At<U64>(object, 0x40) != 0;
}

[[gnu::visibility("hidden")]] void GameStub_14096a0() {
  GameRoutine_15e6500();
}

[[gnu::visibility("hidden")]] void GameStub_1416c30() {
}

[[gnu::visibility("hidden")]] U64 GameStub_14174c0(U64 object) {
  return GameRoutine_14164a0(At<U64>(object, 0x8));
}

[[gnu::visibility("hidden")]] void GameStub_141b940(U64 object) {
  GameRoutine_141ad20(object + 0xb8);
}

[[gnu::visibility("hidden")]] void GameStub_141c9c0(U64 object) {
  GameRoutine_141c620(object - 0x98);
}

[[gnu::visibility("hidden")]] void GameStub_141ca60(U64 object) {
  GameRoutine_141b2c0(object + 0x20);
}

[[gnu::visibility("hidden")]] void GameStub_141fb40() {
  GameRoutine_197ebc0();
}

[[gnu::visibility("hidden")]] void GameStub_1420c70() {
  GameRoutine_1924d00();
}

[[gnu::visibility("hidden")]] void GameStub_1420eb0() {
  GameRoutine_f9af30();
}

[[gnu::visibility("hidden")]] void GameStub_1421b30() {
}

[[gnu::visibility("hidden")]] void GameStub_1421b40() {
}

[[gnu::visibility("hidden")]] void GameStub_1428030(U64 object) {
  GameRoutine_1425d40(object + 0xb8);
}

[[gnu::visibility("hidden")]] void GameStub_1428cd0(U64 object) {
  GameRoutine_1428820(object - 0x98);
}

[[gnu::visibility("hidden")]] void GameStub_1428e80(U64 object) {
  GameRoutine_14269e0(object + 0x20);
}

[[gnu::visibility("hidden")]] void GameStub_14292f0() {
  GameRoutine_1429bc0();
}

[[gnu::visibility("hidden")]] void GameStub_142a790() {
  GameRoutine_15f5ec0();
}

[[gnu::visibility("hidden")]] void GameStub_142b8b0() {
  GameRoutine_142c160();
}

[[gnu::visibility("hidden")]] void GameStub_14356a0() {
  GameRoutine_1435d90();
}

[[gnu::visibility("hidden")]] U64 GameStub_1435fd0() {
  return reinterpret_cast<U64>(GameData_1ade232);
}

[[gnu::visibility("hidden")]] U32 GameStub_1435fe0() {
  return 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_1435ff0() {
  return reinterpret_cast<U64>(GameData_1aa95d0);
}

[[gnu::visibility("hidden")]] U64 GameStub_1436000() {
  return 0x0;
}

[[gnu::visibility("hidden")]] U64 GameStub_1436010() {
  return reinterpret_cast<U64>(GameData_1aa95d0);
}

[[gnu::visibility("hidden")]] U64 GameStub_1436020() {
  return 0x0;
}

[[gnu::visibility("hidden")]] U32 GameStub_1436030() {
  return 0;
}

[[gnu::visibility("hidden")]] void GameStub_14383b0(U64 object) {
  GameRoutine_1437cc0(object - 0xd0);
}

[[gnu::visibility("hidden")]] U64 GameStub_14391c0() {
  return 0x0;
}

[[gnu::visibility("hidden")]] U32 GameStub_1439320() {
  return 1;
}

[[gnu::visibility("hidden")]] void GameStub_14393d0() {
}

[[gnu::visibility("hidden")]] void GameStub_14393e0() {
}

[[gnu::visibility("hidden")]] U64 GameStub_1439880() {
  return reinterpret_cast<U64>(GameData_203de70);
}

[[gnu::visibility("hidden")]] U64 GameStub_143a4a0() {
  return 0x0;
}

[[gnu::visibility("hidden")]] U64 GameStub_143a4b0() {
  return 0x0;
}

[[gnu::visibility("hidden")]] U64 GameStub_143a4c0() {
  return 0x0;
}

[[gnu::visibility("hidden")]] U64 GameStub_143a4d0() {
  return 0x0;
}

[[gnu::visibility("hidden")]] void GameStub_143a4e0() {
}

[[gnu::visibility("hidden")]] U32 GameStub_143a4f0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 GameStub_143bfd0() {
  return 1;
}

[[gnu::visibility("hidden")]] U64 GameStub_143c440() {
  return 0x0;
}

[[gnu::visibility("hidden")]] U32 GameStub_143c930() {
  return 1;
}

[[gnu::visibility("hidden")]] U64 GameStub_143cd20() {
  return 0x0;
}

[[gnu::visibility("hidden")]] U64 GameStub_143cd30() {
  return 0x0;
}

[[gnu::visibility("hidden")]] U64 GameStub_143cd40() {
  return 0x0;
}

[[gnu::visibility("hidden")]] void GameStub_143cd50() {
}

[[gnu::visibility("hidden")]] U32 GameStub_143cd60() {
  return 0;
}

[[gnu::visibility("hidden")]] void GameStub_143ce10() {
}

[[gnu::visibility("hidden")]] void GameStub_143ce20() {
}

[[gnu::visibility("hidden")]] void GameStub_143ce30() {
}

[[gnu::visibility("hidden")]] void GameStub_143ce40() {
}

[[gnu::visibility("hidden")]] void GameStub_143ec00() {
}

[[gnu::visibility("hidden")]] void GameStub_143ec10() {
}

[[gnu::visibility("hidden")]] void GameStub_143ec20() {
}

[[gnu::visibility("hidden")]] void GameStub_143ec30() {
}

[[gnu::visibility("hidden")]] void GameStub_143f2a0() {
}

[[gnu::visibility("hidden")]] void GameStub_143f2b0() {
}

[[gnu::visibility("hidden")]] void GameStub_143f2c0() {
}

[[gnu::visibility("hidden")]] void GameStub_143f2d0() {
}

[[gnu::visibility("hidden")]] void GameStub_144dcb0() {
}

[[gnu::visibility("hidden")]] void GameStub_1454fb0() {
}

[[gnu::visibility("hidden")]] void GameStub_1454ff0() {
}

[[gnu::visibility("hidden")]] U32 GameStub_1455000() {
  return 1;
}

[[gnu::visibility("hidden")]] void GameStub_1455040() {
}

[[gnu::visibility("hidden")]] void GameStub_1455050() {
}

[[gnu::visibility("hidden")]] void GameStub_14550c0() {
}

[[gnu::visibility("hidden")]] void GameStub_1455100() {
}

[[gnu::visibility("hidden")]] U32 GameStub_1455110() {
  return 1;
}

[[gnu::visibility("hidden")]] void GameStub_1456b10() {
}

[[gnu::visibility("hidden")]] U32 GameStub_1456b20() {
  return 0;
}

[[gnu::visibility("hidden")]] void GameStub_1456b30() {
}

[[gnu::visibility("hidden")]] void GameStub_1456fc0() {
}

[[gnu::visibility("hidden")]] U64 GameStub_14572a0() {
  return reinterpret_cast<U64>(GameData_203f470);
}

[[gnu::visibility("hidden")]] void GameStub_1457cf0() {
  GameRoutine_1457460();
}

[[gnu::visibility("hidden")]] U32 GameStub_1463ad0() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_1463ae0() {
  return 7;
}

[[gnu::visibility("hidden")]] U32 GameStub_1463af0() {
  return 1;
}

[[gnu::visibility("hidden")]] U64 GameStub_1463b00() {
  return reinterpret_cast<U64>(GameData_1ae37b6);
}

[[gnu::visibility("hidden")]] U32 GameStub_1463c40() {
  return 4;
}

[[gnu::visibility("hidden")]] U32 GameStub_1463c50() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_1463c60() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_1463c70() {
  return 7;
}

[[gnu::visibility("hidden")]] U64 GameStub_1463c80() {
  return reinterpret_cast<U64>(GameData_1ae37b6);
}

[[gnu::visibility("hidden")]] U32 GameStub_1463dc0() {
  return 4;
}

[[gnu::visibility("hidden")]] void GameStub_14653f0(U64 object) {
  GameRoutine_9bb020(object + 0x10);
}

[[gnu::visibility("hidden")]] void GameStub_1466310(U64 object) {
  GameRoutine_1427b00(object + 0xb8);
}

[[gnu::visibility("hidden")]] void GameStub_1466dd0(U64 object) {
  GameRoutine_1427120(object + 0xb8);
}

[[gnu::visibility("hidden")]] void GameStub_1467610(U64 object) {
  GameRoutine_141b5f0(object + 0xb8);
}

[[gnu::visibility("hidden")]] void GameStub_14691a0() {
}

[[gnu::visibility("hidden")]] U32 GameStub_1469bf0() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_1469c00() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 GameStub_1469c10() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 GameStub_1469c20() {
  return 1;
}

[[gnu::visibility("hidden")]] U64 GameStub_146ea60() {
  return reinterpret_cast<U64>(GameData_2040f48);
}

[[gnu::visibility("hidden")]] void GameStub_1470620(U64 object) {
  GameRoutine_146f400(object - 0xd0);
}

[[gnu::visibility("hidden")]] void GameStub_1470780() {
  GameRoutine_1470260();
}

[[gnu::visibility("hidden")]] U64 GameStub_1471070() {
  return reinterpret_cast<U64>(GameData_1ab1794);
}

[[gnu::visibility("hidden")]] U64 GameStub_1471120(U64, U64 other) {
  return GameRoutine_81a240(At<U64>(other, 0x0), other);
}

[[gnu::visibility("hidden")]] void GameStub_14737d0() {
}

[[gnu::visibility("hidden")]] void GameStub_1473aa0() {
  GameRoutine_1474710();
}

[[gnu::visibility("hidden")]] void GameStub_1474090() {
}

[[gnu::visibility("hidden")]] void GameStub_14740a0() {
  GameRoutine_16dac80();
}

[[gnu::visibility("hidden")]] void GameStub_1474240() {
  GameRoutine_1474c40();
}

[[gnu::visibility("hidden")]] void GameStub_1475170(U64 object) {
  GameRoutine_1472c90(object + 0xb8);
}

[[gnu::visibility("hidden")]] void GameStub_1475fc0(U64 object) {
  GameRoutine_1472dc0(object + 0xb8);
}

[[gnu::visibility("hidden")]] void GameStub_1476930() {
  GameRoutine_1477340();
}

[[gnu::visibility("hidden")]] U64 GameStub_14777c0(U64 object) {
  return GameRoutine_14771f0(At<U64>(object, 0x8));
}

[[gnu::visibility("hidden")]] U64 GameStub_1477e20(U64 object) {
  return GameRoutine_14771f0(At<U64>(object, 0x8));
}

[[gnu::visibility("hidden")]] void GameStub_1479810(U64 object) {
  GameRoutine_1495040(object - 0x98);
}

[[gnu::visibility("hidden")]] void GameStub_1479f50(U64 object) {
  GameRoutine_1495040(object - 0x98);
}

[[gnu::visibility("hidden")]] void GameStub_147b2f0() {
  GameRoutine_147af00();
}

[[gnu::visibility("hidden")]] void GameStub_147b390() {
  GameRoutine_147bc20();
}

[[gnu::visibility("hidden")]] void GameStub_147e850() {
  GameRoutine_147e0e0();
}

[[gnu::visibility("hidden")]] void GameStub_1487230() {
}

[[gnu::visibility("hidden")]] void GameStub_1487240() {
}

[[gnu::visibility("hidden")]] void GameStub_1488c60() {
}

[[gnu::visibility("hidden")]] void GameStub_1488c70() {
}

[[gnu::visibility("hidden")]] void GameStub_148d800() {
}

[[gnu::visibility("hidden")]] U64 GameStub_148d9f0() {
  return reinterpret_cast<U64>(GameData_2043438);
}

[[gnu::visibility("hidden")]] void GameStub_1495190(U64 object) {
  GameRoutine_1495040(object - 0x98);
}

[[gnu::visibility("hidden")]] void GameStub_1495490() {
  GameRoutine_1451220();
}

[[gnu::visibility("hidden")]] void GameStub_1498710() {
  GameRoutine_140b880();
}

[[gnu::visibility("hidden")]] void GameStub_14991f0() {
  GameRoutine_140bf80();
}

[[gnu::visibility("hidden")]] void GameStub_1499ea0() {
}

[[gnu::visibility("hidden")]] void GameStub_1499eb0() {
}

[[gnu::visibility("hidden")]] void GameStub_149a2b0() {
}

[[gnu::visibility("hidden")]] void GameStub_149a2c0() {
}

[[gnu::visibility("hidden")]] void GameStub_149a340() {
}

[[gnu::visibility("hidden")]] void GameStub_149a350() {
}

[[gnu::visibility("hidden")]] void GameStub_149a360() {
}

[[gnu::visibility("hidden")]] void GameStub_149a370() {
}

[[gnu::visibility("hidden")]] void GameStub_149f830() {
}

[[gnu::visibility("hidden")]] void GameStub_149f8c0() {
}

[[gnu::visibility("hidden")]] void GameStub_149f9a0() {
}

[[gnu::visibility("hidden")]] void GameStub_149f9b0() {
}

[[gnu::visibility("hidden")]] void GameStub_149fa30() {
}

[[gnu::visibility("hidden")]] U64 GameStub_14a0320(U64 object) {
  return At<U64>(object, 0x10);
}

[[gnu::visibility("hidden")]] void GameStub_14a03a0() {
}

[[gnu::visibility("hidden")]] void GameStub_14ab1a0() {
}

[[gnu::visibility("hidden")]] void GameStub_14ab950() {
}

[[gnu::visibility("hidden")]] void GameStub_14b09b0() {
  GameRoutine_135e7e0();
}

[[gnu::visibility("hidden")]] void GameStub_14b0c80() {
  GameRoutine_1958720();
}

[[gnu::visibility("hidden")]] void GameStub_14b0c90() {
}

[[gnu::visibility("hidden")]] void GameStub_14b0d60() {
}

[[gnu::visibility("hidden")]] void GameStub_14b17c0() {
  GameRoutine_1546b40();
}

[[gnu::visibility("hidden")]] void GameStub_14b1ed0() {
}

[[gnu::visibility("hidden")]] void GameStub_14b40f0() {
  GameRoutine_155c590();
}

[[gnu::visibility("hidden")]] void GameStub_14b41f0() {
}

[[gnu::visibility("hidden")]] bool GameStub_14b84c0(U64 object) {
  return At<U32>(object, 0x34) == 1u;
}

[[gnu::visibility("hidden")]] void GameStub_14b93b0() {
}

[[gnu::visibility("hidden")]] void GameStub_14b93c0() {
}

[[gnu::visibility("hidden")]] void GameStub_14b93d0() {
}

[[gnu::visibility("hidden")]] void GameStub_14b93e0() {
}

[[gnu::visibility("hidden")]] void GameStub_14b9e20() {
  GameRoutine_14b9660();
}

[[gnu::visibility("hidden")]] void GameStub_14c41a0() {
}

[[gnu::visibility("hidden")]] void GameStub_14c9af0() {
  GameRoutine_14db740();
}

[[gnu::visibility("hidden")]] void GameStub_14c9b00() {
  GameRoutine_14cced0();
}

[[gnu::visibility("hidden")]] void GameStub_14c9ec0() {
}

[[gnu::visibility("hidden")]] void GameStub_14ca330() {
}

[[gnu::visibility("hidden")]] void GameStub_14cb170() {
}

[[gnu::visibility("hidden")]] void GameStub_14ccc50() {
  GameRoutine_14ccc60();
}

[[gnu::visibility("hidden")]] void GameStub_14cda10() {
}

[[gnu::visibility("hidden")]] void GameStub_14ce110() {
  GameRoutine_14ccc60();
}

[[gnu::visibility("hidden")]] U64 GameStub_14ce4b0(U64 object) {
  return GameRoutine_13289e0(At<U64>(object, 0x98));
}

[[gnu::visibility("hidden")]] U64 GameStub_14d1900(U64, U64 other) {
  return GameRoutine_13289e0(At<U64>(other, 0x0), other);
}

[[gnu::visibility("hidden")]] void GameStub_14d3880() {
  GameRoutine_14d4c90();
}

[[gnu::visibility("hidden")]] U32 GameStub_14dd090() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_14dd4d0() {
  return 1;
}

[[gnu::visibility("hidden")]] void GameStub_14de080() {
}

[[gnu::visibility("hidden")]] void GameStub_14de090() {
}

[[gnu::visibility("hidden")]] void GameStub_14de0a0() {
}

[[gnu::visibility("hidden")]] void GameStub_14de0b0() {
}

[[gnu::visibility("hidden")]] void GameStub_14de0c0() {
}

[[gnu::visibility("hidden")]] void GameStub_14de0d0() {
}

[[gnu::visibility("hidden")]] void GameStub_14de0e0() {
}

[[gnu::visibility("hidden")]] void GameStub_14de0f0() {
}

[[gnu::visibility("hidden")]] void GameStub_14de370() {
}

[[gnu::visibility("hidden")]] void GameStub_14de380() {
}

[[gnu::visibility("hidden")]] void GameStub_14de390() {
}

[[gnu::visibility("hidden")]] void GameStub_14de3a0() {
}

[[gnu::visibility("hidden")]] void GameStub_14de3b0() {
}

[[gnu::visibility("hidden")]] void GameStub_14de3c0() {
}

[[gnu::visibility("hidden")]] void GameStub_14de3d0() {
}

[[gnu::visibility("hidden")]] void GameStub_14de3e0() {
}

[[gnu::visibility("hidden")]] void GameStub_14defb0() {
}

[[gnu::visibility("hidden")]] void GameStub_14defc0() {
}

[[gnu::visibility("hidden")]] void GameStub_14e2630() {
}

[[gnu::visibility("hidden")]] void GameStub_14e33c0() {
}

[[gnu::visibility("hidden")]] void GameStub_14e3520() {
}

[[gnu::visibility("hidden")]] void GameStub_14e3530() {
}

[[gnu::visibility("hidden")]] void GameStub_14e40a0() {
}

[[gnu::visibility("hidden")]] void GameStub_14e40b0() {
}

[[gnu::visibility("hidden")]] void GameStub_14e4210() {
}

[[gnu::visibility("hidden")]] void GameStub_14e4220() {
}

[[gnu::visibility("hidden")]] void GameStub_14e4dc0() {
}

[[gnu::visibility("hidden")]] void GameStub_14e4dd0() {
}

[[gnu::visibility("hidden")]] void GameStub_14e4f30() {
}

[[gnu::visibility("hidden")]] void GameStub_14e4f40() {
}

[[gnu::visibility("hidden")]] void GameStub_14e5ac0() {
}

[[gnu::visibility("hidden")]] void GameStub_14e5ad0() {
}

[[gnu::visibility("hidden")]] void GameStub_14e5c30() {
}

[[gnu::visibility("hidden")]] void GameStub_14e5c40() {
}

[[gnu::visibility("hidden")]] void GameStub_14e67c0() {
}

[[gnu::visibility("hidden")]] void GameStub_14e67d0() {
}

[[gnu::visibility("hidden")]] void GameStub_14e6930() {
}

[[gnu::visibility("hidden")]] void GameStub_14e6940() {
}

[[gnu::visibility("hidden")]] void GameStub_14e74c0() {
}

[[gnu::visibility("hidden")]] void GameStub_14e74d0() {
}

[[gnu::visibility("hidden")]] void GameStub_14e7630() {
}

[[gnu::visibility("hidden")]] void GameStub_14e7640() {
}

[[gnu::visibility("hidden")]] void GameStub_14e84c0() {
}

[[gnu::visibility("hidden")]] void GameStub_14e84d0() {
}

[[gnu::visibility("hidden")]] void GameStub_14e8630() {
}

[[gnu::visibility("hidden")]] void GameStub_14e8640() {
}

[[gnu::visibility("hidden")]] void GameStub_14e91e0() {
}

[[gnu::visibility("hidden")]] void GameStub_14e91f0() {
}

[[gnu::visibility("hidden")]] void GameStub_14e9350() {
}

[[gnu::visibility("hidden")]] void GameStub_14e9360() {
}

[[gnu::visibility("hidden")]] void GameStub_14e9f00() {
}

[[gnu::visibility("hidden")]] void GameStub_14e9f10() {
}

[[gnu::visibility("hidden")]] void GameStub_1515490() {
  GameRoutine_e5fe60();
}

[[gnu::visibility("hidden")]] void GameStub_15154a0() {
  GameRoutine_65a640();
}

[[gnu::visibility("hidden")]] void GameStub_15170b0() {
}

[[gnu::visibility("hidden")]] void GameStub_151c430() {
}

[[gnu::visibility("hidden")]] void GameStub_151c7a0() {
}

[[gnu::visibility("hidden")]] void GameStub_1524a70() {
}

[[gnu::visibility("hidden")]] void GameStub_1524e70() {
  GameRoutine_867df0();
}

[[gnu::visibility("hidden")]] void GameStub_1528900() {
  GameRoutine_14ccc60();
}

[[gnu::visibility("hidden")]] void GameStub_1528aa0() {
}

[[gnu::visibility("hidden")]] void GameStub_1529730() {
}

[[gnu::visibility("hidden")]] void GameStub_152c580() {
}

[[gnu::visibility("hidden")]] void GameStub_152c590() {
  GameRoutine_134e920();
}

[[gnu::visibility("hidden")]] void GameStub_152f6d0() {
}

[[gnu::visibility("hidden")]] void GameStub_1531a60() {
}

[[gnu::visibility("hidden")]] void GameStub_1531a70() {
}

[[gnu::visibility("hidden")]] void GameStub_15326e0() {
}

[[gnu::visibility("hidden")]] void GameStub_15326f0() {
}

[[gnu::visibility("hidden")]] void GameStub_1535b40() {
}

[[gnu::visibility("hidden")]] void GameStub_1535f40() {
}

[[gnu::visibility("hidden")]] U64 GameStub_1536860(U64 object) {
  return GameRoutine_14defe0(At<U64>(object, 0xa8));
}

[[gnu::visibility("hidden")]] U32 GameStub_1543ff0() {
  return 1;
}

[[gnu::visibility("hidden")]] void GameStub_1544000() {
}

[[gnu::visibility("hidden")]] void GameStub_1544010() {
}

[[gnu::visibility("hidden")]] void GameStub_1544020() {
}

[[gnu::visibility("hidden")]] void GameStub_154b990() {
}

[[gnu::visibility("hidden")]] void GameStub_1553490() {
}

[[gnu::visibility("hidden")]] void GameStub_1554fa0() {
}

[[gnu::visibility("hidden")]] void GameStub_155c590() {
}

[[gnu::visibility("hidden")]] void GameStub_15695a0() {
}

[[gnu::visibility("hidden")]] void GameStub_15695b0() {
}

[[gnu::visibility("hidden")]] void GameStub_1569cc0() {
}

[[gnu::visibility("hidden")]] void GameStub_15a02c0(U64 object) {
  GameRoutine_15a0060(object + 0x8);
}

[[gnu::visibility("hidden")]] void GameStub_15aecb0() {
}

[[gnu::visibility("hidden")]] void GameStub_15b14d0() {
}

[[gnu::visibility("hidden")]] void GameStub_15b4ef0() {
}

[[gnu::visibility("hidden")]] void GameStub_15b5e00() {
}

[[gnu::visibility("hidden")]] void GameStub_15b6340() {
}

[[gnu::visibility("hidden")]] U64 GameStub_15ba440() {
  return reinterpret_cast<U64>(GameData_1aa60e7);
}

[[gnu::visibility("hidden")]] U32 GameStub_15ba450() {
  return 11;
}

[[gnu::visibility("hidden")]] U64 GameStub_15bb8e0() {
  return reinterpret_cast<U64>(GameData_1a87162);
}

[[gnu::visibility("hidden")]] void GameStub_15bb950() {
}

[[gnu::visibility("hidden")]] U32 GameStub_15bbd30() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_15bbda0() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_15bc5b0() {
  return 11;
}

[[gnu::visibility("hidden")]] void GameStub_15bc5d0() {
}

[[gnu::visibility("hidden")]] U64 GameStub_15bd710() {
  return 0x0;
}

[[gnu::visibility("hidden")]] U64 GameStub_15bd720() {
  return 0x0;
}

[[gnu::visibility("hidden")]] U32 GameStub_15beb70() {
  return 9;
}

[[gnu::visibility("hidden")]] void GameStub_15bf340() {
}

[[gnu::visibility("hidden")]] void GameStub_15bf950() {
}

[[gnu::visibility("hidden")]] U32 GameStub_15c03f0() {
  return 10;
}

[[gnu::visibility("hidden")]] void GameStub_15c05a0() {
  GameRoutine_15c0400();
}

[[gnu::visibility("hidden")]] U64 GameStub_15c1da0() {
  return reinterpret_cast<U64>(GameData_1aa25da);
}

[[gnu::visibility("hidden")]] U64 GameStub_15c3030(U64 object) {
  return GameRoutine_15c3080(At<U64>(object, 0x8));
}

[[gnu::visibility("hidden")]] U64 GameStub_15c4950(U64 object) {
  return GameRoutine_15c3080(At<U64>(object, 0x8));
}

[[gnu::visibility("hidden")]] void GameStub_15c5100() {
}

[[gnu::visibility("hidden")]] void GameStub_15c5650() {
}

[[gnu::visibility("hidden")]] void GameStub_15c5940() {
}

[[gnu::visibility("hidden")]] U32 GameStub_15c6200() {
  return 24;
}

[[gnu::visibility("hidden")]] U64 GameStub_15c6210() {
  return reinterpret_cast<U64>(GameData_1abf9a3);
}

[[gnu::visibility("hidden")]] U64 GameStub_15c6220() {
  return reinterpret_cast<U64>(GameData_1ac14b7);
}

[[gnu::visibility("hidden")]] U32 GameStub_15c6260() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 GameStub_15c6270() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_15c6280() {
  return 1;
}

[[gnu::visibility("hidden")]] U64 GameStub_15c6290() {
  return reinterpret_cast<U64>(GameData_1aef10c);
}

[[gnu::visibility("hidden")]] U64 GameStub_15c8560() {
  return reinterpret_cast<U64>(GameData_1aef10c);
}

[[gnu::visibility("hidden")]] void GameStub_15c97f0() {
}

[[gnu::visibility("hidden")]] void GameStub_15cad70() {
  GameRoutine_16defa0();
}

[[gnu::visibility("hidden")]] U32 GameStub_15cb020() {
  return 12;
}

[[gnu::visibility("hidden")]] U32 GameStub_15cb030() {
  return 12;
}

[[gnu::visibility("hidden")]] U32 GameStub_15cf030() {
  return 11;
}

[[gnu::visibility("hidden")]] U32 GameStub_15cf040() {
  return 11;
}

[[gnu::visibility("hidden")]] U64 GameStub_15cf2f0() {
  return reinterpret_cast<U64>(GameData_1abd8d4);
}

[[gnu::visibility("hidden")]] U32 GameStub_15cf300() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_15cf310() {
  return 1;
}

[[gnu::visibility("hidden")]] U64 GameStub_15cf320() {
  return reinterpret_cast<U64>(GameData_21ca308);
}

[[gnu::visibility("hidden")]] void GameStub_15d0b10() {
}

[[gnu::visibility("hidden")]] U32 GameStub_15e1010() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_15e10f0() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_15e11d0() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_15e12b0() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_15e66a0() {
  return 1;
}

[[gnu::visibility("hidden")]] U64 GameStub_15e66b0() {
  return reinterpret_cast<U64>(GameData_1a94d7c);
}

[[gnu::visibility("hidden")]] U32 GameStub_15e66c0() {
  return 2;
}

[[gnu::visibility("hidden")]] U64 GameStub_15e66d0() {
  return reinterpret_cast<U64>(GameData_1aeb57f);
}

[[gnu::visibility("hidden")]] U64 GameStub_15e66e0() {
  return 0x0;
}

[[gnu::visibility("hidden")]] U64 GameStub_15e66f0() {
  return reinterpret_cast<U64>(GameData_1aeb57f);
}

[[gnu::visibility("hidden")]] U64 GameStub_15e6700() {
  return 0x0;
}

[[gnu::visibility("hidden")]] U32 GameStub_15e6710() {
  return 2;
}

[[gnu::visibility("hidden")]] void GameStub_15e96d0() {
}

[[gnu::visibility("hidden")]] void GameStub_15e98c0() {
}

[[gnu::visibility("hidden")]] U32 GameStub_15ea110() {
  return 8;
}

[[gnu::visibility("hidden")]] U64 GameStub_15ea120() {
  return reinterpret_cast<U64>(GameData_1aa553e);
}

[[gnu::visibility("hidden")]] U64 GameStub_15ea130() {
  return 0x0;
}

[[gnu::visibility("hidden")]] U64 GameStub_15ea140() {
  return reinterpret_cast<U64>(GameData_1aa553e);
}

[[gnu::visibility("hidden")]] U64 GameStub_15ea150() {
  return 0x0;
}

[[gnu::visibility("hidden")]] U32 GameStub_15ea160() {
  return 8;
}

[[gnu::visibility("hidden")]] void GameStub_15ea460() {
  GameRoutine_9495e0();
}

[[gnu::visibility("hidden")]] void GameStub_15ea560() {
  GameRoutine_949930();
}

[[gnu::visibility("hidden")]] U32 GameStub_15eb610() {
  return 3;
}

[[gnu::visibility("hidden")]] void GameStub_15eb650() {
}

[[gnu::visibility("hidden")]] U32 GameStub_15ecb90() {
  return 3;
}

[[gnu::visibility("hidden")]] void GameStub_15efc50(U64 object) {
  GameRoutine_14212c0(object + 0xf0);
}

[[gnu::visibility("hidden")]] void GameStub_15f1310(U64 object) {
  GameRoutine_15f0d90(object - 0xd0);
}

[[gnu::visibility("hidden")]] void GameStub_15f1380() {
  GameRoutine_15f1100();
}

[[gnu::visibility("hidden")]] void GameStub_15f2560() {
  GameRoutine_15e99e0();
}

[[gnu::visibility("hidden")]] U32 GameStub_15f3330() {
  return 1;
}

[[gnu::visibility("hidden")]] U64 GameStub_15f3340() {
  return reinterpret_cast<U64>(GameData_1aa850c);
}

[[gnu::visibility("hidden")]] U64 GameStub_15f3420() {
  return reinterpret_cast<U64>(GameData_1ab8cfb);
}

[[gnu::visibility("hidden")]] U64 GameStub_15f3430() {
  return 0x0;
}

[[gnu::visibility("hidden")]] U64 GameStub_15f3440() {
  return reinterpret_cast<U64>(GameData_1ab8cfb);
}

[[gnu::visibility("hidden")]] U64 GameStub_15f3450() {
  return 0x0;
}

[[gnu::visibility("hidden")]] void GameStub_15f5640() {
  GameRoutine_16c2460();
}

[[gnu::visibility("hidden")]] U32 GameStub_15f6060() {
  return 1;
}

[[gnu::visibility("hidden")]] U64 GameStub_15f6070() {
  return reinterpret_cast<U64>(GameData_1abd8a7);
}

[[gnu::visibility("hidden")]] U64 GameStub_15f6080() {
  return 0x0;
}

[[gnu::visibility("hidden")]] U64 GameStub_15f6090() {
  return reinterpret_cast<U64>(GameData_1abd8a7);
}

[[gnu::visibility("hidden")]] U64 GameStub_15f60a0() {
  return 0x0;
}

[[gnu::visibility("hidden")]] U32 GameStub_15f6340() {
  return 1;
}

[[gnu::visibility("hidden")]] U64 GameStub_15f6350() {
  return reinterpret_cast<U64>(GameData_1ac1541);
}

[[gnu::visibility("hidden")]] U64 GameStub_15f6360() {
  return reinterpret_cast<U64>(GameData_1ae3a59);
}

[[gnu::visibility("hidden")]] U64 GameStub_15f6370() {
  return reinterpret_cast<U64>(GameData_1acacd8);
}

[[gnu::visibility("hidden")]] U64 GameStub_15f6380() {
  return reinterpret_cast<U64>(GameData_1ac4ba4);
}

[[gnu::visibility("hidden")]] U64 GameStub_15f6390() {
  return 0x0;
}

[[gnu::visibility("hidden")]] U64 GameStub_15f63a0() {
  return reinterpret_cast<U64>(GameData_1ac4ba4);
}

[[gnu::visibility("hidden")]] U64 GameStub_15f63b0() {
  return 0x0;
}

[[gnu::visibility("hidden")]] U32 GameStub_15f70e0() {
  return 3;
}

[[gnu::visibility("hidden")]] void GameStub_15f7aa0() {
  GameRoutine_15f6150();
}

[[gnu::visibility("hidden")]] void GameStub_15f7cb0() {
  GameRoutine_f5ca50();
}

[[gnu::visibility("hidden")]] void GameStub_15f7cc0() {
  GameRoutine_15f81c0();
}

[[gnu::visibility("hidden")]] U64 GameStub_15f9d70() {
  return reinterpret_cast<U64>(GameData_1a8f056);
}

[[gnu::visibility("hidden")]] U64 GameStub_15f9d80() {
  return reinterpret_cast<U64>(GameData_1ae3a59);
}

[[gnu::visibility("hidden")]] U64 GameStub_15fa050() {
  return reinterpret_cast<U64>(GameData_1ae78c6);
}

[[gnu::visibility("hidden")]] U64 GameStub_15fa060() {
  return 0x0;
}

[[gnu::visibility("hidden")]] U64 GameStub_15fa210() {
  return reinterpret_cast<U64>(GameData_1ae78c6);
}

[[gnu::visibility("hidden")]] U64 GameStub_15fa220() {
  return 0x0;
}

[[gnu::visibility("hidden")]] U32 GameStub_15fb720() {
  return 3;
}

[[gnu::visibility("hidden")]] void GameStub_1608230() {
}

[[gnu::visibility("hidden")]] void GameStub_16082a0() {
}

[[gnu::visibility("hidden")]] void GameStub_1612bc0() {
}

[[gnu::visibility("hidden")]] void GameStub_1617e80() {
}

[[gnu::visibility("hidden")]] void GameStub_16199d0() {
  GameRoutine_16205a0();
}

[[gnu::visibility("hidden")]] void GameStub_16199f0() {
  GameRoutine_15c1740();
}

[[gnu::visibility("hidden")]] void GameStub_1619a20() {
  GameRoutine_1622c80();
}

[[gnu::visibility("hidden")]] void GameStub_161a830(U64 object) {
  GameRoutine_161a3e0(object - 0xb0);
}

[[gnu::visibility("hidden")]] U32 GameStub_161afb0() {
  return 6;
}

[[gnu::visibility("hidden")]] U64 GameStub_161afc0() {
  return reinterpret_cast<U64>(GameData_1aad099);
}

[[gnu::visibility("hidden")]] void GameStub_161c310() {
}

[[gnu::visibility("hidden")]] U32 GameStub_161e210() {
  return 3;
}

[[gnu::visibility("hidden")]] void GameStub_161e460() {
}

[[gnu::visibility("hidden")]] void GameStub_16223c0() {
}

[[gnu::visibility("hidden")]] void GameStub_1622530() {
}

[[gnu::visibility("hidden")]] void GameStub_1622620() {
}

[[gnu::visibility("hidden")]] void GameStub_1622920() {
}

[[gnu::visibility("hidden")]] U64 GameStub_1622a10() {
  return reinterpret_cast<U64>(GameData_1abd990);
}

[[gnu::visibility("hidden")]] U64 GameStub_16273c0() {
  return reinterpret_cast<U64>(GameData_1abf9a3);
}

[[gnu::visibility("hidden")]] U64 GameStub_16273d0() {
  return reinterpret_cast<U64>(GameData_1a872bf);
}

[[gnu::visibility("hidden")]] U32 GameStub_16273e0() {
  return 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_162adb0() {
  return reinterpret_cast<U64>(GameData_1abf9a3);
}

[[gnu::visibility("hidden")]] U64 GameStub_162adc0() {
  return reinterpret_cast<U64>(GameData_1af2ffd);
}

[[gnu::visibility("hidden")]] U32 GameStub_1633930() {
  return 1;
}

[[gnu::visibility("hidden")]] bool GameStub_1638c80(U64 object) {
  return At<U64>(object, 0x58) != 0;
}

[[gnu::visibility("hidden")]] void GameStub_163af40() {
}

[[gnu::visibility("hidden")]] void GameStub_163b5f0() {
}

[[gnu::visibility("hidden")]] U64 GameStub_163bab0() {
  return reinterpret_cast<U64>(GameData_1a98d5a);
}

[[gnu::visibility("hidden")]] U64 GameStub_163bac0() {
  return reinterpret_cast<U64>(GameData_1a8f1e0);
}

[[gnu::visibility("hidden")]] U32 GameStub_163bad0() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_163bb60() {
  return 1;
}

[[gnu::visibility("hidden")]] void GameStub_163bb70() {
  GameRoutine_80d410();
}

[[gnu::visibility("hidden")]] void GameStub_163bb80() {
  GameRoutine_80d410();
}

[[gnu::visibility("hidden")]] void GameStub_163f5b0() {
}

[[gnu::visibility("hidden")]] void GameStub_16401c0(U64 object) {
  GameRoutine_1640020(object - 0xb0);
}

[[gnu::visibility("hidden")]] U32 GameStub_16432e0() {
  return 2;
}

[[gnu::visibility("hidden")]] U32 GameStub_1643840() {
  return 10;
}

[[gnu::visibility("hidden")]] U32 GameStub_1643850() {
  return 10;
}

[[gnu::visibility("hidden")]] U64 GameStub_16450b0() {
  return reinterpret_cast<U64>(GameData_1ab4827);
}

[[gnu::visibility("hidden")]] U32 GameStub_1645570() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_1645780() {
  return 11;
}

[[gnu::visibility("hidden")]] U32 GameStub_1645790() {
  return 11;
}

[[gnu::visibility("hidden")]] void GameStub_1647230() {
}

[[gnu::visibility("hidden")]] U32 GameStub_16475d0() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 GameStub_16476b0() {
  return 7;
}

[[gnu::visibility("hidden")]] U32 GameStub_1647790() {
  return 3;
}

[[gnu::visibility("hidden")]] void GameStub_164ad10() {
}

[[gnu::visibility("hidden")]] void GameStub_164b680() {
}

[[gnu::visibility("hidden")]] void GameStub_164bd70() {
}

[[gnu::visibility("hidden")]] U32 GameStub_164e030() {
  return 1;
}

[[gnu::visibility("hidden")]] bool GameStub_164fc70(U64 object) {
  return At<U64>(object, 0x58) == 0;
}

[[gnu::visibility("hidden")]] void GameStub_1655a00() {
}

[[gnu::visibility("hidden")]] U64 GameStub_165be10() {
  return reinterpret_cast<U64>(GameData_1aa6320);
}

[[gnu::visibility("hidden")]] U32 GameStub_165be40() {
  return 15;
}

[[gnu::visibility("hidden")]] U32 GameStub_165d6b0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 GameStub_165d6c0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 GameStub_165d7c0() {
  return 8;
}

[[gnu::visibility("hidden")]] U32 GameStub_165d8c0() {
  return 1;
}

[[gnu::visibility("hidden")]] void GameStub_165da90() {
}

[[gnu::visibility("hidden")]] U64 GameStub_165dab0() {
  return 0x0;
}

[[gnu::visibility("hidden")]] void GameStub_165dac0() {
}

[[gnu::visibility("hidden")]] void GameStub_16615f0(U64 object) {
  GameRoutine_1661400(object - 0x420);
}

[[gnu::visibility("hidden")]] U32 GameStub_1665890() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 GameStub_1665ad0() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 GameStub_1665d00() {
  return 3;
}

[[gnu::visibility("hidden")]] U64 GameStub_1666cc0() {
  return reinterpret_cast<U64>(GameData_1ae7ae4);
}

[[gnu::visibility("hidden")]] U64 GameStub_1666cd0() {
  return 0x0;
}

[[gnu::visibility("hidden")]] U32 GameStub_1666ce0() {
  return 8;
}

[[gnu::visibility("hidden")]] U32 GameStub_1666cf0() {
  return 1;
}

[[gnu::visibility("hidden")]] U64 GameStub_1666d00() {
  return reinterpret_cast<U64>(GameData_1ae7ae4);
}

[[gnu::visibility("hidden")]] U64 GameStub_1666d10() {
  return 0x0;
}

[[gnu::visibility("hidden")]] U32 GameStub_1666d20() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_1666d30() {
  return 8;
}

[[gnu::visibility("hidden")]] U32 GameStub_1668f40() {
  return 3;
}

[[gnu::visibility("hidden")]] U64 GameStub_166b2c0() {
  return reinterpret_cast<U64>(GameData_207b498);
}

[[gnu::visibility("hidden")]] void GameStub_166b380() {
}

[[gnu::visibility("hidden")]] U64 GameStub_166b430() {
  return reinterpret_cast<U64>(GameData_207b408);
}

[[gnu::visibility("hidden")]] U64 GameStub_166b6d0() {
  return reinterpret_cast<U64>(GameData_207b488);
}

[[gnu::visibility("hidden")]] U32 GameStub_166b780() {
  return 3;
}

[[gnu::visibility("hidden")]] U64 GameStub_166bfc0() {
  return reinterpret_cast<U64>(GameData_207bb50);
}

[[gnu::visibility("hidden")]] U32 GameStub_166c070() {
  return 3;
}

[[gnu::visibility("hidden")]] U64 GameStub_166cb70() {
  return reinterpret_cast<U64>(GameData_1abfa0f);
}

[[gnu::visibility("hidden")]] U64 GameStub_166cb80() {
  return reinterpret_cast<U64>(GameData_1ac175b);
}

[[gnu::visibility("hidden")]] U32 GameStub_166cb90() {
  return 110;
}

[[gnu::visibility("hidden")]] void GameStub_166cc50() {
}

[[gnu::visibility("hidden")]] void GameStub_166cc60() {
}

[[gnu::visibility("hidden")]] U32 GameStub_1672db0() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 GameStub_1678b60() {
  return 0;
}

[[gnu::visibility("hidden")]] void GameStub_167b7e0(U64 object) {
  GameRoutine_167b240(object - 0x420);
}

[[gnu::visibility("hidden")]] void GameStub_167e030() {
}

[[gnu::visibility("hidden")]] void GameStub_167e6c0() {
}

[[gnu::visibility("hidden")]] U64 GameStub_168b980() {
  return reinterpret_cast<U64>(GameData_1aeec5b);
}

[[gnu::visibility("hidden")]] U32 GameStub_168b990() {
  return 1;
}

[[gnu::visibility("hidden")]] U64 GameStub_168ba60() {
  return reinterpret_cast<U64>(GameData_1accd38);
}

[[gnu::visibility("hidden")]] U32 GameStub_168ba70() {
  return 2;
}

[[gnu::visibility("hidden")]] U64 GameStub_168ba80() {
  return reinterpret_cast<U64>(GameData_1aeec5b);
}

[[gnu::visibility("hidden")]] U64 GameStub_168ba90() {
  return reinterpret_cast<U64>(GameData_1accd38);
}

[[gnu::visibility("hidden")]] U32 GameStub_168baa0() {
  return 2;
}

[[gnu::visibility("hidden")]] U64 GameStub_168e510() {
  return reinterpret_cast<U64>(GameData_1ad4225);
}

[[gnu::visibility("hidden")]] U64 GameStub_168ee70() {
  return reinterpret_cast<U64>(GameData_1accd38);
}

[[gnu::visibility("hidden")]] U64 GameStub_168ee80() {
  return reinterpret_cast<U64>(GameData_1ad4225);
}

[[gnu::visibility("hidden")]] U64 GameStub_168ee90() {
  return reinterpret_cast<U64>(GameData_1accd38);
}

[[gnu::visibility("hidden")]] U64 GameStub_1691130() {
  return reinterpret_cast<U64>(GameData_1aa2298);
}

[[gnu::visibility("hidden")]] U32 GameStub_1691140() {
  return 1;
}

[[gnu::visibility("hidden")]] U64 GameStub_1691210() {
  return reinterpret_cast<U64>(GameData_1accd38);
}

[[gnu::visibility("hidden")]] U64 GameStub_16913c0() {
  return reinterpret_cast<U64>(GameData_1aa2298);
}

[[gnu::visibility("hidden")]] U64 GameStub_16913d0() {
  return reinterpret_cast<U64>(GameData_1accd38);
}

[[gnu::visibility("hidden")]] U64 GameStub_1691750() {
  return reinterpret_cast<U64>(GameData_1afe4b1);
}

[[gnu::visibility("hidden")]] U32 GameStub_16917b0() {
  return 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_16917c0() {
  return reinterpret_cast<U64>(GameData_1aef1b3);
}

[[gnu::visibility("hidden")]] U64 GameStub_16918a0() {
  return reinterpret_cast<U64>(GameData_1aa617b);
}

[[gnu::visibility("hidden")]] U32 GameStub_1691900() {
  return 1;
}

[[gnu::visibility("hidden")]] U64 GameStub_1691910() {
  return reinterpret_cast<U64>(GameData_1aadcd2);
}

[[gnu::visibility("hidden")]] U32 GameStub_1691950() {
  return 1;
}

[[gnu::visibility("hidden")]] U64 GameStub_1694da0() {
  return reinterpret_cast<U64>(GameData_1ae7846);
}

[[gnu::visibility("hidden")]] U64 GameStub_1694e70() {
  return reinterpret_cast<U64>(GameData_1adfc5b);
}

[[gnu::visibility("hidden")]] U32 GameStub_1694e80() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_1694e90() {
  return 1;
}

[[gnu::visibility("hidden")]] U64 GameStub_1694ea0() {
  return reinterpret_cast<U64>(GameData_1ab1ca0);
}

[[gnu::visibility("hidden")]] U32 GameStub_1694eb0() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_1694ec0() {
  return 1;
}

[[gnu::visibility("hidden")]] U64 GameStub_1694ed0() {
  return reinterpret_cast<U64>(GameData_1aef348);
}

[[gnu::visibility("hidden")]] U32 GameStub_1694ee0() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_1694ef0() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_1694f30() {
  return 1;
}

[[gnu::visibility("hidden")]] U64 GameStub_1694f60() {
  return reinterpret_cast<U64>(GameData_1aa299b);
}

[[gnu::visibility("hidden")]] U64 GameStub_1694fc0() {
  return reinterpret_cast<U64>(GameData_1aef4b3);
}

[[gnu::visibility("hidden")]] U64 GameStub_1695020() {
  return reinterpret_cast<U64>(GameData_1afea98);
}

[[gnu::visibility("hidden")]] U64 GameStub_1695120() {
  return reinterpret_cast<U64>(GameData_1adc748);
}

[[gnu::visibility("hidden")]] U64 GameStub_1695220() {
  return reinterpret_cast<U64>(GameData_1ab1a1a);
}

[[gnu::visibility("hidden")]] U32 GameStub_1695230() {
  return 1;
}

[[gnu::visibility("hidden")]] U64 GameStub_1695260() {
  return reinterpret_cast<U64>(GameData_1ae7891);
}

[[gnu::visibility("hidden")]] U64 GameStub_1695360() {
  return reinterpret_cast<U64>(GameData_1ad81a7);
}

[[gnu::visibility("hidden")]] U32 GameStub_1695370() {
  return 1;
}

[[gnu::visibility("hidden")]] U64 GameStub_16953a0() {
  return reinterpret_cast<U64>(GameData_1ae78b2);
}

[[gnu::visibility("hidden")]] U64 GameStub_1695430() {
  return reinterpret_cast<U64>(GameData_1ae782e);
}

[[gnu::visibility("hidden")]] U32 GameStub_1695440() {
  return 1;
}

[[gnu::visibility("hidden")]] U64 GameStub_1695470() {
  return reinterpret_cast<U64>(GameData_1ab1de1);
}

[[gnu::visibility("hidden")]] U32 GameStub_1695480() {
  return 1;
}

[[gnu::visibility("hidden")]] U64 GameStub_16954b0() {
  return reinterpret_cast<U64>(GameData_1a9e9e7);
}

[[gnu::visibility("hidden")]] U32 GameStub_16954c0() {
  return 1;
}

[[gnu::visibility("hidden")]] U64 GameStub_16954f0() {
  return reinterpret_cast<U64>(GameData_1ae0007);
}

[[gnu::visibility("hidden")]] U64 GameStub_1695570() {
  return reinterpret_cast<U64>(GameData_1ac8c9e);
}

[[gnu::visibility("hidden")]] U64 GameStub_16955d0() {
  return reinterpret_cast<U64>(GameData_1ac11ff);
}

[[gnu::visibility("hidden")]] U32 GameStub_16955e0() {
  return 1;
}

[[gnu::visibility("hidden")]] U64 GameStub_1695610() {
  return reinterpret_cast<U64>(GameData_1a92724);
}

[[gnu::visibility("hidden")]] U32 GameStub_1695620() {
  return 1;
}

[[gnu::visibility("hidden")]] U64 GameStub_16956c0() {
  return reinterpret_cast<U64>(GameData_1afe5bd);
}

[[gnu::visibility("hidden")]] U64 GameStub_1695710() {
  return reinterpret_cast<U64>(GameData_1ae37b6);
}

[[gnu::visibility("hidden")]] U64 GameStub_16957c0() {
  return reinterpret_cast<U64>(GameData_1ac91ca);
}

[[gnu::visibility("hidden")]] U64 GameStub_1695830() {
  return reinterpret_cast<U64>(GameData_1afaf3b);
}

[[gnu::visibility("hidden")]] U64 GameStub_16958a0() {
  return reinterpret_cast<U64>(GameData_1aa2959);
}

[[gnu::visibility("hidden")]] U64 GameStub_1695920() {
  return reinterpret_cast<U64>(GameData_1a92e41);
}

[[gnu::visibility("hidden")]] U64 GameStub_1695af0() {
  return reinterpret_cast<U64>(GameData_1ad0fa4);
}

[[gnu::visibility("hidden")]] U64 GameStub_1695c60() {
  return reinterpret_cast<U64>(GameData_1ae3d2a);
}

[[gnu::visibility("hidden")]] U32 GameStub_1695c70() {
  return 1;
}

[[gnu::visibility("hidden")]] U64 GameStub_1695ca0() {
  return reinterpret_cast<U64>(GameData_1ac8c9e);
}

[[gnu::visibility("hidden")]] U64 GameStub_1695d00() {
  return reinterpret_cast<U64>(GameData_1af1f7e);
}

[[gnu::visibility("hidden")]] U32 GameStub_1695d10() {
  return 1;
}

[[gnu::visibility("hidden")]] U64 GameStub_1695dd0() {
  return reinterpret_cast<U64>(GameData_1acd40d);
}

[[gnu::visibility("hidden")]] U32 GameStub_1695de0() {
  return 1;
}

[[gnu::visibility("hidden")]] U64 GameStub_1695e10() {
  return reinterpret_cast<U64>(GameData_1a9ef35);
}

[[gnu::visibility("hidden")]] U32 GameStub_1695e20() {
  return 1;
}

[[gnu::visibility("hidden")]] U64 GameStub_1695e50() {
  return reinterpret_cast<U64>(GameData_1ab1d6e);
}

[[gnu::visibility("hidden")]] U32 GameStub_1695e60() {
  return 1;
}

[[gnu::visibility("hidden")]] U64 GameStub_1695f10() {
  return reinterpret_cast<U64>(GameData_1a92d49);
}

[[gnu::visibility("hidden")]] U32 GameStub_1695f20() {
  return 1;
}

[[gnu::visibility("hidden")]] U64 GameStub_1695fd0() {
  return reinterpret_cast<U64>(GameData_1ad4225);
}

[[gnu::visibility("hidden")]] U32 GameStub_1695fe0() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_1695ff0() {
  return 1;
}

[[gnu::visibility("hidden")]] U64 GameStub_1696000() {
  return reinterpret_cast<U64>(GameData_1a9dada);
}

[[gnu::visibility("hidden")]] U32 GameStub_1696010() {
  return 1;
}

[[gnu::visibility("hidden")]] void GameStub_169a7a0() {
}

[[gnu::visibility("hidden")]] U64 GameStub_169a820() {
  return reinterpret_cast<U64>(GameData_2083370);
}

[[gnu::visibility("hidden")]] U32 GameStub_169a8d0() {
  return 3;
}

[[gnu::visibility("hidden")]] void GameStub_169e410() {
}

[[gnu::visibility("hidden")]] void GameStub_169e520() {
}

[[gnu::visibility("hidden")]] U32 GameStub_16a1450() {
  return 3;
}

[[gnu::visibility("hidden")]] U64 GameStub_16a1530(U64, U64 other) {
  return GameRoutine_16a6de0(At<U64>(other, 0x0), other);
}

[[gnu::visibility("hidden")]] U32 GameStub_16a19b0() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 GameStub_16a28a0() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 GameStub_16a2f50() {
  return 3;
}

[[gnu::visibility("hidden")]] void GameStub_16a3750() {
}

[[gnu::visibility("hidden")]] U32 GameStub_16a38e0() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 GameStub_16a39c0() {
  return 3;
}

[[gnu::visibility("hidden")]] U64 GameStub_16a5480() {
  return reinterpret_cast<U64>(GameData_1abfa0f);
}

[[gnu::visibility("hidden")]] U64 GameStub_16a5490() {
  return reinterpret_cast<U64>(GameData_1ad0a34);
}

[[gnu::visibility("hidden")]] U32 GameStub_16a54a0() {
  return 0x200000;
}

[[gnu::visibility("hidden")]] U32 GameStub_16a54b0() {
  return 48;
}

[[gnu::visibility("hidden")]] void GameStub_16a54e0() {
}

[[gnu::visibility("hidden")]] void GameStub_16a54f0() {
  GameRoutine_80d680();
}

[[gnu::visibility("hidden")]] void GameStub_16a5500() {
  GameRoutine_80d750();
}

[[gnu::visibility("hidden")]] U32 GameStub_16a57a0() {
  return 3;
}

[[gnu::visibility("hidden")]] bool GameStub_16a5a90(U64 object) {
  return At<U32>(object, 0x4c8) == 0u;
}

[[gnu::visibility("hidden")]] U8 GameStub_16a5dc0(U64 object) {
  return At<U8>(object, 0x5b1);
}

[[gnu::visibility("hidden")]] U8 GameStub_16a5ed0(U64 object) {
  return At<U8>(object, 0x191);
}

[[gnu::visibility("hidden")]] bool GameStub_16a5f20(U64 object) {
  return At<U32>(object, 0xa8) == 0u;
}

[[gnu::visibility("hidden")]] void GameStub_16a5f30(U64 object) {
  GameRoutine_16a5aa0(object - 0x420);
}

[[gnu::visibility("hidden")]] U64 GameStub_16a7440() {
  return reinterpret_cast<U64>(GameData_1aac0a4);
}

[[gnu::visibility("hidden")]] U64 GameStub_16a7450() {
  return reinterpret_cast<U64>(GameData_1aef3ee);
}

[[gnu::visibility("hidden")]] U32 GameStub_16a7460() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 GameStub_16a7470() {
  return 110;
}

[[gnu::visibility("hidden")]] void GameStub_16a7480() {
  GameRoutine_16a75e0();
}

[[gnu::visibility("hidden")]] void GameStub_16a7540() {
}

[[gnu::visibility("hidden")]] void GameStub_16a7550() {
}

[[gnu::visibility("hidden")]] void GameStub_16a89b0() {
}

[[gnu::visibility("hidden")]] U64 GameStub_16a8a60() {
  return reinterpret_cast<U64>(GameData_2088d60);
}

[[gnu::visibility("hidden")]] U64 GameStub_16a8fc0() {
  return reinterpret_cast<U64>(GameData_2088cd0);
}

[[gnu::visibility("hidden")]] void GameStub_16a9050() {
}

[[gnu::visibility("hidden")]] U64 GameStub_16a90a0() {
  return reinterpret_cast<U64>(GameData_2088d50);
}

[[gnu::visibility("hidden")]] void GameStub_16a93c0() {
}

[[gnu::visibility("hidden")]] U64 GameStub_16a9470() {
  return reinterpret_cast<U64>(GameData_2088f60);
}

[[gnu::visibility("hidden")]] void GameStub_16a9520() {
}

[[gnu::visibility("hidden")]] U64 GameStub_16a95f0() {
  return reinterpret_cast<U64>(GameData_2088f50);
}

[[gnu::visibility("hidden")]] U32 GameStub_16ad1d0() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 GameStub_16b1020() {
  return 3;
}

[[gnu::visibility("hidden")]] void GameStub_16b47a0(U64 object) {
  GameRoutine_16b44a0(object - 0x420);
}

[[gnu::visibility("hidden")]] U32 GameStub_16b79d0() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 GameStub_16b7f10() {
  return 3;
}

[[gnu::visibility("hidden")]] void GameStub_16b82c0() {
}

[[gnu::visibility("hidden")]] U32 GameStub_16b9ec0() {
  return 3;
}

[[gnu::visibility("hidden")]] void GameStub_16ba9c0() {
}

[[gnu::visibility("hidden")]] void GameStub_16bb4c0() {
  GameRoutine_16e1a00();
}

[[gnu::visibility("hidden")]] void GameStub_16bc230() {
}

[[gnu::visibility("hidden")]] U64 GameStub_16c1480() {
  return reinterpret_cast<U64>(GameData_1a85728);
}

[[gnu::visibility("hidden")]] U64 GameStub_16c1500() {
  return reinterpret_cast<U64>(GameData_1ab1de1);
}

[[gnu::visibility("hidden")]] U32 GameStub_16c1520() {
  return 1;
}

[[gnu::visibility("hidden")]] U64 GameStub_16c15e0() {
  return reinterpret_cast<U64>(GameData_1ab5b66);
}

[[gnu::visibility("hidden")]] U64 GameStub_16c15f0() {
  return reinterpret_cast<U64>(GameData_1ab1de1);
}

[[gnu::visibility("hidden")]] U64 GameStub_16c1600() {
  return reinterpret_cast<U64>(GameData_1ab5b66);
}

[[gnu::visibility("hidden")]] U64 GameStub_16c26a0() {
  return reinterpret_cast<U64>(GameData_1ae3d91);
}

[[gnu::visibility("hidden")]] U32 GameStub_16c2710() {
  return 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_16c2720() {
  return reinterpret_cast<U64>(GameData_1aef446);
}

[[gnu::visibility("hidden")]] U64 GameStub_16c2730() {
  return 0x0;
}

[[gnu::visibility("hidden")]] U64 GameStub_16c2740() {
  return reinterpret_cast<U64>(GameData_1aef446);
}

[[gnu::visibility("hidden")]] U64 GameStub_16c2750() {
  return 0x0;
}

[[gnu::visibility("hidden")]] U32 GameStub_16c2760() {
  return 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_16c30c0() {
  return 0x0;
}

[[gnu::visibility("hidden")]] U64 GameStub_16c30d0() {
  return reinterpret_cast<U64>(GameData_1ae3d91);
}

[[gnu::visibility("hidden")]] U64 GameStub_16c30e0() {
  return reinterpret_cast<U64>(GameData_1a9e9e7);
}

[[gnu::visibility("hidden")]] U32 GameStub_16c30f0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 GameStub_16c3100() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_16c3410() {
  return 1;
}

[[gnu::visibility("hidden")]] U64 GameStub_16c3420() {
  return reinterpret_cast<U64>(GameData_1ab5b66);
}

[[gnu::visibility("hidden")]] U64 GameStub_16c3430() {
  return reinterpret_cast<U64>(GameData_1a9e9e7);
}

[[gnu::visibility("hidden")]] U64 GameStub_16c3440() {
  return reinterpret_cast<U64>(GameData_1ab5b66);
}

[[gnu::visibility("hidden")]] U64 GameStub_16c3ca0() {
  return reinterpret_cast<U64>(GameData_1afaee4);
}

[[gnu::visibility("hidden")]] U64 GameStub_16c40d0() {
  return reinterpret_cast<U64>(GameData_1ac1063);
}

[[gnu::visibility("hidden")]] U32 GameStub_16c40e0() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_16c40f0() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_16c4100() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_16c4800() {
  return 3;
}

[[gnu::visibility("hidden")]] U64 GameStub_16c56e0() {
  return reinterpret_cast<U64>(GameData_1af2943);
}

[[gnu::visibility("hidden")]] U32 GameStub_16c56f0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 GameStub_16c5d20() {
  return 3;
}

[[gnu::visibility("hidden")]] U64 GameStub_16c5e30() {
  return 0x0;
}

[[gnu::visibility("hidden")]] U32 GameStub_16c5e40() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 GameStub_16c6770() {
  return 3;
}

[[gnu::visibility("hidden")]] U64 GameStub_16c6d30() {
  return reinterpret_cast<U64>(GameData_1a92997);
}

[[gnu::visibility("hidden")]] void GameStub_16c6d60(U64 object) {
  GameRoutine_16dd440(object - 0x420);
}

[[gnu::visibility("hidden")]] U32 GameStub_16c6e20() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 GameStub_16c75b0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 GameStub_16c75c0() {
  return 3;
}

[[gnu::visibility("hidden")]] void GameStub_16c75d0() {
}

[[gnu::visibility("hidden")]] void GameStub_16c75e0(U64 object) {
  GameRoutine_16d1ca0(object - 0x58);
}

[[gnu::visibility("hidden")]] void GameStub_16c8530() {
}

[[gnu::visibility("hidden")]] void GameStub_16c85f0(U64 object) {
  GameRoutine_16d1ca0(object - 0x58);
}

[[gnu::visibility("hidden")]] void GameStub_16c9500(U64 object) {
  GameRoutine_16d1ca0(object - 0x58);
}

[[gnu::visibility("hidden")]] U64 GameStub_16cbd10() {
  return reinterpret_cast<U64>(GameData_1aa25da);
}

[[gnu::visibility("hidden")]] void GameStub_16cbd40(U64 object) {
  GameRoutine_16dd440(object - 0x420);
}

[[gnu::visibility("hidden")]] void GameStub_16cc400(U64 object) {
  GameRoutine_16d1ca0(object - 0x58);
}

[[gnu::visibility("hidden")]] U64 GameStub_16cc4c0() {
  return 0x0;
}

[[gnu::visibility("hidden")]] void GameStub_16ccc40(U64 object) {
  GameRoutine_16d1ca0(object - 0x58);
}

[[gnu::visibility("hidden")]] void GameStub_16d1e20(U64 object) {
  GameRoutine_16d1ca0(object - 0x58);
}

[[gnu::visibility("hidden")]] void GameStub_16d2a10(U64 object) {
  GameRoutine_16dd440(object - 0x420);
}

[[gnu::visibility("hidden")]] void GameStub_16d3a60(U64 object) {
  GameRoutine_16dd440(object - 0x420);
}

[[gnu::visibility("hidden")]] void GameStub_16d4040(U64 object) {
  GameRoutine_16d1ca0(object - 0x58);
}

[[gnu::visibility("hidden")]] void GameStub_16d4100(U64 object) {
  GameRoutine_16d1ca0(object - 0x58);
}

[[gnu::visibility("hidden")]] void GameStub_16d4250(U64 object) {
  GameRoutine_16d1ca0(object - 0x58);
}

[[gnu::visibility("hidden")]] U64 GameStub_16d4310() {
  return 0x0;
}

[[gnu::visibility("hidden")]] void GameStub_16d47a0(U64 object) {
  GameRoutine_16d1ca0(object - 0x58);
}

[[gnu::visibility("hidden")]] void GameStub_16d5ca0(U64 object) {
  GameRoutine_16d1ca0(object - 0x58);
}

[[gnu::visibility("hidden")]] U32 GameStub_16d6660() {
  return 1;
}

[[gnu::visibility("hidden")]] void GameStub_16d6670(U64 object) {
  GameRoutine_16d1ca0(object - 0x58);
}

[[gnu::visibility("hidden")]] U64 GameStub_16d6730() {
  return 0x0;
}

[[gnu::visibility("hidden")]] void GameStub_16d6bb0(U64 object) {
  GameRoutine_16d1ca0(object - 0x58);
}

[[gnu::visibility("hidden")]] void GameStub_16d8b60() {
}

[[gnu::visibility("hidden")]] U64 GameStub_16d8c00() {
  return reinterpret_cast<U64>(GameData_209a668);
}

[[gnu::visibility("hidden")]] U32 GameStub_16d9200() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 GameStub_16dac30() {
  return 3;
}

[[gnu::visibility("hidden")]] void GameStub_16ea4b0() {
}

[[gnu::visibility("hidden")]] U64 GameStub_16f0a10() {
  return reinterpret_cast<U64>(GameData_1af139c);
}

[[gnu::visibility("hidden")]] void GameStub_16f0c30() {
}

[[gnu::visibility("hidden")]] U32 GameStub_16f3bf0() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 GameStub_16f3eb0() {
  return 3;
}

[[gnu::visibility("hidden")]] void GameStub_16f45a0(U64 object) {
  GameRoutine_16e7370(object + 0x430);
}

[[gnu::visibility("hidden")]] U64 GameStub_16f45b0() {
  return reinterpret_cast<U64>(GameData_1abfa0f);
}

[[gnu::visibility("hidden")]] U64 GameStub_16f45c0() {
  return reinterpret_cast<U64>(GameData_1ab1e51);
}

[[gnu::visibility("hidden")]] U32 GameStub_16f45d0() {
  return 1;
}

[[gnu::visibility("hidden")]] void GameStub_16f45e0() {
}

[[gnu::visibility("hidden")]] void GameStub_16f58b0() {
  GameRoutine_16f5ea0();
}

[[gnu::visibility("hidden")]] U32 GameStub_16f59d0() {
  return 3;
}

[[gnu::visibility("hidden")]] void GameStub_16f59e0() {
  GameRoutine_16e1a00();
}

[[gnu::visibility("hidden")]] void GameStub_16f5c60(U64 object) {
  GameRoutine_16f5a10(object - 0x420);
}

[[gnu::visibility("hidden")]] void GameStub_16fb9a0(U64 object) {
  GameRoutine_16fb800(object - 0x420);
}

[[gnu::visibility("hidden")]] U64 GameStub_16fbb60() {
  return reinterpret_cast<U64>(GameData_1aa25da);
}

[[gnu::visibility("hidden")]] U32 GameStub_16fbb70() {
  return 7;
}

[[gnu::visibility("hidden")]] U64 GameStub_16fbb80() {
  return reinterpret_cast<U64>(GameData_1aaa01d);
}

[[gnu::visibility("hidden")]] U64 GameStub_16fbb90() {
  return reinterpret_cast<U64>(GameData_1aae0b1);
}

[[gnu::visibility("hidden")]] U32 GameStub_16fbbb0() {
  return 7;
}

[[gnu::visibility("hidden")]] U64 GameStub_16fbbc0() {
  return reinterpret_cast<U64>(GameData_1aaa01d);
}

[[gnu::visibility("hidden")]] U64 GameStub_16fbbd0() {
  return reinterpret_cast<U64>(GameData_1aae0b1);
}

[[gnu::visibility("hidden")]] U64 GameStub_16fc5b0() {
  return reinterpret_cast<U64>(GameData_20a3430);
}

[[gnu::visibility("hidden")]] void GameStub_16fc860() {
}

[[gnu::visibility("hidden")]] U64 GameStub_16fc8c0() {
  return reinterpret_cast<U64>(GameData_20a3520);
}

[[gnu::visibility("hidden")]] U32 GameStub_16fc970() {
  return 3;
}

[[gnu::visibility("hidden")]] void GameStub_16fcfb0(U64 object) {
  GameRoutine_16fce10(object - 0x420);
}

[[gnu::visibility("hidden")]] U64 GameStub_16fd140() {
  return reinterpret_cast<U64>(GameData_1aaa01d);
}

[[gnu::visibility("hidden")]] U64 GameStub_16fd150() {
  return reinterpret_cast<U64>(GameData_1aeb9e5);
}

[[gnu::visibility("hidden")]] U64 GameStub_16fd160() {
  return reinterpret_cast<U64>(GameData_1aaa01d);
}

[[gnu::visibility("hidden")]] U64 GameStub_16fd170() {
  return reinterpret_cast<U64>(GameData_1aeb9e5);
}

[[gnu::visibility("hidden")]] U64 GameStub_16fd8b0() {
  return reinterpret_cast<U64>(GameData_20a3cc8);
}

[[gnu::visibility("hidden")]] void GameStub_1700890() {
}

[[gnu::visibility("hidden")]] void GameStub_1704260(U64 object) {
  GameRoutine_1703f40(object - 0x60);
}

[[gnu::visibility("hidden")]] void GameStub_1706fb0(U64 object) {
  GameRoutine_1706db0(object - 0x420);
}

[[gnu::visibility("hidden")]] U32 GameStub_17071a0() {
  return 1;
}

[[gnu::visibility("hidden")]] void GameStub_1707590() {
}

[[gnu::visibility("hidden")]] U8 GameStub_1707e20(U64 object) {
  return At<U8>(object, 0x68);
}

[[gnu::visibility("hidden")]] U32 GameStub_1709a40() {
  return 1;
}

[[gnu::visibility("hidden")]] void GameStub_170a260(U64 object) {
  GameRoutine_1709fa0(object - 0x60);
}

[[gnu::visibility("hidden")]] void GameStub_170a270(U64 object) {
  GameRoutine_1709a60(object - 0x60);
}

[[gnu::visibility("hidden")]] U32 GameStub_170a280() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_170dbf0() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_170dd80() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 GameStub_170dd90() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_170e0a0() {
  return 1;
}

[[gnu::visibility("hidden")]] void GameStub_170e4f0() {
}

[[gnu::visibility("hidden")]] U32 GameStub_170e840() {
  return 7;
}

[[gnu::visibility("hidden")]] U32 GameStub_170ead0() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_17106b0() {
  return 1;
}

[[gnu::visibility("hidden")]] U8 GameStub_17106c0(U64 object) {
  return At<U8>(object, 0x42d);
}

[[gnu::visibility("hidden")]] U32 GameStub_17106d0() {
  return 16;
}

[[gnu::visibility("hidden")]] U32 GameStub_17106e0() {
  return 16;
}

[[gnu::visibility("hidden")]] U8 GameStub_17106f0(U64 object) {
  return At<U8>(object, 0xd);
}

[[gnu::visibility("hidden")]] U32 GameStub_1710700() {
  return 1;
}

[[gnu::visibility("hidden")]] void GameStub_1710710(U64 object) {
  GameRoutine_1710500(object - 0x420);
}

[[gnu::visibility("hidden")]] U32 GameStub_17107c0() {
  return 0;
}

[[gnu::visibility("hidden")]] void GameStub_1711dd0() {
  GameRoutine_80d8f0();
}

[[gnu::visibility("hidden")]] void GameStub_1711de0() {
  GameRoutine_80d820();
}

[[gnu::visibility("hidden")]] void GameStub_17129b0(U64 object) {
  GameRoutine_1712810(object - 0x420);
}

[[gnu::visibility("hidden")]] void GameStub_1712b60() {
  GameRoutine_80d680();
}

[[gnu::visibility("hidden")]] void GameStub_1712b70() {
  GameRoutine_80d750();
}

[[gnu::visibility("hidden")]] U64 GameStub_1712dd0() {
  return reinterpret_cast<U64>(GameData_1aac0a4);
}

[[gnu::visibility("hidden")]] U64 GameStub_1712de0() {
  return reinterpret_cast<U64>(GameData_1ad4a8e);
}

[[gnu::visibility("hidden")]] U32 GameStub_1712df0() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_1712e00() {
  return 2;
}

[[gnu::visibility("hidden")]] U32 GameStub_1712e10() {
  return 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_17145e0() {
  return reinterpret_cast<U64>(GameData_1aac0a4);
}

[[gnu::visibility("hidden")]] U64 GameStub_17145f0() {
  return reinterpret_cast<U64>(GameData_1ac5028);
}

[[gnu::visibility("hidden")]] U32 GameStub_17158e0() {
  return 6;
}

[[gnu::visibility("hidden")]] U32 GameStub_1715d40() {
  return 0;
}

[[gnu::visibility("hidden")]] void GameStub_1715d50() {
  GameRoutine_80d140();
}

[[gnu::visibility("hidden")]] void GameStub_1715d60() {
  GameRoutine_80d140();
}

[[gnu::visibility("hidden")]] U32 GameStub_1715d70() {
  return 6;
}

[[gnu::visibility("hidden")]] void GameStub_1715da0(U64 object) {
  GameRoutine_1715920(object - 0xb0);
}

[[gnu::visibility("hidden")]] void GameStub_1715db0(U64 object) {
  GameRoutine_1715b60(object - 0xb0);
}

[[gnu::visibility("hidden")]] U32 GameStub_1715dc0() {
  return 0;
}

[[gnu::visibility("hidden")]] void GameStub_1715dd0() {
  GameRoutine_80d140();
}

[[gnu::visibility("hidden")]] void GameStub_1715de0() {
  GameRoutine_80d140();
}

[[gnu::visibility("hidden")]] void GameStub_1715df0(U64 object) {
  GameRoutine_1715730(object - 0x420);
}

[[gnu::visibility("hidden")]] void GameStub_1716960() {
}

[[gnu::visibility("hidden")]] U64 GameStub_1717290() {
  return reinterpret_cast<U64>(GameData_1abfa0f);
}

[[gnu::visibility("hidden")]] U64 GameStub_17172a0() {
  return reinterpret_cast<U64>(GameData_1accea1);
}

[[gnu::visibility("hidden")]] void GameStub_17172d0() {
}

[[gnu::visibility("hidden")]] void GameStub_1717cc0() {
  GameRoutine_16e1a00();
}

[[gnu::visibility("hidden")]] void GameStub_17187f0() {
  GameRoutine_80dd00();
}

[[gnu::visibility("hidden")]] void GameStub_1718800() {
  GameRoutine_80ddd0();
}

[[gnu::visibility("hidden")]] void GameStub_1718810(U64 object) {
  GameRoutine_17186b0(object - 0xb0);
}

[[gnu::visibility("hidden")]] void GameStub_1718820(U64 object) {
  GameRoutine_1718560(object - 0xb0);
}

[[gnu::visibility("hidden")]] void GameStub_1718830() {
  GameRoutine_80dd00();
}

[[gnu::visibility("hidden")]] void GameStub_1718840() {
  GameRoutine_80ddd0();
}

[[gnu::visibility("hidden")]] void GameStub_1718850(U64 object) {
  GameRoutine_1718020(object - 0x420);
}

[[gnu::visibility("hidden")]] U64 GameStub_171c2d0() {
  return reinterpret_cast<U64>(GameData_1ae3d91);
}

[[gnu::visibility("hidden")]] U64 GameStub_171c380() {
  return reinterpret_cast<U64>(GameData_1ae0007);
}

[[gnu::visibility("hidden")]] U32 GameStub_171c390() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 GameStub_171c3a0() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_171c6b0() {
  return 1;
}

[[gnu::visibility("hidden")]] U64 GameStub_171c6c0() {
  return reinterpret_cast<U64>(GameData_1ab1e91);
}

[[gnu::visibility("hidden")]] U64 GameStub_171c6d0() {
  return reinterpret_cast<U64>(GameData_1ae0007);
}

[[gnu::visibility("hidden")]] U64 GameStub_171c6e0() {
  return reinterpret_cast<U64>(GameData_1ab1e91);
}

[[gnu::visibility("hidden")]] U32 GameStub_171ccc0() {
  return 3;
}

[[gnu::visibility("hidden")]] U64 GameStub_171e4b0() {
  return reinterpret_cast<U64>(GameData_1ac5070);
}

[[gnu::visibility("hidden")]] U32 GameStub_171ec80() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 GameStub_17203c0() {
  return 3;
}

[[gnu::visibility("hidden")]] void GameStub_1722d00() {
  GameRoutine_16626c0();
}

[[gnu::visibility("hidden")]] void GameStub_1726300(U64 object) {
  GameRoutine_17260c0(object - 0xb0);
}

[[gnu::visibility("hidden")]] U32 GameStub_17285a0() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 GameStub_1728b80() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 GameStub_172b4f0() {
  return 11;
}

[[gnu::visibility("hidden")]] U32 GameStub_172c710() {
  return 2;
}

[[gnu::visibility("hidden")]] U32 GameStub_172cbd0(U64 object) {
  return At<U32>(object, 0x42c);
}

[[gnu::visibility("hidden")]] U32 GameStub_172cd10() {
  return 11;
}

[[gnu::visibility("hidden")]] U32 GameStub_172fda0() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_1731420() {
  return 2;
}

[[gnu::visibility("hidden")]] void GameStub_17338f0() {
}

[[gnu::visibility("hidden")]] U64 GameStub_1733c40() {
  return reinterpret_cast<U64>(GameData_20b6138);
}

[[gnu::visibility("hidden")]] void GameStub_1734240() {
}

[[gnu::visibility("hidden")]] U64 GameStub_17343b0() {
  return reinterpret_cast<U64>(GameData_20b61b8);
}

[[gnu::visibility("hidden")]] U32 GameStub_1734460() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 GameStub_1734540() {
  return 7;
}

[[gnu::visibility("hidden")]] U32 GameStub_1734620() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 GameStub_173bc40() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 GameStub_173c900() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 GameStub_173d2e0() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 GameStub_173dbe0() {
  return 3;
}

[[gnu::visibility("hidden")]] void GameStub_1744eb0() {
  GameRoutine_1744940();
}

[[gnu::visibility("hidden")]] U8 GameStub_1752290(U64 object) {
  return At<U8>(object, 0x1c);
}

[[gnu::visibility("hidden")]] U32 GameStub_1752a80() {
  return 0;
}

[[gnu::visibility("hidden")]] void GameStub_1754960() {
}

[[gnu::visibility("hidden")]] void GameStub_1754970() {
}

[[gnu::visibility("hidden")]] U32 GameStub_1754980() {
  return 1;
}

[[gnu::visibility("hidden")]] void GameStub_1754990() {
}

[[gnu::visibility("hidden")]] void GameStub_175e4e0() {
}

[[gnu::visibility("hidden")]] void GameStub_175e4f0() {
}

[[gnu::visibility("hidden")]] void GameStub_175e7d0() {
}

[[gnu::visibility("hidden")]] void GameStub_175e7e0() {
}

[[gnu::visibility("hidden")]] void GameStub_175f580() {
}

[[gnu::visibility("hidden")]] void GameStub_175f590() {
}

[[gnu::visibility("hidden")]] void GameStub_175f870() {
}

[[gnu::visibility("hidden")]] void GameStub_175f880() {
}

[[gnu::visibility("hidden")]] U64 GameStub_1780150() {
  return reinterpret_cast<U64>(GameData_20c2380);
}

[[gnu::visibility("hidden")]] U64 GameStub_1780b40() {
  return reinterpret_cast<U64>(GameData_20c2480);
}

[[gnu::visibility("hidden")]] U64 GameStub_1780d10(U64 object) {
  return GameRoutine_1768ea0(At<U64>(object, 0x8));
}

[[gnu::visibility("hidden")]] void GameStub_1782600() {
}

[[gnu::visibility("hidden")]] void GameStub_1782610() {
}

[[gnu::visibility("hidden")]] U32 GameStub_17835f0() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_1783600() {
  return 1;
}

[[gnu::visibility("hidden")]] U64 GameStub_1783610() {
  return reinterpret_cast<U64>(GameData_1abf9dc);
}

[[gnu::visibility("hidden")]] U64 GameStub_1783910() {
  return reinterpret_cast<U64>(GameData_1aa2b6d);
}

[[gnu::visibility("hidden")]] U64 GameStub_1783920() {
  return reinterpret_cast<U64>(GameData_1abf9dc);
}

[[gnu::visibility("hidden")]] U64 GameStub_1783930() {
  return reinterpret_cast<U64>(GameData_1aa2b6d);
}

[[gnu::visibility("hidden")]] void GameStub_1783940(U64 object) {
  GameRoutine_1783620(object - 0xb0);
}

[[gnu::visibility("hidden")]] U64 GameStub_1783c90() {
  return reinterpret_cast<U64>(GameData_1aef64c);
}

[[gnu::visibility("hidden")]] void GameStub_1783e70() {
  GameRoutine_1788180();
}

[[gnu::visibility("hidden")]] U32 GameStub_1784010() {
  return 11;
}

[[gnu::visibility("hidden")]] U32 GameStub_1784020() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_1784030() {
  return 11;
}

[[gnu::visibility("hidden")]] void GameStub_1784040() {
}

[[gnu::visibility("hidden")]] void GameStub_1784b70() {
}

[[gnu::visibility("hidden")]] U32 GameStub_1784f10() {
  return 8;
}

[[gnu::visibility("hidden")]] U64 GameStub_1784f40() {
  return reinterpret_cast<U64>(GameData_1aa83de);
}

[[gnu::visibility("hidden")]] U64 GameStub_1784f50() {
  return reinterpret_cast<U64>(GameData_1aa83de);
}

[[gnu::visibility("hidden")]] U32 GameStub_1785750() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 GameStub_1785860() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 GameStub_1785d70() {
  return 3;
}

[[gnu::visibility("hidden")]] void GameStub_17871a0(U64 object) {
  GameRoutine_1786fb0(object - 0xb0);
}

[[gnu::visibility("hidden")]] void GameStub_1788ac0(U64 object) {
  GameRoutine_1788900(object - 0xb0);
}

[[gnu::visibility("hidden")]] void GameStub_1788f40(U64 object) {
  GameRoutine_1788c00(object - 0xb0);
}

[[gnu::visibility("hidden")]] void GameStub_178a480(U64 object) {
  GameRoutine_178a2c0(object - 0x420);
}

[[gnu::visibility("hidden")]] void GameStub_178b160() {
}

[[gnu::visibility("hidden")]] void GameStub_178b830(U64 object) {
  GameRoutine_178b670(object - 0xb0);
}

[[gnu::visibility("hidden")]] void GameStub_178cd20() {
  GameRoutine_178cae0();
}

[[gnu::visibility("hidden")]] void GameStub_178ce50() {
  GameRoutine_16de4d0();
}

[[gnu::visibility("hidden")]] void GameStub_178ced0() {
  GameRoutine_80d750();
}

[[gnu::visibility("hidden")]] void GameStub_178cee0() {
  GameRoutine_80d750();
}

[[gnu::visibility("hidden")]] void GameStub_178cef0() {
  GameRoutine_80d680();
}

[[gnu::visibility("hidden")]] void GameStub_178cf00() {
  GameRoutine_80d680();
}

[[gnu::visibility("hidden")]] void GameStub_178e620() {
  GameRoutine_178c760();
}

[[gnu::visibility("hidden")]] void GameStub_1791090(U64 object) {
  GameRoutine_17903d0(object - 0xb0);
}

[[gnu::visibility("hidden")]] U8 GameStub_17917c0(U64 object) {
  return At<U8>(object, 0x64);
}

[[gnu::visibility("hidden")]] void GameStub_17930b0() {
}

[[gnu::visibility("hidden")]] U64 GameStub_1793280() {
  return reinterpret_cast<U64>(GameData_20c9298);
}

[[gnu::visibility("hidden")]] void GameStub_17944a0() {
}

[[gnu::visibility("hidden")]] U64 GameStub_1794550() {
  return reinterpret_cast<U64>(GameData_20c9318);
}

[[gnu::visibility("hidden")]] void GameStub_1796650() {
}

[[gnu::visibility("hidden")]] void GameStub_1796660() {
}

[[gnu::visibility("hidden")]] void GameStub_1799760() {
}

[[gnu::visibility("hidden")]] void GameStub_179a4b0() {
}

[[gnu::visibility("hidden")]] void GameStub_179c920(U64 object) {
  GameRoutine_179c5f0(object - 0x420);
}

[[gnu::visibility("hidden")]] void GameStub_179d820(U64 object) {
  GameRoutine_179d560(object - 0xb0);
}

[[gnu::visibility("hidden")]] U64 GameStub_179f7c0() {
  return 0x0;
}

[[gnu::visibility("hidden")]] U32 GameStub_179f890() {
  return 7;
}

[[gnu::visibility("hidden")]] U32 GameStub_179f8a0() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_179f8b0() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_179f8c0() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_179f8d0() {
  return 1;
}

[[gnu::visibility("hidden")]] U64 GameStub_179f930() {
  return reinterpret_cast<U64>(GameData_1aaa509);
}

[[gnu::visibility("hidden")]] U32 GameStub_179f940() {
  return 2;
}

[[gnu::visibility("hidden")]] U32 GameStub_179f950() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_179f960() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_179f970() {
  return 2;
}

[[gnu::visibility("hidden")]] U64 GameStub_179f9d0() {
  return reinterpret_cast<U64>(GameData_1ae3f3d);
}

[[gnu::visibility("hidden")]] U32 GameStub_179f9e0() {
  return 6;
}

[[gnu::visibility("hidden")]] U32 GameStub_179f9f0() {
  return 6;
}

[[gnu::visibility("hidden")]] U64 GameStub_179fa50() {
  return reinterpret_cast<U64>(GameData_1aa2ba0);
}

[[gnu::visibility("hidden")]] U32 GameStub_179fa60() {
  return 2;
}

[[gnu::visibility("hidden")]] U32 GameStub_179fa70() {
  return 2;
}

[[gnu::visibility("hidden")]] U64 GameStub_179fad0() {
  return reinterpret_cast<U64>(GameData_1ab5d52);
}

[[gnu::visibility("hidden")]] U32 GameStub_179fae0() {
  return 8;
}

[[gnu::visibility("hidden")]] U32 GameStub_179faf0() {
  return 8;
}

[[gnu::visibility("hidden")]] U64 GameStub_179fb50() {
  return reinterpret_cast<U64>(GameData_1ac51b6);
}

[[gnu::visibility("hidden")]] U32 GameStub_179fb60() {
  return 2;
}

[[gnu::visibility("hidden")]] U32 GameStub_179fb70() {
  return 2;
}

[[gnu::visibility("hidden")]] U64 GameStub_179fbd0() {
  return reinterpret_cast<U64>(GameData_1a93085);
}

[[gnu::visibility("hidden")]] U32 GameStub_179fbe0() {
  return 2;
}

[[gnu::visibility("hidden")]] U32 GameStub_179fbf0() {
  return 2;
}

[[gnu::visibility("hidden")]] U32 GameStub_179fc00() {
  return 2;
}

[[gnu::visibility("hidden")]] U32 GameStub_179fc10() {
  return 2;
}

[[gnu::visibility("hidden")]] void GameStub_179fc20() {
}

[[gnu::visibility("hidden")]] U32 GameStub_17a2f70() {
  return 3;
}

[[gnu::visibility("hidden")]] U64 GameStub_17a67b0() {
  return reinterpret_cast<U64>(GameData_1ab5d5e);
}

[[gnu::visibility("hidden")]] void GameStub_17a7050() {
  GameRoutine_80d680();
}

[[gnu::visibility("hidden")]] void GameStub_17a7060() {
  GameRoutine_80d750();
}

[[gnu::visibility("hidden")]] void GameStub_17a70f0() {
  GameRoutine_80d680();
}

[[gnu::visibility("hidden")]] void GameStub_17a7100() {
  GameRoutine_80d750();
}

[[gnu::visibility("hidden")]] U64 GameStub_17a7110() {
  return reinterpret_cast<U64>(GameData_1ab5d5e);
}

[[gnu::visibility("hidden")]] void GameStub_17a7120(U64 object) {
  GameRoutine_17a67c0(object - 0x420);
}

[[gnu::visibility("hidden")]] void GameStub_17a7130(U64 object) {
  GameRoutine_17a6c40(object - 0x420);
}

[[gnu::visibility("hidden")]] U64 GameStub_17a7250(U64 object) {
  return GameRoutine_17a7290(At<U64>(object, 0x8));
}

[[gnu::visibility("hidden")]] U64 GameStub_17a8a60(U64 object) {
  return GameRoutine_17a7290(At<U64>(object, 0x8));
}

[[gnu::visibility("hidden")]] U32 GameStub_17a9720() {
  return 2;
}

[[gnu::visibility("hidden")]] U32 GameStub_17a9a60() {
  return 3;
}

[[gnu::visibility("hidden")]] void GameStub_17ae740() {
}

[[gnu::visibility("hidden")]] void GameStub_17aeb80() {
}

[[gnu::visibility("hidden")]] U32 GameStub_17b0180() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 GameStub_17b02f0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 GameStub_17b0570() {
  return 1;
}

[[gnu::visibility("hidden")]] void GameStub_17b07e0() {
}

[[gnu::visibility("hidden")]] U32 GameStub_17b1bd0() {
  return 4;
}

[[gnu::visibility("hidden")]] U32 GameStub_17b1cb0() {
  return 3;
}

[[gnu::visibility("hidden")]] U64 GameStub_17b30d0() {
  return reinterpret_cast<U64>(GameData_1aef113);
}

[[gnu::visibility("hidden")]] U32 GameStub_17b31a0() {
  return 0;
}

[[gnu::visibility("hidden")]] void GameStub_17b4cd0(U64 object) {
  GameRoutine_17b49b0(object - 0xb0);
}

[[gnu::visibility("hidden")]] void GameStub_17b7070() {
}

[[gnu::visibility("hidden")]] void GameStub_17b7230() {
}

[[gnu::visibility("hidden")]] U64 GameStub_17b7330(U64 object) {
  return GameRoutine_16dd9a0(At<U64>(object, 0x8));
}

[[gnu::visibility("hidden")]] U32 GameStub_17b7430() {
  return 1;
}

[[gnu::visibility("hidden")]] U8 GameStub_17b7c00(U64 object) {
  return At<U8>(object, 0x65);
}

[[gnu::visibility("hidden")]] void GameStub_17b8a50() {
  GameRoutine_17b9000();
}

[[gnu::visibility("hidden")]] void GameStub_17c4b90() {
}

[[gnu::visibility("hidden")]] U32 GameStub_17c4c80() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 GameStub_17c4c90() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_17c4ca0() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_17c4cb0() {
  return 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_17c4cc0() {
  return 0x0;
}

[[gnu::visibility("hidden")]] void GameStub_17c4cd0() {
}

[[gnu::visibility("hidden")]] void GameStub_17c4ce0() {
}

[[gnu::visibility("hidden")]] U32 GameStub_17c7bb0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 GameStub_17c7bc0() {
  return 1;
}

[[gnu::visibility("hidden")]] void GameStub_17c7bd0() {
}

[[gnu::visibility("hidden")]] void GameStub_17c7be0() {
}

[[gnu::visibility("hidden")]] void GameStub_17c8180(U64 object) {
  GameRoutine_17c7f60(object - 0x18);
}

[[gnu::visibility("hidden")]] void GameStub_17cec60() {
  GameRoutine_17ce880();
}

[[gnu::visibility("hidden")]] void GameStub_17cec70(U64 object) {
  GameRoutine_17ce880(object - 0x8);
}

[[gnu::visibility("hidden")]] U32 GameStub_17d26b0() {
  return 5;
}

[[gnu::visibility("hidden")]] U32 GameStub_17d26c0() {
  return 2;
}

[[gnu::visibility("hidden")]] U32 GameStub_17d26d0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 GameStub_17d26e0() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 GameStub_17d26f0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 GameStub_17d2700() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 GameStub_17d2710() {
  return 0;
}

[[gnu::visibility("hidden")]] void GameStub_17d6610() {
}

[[gnu::visibility("hidden")]] U64 GameStub_17d66c0(U64, U64 other) {
  return GameRoutine_c7f20(At<U64>(other, 0x0), other);
}

[[gnu::visibility("hidden")]] U8 GameStub_17db4a0(U64 object) {
  return At<U8>(object, 0x21);
}

[[gnu::visibility("hidden")]] U32 GameStub_17e1170() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 GameStub_17e11b0() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_17e11f0() {
  return 2;
}

[[gnu::visibility("hidden")]] U32 GameStub_17e1230() {
  return 4;
}

[[gnu::visibility("hidden")]] U32 GameStub_17e1270() {
  return 5;
}

[[gnu::visibility("hidden")]] U32 GameStub_17e12b0() {
  return 7;
}

[[gnu::visibility("hidden")]] U32 GameStub_17e1510() {
  return 1;
}

[[gnu::visibility("hidden")]] void GameStub_17e1bc0() {
}

[[gnu::visibility("hidden")]] U64 GameStub_17e1c90() {
  return reinterpret_cast<U64>(GameData_20da5c0);
}

[[gnu::visibility("hidden")]] U32 GameStub_17e1d80() {
  return 4;
}

[[gnu::visibility("hidden")]] U32 GameStub_17e1e70() {
  return 5;
}

[[gnu::visibility("hidden")]] U32 GameStub_17e1f60() {
  return 6;
}

[[gnu::visibility("hidden")]] void GameStub_17e2d80() {
}

[[gnu::visibility("hidden")]] void GameStub_17e3cb0() {
  GameRoutine_1a0a740();
}

[[gnu::visibility("hidden")]] void GameStub_17e6db0() {
  GameRoutine_1a0a0b0();
}

[[gnu::visibility("hidden")]] void GameStub_1812230() {
}

[[gnu::visibility("hidden")]] void GameStub_1812240() {
}

[[gnu::visibility("hidden")]] void GameStub_1812250() {
}

[[gnu::visibility("hidden")]] void GameStub_1812260() {
}

[[gnu::visibility("hidden")]] void GameStub_1812270() {
}

[[gnu::visibility("hidden")]] U32 GameStub_18123a0() {
  return 1;
}

[[gnu::visibility("hidden")]] void GameStub_1812b40() {
}

[[gnu::visibility("hidden")]] void GameStub_1818780() {
}

[[gnu::visibility("hidden")]] void GameStub_18196c0() {
}

[[gnu::visibility("hidden")]] U32 GameStub_181b470() {
  return 150;
}

[[gnu::visibility("hidden")]] U64 GameStub_181b480() {
  return reinterpret_cast<U64>(GameData_1ab5ea2);
}

[[gnu::visibility("hidden")]] U32 GameStub_1824550() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 GameStub_1824740() {
  return 3;
}

[[gnu::visibility("hidden")]] void GameStub_1828c10(U64 object) {
  GameRoutine_1828a40(object - 0x18);
}

[[gnu::visibility("hidden")]] void GameStub_182c160(U64 object) {
  GameRoutine_182bfd0(object - 0x420);
}

[[gnu::visibility("hidden")]] U32 GameStub_1839f70() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 GameStub_183eb10() {
  return 1;
}

[[gnu::visibility("hidden")]] void GameStub_183eb20() {
}

[[gnu::visibility("hidden")]] void GameStub_183eb30() {
}

[[gnu::visibility("hidden")]] void GameStub_1840440() {
}

[[gnu::visibility("hidden")]] void GameStub_1840450() {
}

[[gnu::visibility("hidden")]] U32 GameStub_18457e0() {
  return 15;
}

[[gnu::visibility("hidden")]] U32 GameStub_1845850() {
  return 15;
}

[[gnu::visibility("hidden")]] void GameStub_18458c0(U64 object) {
  GameRoutine_1845630(object - 0x420);
}

[[gnu::visibility("hidden")]] U8 GameStub_1846640(U64 object) {
  return At<U8>(object, 0xa0);
}

[[gnu::visibility("hidden")]] U64 GameStub_1846650() {
  return 0x0;
}

[[gnu::visibility("hidden")]] U64 GameStub_18466c0() {
  return reinterpret_cast<U64>(GameData_1a9f09e);
}

[[gnu::visibility("hidden")]] U64 GameStub_1846700() {
  return reinterpret_cast<U64>(GameData_1a9f09e);
}

[[gnu::visibility("hidden")]] U64 GameStub_1846710() {
  return reinterpret_cast<U64>(GameData_1a9f09e);
}

[[gnu::visibility("hidden")]] U64 GameStub_1846720() {
  return reinterpret_cast<U64>(GameData_1a9f09e);
}

[[gnu::visibility("hidden")]] U32 GameStub_1846730() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 GameStub_1846740() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 GameStub_1846750() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 GameStub_1846760() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 GameStub_1846780() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 GameStub_1846790() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 GameStub_18467a0() {
  return 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_18467b0() {
  return reinterpret_cast<U64>(GameData_1a9f09e);
}

[[gnu::visibility("hidden")]] U64 GameStub_18467c0() {
  return reinterpret_cast<U64>(GameData_1a9f09e);
}

[[gnu::visibility("hidden")]] U32 GameStub_18467d0() {
  return 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_18467e0() {
  return 0x0;
}

[[gnu::visibility("hidden")]] U64 GameStub_18467f0() {
  return 0x0;
}

[[gnu::visibility("hidden")]] U64 GameStub_1846800() {
  return 0x0;
}

[[gnu::visibility("hidden")]] U32 GameStub_1846810() {
  return 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_1846820() {
  return 0x0;
}

[[gnu::visibility("hidden")]] U32 GameStub_1846830() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 GameStub_1846840() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 GameStub_1846850() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 GameStub_1846860() {
  return 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_1846870() {
  return 0x0;
}

[[gnu::visibility("hidden")]] U64 GameStub_1846880() {
  return 0x0;
}

[[gnu::visibility("hidden")]] bool GameStub_1847110(U64 object) {
  return At<U32>(object, 0x60) == 2u;
}

[[gnu::visibility("hidden")]] U32 GameStub_1847570() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 GameStub_1847ca0() {
  return 1;
}

[[gnu::visibility("hidden")]] U64 GameStub_1847cb0() {
  return 0x0;
}

[[gnu::visibility("hidden")]] bool GameStub_18481b0(U64 object) {
  return At<U32>(object, 0x60) == 2u;
}

[[gnu::visibility("hidden")]] void GameStub_1849fb0() {
}

[[gnu::visibility("hidden")]] U32 GameStub_184a190() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 GameStub_184ade0() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 GameStub_184b5e0() {
  return 3;
}

[[gnu::visibility("hidden")]] void GameStub_184c480(U64 object) {
  GameRoutine_184c2d0(object - 0x420);
}

[[gnu::visibility("hidden")]] void GameStub_184fe50(U64 object) {
  GameRoutine_184fca0(object - 0x420);
}

[[gnu::visibility("hidden")]] U32 GameStub_1850200() {
  return 12;
}

[[gnu::visibility("hidden")]] U32 GameStub_1850210() {
  return 12;
}

[[gnu::visibility("hidden")]] U32 GameStub_1850e00() {
  return 0;
}

[[gnu::visibility("hidden")]] void GameStub_1851990() {
}

[[gnu::visibility("hidden")]] void GameStub_1852530() {
}

[[gnu::visibility("hidden")]] U64 GameStub_1852580() {
  return reinterpret_cast<U64>(GameData_20e8c08);
}

[[gnu::visibility("hidden")]] void GameStub_1852630() {
}

[[gnu::visibility("hidden")]] U64 GameStub_1852700() {
  return reinterpret_cast<U64>(GameData_20e8c88);
}

[[gnu::visibility("hidden")]] U32 GameStub_18527b0() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 GameStub_1853200() {
  return 2;
}

[[gnu::visibility("hidden")]] void GameStub_1853fe0() {
}

[[gnu::visibility("hidden")]] U64 GameStub_18540a0() {
  return reinterpret_cast<U64>(GameData_20e9098);
}

[[gnu::visibility("hidden")]] U32 GameStub_1854150() {
  return 2;
}

[[gnu::visibility("hidden")]] U32 GameStub_1859070() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 GameStub_1859540() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 GameStub_18599b0() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 GameStub_1859e70() {
  return 3;
}

[[gnu::visibility("hidden")]] U64 GameStub_185ab80() {
  return reinterpret_cast<U64>(GameData_1aac0a4);
}

[[gnu::visibility("hidden")]] U64 GameStub_185ab90() {
  return reinterpret_cast<U64>(GameData_1ab978a);
}

[[gnu::visibility("hidden")]] U32 GameStub_185aba0() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_185b540() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_185b550() {
  return 7;
}

[[gnu::visibility("hidden")]] U32 GameStub_185b560() {
  return 1;
}

[[gnu::visibility("hidden")]] U64 GameStub_185b570() {
  return reinterpret_cast<U64>(GameData_1abbb17);
}

[[gnu::visibility("hidden")]] U64 GameStub_185b580() {
  return reinterpret_cast<U64>(GameData_1a93332);
}

[[gnu::visibility("hidden")]] U32 GameStub_185b590() {
  return 4;
}

[[gnu::visibility("hidden")]] U32 GameStub_185b5a0() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_185b5b0() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_185b5c0() {
  return 7;
}

[[gnu::visibility("hidden")]] U64 GameStub_185b5d0() {
  return reinterpret_cast<U64>(GameData_1abbb17);
}

[[gnu::visibility("hidden")]] U64 GameStub_185b5e0() {
  return reinterpret_cast<U64>(GameData_1a93332);
}

[[gnu::visibility("hidden")]] U32 GameStub_185b5f0() {
  return 4;
}

[[gnu::visibility("hidden")]] U32 GameStub_185b740() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_185c760() {
  return 3;
}

[[gnu::visibility("hidden")]] void GameStub_185c930(U64 object) {
  GameRoutine_185c7a0(object - 0x420);
}

[[gnu::visibility("hidden")]] U64 GameStub_185cea0() {
  return reinterpret_cast<U64>(GameData_1ad0c98);
}

[[gnu::visibility("hidden")]] void GameStub_185d1d0() {
}

[[gnu::visibility("hidden")]] void GameStub_185e320() {
  GameRoutine_16e1a00();
}

[[gnu::visibility("hidden")]] U32 GameStub_185fca0() {
  return 3;
}

[[gnu::visibility("hidden")]] U64 GameStub_1863810() {
  return reinterpret_cast<U64>(GameData_1aef125);
}

[[gnu::visibility("hidden")]] U64 GameStub_18639e0() {
  return reinterpret_cast<U64>(GameData_1a87162);
}

[[gnu::visibility("hidden")]] U32 GameStub_1863f80() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_1864050() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 GameStub_1864060() {
  return 1;
}

[[gnu::visibility("hidden")]] void GameStub_1867b20(U64 object) {
  GameRoutine_18674a0(object - 0x60);
}

[[gnu::visibility("hidden")]] void GameStub_1868570(U64 object) {
  GameRoutine_1867b40(object - 0x60);
}

[[gnu::visibility("hidden")]] void GameStub_1868730(U64 object) {
  GameRoutine_1868580(object - 0x60);
}

[[gnu::visibility("hidden")]] void GameStub_1869a90(U64 object) {
  GameRoutine_1868d40(object - 0x60);
}

[[gnu::visibility("hidden")]] void GameStub_1869ec0(U64 object) {
  GameRoutine_1869d60(object - 0x60);
}

[[gnu::visibility("hidden")]] void GameStub_186ac10(U64 object) {
  GameRoutine_186a6e0(object - 0x60);
}

[[gnu::visibility("hidden")]] U64 GameStub_186ca10() {
  return reinterpret_cast<U64>(GameData_1acef04);
}

[[gnu::visibility("hidden")]] U8 GameStub_186ca40(U64 object) {
  return At<U8>(object, 0x488);
}

[[gnu::visibility("hidden")]] U32 GameStub_186cca0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 GameStub_186cd20() {
  return 0;
}

[[gnu::visibility("hidden")]] U8 GameStub_186cf50(U64 object) {
  return At<U8>(object, 0x488);
}

[[gnu::visibility("hidden")]] U8 GameStub_186cf60(U64 object) {
  return At<U8>(object, 0x488);
}

[[gnu::visibility("hidden")]] void GameStub_186d620() {
  GameRoutine_16dd9a0();
}

[[gnu::visibility("hidden")]] U32 GameStub_186d860() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_186dd80() {
  return 11;
}

[[gnu::visibility("hidden")]] U64 GameStub_186dd90() {
  return reinterpret_cast<U64>(GameData_1aa299b);
}

[[gnu::visibility("hidden")]] U64 GameStub_186dda0() {
  return reinterpret_cast<U64>(GameData_1a96f09);
}

[[gnu::visibility("hidden")]] U32 GameStub_186df80() {
  return 0;
}

[[gnu::visibility("hidden")]] U8 GameStub_186df90(U64 object) {
  return At<U8>(object, 0x488);
}

[[gnu::visibility("hidden")]] U32 GameStub_186dfa0() {
  return 11;
}

[[gnu::visibility("hidden")]] void GameStub_186dfb0(U64 object) {
  GameRoutine_186d630(object - 0xb0);
}

[[gnu::visibility("hidden")]] U32 GameStub_186dfc0() {
  return 0;
}

[[gnu::visibility("hidden")]] U8 GameStub_186dfd0(U64 object) {
  return At<U8>(object, 0x68);
}

[[gnu::visibility("hidden")]] U64 GameStub_186dfe0() {
  return reinterpret_cast<U64>(GameData_1aa299b);
}

[[gnu::visibility("hidden")]] U64 GameStub_186dff0() {
  return reinterpret_cast<U64>(GameData_1a96f09);
}

[[gnu::visibility("hidden")]] void GameStub_186e000(U64 object) {
  GameRoutine_186ddb0(object - 0x420);
}

[[gnu::visibility("hidden")]] U32 GameStub_186e5f0() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_186e680() {
  return 8;
}

[[gnu::visibility("hidden")]] U64 GameStub_186e690() {
  return reinterpret_cast<U64>(GameData_1aef10c);
}

[[gnu::visibility("hidden")]] U64 GameStub_186f8a0() {
  return reinterpret_cast<U64>(GameData_20f3828);
}

[[gnu::visibility("hidden")]] U64 GameStub_186fec0() {
  return reinterpret_cast<U64>(GameData_20f3928);
}

[[gnu::visibility("hidden")]] void GameStub_1870260() {
}

[[gnu::visibility("hidden")]] U64 GameStub_1870f70() {
  return reinterpret_cast<U64>(GameData_1afcf99);
}

[[gnu::visibility("hidden")]] U64 GameStub_1870f80() {
  return reinterpret_cast<U64>(GameData_1ae0565);
}

[[gnu::visibility("hidden")]] U64 GameStub_1870f90() {
  return reinterpret_cast<U64>(GameData_1afcf99);
}

[[gnu::visibility("hidden")]] U64 GameStub_1870fa0() {
  return reinterpret_cast<U64>(GameData_1ae0565);
}

[[gnu::visibility("hidden")]] U64 GameStub_1871b90() {
  return reinterpret_cast<U64>(GameData_1abbc6b);
}

[[gnu::visibility("hidden")]] U64 GameStub_1871ba0() {
  return reinterpret_cast<U64>(GameData_1abbc6b);
}

[[gnu::visibility("hidden")]] U64 GameStub_1871bb0() {
  return reinterpret_cast<U64>(GameData_1afaea0);
}

[[gnu::visibility("hidden")]] U64 GameStub_1871bc0() {
  return reinterpret_cast<U64>(GameData_1afaea0);
}

[[gnu::visibility("hidden")]] U8 GameStub_18728c0(U64 object) {
  return At<U8>(object, 0x78);
}

[[gnu::visibility("hidden")]] void GameStub_1872ae0() {
}

[[gnu::visibility("hidden")]] U32 GameStub_1874a40() {
  return 8;
}

[[gnu::visibility("hidden")]] void GameStub_1874a50() {
}

[[gnu::visibility("hidden")]] U32 GameStub_1874c70() {
  return 3;
}

[[gnu::visibility("hidden")]] U64 GameStub_1875fc0() {
  return reinterpret_cast<U64>(GameData_1adcb6a);
}

[[gnu::visibility("hidden")]] U64 GameStub_1875fd0() {
  return reinterpret_cast<U64>(GameData_1aa25da);
}

[[gnu::visibility("hidden")]] U32 GameStub_1876970() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 GameStub_1876980() {
  return 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_1876990() {
  return reinterpret_cast<U64>(GameData_1ab0092);
}

[[gnu::visibility("hidden")]] U32 GameStub_1876a10() {
  return 12;
}

[[gnu::visibility("hidden")]] U64 GameStub_1876a20() {
  return reinterpret_cast<U64>(GameData_1afea98);
}

[[gnu::visibility("hidden")]] U64 GameStub_1876a30() {
  return reinterpret_cast<U64>(GameData_1af74d3);
}

[[gnu::visibility("hidden")]] U32 GameStub_1876a50() {
  return 12;
}

[[gnu::visibility("hidden")]] U64 GameStub_1876a60() {
  return reinterpret_cast<U64>(GameData_1afea98);
}

[[gnu::visibility("hidden")]] U64 GameStub_1876a70() {
  return reinterpret_cast<U64>(GameData_1af74d3);
}

[[gnu::visibility("hidden")]] U64 GameStub_1876f00(U64 object) {
  return At<U64>(At<U64>(object, 0x70), 0x20);
}

[[gnu::visibility("hidden")]] U32 GameStub_1876f10(U64 object) {
  return At<U32>(At<U64>(object, 0x70), 0x28);
}

[[gnu::visibility("hidden")]] void GameStub_1877770(U64 object) {
  GameRoutine_1876f30(object - 0x60);
}

[[gnu::visibility("hidden")]] void GameStub_18777f0(U64 object) {
  GameRoutine_18770e0(object - 0x60);
}

[[gnu::visibility("hidden")]] void GameStub_1877820() {
}

[[gnu::visibility("hidden")]] U32 GameStub_18778d0() {
  return 1;
}

[[gnu::visibility("hidden")]] U64 GameStub_1878d60() {
  return reinterpret_cast<U64>(GameData_1ae41c5);
}

[[gnu::visibility("hidden")]] U64 GameStub_1878d70() {
  return reinterpret_cast<U64>(GameData_1ad70c3);
}

[[gnu::visibility("hidden")]] U32 GameStub_1878d80() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_1879550() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_1879730() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_1879740() {
  return 6;
}

[[gnu::visibility("hidden")]] bool GameStub_1879750(U64 object) {
  return At<U64>(object, 0x428) == 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_18797b0() {
  return reinterpret_cast<U64>(GameData_1aa689f);
}

[[gnu::visibility("hidden")]] U32 GameStub_1879830() {
  return 11;
}

[[gnu::visibility("hidden")]] U64 GameStub_1879840() {
  return reinterpret_cast<U64>(GameData_1afea98);
}

[[gnu::visibility("hidden")]] U64 GameStub_1879850() {
  return reinterpret_cast<U64>(GameData_1a9eda2);
}

[[gnu::visibility("hidden")]] U32 GameStub_1879870() {
  return 11;
}

[[gnu::visibility("hidden")]] U64 GameStub_1879880() {
  return reinterpret_cast<U64>(GameData_1afea98);
}

[[gnu::visibility("hidden")]] U64 GameStub_1879890() {
  return reinterpret_cast<U64>(GameData_1a9eda2);
}

[[gnu::visibility("hidden")]] U64 GameStub_187a6a0() {
  return reinterpret_cast<U64>(GameData_1a8f7f2);
}

[[gnu::visibility("hidden")]] U32 GameStub_187b2b0() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_187b490() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_187b4a0() {
  return 6;
}

[[gnu::visibility("hidden")]] bool GameStub_187b4b0(U64 object) {
  return At<U64>(object, 0x428) == 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_187b510() {
  return reinterpret_cast<U64>(GameData_1aa689f);
}

[[gnu::visibility("hidden")]] U32 GameStub_187b590() {
  return 11;
}

[[gnu::visibility("hidden")]] U64 GameStub_187b5a0() {
  return reinterpret_cast<U64>(GameData_1adc748);
}

[[gnu::visibility("hidden")]] U64 GameStub_187b5b0() {
  return reinterpret_cast<U64>(GameData_1ae41db);
}

[[gnu::visibility("hidden")]] U32 GameStub_187b5d0() {
  return 11;
}

[[gnu::visibility("hidden")]] U64 GameStub_187b5e0() {
  return reinterpret_cast<U64>(GameData_1adc748);
}

[[gnu::visibility("hidden")]] U64 GameStub_187b5f0() {
  return reinterpret_cast<U64>(GameData_1ae41db);
}

[[gnu::visibility("hidden")]] U64 GameStub_187ba20(U64 object) {
  return At<U64>(At<U64>(object, 0x70), 0x0);
}

[[gnu::visibility("hidden")]] U32 GameStub_187ba30(U64 object) {
  return At<U32>(At<U64>(object, 0x70), 0x8);
}

[[gnu::visibility("hidden")]] void GameStub_187c190(U64 object) {
  GameRoutine_187ba50(object - 0x60);
}

[[gnu::visibility("hidden")]] void GameStub_187c1a0(U64 object) {
  GameRoutine_187bd30(object - 0x60);
}

[[gnu::visibility("hidden")]] U32 GameStub_187f710() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 GameStub_1880a30() {
  return 3;
}

[[gnu::visibility("hidden")]] U64 GameStub_1881ed0() {
  return reinterpret_cast<U64>(GameData_20fd608);
}

[[gnu::visibility("hidden")]] void GameStub_1881ee0() {
}

[[gnu::visibility("hidden")]] U32 GameStub_1882370() {
  return 1;
}

[[gnu::visibility("hidden")]] U64 GameStub_1882380() {
  return reinterpret_cast<U64>(GameData_1a8798a);
}

[[gnu::visibility("hidden")]] U64 GameStub_1882390() {
  return reinterpret_cast<U64>(GameData_1ac6c41);
}

[[gnu::visibility("hidden")]] U64 GameStub_18823d0() {
  return reinterpret_cast<U64>(GameData_1abfaa2);
}

[[gnu::visibility("hidden")]] U32 GameStub_1882c90() {
  return 16;
}

[[gnu::visibility("hidden")]] U32 GameStub_1882ca0() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_1882cb0() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_1882cc0() {
  return 7;
}

[[gnu::visibility("hidden")]] U64 GameStub_1882cd0() {
  return reinterpret_cast<U64>(GameData_1ae3d2a);
}

[[gnu::visibility("hidden")]] U64 GameStub_1882ce0() {
  return reinterpret_cast<U64>(GameData_1a9732c);
}

[[gnu::visibility("hidden")]] U32 GameStub_1882cf0() {
  return 7;
}

[[gnu::visibility("hidden")]] U64 GameStub_1882d00() {
  return reinterpret_cast<U64>(GameData_1ae3d2a);
}

[[gnu::visibility("hidden")]] U64 GameStub_1882d10() {
  return reinterpret_cast<U64>(GameData_1a9732c);
}

[[gnu::visibility("hidden")]] U32 GameStub_1882d20() {
  return 16;
}

[[gnu::visibility("hidden")]] U64 GameStub_1883480(U64 object) {
  return At<U64>(object, 0x60);
}

[[gnu::visibility("hidden")]] U32 GameStub_1883a10() {
  return 1;
}

[[gnu::visibility("hidden")]] U64 GameStub_1883a20() {
  return 0x0;
}

[[gnu::visibility("hidden")]] U64 GameStub_1883a30() {
  return 0x0;
}

[[gnu::visibility("hidden")]] U64 GameStub_1883a70(U64 object) {
  return At<U64>(object, 0x8);
}

[[gnu::visibility("hidden")]] void GameStub_1883af0(U64 object) {
  GameRoutine_18837e0(object - 0x58);
}

[[gnu::visibility("hidden")]] U32 GameStub_1883b00() {
  return 1;
}

[[gnu::visibility("hidden")]] U64 GameStub_1883b10() {
  return 0x0;
}

[[gnu::visibility("hidden")]] U64 GameStub_1883b20() {
  return 0x0;
}

[[gnu::visibility("hidden")]] U64 GameStub_1883c20(U64 object) {
  return GameRoutine_18837e0(At<U64>(object, 0x8));
}

[[gnu::visibility("hidden")]] U32 GameStub_1883d00() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 GameStub_1884540() {
  return 16;
}

[[gnu::visibility("hidden")]] U64 GameStub_1884550() {
  return reinterpret_cast<U64>(GameData_1ad73c0);
}

[[gnu::visibility("hidden")]] U64 GameStub_1884560() {
  return reinterpret_cast<U64>(GameData_1ad73c0);
}

[[gnu::visibility("hidden")]] U32 GameStub_1884570() {
  return 16;
}

[[gnu::visibility("hidden")]] void GameStub_1885870(U64 object) {
  GameRoutine_1888840(object - 0x48);
}

[[gnu::visibility("hidden")]] void GameStub_1886280(U64 object) {
  GameRoutine_1886020(object - 0x48);
}

[[gnu::visibility("hidden")]] void GameStub_188b860(U64 object) {
  GameRoutine_188b680(object - 0x48);
}

[[gnu::visibility("hidden")]] void GameStub_188f8f0(U64 object) {
  GameRoutine_1888840(object - 0x48);
}

[[gnu::visibility("hidden")]] void GameStub_1891d50(U64 object) {
  GameRoutine_1891c20(object - 0x408);
}

[[gnu::visibility("hidden")]] void GameStub_1896390(U64 object) {
  GameRoutine_18960c0(object - 0x48);
}

[[gnu::visibility("hidden")]] U32 GameStub_1898930() {
  return 1;
}

[[gnu::visibility("hidden")]] void GameStub_189bc20(U64 object) {
  GameRoutine_189bb00(object - 0x48);
}

[[gnu::visibility("hidden")]] U8 GameStub_189bc30(U64 object) {
  return At<U8>(object, 0x456);
}

[[gnu::visibility("hidden")]] U8 GameStub_189bc40(U64 object) {
  return At<U8>(object, 0x2e);
}

[[gnu::visibility("hidden")]] void GameStub_189bdb0(U64 object) {
  GameRoutine_189bc60(object - 0x428);
}

[[gnu::visibility("hidden")]] void GameStub_189e290(U64 object) {
  GameRoutine_189e180(object - 0x408);
}

[[gnu::visibility("hidden")]] void GameStub_189fb50(U64 object) {
  GameRoutine_189fa60(object - 0x48);
}

[[gnu::visibility("hidden")]] U8 GameStub_189fb60(U64 object) {
  return At<U8>(object, 0x442);
}

[[gnu::visibility("hidden")]] U8 GameStub_189fb70(U64 object) {
  return At<U8>(object, 0x1a);
}

[[gnu::visibility("hidden")]] void GameStub_189fca0(U64 object) {
  GameRoutine_189fb80(object - 0x428);
}

[[gnu::visibility("hidden")]] void GameStub_18a2560(U64 object) {
  GameRoutine_18a2440(object - 0x8);
}

[[gnu::visibility("hidden")]] void GameStub_18a4bc0(U64 object) {
  GameRoutine_1888840(object - 0x48);
}

[[gnu::visibility("hidden")]] void GameStub_18abde0() {
  GameRoutine_1888840();
}

[[gnu::visibility("hidden")]] void GameStub_18ac130(U64 object) {
  GameRoutine_18abec0(object - 0x8);
}

[[gnu::visibility("hidden")]] void GameStub_18ac7e0(U64 object) {
  GameRoutine_18ac200(object - 0x8);
}

[[gnu::visibility("hidden")]] void GameStub_18b22f0() {
}

[[gnu::visibility("hidden")]] U8 GameStub_18b2ad0(U64 object) {
  return At<U8>(object, 0x414);
}

[[gnu::visibility("hidden")]] U8 GameStub_18b2ae0(U64 object) {
  return At<U8>(object, 0xc);
}

[[gnu::visibility("hidden")]] void GameStub_18b2c30(U64 object) {
  GameRoutine_18b2b00(object - 0x408);
}

[[gnu::visibility("hidden")]] U32 GameStub_18b2c40(U64 object) {
  return At<U32>(object, 0x410);
}

[[gnu::visibility("hidden")]] U32 GameStub_18b2c50(U64 object) {
  return At<U32>(object, 0x8);
}

[[gnu::visibility("hidden")]] void GameStub_18b3900(U64 object) {
  GameRoutine_18b3800(object - 0x408);
}

[[gnu::visibility("hidden")]] void GameStub_18b4130(U64 object) {
  GameRoutine_1888840(object - 0x48);
}

[[gnu::visibility("hidden")]] void GameStub_18b4b10(U64 object) {
  GameRoutine_18b49e0(object - 0x408);
}

[[gnu::visibility("hidden")]] void GameStub_18b5b00(U64 object) {
  GameRoutine_18b59e0(object - 0x408);
}

[[gnu::visibility("hidden")]] void GameStub_18b6380(U64 object) {
  GameRoutine_18b6260(object - 0x408);
}

[[gnu::visibility("hidden")]] U32 GameStub_18ba780() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 GameStub_18ba790() {
  return 0;
}

[[gnu::visibility("hidden")]] void GameStub_18bad10(U64 object) {
  GameRoutine_18bac00(object - 0x408);
}

[[gnu::visibility("hidden")]] bool GameStub_18c2610(U64 object) {
  return At<U32>(object, 0x114) != 9u;
}

[[gnu::visibility("hidden")]] void GameStub_18c2940() {
}

[[gnu::visibility("hidden")]] U64 GameStub_18c2a80() {
  return 0x0;
}

[[gnu::visibility("hidden")]] U32 GameStub_18c2ae0() {
  return 1;
}

[[gnu::visibility("hidden")]] void GameStub_18c7e80() {
  GameRoutine_18c7220();
}

[[gnu::visibility("hidden")]] void GameStub_18c8480() {
}

[[gnu::visibility("hidden")]] U64 GameStub_18c8df0(U64, U64 other) {
  return GameRoutine_18bf740(At<U64>(other, 0x0), other);
}

[[gnu::visibility("hidden")]] U64 GameStub_18c8fe0(U64, U64 other) {
  return GameRoutine_18bfef0(At<U64>(other, 0x0), other);
}

[[gnu::visibility("hidden")]] U64 GameStub_18c90c0(U64, U64 other) {
  return GameRoutine_18bf8c0(At<U64>(other, 0x0), other);
}

[[gnu::visibility("hidden")]] U64 GameStub_18c97d0(U64, U64 other) {
  return GameRoutine_18c0790(At<U64>(other, 0x0), other);
}

[[gnu::visibility("hidden")]] U64 GameStub_18c98b0(U64, U64 other) {
  return GameRoutine_18c0980(At<U64>(other, 0x0), other);
}

[[gnu::visibility("hidden")]] void GameStub_18c98f0() {
}

[[gnu::visibility("hidden")]] void GameStub_18ca5b0(U64 object) {
  GameRoutine_18ca480(object - 0x408);
}

[[gnu::visibility("hidden")]] void GameStub_18cb030(U64 object) {
  GameRoutine_18caf00(object - 0x408);
}

[[gnu::visibility("hidden")]] U64 GameStub_18d62e0() {
  return reinterpret_cast<U64>(GameData_2109998);
}

[[gnu::visibility("hidden")]] U32 GameStub_18db4e0() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_18db540() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 GameStub_18dc230() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_18dc560() {
  return 0;
}

[[gnu::visibility("hidden")]] void GameStub_18df840() {
}

[[gnu::visibility("hidden")]] void GameStub_18df880() {
}

[[gnu::visibility("hidden")]] void GameStub_18df930() {
}

[[gnu::visibility("hidden")]] void GameStub_18e6160() {
  GameRoutine_d4ee0();
}

[[gnu::visibility("hidden")]] void GameStub_18e7230() {
  GameRoutine_d9210();
}

[[gnu::visibility("hidden")]] void GameStub_18e7240() {
  GameRoutine_d9340();
}

[[gnu::visibility("hidden")]] void GameStub_18e7250() {
  GameRoutine_d93b0();
}

[[gnu::visibility("hidden")]] void GameStub_18f9e70() {
}

[[gnu::visibility("hidden")]] void GameStub_18fa150(U64 object) {
  GameRoutine_18f9f90(object - 0x420);
}

[[gnu::visibility("hidden")]] U64 GameStub_18fa570() {
  return reinterpret_cast<U64>(GameData_1a879e2);
}

[[gnu::visibility("hidden")]] U64 GameStub_18fa580() {
  return reinterpret_cast<U64>(GameData_1a879e2);
}

[[gnu::visibility("hidden")]] U64 GameStub_18fa940() {
  return reinterpret_cast<U64>(GameData_1aebf67);
}

[[gnu::visibility("hidden")]] U64 GameStub_18fa950() {
  return reinterpret_cast<U64>(GameData_1aebf67);
}

[[gnu::visibility("hidden")]] U64 GameStub_18fa960() {
  return reinterpret_cast<U64>(GameData_1abf9a3);
}

[[gnu::visibility("hidden")]] U64 GameStub_18fa970() {
  return reinterpret_cast<U64>(GameData_1af373d);
}

[[gnu::visibility("hidden")]] U64 GameStub_18fa980() {
  return reinterpret_cast<U64>(GameData_1a8562d);
}

[[gnu::visibility("hidden")]] U32 GameStub_18fa990() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_18fa9a0() {
  return 128;
}

[[gnu::visibility("hidden")]] U32 GameStub_18fa9b0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 GameStub_18fa9c0() {
  return 3;
}

[[gnu::visibility("hidden")]] void GameStub_18fa9d0() {
}

[[gnu::visibility("hidden")]] U32 GameStub_18fa9e0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 GameStub_18fa9f0() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 GameStub_18fee90() {
  return 1;
}

[[gnu::visibility("hidden")]] U64 GameStub_18fefb0() {
  return reinterpret_cast<U64>(GameData_1abf9dc);
}

[[gnu::visibility("hidden")]] U64 GameStub_18ff410() {
  return reinterpret_cast<U64>(GameData_1aef2ee);
}

[[gnu::visibility("hidden")]] U64 GameStub_18ff420() {
  return reinterpret_cast<U64>(GameData_1abf9dc);
}

[[gnu::visibility("hidden")]] U64 GameStub_18ff430() {
  return reinterpret_cast<U64>(GameData_1aef2ee);
}

[[gnu::visibility("hidden")]] void GameStub_18ff440(U64 object) {
  GameRoutine_18fefc0(object - 0xb0);
}

[[gnu::visibility("hidden")]] U8 GameStub_18ffe00(U64 object) {
  return At<U8>(object, 0x65);
}

[[gnu::visibility("hidden")]] U8 GameStub_18ffe10(U64 object) {
  return At<U8>(object, 0x64);
}

[[gnu::visibility("hidden")]] void GameStub_1900060() {
}

[[gnu::visibility("hidden")]] U64 GameStub_1902710() {
  return reinterpret_cast<U64>(GameData_1ab7e51);
}

[[gnu::visibility("hidden")]] U64 GameStub_1902720() {
  return reinterpret_cast<U64>(GameData_1a87a01);
}

[[gnu::visibility("hidden")]] U32 GameStub_1902730() {
  return 4;
}

[[gnu::visibility("hidden")]] void GameStub_1902740() {
}

[[gnu::visibility("hidden")]] void GameStub_1902750() {
  GameRoutine_80d680();
}

[[gnu::visibility("hidden")]] void GameStub_1902760() {
  GameRoutine_80d750();
}

[[gnu::visibility("hidden")]] U32 GameStub_1903250() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 GameStub_1903260() {
  return 0;
}

[[gnu::visibility("hidden")]] void GameStub_1903ca0() {
}

[[gnu::visibility("hidden")]] void GameStub_1904400() {
}

[[gnu::visibility("hidden")]] void GameStub_1904cc0() {
  GameRoutine_80dc30();
}

[[gnu::visibility("hidden")]] void GameStub_1904cd0() {
  GameRoutine_80dc30();
}

[[gnu::visibility("hidden")]] void GameStub_1904ce0() {
  GameRoutine_80db60();
}

[[gnu::visibility("hidden")]] void GameStub_1904cf0() {
  GameRoutine_80db60();
}

[[gnu::visibility("hidden")]] U32 GameStub_1905b00() {
  return 4;
}

[[gnu::visibility("hidden")]] void GameStub_1905b80() {
}

[[gnu::visibility("hidden")]] void GameStub_1909470() {
  GameRoutine_5612b0();
}

[[gnu::visibility("hidden")]] void GameStub_190af60() {
}

[[gnu::visibility("hidden")]] void GameStub_190b270() {
}

[[gnu::visibility("hidden")]] void GameStub_190d170() {
  GameRoutine_19e70();
}

[[gnu::visibility("hidden")]] void GameStub_190d3b0() {
}

[[gnu::visibility("hidden")]] void GameStub_190de30() {
}

[[gnu::visibility("hidden")]] U64 GameStub_190de40() {
  return 0x0;
}

[[gnu::visibility("hidden")]] void GameStub_1917b10() {
}

[[gnu::visibility("hidden")]] void GameStub_1917b20() {
}

[[gnu::visibility("hidden")]] U64 GameStub_1919030() {
  return reinterpret_cast<U64>(GameData_2110260);
}

[[gnu::visibility("hidden")]] void GameStub_1919570() {
  GameRoutine_4e960();
}

[[gnu::visibility("hidden")]] void GameStub_1919a70() {
}

[[gnu::visibility("hidden")]] void GameStub_191c230(U64 object, U8 value) {
  At<U8>(object, 0x8) = value;
}

[[gnu::visibility("hidden")]] void GameStub_191c400(U64 object, U64 value) {
  At<U64>(object, 0x60) = value;
}

[[gnu::visibility("hidden")]] void GameStub_191c610(U64 object) {
  GameRoutine_60a060(object + 0x78);
}

[[gnu::visibility("hidden")]] void GameStub_191d110() {
}

[[gnu::visibility("hidden")]] U64 GameStub_19253b0() {
  return reinterpret_cast<U64>(GameData_1a87a3d);
}

[[gnu::visibility("hidden")]] U64 GameStub_19253c0() {
  return reinterpret_cast<U64>(GameData_1ae3a59);
}

[[gnu::visibility("hidden")]] U32 GameStub_19253d0() {
  return 1;
}

[[gnu::visibility("hidden")]] U64 GameStub_19253e0() {
  return reinterpret_cast<U64>(GameData_1ae5940);
}

[[gnu::visibility("hidden")]] U32 GameStub_1925560() {
  return 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_1925570() {
  return reinterpret_cast<U64>(GameData_1aa95bd);
}

[[gnu::visibility("hidden")]] U64 GameStub_1925730() {
  return reinterpret_cast<U64>(GameData_1aa95bd);
}

[[gnu::visibility("hidden")]] U32 GameStub_1925740() {
  return 0;
}

[[gnu::visibility("hidden")]] void GameStub_1925750(U64 object) {
  GameRoutine_1925580(object - 0x420);
}

[[gnu::visibility("hidden")]] U64 GameStub_1926180() {
  return reinterpret_cast<U64>(GameData_1ac91ca);
}

[[gnu::visibility("hidden")]] U64 GameStub_1926190() {
  return reinterpret_cast<U64>(GameData_1ac1d0e);
}

[[gnu::visibility("hidden")]] U64 GameStub_1927400() {
  return reinterpret_cast<U64>(GameData_1a87a3d);
}

[[gnu::visibility("hidden")]] U64 GameStub_1927410() {
  return reinterpret_cast<U64>(GameData_1ae3a59);
}

[[gnu::visibility("hidden")]] U32 GameStub_1927420() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_1927430() {
  return 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_1927440() {
  return reinterpret_cast<U64>(GameData_1ae80a7);
}

[[gnu::visibility("hidden")]] U64 GameStub_1927450() {
  return reinterpret_cast<U64>(GameData_1ae80a7);
}

[[gnu::visibility("hidden")]] U32 GameStub_1927460() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 GameStub_19281c0() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 GameStub_192b990() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 GameStub_192c940() {
  return 3;
}

[[gnu::visibility("hidden")]] U64 GameStub_192cba0(U64 object) {
  return GameRoutine_94b1e0(At<U64>(object, 0x58));
}

[[gnu::visibility("hidden")]] U32 GameStub_192daf0() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 GameStub_1930ca0() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 GameStub_1932440() {
  return 3;
}

[[gnu::visibility("hidden")]] void GameStub_1934300(U64 object) {
  GameRoutine_1934160(object - 0xb0);
}

[[gnu::visibility("hidden")]] U64 GameStub_1935740() {
  return reinterpret_cast<U64>(GameData_1ac924f);
}

[[gnu::visibility("hidden")]] U64 GameStub_1935780() {
  return reinterpret_cast<U64>(GameData_1a98ed2);
}

[[gnu::visibility("hidden")]] U32 GameStub_1935cb0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 GameStub_1935cc0() {
  return 13;
}

[[gnu::visibility("hidden")]] void GameStub_1935cd0() {
  GameRoutine_80d8f0();
}

[[gnu::visibility("hidden")]] void GameStub_1935ce0() {
  GameRoutine_80d820();
}

[[gnu::visibility("hidden")]] U32 GameStub_1935cf0() {
  return 13;
}

[[gnu::visibility("hidden")]] void GameStub_1935d00() {
  GameRoutine_80d820();
}

[[gnu::visibility("hidden")]] void GameStub_1935d10() {
  GameRoutine_80d8f0();
}

[[gnu::visibility("hidden")]] U32 GameStub_1936f20() {
  return 3;
}

[[gnu::visibility("hidden")]] void GameStub_194a250() {
}

[[gnu::visibility("hidden")]] void GameStub_194bea0() {
}

[[gnu::visibility("hidden")]] void GameStub_194e810() {
}

[[gnu::visibility("hidden")]] void GameStub_194f040(U64 object) {
  GameRoutine_194ea60(object - 0x98);
}

[[gnu::visibility("hidden")]] void GameStub_1954e20(U64 object) {
  GameRoutine_1953de0(object + 0xb8);
}

[[gnu::visibility("hidden")]] void GameStub_1955f60() {
  GameRoutine_1955a20();
}

[[gnu::visibility("hidden")]] void GameStub_19584d0() {
}

[[gnu::visibility("hidden")]] void GameStub_1958510() {
}

[[gnu::visibility("hidden")]] void GameStub_1958a10() {
  GameRoutine_194e230();
}

[[gnu::visibility("hidden")]] void GameStub_1959f20(U64 object) {
  GameRoutine_1959cc0(object - 0x98);
}

[[gnu::visibility("hidden")]] void GameStub_195a720() {
}

[[gnu::visibility("hidden")]] void GameStub_195a7a0() {
}

[[gnu::visibility("hidden")]] void GameStub_1964400() {
  GameRoutine_1969870();
}

[[gnu::visibility("hidden")]] void GameStub_1964410() {
  GameRoutine_19650f0();
}

[[gnu::visibility("hidden")]] void GameStub_1964430() {
  GameRoutine_19699c0();
}

[[gnu::visibility("hidden")]] void GameStub_1966740(U64 object) {
  GameRoutine_1964760(object + 0xb8);
}

[[gnu::visibility("hidden")]] void GameStub_1966890(U64 object) {
  GameRoutine_1964870(object + 0xb8);
}

[[gnu::visibility("hidden")]] void GameStub_1966dc0() {
  GameRoutine_196cb60();
}

[[gnu::visibility("hidden")]] void GameStub_19673a0() {
}

[[gnu::visibility("hidden")]] void GameStub_19683a0(U64 object) {
  GameRoutine_1965060(object + 0xb8);
}

[[gnu::visibility("hidden")]] void GameStub_1968750() {
  GameRoutine_1968280();
}

[[gnu::visibility("hidden")]] void GameStub_1968760() {
  GameRoutine_19683c0();
}

[[gnu::visibility("hidden")]] void GameStub_1968770(U64 object) {
  GameRoutine_1965060(object + 0x20);
}

[[gnu::visibility("hidden")]] void GameStub_1968ef0(U64 object) {
  GameRoutine_1964d30(object + 0xb8);
}

[[gnu::visibility("hidden")]] void GameStub_1969310() {
  GameRoutine_94bf40();
}

[[gnu::visibility("hidden")]] void GameStub_1969860() {
  GameRoutine_1969320();
}

[[gnu::visibility("hidden")]] U64 GameStub_1969ba0() {
  return reinterpret_cast<U64>(GameData_1aff195);
}

[[gnu::visibility("hidden")]] U64 GameStub_1969bb0() {
  return 0x0;
}

[[gnu::visibility("hidden")]] U64 GameStub_1969bc0() {
  return reinterpret_cast<U64>(GameData_1aff195);
}

[[gnu::visibility("hidden")]] U64 GameStub_1969bd0() {
  return 0x0;
}

[[gnu::visibility("hidden")]] U32 GameStub_196a0f0() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 GameStub_196a650() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 GameStub_197e450() {
  return 3;
}

[[gnu::visibility("hidden")]] void GameStub_19809a0() {
}

[[gnu::visibility("hidden")]] void GameStub_19809b0() {
}

[[gnu::visibility("hidden")]] void GameStub_19809c0() {
}

[[gnu::visibility("hidden")]] void GameStub_19809d0() {
}

[[gnu::visibility("hidden")]] void GameStub_1986ca0() {
}

[[gnu::visibility("hidden")]] void GameStub_1988100() {
}

[[gnu::visibility("hidden")]] U64 GameStub_19886f0() {
  return reinterpret_cast<U64>(GameData_211d508);
}

[[gnu::visibility("hidden")]] U32 GameStub_199abc0() {
  return 5;
}

[[gnu::visibility("hidden")]] U32 GameStub_199ad90() {
  return 1;
}

[[gnu::visibility("hidden")]] U64 GameStub_199ada0() {
  return reinterpret_cast<U64>(GameData_1a8798a);
}

[[gnu::visibility("hidden")]] U64 GameStub_199adb0() {
  return reinterpret_cast<U64>(GameData_1ac6c41);
}

[[gnu::visibility("hidden")]] U32 GameStub_199adf0() {
  return 1;
}

[[gnu::visibility("hidden")]] U64 GameStub_199ae00() {
  return reinterpret_cast<U64>(GameData_1abbd47);
}

[[gnu::visibility("hidden")]] U32 GameStub_199b560() {
  return 8;
}

[[gnu::visibility("hidden")]] void GameStub_199b600() {
  GameRoutine_16dd9a0();
}

[[gnu::visibility("hidden")]] U32 GameStub_199b610() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_199b620() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_199b630() {
  return 7;
}

[[gnu::visibility("hidden")]] U64 GameStub_199b640() {
  return reinterpret_cast<U64>(GameData_1a8f27f);
}

[[gnu::visibility("hidden")]] U64 GameStub_199b650() {
  return reinterpret_cast<U64>(GameData_1afb722);
}

[[gnu::visibility("hidden")]] U32 GameStub_199b660() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_199b670() {
  return 7;
}

[[gnu::visibility("hidden")]] U64 GameStub_199b680() {
  return reinterpret_cast<U64>(GameData_1a8f27f);
}

[[gnu::visibility("hidden")]] U64 GameStub_199b690() {
  return reinterpret_cast<U64>(GameData_1afb722);
}

[[gnu::visibility("hidden")]] U32 GameStub_199b6a0() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_199b6b0() {
  return 8;
}

[[gnu::visibility("hidden")]] void GameStub_199b7c0() {
}

[[gnu::visibility("hidden")]] void GameStub_199c080() {
  GameRoutine_199c0d0();
}

[[gnu::visibility("hidden")]] U64 GameStub_199c0c0(U64 object) {
  return At<U64>(object, 0x60);
}

[[gnu::visibility("hidden")]] U64 GameStub_199c9b0() {
  return reinterpret_cast<U64>(GameData_1ada68f);
}

[[gnu::visibility("hidden")]] U64 GameStub_199c9c0() {
  return reinterpret_cast<U64>(GameData_1af52e1);
}

[[gnu::visibility("hidden")]] U64 GameStub_199ca00(U64 object) {
  return At<U64>(object, 0x8);
}

[[gnu::visibility("hidden")]] void GameStub_199ca10(U64 object) {
  GameRoutine_199c0d0(object - 0x58);
}

[[gnu::visibility("hidden")]] void GameStub_199ca20(U64 object) {
  GameRoutine_199c220(object - 0x58);
}

[[gnu::visibility("hidden")]] void GameStub_199ca30(U64 object) {
  GameRoutine_199c530(object - 0x58);
}

[[gnu::visibility("hidden")]] void GameStub_199ca40(U64 object) {
  GameRoutine_199c6f0(object - 0x58);
}

[[gnu::visibility("hidden")]] void GameStub_199ca50(U64 object) {
  GameRoutine_199c400(object - 0x58);
}

[[gnu::visibility("hidden")]] U64 GameStub_199ca60() {
  return reinterpret_cast<U64>(GameData_1ada68f);
}

[[gnu::visibility("hidden")]] U64 GameStub_199ca70() {
  return reinterpret_cast<U64>(GameData_1af52e1);
}

[[gnu::visibility("hidden")]] void GameStub_19a0940() {
}

[[gnu::visibility("hidden")]] void GameStub_19a9fb0(U64 object) {
  GameRoutine_19a9e80(object - 0x408);
}

[[gnu::visibility("hidden")]] U32 GameStub_19aa1c0() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_19aa310() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_19ab6d0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 GameStub_19ab6e0() {
  return 0;
}

[[gnu::visibility("hidden")]] void GameStub_19ab6f0() {
}

[[gnu::visibility("hidden")]] void GameStub_19ac280(U64 object) {
  GameRoutine_19ac160(object - 0x408);
}

[[gnu::visibility("hidden")]] void GameStub_19acd50(U64 object) {
  GameRoutine_19acc40(object - 0x408);
}

[[gnu::visibility("hidden")]] void GameStub_19ad9b0(U64 object) {
  GameRoutine_19ad8a0(object - 0x408);
}

[[gnu::visibility("hidden")]] void GameStub_19b4d50() {
}

[[gnu::visibility("hidden")]] void GameStub_19b60a0() {
}

[[gnu::visibility("hidden")]] void GameStub_19b6b00() {
}

[[gnu::visibility("hidden")]] void GameStub_19b9080() {
}

[[gnu::visibility("hidden")]] void GameStub_19be0f0() {
}

[[gnu::visibility("hidden")]] void GameStub_19c0a50() {
}

[[gnu::visibility("hidden")]] U64 GameStub_19c1840() {
  return reinterpret_cast<U64>(GameData_1afe7ab);
}

[[gnu::visibility("hidden")]] U64 GameStub_19c1850() {
  return reinterpret_cast<U64>(GameData_1a8d5f6);
}

[[gnu::visibility("hidden")]] U64 GameStub_19c2230() {
  return reinterpret_cast<U64>(GameData_1a9f09e);
}

[[gnu::visibility("hidden")]] U64 GameStub_19c2240() {
  return reinterpret_cast<U64>(GameData_1a9f09e);
}

[[gnu::visibility("hidden")]] void GameStub_19c2250() {
}

[[gnu::visibility("hidden")]] U64 GameStub_19c2360() {
  return reinterpret_cast<U64>(GameData_1afa930);
}

[[gnu::visibility("hidden")]] U64 GameStub_19c2370() {
  return reinterpret_cast<U64>(GameData_1a8d5f6);
}

[[gnu::visibility("hidden")]] U64 GameStub_19c2560() {
  return reinterpret_cast<U64>(GameData_1aaa98f);
}

[[gnu::visibility("hidden")]] U64 GameStub_19c2570() {
  return reinterpret_cast<U64>(GameData_1a8d5f6);
}

[[gnu::visibility("hidden")]] U64 GameStub_19c2880() {
  return reinterpret_cast<U64>(GameData_1aa3104);
}

[[gnu::visibility("hidden")]] U64 GameStub_19c2890() {
  return reinterpret_cast<U64>(GameData_1a8d5f6);
}

[[gnu::visibility("hidden")]] U64 GameStub_19e1630() {
  return reinterpret_cast<U64>(GameData_1a87b23);
}

[[gnu::visibility("hidden")]] U32 GameStub_19e1b40() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_19e1b50() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_19e1b60() {
  return 1;
}

[[gnu::visibility("hidden")]] U64 GameStub_19e1c10(U64 object) {
  return At<U64>(At<U64>(object, 0x58), 0x20);
}

[[gnu::visibility("hidden")]] U64 GameStub_19e1fb0(U64 object) {
  return At<U64>(At<U64>(object, 0x58), 0x30);
}

[[gnu::visibility("hidden")]] U32 GameStub_19e3a30() {
  return 4;
}

[[gnu::visibility("hidden")]] U64 GameStub_19e3a40() {
  return reinterpret_cast<U64>(GameData_1abfa21);
}

[[gnu::visibility("hidden")]] U64 GameStub_19e3a50() {
  return reinterpret_cast<U64>(GameData_1af76c9);
}

[[gnu::visibility("hidden")]] U32 GameStub_19e3a80() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_19e5440() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_19e5bb0() {
  return 15;
}

[[gnu::visibility("hidden")]] U32 GameStub_19e5c00() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 GameStub_19e5cf0() {
  return 15;
}

[[gnu::visibility("hidden")]] U32 GameStub_19e5e20() {
  return 1;
}

[[gnu::visibility("hidden")]] void GameStub_19e6880() {
}

[[gnu::visibility("hidden")]] void GameStub_19e74c0() {
}

[[gnu::visibility("hidden")]] void GameStub_19e9740() {
  GameRoutine_178ab20();
}

[[gnu::visibility("hidden")]] void GameStub_19eaf00(U64 object) {
  GameRoutine_19eac80(object - 0xb0);
}

[[gnu::visibility("hidden")]] void GameStub_19eaf10(U64 object) {
  GameRoutine_19eadc0(object - 0xb0);
}

[[gnu::visibility("hidden")]] U32 GameStub_19ece10() {
  return 0;
}

[[gnu::visibility("hidden")]] U64 GameStub_19f1160() {
  return reinterpret_cast<U64>(GameData_1ae0007);
}

[[gnu::visibility("hidden")]] U32 GameStub_19f1770() {
  return 3;
}

[[gnu::visibility("hidden")]] U64 GameStub_19f19c0(U64 object) {
  return At<U64>(object, 0x70);
}

[[gnu::visibility("hidden")]] U32 GameStub_19f1c10() {
  return 3;
}

[[gnu::visibility("hidden")]] void GameStub_19f6650() {
  GameRoutine_16e1a00();
}

[[gnu::visibility("hidden")]] U32 GameStub_19f66d0() {
  return 24;
}

[[gnu::visibility("hidden")]] void GameStub_19fbb70() {
}

[[gnu::visibility("hidden")]] void GameStub_19fbcc0() {
  GameRoutine_15c1520();
}

[[gnu::visibility("hidden")]] void GameStub_1a041d0() {
}

[[gnu::visibility("hidden")]] U64 GameStub_1a084c0() {
  return reinterpret_cast<U64>(GameData_212bb18);
}

[[gnu::visibility("hidden")]] U64 GameStub_1a08dc0() {
  return reinterpret_cast<U64>(GameData_212bb98);
}

[[gnu::visibility("hidden")]] void GameStub_1a096a0() {
}

[[gnu::visibility("hidden")]] void GameStub_1a098c0() {
}

[[gnu::visibility("hidden")]] void GameStub_1a09a50() {
}
