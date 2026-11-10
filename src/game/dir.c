#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void Dir_70ea50_alt1(PSEUDO_X8, __int16* result,
                                                __int64) __asm__("Dir_70ea50");
__int16* Dir_70dd80(__int16* result, __int16*);
extern _DWORD game_script_hub_schedule_kHourCycles[24];
extern __int64 game_gmap_GmapClock_kDefaultTime;
extern int GameData_21caa04;
unsigned __int16* Dir_70d7a0(unsigned __int16* result);
__int64 Dir_70e760(__int16* a1, __int16* a2);
__attribute__((swiftcall)) void Dir_70e880(PSEUDO_X8 x8_,
                                           unsigned __int16* result, int a2);
__attribute__((swiftcall)) void Dir_70e900(PSEUDO_X8 x8_, __int16* result,
                                           __int16* a2);
__attribute__((swiftcall)) void Dir_70ea50(PSEUDO_X8 x8_, __int16* result,
                                           __int16* a2);

__int64 Dir_70e760(__int16* a1, __int16* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned int v10;
  __int64 v13;
  int v14;
  struct {
    __int64 v15;
    int v16;
  } v15_;

  v2 = *a2;
  v3 = (__int64)a2[1] << 24;
  v4 = a1[5];
  v5 = a1[3];
  v6 = a1[2];
  LOWORD(v15_.v16) = a1[4];
  v7 = a1[1];
  HIWORD(v15_.v15) = v5;
  v8 = *a1;
  WORD2(v15_.v15) = v6;
  WORD1(v15_.v15) = v7;
  LOWORD(v15_.v15) = v8;
  HIWORD(v15_.v16) = v4;
  v9 = v3 + (v2 << 32) + ((__int64)a2[2] << 18) + ((__int64)a2[3] << 12) +
       ((__int64)a2[4] << 6) + a2[5];
  if (v4 + ((__int64)(__int16)v15_.v16 << 6) + (v5 << 12) + (v6 << 18) +
          (v7 << 24) + (v8 << 32) ==
      v9) {
    return 0;
  }
  else {
    v10 = 0;
    do {
      Dir_70ea50_alt1((void*)((__int64)&v13), (__int16*)&v15_.v15, (__int64)a2);
      ++v10;
      v15_.v16 = v14;
      v15_.v15 = v13;
    } while (SHIWORD(v14) + ((__int64)(__int16)v14 << 6) +
                 ((__int64)SHIWORD(v13) << 12) + ((__int64)SWORD2(v13) << 18) +
                 ((__int64)SWORD1(v13) << 24) + ((__int64)(__int16)v13 << 32) !=
             v9);
  }
  return v10;
}

