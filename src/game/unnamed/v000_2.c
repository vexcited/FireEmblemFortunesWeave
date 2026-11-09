#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 (*GameData_1fe2b80[])();

extern __int64 (*GameData_1ff5530[])();

extern __int64 (*GameData_2007208[])();

extern __int64 (*GameData_20378d0[])();

extern __int64 (*GameData_20387d8[])();

extern __int64 (*GameData_2038848[])();

extern __int64 (*GameData_204cb50[])();

extern __int64 (*GameData_2088cf0[])();

extern _UNKNOWN* GameData_212c958;

extern int GameData_2167768;

extern __int64 GameData_21f3cb0;

extern int GameData_221beb0;

extern char GameData_2222318;

extern __int64 GameData_222a058;

extern __int64 GameData_22400f8;

extern int GameData_2260ebc;

__int64 GameRoutine_108f600(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_1155100(long double);

__int64 GameRoutine_12276a0(void);

__int64 GameRoutine_1340560(_QWORD, _QWORD);

__int64 GameRoutine_135c560(void);

__int64 GameRoutine_14877f0(_QWORD, _QWORD);

__int64 GameRoutine_15f2e30(_QWORD, _QWORD);

__int64 GameRoutine_16ac260(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_16f0000(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_177ba70(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_1a09c50(void);

__int64 GameRoutine_1a0a310(void);

__int64 GameRoutine_1a0acd0(float);

__int64 GameRoutine_7c6120(void);

__int64 GameRoutine_947910(void);

__int64 GameRoutine_948fc0(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_a0d9a0(_QWORD);

__int64 GameRoutine_a867a0(_QWORD);

__int64 GameRoutine_f2e5a0(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_f4c840(_QWORD);

double GameHr_d23970() { return 0.0; }

_BYTE** GameHr_d4ae50(_BYTE** result, _BYTE* a2)
{
  **result = *a2;
  return result;
}

float GameHr_d4ae70(_DWORD** a1, float* a2)
{
  float result;

  result = *a2;
  **a1 = *(_DWORD*)a2;
  return result;
}

_QWORD** GameHr_d4aed0(_QWORD** result, _QWORD* a2)
{
  _QWORD* v2;
  __int64 v3;

  v2 = *result;
  v3 = a2[1];
  *v2 = *a2;
  v2[1] = v3;
  return result;
}

_QWORD** GameHr_d4aee0(_QWORD** result, _QWORD* a2)
{
  **result = *a2;
  return result;
}

_BYTE** GameHr_d4afe0(_BYTE** result, _BYTE* a2)
{
  **result = *a2;
  return result;
}

float GameHr_d4b000(_DWORD** a1, float* a2)
{
  float result;

  result = *a2;
  **a1 = *(_DWORD*)a2;
  return result;
}

_QWORD** GameHr_d4b040(_QWORD** result, _QWORD* a2)
{
  _QWORD* v2;
  __int64 v3;

  v2 = *result;
  v3 = a2[1];
  *v2 = *a2;
  v2[1] = v3;
  return result;
}

_QWORD** GameHr_d4b050(_QWORD** result, _QWORD* a2)
{
  **result = *a2;
  return result;
}

void __attribute__((noreturn)) GameHr_d95710() { __udf(0x8002u); }

__int64 GameHr_d964b0(__int64 a1)
{
  return (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 32LL))(
      *(_QWORD*)(a1 + 8));
}

__int64 GameHr_da3810(__int64 result)
{
  *(_WORD*)(result + 224) = 257;
  return result;
}

__int64 GameHr_da3bc0(__int64 result)
{
  *(_WORD*)(result + 224) = 256;
  return result;
}

__int64 GameHr_db6fa0(__int64 a1, __int64 a2)
{
  return *(_WORD*)(*(_QWORD*)a2 + 72LL) & 1;
}

void GameHr_e14400(__int64 a1, _QWORD* a2) { *a2 = GameData_1fe2b80; }

__int64 GameHr_e16b40(__int64 result)
{
  *(_QWORD*)(result + 16) = 0;
  *(_DWORD*)(result + 24) = 0;
  return result;
}

float GameHr_e51150(__int64 a1, int* a2)
{
  return *(float*)(a1 + 4LL * *a2 + 8);
}

float GameHr_e51260(__int64 a1, int* a2)
{
  return *(float*)(a1 + 4LL * *a2 + 8);
}

void GameHr_eab1d0() { GameData_221beb0 = 0; }

float GameHr_ed53f0(_DWORD** a1, float* a2)
{
  float result;

  result = *a2;
  **a1 = *(_DWORD*)a2;
  return result;
}

__int64 GameHr_f2ed20(__int64 result)
{
  __int64 v1;

  v1 = *(_QWORD*)(result + 160);
  if (v1 != 0) {
    return GameRoutine_f2e5a0(result, v1, *(_QWORD*)(result + 152));
  }
  return result;
}

void GameHr_f49800() { GameData_2222318 = 0; }

__int64 GameHr_f4c7b0(_QWORD* a1)
{
  *a1 = GameData_1ff5530;
  return GameRoutine_f4c840(a1[3]);
}

bool GameHr_f63ab0(__int64 a1) { return *(float*)(a1 + 152) < 1.0; }

__int64 GameHr_f6c730(__int64 a1)
{
  return GameRoutine_177ba70(a1, *(_QWORD*)(a1 + 152),
                             *(_DWORD*)(a1 + 168) != 0);
}

__int64 GameHr_f6d240(__int64 a1)
{
  __int64 v1;

  v1 = *(_QWORD*)(a1 + 8);
  *(_BYTE*)(v1 + 8) = 1;
  return 2;
}

__int64 GameHr_f6d350(__int64 a1)
{
  __int64 v1;

  v1 = *(_QWORD*)(a1 + 8);
  *(_BYTE*)(v1 + 8) = 0;
  return 3;
}

void GameHr_f6fee0() { GameData_2167768 = 2; }

void GameHr_f6fef0() { GameData_2167768 = 0; }

__int64 GameHr_f81760(__int64 a1)
{
  __int64 result;
  __int64 v2;

  v2 = *(_QWORD*)(a1 + 40);
  result = a1 + 40;
  if (v2 != 0) {
    return GameRoutine_a867a0(result);
  }
  return result;
}

__int64 GameHr_fa9300()
{
  return GameRoutine_1a0acd0(*(float*)(GameData_21f3cb0 + 100));
}

__int64 GameHr_fa9520()
{
  return GameRoutine_1a0acd0(*(float*)(GameData_21f3cb0 + 104));
}

bool GameHr_fac240() { return GameData_222a058 != 0; }

bool GameHr_faf260(__int64 a1) { return *(_BYTE*)(a1 + 208) == 0; }

void GameHr_fb0f80(__int64 a1, __int64 a2)
{
  *(_BYTE*)(*(_QWORD*)(*(_QWORD*)a2 + 8LL) + 289LL) = 0;
}

__int64 GameHr_fc9a70(__int64 result)
{
  *(_BYTE*)(*(_QWORD*)(result + 8) + 160LL) = 1;
  return result;
}

__int64 GameHr_fe82b0(__int64 a1, unsigned int a2) { return a2; }

__int64 GameHr_ffeec0(__int64 a1)
{
  __int64 result;

  result = *(_QWORD*)(a1 + 72);
  if (result != 0) {
    return GameRoutine_1a09c50();
  }
  return result;
}

__int64 GameHr_104dad0(__int64 a1)
{
  __int64 v1;

  v1 = *(_QWORD*)(a1 + 8);
  *(_BYTE*)(v1 + 212) = 0;
  return 4;
}

__int64 GameHr_104de70(__int64 a1)
{
  __int64 v1;

  v1 = *(_QWORD*)(a1 + 8);
  *(_BYTE*)(v1 + 212) = 0;
  return 4;
}

void GameHr_1089340(__int64 a1, _QWORD* a2) { *a2 = GameData_2007208; }

void GameHr_1089370(__int64 a1, _DWORD* a2)
{
  if ((*a2 & 0x8000) == 0) {
    *a2 |= 4u;
  }
}

__int64 GameHr_1089680(__int64 a1, _QWORD* a2)
{
  return (*(__int64 (**)(_QWORD))(a1 + 8))(*a2);
}

__int64 GameHr_108f5b0(__int64 a1, _QWORD* a2)
{
  return GameRoutine_108f600(*a2, *(unsigned int*)(*(_QWORD*)(a1 + 8) + 84LL),
                             *(unsigned int*)(*(_QWORD*)(a1 + 8) + 88LL));
}

__int64 GameHr_108f970(__int64 a1, _QWORD* a2)
{
  return GameRoutine_108f600(*a2, *(unsigned int*)(*(_QWORD*)(a1 + 8) + 84LL),
                             *(unsigned int*)(*(_QWORD*)(a1 + 8) + 88LL));
}

double GameHr_10aad10() { return 0.0; }

float GameHr_10ab100(__int64 a1)
{
  return *(float*)(a1 + 196) - *(float*)(a1 + 192);
}

__int64 GameHr_1114e60(__int64 a1, __int64 a2)
{
  *(_BYTE*)(*(_QWORD*)a2 + 83LL) = 0;
  return 0;
}

__int64 GameHr_1115c50(__int64 result, _DWORD* a2)
{
  __int64 v2;

  v2 = *(_QWORD*)(result + 8);
  *(_DWORD*)(v2 + 840) = *a2;
  *(_DWORD*)(v2 + 848) = 0;
  return result;
}

__int64 GameHr_11489e0(__int64 a1, __int64 a2)
{
  return (*(__int64 (**)(__int64))(a1 + 8))(a2);
}

__int64 GameHr_11553d0()
{
  return GameRoutine_1155100(*(long double*)GameData_212c958);
}

__int64 GameHr_11ca980(__int64 result)
{
  *(_BYTE*)(*(_QWORD*)(result + 8) + 88LL) = 0;
  return result;
}

__int64 GameHr_122f620()
{
  __int64 result;

  result = GameData_22400f8;
  if (GameData_22400f8 != 0) {
    return GameRoutine_12276a0();
  }
  return result;
}

bool GameHr_122feb0(__int64 a1, __int64 a2) { return *(_BYTE*)(a2 + 8) == 3; }

bool GameHr_122ffa0(__int64 a1, __int64 a2) { return *(_BYTE*)(a2 + 8) != 3; }

bool GameHr_1264320(__int64 a1)
{
  return *(_DWORD*)(a1 + 52) >= *(_DWORD*)(a1 + 48);
}

__int64 GameHr_1269700(__int64 a1, unsigned __int8* a2, unsigned __int8* a3)
{
  return *a3 | (unsigned int)*a2;
}

__int64 GameHr_1269930(__int64 a1, _BYTE* a2, _BYTE* a3)
{
  return (unsigned __int8)(*a3 & *a2);
}

__int64 GameHr_126ca40(__int64 result)
{
  if (*(_DWORD*)(result + 160) == 2) {
    return GameRoutine_7c6120();
  }
  return result;
}

bool GameHr_12c6110(__int64 a1, __int64 a2)
{
  return *(float*)(a1 + 8) < *(float*)(a2 + 8);
}

__int64 GameHr_12e03f0(__int64 a1, __int64 a2)
{
  return *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a2 + 24LL) + 8LL);
}

__int64 GameHr_12e0620(__int64 a1, __int64 a2)
{
  return *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a2 + 24LL) + 16LL);
}

void GameHr_130c3f0(__int64 a1, _QWORD* a2) { *a2 = 0; }

void GameHr_130c400(__int64 a1, _DWORD* a2) { *a2 = 0; }

__int64 GameHr_130ceb0(__int64 result)
{
  *(_QWORD*)(result + 24) = *(_QWORD*)(result + 16);
  return result;
}

bool GameHr_1359870(__int64 a1, __int64 a2)
{
  return (*(_WORD*)(*(_QWORD*)a2 + 544LL) & 0x10) != 0;
}

bool GameHr_1359950(__int64 a1, __int64 a2)
{
  return (*(_WORD*)(*(_QWORD*)a2 + 544LL) & 0x10) == 0;
}

__int64 GameHr_135ece0(__int64 a1)
{
  *(_QWORD*)(*(_QWORD*)(a1 + 152) + 40LL) =
      *(_QWORD*)(*(_QWORD*)(a1 + 152) + 32LL);
  return GameRoutine_135c560();
}

void GameHr_13905a0(__int64 a1, __int64 a2)
{
  __int64 v2;

  v2 = *(_QWORD*)(*(_QWORD*)a2 + 8LL);
  if (v2 != 0) {
    *(_BYTE*)(v2 + 289) = 0;
  }
}

__int64 GameHr_13e12f0(__int64 result)
{
  *(_BYTE*)(*(_QWORD*)(result + 8) + 329LL) = 1;
  return result;
}

__int64 GameHr_13e2000(__int64 result)
{
  *(_BYTE*)(*(_QWORD*)(result + 8) + 329LL) = 1;
  return result;
}

void GameHr_13faa30(__int64 a1, _QWORD* a2) { *a2 = GameData_20378d0; }

__int64 GameHr_1402980(_QWORD* a1)
{
  *a1 = GameData_20387d8;
  return GameRoutine_a0d9a0(a1 + 4);
}

__int64 GameHr_1403400(_QWORD* a1)
{
  *a1 = GameData_2038848;
  return GameRoutine_a0d9a0(a1 + 4);
}

void __attribute__((noreturn)) GameHr_140bb30() { __udf(0x8002u); }

void __attribute__((noreturn)) GameHr_140c230() { __udf(0x8002u); }

void __attribute__((noreturn)) GameHr_1413c50() { __udf(0x8002u); }

void __attribute__((noreturn)) GameHr_141d730() { __udf(0x8002u); }

__int64 GameHr_141fb20(__int64 result)
{
  if (*(_QWORD*)(result + 216) != 0) {
    return GameRoutine_15f2e30(result, *(unsigned int*)(result + 224));
  }
  return result;
}

void __attribute__((noreturn)) GameHr_1422930() { __udf(0x8002u); }

void __attribute__((noreturn)) GameHr_1424910() { __udf(0x8002u); }

__int64 GameHr_14324c0() { return GameRoutine_14877f0(0, 0x13F000000LL); }

__int64 GameHr_1432780() { return GameRoutine_14877f0(0, 0x13F000000LL); }

__int64 GameHr_1437be0(__int64 a1)
{
  return (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 152) + 64LL))(
      *(_QWORD*)(a1 + 152));
}

