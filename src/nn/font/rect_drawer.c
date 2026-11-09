#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_5fca00(_QWORD);
__int64 GameRoutine_5fcb10(_QWORD, _QWORD);
__int64 GameRoutine_5fcbc0(_QWORD, _QWORD);
__int64 GameRoutine_5fcdc0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD, _QWORD);
__int64 GameRoutine_5fce60(_QWORD, _QWORD);
__int64 GameRoutine_5fd3c0(_QWORD, _QWORD);
__int64 GameRoutine_5fd420(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_5fd5f0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_5fe0a0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_5fe120(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_5fe1a0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_5fe300(_QWORD);
__int64 GameRoutine_5fe3b0(_QWORD, _QWORD);
__int64 GameRoutine_603fb0(_QWORD, _QWORD);
__int64 GameRoutine_604050(_QWORD);
__int64 GameRoutine_6040f0(_QWORD, _QWORD);
__int64 GameRoutine_604da0(_QWORD, _QWORD);
__int64 GameRoutine_605c80(_QWORD);
__int64 GameRoutine_605fe0(_QWORD, _QWORD);
__int64 nn_util_BinaryFileHeader_GetFirstBlock_1a0cef0(_QWORD);
extern __int64* GameData_2134fd0[5];
extern __int64* GameData_2135f80[2];
__int64 RectDrawer_Destructor(_QWORD* a1);
__int64 RectDrawer_Unknown3(__int64 result, __int64 a2);
__int64 RectDrawer_56a540(__int64 a1, __int64 (*a2)(__int64, __int64));
__int64 RectDrawer_56a680(__int64 result, __int64 a2, __int64 a3, char a4,
                          __int64 a5, _QWORD* a6, __int64 a7);
__int64 RectDrawer_Unknown5(__int64 a1, __int64 a2, __int64 a3);

__int64 RectDrawer_Destructor(_QWORD* a1)
{
  *a1 = GameData_2135f80[0] + 2;
  GameRoutine_604050(a1 + 114);
  GameRoutine_5fca00(a1 + 105);
  GameRoutine_5fca00(a1 + 96);
  GameRoutine_5fca00(a1 + 87);
  GameRoutine_5fca00(a1 + 78);
  GameRoutine_5fe300(a1 + 42);
  GameRoutine_605c80(a1 + 38);
  GameRoutine_605c80(a1 + 34);
  GameRoutine_605c80(a1 + 30);
  GameRoutine_605c80(a1 + 26);
  GameRoutine_605c80(a1 + 22);
  return GameRoutine_605c80(a1 + 18);
}

__int64 RectDrawer_Unknown3(__int64 result, __int64 a2)
{
  __int64 v3;
  __int64 FirstBlockEv;
  __int64* v5;

  if (*(int*)(result + 140) >= 1) {
    v3 = result;
    if (*(_BYTE*)(result + 840) != 0) {
      GameRoutine_5fcb10(result + 840, a2);
    }
    if (*(_BYTE*)(v3 + 768) != 0) {
      GameRoutine_5fcb10(v3 + 768, a2);
    }
    if (*(_BYTE*)(v3 + 624) != 0) {
      GameRoutine_5fcb10(v3 + 624, a2);
    }
    if (*(_BYTE*)(v3 + 696) != 0) {
      GameRoutine_5fcb10(v3 + 696, a2);
    }
    if (*(_BYTE*)(v3 + 608) != 0) {
      GameRoutine_5fe3b0(v3 + 336, a2);
    }
    if (*(_BYTE*)(v3 + 912) != 0) {
      GameRoutine_6040f0(v3 + 912, a2);
    }
    if (*(_BYTE*)(v3 + 144) != 0) {
      GameRoutine_605fe0(v3 + 144, a2);
    }
    if (*(_BYTE*)(v3 + 176) != 0) {
      GameRoutine_605fe0(v3 + 176, a2);
    }
    if (*(_BYTE*)(v3 + 208) != 0) {
      GameRoutine_605fe0(v3 + 208, a2);
    }
    if (*(_BYTE*)(v3 + 240) != 0) {
      GameRoutine_605fe0(v3 + 240, a2);
    }
    if (*(_BYTE*)(v3 + 272) != 0) {
      GameRoutine_605fe0(v3 + 272, a2);
    }
    if (*(_BYTE*)(v3 + 304) != 0) {
      GameRoutine_605fe0(v3 + 304, a2);
    }
    FirstBlockEv =
        nn_util_BinaryFileHeader_GetFirstBlock_1a0cef0(*(_QWORD*)(v3 + 8));
    v5 = GameData_2134fd0[0];
    GameRoutine_604da0(
        *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(FirstBlockEv + 32) +
                              GameData_2134fd0[0][*(unsigned int*)(v3 + 16)]) +
                   104LL),
        a2);
    GameRoutine_604da0(
        *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(FirstBlockEv + 32) +
                              v5[*(unsigned int*)(v3 + 16)] + 64) +
                   104LL),
        a2);
    GameRoutine_604da0(
        *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(FirstBlockEv + 32) +
                              v5[*(unsigned int*)(v3 + 16)] + 128) +
                   104LL),
        a2);
    GameRoutine_604da0(
        *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(FirstBlockEv + 32) +
                              v5[*(unsigned int*)(v3 + 16)] + 192) +
                   104LL),
        a2);
    GameRoutine_604da0(
        *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(FirstBlockEv + 32) +
                              v5[*(unsigned int*)(v3 + 16)] + 256) +
                   104LL),
        a2);
    GameRoutine_604da0(
        *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(FirstBlockEv + 32) +
                              v5[*(unsigned int*)(v3 + 16)] + 320) +
                   104LL),
        a2);
    result = GameRoutine_603fb0(FirstBlockEv, a2);
    *(_DWORD*)(v3 + 140) = 0;
  }
  return result;
}

