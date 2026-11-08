#include "decomp/pseudo_types.h"

#pragma GCC visibility push(hidden)

extern __int64 (*GameData_1f5c290[])();
extern __int64 (*GameData_1f5c348[])();
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
extern __int64* GameData_2134428;
extern __int64 GameData_2134708[26];
extern __int64 GameData_2134710[25];
extern __int64 GameData_2134718[24];
extern __int64 GameData_2134740[19];
extern __int64 GameData_2134748[18];
extern __int64 GameData_2134758[16];
extern __int64 GameData_2134760[15];
extern __int64 GameData_2134798[8];
extern __int64 GameData_21347b0[5];
extern __int64* GameData_2134820[3];
extern _UNKNOWN* GameData_2134a70;
extern __int64* GameData_2134a78;
extern __int64* GameData_2134b60;
extern _UNKNOWN* GameData_2134b88;
extern __int64* GameData_2134b90[6];
extern __int64 GameData_2198f88;
__int64 GameRoutine_112180(_QWORD, _QWORD);
__int64 GameRoutine_112290(_QWORD, float);
__int64 GameRoutine_112320(_QWORD);
__int64 GameRoutine_126150(void);
__int64 GameRoutine_1261b0(__int64, __int64, __int64, __int64, __int64,
                           __int64);
__int64 GameRoutine_149b20(__int64, _QWORD*);
__int64 GameRoutine_15d7e0(__int64 result);
__int64 GameRoutine_164fe0(_QWORD, _QWORD);
__int64 GameRoutine_165920(_QWORD);
__int64 GameRoutine_1678f0(__int64, __int64, __int64, int, int);
__int64 GameRoutine_1679b0(_QWORD*);
__int64 GameRoutine_16a8a0(void);
__int64 GameRoutine_16b090(void);
__int64 GameRoutine_16b760(_QWORD, _QWORD);
__int64 GameRoutine_16bdb0(_QWORD, _QWORD);
__int64 GameRoutine_16be10(_QWORD, float);
__int64 GameRoutine_16d650(void);
__int64 GameRoutine_16e750(void);
__int64 GameRoutine_172c30(void);
__int64 GameRoutine_190200(_QWORD, _QWORD);
__int64 GameRoutine_1905a40(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a09cf0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a09f60(_QWORD);
__int64 GameRoutine_1a09fd0(_QWORD);
__int64 GameRoutine_1a09fe0(_QWORD);
__int64 GameRoutine_1a0a040(_QWORD, _QWORD, _QWORD);
float GameRoutine_1a0a980(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          float);
__int64 GameRoutine_1a0ba50(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0bbc0(_QWORD);
__int64 GameRoutine_1a0bcf0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0bd00(_QWORD, _QWORD);
__int64 GameRoutine_278770(_QWORD, _QWORD);
__int64 GameRoutine_27b0d0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_286270(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_2878e0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_2af320(void);
__int64 GameRoutine_2af380(_QWORD);
__int64 GameRoutine_60abc0(_QWORD, _QWORD);

__int64 GameHr_15e8a0(__int64 a1, __int64 a2, int a3)
{
  unsigned int v4;
  __int64 v5;
  __int64 result;

  v4 = a2;
  v5 = a1 + 4088LL * a3;
  result = GameRoutine_2878e0(v5 + 3232, a2, 0xFFFFFFFFLL);
  if ((result & 1) == 0) {
    return GameRoutine_286270(v5 + 3232, v4, a1 + 4152, 0xFFFFFFFFLL, 0);
  }
  return result;
}

__int64 GameHr_160ba0(__int64 a1, __int64 a2)
{
  __int64 result;
  __int64* v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  float v11;
  __int64 v12;
  __int64 v13;
  __int64 i;
  float v15;
  void (***v16)(_QWORD, _QWORD);
  void (***v17)(_QWORD, _QWORD);
  void (***v18)(_QWORD, _QWORD);
  void (***v19)(_QWORD, _QWORD);
  void (**v20)(_QWORD, _QWORD);
  bool v21;
  __int64 v22;
  void (***v23)(_QWORD, _QWORD);
  void (***v24)(_QWORD, _QWORD);
  __int64 v25;

  result =
      (*(__int64 (**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 232LL))(
          a1, *(unsigned int*)(a2 + 5768), *(unsigned int*)(a2 + 5772),
          *(_QWORD*)(a2 + 5776));
  if ((result & 1) != 0) {
    v5 = GameData_212d480[0];
    result = (*(__int64 (**)(_QWORD, __int64, __int64))(
        **(_QWORD**)GameData_212d480[0] + 16LL))(*GameData_212d480[0], 4352,
                                                 32);
    if (result != 0) {
      v6 = *(_DWORD*)(a2 + 5772);
      v7 = *(unsigned int*)(a2 + 5768);
      v8 = result;
      LODWORD(v23) = 0;
      if ((unsigned int)GameRoutine_27b0d0(a1 + 4088LL * v6 + 2392, result,
                                           &v23, 64, v7) != 0) {
        v9 = 0xFFFFFFFFLL;
      }
      else {
        v9 = (unsigned int)v23;
      }
      if ((v9 & 0x80000000) == 0) {
        v10 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a2 + 5664) + 88LL))(
            *(_QWORD*)(a2 + 5664));
        v24 = nullptr;
        v25 = 0;
        v23 = nullptr;
        if ((_DWORD)v9 != 0) {
          v11 = (float)v10;
          GameRoutine_164fe0(&v23, v9);
          v12 = v8 + 4;
          v13 = 4;
          for (i = v9; i != 0; --i) {
            v15 = (float)*(unsigned int*)(v12 - 4) / v11;
            GameRoutine_190200(&v23[v13 - 3], v12);
            v12 += 68;
            *(float*)&v23[v13] = v15 * 1000.0;
            v13 += 5;
          }
        }
        GameRoutine_149b20(a2, &v23);
        *(_DWORD*)(a2 + 6032) = v9;
        v16 = v23;
        if (v23 != nullptr) {
          v17 = v23;
          if (v23 != v24) {
            v18 = v24 - 5;
            v19 = v24 - 5;
            do {
              v20 = *v19;
              v19 -= 5;
              (*v20)(v18, v17);
              v21 = v18 == v16;
              v18 = v19;
            } while (!v21);
            v17 = v23;
          }
          v22 = *v5;
          v24 = v16;
          (*(void (**)(__int64, _QWORD))(*(_QWORD*)v22 + 24LL))(v22, v17);
        }
      }
      return (*(__int64 (**)(__int64, __int64))(*(_QWORD*)*v5 + 24LL))(*v5, v8);
    }
  }
  return result;
}

_QWORD* GameHr_162df0(_QWORD* result)
{
  __int64 v1;

  v1 = result[5];
  *result = GameData_1f5c290;
  if (v1 != 0) {
    result[6] = v1;
    return (_QWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)GameData_2198f88 +
                                              24LL))(GameData_2198f88);
  }
  return result;
}

