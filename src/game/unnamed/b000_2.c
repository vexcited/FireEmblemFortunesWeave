#include "decomp/pseudo_types.h"

#pragma GCC visibility push(hidden)

extern __int64 (*GameData_1f66e48[])();

extern __int64 (*GameData_1f66f18[])();

extern __int64 (*GameData_1f67380[])();

extern __int64 (*GameData_1f67960[])();

extern __int64 (*GameData_1f684c0[])();

extern __int64 (*GameData_1f69008[])();

extern __int64 (*GameData_1f69b50[])();

extern __int64 (*GameData_1f6b5c0)(_QWORD);

extern __int64* GameData_212d480[2];

extern __int64* GameData_2134248[3];

extern __int64* GameData_21342e8;

extern __int64* GameData_2134378;

extern __int64 GameData_2134708[26];

extern __int64 GameData_2134718[24];

extern __int64 GameData_2134758[16];

extern __int64 GameData_2134798[8];

extern __int64 GameData_21347b0[5];

extern __int64* GameData_2134b60;

__int64 GameRoutine_112180(_QWORD, _QWORD);

__int64 GameRoutine_112320(_QWORD);

__int64 GameRoutine_126150(void);

__int64 GameRoutine_1261b0(__int64, __int64, __int64, __int64, __int64,
                           __int64);

__int64 GameRoutine_15d7e0(__int64 result);

__int64 GameRoutine_1678f0(__int64, __int64, __int64, int, int);

__int64 GameRoutine_16a8a0(void);

__int64 GameRoutine_16b760(_QWORD, _QWORD);

__int64 GameRoutine_16bdb0(_QWORD, _QWORD);

__int64 GameRoutine_16be10(_QWORD, float);

__int64 GameRoutine_16e750(void);

__int64 GameRoutine_172c30(void);

