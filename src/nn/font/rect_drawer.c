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
__int64 GameRoutine_5fc180(_QWORD);
__int64 GameRoutine_5fc190(_QWORD);
__int64 GameRoutine_5fc1b0(_QWORD);
__int64 GameRoutine_5fc230(_QWORD);
__int64 GameRoutine_5fc3a0(_QWORD);
__int64 GameRoutine_5fc3c0(_QWORD);
__int64 GameRoutine_5fc3d0(_QWORD);
__int64 GameRoutine_5fc7e0(_QWORD, _QWORD);
__int64 GameRoutine_5fca10(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_5fcb50(_QWORD);
__int64 GameRoutine_5fcb70(_QWORD);
__int64 GameRoutine_5fcba0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_5fe2d0(_QWORD, _QWORD);
__int64 GameRoutine_5fe2e0(_QWORD, _QWORD);
__int64 GameRoutine_5fe310(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_603cd0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_604060(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_604160(_QWORD, _QWORD);
__int64 GameRoutine_604e40(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_605ae0(_QWORD);
__int64 GameRoutine_605c90(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_605cc0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_util_BinaryFileHeader_GetAlignment(_QWORD);
__int64 nn_util_ReferSymbol(_QWORD);
extern char GameData_2143000[];
bool RectDrawer_Unknown2(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5,
                         __int64 a6);
__int64 RectDrawer_Unknown4(__int64 result, __int64 a2, unsigned int* a3,
                            __int64 a4);

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

__int64 RectDrawer_Unknown4(__int64 result, __int64 a2, unsigned int* a3,
                            __int64 a4)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v9;
  unsigned int v10;
  __int64 v11;
  __int64 v12;
  unsigned int* v13;
  __int64 v14;
  __int64 v15;
  _QWORD v16[2];
  _QWORD v17[4];

  if ((int)a3[38] >= 1) {
    v6 = *((_QWORD*)a3 + 22);
    if ((*(_BYTE*)v6 & 2) == 0 &&
        (signed __int32)*(_DWORD*)(result + 140) >= (signed int)a3[39]) {
      v17[2] = v4;
      v17[3] = v5;
      v7 = a3[1];
      v9 = (_QWORD*)(*(_QWORD*)(v6 + 16) + 16LL * *(int*)(v6 + 48));
      v10 = a3[2];
      v11 = v9[1];
      v17[0] = *v9 + *a3;
      v17[1] = v11;
      v12 = v9[1];
      v16[0] = *v9 + v7;
      v16[1] = v12;
      if (*((_BYTE*)a3 + 185) == 1) {
        v13 = a3;
        v14 = result;
        v15 = a2;
        RectDrawer_56a680(result, a2, (__int64)(a3 + 4), v10 & 0xFE,
                          (__int64)v17, v16, a4);
        LOBYTE(v10) = v10 | 1;
        a3 = v13;
        result = v14;
        a2 = v15;
        v17[0] += (*(_QWORD*)(*((_QWORD*)v13 + 22) + 32LL) + 127LL) &
                  -*(_QWORD*)(*((_QWORD*)v13 + 22) + 32LL);
      }
      return RectDrawer_56a680(result, a2, (__int64)(a3 + 4), v10, (__int64)v17,
                               v16, a4);
    }
  }
  return result;
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

bool RectDrawer_Unknown2(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5,
                         __int64 a6)
{
  int v12;
  __int64 AlignmentEv;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 FirstBlockEv;
  __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  _DWORD* v62;
  _DWORD* v63;
  __int64 v65;
  __int64 v66;
  unsigned __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  int v72;
  _QWORD v73[2];
  __int64 v74;
  __int64 v75;
  const char* v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64* v80;
  _QWORD* v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;

  nn_util_ReferSymbol("SDK MW+Nintendo+NintendoWare_Font-22_2_0-Release");
  v12 = *(_DWORD*)(a1 + 140);
  if (v12 == 0) {
    v72 = a4;
    v70 = a6;
    v71 = a5;
    *(_QWORD*)(a1 + 1040) = a3;
    AlignmentEv = nn_util_BinaryFileHeader_GetAlignment(GameData_2143000);
    v14 = (a3 + AlignmentEv - 1) & -AlignmentEv;
    v15 = v14 + 25696;
    memcpy(v14, GameData_2143000, 25696);
    *(_QWORD*)(a1 + 8) = GameRoutine_5fc1b0(v14);
    v16 = ((__int64 (*)(void))nn_util_BinaryFileHeader_GetFirstBlock_1a0cef0)();
    GameRoutine_603cd0(v16, a2, 0, 0, 0);
    v17 = *(_QWORD*)(v16 + 32);
    v18 = GameData_2134fd0[0];
    v19 = *(_QWORD*)(v17 + *GameData_2134fd0[0]);
    *(_DWORD*)(a1 + 16) = 0;
    if (v19 == 0 ||
        (unsigned int)GameRoutine_604160(*(_QWORD*)(v19 + 104), a2) != 0) {
      v20 =
          *(_QWORD*)(*(char**)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v18) + v17);
      if (v20 == 0 ||
          (*(_DWORD*)(a1 + 16) = 1,
           (unsigned int)GameRoutine_604160(*(_QWORD*)(v20 + 104), a2) != 0)) {
        v21 = *(_QWORD*)(v17 +
                         *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v18));
        *(_DWORD*)(a1 + 16) = 2;
        GameRoutine_604160(*(_QWORD*)(v21 + 104), a2);
      }
    }
    GameRoutine_604160(
        *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v16 + 32) +
                              v18[*(unsigned int*)(a1 + 16)] + 64) +
                   104LL),
        a2);
    GameRoutine_604160(
        *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v16 + 32) +
                              v18[*(unsigned int*)(a1 + 16)] + 128) +
                   104LL),
        a2);
    GameRoutine_604160(
        *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v16 + 32) +
                              v18[*(unsigned int*)(a1 + 16)] + 192) +
                   104LL),
        a2);
    GameRoutine_604160(
        *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v16 + 32) +
                              v18[*(unsigned int*)(a1 + 16)] + 256) +
                   104LL),
        a2);
    GameRoutine_604160(
        *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v16 + 32) +
                              v18[*(unsigned int*)(a1 + 16)] + 320) +
                   104LL),
        a2);
    v22 = *(
        _QWORD*)(*(_QWORD*)(*(_QWORD*)(nn_util_BinaryFileHeader_GetFirstBlock_1a0cef0(
                                           *(_QWORD*)(a1 + 8)) +
                                       32) +
                            v18[*(unsigned int*)(a1 + 16)]) +
                 104LL);
    v23 = *(
        _QWORD*)(*(_QWORD*)(*(_QWORD*)(nn_util_BinaryFileHeader_GetFirstBlock_1a0cef0(
                                           *(_QWORD*)(a1 + 8)) +
                                       32) +
                            v18[*(unsigned int*)(a1 + 16)]) +
                 104LL);
    *(_DWORD*)(a1 + 20) = GameRoutine_604e40(v22, 0, 3, "ShaderParam");
    *(_DWORD*)(a1 + 44) =
        GameRoutine_604e40(v22, 0, 4, "PerCharacterParamBlock");
    *(_DWORD*)(a1 + 68) = GameRoutine_604e40(v23, 4, 3, "ShaderParam");
    *(_DWORD*)(a1 + 92) =
        GameRoutine_604e40(v23, 4, 3, "ShaderParamBlackWhiteInterpolation");
    *(_DWORD*)(a1 + 116) = GameRoutine_604e40(v23, 4, 2, "uTextureSrc");
    v24 = *(
        _QWORD*)(*(_QWORD*)(*(_QWORD*)(nn_util_BinaryFileHeader_GetFirstBlock_1a0cef0(
                                           *(_QWORD*)(a1 + 8)) +
                                       32) +
                            v18[*(unsigned int*)(a1 + 16)] + 64) +
                 104LL);
    v25 = *(
        _QWORD*)(*(_QWORD*)(*(_QWORD*)(nn_util_BinaryFileHeader_GetFirstBlock_1a0cef0(
                                           *(_QWORD*)(a1 + 8)) +
                                       32) +
                            v18[*(unsigned int*)(a1 + 16)] + 64) +
                 104LL);
    *(_DWORD*)(a1 + 24) = GameRoutine_604e40(v24, 0, 3, "ShaderParam");
    *(_DWORD*)(a1 + 48) =
        GameRoutine_604e40(v24, 0, 4, "PerCharacterParamBlock");
    *(_DWORD*)(a1 + 72) = GameRoutine_604e40(v25, 4, 3, "ShaderParam");
    *(_DWORD*)(a1 + 96) =
        GameRoutine_604e40(v25, 4, 3, "ShaderParamBlackWhiteInterpolation");
    *(_DWORD*)(a1 + 120) = GameRoutine_604e40(v25, 4, 2, "uTextureSrc");
    v26 = *(
        _QWORD*)(*(_QWORD*)(*(_QWORD*)(nn_util_BinaryFileHeader_GetFirstBlock_1a0cef0(
                                           *(_QWORD*)(a1 + 8)) +
                                       32) +
                            v18[*(unsigned int*)(a1 + 16)] + 128) +
                 104LL);
    v27 = *(
        _QWORD*)(*(_QWORD*)(*(_QWORD*)(nn_util_BinaryFileHeader_GetFirstBlock_1a0cef0(
                                           *(_QWORD*)(a1 + 8)) +
                                       32) +
                            v18[*(unsigned int*)(a1 + 16)] + 128) +
                 104LL);
    *(_DWORD*)(a1 + 28) = GameRoutine_604e40(v26, 0, 3, "ShaderParam");
    *(_DWORD*)(a1 + 52) =
        GameRoutine_604e40(v26, 0, 4, "PerCharacterParamBlock");
    *(_DWORD*)(a1 + 76) = GameRoutine_604e40(v27, 4, 3, "ShaderParam");
    *(_DWORD*)(a1 + 100) =
        GameRoutine_604e40(v27, 4, 3, "ShaderParamBlackWhiteInterpolation");
    *(_DWORD*)(a1 + 124) = GameRoutine_604e40(v27, 4, 2, "uTextureSrc");
    v28 = *(
        _QWORD*)(*(_QWORD*)(*(_QWORD*)(nn_util_BinaryFileHeader_GetFirstBlock_1a0cef0(
                                           *(_QWORD*)(a1 + 8)) +
                                       32) +
                            v18[*(unsigned int*)(a1 + 16)] + 192) +
                 104LL);
    v29 = *(
        _QWORD*)(*(_QWORD*)(*(_QWORD*)(nn_util_BinaryFileHeader_GetFirstBlock_1a0cef0(
                                           *(_QWORD*)(a1 + 8)) +
                                       32) +
                            v18[*(unsigned int*)(a1 + 16)] + 192) +
                 104LL);
    *(_DWORD*)(a1 + 32) = GameRoutine_604e40(v28, 0, 3, "ShaderParam");
    *(_DWORD*)(a1 + 56) =
        GameRoutine_604e40(v28, 0, 4, "PerCharacterParamBlock");
    *(_DWORD*)(a1 + 80) = GameRoutine_604e40(v29, 4, 3, "ShaderParam");
    *(_DWORD*)(a1 + 104) =
        GameRoutine_604e40(v29, 4, 3, "ShaderParamBlackWhiteInterpolation");
    *(_DWORD*)(a1 + 128) = GameRoutine_604e40(v29, 4, 2, "uTextureSrc");
    v30 = *(
        _QWORD*)(*(_QWORD*)(*(_QWORD*)(nn_util_BinaryFileHeader_GetFirstBlock_1a0cef0(
                                           *(_QWORD*)(a1 + 8)) +
                                       32) +
                            v18[*(unsigned int*)(a1 + 16)] + 256) +
                 104LL);
    v31 = *(
        _QWORD*)(*(_QWORD*)(*(_QWORD*)(nn_util_BinaryFileHeader_GetFirstBlock_1a0cef0(
                                           *(_QWORD*)(a1 + 8)) +
                                       32) +
                            v18[*(unsigned int*)(a1 + 16)] + 256) +
                 104LL);
    *(_DWORD*)(a1 + 36) = GameRoutine_604e40(v30, 0, 3, "ShaderParam");
    *(_DWORD*)(a1 + 60) =
        GameRoutine_604e40(v30, 0, 4, "PerCharacterParamBlock");
    *(_DWORD*)(a1 + 84) = GameRoutine_604e40(v31, 4, 3, "ShaderParam");
    *(_DWORD*)(a1 + 108) =
        GameRoutine_604e40(v31, 4, 3, "ShaderParamBlackWhiteInterpolation");
    *(_DWORD*)(a1 + 132) = GameRoutine_604e40(v31, 4, 2, "uTextureSrc");
    v32 = *(
        _QWORD*)(*(_QWORD*)(*(_QWORD*)(nn_util_BinaryFileHeader_GetFirstBlock_1a0cef0(
                                           *(_QWORD*)(a1 + 8)) +
                                       32) +
                            v18[*(unsigned int*)(a1 + 16)] + 320) +
                 104LL);
    v33 = *(
        _QWORD*)(*(_QWORD*)(*(_QWORD*)(nn_util_BinaryFileHeader_GetFirstBlock_1a0cef0(
                                           *(_QWORD*)(a1 + 8)) +
                                       32) +
                            v18[*(unsigned int*)(a1 + 16)] + 320) +
                 104LL);
    *(_DWORD*)(a1 + 40) = GameRoutine_604e40(v32, 0, 3, "ShaderParam");
    *(_DWORD*)(a1 + 64) =
        GameRoutine_604e40(v32, 0, 4, "PerCharacterParamBlock");
    *(_DWORD*)(a1 + 88) = GameRoutine_604e40(v33, 4, 3, "ShaderParam");
    *(_DWORD*)(a1 + 112) =
        GameRoutine_604e40(v33, 4, 3, "ShaderParamBlackWhiteInterpolation");
    *(_DWORD*)(a1 + 136) = GameRoutine_604e40(v33, 4, 2, "uTextureSrc");
    v83 = 0;
    v84 = 0;
    v81 = nullptr;
    v82 = 0;
    v79 = 0;
    v80 = nullptr;
    v77 = 0;
    v78 = 0;
    v75 = 0;
    v76 = nullptr;
    v73[1] = 0;
    v74 = 0;
    v73[0] = 0;
    GameRoutine_5fc3d0(&v79);
    GameRoutine_5fc3a0(&v74);
    *(_DWORD*)((char*)&v74 + 2) = 0;
    v75 = 0x180500000000LL;
    v76 = "aVertex";
    GameRoutine_5fc3c0(v73);
    v80 = &v74;
    v81 = v73;
    LODWORD(v73[0]) = 28;
    LODWORD(v79) = 65537;
    v34 = GameRoutine_605ae0(&v79);
    GameRoutine_605c90(a1 + 144, (v15 + 7) & 0xFFFFFFFFFFFFFFF8LL, v34);
    FirstBlockEv =
        nn_util_BinaryFileHeader_GetFirstBlock_1a0cef0(*(_QWORD*)(a1 + 8));
    GameRoutine_605cc0(a1 + 144, a2, &v79,
                       *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(FirstBlockEv + 32) +
                                             v18[*(unsigned int*)(a1 + 16)]) +
                                  104LL));
    GameRoutine_605c90(a1 + 176,
                       (((v15 + 7) & 0xFFFFFFFFFFFFFFF8LL) + v34 + 7) &
                           0xFFFFFFFFFFFFFFF8LL,
                       v34);
    v36 = nn_util_BinaryFileHeader_GetFirstBlock_1a0cef0(*(_QWORD*)(a1 + 8));
    GameRoutine_605cc0(
        a1 + 176, a2, &v79,
        *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v36 + 32) +
                              v18[*(unsigned int*)(a1 + 16)] + 64) +
                   104LL));
    v37 = (((((v15 + 7) & 0xFFFFFFFFFFFFFFF8LL) + v34 + 7) &
            0xFFFFFFFFFFFFFFF8LL) +
           v34 + 7) &
          0xFFFFFFFFFFFFFFF8LL;
    GameRoutine_605c90(a1 + 208, v37, v34);
    v38 = nn_util_BinaryFileHeader_GetFirstBlock_1a0cef0(*(_QWORD*)(a1 + 8));
    GameRoutine_605cc0(
        a1 + 208, a2, &v79,
        *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v38 + 32) +
                              v18[*(unsigned int*)(a1 + 16)] + 128) +
                   104LL));
    v39 = (v37 + v34 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    GameRoutine_605c90(a1 + 240, v39, v34);
    v40 = nn_util_BinaryFileHeader_GetFirstBlock_1a0cef0(*(_QWORD*)(a1 + 8));
    GameRoutine_605cc0(
        a1 + 240, a2, &v79,
        *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v40 + 32) +
                              v18[*(unsigned int*)(a1 + 16)] + 192) +
                   104LL));
    v41 = (v39 + v34 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    GameRoutine_605c90(a1 + 272, v41, v34);
    v42 = nn_util_BinaryFileHeader_GetFirstBlock_1a0cef0(*(_QWORD*)(a1 + 8));
    GameRoutine_605cc0(
        a1 + 272, a2, &v79,
        *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v42 + 32) +
                              v18[*(unsigned int*)(a1 + 16)] + 256) +
                   104LL));
    v67 = (v41 + v34 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    GameRoutine_605c90(a1 + 304, v67, v34);
    v43 = nn_util_BinaryFileHeader_GetFirstBlock_1a0cef0(*(_QWORD*)(a1 + 8));
    GameRoutine_605cc0(
        a1 + 304, a2, &v79,
        *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v43 + 32) +
                              v18[*(unsigned int*)(a1 + 16)] + 320) +
                   104LL));
    v81 = nullptr;
    v82 = 0;
    v79 = 0;
    v80 = nullptr;
    GameRoutine_5fc230(&v79);
    LOWORD(v79) = 0;
    HIWORD(v79) = 41;
    GameRoutine_604060(a1 + 912, a2, &v79);
    v81 = nullptr;
    v82 = 0;
    v79 = 0;
    v80 = nullptr;
    *(_QWORD*)(a1 + 1032) = -1;
    GameRoutine_5fc190(&v79);
    v66 = GameRoutine_5fe2d0(a2, &v79);
    v65 = GameRoutine_5fe2e0(a2, &v79);
    v74 = 0;
    v75 = 0;
    GameRoutine_5fc180(&v74);
    HIDWORD(v74) = 4;
    v44 = GameRoutine_5fc7e0(a2, &v74);
    v74 = 0;
    v75 = 0;
    v45 = (v44 + 111) & -v44;
    GameRoutine_5fc180(&v74);
    HIDWORD(v74) = 8;
    v46 = GameRoutine_5fc7e0(a2, &v74);
    v74 = 0;
    v75 = 0;
    v47 = (v46 + 11) & -v46;
    GameRoutine_5fc180(&v74);
    HIDWORD(v74) = 16;
    v48 = GameRoutine_5fc7e0(a2, &v74);
    v49 = v71;
    v74 = 0;
    v75 = 0;
    v50 = (v48 + 3) & -v48;
    if (v71 != 0) {
      v51 = v70;
    }
    else {
      v51 = 0;
    }
    GameRoutine_5fc180(&v74);
    HIDWORD(v74) = 8;
    v52 = GameRoutine_5fc7e0(a2, &v74);
    v53 = v51 + v52;
    v68 = v51;
    v54 = v45;
    v74 = 0;
    v75 = 0;
    v55 = (v53 + v45 - 1) & -v52;
    GameRoutine_5fc180(&v74);
    HIDWORD(v74) = 16;
    v56 = GameRoutine_5fc7e0(a2, &v74);
    v69 = v55;
    v74 = 0;
    v75 = 0;
    v57 = (v47 + v56 + v55 - 1) & -v56;
    GameRoutine_5fc180(&v74);
    HIDWORD(v74) = 16;
    v58 = GameRoutine_5fc7e0(a2, &v74);
    v59 = (v50 + v58 + v57 - 1) & -v58;
    if (v71 == 0) {
      v49 = a1 + 336;
      v80 = (__int64*)((v67 + v34 + v66 - 1) & -v66);
      v81 = (_QWORD*)((v65 + ~v70 + v50 + v59) & -v65);
      LODWORD(v79) = 34;
      HIDWORD(v79) = (v65 + ~(_DWORD)v70 + v50 + v59) & -(int)v65;
      GameRoutine_5fe310(a1 + 336, a2, &v79);
    }
    v74 = 0;
    v75 = 0;
    GameRoutine_5fc180(&v74);
    v74 = (unsigned int)v54 | 0x400000000LL;
    GameRoutine_5fca10(a1 + 624, a2, &v74, v49, v68, v54);
    v60 = GameRoutine_5fcb50(a1 + 624);
    *(_QWORD*)(v60 + 32) = 0;
    *(_QWORD*)(v60 + 52) = 0;
    *(_DWORD*)(v60 + 108) = 0;
    *(_QWORD*)v60 = 0;
    *(_QWORD*)(v60 + 8) = 0xFFFFFFFF00000000LL;
    *(_QWORD*)(v60 + 44) = 0x3F8000003F800000LL;
    *(_QWORD*)(v60 + 16) = 0x3F80000000000000LL;
    *(_QWORD*)(v60 + 24) = 0x3F80000000000000LL;
    *(_QWORD*)(v60 + 72) = 0;
    *(_QWORD*)(v60 + 80) = 0x3F80000000000000LL;
    *(_DWORD*)(v60 + 40) = -1;
    *(_QWORD*)(v60 + 60) = 1065353216;
    *(_DWORD*)(v60 + 68) = -1;
    *(_QWORD*)(v60 + 88) = 1065353216;
    *(_DWORD*)(v60 + 96) = -1;
    *(_QWORD*)(v60 + 100) = 1065353216;
    GameRoutine_5fcb70(a1 + 624);
    v74 = 0;
    v75 = 0;
    GameRoutine_5fc180(&v74);
    v74 = (unsigned int)v47 | 0x800000000LL;
    GameRoutine_5fca10(a1 + 696, a2, &v74, v49, v69, v47);
    v61 = GameRoutine_5fcb50(a1 + 696);
    *(_DWORD*)(v61 + 8) = 1;
    *(_QWORD*)v61 = 0x3000300020000LL;
    GameRoutine_5fcb70(a1 + 696);
    v74 = 0;
    v75 = 0;
    GameRoutine_5fc180(&v74);
    v74 = (unsigned int)v50 | 0x1000000000LL;
    GameRoutine_5fca10(a1 + 768, a2, &v74, v49, v57, v50);
    v62 = (_DWORD*)GameRoutine_5fcb50(a1 + 768);
    GameRoutine_5fcba0(a1 + 768, 0, (unsigned int)v74);
    *v62 = 1;
    GameRoutine_5fcb70(a1 + 768);
    v74 = 0;
    v75 = 0;
    GameRoutine_5fc180(&v74);
    v74 = (unsigned int)v50 | 0x1000000000LL;
    GameRoutine_5fca10(a1 + 840, a2, &v74, v49, v59, v50);
    v63 = (_DWORD*)GameRoutine_5fcb50(a1 + 840);
    GameRoutine_5fcba0(a1 + 840, 0, (unsigned int)v74);
    *v63 = 0;
    GameRoutine_5fcb70(a1 + 840);
    v12 = 0;
    *(_DWORD*)(a1 + 140) = v72;
  }
  return v12 == 0;
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