__int64 GameHr_1437c20(__int64 a1)
{
  return (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 152) + 72LL))(
      *(_QWORD*)(a1 + 152));
}

__int64 GameHr_1438340() { return GameRoutine_14877f0(0, 0x13F000000LL); }

__int64 GameHr_1438420() { return GameRoutine_14877f0(0, 0x13F000000LL); }

void __attribute__((noreturn)) GameHr_1461fd0() { __udf(0x8002u); }

__int64 GameHr_1467630(__int64 a1)
{
  return GameRoutine_948fc0(*(_QWORD*)(a1 + 192), *(unsigned int*)(a1 + 204),
                            *(unsigned int*)(a1 + 208));
}

__int64 GameHr_14cba20(__int64 a1)
{
  __int64 v1;

  v1 = *(_QWORD*)(a1 + 8);
  *(_DWORD*)(v1 + 152) = 2;
  return 3;
}

__int64 GameHr_1528be0(__int64 result)
{
  *(_DWORD*)(result + 152) = 1;
  return result;
}

__int64 GameHr_1529420(__int64 result)
{
  *(_DWORD*)(result + 276) = 0;
  return result;
}

__int64 GameHr_1529660(__int64 result)
{
  *(_DWORD*)(result + 152) = 1;
  return result;
}

__int64 GameHr_15296c0(__int64 result)
{
  *(_DWORD*)(result + 152) = 1;
  return result;
}