__int64 GameRoutine_1905a40(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_1a09cf0(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_1a09f60(_QWORD);

__int64 GameRoutine_1a0a040(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_1a0ba50(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_1a0bbc0(_QWORD);

__int64 GameRoutine_1a0bcf0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_1a0bd00(_QWORD, _QWORD);

__int64 GameRoutine_2af320(void);

__int64 GameRoutine_60abc0(_QWORD, _QWORD);

__int64 GameHr_164030(__int64 result)
{
  *(_WORD*)(result + 12) = 0;
  *(_BYTE*)(result + 14) = 0;
  *(_BYTE*)(result + 23) = 0;
  *(_WORD*)(result + 17) = 0;
  *(_BYTE*)(result + 28) = 0;
  *(_BYTE*)(result + 33) = 0;
  *(_WORD*)(result + 31) = 0;
  *(_BYTE*)(result + 42) = 0;
  *(_QWORD*)result = 0x3F80000000000000LL;
  *(_DWORD*)(result + 19) = 0x4000;
  *(_BYTE*)(result + 8) = 127;
  *(_BYTE*)(result + 16) = 127;
  *(_BYTE*)(result + 30) = 127;
  *(_BYTE*)(result + 44) = 127;
  *(_BYTE*)(result + 58) = 127;
  *(_BYTE*)(result + 72) = 127;
  *(_BYTE*)(result + 86) = 127;
  *(_BYTE*)(result + 100) = 127;
  *(_BYTE*)(result + 114) = 127;
  *(_DWORD*)(result + 24) = 0xFFFF;
  *(_DWORD*)(result + 48) = 64;
  *(_WORD*)(result + 52) = -1;
  *(_BYTE*)(result + 47) = 0;
  *(_WORD*)(result + 45) = 0;
  *(_WORD*)(result + 54) = 0;
  *(_BYTE*)(result + 56) = 0;
  *(_BYTE*)(result + 61) = 0;
  *(_WORD*)(result + 59) = 0;
  *(_QWORD*)(result + 34) = 0xFFFF00000040LL;
  *(_QWORD*)(result + 62) = 0xFFFF00000040LL;
  *(_BYTE*)(result + 70) = 0;
  *(_QWORD*)(result + 76) = 0xFFFF00000040LL;
  *(_BYTE*)(result + 75) = 0;
  *(_WORD*)(result + 73) = 0;
  *(_BYTE*)(result + 84) = 0;
  *(_DWORD*)(result + 90) = 64;
  *(_WORD*)(result + 94) = -1;
  *(_BYTE*)(result + 89) = 0;
  *(_WORD*)(result + 87) = 0;
  *(_WORD*)(result + 96) = 0;
  *(_BYTE*)(result + 98) = 0;
  *(_QWORD*)(result + 104) = 0xFFFF00000040LL;
  *(_BYTE*)(result + 103) = 0;
  *(_WORD*)(result + 101) = 0;
  *(_BYTE*)(result + 112) = 0;
  *(_DWORD*)(result + 118) = 64;
  *(_WORD*)(result + 122) = -1;
  *(_BYTE*)(result + 117) = 0;
  *(_WORD*)(result + 115) = 0;
  *(_QWORD*)(result + 124) = 0;
  *(_DWORD*)(result + 132) = -1;
  *(_QWORD*)(result + 136) = 0;
  *(_BYTE*)(result + 11) = 0;
  *(_WORD*)(result + 9) = 0;
  return result;
}

__int64 GameHr_164260(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 result;

  GameRoutine_1a09f60(a1 + 1848);
  GameRoutine_1a09f60(a1 + 1816);
  GameRoutine_1a09f60(a1 + 1784);
  GameRoutine_1a09f60(a1 + 1752);
  GameRoutine_1a09f60(a1 + 1720);
  GameRoutine_1a09f60(a1 + 1520);
  v2 = *(int*)(a1 + 1496);
  if ((_DWORD)v2 != 0) {
    v3 = *(_QWORD*)(a1 + 1488);
    v4 = v2 << 8;
    do {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 88LL))(v3);
      v3 += 256;
      v4 -= 256;
    } while (v4 != 0);
  }
  *(_QWORD*)(a1 + 1384) = GameData_2134b60 + 2;
  result = GameRoutine_1a09f60(a1 + 1392);
  if (*(_BYTE*)(a1 + 184) != 0) {
    return GameRoutine_1a0bbc0(a1 + 144);
  }
  return result;
}

__int64 GameHr_164d90(__int64 result, __int64 a2)
{
  __int64 v3;
  __int64* v4;

  if (a2 != 0) {
    v3 = result;
    GameHr_164d90(result, *(_QWORD*)a2);
    GameHr_164d90(v3, *(_QWORD*)(a2 + 8));
    GameRoutine_15d7e0(a2 + 56);
    v4 = GameData_212d480[0];
    if ((*(_BYTE*)(a2 + 32) & 1) != 0) {
      (*(void (**)(_QWORD, _QWORD))(**(_QWORD**)GameData_212d480[0] + 24LL))(
          *GameData_212d480[0], *(_QWORD*)(a2 + 48));
    }
    return (*(__int64 (**)(__int64, __int64))(*(_QWORD*)*v4 + 24LL))(*v4, a2);
  }
  return result;
}

_QWORD* GameHr_164e30(__int64 a1, __int64 a2)
{
  _QWORD* result;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64* v8;
  __int64* v9;
  __int64* v10;
  __int64* v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
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

  *(_DWORD*)a1 = *(_DWORD*)a2;
  result = (_QWORD*)(a1 + 8);
  if ((*(_BYTE*)(a2 + 8) & 1) != 0) {
    result = (_QWORD*)GameRoutine_1905a40(result, *(_QWORD*)(a2 + 24),
                                          *(_QWORD*)(a2 + 16));
    v7 = (__int64*)(a2 + 32);
    if ((*(_BYTE*)(a2 + 32) & 1) != 0) {
    LABEL_3:
      result = (_QWORD*)GameRoutine_1905a40(a1 + 32, *(_QWORD*)(a2 + 48),
                                            *(_QWORD*)(a2 + 40));
      v8 = (__int64*)(a2 + 56);
      if ((*(_BYTE*)(a2 + 56) & 1) != 0) {
        goto LABEL_4;
      }
      goto LABEL_11;
    }
  }
  else {
    v5 = *(_QWORD*)(a2 + 8);
    v6 = *(_QWORD*)(a2 + 24);
    result[1] = *(_QWORD*)(a2 + 16);
    result[2] = v6;
    *result = v5;
    v7 = (__int64*)(a2 + 32);
    if ((*(_BYTE*)(a2 + 32) & 1) != 0) {
      goto LABEL_3;
    }
  }
  v13 = *v7;
  v14 = v7[1];
  v15 = v7[2];
  *(_QWORD*)(a1 + 40) = v14;
  *(_QWORD*)(a1 + 48) = v15;
  *(_QWORD*)(a1 + 32) = v13;
  v8 = (__int64*)(a2 + 56);
  if ((*(_BYTE*)(a2 + 56) & 1) != 0) {
  LABEL_4:
    result = (_QWORD*)GameRoutine_1905a40(a1 + 56, *(_QWORD*)(a2 + 72),
                                          *(_QWORD*)(a2 + 64));
    v9 = (__int64*)(a2 + 80);
    if ((*(_BYTE*)(a2 + 80) & 1) != 0) {
      goto LABEL_5;
    }
    goto LABEL_12;
  }
LABEL_11:
  v16 = *v8;
  v17 = v8[1];
  v18 = v8[2];
  *(_QWORD*)(a1 + 64) = v17;
  *(_QWORD*)(a1 + 72) = v18;
  *(_QWORD*)(a1 + 56) = v16;
  v9 = (__int64*)(a2 + 80);
  if ((*(_BYTE*)(a2 + 80) & 1) != 0) {
  LABEL_5:
    result = (_QWORD*)GameRoutine_1905a40(a1 + 80, *(_QWORD*)(a2 + 96),
                                          *(_QWORD*)(a2 + 88));
    v10 = (__int64*)(a2 + 104);
    if ((*(_BYTE*)(a2 + 104) & 1) != 0) {
      goto LABEL_6;
    }
    goto LABEL_13;
  }
LABEL_12:
  v19 = *v9;
  v20 = v9[1];
  v21 = v9[2];
  *(_QWORD*)(a1 + 88) = v20;
  *(_QWORD*)(a1 + 96) = v21;
  *(_QWORD*)(a1 + 80) = v19;
  v10 = (__int64*)(a2 + 104);
  if ((*(_BYTE*)(a2 + 104) & 1) != 0) {
  LABEL_6:
    result = (_QWORD*)GameRoutine_1905a40(a1 + 104, *(_QWORD*)(a2 + 120),
                                          *(_QWORD*)(a2 + 112));
    v11 = (__int64*)(a2 + 128);
    if ((*(_BYTE*)(a2 + 128) & 1) != 0) {
      goto LABEL_7;
    }
  LABEL_14:
    v25 = *v11;
    v26 = v11[1];
    v27 = v11[2];
    *(_QWORD*)(a1 + 136) = v26;
    *(_QWORD*)(a1 + 144) = v27;
    *(_QWORD*)(a1 + 128) = v25;
    v12 = (__int64*)(a2 + 152);
    if ((*(_BYTE*)(a2 + 152) & 1) != 0) {
      return (_QWORD*)GameRoutine_1905a40(a1 + 152, *(_QWORD*)(a2 + 168),
                                          *(_QWORD*)(a2 + 160));
    }
    goto LABEL_15;
  }
LABEL_13:
  v22 = *v10;
  v23 = v10[1];
  v24 = v10[2];
  *(_QWORD*)(a1 + 112) = v23;
  *(_QWORD*)(a1 + 120) = v24;
  *(_QWORD*)(a1 + 104) = v22;
  v11 = (__int64*)(a2 + 128);
  if ((*(_BYTE*)(a2 + 128) & 1) == 0) {
    goto LABEL_14;
  }
LABEL_7:
  result = (_QWORD*)GameRoutine_1905a40(a1 + 128, *(_QWORD*)(a2 + 144),
                                        *(_QWORD*)(a2 + 136));
  v12 = (__int64*)(a2 + 152);
  if ((*(_BYTE*)(a2 + 152) & 1) != 0) {
    return (_QWORD*)GameRoutine_1905a40(a1 + 152, *(_QWORD*)(a2 + 168),
                                        *(_QWORD*)(a2 + 160));
  }
LABEL_15:
  v28 = *v12;
  v29 = v12[1];
  v30 = v12[2];
  *(_QWORD*)(a1 + 160) = v29;
  *(_QWORD*)(a1 + 168) = v30;
  *(_QWORD*)(a1 + 152) = v28;
  return result;
}

__int64* GameHr_1674e0(__int64** a1, unsigned __int8* a2, __int64* a3)
{
  __int64 v3;
  __int64* v4;
  unsigned __int64 v7;
  bool v8;
  unsigned __int64 v9;
  unsigned __int8* v10;
  unsigned __int64 v11;
  __int64* v12;
  unsigned __int64 v13;
  bool v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  int v20;
  __int64* v21;
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
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64* v40;

  v4 = (__int64*)(a1 + 1);
  v3 = (__int64)a1[1];
  if (v3 == 0) {
    v12 = (__int64*)(a1 + 1);
    goto LABEL_29;
  }
  v7 = *a2;
  v8 = (v7 & 1) == 0;
  v9 = v7 >> 1;
  if (v8) {
    v10 = a2 + 1;
  }
  else {
    v10 = *((unsigned __int8**)a2 + 2);
  }
  if (v8) {
    v11 = v9;
  }
  else {
    v11 = *((_QWORD*)a2 + 1);
  }
  do {
    while (1) {
      v12 = (__int64*)v3;
      v13 = *(unsigned __int8*)(v3 + 32);
      v14 = (v13 & 1) == 0;
      v15 = v13 >> 1;
      v16 = v14 ? v15 : v12[5];
      v17 = v14 ? (__int64)v12 + 33 : v12[6];
      v18 = v16 >= v11 ? v11 : v16;
      v19 = GameRoutine_1a09cf0(v10, v17, v18);
      if (v19 != 0) {
        break;
      }
      if (v11 >= v16) {
        goto LABEL_22;
      }
    LABEL_8:
      v3 = *v12;
      v4 = v12;
      if (*v12 == 0) {
        goto LABEL_29;
      }
    }
    if (v19 < 0) {
      goto LABEL_8;
    }
  LABEL_22:
    v20 = GameRoutine_1a09cf0(v17, v10, v18);
    if (v20 != 0) {
      if ((v20 & 0x80000000) == 0) {
        return v12;
      }
    }
    else if (v16 >= v11) {
      return v12;
    }
    v3 = v12[1];
  } while (v3 != 0);
  v4 = v12 + 1;
LABEL_29:
  v21 = v12;
  v22 = (*(__int64 (**)(_QWORD, __int64, __int64))(
      **(_QWORD**)GameData_212d480[0] + 16LL))(*GameData_212d480[0], 232, 32);
  v23 = *a3;
  v24 = a3[2];
  v12 = (__int64*)v22;
  v25 = v22;
  *(_QWORD*)(v22 + 40) = a3[1];
  *(_QWORD*)(v22 + 48) = v24;
  *(_QWORD*)(v22 + 32) = v23;
  *a3 = 0;
  a3[1] = 0;
  a3[2] = 0;
  *(_DWORD*)(v22 + 56) = *((_DWORD*)a3 + 6);
  v26 = a3[6];
  v27 = a3[4];
  *(_QWORD*)(v22 + 72) = a3[5];
  *(_QWORD*)(v22 + 80) = v26;
  *(_QWORD*)(v22 + 64) = v27;
  a3[5] = 0;
  a3[6] = 0;
  a3[4] = 0;
  v28 = a3[7];
  v29 = a3[9];
  *(_QWORD*)(v22 + 96) = a3[8];
  *(_QWORD*)(v22 + 104) = v29;
  *(_QWORD*)(v22 + 88) = v28;
  a3[8] = 0;
  a3[9] = 0;
  a3[7] = 0;
  v30 = a3[10];
  v31 = a3[12];
  *(_QWORD*)(v22 + 120) = a3[11];
  *(_QWORD*)(v22 + 128) = v31;
  *(_QWORD*)(v22 + 112) = v30;
  a3[11] = 0;
  a3[12] = 0;
  a3[10] = 0;
  v33 = a3[14];
  v32 = a3[15];
  *(_QWORD*)(v22 + 136) = a3[13];
  *(_QWORD*)(v22 + 144) = v33;
  *(_QWORD*)(v22 + 152) = v32;
  a3[14] = 0;
  a3[15] = 0;
  a3[13] = 0;
  v35 = a3[17];
  v34 = a3[18];
  *(_QWORD*)(v22 + 160) = a3[16];
  *(_QWORD*)(v22 + 168) = v35;
  *(_QWORD*)(v22 + 176) = v34;
  a3[17] = 0;
  a3[18] = 0;
  a3[16] = 0;
  v37 = a3[20];
  v36 = a3[21];
  *(_QWORD*)(v22 + 184) = a3[19];
  *(_QWORD*)(v22 + 192) = v37;
  *(_QWORD*)(v22 + 200) = v36;
  a3[20] = 0;
  a3[21] = 0;
  a3[19] = 0;
  v39 = a3[23];
  v38 = a3[24];
  *(_QWORD*)(v22 + 208) = a3[22];
  *(_QWORD*)(v22 + 216) = v39;
  *(_QWORD*)(v22 + 224) = v38;
  a3[23] = 0;
  a3[24] = 0;
  a3[22] = 0;
  *(_QWORD*)v22 = 0;
  *(_QWORD*)(v22 + 8) = 0;
  *(_QWORD*)(v22 + 16) = v21;
  *v4 = v22;
  v40 = (__int64*)**a1;
  if (v40 != nullptr) {
    *a1 = v40;
    v25 = *v4;
  }
  GameRoutine_60abc0(a1[1], v25);
  a1[2] = (__int64*)((char*)a1[2] + 1);
  return v12;
}

__int64 GameHr_1678f0(__int64 a1, __int64 a2, __int64 a3, int a4, int a5)
{
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 result;
  int v14;

  GameRoutine_126150();
  GameRoutine_1261b0(a1 + 40, v8, v9, v10, v11, v12);
  *(_QWORD*)(a1 + 5592) = GameData_2134248[0] + 2;
  *(_DWORD*)(a1 + 5600) = 0x2000;
  result = GameRoutine_112320(a1 + 5592);
  *(_QWORD*)(a1 + 5636) = 0;
  *(_QWORD*)(a1 + 5608) = 0;
  *(_QWORD*)(a1 + 5616) = 0;
  *(_QWORD*)(a1 + 5624) = 0;
  *(_DWORD*)(a1 + 5644) = a4;
  *(_QWORD*)(a1 + 5656) = 0;
  *(_QWORD*)(a1 + 5664) = 0;
  *(_QWORD*)(a1 + 5672) = 0;
  *(_QWORD*)a1 = GameData_1f66e48;
  *(_QWORD*)(a1 + 5592) = GameData_1f67380;
  *(_QWORD*)(a1 + 40) = GameData_1f66f18;
  if (a5 <= 5) {
    v14 = 5;
  }
  else {
    v14 = a5;
  }
  *(_DWORD*)(a1 + 5648) = v14;
  *(_BYTE*)(a1 + 5632) = 0;
  return result;
}

__int64 GameHr_167d30(__int64 a1)
{
  __int64 result;

  result = GameRoutine_2af320();
  *(_QWORD*)(a1 + 104) = 0;
  *(_QWORD*)(a1 + 112) = 0;
  *(_QWORD*)(a1 + 120) = 0;
  *(_QWORD*)(a1 + 128) = 0;
  *(_QWORD*)(a1 + 136) = 0;
  *(_QWORD*)(a1 + 144) = 0;
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 160) = 0;
  *(_WORD*)(a1 + 168) = 0;
  *(_QWORD*)(a1 + 176) = 0;
  *(_QWORD*)(a1 + 184) = 0;
  *(_QWORD*)a1 = GameData_1f67960;
  *(_QWORD*)(a1 + 192) = 0xBB8000000002LL;
  return result;
}

__int64 GameHr_168340(_QWORD* a1)
{
  __int64 result;

  result = GameRoutine_2af320();
  a1[13] = 0;
  a1[14] = 0;
  a1[15] = 0;
  a1[16] = 0;
  a1[17] = 0;
  a1[18] = 0;
  a1[19] = 0;
  a1[20] = 0;
  *(_QWORD*)((char*)a1 + 166) = 0;
  a1[22] = 0;
  a1[23] = 0;
  *a1 = GameData_1f684c0;
  a1[24] = 0xBB8000000002LL;
  return result;
}

__int64 GameHr_168950(__int64 a1)
{
  __int64 result;

  result = GameRoutine_2af320();
  *(_DWORD*)(a1 + 152) = 0;
  *(_WORD*)(a1 + 156) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  *(_QWORD*)(a1 + 112) = 0;
  *(_QWORD*)(a1 + 120) = 0;
  *(_QWORD*)(a1 + 128) = 0;
  *(_QWORD*)(a1 + 136) = 0;
  *(_DWORD*)(a1 + 144) = 0;
  *(_QWORD*)(a1 + 160) = 0;
  *(_QWORD*)(a1 + 168) = 0;
  *(_QWORD*)a1 = GameData_1f69008;
  *(_QWORD*)(a1 + 176) = 0xBB8000000002LL;
  *(_DWORD*)(a1 + 184) = 5000;
  return result;
}

__int64 GameHr_168f80(__int64 a1)
{
  __int64 result;

  result = GameRoutine_2af320();
  *(_QWORD*)(a1 + 104) = 0;
  *(_QWORD*)(a1 + 112) = 0;
  *(_QWORD*)(a1 + 120) = 0;
  *(_QWORD*)(a1 + 128) = 0;
  *(_QWORD*)(a1 + 136) = 0;
  *(_QWORD*)(a1 + 144) = 0;
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 158) = 0;
  *(_QWORD*)(a1 + 168) = 0;
  *(_QWORD*)(a1 + 176) = 0;
  *(_QWORD*)a1 = GameData_1f69b50;
  *(_QWORD*)(a1 + 184) = 0xBB8000000002LL;
  *(_DWORD*)(a1 + 192) = 1000;
  return result;
}