__int64 GameHr_162fb0(__int64 result)
{
  *(_QWORD*)result = GameData_1f5c348;
  if ((*(_BYTE*)(result + 376) & 1) != 0) {
    return (*(__int64 (**)(_QWORD, _QWORD))(**(_QWORD**)GameData_212d480[0] +
                                            24LL))(*GameData_212d480[0],
                                                   *(_QWORD*)(result + 392));
  }
  return result;
}

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

__int64* GameHr_165fb0()
{
  if ((atomic_load_explicit((atomic_uchar* volatile)GameData_2134b88,
                            memory_order_acquire) &
       1) != 0) {
    return GameData_2134b90[0];
  }
  if ((unsigned int)GameRoutine_1a09fd0(GameData_2134b88) != 0) {
    *GameData_2134b90[0] = 0;
    GameRoutine_1a09fe0(GameData_2134b88);
  }
  return GameData_2134b90[0];
}

_QWORD* GameHr_166010(_QWORD* result)
{
  _QWORD* v1;
  void (***v2)(_QWORD);
  __int64* v3;
  void (***v4)(_QWORD);
  void (***v5)(_QWORD);
  void (***v6)(_QWORD);

  v1 = result;
  v2 = (void (***)(_QWORD))result[1];
  *result = GameData_2134820[0] + 2;
  v3 = GameData_212d480[0];
  if (v2 != nullptr) {
    result[1] = 0;
    (**v2)(v2);
    result = (_QWORD*)(*(__int64 (**)(__int64, void (***)(_QWORD)))(
        *(_QWORD*)*v3 + 24LL))(*v3, v2);
  }
  v4 = (void (***)(_QWORD))v1[2];
  if (v4 != nullptr) {
    v1[2] = 0;
    (**v4)(v4);
    result = (_QWORD*)(*(__int64 (**)(__int64, void (***)(_QWORD)))(
        *(_QWORD*)*v3 + 24LL))(*v3, v4);
    v5 = (void (***)(_QWORD))v1[2];
    v1[2] = 0;
    if (v5 != nullptr) {
      (**v5)(v5);
      result = (_QWORD*)(*(__int64 (**)(__int64, void (***)(_QWORD)))(
          *(_QWORD*)*v3 + 24LL))(*v3, v5);
    }
  }
  v6 = (void (***)(_QWORD))v1[1];
  v1[1] = 0;
  if (v6 != nullptr) {
    (**v6)(v6);
    return (_QWORD*)(*(__int64 (**)(__int64, void (***)(_QWORD)))(
        *(_QWORD*)*v3 + 24LL))(*v3, v6);
  }
  return result;
}

__int64* GameHr_166160(__int64 a1, float a2)
{
  __int64* result;
  float v4;
  __int64 v5;
  float v6;
  unsigned __int8 explicit;
  __int64* v8;
  __int64 v10;
  int v11;
  __int64* v12;

  result = (__int64*)GameRoutine_112290(a1, a2);
  if (result != nullptr) {
    v5 = GameRoutine_112290(a1, v4);
    result = (__int64*)(*(__int64 (**)(__int64))(*(_QWORD*)(v5 - 5592) + 64LL))(
        v5 - 5592);
    explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_2134a70,
                                    memory_order_acquire);
    v8 = GameData_2134a78;
    if ((explicit & 1) == 0) {
      v12 = result;
      v11 = GameRoutine_1a09fd0(GameData_2134a70);
      v8 = GameData_2134a78;
      result = v12;
      if (v11 != 0) {
        *GameData_2134a78 = GameRoutine_165920(v12);
        GameRoutine_1a09fe0(GameData_2134a70);
        v8 = GameData_2134a78;
        result = v12;
      }
    }
    if (result == v8) {
      goto LABEL_10;
    }
    do {
      result = (__int64*)*result;
    } while (result != v8 && result != nullptr);
    if (result != nullptr) {
    LABEL_10:
      v10 = GameRoutine_112290(a1, v6);
      if (v10 != 0) {
        return (__int64*)(v10 - 5592);
      }
      else {
        return nullptr;
      }
    }
  }
  return result;
}

__int64 GameHr_167070(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 result;

  v2 = *a2;
  result = GameRoutine_278770(*(_QWORD*)(a1 + 8) + 32LL,
                              *(unsigned int*)(*a2 + 5768));
  if ((_DWORD)result != -1) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 264LL))(v2);
  }
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