__int64 GameHr_1529720(__int64 result)
{
  *(_DWORD*)(result + 152) = 1;
  return result;
}

__int64 GameHr_1529750(__int64 result)
{
  *(_DWORD*)(result + 152) = 1;
  return result;
}

__int64 GameHr_1529b00(__int64 result)
{
  *(_DWORD*)(result + 276) = 0;
  *(_DWORD*)(result + 152) = 1;
  return result;
}

__int64 GameHr_1529b10(__int64 a1)
{
  __int64 result;

  result = *(_QWORD*)(a1 + 264);
  if (result != 0) {
    return GameRoutine_1340560(result, 0);
  }
  return result;
}

__int64 GameHr_1529bf0(__int64 result)
{
  *(_DWORD*)(result + 152) = 1;
  return result;
}

__int64 GameHr_1564c20(_QWORD* a1)
{
  *a1 = GameData_204cb50;
  return GameRoutine_1a0a310();
}

__int64 GameHr_1568220(__int64 a1) { return (*(__int64 (**)(void))(a1 + 8))(); }

void __attribute__((noreturn)) GameHr_1569590() { __udf(0x8002u); }

void __attribute__((noreturn)) GameHr_1569cb0() { __udf(0x8002u); }

bool GameHr_15bb590(__int64 a1) { return (*(_WORD*)(a1 + 108) & 0xFFF) == 0; }