__int64 GameHr_169240(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5,
                      int a6)
{
  __int64* v8;
  __int64 result;

  GameRoutine_1678f0(a1, a2, a3, a5, a6);
  v8 = GameData_21342e8;
  *(_QWORD*)(a1 + 5680) = 0;
  *(_DWORD*)(a1 + 5688) = 0x2000;
  *(_QWORD*)a1 = v8 + 2;
  *(_QWORD*)(a1 + 5592) = v8 + 169;
  *(_QWORD*)(a1 + 40) = v8 + 28;
  result = GameRoutine_112180(a1 + 5680, a4);
  *(_QWORD*)(a1 + 5696) = 0;
  *(_DWORD*)(a1 + 5704) = 0x2000;
  return result;
}

__int64 GameHr_1692c0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                      __int64 a5, int a6, int a7)
{
  __int64* v10;

  GameRoutine_1678f0(a1, a2, a3, a6, a7);
  v10 = GameData_21342e8;
  *(_QWORD*)(a1 + 5680) = 0;
  *(_DWORD*)(a1 + 5688) = 0x2000;
  *(_QWORD*)a1 = v10 + 2;
  *(_QWORD*)(a1 + 5592) = v10 + 169;
  *(_QWORD*)(a1 + 40) = v10 + 28;
  GameRoutine_112180(a1 + 5680, a4);
  *(_QWORD*)(a1 + 5696) = 0;
  *(_DWORD*)(a1 + 5704) = 0x2000;
  return GameRoutine_112180(a1 + 5696, a5);
}

