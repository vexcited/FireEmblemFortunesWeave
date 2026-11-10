#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 BattleInfo_7a3000(_QWORD*, __int64);
__int64 BattleInfo_7a3110(_QWORD*, __int64);
extern _UNKNOWN GameData_21d41b8;
extern __int64 (*GameData_1f98c80[])();
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD, _QWORD,
                                                  _QWORD);
void* BattleScenes_7a7840(__int64 a1, __int64 a2, _BYTE* a3, _BYTE* a4);
__int64 BattleScenes_7a7a20(__int64 a1, unsigned __int8* a2, __int64 a3,
                            __int64 a4);
__int64 game_map_BattleScenes_GetCurrentCount_lambda0_Invoke(__int64 result,
                                                             __int64 a2);
__int64 game_map_BattleScenes_GetReverseCount_lambda0_Invoke(__int64 result,
                                                             __int64 a2);

void* BattleScenes_7a7840(__int64 a1, __int64 a2, _BYTE* a3, _BYTE* a4)
{
  __int64 v4;
  __int64 v5;
  __int64 v7;
  __int16 v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  __int16* v13;
  int v14;
  __int64 v15;
  __int64 v16;
  __int16* v17;
  int v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int16* v22;
  int v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int16* v27;
  int v28;
  __int64 v29;
  __int64 v30;

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
  v11 = (_QWORD*)(v10 + 16);
  if (*a3 == 4) {
    v12 = v10 + 16;
  }
  else {
    v12 = v10 + 16 + 760LL * (unsigned __int8)*a3;
  }
  *(_BYTE*)(v7 + 6) = *(_QWORD*)(v12 + 168);
  v13 = (__int16*)(v9 + 12LL * *(unsigned __int8*)(v10 + 32));
  v14 = *v13;
  v13[1] = 0;
  v13[2] = v14 & (v14 >> 31);
  *v13 = *(_DWORD*)(v10 + 112);
  v13[3] = *(_DWORD*)(v10 + 120);
  v13[4] = BattleInfo_7a3000((_QWORD*)(v10 + 16), a2);
  v13[5] = BattleInfo_7a3110(v11, v15);
  v16 = *(_QWORD*)(a1 + 8208);
  v17 = (__int16*)(v9 + 12LL * *(unsigned __int8*)(v16 + 792));
  v18 = *v17;
  v17[1] = 0;
  v17[2] = v18 & (v18 >> 31);
  *v17 = *(_DWORD*)(v16 + 872);
  v17[3] = *(_DWORD*)(v16 + 880);
  v17[4] = BattleInfo_7a3000((_QWORD*)(v16 + 776), v19);
  v17[5] = BattleInfo_7a3110((_QWORD*)(v16 + 776), v20);
  v21 = *(_QWORD*)(a1 + 8208);
  v22 = (__int16*)(v9 + 12LL * *(unsigned __int8*)(v21 + 1552));
  v23 = *v22;
  v22[1] = 0;
  v22[2] = v23 & (v23 >> 31);
  *v22 = *(_DWORD*)(v21 + 1632);
  v22[3] = *(_DWORD*)(v21 + 1640);
  v22[4] = BattleInfo_7a3000((_QWORD*)(v21 + 1536), v24);
  v22[5] = BattleInfo_7a3110((_QWORD*)(v21 + 1536), v25);
  v26 = *(_QWORD*)(a1 + 8208);
  v27 = (__int16*)(v9 + 12LL * *(unsigned __int8*)(v26 + 2312));
  v28 = *v27;
  v27[1] = 0;
  v27[2] = v28 & (v28 >> 31);
  *v27 = *(_DWORD*)(v26 + 2392);
  v27[3] = *(_DWORD*)(v26 + 2400);
  v27[4] = BattleInfo_7a3000((_QWORD*)(v26 + 2296), v29);
  v27[5] = BattleInfo_7a3110((_QWORD*)(v26 + 2296), v30);
  return (void*)v7;
}

__int64 BattleScenes_7a7a20(__int64 a1, unsigned __int8* a2, __int64 a3,
                            __int64 a4)
{
  __int64 v4;
  __int64 v6;
  _QWORD* v7;
  int v8;
  _DWORD* v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  _QWORD v14[4];
  _QWORD* v15;
  unsigned int v16;

  v4 = *a2;
  v6 = *(unsigned int*)(a1 + 8200);
  v7 = v14;
  v16 = 0;
  v15 = v14;
  v14[0] = GameData_1f98c80;
  v14[1] = v4;
  v14[2] = &v16;
  if ((_DWORD)v6 != 0) {
    v8 = a3;
    if ((_DWORD)a3 != 0) {
      v9 = (_DWORD*)(a1 + 20);
      while (1) {
        if ((unsigned int)*((unsigned __int8*)v9 - 8) - 3 <= 1 &&
            (v8 & ~*v9) == 0) {
          v10 = v15;
          if (v15 == nullptr) {
            goto LABEL_20;
          }
          (*(void (**)(_QWORD*, _DWORD*))(*v15 + 48LL))(v15, v9 - 3);
        }
        --v6;
        v9 += 16;
        if (v6 == 0) {
          goto LABEL_14;
        }
      }
    }
    v11 = a1 + 8;
    do {
      if ((unsigned int)*(unsigned __int8*)(v11 + 4) - 3 <= 1) {
        v10 = v15;
        if (v15 == nullptr) {
        LABEL_20:
          GameRoutine_60a310(v10, a2, a3, a4);
        }
        (*(void (**)(_QWORD*, __int64))(*v15 + 48LL))(v15, v11);
      }
      --v6;
      v11 += 64;
    } while (v6 != 0);
  LABEL_14:
    v7 = v15;
    if (v15 != v14) {
      if (v15 != nullptr) {
        v12 = 40;
      LABEL_18:
        (*(void (**)(_QWORD*, unsigned __int8*, __int64))(*v7 + v12))(v7, a2,
                                                                      a3);
      }
      return v16;
    }
  }
  v12 = 32;
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