bool GameHr_15bbd10(__int64 a1)
{
  return (*(_BYTE*)(*(_QWORD*)(a1 + 96) + 356LL) & 1) == 0;
}

__int64 GameHr_15bcec0(__int64 a1, _QWORD* a2)
{
  return (*(__int64 (**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 8) + 376LL))(
      *(_QWORD*)(a1 + 8), *a2);
}

__int64 GameHr_15bd800(__int64 a1, _QWORD* a2)
{
  return (*(__int64 (**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 8) + 376LL))(
      *(_QWORD*)(a1 + 8), *a2);
}

__int64 GameHr_15bd910(__int64 a1, _QWORD* a2)
{
  return (*(__int64 (**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 8) + 376LL))(
      *(_QWORD*)(a1 + 8), *a2);
}

__int64 GameHr_15c98a0(__int64 a1, __int64 a2)
{
  return *(unsigned __int8*)(*(_QWORD*)a2 + 79LL);
}

__int64 GameHr_15c9bc0(__int64 a1, _QWORD* a2)
{
  return (*(__int64 (**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 8) + 376LL))(
      *(_QWORD*)(a1 + 8), *a2);
}

__int64 GameHr_15c9cd0(__int64 a1, _QWORD* a2)
{
  return (*(__int64 (**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 8) + 376LL))(
      *(_QWORD*)(a1 + 8), *a2);
}