__int64 GameHr_1694e0(__int64 a1)
{
  __int64 v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
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
  __int64 result;
  __int64 v32;

  GameRoutine_2af320();
  *(_QWORD*)(a1 + 188) = 0;
  v2 = GameData_2134718[0];
  *(_WORD*)(a1 + 184) = 0;
  *(_QWORD*)(a1 + 200) = 0;
  *(_DWORD*)(a1 + 208) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  *(_QWORD*)(a1 + 112) = 0;
  *(_QWORD*)(a1 + 120) = 0;
  *(_QWORD*)(a1 + 128) = 0;
  *(_QWORD*)(a1 + 136) = 0;
  *(_QWORD*)(a1 + 144) = 0;
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 160) = 0;
  *(_QWORD*)(a1 + 168) = 0;
  *(_QWORD*)(a1 + 176) = 0;
  *(_QWORD*)a1 = v2 + 16;
  GameRoutine_1a0a040(a1 + 184, 1, 0);
  *(_QWORD*)(a1 + 224) = 0;
  *(_DWORD*)(a1 + 236) = 0;
  *(_QWORD*)(a1 + 216) = 0;
  *(_WORD*)(a1 + 232) = 0;
  v3 = GameData_212d480[0];
  v4 = (*(__int64 (**)(_QWORD, __int64, __int64))(
      **(_QWORD**)GameData_212d480[0] + 16LL))(*GameData_212d480[0], 0x4000,
                                               32);
  v8 = *(_QWORD*)(a1 + 104);
  *(_QWORD*)(a1 + 104) = v4;
  if (v8 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v3 + 24LL))(*v3);
    v4 = *(_QWORD*)(a1 + 104);
  }
  GameRoutine_1a0ba50(v4, 0, 0x4000, v5, v6, v7);
  *(_QWORD*)(a1 + 224) = 0;
  *(_WORD*)(a1 + 232) = 0;
  *(_QWORD*)(a1 + 136) = 0x473B800000001000LL;
  *(_QWORD*)(a1 + 216) = 0x100000000LL;
  *(_DWORD*)(a1 + 236) = -100;
  v9 = GameRoutine_1a0bcf0(2, 4, 0, 4096, 1);
  *(_QWORD*)(a1 + 120) = (*(__int64 (**)(__int64, __int64, __int64))(
      *(_QWORD*)*v3 + 16LL))(*v3, v9, 32);
  v10 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)*v3 + 16LL))(
      *v3, 48, 32);
  *(_BYTE*)v10 = 0;
  *(_QWORD*)(v10 + 8) = 0;
  *(_QWORD*)(v10 + 16) = 0;
  *(_DWORD*)(v10 + 24) = 2;
  *(_QWORD*)(v10 + 32) = 4;
  *(_QWORD*)(v10 + 40) = 0;
  v11 = *(_QWORD*)(a1 + 112);
  *(_QWORD*)(a1 + 112) = v10;
  if (v11 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v3 + 24LL))(*v3);
    v12 = *(_QWORD*)(a1 + 112);
  }
  else {
    v12 = v10;
  }
  v13 = *(_QWORD*)(a1 + 120);
  v14 = *(_DWORD*)(a1 + 136);
  *(_QWORD*)(v12 + 16) = v9;
  *(_QWORD*)(v12 + 8) = v13;
  *(_DWORD*)(v12 + 40) = v14;
  GameRoutine_1a0bd00(v12 + 8, 1);
  *(_BYTE*)v12 = 1;
  v15 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)*v3 + 16LL))(
      *v3, 8LL * *(unsigned int*)(a1 + 136), 32);
  v16 = *(_QWORD*)(a1 + 128);
  *(_QWORD*)(a1 + 128) = v15;
  if (v16 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v3 + 24LL))(*v3);
  }
  v17 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)*v3 + 16LL))(
      *v3, 0x8000, 32);
  v18 = *(_QWORD*)(a1 + 144);
  *(_QWORD*)(a1 + 144) = v17;
  if (v18 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v3 + 24LL))(*v3);
  }
  v19 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)*v3 + 16LL))(
      *v3, 4LL * *(unsigned int*)(a1 + 136), 32);
  v20 = *(_QWORD*)(a1 + 152);
  *(_QWORD*)(a1 + 152) = v19;
  if (v20 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v3 + 24LL))(*v3);
  }
  v21 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)*v3 + 16LL))(
      *v3, 4LL * *(unsigned int*)(a1 + 136), 32);
  v25 = *(_QWORD*)(a1 + 160);
  *(_QWORD*)(a1 + 160) = v21;
  if (v25 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v3 + 24LL))(*v3);
  }
  GameRoutine_1a0ba50(*(_QWORD*)(a1 + 152), 0, 4LL * *(unsigned int*)(a1 + 136),
                      v22, v23, v24);
  GameRoutine_1a0ba50(*(_QWORD*)(a1 + 160), 0, 4LL * *(unsigned int*)(a1 + 136),
                      v26, v27, v28);
  v29 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)*v3 + 16LL))(
      *v3, 4LL * *(unsigned int*)(a1 + 136), 32);
  v30 = *(_QWORD*)(a1 + 168);
  *(_QWORD*)(a1 + 168) = v29;
  if (v30 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v3 + 24LL))(*v3);
  }
  result = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)*v3 + 16LL))(
      *v3, 4LL * *(unsigned int*)(a1 + 136), 32);
  v32 = *(_QWORD*)(a1 + 176);
  *(_QWORD*)(a1 + 176) = result;
  if (v32 != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)*v3 + 24LL))(*v3);
  }
  return result;
}