__int64 GameHr_169840(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;

  v2 = GameData_2134718[0];
  v3 = a1[22];
  a1[22] = 0;
  *a1 = v2 + 16;
  v4 = GameData_212d480[0];
  if (v3 != 0) {
    (*(void (**)(_QWORD))(**(_QWORD**)GameData_212d480[0] + 24LL))(
        *GameData_212d480[0]);
  }
  v5 = a1[21];
  a1[21] = 0;
  if (v5 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v4 + 24LL))(*v4);
  }
  v6 = a1[20];
  a1[20] = 0;
  if (v6 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v4 + 24LL))(*v4);
  }
  v7 = a1[19];
  a1[19] = 0;
  if (v7 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v4 + 24LL))(*v4);
  }
  v8 = a1[18];
  a1[18] = 0;
  if (v8 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v4 + 24LL))(*v4);
  }
  v9 = a1[14];
  a1[14] = 0;
  if (v9 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v4 + 24LL))(*v4);
  }
  v10 = a1[16];
  a1[16] = 0;
  if (v10 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v4 + 24LL))(*v4);
  }
  if (a1[15] != 0) {
    v11 = *v4;
    a1[15] = 0;
    (*(void (**)(__int64))(*(_QWORD*)v11 + 24LL))(v11);
  }
  v12 = a1[13];
  a1[13] = 0;
  if (v12 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v4 + 24LL))(*v4);
  }
  GameRoutine_1a09f60(a1 + 23);
  v13 = a1[22];
  a1[22] = 0;
  if (v13 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v4 + 24LL))(*v4);
  }
  v14 = a1[21];
  a1[21] = 0;
  if (v14 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v4 + 24LL))(*v4);
  }
  v15 = a1[20];
  a1[20] = 0;
  if (v15 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v4 + 24LL))(*v4);
  }
  v16 = a1[19];
  a1[19] = 0;
  if (v16 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v4 + 24LL))(*v4);
  }
  v17 = a1[18];
  a1[18] = 0;
  if (v17 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v4 + 24LL))(*v4);
  }
  v18 = a1[16];
  a1[16] = 0;
  if (v18 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v4 + 24LL))(*v4);
  }
  v19 = a1[14];
  a1[14] = 0;
  if (v19 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v4 + 24LL))(*v4);
  }
  v20 = a1[13];
  a1[13] = 0;
  if (v20 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v4 + 24LL))(*v4);
  }
  return GameRoutine_2af380(a1);
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

__int64 GameHr_16a490(_QWORD* a1)
{
  __int64 v2;
  void (***v3)(_QWORD);
  __int64* v4;
  void (***v5)(_QWORD);

  v2 = GameData_2134708[0];
  v3 = (void (***)(_QWORD))a1[13];
  a1[13] = 0;
  *a1 = v2 + 16;
  v4 = GameData_212d480[0];
  if (v3 != nullptr) {
    (**v3)(v3);
    (*(void (**)(__int64, void (***)(_QWORD)))(*(_QWORD*)*v4 + 24LL))(*v4, v3);
  }
  GameRoutine_1a09f60(a1 + 14);
  v5 = (void (***)(_QWORD))a1[13];
  a1[13] = 0;
  if (v5 != nullptr) {
    (**v5)(v5);
    (*(void (**)(__int64, void (***)(_QWORD)))(*(_QWORD*)*v4 + 24LL))(*v4, v5);
  }
  return GameRoutine_2af380(a1);
}

__int64 GameHr_16a8a0(_QWORD* a1)
{
  __int64 v2;
  __int64* v3;
  __int64* v4;
  __int64 v5;
  void (***v6)(_QWORD);
  __int64 v7;
  void (***v8)(_QWORD);
  __int64 v9;
  void (***v10)(_QWORD);
  __int64 v11;
  void (***v12)(_QWORD);
  __int64 v13;
  void (***v14)(_QWORD);
  __int64 v15;
  void (***v16)(_QWORD);
  __int64 v17;
  void (***v18)(_QWORD);
  __int64 v19;
  void (***v20)(_QWORD);
  __int64 i;
  void (**v22)(_QWORD);
  __int64 result;
  void (***v24)(_QWORD);

  v2 = GameData_2134710[0];
  a1[1] = 0;
  v3 = a1 + 1;
  a1[2] = 0;
  a1[3] = 0;
  a1[4] = 0;
  a1[5] = 0;
  a1[6] = 0;
  a1[7] = 0;
  a1[8] = 0;
  *a1 = v2 + 16;
  v4 = GameData_212d480[0];
  v5 = (*(__int64 (**)(_QWORD, __int64, __int64))(
      **(_QWORD**)GameData_212d480[0] + 16LL))(*GameData_212d480[0], 248, 32);
  GameRoutine_16b090();
  v6 = (void (***)(_QWORD))*v3;
  *v3 = v5;
  if (v6 != nullptr) {
    (**v6)(v6);
    (*(void (**)(__int64, void (***)(_QWORD)))(*(_QWORD*)*v4 + 24LL))(*v4, v6);
  }
  v7 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)*v4 + 16LL))(
      *v4, 248, 32);
  GameRoutine_16b090();
  v8 = (void (***)(_QWORD))a1[2];
  a1[2] = v7;
  if (v8 != nullptr) {
    (**v8)(v8);
    (*(void (**)(__int64, void (***)(_QWORD)))(*(_QWORD*)*v4 + 24LL))(*v4, v8);
  }
  v9 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)*v4 + 16LL))(
      *v4, 248, 32);
  GameRoutine_16b090();
  v10 = (void (***)(_QWORD))a1[3];
  a1[3] = v9;
  if (v10 != nullptr) {
    (**v10)(v10);
    (*(void (**)(__int64, void (***)(_QWORD)))(*(_QWORD*)*v4 + 24LL))(*v4, v10);
  }
  v11 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)*v4 + 16LL))(
      *v4, 248, 32);
  GameRoutine_16b090();
  v12 = (void (***)(_QWORD))a1[4];
  a1[4] = v11;
  if (v12 != nullptr) {
    (**v12)(v12);
    (*(void (**)(__int64, void (***)(_QWORD)))(*(_QWORD*)*v4 + 24LL))(*v4, v12);
  }
  v13 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)*v4 + 16LL))(
      *v4, 248, 32);
  GameRoutine_16b090();
  v14 = (void (***)(_QWORD))a1[5];
  a1[5] = v13;
  if (v14 != nullptr) {
    (**v14)(v14);
    (*(void (**)(__int64, void (***)(_QWORD)))(*(_QWORD*)*v4 + 24LL))(*v4, v14);
  }
  v15 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)*v4 + 16LL))(
      *v4, 248, 32);
  GameRoutine_16b090();
  v16 = (void (***)(_QWORD))a1[6];
  a1[6] = v15;
  if (v16 != nullptr) {
    (**v16)(v16);
    (*(void (**)(__int64, void (***)(_QWORD)))(*(_QWORD*)*v4 + 24LL))(*v4, v16);
  }
  v17 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)*v4 + 16LL))(
      *v4, 248, 32);
  GameRoutine_16b090();
  v18 = (void (***)(_QWORD))a1[7];
  a1[7] = v17;
  if (v18 != nullptr) {
    (**v18)(v18);
    (*(void (**)(__int64, void (***)(_QWORD)))(*(_QWORD*)*v4 + 24LL))(*v4, v18);
  }
  v19 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)*v4 + 16LL))(
      *v4, 248, 32);
  GameRoutine_16b090();
  v20 = (void (***)(_QWORD))a1[8];
  a1[8] = v19;
  if (v20 != nullptr) {
    (**v20)(v20);
    (*(void (**)(__int64, void (***)(_QWORD)))(*(_QWORD*)*v4 + 24LL))(*v4, v20);
  }
  for (i = 0; i != 8; ++i) {
    *(_WORD*)(*(_QWORD*)(v3[i] + 128) + 8LL) = -17536;
    *(_WORD*)(*(_QWORD*)(v3[i] + 136) + 8LL) = -17536;
    *(_WORD*)(*(_QWORD*)(v3[i] + 144) + 8LL) = -17536;
    *(_WORD*)(*(_QWORD*)(v3[i] + 152) + 8LL) = -17536;
    *(_WORD*)(*(_QWORD*)(v3[i] + 160) + 8LL) = -17536;
    *(_WORD*)(*(_QWORD*)(v3[i] + 168) + 8LL) = -17536;
    *(_WORD*)(*(_QWORD*)(v3[i] + 176) + 8LL) = -17536;
    *(_WORD*)(*(_QWORD*)(v3[i] + 184) + 8LL) = -17536;
    *(_WORD*)(*(_QWORD*)(v3[i] + 192) + 8LL) = -17536;
    v22 = *(void (***)(_QWORD))(v3[i] + 8LL * *(unsigned int*)(v3[i] + 124) +
                                128);
    result = (*((__int64 (**)(_QWORD))*v22 + 2))(v22);
    *(_DWORD*)(v3[i] + 208) = 0;
    *(_DWORD*)(v3[i] + 212) = 0;
    *(_DWORD*)(v3[i] + 216) = 0;
    *(_DWORD*)(v3[i] + 220) = 0;
    v24 = (void (***)(_QWORD))v3[i];
    *((_DWORD*)v24 + 51) = 0;
  }
  return result;
}

