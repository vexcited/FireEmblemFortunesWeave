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
__int64 GameRoutine_603630(_QWORD);
__int64 GameRoutine_603650(_QWORD);
__int64 GameRoutine_6036a0(_QWORD);
__int64 GameRoutine_6036c0(_QWORD, _QWORD);
extern _UNKNOWN** GameData_212e828[15];
extern _UNKNOWN** GameData_212e830[14];
extern _UNKNOWN** GameData_212e838[13];
extern _UNKNOWN** GameData_212e840[12];
extern _UNKNOWN** GameData_212e850[10];
extern _UNKNOWN** GameData_212e858[9];
extern _UNKNOWN** GameData_212e860[8];
extern _UNKNOWN** GameData_2136670[6];
extern _UNKNOWN** GameData_2136690[2];
extern _UNKNOWN** GameData_2136770;
extern _UNKNOWN** GameData_21367a0[18];
extern _UNKNOWN** GameData_21367a8[17];
extern _UNKNOWN** GameData_21367b0[16];
extern _UNKNOWN** GameData_21367b8[15];
extern _UNKNOWN** GameData_21367d8[11];
extern _UNKNOWN** GameData_21367e0[10];
extern _UNKNOWN** GameData_21367e8[9];
extern _UNKNOWN** GameData_21367f0[8];
extern _UNKNOWN** GameData_21367f8[7];
extern _UNKNOWN** GameData_2136800[6];
extern _UNKNOWN** GameData_2136808[5];
extern __int64 (*GameData_21a4c90)(_QWORD, bool);
extern __int64 (*GameData_21a4c98)(_QWORD, bool);
extern __int64 (*GameData_21a4ca0)(_QWORD, bool);
__int64 RectDrawer_5fcb10(__int64 a1);
__int64 RectDrawer_5fcbc0(__int64 a1, __int64* a2);
__int64 RectDrawer_5fcdc0(__int64 a1, unsigned int a2, unsigned int a3,
                          _QWORD* a4, unsigned int a5, unsigned int a6,
                          unsigned int a7, unsigned int a8);
__int64 RectDrawer_5fce60(__int64 a1, __int64 a2);
__int64 RectDrawer_5fd3c0(__int64 a1, __int64 a2);
__int64 RectDrawer_5fd420(__int64 a1, __int64 a2, unsigned int a3);
__int64 RectDrawer_5fd5f0(__int64 a1, unsigned int a2, _QWORD* a3, __int64 a4,
                          __int64 a5);

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

__int64 RectDrawer_5fcb10(__int64 a1)
{
  __int64 result;

  result = (*(__int64 (**)(_QWORD))GameData_2136670[0])(*(_QWORD*)(a1 + 8));
  *(_QWORD*)(a1 + 8) = 0;
  *(_BYTE*)a1 = 0;
  return result;
}

__int64 RectDrawer_5fcbc0(__int64 a1, __int64* a2)
{
  __int64 result;

  result = (*(__int64 (**)(_QWORD))GameData_2136690[0])(*(_QWORD*)(a1 + 8));
  *a2 = result;
  a2[1] = 0;
  return result;
}

__int64 RectDrawer_5fcdc0(__int64 a1, unsigned int a2, unsigned int a3,
                          _QWORD* a4, unsigned int a5, unsigned int a6,
                          unsigned int a7, unsigned int a8)
{
  __int64 v8;
  unsigned int v15;
  unsigned int v16;
  __int64 v17;

  v8 = *(_QWORD*)(a1 + 208);
  v15 = GameRoutine_603630(a2);
  v16 = GameRoutine_6036a0(a3);
  v17 = GameRoutine_6036c0(*a4, a4[1]);
  return ((__int64 (*)(__int64, _QWORD, _QWORD, _QWORD, __int64, _QWORD, _QWORD,
                       _QWORD))*GameData_2136770)(v8, v15, v16, a5, v17, a6, a8,
                                                  a7);
}

