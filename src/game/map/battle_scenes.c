#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 BattleInfo_7a3000(_QWORD*, __int64);
__int64 BattleInfo_7a3110(_QWORD*, __int64);
extern _UNKNOWN GameData_21d41b8;
extern __int64 (*GameData_1f98c80[])();
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD, _QWORD,
                                                  _QWORD);
void* BattleScenes_7a7840_alt1(__int64 a1, __int64 a2, _BYTE* a3,
                               _BYTE* a4) __asm__("BattleScenes_7a7840");
__int64 BattleScenes_7a7a20_alt1(__int64 a1, unsigned __int8* a2, __int64 a3,
                                 __int64 a4) __asm__("BattleScenes_7a7a20");
__int64 game_map_BattleScenes_GetCurrentCount_lambda0_Invoke(__int64 result,
                                                             __int64 a2);
__int64 game_map_BattleScenes_GetReverseCount_lambda0_Invoke(__int64 result,
                                                             __int64 a2);
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
__int64 BattleScenes_7a7a20(__int64 a1, unsigned __int8* a2, __int64 a3);
__int64 BattleInfo_7a3000_alt1() __asm__("BattleInfo_7a3000");
__int64 BattleInfo_7a3110_alt1() __asm__("BattleInfo_7a3110");
void* BattleScenes_7a7840(__int64 a1, char a2, _BYTE* a3, _BYTE* a4);

void* BattleScenes_7a7840(__int64 a1, char a2, _BYTE* a3, _BYTE* a4)
{
  __int64 v4;
  __int64 v5;
  __int64 v7;
  __int16 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int16* v12;
  int v13;
  __int64 v14;
  __int16* v15;
  int v16;
  __int64 v17;
  __int16* v18;
  int v19;
  __int64 v20;
  __int16* v21;
  int v22;

  v4 = *(int*)(a1 + 8200);
  if ((int)v4 > 127) {
    return &GameData_21d41b8;
  }
  v5 = a1 + (v4 << 6);
  *(_DWORD*)(a1 + 8200) = v4 + 1;
  *(_DWORD*)(v5 + 8) = 67436543;
  v7 = v5 + 8;
  v8 = *(_WORD*)(a1 + 8200);
  *(_WORD*)(v7 + 5) = 0;
  *(_QWORD*)(v7 + 48) = 0;
  *(_QWORD*)(v7 + 56) = 0;
  *(_QWORD*)(v7 + 32) = 0;
  *(_QWORD*)(v7 + 40) = 0;
  *(_QWORD*)(v7 + 24) = 0;
  *(_QWORD*)(v7 + 8) = 0;
  *(_QWORD*)(v7 + 16) = 0;
  v9 = v7 + 16;
  *(_BYTE*)(v7 + 4) = a2;
  *(_WORD*)v7 = v8 - 1;
  *(_BYTE*)(v7 + 2) = *a3;
  *(_BYTE*)(v7 + 3) = *a4;
  v10 = *(_QWORD*)(a1 + 8208);
  if (*a3 == 4) {
    v11 = v10 + 16;
  }
  else {
    v11 = v10 + 16 + 760LL * (unsigned __int8)*a3;
  }
  *(_BYTE*)(v7 + 6) = *(_QWORD*)(v11 + 168);
  v12 = (__int16*)(v9 + 12LL * *(unsigned __int8*)(v10 + 32));
  v13 = *v12;
  v12[1] = 0;
  v12[2] = v13 & (v13 >> 31);
  *v12 = *(_DWORD*)(v10 + 112);
  v12[3] = *(_DWORD*)(v10 + 120);
  v12[4] = BattleInfo_7a3000_alt1();
  v12[5] = BattleInfo_7a3110_alt1();
  v14 = *(_QWORD*)(a1 + 8208);
  v15 = (__int16*)(v9 + 12LL * *(unsigned __int8*)(v14 + 792));
  v16 = *v15;
  v15[1] = 0;
  v15[2] = v16 & (v16 >> 31);
  *v15 = *(_DWORD*)(v14 + 872);
  v15[3] = *(_DWORD*)(v14 + 880);
  v15[4] = BattleInfo_7a3000_alt1();
  v15[5] = BattleInfo_7a3110_alt1();
  v17 = *(_QWORD*)(a1 + 8208);
  v18 = (__int16*)(v9 + 12LL * *(unsigned __int8*)(v17 + 1552));
  v19 = *v18;
  v18[1] = 0;
  v18[2] = v19 & (v19 >> 31);
  *v18 = *(_DWORD*)(v17 + 1632);
  v18[3] = *(_DWORD*)(v17 + 1640);
  v18[4] = BattleInfo_7a3000_alt1();
  v18[5] = BattleInfo_7a3110_alt1();
  v20 = *(_QWORD*)(a1 + 8208);
  v21 = (__int16*)(v9 + 12LL * *(unsigned __int8*)(v20 + 2312));
  v22 = *v21;
  v21[1] = 0;
  v21[2] = v22 & (v22 >> 31);
  *v21 = *(_DWORD*)(v20 + 2392);
  v21[3] = *(_DWORD*)(v20 + 2400);
  v21[4] = BattleInfo_7a3000_alt1();
  v21[5] = BattleInfo_7a3110_alt1();
  return (void*)v7;
}