_QWORD* GameHr_16ac50(_QWORD* result)
{
  _QWORD* v1;
  void (***v2)(_QWORD);
  __int64* v3;
  void (***v4)(_QWORD);
  void (***v5)(_QWORD);
  void (***v6)(_QWORD);
  void (***v7)(_QWORD);
  void (***v8)(_QWORD);
  void (***v9)(_QWORD);
  void (***v10)(_QWORD);
  void (***v11)(_QWORD);
  void (***v12)(_QWORD);
  void (***v13)(_QWORD);
  void (***v14)(_QWORD);
  void (***v15)(_QWORD);
  void (***v16)(_QWORD);
  void (***v17)(_QWORD);
  void (***v18)(_QWORD);

  v1 = result;
  v2 = (void (***)(_QWORD))result[1];
  *result = GameData_2134710[0] + 16;
  result[1] = 0;
  v3 = GameData_212d480[0];
  if (v2 != nullptr) {
    (**v2)(v2);
    result = (_QWORD*)(*(__int64 (**)(__int64, void (***)(_QWORD)))(
        *(_QWORD*)*v3 + 24LL))(*v3, v2);
  }
  v4 = (void (***)(_QWORD))v1[2];
  v1[2] = 0;
  if (v4 != nullptr) {
    (**v4)(v4);
    result = (_QWORD*)(*(__int64 (**)(__int64, void (***)(_QWORD)))(
        *(_QWORD*)*v3 + 24LL))(*v3, v4);
  }
  v5 = (void (***)(_QWORD))v1[3];
  v1[3] = 0;
  if (v5 != nullptr) {
    (**v5)(v5);
    result = (_QWORD*)(*(__int64 (**)(__int64, void (***)(_QWORD)))(
        *(_QWORD*)*v3 + 24LL))(*v3, v5);
  }
  v6 = (void (***)(_QWORD))v1[4];
  v1[4] = 0;
  if (v6 != nullptr) {
    (**v6)(v6);
    result = (_QWORD*)(*(__int64 (**)(__int64, void (***)(_QWORD)))(
        *(_QWORD*)*v3 + 24LL))(*v3, v6);
  }
  v7 = (void (***)(_QWORD))v1[5];
  v1[5] = 0;
  if (v7 != nullptr) {
    (**v7)(v7);
    result = (_QWORD*)(*(__int64 (**)(__int64, void (***)(_QWORD)))(
        *(_QWORD*)*v3 + 24LL))(*v3, v7);
  }
  v8 = (void (***)(_QWORD))v1[6];
  v1[6] = 0;
  if (v8 != nullptr) {
    (**v8)(v8);
    result = (_QWORD*)(*(__int64 (**)(__int64, void (***)(_QWORD)))(
        *(_QWORD*)*v3 + 24LL))(*v3, v8);
  }
  v9 = (void (***)(_QWORD))v1[7];
  v1[7] = 0;
  if (v9 != nullptr) {
    (**v9)(v9);
    result = (_QWORD*)(*(__int64 (**)(__int64, void (***)(_QWORD)))(
        *(_QWORD*)*v3 + 24LL))(*v3, v9);
  }
  v10 = (void (***)(_QWORD))v1[8];
  v1[8] = 0;
  if (v10 != nullptr) {
    (**v10)(v10);
    result = (_QWORD*)(*(__int64 (**)(__int64, void (***)(_QWORD)))(
        *(_QWORD*)*v3 + 24LL))(*v3, v10);
    v11 = (void (***)(_QWORD))v1[8];
    v1[8] = 0;
    if (v11 != nullptr) {
      (**v11)(v11);
      result = (_QWORD*)(*(__int64 (**)(__int64, void (***)(_QWORD)))(
          *(_QWORD*)*v3 + 24LL))(*v3, v11);
    }
    v12 = (void (***)(_QWORD))v1[7];
    v1[7] = 0;
    if (v12 != nullptr) {
      goto LABEL_19;
    }
  }
  else {
    v12 = (void (***)(_QWORD))v1[7];
    v1[7] = 0;
    v1[8] = 0;
    if (v12 != nullptr) {
    LABEL_19:
      (**v12)(v12);
      result = (_QWORD*)(*(__int64 (**)(__int64, void (***)(_QWORD)))(
          *(_QWORD*)*v3 + 24LL))(*v3, v12);
    }
  }
  v13 = (void (***)(_QWORD))v1[6];
  v1[6] = 0;
  if (v13 != nullptr) {
    (**v13)(v13);
    result = (_QWORD*)(*(__int64 (**)(__int64, void (***)(_QWORD)))(
        *(_QWORD*)*v3 + 24LL))(*v3, v13);
  }
  v14 = (void (***)(_QWORD))v1[5];
  v1[5] = 0;
  if (v14 != nullptr) {
    (**v14)(v14);
    result = (_QWORD*)(*(__int64 (**)(__int64, void (***)(_QWORD)))(
        *(_QWORD*)*v3 + 24LL))(*v3, v14);
  }
  v15 = (void (***)(_QWORD))v1[4];
  v1[4] = 0;
  if (v15 != nullptr) {
    (**v15)(v15);
    result = (_QWORD*)(*(__int64 (**)(__int64, void (***)(_QWORD)))(
        *(_QWORD*)*v3 + 24LL))(*v3, v15);
  }
  v16 = (void (***)(_QWORD))v1[3];
  v1[3] = 0;
  if (v16 != nullptr) {
    (**v16)(v16);
    result = (_QWORD*)(*(__int64 (**)(__int64, void (***)(_QWORD)))(
        *(_QWORD*)*v3 + 24LL))(*v3, v16);
  }
  v17 = (void (***)(_QWORD))v1[2];
  v1[2] = 0;
  if (v17 != nullptr) {
    (**v17)(v17);
    result = (_QWORD*)(*(__int64 (**)(__int64, void (***)(_QWORD)))(
        *(_QWORD*)*v3 + 24LL))(*v3, v17);
  }
  v18 = (void (***)(_QWORD))v1[1];
  v1[1] = 0;
  if (v18 != nullptr) {
    (**v18)(v18);
    return (_QWORD*)(*(__int64 (**)(__int64, void (***)(_QWORD)))(
        *(_QWORD*)*v3 + 24LL))(*v3, v18);
  }
  return result;
}