__int64 GameHr_16a3c0(__int64 a1)
{
  __int64 v2;
  __int64* v3;
  __int64 v4;
  __int64 result;
  void (***v6)(_QWORD);

  GameRoutine_2af320();
  v2 = GameData_2134708[0];
  *(_WORD*)(a1 + 112) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  *(_QWORD*)(a1 + 116) = 0;
  *(_QWORD*)(a1 + 128) = 0;
  *(_DWORD*)(a1 + 136) = 0;
  *(_QWORD*)a1 = v2 + 16;
  GameRoutine_1a0a040(a1 + 112, 1, 0);
  *(_BYTE*)(a1 + 144) = 0;
  v3 = GameData_212d480[0];
  v4 = (*(__int64 (**)(_QWORD, __int64, __int64))(
      **(_QWORD**)GameData_212d480[0] + 16LL))(*GameData_212d480[0], 72, 32);
  result = GameRoutine_16a8a0();
  v6 = *(void (****)(_QWORD))(a1 + 104);
  *(_QWORD*)(a1 + 104) = v4;
  if (v6 != nullptr) {
    (**v6)(v6);
    return (*(__int64 (**)(__int64, void (***)(_QWORD)))(*(_QWORD*)*v3 + 24LL))(
        *v3, v6);
  }
  return result;
}