__int64 BattleScenes_7a7a20(__int64 a1, unsigned __int8* a2, __int64 a3)
{
  __int64 v3;
  __int64 v5;
  _QWORD* v6;
  int v7;
  _DWORD* v8;
  __int64 v9;
  __int64 v10;
  struct {
    _QWORD v12[4];
    _QWORD* v13;
  } v12_;
  unsigned int v14;

  v3 = *a2;
  v5 = *(unsigned int*)(a1 + 8200);
  v6 = v12_.v12;
  v14 = 0;
  v12_.v13 = v12_.v12;
  v12_.v12[0] = GameData_1f98c80;
  v12_.v12[1] = v3;
  v12_.v12[2] = &v14;
  if ((_DWORD)v5 != 0) {
    v7 = a3;
    if ((_DWORD)a3 != 0) {
      v8 = (_DWORD*)(a1 + 20);
      while (1) {
        if ((unsigned int)*((unsigned __int8*)v8 - 8) - 3 <= 1 &&
            (v7 & ~*v8) == 0) {
          if (v12_.v13 == nullptr) {
            goto LABEL_20;
          }
          (*(void (**)(_QWORD*, _DWORD*))(*v12_.v13 + 48LL))(v12_.v13, v8 - 3);
        }
        --v5;
        v8 += 16;
        if (v5 == 0) {
          goto LABEL_14;
        }
      }
    }
    v9 = a1 + 8;
    do {
      if ((unsigned int)*(unsigned __int8*)(v9 + 4) - 3 <= 1) {
        if (v12_.v13 == nullptr) {
        LABEL_20:
          GameRoutine_60a310_alt1();
        }
        (*(void (**)(_QWORD*, __int64))(*v12_.v13 + 48LL))(v12_.v13, v9);
      }
      --v5;
      v9 += 64;
    } while (v5 != 0);
  LABEL_14:
    v6 = v12_.v13;
    if (v12_.v13 != v12_.v12) {
      if (v12_.v13 != nullptr) {
        v10 = 40;
      LABEL_18:
        (*(void (**)(_QWORD*, unsigned __int8*, __int64))(*v6 + v10))(v6, a2,
                                                                      a3);
      }
      return v14;
    }
  }
  v10 = 32;
  goto LABEL_18;
}

__int64 game_map_BattleScenes_GetCurrentCount_lambda0_Invoke(__int64 result,
                                                             __int64 a2)
{
  if (*(unsigned __int8*)(a2 + 2) == *(unsigned __int8*)(result + 8)) {
    ++**(_DWORD**)(result + 16);
  }
  return result;
}

__int64 game_map_BattleScenes_GetReverseCount_lambda0_Invoke(__int64 result,
                                                             __int64 a2)
{
  if (*(unsigned __int8*)(a2 + 3) == *(unsigned __int8*)(result + 8)) {
    ++**(_DWORD**)(result + 16);
  }
  return result;
}

#pragma GCC visibility pop