__int64 GameHr_15d1c20(__int64 a1, _QWORD* a2)
{
  return (*(__int64 (**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 8) + 376LL))(
      *(_QWORD*)(a1 + 8), *a2);
}

__int64 GameHr_15d1d30(__int64 a1, _QWORD* a2)
{
  return (*(__int64 (**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 8) + 376LL))(
      *(_QWORD*)(a1 + 8), *a2);
}

__int64 GameHr_15f3460(__int64 a1)
{
  return 2 * (unsigned int)*(unsigned __int8*)(a1 + 8);
}

__int64 GameHr_1601e70(__int64 result)
{
  *(_DWORD*)(result + 391864) = 4;
  return result;
}

__int64 GameHr_16112f0(__int64 a1, _QWORD* a2)
{
  return (*(__int64 (**)(_QWORD))(a1 + 8))(*a2);
}

bool GameHr_161e510(__int64 a1, __int64 a2)
{
  return *(_DWORD*)(*(_QWORD*)a2 + 40LL) == 1;
}

__int64 GameHr_161eea0(__int64 a1)
{
  if (*(_DWORD*)(a1 + 1012) != 0) {
    return 9;
  }
  else {
    return 10;
  }
}

__int64 GameHr_169e4e0(__int64 a1, _QWORD* a2)
{
  return (*(__int64 (**)(_QWORD))(a1 + 8))(*a2);
}