__int64 GameHr_16cf50(__int64 a1)
{
  __int64 v2;
  __int64* v3;
  __int64* v4;
  __int64 v5;
  void (***v6)(_QWORD);

  GameRoutine_2af320();
  v2 = GameData_2134740[0];
  *(_WORD*)(a1 + 128) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  v3 = (__int64*)(a1 + 104);
  *(_QWORD*)(a1 + 132) = 0;
  *(_QWORD*)(a1 + 144) = 0;
  *(_DWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 112) = 0;
  *(_BYTE*)(a1 + 120) = 0;
  *(_QWORD*)a1 = v2 + 16;
  GameRoutine_1a0a040(a1 + 128, 1, 0);
  v4 = GameData_212d480[0];
  v5 = (*(__int64 (**)(_QWORD, __int64, __int64))(
      **(_QWORD**)GameData_212d480[0] + 16LL))(*GameData_212d480[0], 24, 32);
  GameRoutine_16d650();
  v6 = (void (***)(_QWORD))*v3;
  *v3 = v5;
  if (v6 != nullptr) {
    (**v6)(v6);
    (*(void (**)(__int64, void (***)(_QWORD)))(*(_QWORD*)*v4 + 24LL))(*v4, v6);
    v5 = *v3;
  }
  GameRoutine_16b760(*(_QWORD*)(v5 + 8), 0);
  return GameRoutine_16b760(*(_QWORD*)(*v3 + 16), 0);
}

__int64 GameHr_16d040(_QWORD* a1)
{
  __int64 v2;
  void (***v3)(_QWORD);
  __int64* v4;
  void (***v5)(_QWORD);

  v2 = GameData_2134740[0];
  v3 = (void (***)(_QWORD))a1[13];
  a1[13] = 0;
  *a1 = v2 + 16;
  v4 = GameData_212d480[0];
  if (v3 != nullptr) {
    (**v3)(v3);
    (*(void (**)(__int64, void (***)(_QWORD)))(*(_QWORD*)*v4 + 24LL))(*v4, v3);
  }
  GameRoutine_1a09f60(a1 + 16);
  v5 = (void (***)(_QWORD))a1[13];
  a1[13] = 0;
  if (v5 != nullptr) {
    (**v5)(v5);
    (*(void (**)(__int64, void (***)(_QWORD)))(*(_QWORD*)*v4 + 24LL))(*v4, v5);
  }
  return GameRoutine_2af380(a1);
}