__attribute__((swiftcall)) void Dir_70e880(PSEUDO_X8 x8_,
                                           unsigned __int16* result, int a2)
{
  __int64 a3 = (__int64)PSEUDO_X8_VALUE(x8_);
  unsigned __int16 v3;
  int v4;
  int v5;
  unsigned int v6;
  __int16 v7;
  __int16 v8;
  int v9;
  __int16 v10;
  __int16 v11;

  v3 = result[3];
  v4 = *((_DWORD*)result + 2);
  *(_DWORD*)a3 = *(_DWORD*)result;
  v5 = result[2];
  *(_WORD*)(a3 + 6) = v3;
  *(_DWORD*)(a3 + 8) = v4;
  *(_WORD*)(a3 + 4) = v5;
  if (a2 != 0) {
    *(_DWORD*)(a3 + 8) = 0;
    v6 = -a2 / 0x18u;
    v7 = v5 - v6;
    v8 = a2 + 24 * v6;
    v9 = v5 + a2 / 0x18u;
    if (a2 < 1) {
      LOWORD(v9) = v7;
    }
    v10 = v3 + v8;
    v11 = v3 + a2 % 0x18u;
    *(_WORD*)(a3 + 4) = v9;
    if (a2 < 1) {
      v11 = v10;
    }
    *(_WORD*)(a3 + 6) = v11;
    {
      Dir_70d7a0((unsigned __int16*)a3);
      return;
    }
  }
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void Dir_70e900(PSEUDO_X8 x8_, __int16* result,
                                           __int16* a2)
{
  __int64 a3 = (__int64)PSEUDO_X8_VALUE(x8_);
  int v4;
  int v5;
  int v6;
  __int16 v8;
  __int16 v9;
  __int16 v10;
  __int16 v11;
  __int16 v12;
  __int16* v13;
  int v14;
  struct {
    __int16 v15;
    __int16 v16;
    __int16 v17;
    _BYTE v18[6];
  } v15_;

  v4 = *result;
  v5 = result[1];
  v6 = result[2];
  if (v5 * v4 * v6 != 0) {
    v8 = result[3];
    *(_DWORD*)&v15_.v18[2] = 0;
    v15_.v16 = v5;
    v15_.v17 = v6;
    v15_.v15 = v4;
    *(_DWORD*)v15_.v18 =
        6 * game_script_hub_schedule_kHourCycles[v8 % 24] % 0x18u;
    result = Dir_70dd80(&v15_.v15, a2);
    v9 = v15_.v15;
    v10 = v15_.v16;
    v11 = v15_.v17;
    v12 = *(_WORD*)v15_.v18;
  }
  else {
    v9 = game_gmap_GmapClock_kDefaultTime;
    v10 = WORD1(game_gmap_GmapClock_kDefaultTime);
    v11 = WORD2(game_gmap_GmapClock_kDefaultTime);
    v12 = HIWORD(game_gmap_GmapClock_kDefaultTime);
  }
  *(_WORD*)a3 = v9;
  *(_WORD*)(a3 + 2) = v10;
  if (v10 * v9 * v11 != 0) {
    *(_WORD*)(a3 + 4) = v11;
    *(_DWORD*)(a3 + 8) = 0;
    *(_WORD*)(a3 + 6) = v12 + 5;
    v13 = (__int16*)Dir_70d7a0((unsigned __int16*)a3);
    *(_DWORD*)(a3 + 8) = 3866683;
    {
      Dir_70dd80(v13, a2);
      return;
    }
  }
  else {
    v14 = GameData_21caa04;
    *(_QWORD*)a3 = game_gmap_GmapClock_kDefaultTime;
    *(_DWORD*)(a3 + 8) = v14;
  }
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void Dir_70ea50(PSEUDO_X8 x8_, __int16* result,
                                           __int16* a2)
{
  __int64 a3 = (__int64)PSEUDO_X8_VALUE(x8_);
  int v4;
  int v5;
  int v6;
  __int16 v8;
  __int16 v9;
  __int16 v10;
  __int16 v11;
  __int16 v12;
  __int16* v13;
  int v14;
  struct {
    __int16 v15;
    __int16 v16;
    __int16 v17;
    _BYTE v18[6];
  } v15_;

  v4 = *result;
  v5 = result[1];
  v6 = result[2];
  if (v5 * v4 * v6 != 0) {
    v8 = result[3];
    *(_DWORD*)&v15_.v18[2] = 0;
    v15_.v16 = v5;
    v15_.v17 = v6;
    v15_.v15 = v4;
    *(_DWORD*)v15_.v18 =
        6 * game_script_hub_schedule_kHourCycles[v8 % 24] % 0x18u;
    result = Dir_70dd80(&v15_.v15, a2);
    v9 = v15_.v15;
    v10 = v15_.v16;
    v11 = v15_.v17;
    v12 = *(_WORD*)v15_.v18;
  }
  else {
    v9 = game_gmap_GmapClock_kDefaultTime;
    v10 = WORD1(game_gmap_GmapClock_kDefaultTime);
    v11 = WORD2(game_gmap_GmapClock_kDefaultTime);
    v12 = HIWORD(game_gmap_GmapClock_kDefaultTime);
  }
  *(_WORD*)a3 = v9;
  *(_WORD*)(a3 + 2) = v10;
  if (v10 * v9 * v11 != 0) {
    *(_WORD*)(a3 + 4) = v11;
    *(_DWORD*)(a3 + 8) = 0;
    *(_WORD*)(a3 + 6) = v12 + 6;
    v13 = (__int16*)Dir_70d7a0((unsigned __int16*)a3);
    {
      Dir_70dd80(v13, a2);
      return;
    }
  }
  else {
    v14 = GameData_21caa04;
    *(_QWORD*)a3 = game_gmap_GmapClock_kDefaultTime;
    *(_DWORD*)(a3 + 8) = v14;
  }
  {
    result;
    return;
  }
}

#pragma GCC visibility pop
