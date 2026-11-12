#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 (*GameData_204cb50[])();

extern __int64 (*GameData_2088cf0[])();

extern _UNKNOWN* GameData_212c958;

extern _UNKNOWN* GameData_212c960;

extern int GameData_2167768;

extern __int64 GameData_21f3cb0;

extern __int64 GameData_22190a8;

extern int GameData_221beb0;

extern char GameData_2222318;

extern __int64 GameData_222a058;

extern int GameData_222e468;

extern __int64 GameData_22400f8;

__int64 GameRoutine_1155100(long double);

__int64 GameRoutine_12276a0(void);

__int64 GameRoutine_1340560(_QWORD, _QWORD);

__int64 GameRoutine_14877f0(_QWORD, _QWORD);

__int64 GameRoutine_15f2e30(_QWORD, _QWORD);

__int64 GameRoutine_177ba70(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_1a09c50(void);

__int64 GameRoutine_1a0a310(void);

__int64 GameRoutine_1a0acd0(float);

__int64 GameRoutine_7c6120(void);

__int64 GameRoutine_947910(void);

__int64 GameRoutine_948fc0(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_a867a0(_QWORD);

__int64 GameRoutine_f2e5a0(_QWORD, _QWORD, _QWORD);

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

void GameHr_e6d300() { *(_BYTE*)(GameData_22190a8 + 10) = 0; }

void GameHr_eab1d0() { GameData_221beb0 = 0; }

float GameHr_ed53f0(_DWORD** a1, float* a2)
{
  float result;

  result = *a2;
  **a1 = *(_DWORD*)a2;
  return result;
}

__int64 GameHr_efda70(__int64 a1)
{
  __int64 result;

  result = *(_QWORD*)(a1 + 32);
  if (result != 0) {
    return GameRoutine_1a09c50();
  }
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

__int64 GameHr_f6c730(__int64 a1)
{
  return GameRoutine_177ba70(a1, *(_QWORD*)(a1 + 152),
                             *(_DWORD*)(a1 + 168) != 0);
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

__int64 GameHr_fbdc00() { return *(unsigned __int8*)(GameData_21f3cb0 + 816); }

void GameHr_fe1260() { GameData_222e468 = 1; }

void GameHr_fe1d50() { GameData_222e468 = 1; }

void GameHr_fe3d50() { GameData_222e468 = 1; }

void GameHr_fe4290() { GameData_222e468 = 1; }

void GameHr_fe51b0() { GameData_222e468 = 1; }

__int64 GameHr_ffeec0(__int64 a1)
{
  __int64 result;

  result = *(_QWORD*)(a1 + 72);
  if (result != 0) {
    return GameRoutine_1a09c50();
  }
  return result;
}

double GameHr_10aad10() { return 0.0; }

__int64 GameHr_11489e0(__int64 a1, __int64 a2)
{
  return (*(__int64 (**)(__int64))(a1 + 8))(a2);
}

__int64 GameHr_1155280()
{
  return GameRoutine_1155100(*(long double*)GameData_212c960);
}

__int64 GameHr_11553d0()
{
  return GameRoutine_1155100(*(long double*)GameData_212c958);
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

void __attribute__((noreturn)) GameHr_140bb30() { __udf(0x8002u); }

void __attribute__((noreturn)) GameHr_140c230() { __udf(0x8002u); }

__int64 GameHr_141fb20(__int64 result)
{
  if (*(_QWORD*)(result + 216) != 0) {
    return GameRoutine_15f2e30(result, *(unsigned int*)(result + 224));
  }
  return result;
}

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

__int64 GameHr_1467630(__int64 a1)
{
  return GameRoutine_948fc0(*(_QWORD*)(a1 + 192), *(unsigned int*)(a1 + 204),
                            *(unsigned int*)(a1 + 208));
}

__int64 GameHr_1470b90() { return GameRoutine_14877f0(0, 0x13F000000LL); }

__int64 GameHr_1470e10() { return GameRoutine_14877f0(0, 0x13F000000LL); }

__int64 GameHr_14ae940(__int64 result)
{
  *(_DWORD*)(result + 152) = *(_DWORD*)(result + 212);
  return result;
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

__int64 GameHr_15f16e0() { return GameRoutine_14877f0(0, 0x13F000000LL); }

__int64 GameHr_15f1960() { return GameRoutine_14877f0(0, 0x13F000000LL); }

__int64 GameHr_16112f0(__int64 a1, _QWORD* a2)
{
  return (*(__int64 (**)(_QWORD))(a1 + 8))(*a2);
}

__int64 GameHr_169e4e0(__int64 a1, _QWORD* a2)
{
  return (*(__int64 (**)(_QWORD))(a1 + 8))(*a2);
}

__int64 GameHr_169e5f0(__int64 a1, _QWORD* a2)
{
  return (*(__int64 (**)(_QWORD))(a1 + 8))(*a2);
}

void GameHr_16a9040(__int64 a1, _QWORD* a2) { *a2 = GameData_2088cf0; }

__int64 GameHr_170ab80(__int64 a1)
{
  __int64 result;

  result = *(_QWORD*)(a1 + 88);
  if (result != 0) {
    return GameRoutine_947910();
  }
  return result;
}

#pragma GCC visibility pop