__int64 RectDrawer_5fce60(__int64 a1, __int64 a2)
{
  char v4;
  __int64 v5;
  __int64 v6;
  _UNKNOWN** v7;
  _UNKNOWN** v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  if (*(_BYTE*)(a2 + 1) == 0) {
    (*(void (**)(_QWORD, __int64))GameData_21367a0[0])(*(_QWORD*)(a1 + 208),
                                                       a2 + 80);
    (*(void (**)(_QWORD, float, float, float))GameData_21367a8[0])(
        *(_QWORD*)(a1 + 208), *(float*)(a2 + 120), *(float*)(a2 + 112),
        *(float*)(a2 + 116));
    (*(void (**)(_QWORD, __int64))GameData_21367b0[0])(*(_QWORD*)(a1 + 208),
                                                       a2 + 84);
    v4 = *(_BYTE*)(a2 + 125);
    if ((v4 & 1) != 0) {
      (*(void (**)(_QWORD, _QWORD))GameData_21367b8[0])(
          *(_QWORD*)(a1 + 208), *(unsigned int*)(a2 + 108));
      v4 = *(_BYTE*)(a2 + 125);
    }
    GameData_21a4c98(*(_QWORD*)(a1 + 208), (v4 & 2) == 0);
    GameData_21a4c90(*(_QWORD*)(a1 + 208), (*(_BYTE*)(a2 + 125) & 4) == 0);
    GameData_21a4ca0(*(_QWORD*)(a1 + 208), (*(_BYTE*)(a2 + 125) & 8) != 0);
    v5 = *(unsigned __int8*)(a2 + 77);
    if (*(_BYTE*)(a2 + 77) != 0) {
      v6 = *(_QWORD*)(a2 + 40);
      v7 = GameData_212e850[0];
      do {
        ((void (*)(_QWORD, __int64))*v7)(*(_QWORD*)(a1 + 208), v6);
        --v5;
        v6 += 8;
      } while (v5 != 0);
    }
    (*(void (**)(_QWORD, __int64))GameData_212e858[0])(*(_QWORD*)(a1 + 208),
                                                       a2 + 52);
    (*(void (**)(_QWORD, __int64))GameData_212e860[0])(*(_QWORD*)(a1 + 208),
                                                       a2 + 48);
    (*(void (**)(_QWORD, __int64))GameData_21367d8[0])(*(_QWORD*)(a1 + 208),
                                                       a2 + 56);
    (*(void (**)(_QWORD, __int64))GameData_212e840[0])(*(_QWORD*)(a1 + 208),
                                                       a2 + 128);
    (*(void (**)(_QWORD, __int64, _QWORD))GameData_212e838[0])(
        *(_QWORD*)(a1 + 208), 3, *(unsigned int*)(a2 + 136));
    (*(void (**)(_QWORD, __int64, _QWORD))GameData_212e830[0])(
        *(_QWORD*)(a1 + 208), 3, *(unsigned int*)(a2 + 140));
    v8 = GameData_212e828[0];
    (*(void (**)(_QWORD, __int64, _QWORD))GameData_212e828[0])(
        *(_QWORD*)(a1 + 208), 2, *(unsigned int*)(a2 + 144));
    ((void (*)(_QWORD, __int64, _QWORD))*v8)(*(_QWORD*)(a1 + 208), 1,
                                             *(unsigned int*)(a2 + 148));
    if ((*(_WORD*)(a2 + 154) & 8) == 0) {
      (*(void (**)(_QWORD, _QWORD, double, float))GameData_21367e0[0])(
          *(_QWORD*)(a1 + 208), 0, 0.0, 1.0);
    }
    (*(void (**)(_QWORD, _QWORD, _QWORD))GameData_21367e8[0])(
        *(_QWORD*)(a1 + 208), *(unsigned int*)(a2 + 16), *(_QWORD*)(a2 + 32));
    (*(void (**)(_QWORD, _QWORD, _QWORD))GameData_21367f0[0])(
        *(_QWORD*)(a1 + 208), *(unsigned int*)(a2 + 12), *(_QWORD*)(a2 + 24));
    if ((*(_BYTE*)(a2 + 2) & 1) != 0) {
      (*(void (**)(_QWORD, _QWORD))GameData_21367f8[0])(
          *(_QWORD*)(a1 + 208), *(unsigned int*)(a2 + 160));
    }
  }
  v9 = *(_QWORD*)(a2 + 168);
  if (v9 == 0) {
    v10 = 0;
    goto LABEL_15;
  }
  v10 = *(_QWORD*)(v9 + 8);
  if ((*(_BYTE*)(v9 + 1) & 1) != 0) {
  LABEL_15:
    v11 = (unsigned int)GameRoutine_603650(511);
    return (*(__int64 (**)(_QWORD, __int64, __int64))GameData_2136800[0])(
        *(_QWORD*)(a1 + 208), v10, v11);
  }
  v11 = *(unsigned int*)(v9 + 4);
  return (*(__int64 (**)(_QWORD, __int64, __int64))GameData_2136800[0])(
      *(_QWORD*)(a1 + 208), v10, v11);
}

__int64 RectDrawer_5fd3c0(__int64 a1, __int64 a2)
{
  (*(void (**)(_QWORD, _QWORD, _QWORD))GameData_21367e8[0])(
      *(_QWORD*)(a1 + 208), *(unsigned int*)(a2 + 8), *(_QWORD*)(a2 + 24));
  return (*(__int64 (**)(_QWORD, _QWORD, _QWORD))GameData_21367f0[0])(
      *(_QWORD*)(a1 + 208), *(unsigned int*)(a2 + 4), *(_QWORD*)(a2 + 16));
}

__int64 RectDrawer_5fd420(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4;
  __int64 v5;

  if (a2 == 0) {
    v4 = 0;
    goto LABEL_5;
  }
  v4 = *(_QWORD*)(a2 + 8);
  if ((*(_BYTE*)(a2 + 1) & 1) != 0) {
  LABEL_5:
    v5 = (unsigned int)GameRoutine_603650(a3);
    return (*(__int64 (**)(_QWORD, __int64, __int64))GameData_2136800[0])(
        *(_QWORD*)(a1 + 208), v4, v5);
  }
  v5 = *(unsigned int*)(a2 + 4);
  return (*(__int64 (**)(_QWORD, __int64, __int64))GameData_2136800[0])(
      *(_QWORD*)(a1 + 208), v4, v5);
}

__int64 RectDrawer_5fd5f0(__int64 a1, unsigned int a2, _QWORD* a3, __int64 a4,
                          __int64 a5)
{
  __int64 v6;
  __int64 v8;

  v6 = *(_QWORD*)(a1 + 208);
  v8 = GameRoutine_6036c0(*a3, a3[1]);
  return (*(__int64 (**)(__int64, _QWORD, __int64,
                         __int64))GameData_2136808[0])(v6, a2, v8, a5);
}

#pragma GCC visibility pop