__int64 GameHr_16d650(_QWORD* a1)
{
  __int64 v2;
  __int64* v3;
  __int64 v4;
  void (***v5)(_QWORD);
  __int64 v6;
  void (***v7)(_QWORD);
  __int64 v8;
  __int64 v9;
  __int64 result;

  v2 = GameData_2134748[0];
  a1[2] = 0;
  *a1 = v2 + 16;
  a1[1] = 0;
  v3 = GameData_212d480[0];
  v4 = (*(__int64 (**)(_QWORD, __int64, __int64))(
      **(_QWORD**)GameData_212d480[0] + 16LL))(*GameData_212d480[0], 248, 32);
  GameRoutine_16b090();
  v5 = (void (***)(_QWORD))a1[1];
  a1[1] = v4;
  if (v5 != nullptr) {
    (**v5)(v5);
    (*(void (**)(__int64, void (***)(_QWORD)))(*(_QWORD*)*v3 + 24LL))(*v3, v5);
  }
  v6 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)*v3 + 16LL))(
      *v3, 248, 32);
  GameRoutine_16b090();
  v7 = (void (***)(_QWORD))a1[2];
  a1[2] = v6;
  if (v7 != nullptr) {
    (**v7)(v7);
    (*(void (**)(__int64, void (***)(_QWORD)))(*(_QWORD*)*v3 + 24LL))(*v3, v7);
  }
  *(_WORD*)(*(_QWORD*)(a1[1] + 128LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[1] + 136LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[1] + 144LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[1] + 152LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[1] + 160LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[1] + 168LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[1] + 176LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[1] + 184LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[1] + 192LL) + 8LL) = -17536;
  v8 = *(_QWORD*)(a1[1] + 8LL * *(unsigned int*)(a1[1] + 124LL) + 128);
  (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
  *(_DWORD*)(a1[1] + 204LL) = 0;
  *(_WORD*)(*(_QWORD*)(a1[2] + 128LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[2] + 136LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[2] + 144LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[2] + 152LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[2] + 160LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[2] + 168LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[2] + 176LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[2] + 184LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[2] + 192LL) + 8LL) = -17536;
  v9 = *(_QWORD*)(a1[2] + 8LL * *(unsigned int*)(a1[2] + 124LL) + 128);
  result = (*(__int64 (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
  *(_DWORD*)(a1[2] + 204LL) = 0;
  return result;
}

_QWORD* GameHr_16d860(_QWORD* result)
{
  _QWORD* v1;
  void (***v2)(_QWORD);
  __int64* v3;
  void (***v4)(_QWORD);
  void (***v5)(_QWORD);
  void (***v6)(_QWORD);

  v1 = result;
  v2 = (void (***)(_QWORD))result[1];
  *result = GameData_2134748[0] + 16;
  result[1] = 0;
  v3 = GameData_212d480[0];
  if (v2 != nullptr) {
    (**v2)(v2);
    result = (_QWORD*)(*(__int64 (**)(__int64, void (***)(_QWORD)))(
        *(_QWORD*)*v3 + 24LL))(*v3, v2);
  }
  v4 = (void (***)(_QWORD))v1[2];
  v1[2] = 0;
  if (v4 != nullptr) {
    (**v4)(v4);
    result = (_QWORD*)(*(__int64 (**)(__int64, void (***)(_QWORD)))(
        *(_QWORD*)*v3 + 24LL))(*v3, v4);
    v5 = (void (***)(_QWORD))v1[2];
    v1[2] = 0;
    if (v5 != nullptr) {
      (**v5)(v5);
      result = (_QWORD*)(*(__int64 (**)(__int64, void (***)(_QWORD)))(
          *(_QWORD*)*v3 + 24LL))(*v3, v5);
    }
    v6 = (void (***)(_QWORD))v1[1];
    v1[1] = 0;
    if (v6 != nullptr) {
      goto LABEL_7;
    }
  }
  else {
    v6 = (void (***)(_QWORD))v1[1];
    v1[1] = 0;
    v1[2] = 0;
    if (v6 != nullptr) {
    LABEL_7:
      (**v6)(v6);
      return (_QWORD*)(*(__int64 (**)(__int64, void (***)(_QWORD)))(
          *(_QWORD*)*v3 + 24LL))(*v3, v6);
    }
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

__int64 GameHr_16e310(_QWORD* a1)
{
  __int64 v2;
  void (***v3)(_QWORD);
  __int64* v4;
  void (***v5)(_QWORD);

  v2 = GameData_2134758[0];
  v3 = (void (***)(_QWORD))a1[13];
  a1[13] = 0;
  *a1 = v2 + 16;
  v4 = GameData_212d480[0];
  if (v3 != nullptr) {
    (**v3)(v3);
    (*(void (**)(__int64, void (***)(_QWORD)))(*(_QWORD*)*v4 + 24LL))(*v4, v3);
  }
  GameRoutine_1a09f60(a1 + 16);
  v5 = (void (***)(_QWORD))a1[13];
  a1[13] = 0;
  if (v5 != nullptr) {
    (**v5)(v5);
    (*(void (**)(__int64, void (***)(_QWORD)))(*(_QWORD*)*v4 + 24LL))(*v4, v5);
  }
  return GameRoutine_2af380(a1);
}

__int64 GameHr_16e750(_QWORD* a1)
{
  __int64 v2;
  __int64* v3;
  __int64 v4;
  void (***v5)(_QWORD);
  __int64 v6;
  void (***v7)(_QWORD);
  __int64 v8;
  void (***v9)(_QWORD);
  __int64 v10;
  void (***v11)(_QWORD);
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 result;
  __int64 vars0;
  __int64 _8;
  __int64 vars10;
  __int64 _18;

  v2 = GameData_2134760[0];
  a1[2] = 0;
  a1[3] = 0;
  a1[4] = 0;
  *a1 = v2 + 16;
  a1[1] = 0;
  v3 = GameData_212d480[0];
  v4 = (*(__int64 (**)(_QWORD, __int64, __int64))(
      **(_QWORD**)GameData_212d480[0] + 16LL))(*GameData_212d480[0], 248, 32);
  GameRoutine_16b090();
  v5 = (void (***)(_QWORD))a1[1];
  a1[1] = v4;
  if (v5 != nullptr) {
    (**v5)(v5);
    (*(void (**)(__int64, void (***)(_QWORD)))(*(_QWORD*)*v3 + 24LL))(*v3, v5);
  }
  v6 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)*v3 + 16LL))(
      *v3, 248, 32);
  GameRoutine_16b090();
  v7 = (void (***)(_QWORD))a1[2];
  a1[2] = v6;
  if (v7 != nullptr) {
    (**v7)(v7);
    (*(void (**)(__int64, void (***)(_QWORD)))(*(_QWORD*)*v3 + 24LL))(*v3, v7);
  }
  v8 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)*v3 + 16LL))(
      *v3, 248, 32);
  GameRoutine_16b090();
  v9 = (void (***)(_QWORD))a1[3];
  a1[3] = v8;
  if (v9 != nullptr) {
    (**v9)(v9);
    (*(void (**)(__int64, void (***)(_QWORD)))(*(_QWORD*)*v3 + 24LL))(*v3, v9);
  }
  v10 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)*v3 + 16LL))(
      *v3, 248, 32);
  GameRoutine_16b090();
  v11 = (void (***)(_QWORD))a1[4];
  a1[4] = v10;
  if (v11 != nullptr) {
    (**v11)(v11);
    (*(void (**)(__int64, void (***)(_QWORD)))(*(_QWORD*)*v3 + 24LL))(*v3, v11);
  }
  vars10 = vars0;
  _18 = _8;
  *(_WORD*)(*(_QWORD*)(a1[1] + 128LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[1] + 136LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[1] + 144LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[1] + 152LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[1] + 160LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[1] + 168LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[1] + 176LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[1] + 184LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[1] + 192LL) + 8LL) = -17536;
  v12 = *(_QWORD*)(a1[1] + 8LL * *(unsigned int*)(a1[1] + 124LL) + 128);
  (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
  *(_DWORD*)(a1[1] + 204LL) = 0;
  *(_WORD*)(*(_QWORD*)(a1[2] + 128LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[2] + 136LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[2] + 144LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[2] + 152LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[2] + 160LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[2] + 168LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[2] + 176LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[2] + 184LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[2] + 192LL) + 8LL) = -17536;
  v13 = *(_QWORD*)(a1[2] + 8LL * *(unsigned int*)(a1[2] + 124LL) + 128);
  (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
  *(_DWORD*)(a1[2] + 204LL) = 0;
  *(_WORD*)(*(_QWORD*)(a1[3] + 128LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[3] + 136LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[3] + 144LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[3] + 152LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[3] + 160LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[3] + 168LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[3] + 176LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[3] + 184LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[3] + 192LL) + 8LL) = -17536;
  v14 = *(_QWORD*)(a1[3] + 8LL * *(unsigned int*)(a1[3] + 124LL) + 128);
  (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
  *(_DWORD*)(a1[3] + 204LL) = 0;
  *(_WORD*)(*(_QWORD*)(a1[4] + 128LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[4] + 136LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[4] + 144LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[4] + 152LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[4] + 160LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[4] + 168LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[4] + 176LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[4] + 184LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[4] + 192LL) + 8LL) = -17536;
  v15 = *(_QWORD*)(a1[4] + 8LL * *(unsigned int*)(a1[4] + 124LL) + 128);
  result = (*(__int64 (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
  *(_DWORD*)(a1[4] + 204LL) = 0;
  return result;
}

_QWORD* GameHr_16eb60(_QWORD* result)
{
  _QWORD* v1;
  void (***v2)(_QWORD);
  __int64* v3;
  void (***v4)(_QWORD);
  void (***v5)(_QWORD);
  void (***v6)(_QWORD);
  void (***v7)(_QWORD);
  void (***v8)(_QWORD);
  void (***v9)(_QWORD);
  void (***v10)(_QWORD);

  v1 = result;
  v2 = (void (***)(_QWORD))result[1];
  *result = GameData_2134760[0] + 16;
  result[1] = 0;
  v3 = GameData_212d480[0];
  if (v2 != nullptr) {
    (**v2)(v2);
    result = (_QWORD*)(*(__int64 (**)(__int64, void (***)(_QWORD)))(
        *(_QWORD*)*v3 + 24LL))(*v3, v2);
  }
  v4 = (void (***)(_QWORD))v1[2];
  v1[2] = 0;
  if (v4 != nullptr) {
    (**v4)(v4);
    result = (_QWORD*)(*(__int64 (**)(__int64, void (***)(_QWORD)))(
        *(_QWORD*)*v3 + 24LL))(*v3, v4);
  }
  v5 = (void (***)(_QWORD))v1[3];
  v1[3] = 0;
  if (v5 != nullptr) {
    (**v5)(v5);
    result = (_QWORD*)(*(__int64 (**)(__int64, void (***)(_QWORD)))(
        *(_QWORD*)*v3 + 24LL))(*v3, v5);
  }
  v6 = (void (***)(_QWORD))v1[4];
  v1[4] = 0;
  if (v6 != nullptr) {
    (**v6)(v6);
    result = (_QWORD*)(*(__int64 (**)(__int64, void (***)(_QWORD)))(
        *(_QWORD*)*v3 + 24LL))(*v3, v6);
    v7 = (void (***)(_QWORD))v1[4];
    v1[4] = 0;
    if (v7 != nullptr) {
      (**v7)(v7);
      result = (_QWORD*)(*(__int64 (**)(__int64, void (***)(_QWORD)))(
          *(_QWORD*)*v3 + 24LL))(*v3, v7);
    }
    v8 = (void (***)(_QWORD))v1[3];
    v1[3] = 0;
    if (v8 != nullptr) {
      goto LABEL_11;
    }
  }
  else {
    v8 = (void (***)(_QWORD))v1[3];
    v1[3] = 0;
    v1[4] = 0;
    if (v8 != nullptr) {
    LABEL_11:
      (**v8)(v8);
      result = (_QWORD*)(*(__int64 (**)(__int64, void (***)(_QWORD)))(
          *(_QWORD*)*v3 + 24LL))(*v3, v8);
    }
  }
  v9 = (void (***)(_QWORD))v1[2];
  v1[2] = 0;
  if (v9 != nullptr) {
    (**v9)(v9);
    result = (_QWORD*)(*(__int64 (**)(__int64, void (***)(_QWORD)))(
        *(_QWORD*)*v3 + 24LL))(*v3, v9);
  }
  v10 = (void (***)(_QWORD))v1[1];
  v1[1] = 0;
  if (v10 != nullptr) {
    (**v10)(v10);
    return (_QWORD*)(*(__int64 (**)(__int64, void (***)(_QWORD)))(
        *(_QWORD*)*v3 + 24LL))(*v3, v10);
  }
  return result;
}

__int64 GameHr_16f0e0(_QWORD* a1)
{
  __int64* v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;

  v2 = GameData_2134428;
  v3 = a1[831];
  *a1 = GameData_2134428 + 2;
  a1[5] = v2 + 33;
  a1[699] = v2 + 174;
  v4 = GameData_212d480[0];
  if (v3 != 0) {
    v5 = *GameData_212d480[0];
    a1[831] = 0;
    (*(void (**)(__int64))(*(_QWORD*)v5 + 24LL))(v5);
    v6 = a1[830];
    a1[830] = 0;
    if (v6 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)*v4 + 24LL))(*v4);
    }
    v7 = a1[829];
    a1[829] = 0;
    if (v7 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)*v4 + 24LL))(*v4);
    }
    v8 = a1[828];
    a1[828] = 0;
    if (v8 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)*v4 + 24LL))(*v4);
    }
    v9 = a1[827];
    a1[827] = 0;
    if (v9 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)*v4 + 24LL))(*v4);
    }
    v10 = a1[831];
    a1[831] = 0;
    if (v10 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)*v4 + 24LL))(*v4);
    }
  }
  v11 = a1[830];
  a1[830] = 0;
  if (v11 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v4 + 24LL))(*v4);
  }
  v12 = a1[829];
  a1[829] = 0;
  if (v12 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v4 + 24LL))(*v4);
  }
  v13 = a1[828];
  a1[828] = 0;
  if (v13 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v4 + 24LL))(*v4);
  }
  v14 = a1[827];
  a1[827] = 0;
  if (v14 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v4 + 24LL))(*v4);
  }
  return GameRoutine_1679b0(a1);
}