__int64 GameHr_16da80(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5,
                      int a6)
{
  __int64* v8;

  GameRoutine_1678f0(a1, a2, a3, a5, a6);
  v8 = GameData_2134378;
  *(_QWORD*)(a1 + 5680) = 0;
  *(_QWORD*)a1 = v8 + 2;
  *(_QWORD*)(a1 + 40) = v8 + 32;
  *(_QWORD*)(a1 + 5592) = v8 + 173;
  *(_DWORD*)(a1 + 5688) = 0x2000;
  return GameRoutine_112180(a1 + 5680, a4);
}

__int64 GameHr_16dcc0(__int64 a1)
{
  __int64 result;

  result = GameRoutine_2af320();
  *(_DWORD*)(a1 + 104) = 0;
  *(_QWORD*)a1 = &GameData_1f6b5c0;
  return result;
}

__int64 GameHr_16e210(__int64 a1)
{
  __int64 v2;
  __int64* v3;
  __int64 v4;
  void (***v5)(_QWORD);

  GameRoutine_2af320();
  v2 = GameData_2134758[0];
  *(_WORD*)(a1 + 128) = 0;
  *(_BYTE*)(a1 + 120) = 0;
  *(_QWORD*)(a1 + 132) = 0;
  *(_QWORD*)(a1 + 144) = 0;
  *(_DWORD*)(a1 + 152) = 0;
  *(_QWORD*)a1 = v2 + 16;
  *(_QWORD*)(a1 + 104) = 0;
  *(_QWORD*)(a1 + 112) = 0x3F8000003F800000LL;
  GameRoutine_1a0a040(a1 + 128, 1, 0);
  v3 = GameData_212d480[0];
  v4 = (*(__int64 (**)(_QWORD, __int64, __int64))(
      **(_QWORD**)GameData_212d480[0] + 16LL))(*GameData_212d480[0], 40, 32);
  GameRoutine_16e750();
  v5 = *(void (****)(_QWORD))(a1 + 104);
  *(_QWORD*)(a1 + 104) = v4;
  if (v5 != nullptr) {
    (**v5)(v5);
    (*(void (**)(__int64, void (***)(_QWORD)))(*(_QWORD*)*v3 + 24LL))(*v3, v5);
    v4 = *(_QWORD*)(a1 + 104);
  }
  GameRoutine_16b760(*(_QWORD*)(v4 + 8), 0);
  GameRoutine_16b760(*(_QWORD*)(*(_QWORD*)(a1 + 104) + 16LL), 0);
  GameRoutine_16b760(*(_QWORD*)(*(_QWORD*)(a1 + 104) + 24LL), 0);
  return GameRoutine_16b760(*(_QWORD*)(*(_QWORD*)(a1 + 104) + 32LL), 0);
}