__int64 GameHr_169e5f0(__int64 a1, _QWORD* a2)
{
  return (*(__int64 (**)(_QWORD))(a1 + 8))(*a2);
}

__int64 GameHr_16a5460(__int64 a1)
{
  if (*(_DWORD*)(a1 + 1224) != 0) {
    return 2;
  }
  else {
    return 3;
  }
}

void GameHr_16a9040(__int64 a1, _QWORD* a2) { *a2 = GameData_2088cf0; }

__int64 GameHr_16aba30(__int64 a1, unsigned int a2)
{
  return GameRoutine_16ac260(a1 - 176, 1, a2);
}

__int64 GameHr_16aba40(__int64 a1, unsigned int a2)
{
  return GameRoutine_16ac260(a1 - 176, 0, a2);
}

__int64 GameHr_16b0c30()
{
  GameData_2260ebc = 0;
  return 3;
}

__int64 GameHr_16b0e30()
{
  GameData_2260ebc = 0;
  return 3;
}

__int64 GameHr_16b0f30(__int64 a1)
{
  __int64 v1;

  v1 = *(_QWORD*)(a1 + 8);
  *(_DWORD*)(v1 + 152) = 5;
  return 2;
}

__int64 GameHr_16b1120(__int64 a1)
{
  __int64 v1;

  v1 = *(_QWORD*)(a1 + 8);
  *(_DWORD*)(v1 + 152) = 6;
  return 2;
}

__int64 GameHr_16b17d0(__int64 a1)
{
  __int64 v1;

  v1 = *(_QWORD*)(a1 + 8);
  *(_BYTE*)(*(_QWORD*)(v1 + 8) + 1300LL) = 0;
  return 3;
}

__int64 GameHr_16b18c0()
{
  GameData_2260ebc = 0;
  return 3;
}

__int64 GameHr_16b1b80()
{
  GameData_2260ebc = 0;
  return 3;
}

__int64 GameHr_16b1d90()
{
  GameData_2260ebc = 0;
  return 3;
}

bool GameHr_16d3ef0(__int64 a1) { return (*(_WORD*)(a1 + 132) & 0xFFF) == 0; }

__int64 GameHr_16f02d0(__int64 a1, __int64 a2)
{
  return GameRoutine_16f0000(a1 - 176, a2, 0);
}

__int64 GameHr_16fbbe0(__int64 a1)
{
  return 2 * (unsigned int)*(unsigned __int8*)(a1 + 25);
}

__int64 GameHr_1700940(__int64 a1, __int64 a2)
{
  *(_BYTE*)(*(_QWORD*)a2 + 137LL) = 0;
  return 0;
}

__int64 GameHr_170ab80(__int64 a1)
{
  __int64 result;

  result = *(_QWORD*)(a1 + 88);
  if (result != 0) {
    return GameRoutine_947910();
  }
  return result;
}

__int64 GameHr_170e5a0(__int64 a1, __int64 a2)
{
  *(_BYTE*)(*(_QWORD*)a2 + 83LL) = 0;
  return 0;
}

__int64 GameHr_1715d80(__int64 a1)
{
  if (*(_BYTE*)(a1 + 908) != 0) {
    return 2;
  }
  else {
    return 3;
  }
}

#pragma GCC visibility pop