__int64 RectDrawer_56a540(__int64 a1, __int64 (*a2)(__int64, __int64))
{
  return a2(a1 + 1032, a1 + 912);
}

__int64 RectDrawer_56a680(__int64 result, __int64 a2, __int64 a3, char a4,
                          __int64 a5, _QWORD* a6, __int64 a7)
{
  __int64 v7;
  __int64 v8;
  char v9;
  __int64 v12;
  __int64 v13;
  unsigned int* v14;
  int v15;
  int v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  char v20;
  bool v21;
  __int64 v22;
  unsigned int v23;
  unsigned int v24;
  __int64 FirstBlockEv;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v31;
  __int64 v32;
  unsigned int v33;
  int v34;
  int v35;
  _QWORD v36[2];
  _QWORD v37[2];

  v7 = *(unsigned int*)(a3 + 128);
  v8 = a6[1];
  v37[0] = *a6;
  v37[1] = v8;
  if ((_DWORD)v7 != 0) {
    v9 = (a4 & 2) != 0;
    v12 = result;
    v13 = result + 92;
    v14 = (unsigned int*)(a3 + 8);
    v35 = a4 & 5;
    v34 = (a4 & 1) + 1;
    v28 = result + 20;
    v26 = result + 144;
    v27 = result + 68;
    v15 = 96;
    if ((a4 & 4) == 0) {
      v15 = 64;
    }
    v33 = v15;
    v31 = result + 116;
    v32 = result + 44;
    v16 = 7;
    do {
      v23 = *v14;
      if (*v14 != 0) {
        v24 = v35;
        if ((v14[1] & 2) == 0) {
          v24 = 3;
        }
        if ((a4 & 4) != 0) {
          v18 = v24;
        }
        else {
          v18 = v34 & (unsigned int)((int)(v14[1] << 30) >> 31);
        }
        if ((_DWORD)v18 == v16) {
          v17 = v18;
          LODWORD(v18) = v16;
        }
        else {
          if (a7 != 0) {
            GameRoutine_5fce60(a2, *(_QWORD*)(a7 + 8LL * (unsigned int)v18));
          }
          else {
            FirstBlockEv = nn_util_BinaryFileHeader_GetFirstBlock_1a0cef0(
                *(_QWORD*)(v12 + 8));
            GameRoutine_5fd420(
                a2,
                *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(FirstBlockEv + 32) +
                                      (v18 << 6) +
                                      GameData_2134fd0[0][*(
                                          unsigned int*)(v12 + 16)]) +
                           104LL),
                511);
            GameRoutine_5fd3c0(a2, v26 + 32 * v18);
          }
          v17 = v18;
          v36[0] = 0;
          v36[1] = 0;
          GameRoutine_5fcbc0(v12 + 624, v36);
          GameRoutine_5fd5f0(a2, 0, v36, 28, 112);
          GameRoutine_5fe120(a2, *(unsigned int*)(v28 + 4 * v18), 0, a5, 128);
          GameRoutine_5fe120(a2, *(unsigned int*)(v27 + 4 * v18), 4, a5, 128);
          v23 = *v14;
        }
        v19 = (v33 * (unsigned __int64)v23) << v9;
        GameRoutine_5fe1a0(a2, *(unsigned int*)(v32 + 4 * v17), 0, v37, v19);
        v37[0] += v19;
        GameRoutine_5fe0a0(a2, *(unsigned int*)(v31 + 4 * v17), 4,
                           *((_QWORD*)v14 - 1) + 32LL, v12 + 1032);
        v20 = v14[1];
        v36[0] = 0;
        v36[1] = 0;
        v21 = (v20 & 1) == 0;
        v22 = 768;
        if (v21) {
          v22 = 840;
        }
        GameRoutine_5fcbc0(v12 + v22, v36);
        GameRoutine_5fe120(a2, *(unsigned int*)(v13 + 4 * v17), 4, v36, 4);
        v36[0] = 0;
        v36[1] = 0;
        GameRoutine_5fcbc0(v12 + 696, v36);
        result = GameRoutine_5fcdc0(a2, 3, 1, v36, 6, 0, *v14 << v9, 0);
        v16 = v18;
      }
      v14 += 4;
      --v7;
    } while (v7 != 0);
  }
  return result;
}

__int64 RectDrawer_Unknown5(__int64 a1, __int64 a2, __int64 a3)
{
  return (*(__int64 (**)(__int64, __int64, __int64, _QWORD))(
      *(_QWORD*)a1 + 32LL))(a1, a2, a3, 0);
}

#pragma GCC visibility pop