__int64 GameHr_16f740(_QWORD* a1)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  v2 = a1 + 4096;
  GameRoutine_2af320();
  *a1 = GameData_2134798[0] + 16;
  GameRoutine_1a0ba50(a1 + 13, 0, 32772, v3, v4, v5);
  *((_WORD*)v2 + 60) = 0;
  v2 += 15;
  *((_DWORD*)v2 - 3) = 48000;
  *((_BYTE*)v2 - 8) = 0;
  *(_QWORD*)((char*)v2 + 4) = 0;
  v2[2] = 0;
  *((_DWORD*)v2 + 6) = 0;
  return GameRoutine_1a0a040(v2, 1, 0);
}

__int64 GameHr_1700c0(__int64 a1)
{
  __int64 v2;
  __int64* v3;
  __int64 v4;
  void (***v5)(_QWORD);
  __int64* v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;

  GameRoutine_2af320();
  v2 = GameData_21347b0[0];
  *(_WORD*)(a1 + 136) = 0;
  *(_QWORD*)(a1 + 140) = 0;
  *(_QWORD*)(a1 + 152) = 0;
  *(_DWORD*)(a1 + 160) = 0;
  *(_QWORD*)a1 = v2 + 16;
  *(_QWORD*)(a1 + 104) = 0;
  *(_QWORD*)(a1 + 112) = 0x3F8000003F800000LL;
  *(_QWORD*)(a1 + 120) = 0x3F8000003F800000LL;
  *(_QWORD*)(a1 + 128) = 0x3F8000003F800000LL;
  GameRoutine_1a0a040(a1 + 136, 1, 0);
  *(_QWORD*)(a1 + 192) = 0;
  *(_QWORD*)(a1 + 200) = 0;
  *(_QWORD*)(a1 + 176) = 0;
  *(_QWORD*)(a1 + 184) = 0;
  *(_QWORD*)(a1 + 168) = 0;
  v3 = GameData_212d480[0];
  v4 = (*(__int64 (**)(_QWORD, __int64, __int64))(
      **(_QWORD**)GameData_212d480[0] + 16LL))(*GameData_212d480[0], 32, 32);
  GameRoutine_172c30();
  v5 = *(void (****)(_QWORD))(a1 + 104);
  *(_QWORD*)(a1 + 104) = v4;
  if (v5 != nullptr) {
    (**v5)(v5);
    (*(void (**)(__int64, void (***)(_QWORD)))(*(_QWORD*)*v3 + 24LL))(*v3, v5);
    v4 = *(_QWORD*)(a1 + 104);
  }
  GameRoutine_16b760(*(_QWORD*)(v4 + 8), 3);
  *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 104) + 8LL) + 204LL) = 1065353216;
  v6 = *(
      __int64**)(*(_QWORD*)(*(_QWORD*)(a1 + 104) + 8LL) +
                 8LL * *(unsigned int*)(*(_QWORD*)(*(_QWORD*)(a1 + 104) + 8LL) +
                                        124LL) +
                 128);
  GameRoutine_16bdb0(v6, 60);
  GameRoutine_16be10(v6, 0.1);
  v7 = *v6;
  *((_BYTE*)v6 + 68) = 1;
  (*(void (**)(__int64*))(v7 + 16))(v6);
  GameRoutine_16b760(*(_QWORD*)(*(_QWORD*)(a1 + 104) + 16LL), 3);
  *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 104) + 16LL) + 204LL) = 1065353216;
  v8 = *(__int64**)(*(_QWORD*)(*(_QWORD*)(a1 + 104) + 16LL) +
                    8LL * *(unsigned int*)(*(_QWORD*)(*(_QWORD*)(a1 + 104) +
                                                      16LL) +
                                           124LL) +
                    128);
  GameRoutine_16bdb0(v8, 3000);
  GameRoutine_16be10(v8, 0.1);
  v9 = *v8;
  *((_BYTE*)v8 + 68) = 1;
  (*(void (**)(__int64*))(v9 + 16))(v8);
  GameRoutine_16b760(*(_QWORD*)(*(_QWORD*)(a1 + 104) + 24LL), 3);
  *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 104) + 24LL) + 204LL) = 1065353216;
  v10 = *(__int64**)(*(_QWORD*)(*(_QWORD*)(a1 + 104) + 24LL) +
                     8LL * *(unsigned int*)(*(_QWORD*)(*(_QWORD*)(a1 + 104) +
                                                       24LL) +
                                            124LL) +
                     128);
  GameRoutine_16bdb0(v10, 6000);
  GameRoutine_16be10(v10, 0.1);
  v11 = *v10;
  *((_BYTE*)v10 + 68) = 1;
  return (*(__int64 (**)(__int64*))(v11 + 16))(v10);
}

#pragma GCC visibility pop