void GameHr_16f420(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                   __int64 a6)
{
  int v6;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  float v14;
  int v15;
  int v16;
  __int64 v17;
  int i;
  float v19;
  float v20;
  __int64 v21;
  int v22;
  float* v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;

  v6 = *(_DWORD*)(a1 + 5684);
  v8 = 0;
  v9 = a1 + 5684;
  v10 = a1 + 6144;
  do {
    while (1) {
      v11 = *(_QWORD*)(a1 + 6624);
      v12 = v8 + 1;
      v13 = *(_DWORD*)(v9 + 4 * (v8 + 1));
      v14 = *(float*)(v11 + 4LL * v6);
      if (v6 + 1 < v13) {
        v15 = v6;
        v16 = v6 - v13;
        v17 = v6 + 1LL;
        for (i = ~v16 & 7; i != 0; --i) {
          v19 = *(float*)(v11 + 4 * v17++);
          if (v14 < v19) {
            v14 = v19;
          }
        }
        if ((unsigned int)(v13 - v15 - 2) >= 7) {
          v21 = v11 + 4 * v17;
          v22 = v13 - v17;
          v23 = (float*)(v21 + 16);
          do {
            v24 = *(v23 - 4);
            if (v14 >= v24) {
              v24 = v14;
              v25 = *(v23 - 3);
              if (v24 < v25) {
              LABEL_18:
                v26 = *(v23 - 2);
                if (v25 < v26) {
                  goto LABEL_19;
                }
                goto LABEL_27;
              }
            }
            else {
              v25 = *(v23 - 3);
              if (v24 < v25) {
                goto LABEL_18;
              }
            }
            v25 = v24;
            v26 = *(v23 - 2);
            if (v25 < v26) {
            LABEL_19:
              v27 = *(v23 - 1);
              if (v26 < v27) {
                goto LABEL_20;
              }
              goto LABEL_28;
            }
          LABEL_27:
            v26 = v25;
            v27 = *(v23 - 1);
            if (v26 < v27) {
            LABEL_20:
              v28 = *v23;
              if (v27 < *v23) {
                goto LABEL_21;
              }
              goto LABEL_29;
            }
          LABEL_28:
            v27 = v26;
            v28 = *v23;
            if (v27 < *v23) {
            LABEL_21:
              v29 = v23[1];
              if (v28 < v29) {
                goto LABEL_22;
              }
              goto LABEL_30;
            }
          LABEL_29:
            v28 = v27;
            v29 = v23[1];
            if (v28 < v29) {
            LABEL_22:
              v30 = v23[2];
              if (v29 < v30) {
                goto LABEL_23;
              }
              goto LABEL_31;
            }
          LABEL_30:
            v29 = v28;
            v30 = v23[2];
            if (v29 < v30) {
            LABEL_23:
              v14 = v23[3];
              if (v30 >= v14) {
                goto LABEL_32;
              }
              goto LABEL_15;
            }
          LABEL_31:
            v30 = v29;
            v14 = v23[3];
            if (v30 >= v14) {
            LABEL_32:
              v14 = v30;
            }
          LABEL_15:
            v22 -= 8;
            v23 += 8;
          } while (v22 != 0);
        }
      }
      if (v14 > 0.0) {
        break;
      }
      v6 = *(_DWORD*)(v9 + 4 * (v8 + 1));
      *(_DWORD*)(v10 + 4 * v8++) = (int)(float)*(int*)(a1 + 6676);
      if (v12 == 114) {
        return;
      }
    }
    v20 = GameRoutine_1a0a980(a1, a2, a3, a4, a5, a6, v14) * 20.0;
    if (v20 < (float)*(int*)(a1 + 6676)) {
      v20 = (float)*(int*)(a1 + 6676);
    }
    v6 = v13;
    *(_DWORD*)(v10 + 4 * v8++) = (int)v20;
  } while (v12 != 114);
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

__int64 GameHr_16f7c0(_QWORD* a1)
{
  *a1 = GameData_2134798[0] + 16;
  GameRoutine_1a09f60(a1 + 4111);
  return GameRoutine_2af380(a1);
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
