#include "decomp/pseudo_helpers.h"
#pragma GCC visibility push(hidden)

extern char GameData_1a9f09e;
extern __int64 (*GameData_1f809d8[])();
extern __int64* GameData_212d480[2];
extern __int64* GameData_212e250;
extern __int64* GameData_2134b60;
extern __int64 GameData_2135418[3];
extern __int64 GameData_2135490[4];
extern __int64 GameData_2135520[5];
extern __int64 GameData_2135540;
extern __int64 GameData_2135560;
extern _UNKNOWN* GameData_2135680;
extern __int64* GameData_2135fb8[3];
extern __int64 GameData_2178df0;
extern __int64 GameData_2178df8;
_QWORD* GameRoutine_10e040(_QWORD* __return_ptr, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_10ede0(_QWORD*, __int64);
void __attribute__((noreturn)) GameRoutine_10fb80(_QWORD);
__int64 GameRoutine_112180(_QWORD, _QWORD);
__int64 GameRoutine_112290(_QWORD, float);
__int64 GameRoutine_1163b0(_QWORD);
__int64 GameRoutine_118ff0(_QWORD);
__int64 GameRoutine_13ee20(__int64 result, __int64*, __int64*, _QWORD*);
void __attribute__((noreturn)) GameRoutine_13efd0(_QWORD);
void __attribute__((noreturn)) GameRoutine_13f220(void);
__int64 GameRoutine_14e360(_QWORD);
__int64 GameRoutine_190020(_QWORD, _QWORD);
__int64 GameRoutine_190200(_QWORD, _QWORD);
__int64 GameRoutine_1905a40(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a09ba0(_QWORD);
__int64 GameRoutine_1a09c70(_QWORD);
__int64 GameRoutine_1a09cf0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a09f60(_QWORD);
__int64 GameRoutine_1a0a0b0(_QWORD);
__int64 GameRoutine_1a0b320(_QWORD);
__int64 GameRoutine_1a0b940(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0ba50(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_283920(void);
__int64 GameRoutine_283a20(_QWORD, _QWORD, _QWORD);
float GameRoutine_283ae0(_QWORD, _QWORD);
__int64 GameRoutine_283b10(_QWORD);
float GameRoutine_283d00(_QWORD);
__int64 GameRoutine_283d20(_QWORD, _QWORD);
__int64 GameRoutine_283d60(_QWORD);
__int64 GameRoutine_296ba0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_29d720(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_29d8c0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_29e4f0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_29e5a0(_QWORD, _QWORD);
__int64 GameRoutine_2a5720(_QWORD);
__int64 GameRoutine_2a83d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_2acf30(_QWORD);
__int64 GameRoutine_2b4940(_QWORD);
__int64 GameRoutine_2b8d00(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_2b8e00(_QWORD, _QWORD);
__int64 GameRoutine_2b97b0(_QWORD);
__int64 GameRoutine_55d1b0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD, _QWORD, float, _QWORD, _DWORD, _DWORD,
                           _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_55d400(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD, _QWORD, float, _DWORD, _DWORD);
__int64 GameRoutine_55d690(void);
__int64 GameRoutine_56e670(_QWORD);
__int64 GameRoutine_56eaa0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_5716e0(_QWORD, _QWORD);
__int64 GameRoutine_57d040(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_58d5b0(_QWORD, _QWORD);
__int64 GameRoutine_590b30(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_590d80(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_590f00(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, float);
__int64 GameRoutine_5987a0(void);
__int64 GameRoutine_59ed60(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_59fb80(_QWORD, _QWORD);
float GameRoutine_59fbe0(_QWORD);
void GameRoutine_651250(void*, unsigned __int64);
__int64 GameRoutine_a2af20(_QWORD, _QWORD, const char*, ...);
void __attribute__((noreturn)) GameRoutine_a36650(void);
void __attribute__((noreturn)) GameRoutine_a3a470(_QWORD, _QWORD);
__int64 GameRoutine_f3c60(_QWORD);
__int64 GameRoutine_f7de0(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_f82d0(_QWORD);

__int64 GameHr_f3a40(__int64 result)
{
  const char* v1;
  _QWORD* v2;
  __int64 v3;
  unsigned __int64 i;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  float v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD v17[2];
  __int64 v18;
  int v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  _BYTE v23[264];

  if (GameData_2178df8 == 0) {
    v1 = (const char*)result;
    v2 = (_QWORD*)(*(__int64 (**)(_QWORD, __int64, __int64))(
        **(_QWORD**)GameData_212d480[0] + 16LL))(*GameData_212d480[0], 24, 32);
    *v2 = 0;
    v2[1] = 0;
    v2[2] = 0;
    GameData_2178df8 = (__int64)v2;
    result = GameRoutine_f3c60(0);
    v3 = 0;
    for (i = 0;; ++i) {
      v5 = (__int64*)GameData_2178df0;
      if (GameData_2178df0 == 0) {
        result = GameRoutine_f3c60(0);
        v5 = (__int64*)GameData_2178df0;
      }
      v6 = *v5;
      v7 = v5[1] - *v5;
      if ((__int64)i >= (int)((unsigned __int64)v7 >> 6)) {
        return result;
      }
      if (i >= v7 >> 6) {
        GameRoutine_f82d0(result);
      }
      GameRoutine_a2af20(v23, 256, "%s/data_sound_%s.elf", v1,
                         (const char*)(v6 + v3));
      v18 = 0;
      v19 = 0x2000;
      v8 = GameRoutine_190020(&v20, &GameData_1a9f09e);
      v9 = GameRoutine_1163b0(v8);
      v10 = GameRoutine_118ff0(v9);
      GameRoutine_10e040(v17, v10, v23, 64);
      GameRoutine_112180(&v18, v17);
      v12 = GameRoutine_112290(&v18, v11);
      (*(void (**)(__int64))(*(_QWORD*)v12 + 48LL))(v12);
      GameRoutine_190200(&v20, v6 + v3);
      v13 = GameData_2178df8;
      v14 = *(_QWORD*)(GameData_2178df8 + 8);
      if (v14 >= *(_QWORD*)(GameData_2178df8 + 16)) {
        result = GameRoutine_f7de0(GameData_2178df8, &v18);
        *(_QWORD*)(v13 + 8) = result;
        if ((v20 & 1) == 0) {
          goto LABEL_4;
        }
      }
      else {
        *(_QWORD*)v14 = 0;
        *(_DWORD*)(v14 + 8) = 0x2000;
        GameRoutine_112180(v14, &v18);
        if ((v20 & 1) != 0) {
          GameRoutine_1905a40(v14 + 16, v22, v21);
          result = v14 + 40;
          *(_QWORD*)(v13 + 8) = v14 + 40;
          if ((v20 & 1) == 0) {
            goto LABEL_4;
          }
        }
        else {
          v15 = v20;
          v16 = v22;
          result = v14 + 40;
          *(_QWORD*)(v14 + 24) = v21;
          *(_QWORD*)(v14 + 32) = v16;
          *(_QWORD*)(v14 + 16) = v15;
          *(_QWORD*)(v13 + 8) = v14 + 40;
          if ((v20 & 1) == 0) {
            goto LABEL_4;
          }
        }
      }
      result = (*(__int64 (**)(_QWORD, __int64))(
          **(_QWORD**)GameData_212d480[0] + 24LL))(*GameData_212d480[0], v22);
    LABEL_4:
      v3 += 64;
    }
  }
  return result;
}

__int64 GameHr_10f160(_QWORD* a1, unsigned int a2, __int64 a3)
{
  __int64* v6;
  __int64 result;
  unsigned int v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64* v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64* v24;
  unsigned __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64* v29;
  __int64 v30;
  __int64 v31;
  __int64* v32;
  __int64* v33;
  __int64 v34;
  _QWORD* v35;
  __int64 v36;
  __int64 v37;
  unsigned int v38;

  v6 = GameData_212e250;
  result = (*(__int64 (**)(_QWORD, __int64, unsigned int*, __int64*))(
      *(_QWORD*)*GameData_212e250 + 176LL))(*GameData_212e250, a3, &v38, &v37);
  if (v37 == 0) {
    result = (*(__int64 (**)(__int64, _QWORD, _QWORD, _QWORD))(
        *(_QWORD*)*v6 + 248LL))(*v6, (unsigned int)result, v38, 0);
    if ((result & 1) != 0) {
      v8 = (*(__int64 (**)(__int64, __int64, unsigned int*, __int64*))(
          *(_QWORD*)*v6 + 176LL))(*v6, a3, &v38, &v37);
      v9 = (*(__int64 (**)(__int64, _QWORD, _QWORD, __int64))(
          *(_QWORD*)*v6 + 192LL))(*v6, v8, v38, v37);
      result = GameRoutine_10ede0(a1, v9);
      v10 = result;
      v11 = (__int64*)(a1[10] + 24LL * a2);
      v13 = (__int64*)*v11;
      v12 = (__int64*)v11[1];
      v14 = (__int64)v12 - *v11;
      v15 = v14 >> 3;
      if (v12 == (__int64*)*v11) {
      LABEL_19:
        v25 = v11[2];
        if ((unsigned __int64)v12 >= v25) {
          v27 = v15 + 1;
          if ((unsigned __int64)(v15 + 1) >> 61 != 0) {
            GameRoutine_10fb80(result);
          }
          v28 = v25 - (_QWORD)v13;
          v29 = GameData_212d480[0];
          if (v28 >> 2 > v27) {
            v27 = v28 >> 2;
          }
          if ((unsigned __int64)v28 >= 0x7FFFFFFFFFFFFFF8LL) {
            v30 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v30 = v27;
          }
          result = (*(__int64 (**)(_QWORD, __int64, __int64))(
              **(_QWORD**)GameData_212d480[0] + 16LL))(*GameData_212d480[0],
                                                       8 * v30, 32);
          v31 = result + 8 * v30;
          *(_QWORD*)(result + v14) = v10;
          v26 = result + v14 + 8;
          v32 = (__int64*)*v11;
          v33 = (__int64*)v11[1];
          v34 = result + v14 + *v11 - (_QWORD)v33;
          if (v33 != (__int64*)*v11) {
            v35 = (_QWORD*)(result + v14 + *v11 - (_QWORD)v33);
            do {
              v36 = *v32++;
              *v35++ = v36;
            } while (v32 != v33);
            v32 = (__int64*)*v11;
          }
          *v11 = v34;
          v11[1] = v26;
          v11[2] = v31;
          if (v32 != nullptr) {
            result = (*(__int64 (**)(__int64))(*(_QWORD*)*v29 + 24LL))(*v29);
          }
        }
        else {
          *v12 = v10;
          v26 = (__int64)(v12 + 1);
        }
        v11[1] = v26;
      }
      else {
        v16 = (__int64*)*v11;
        v17 = v14 >> 3;
        while (1) {
          v19 = *v16++;
          v18 = v19;
          if (v19 != 0) {
            result = GameRoutine_1a09c70(v9);
            v20 = *(_BYTE*)v18 >> 1;
            if ((*(_BYTE*)v18 & 1) != 0) {
              v20 = *(_QWORD*)(v18 + 8);
            }
            if (result == v20) {
              v21 = result;
              if (result == -1) {
                GameRoutine_a36650();
              }
              v22 = (*(_BYTE*)v18 & 1) != 0 ? *(_QWORD*)(v18 + 16) : v18 + 1;
              result = GameRoutine_1a09cf0(v22, v9, v21);
              if ((_DWORD)result == 0) {
                break;
              }
            }
          }
          if (--v17 == 0) {
            v23 = v14 >> 3;
            v24 = v13;
            while (*v24 != 0) {
              ++v24;
              if (--v23 == 0) {
                goto LABEL_19;
              }
            }
            *v24 = v10;
            return result;
          }
        }
      }
    }
  }
  return result;
}

__int64 GameHr_13f000(__int64 a1, __int64* a2)
{
  __int64 v2;
  unsigned __int64 v3;
  __int64 v4;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  _QWORD* v20;
  __int64* v21;

  v2 = *(_QWORD*)(a1 + 8) - *(_QWORD*)a1;
  v3 = 1 - 0x5555555555555555LL * (v2 >> 4);
  if (v3 > 0x555555555555555LL) {
    GameRoutine_13f220();
  }
  v4 = a1 + 16;
  v6 = a1;
  v7 = GameData_212d480[0];
  if (0x5555555555555556LL *
          ((__int64)(*(_QWORD*)(a1 + 16) - *(_QWORD*)a1) >> 4) >
      v3) {
    v3 = 0x5555555555555556LL *
         ((__int64)(*(_QWORD*)(a1 + 16) - *(_QWORD*)a1) >> 4);
  }
  if (0xAAAAAAAAAAAAAAABLL *
          ((__int64)(*(_QWORD*)(a1 + 16) - *(_QWORD*)a1) >> 4) >=
      0x2AAAAAAAAAAAAAALL) {
    v8 = 0x555555555555555LL;
  }
  else {
    v8 = v3;
  }
  if ((unsigned __int64)(v8 - 0x555555555555556LL) >= 0xFAAAAAAAAAAAAAABLL) {
    a1 = (*(__int64 (**)(_QWORD, __int64, __int64))(
        **(_QWORD**)GameData_212d480[0] + 16LL))(*GameData_212d480[0], 48 * v8,
                                                 32);
    v9 = a1;
    v2 += a1;
    if ((*(_BYTE*)a2 & 1) != 0) {
    LABEL_9:
      a1 = GameRoutine_1905a40(v2, a2[2], a2[1]);
      *(_QWORD*)(v2 + 32) = 0;
      *(_QWORD*)(v2 + 40) = 0;
      *(_QWORD*)(v2 + 24) = 0;
      v10 = a2[3];
      v11 = a2[4];
      v12 = v11 - v10;
      if (v11 == v10) {
        goto LABEL_17;
      }
      goto LABEL_13;
    }
  }
  else {
    v9 = 0;
    if ((*(_BYTE*)a2 & 1) != 0) {
      goto LABEL_9;
    }
  }
  v13 = *a2;
  v14 = a2[2];
  *(_QWORD*)(v2 + 8) = a2[1];
  *(_QWORD*)(v2 + 16) = v14;
  *(_QWORD*)v2 = v13;
  *(_QWORD*)(v2 + 32) = 0;
  *(_QWORD*)(v2 + 40) = 0;
  *(_QWORD*)(v2 + 24) = 0;
  v10 = a2[3];
  v11 = a2[4];
  v12 = v11 - v10;
  if (v11 == v10) {
    goto LABEL_17;
  }
LABEL_13:
  if (0xAAAAAAAAAAAAAAABLL * (v12 >> 3) >= 0xAAAAAAAAAAAAAABLL) {
    GameRoutine_13efd0(a1);
  }
  v15 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)*v7 + 16LL))(
      *v7, v12, 32);
  *(_QWORD*)(v2 + 24) = v15;
  *(_QWORD*)(v2 + 32) = v15;
  *(_QWORD*)(v2 + 40) = v15 + v12;
  do {
    *(_QWORD*)v15 = 0;
    *(_DWORD*)(v15 + 8) = 0x2000;
    GameRoutine_112180(v15, v10);
    v16 = *(_DWORD*)(v10 + 16);
    v10 += 24;
    *(_DWORD*)(v15 + 16) = v16;
    v15 += 24;
  } while (v10 != v11);
  *(_QWORD*)(v2 + 32) = v15;
LABEL_17:
  v17 = *(__int64**)(v6 + 8);
  v18 = v9 + 48 * v8;
  v19 = v2 + 48;
  v20 = (_QWORD*)(v2 + *(_QWORD*)v6 - (_QWORD)v17);
  GameRoutine_13ee20(v4, *(__int64**)v6, v17, v20);
  v21 = *(__int64**)v6;
  *(_QWORD*)v6 = v20;
  *(_QWORD*)(v6 + 8) = v19;
  *(_QWORD*)(v6 + 16) = v18;
  if (v21 != nullptr) {
    (*(void (**)(__int64))(*(_QWORD*)*v7 + 24LL))(*v7);
  }
  return v19;
}

char* GameHr_190480(char* a1, __int64 a2)
{
  unsigned __int64 v4;
  __int64 v5;
  char v6;
  unsigned __int64 v7;
  char v8;
  unsigned __int64 v9;
  __int64* v10;
  char* v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;

  v4 = GameRoutine_1a09c70(a2);
  v5 = a2;
  v6 = *a1;
  v7 = v4;
  v8 = *(_QWORD*)a1;
  v9 = (*(_QWORD*)a1 & 0xFFFFFFFFFFFFFFFELL) - 1;
  if ((*a1 & 1) == 0) {
    v9 = 22;
  }
  if (v4 > v9) {
    if (v4 - v9 > -10LL - v9) {
      GameRoutine_a3a470(a1, v5);
    }
    v10 = GameData_212d480[0];
    if ((*(_QWORD*)a1 & 1) != 0) {
      v11 = *((char**)a1 + 2);
    }
    else {
      v11 = a1 + 1;
    }
    if (v9 > 0x7FFFFFFFFFFFFFF2LL) {
      v14 = -9;
    }
    else {
      v12 = 2 * v9;
      if (v4 > 2 * v9) {
        v12 = v4;
      }
      if ((v12 | 7) == 0x17) {
        v13 = 26;
      }
      else {
        v13 = (v12 | 7) + 1;
      }
      if (v12 >= 0x17) {
        v14 = v13;
      }
      else {
        v14 = 23;
      }
      if (v14 == 0) {
        v15 = 1;
        v16 = 0;
        GameRoutine_1a0b940(0, v5, v4);
        if ((v6 & 1) == 0) {
          goto LABEL_30;
        }
        goto LABEL_29;
      }
    }
    v17 = v5;
    v18 = (*(__int64 (**)(_QWORD, __int64, __int64))(
        **(_QWORD**)GameData_212d480[0] + 16LL))(*GameData_212d480[0], v14, 32);
    v19 = v17;
    v16 = v18;
    v15 = v14 | 1;
    GameRoutine_1a0b940(v18, v19, v7);
    if ((v6 & 1) == 0) {
    LABEL_30:
      *((_QWORD*)a1 + 2) = v16;
      *(_QWORD*)a1 = v15;
    LABEL_31:
      *((_QWORD*)a1 + 1) = v7;
      goto LABEL_32;
    }
  LABEL_29:
    (*(void (**)(__int64, char*))(*(_QWORD*)*v10 + 24LL))(*v10, v11);
    goto LABEL_30;
  }
  if ((*(_QWORD*)a1 & 1) != 0) {
    v16 = *((_QWORD*)a1 + 2);
  }
  else {
    v16 = (__int64)(a1 + 1);
  }
  if (v4 != 0) {
    GameRoutine_1a0b940(v16, v5, v4);
    v8 = *a1;
  }
  if ((v8 & 1) != 0) {
    goto LABEL_31;
  }
  *a1 = 2 * v7;
LABEL_32:
  *(_BYTE*)(v16 + v7) = 0;
  return a1;
}

__int64 GameHr_29c980(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5,
                      __int64 a6, __int64 a7)
{
  __int64 v12;
  bool v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  int v29;
  __int64 v30;
  __int64 v31;
  int v32;
  __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  signed int v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  signed __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  int v49;
  __int64 v50;
  __int64 v51;
  __int64* v52;
  _WORD* v53;
  _WORD* v54;
  __int64 v55;
  __int16 v56;
  __int16 v57;
  __int16* v58;
  _WORD* v59;
  __int16* v60;
  __int16 v61;
  __int16 v62;
  _BOOL8 v63;
  char v65;
  __int64 v66;
  __int64 v67;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  int* v75;
  __int64 v76;
  _BOOL4 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  int* v81;
  int v82;
  __int16 v83;
  __int64 v84;
  __int64 v85;
  int v86;
  __int16 v87;
  __int64 v88;
  __int64 v89;
  int* v90;
  int v91;
  __int16 v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  _QWORD* v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  int v104;
  __int64 v105;
  int v106;
  int v108;
  _BOOL4 v110;
  __int64 v111;
  unsigned __int64 v112;
  unsigned __int64 v113;
  unsigned __int64 v114;
  __int64 v115;
  __int64 v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  __int64 v121;
  __int64 SystemTickEv;
  __int64 v123;
  _QWORD v124[3];
  __int64 v125;
  __int64 v126;
  __int64 v127;
  __int64 v128;

  SystemTickEv = GameRoutine_1a09ba0(a1);
  v12 = a6 | a5;
  v13 = a6 == 0;
  if ((a6 | a5) != 0) {
    v14 = *(_QWORD*)(a1 + 936);
    v15 = *(_QWORD*)(a1 + 952);
    v16 = a6 + a5;
    if (v14 + v16 >= v15) {
      v17 = 0;
      do {
        if ((GameRoutine_29e4f0(a1 + 896, a1, *(_QWORD*)(a1 + 48)) & 1) == 0) {
          *(_BYTE*)(a1 + 833) = 1;
          *(_QWORD*)(a2 + 40) = 0;
          return 1;
        }
        v18 = v14 - v15;
        v14 = *(_QWORD*)(a1 + 936);
        v15 = *(_QWORD*)(a1 + 952);
        ++v17;
        v16 += v18;
      } while (v14 + v16 >= v15);
    }
    else {
      v17 = 0;
    }
    v102 = v12;
    v106 = v17;
    v104 = a4;
    v105 = a7;
    GameRoutine_29e5a0(a1 + 896, v16);
    v19 = *(_QWORD*)(a1 + 40);
    v20 = *(_QWORD*)(a1 + 48);
    v21 = *(int*)(a1 + 80);
    v22 = *(_QWORD*)(a1 + 936) / *(_QWORD*)(v20 + 56);
    v23 = *(_QWORD*)(a1 + 808);
    *(_DWORD*)(a1 + 792) = v22;
    (*(void (**)(__int64, __int64, _QWORD))(*(_QWORD*)v19 + 48LL))(
        v19, v23 + *(_QWORD*)(v20 + 64) * (unsigned int)v22 * v21, 0);
    v110 = *(_DWORD*)(a1 + 10248) == 2;
  }
  else {
    v102 = 0;
    v104 = a4;
    v105 = a7;
    v106 = 0;
    v110 = false;
  }
  v24 = *(_QWORD*)(a1 + 936);
  v25 = 0;
  v26 = 0;
  v27 = 0;
  *(_BYTE*)(a2 + 177) = 0;
  v103 = v24;
  v28 = *(_QWORD*)(a1 + 936);
  v29 = 1;
  while (1) {
    v108 = v29;
    v30 = *(_QWORD*)(a1 + 48);
    v31 = 64;
    v32 = *(_DWORD*)(a1 + 10248);
    if (*(_DWORD*)(a1 + 792) == *(_DWORD*)(a1 + 796)) {
      v31 = 72;
    }
    v33 = 56;
    v34 = *(_QWORD*)(v30 + v31);
    v35 = *(_QWORD*)(v30 + 56);
    if (*(_DWORD*)(a1 + 792) == *(_DWORD*)(a1 + 796)) {
      v33 = 80;
    }
    v111 = v34;
    v36 = *(_QWORD*)(v30 + v33);
    v37 = v28 % v35;
    v113 = v28 % v35;
    v114 = v28 % v35;
    v38 = v28 % v35;
    if (v32 == 2) {
      v39 = 14 * ((unsigned int)(((v37 >> 1) *
                                  (unsigned __int128)0x4924924924924925uLL) >>
                                 64) >>
                  1);
      v38 = v39;
      v114 = v39;
    }
    v40 = GameRoutine_2a5720(v38);
    v41 = *(_QWORD*)(a1 + 936);
    v42 = v34 - v40;
    v43 = v36 - v38;
    v115 = v40;
    v116 = v34 - v40;
    v112 = v43;
    v44 = *(_QWORD*)(a1 + 952);
    if ((__int64)(v43 - (v37 - v38) + v41) > v44) {
      v43 = v44 - v41 + v37 - v38;
      v112 = v43;
      if (v43 <= 0x47F) {
        v42 = 2304;
        v116 = 2304;
      }
    }
    if (v13) {
      v25 = v37 - v38;
    }
    if (v13 && v110) {
      v45 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 40) + 56LL))(
          *(_QWORD*)(a1 + 40));
      v46 = *(unsigned int*)(a1 + 792);
      v47 = *(unsigned int*)(a1 + 80);
      v48 = v45;
      v127 = 0;
      v128 = 0;
      v125 = 0;
      v126 = 0;
      v123 = 0;
      memset(v124, 0, sizeof(v124));
      if ((GameRoutine_296ba0(a1, &v125, &v123, v46, v47) & 1) == 0) {
        return 0;
      }
      (*(void (**)(_QWORD, __int64, _QWORD))(**(_QWORD**)(a1 + 40) + 48LL))(
          *(_QWORD*)(a1 + 40), v48, 0);
      v49 = *(_DWORD*)(a1 + 80);
      if (v49 < 1) {
        goto LABEL_33;
      }
      if ((unsigned int)v49 >= 8) {
        v52 = &v126;
        v53 = v124;
        v54 = (_WORD*)(a1 + 1026);
        v55 = 0;
        do {
          v55 -= 8;
          *v54 = *((_WORD*)v52 - 4);
          v54[1] = *(v53 - 4);
          v54[32] = *((_WORD*)v52 - 3);
          v54[33] = *(v53 - 3);
          v54[64] = *((_WORD*)v52 - 2);
          v54[65] = *(v53 - 2);
          v54[96] = *((_WORD*)v52 - 1);
          v54[97] = *(v53 - 1);
          v54[128] = *(_WORD*)v52;
          v54[129] = *v53;
          v54[160] = *((_WORD*)v52 + 1);
          v54[161] = v53[1];
          v54[192] = *((_WORD*)v52 + 2);
          v54[193] = v53[2];
          v56 = *((_WORD*)v52 + 3);
          v52 += 2;
          v54[224] = v56;
          v57 = v53[3];
          v53 += 8;
          v54[225] = v57;
          v54 += 256;
        } while (-(__int64)(v49 & 0x7FFFFFF8) != v55);
        v50 = -v55;
        v51 = v49 & 7;
        if (v51 == 0) {
          goto LABEL_33;
        }
      }
      else {
        v50 = 0;
        v51 = v49 & 7;
        if (v51 == 0) {
        LABEL_33:
          v25 = v37 - v38;
          goto LABEL_34;
        }
      }
      v58 = (__int16*)&v124[-1] + v50;
      v59 = (_WORD*)(a1 + 1028 + (v50 << 6));
      v60 = (__int16*)&v125 + v50;
      do {
        v61 = *v60++;
        --v51;
        *(v59 - 1) = v61;
        v62 = *v58++;
        *v59 = v62;
        v59 += 32;
      } while (v51 != 0);
      goto LABEL_33;
    }
  LABEL_34:
    v63 = v13;
    if (*(_QWORD*)(a1 + 776) == 0 || *(_QWORD*)(a1 + 784) == 0) {
      if ((GameRoutine_29d8c0(a1, a3, &v111, v27, v63, v110) & 1) == 0) {
        return 0;
      }
    }
    else {
      v65 = GameRoutine_29d720(a1, a3, &v111, v27, v63, v110);
      if ((v65 & 1) == 0) {
        return 0;
      }
    }
    v26 += v43;
    v27 += v42;
    v66 = GameRoutine_29e5a0(a1 + 896, v38 - v37 + v43);
    v67 = *(_QWORD*)(a1 + 952);
    ++*(_DWORD*)(a1 + 792);
    v28 = *(_QWORD*)(a1 + 936);
    if (v28 == v67) {
      break;
    }
    v13 = false;
    v29 = 0;
    if (v26 >= 0x480 && *(_QWORD*)(a1 + 952) - v28 > 0x47F) {
      v74 = a2;
      v75 = (int*)(a1 + 1024);
      v76 = v103;
      goto LABEL_54;
    }
  }
  v66 = GameRoutine_29e4f0(a1 + 896, a1, *(_QWORD*)(a1 + 48));
  if ((v66 & 1) != 0) {
    v69 = *(_QWORD*)(a1 + 40);
    v70 = *(_QWORD*)(a1 + 48);
    v71 = *(int*)(a1 + 80);
    ++v106;
    v72 = *(_QWORD*)(a1 + 936) / *(_QWORD*)(v70 + 56);
    v73 = *(_QWORD*)(a1 + 808);
    *(_DWORD*)(a1 + 792) = v72;
    v66 = (*(__int64 (**)(__int64, __int64, _QWORD))(*(_QWORD*)v69 + 48LL))(
        v69, v73 + *(_QWORD*)(v70 + 64) * (unsigned int)v72 * v71, 0);
    v74 = a2;
    v75 = (int*)(a1 + 1024);
    v76 = v103;
    v77 = v26 < 0x480;
    if (v102 == 0) {
      goto LABEL_54;
    }
  LABEL_52:
    if ((v108 & v77) != 0) {
      *(_BYTE*)(v74 + 177) = 1;
    }
  }
  else {
    *(_BYTE*)(a1 + 833) = 1;
    v74 = a2;
    v75 = (int*)(a1 + 1024);
    v76 = v103;
    v77 = v26 < 0x480;
    if (v102 != 0) {
      goto LABEL_52;
    }
  }
LABEL_54:
  *(_BYTE*)(v74 + 72) = 0;
  if (*(_DWORD*)(a1 + 10248) == 2) {
    if (v76 != 0) {
      v78 = *(_QWORD*)(a1 + 48);
      if (*(_BYTE*)(v78 + 8) == 1 && v76 == *(_QWORD*)(v78 + 16)) {
        if (*(int*)(a1 + 80) >= 1) {
          v79 = v74 + 74;
          v80 = 0;
          v81 = (int*)(a1 + 10432);
          do {
            v82 = *v81;
            v83 = *((_WORD*)v81 + 2);
            ++v80;
            v81 += 48;
            *(_WORD*)(v79 + 4) = v83;
            *(_DWORD*)v79 = v82;
            v79 += 6;
          } while (v80 < *(int*)(a1 + 80));
        }
        goto LABEL_70;
      }
      if (v76 == *(_QWORD*)(a1 + 968)) {
        if (*(int*)(a1 + 80) >= 1) {
          v84 = v74 + 74;
          v85 = 0;
          do {
            v86 = *v75;
            v87 = *((_WORD*)v75 + 2);
            ++v85;
            v75 += 16;
            *(_WORD*)(v84 + 4) = v87;
            *(_DWORD*)v84 = v86;
            v84 += 6;
          } while (v85 < *(int*)(a1 + 80));
        }
        goto LABEL_70;
      }
    }
    else {
      if (*(int*)(a1 + 80) >= 1) {
        v88 = v74 + 74;
        v89 = 0;
        v90 = (int*)(a1 + 10368);
        do {
          v91 = *v90;
          v92 = *((_WORD*)v90 + 2);
          ++v89;
          v90 += 48;
          *(_WORD*)(v88 + 4) = v92;
          *(_DWORD*)v88 = v91;
          v88 += 6;
        } while (v89 < *(int*)(a1 + 80));
      }
    LABEL_70:
      *(_BYTE*)(v74 + 72) = 1;
    }
  }
  *(_QWORD*)(v74 + 40) = v26;
  *(_QWORD*)(v74 + 48) = v76;
  *(_QWORD*)(v74 + 56) = v25;
  *(_QWORD*)(v74 + 64) = v27;
  *(_DWORD*)(v74 + 32) = v104;
  *(_DWORD*)(v74 + 172) = v106;
  *(_BYTE*)(v74 + 176) = *(_BYTE*)(a1 + 833);
  if (*(_BYTE*)(v105 + 48) == 1) {
    v93 = GameRoutine_1a09ba0(v66);
    v94 = *(_QWORD*)(a1 + 776);
    v123 = v93;
    v120 = 0;
    v121 = 0;
    v118 = 0;
    v119 = 0;
    v116 = 0;
    v117 = 0;
    v114 = 0;
    v115 = 0;
    v112 = 0;
    v113 = 0;
    v111 = 0;
    v127 = 0;
    v128 = 0;
    v125 = 0;
    v126 = 0;
    if (v94 != 0 && *(_QWORD*)(a1 + 784) != 0) {
      v95 = *(_QWORD*)(a1 + 40);
      if (v95 == 0) {
        goto LABEL_80;
      }
      if (((*(__int64 (**)(__int64))(*(_QWORD*)v95 + 128LL))(v95) & 1) != 0) {
        v96 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 40) + 160LL))(
            *(_QWORD*)(a1 + 40));
        v97 = *(_QWORD*)(a1 + 40);
        v125 = v96;
        if (v97 != 0) {
          goto LABEL_77;
        }
      LABEL_80:
        v99 = 0;
        v126 = 0;
      }
      else {
        v97 = *(_QWORD*)(a1 + 40);
        v125 = 0;
        if (v97 == 0) {
          goto LABEL_80;
        }
      LABEL_77:
        if (((*(__int64 (**)(__int64))(*(_QWORD*)v97 + 128LL))(v97) & 1) != 0) {
          v98 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 40) + 168LL))(
              *(_QWORD*)(a1 + 40));
        }
        else {
          v98 = 0;
        }
        v100 = *(_QWORD**)(a1 + 40);
        v126 = v98;
        if (v100 != nullptr &&
            ((unsigned int)(*(_QWORD * (**)(_QWORD * __return_ptr, _QWORD*))(
                 *v100 + 128LL))(v100, v100) &
             1) != 0) {
          v99 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 40) + 56LL))(
              *(_QWORD*)(a1 + 40));
        }
        else {
          v99 = 0;
        }
      }
      v101 = *(_QWORD*)(a1 + 32);
      v127 = v99;
      v128 = v101;
    }
    GameRoutine_2b8d00(&v112, &SystemTickEv, &v123, &v125);
    GameRoutine_2b8e00(v105, &v111);
  }
  return 1;
}

void GameHr_2a29e0(_QWORD* a1)
{
  *a1 = GameData_2135418[0] + 16;
  GameRoutine_1a09f60(a1 + 174);
  GameRoutine_1a09f60(a1 + 152);
  GameRoutine_1a0a0b0(a1 + 144);
  GameRoutine_1a0a0b0(a1 + 125);
  GameRoutine_1a09f60(a1 + 109);
  GameRoutine_1a09f60(a1 + 105);
  GameRoutine_1a0b320(a1 + 63);
  GameRoutine_2b4940(a1 + 1);
  GameRoutine_651250(a1, 0x5A8u);
}

void GameHr_2a9140(__int64 a1, __int64 a2, char a3, float* a4, __int64 a5,
                   __int64 a6, __int64 a7)
{
  __int64 (*v14)(__int64);
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  __int64 v20;
  unsigned int v21;
  float v22;
  char v23;
  float v24;
  float v25;
  float v26;
  char v27;
  float v28;
  float v29;
  char v30;
  float v31;
  float v32;
  char v33;
  float v34;
  __int64 v35;
  float v36;
  char v37;
  float v38;
  float v39;
  __int64 v40;
  __int64 i;
  int v42;
  float v43;
  int v44;
  float v45;
  int v46;
  float v47;
  int v48;
  float v49;
  int v50;
  float v51;
  int v52;
  float v53;
  int v54;
  int v55;
  int v56;
  int v57;
  int v58;
  int v59;
  _QWORD v60[12];

  v14 = *(__int64 (**)(__int64))(*(_QWORD*)a7 + 16LL);
  memset(v60, 0, sizeof(v60));
  v15 = v14(a7);
  v19 = v15;
  if ((int)v15 >= 1) {
    v15 = GameRoutine_1a0ba50(v60, 0, 4LL * (unsigned int)v15, v16, v17, v18);
  }
  v20 = 0;
  v21 = 0;
  do {
    if (((*(_DWORD*)(a1 + 264) >> v20) & 1) != 0) {
      v15 = GameRoutine_14e360(v15);
      v21 |= *(unsigned __int8*)(v15 + v20 + 1296);
    }
    ++v20;
  } while (v20 != 32);
  if (((v21 >> a3) & 1) == 0 || v19 < 1) {
    goto LABEL_63;
  }
  v22 = a4[16] + 1.0;
  v23 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a7 + 32LL))(a7, 0);
  v24 = 0.0;
  if (v22 >= 0.0) {
    v25 = v22;
  }
  else {
    v25 = 0.0;
  }
  if (v22 > 1.0) {
    v25 = 1.0;
  }
  if (v22 >= 0.0) {
    v24 = v22;
  }
  if ((v23 & 1) != 0) {
    v24 = v25;
  }
  *(float*)v60 = v24;
  if (v19 == 1) {
    goto LABEL_64;
  }
  v26 = a4[17];
  v27 = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)a7 + 32LL))(a7, 1);
  v28 = 0.0;
  if ((v27 & 1) != 0) {
    if (v26 >= 0.0) {
      v28 = v26;
    }
    if (v26 > 1.0) {
      v28 = 1.0;
    }
    *((float*)v60 + 1) = v28;
    if (v19 == 2) {
      goto LABEL_64;
    }
  }
  else {
    if (v26 >= 0.0) {
      v28 = v26;
    }
    *((float*)v60 + 1) = v28;
    if (v19 == 2) {
      goto LABEL_64;
    }
  }
  v29 = a4[18];
  v30 = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)a7 + 32LL))(a7, 2);
  v31 = 0.0;
  if ((v30 & 1) != 0) {
    if (v29 >= 0.0) {
      v31 = v29;
    }
    if (v29 > 1.0) {
      v31 = 1.0;
    }
    *(float*)&v60[1] = v31;
    if (v19 == 3) {
      goto LABEL_64;
    }
  }
  else {
    if (v29 >= 0.0) {
      v31 = v29;
    }
    *(float*)&v60[1] = v31;
    if (v19 == 3) {
      goto LABEL_64;
    }
  }
  v32 = a4[19];
  v33 = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)a7 + 32LL))(a7, 3);
  v34 = 0.0;
  if ((v33 & 1) == 0) {
    if (v32 >= 0.0) {
      v34 = v32;
    }
    *((float*)&v60[1] + 1) = v34;
    if (v19 == 4) {
      goto LABEL_64;
    }
    goto LABEL_49;
  }
  if (v32 >= 0.0) {
    v34 = v32;
  }
  if (v32 > 1.0) {
    v34 = 1.0;
  }
  *((float*)&v60[1] + 1) = v34;
  if (v19 != 4) {
  LABEL_49:
    v35 = 4;
    while (a5 != 0 && (GameRoutine_283b10(a5) & 1) != 0) {
      v37 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a7 + 32LL))(
          a7, (unsigned int)v35);
      v36 = GameRoutine_283ae0(a5, (unsigned int)v35);
      if ((v37 & 1) != 0) {
        if (v36 >= 0.0) {
          v38 = v36;
        }
        else {
          v38 = 0.0;
        }
        if (v36 <= 1.0) {
          v39 = v38;
        }
        else {
          v39 = 1.0;
        }
        *((float*)v60 + v35++) = v39;
        if (v19 == v35) {
          break;
        }
      }
      else {
        if (v36 < 0.0) {
          v36 = 0.0;
        }
        *((float*)v60 + v35++) = v36;
        if (v19 == v35) {
          break;
        }
      }
    }
  LABEL_63:
    if (v19 < 1) {
      return;
    }
  }
LABEL_64:
  v40 = (unsigned int)v19;
  if (a5 != 0) {
    for (i = 0; i != v40; ++i) {
      if ((*(int (**)(__int64, _QWORD))(*(_QWORD*)a7 + 48LL))(
              a7, (unsigned int)i) >= 1) {
        v42 = (*(__int64 (**)(__int64, _QWORD, _QWORD))(*(_QWORD*)a7 + 64LL))(
            a7, (unsigned int)i, 0);
        v43 = (float)(*a4 * *((float*)v60 + i)) * *(float*)(a6 + 4LL * v42);
        if ((GameRoutine_283d60(a5) & 1) != 0 &&
            (GameRoutine_283d20(a5, (unsigned int)i) & 1) == 0) {
          v43 = v43 * GameRoutine_283d00(a5);
        }
        *(float*)(a2 + 4LL * v42) = v43;
        if ((*(int (**)(__int64, _QWORD))(*(_QWORD*)a7 + 48LL))(
                a7, (unsigned int)i) >= 2) {
          v44 = (*(__int64 (**)(__int64, _QWORD, __int64))(
              *(_QWORD*)a7 + 64LL))(a7, (unsigned int)i, 1);
          v45 = (float)(*a4 * *((float*)v60 + i)) * *(float*)(a6 + 4LL * v44);
          if ((GameRoutine_283d60(a5) & 1) != 0 &&
              (GameRoutine_283d20(a5, (unsigned int)i) & 1) == 0) {
            v45 = v45 * GameRoutine_283d00(a5);
          }
          *(float*)(a2 + 4LL * v44) = v45;
          if ((*(int (**)(__int64, _QWORD))(*(_QWORD*)a7 + 48LL))(
                  a7, (unsigned int)i) >= 3) {
            v46 = (*(__int64 (**)(__int64, _QWORD, __int64))(
                *(_QWORD*)a7 + 64LL))(a7, (unsigned int)i, 2);
            v47 = (float)(*a4 * *((float*)v60 + i)) * *(float*)(a6 + 4LL * v46);
            if ((GameRoutine_283d60(a5) & 1) != 0 &&
                (GameRoutine_283d20(a5, (unsigned int)i) & 1) == 0) {
              v47 = v47 * GameRoutine_283d00(a5);
            }
            *(float*)(a2 + 4LL * v46) = v47;
            if ((*(int (**)(__int64, _QWORD))(*(_QWORD*)a7 + 48LL))(
                    a7, (unsigned int)i) >= 4) {
              v48 = (*(__int64 (**)(__int64, _QWORD, __int64))(
                  *(_QWORD*)a7 + 64LL))(a7, (unsigned int)i, 3);
              v49 =
                  (float)(*a4 * *((float*)v60 + i)) * *(float*)(a6 + 4LL * v48);
              if ((GameRoutine_283d60(a5) & 1) != 0 &&
                  (GameRoutine_283d20(a5, (unsigned int)i) & 1) == 0) {
                v49 = v49 * GameRoutine_283d00(a5);
              }
              *(float*)(a2 + 4LL * v48) = v49;
              if ((*(int (**)(__int64, _QWORD))(*(_QWORD*)a7 + 48LL))(
                      a7, (unsigned int)i) >= 5) {
                v50 = (*(__int64 (**)(__int64, _QWORD, __int64))(
                    *(_QWORD*)a7 + 64LL))(a7, (unsigned int)i, 4);
                v51 = (float)(*a4 * *((float*)v60 + i)) *
                      *(float*)(a6 + 4LL * v50);
                if ((GameRoutine_283d60(a5) & 1) != 0 &&
                    (GameRoutine_283d20(a5, (unsigned int)i) & 1) == 0) {
                  v51 = v51 * GameRoutine_283d00(a5);
                }
                *(float*)(a2 + 4LL * v50) = v51;
                if ((*(int (**)(__int64, _QWORD))(*(_QWORD*)a7 + 48LL))(
                        a7, (unsigned int)i) >= 6) {
                  v52 = (*(__int64 (**)(__int64, _QWORD, __int64))(
                      *(_QWORD*)a7 + 64LL))(a7, (unsigned int)i, 5);
                  v53 = (float)(*a4 * *((float*)v60 + i)) *
                        *(float*)(a6 + 4LL * v52);
                  if ((GameRoutine_283d60(a5) & 1) != 0 &&
                      (GameRoutine_283d20(a5, (unsigned int)i) & 1) == 0) {
                    v53 = v53 * GameRoutine_283d00(a5);
                  }
                  *(float*)(a2 + 4LL * v52) = v53;
                  (*(void (**)(__int64, _QWORD))(*(_QWORD*)a7 + 48LL))(
                      a7, (unsigned int)i);
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    do {
      if ((*(int (**)(__int64, _QWORD))(*(_QWORD*)a7 + 48LL))(
              a7, (unsigned int)a5) >= 1) {
        v54 = (*(__int64 (**)(__int64, _QWORD, _QWORD))(*(_QWORD*)a7 + 64LL))(
            a7, (unsigned int)a5, 0);
        *(float*)(a2 + 4LL * v54) =
            (float)(*a4 * *((float*)v60 + a5)) * *(float*)(a6 + 4LL * v54);
        if ((*(int (**)(__int64, _QWORD))(*(_QWORD*)a7 + 48LL))(
                a7, (unsigned int)a5) > 1) {
          v55 = (*(__int64 (**)(__int64, _QWORD, __int64))(
              *(_QWORD*)a7 + 64LL))(a7, (unsigned int)a5, 1);
          *(float*)(a2 + 4LL * v55) =
              (float)(*a4 * *((float*)v60 + a5)) * *(float*)(a6 + 4LL * v55);
          if ((*(int (**)(__int64, _QWORD))(*(_QWORD*)a7 + 48LL))(
                  a7, (unsigned int)a5) >= 3) {
            v56 = (*(__int64 (**)(__int64, _QWORD, __int64))(
                *(_QWORD*)a7 + 64LL))(a7, (unsigned int)a5, 2);
            *(float*)(a2 + 4LL * v56) =
                (float)(*a4 * *((float*)v60 + a5)) * *(float*)(a6 + 4LL * v56);
            if ((*(int (**)(__int64, _QWORD))(*(_QWORD*)a7 + 48LL))(
                    a7, (unsigned int)a5) >= 4) {
              v57 = (*(__int64 (**)(__int64, _QWORD, __int64))(
                  *(_QWORD*)a7 + 64LL))(a7, (unsigned int)a5, 3);
              *(float*)(a2 + 4LL * v57) = (float)(*a4 * *((float*)v60 + a5)) *
                                          *(float*)(a6 + 4LL * v57);
              if ((*(int (**)(__int64, _QWORD))(*(_QWORD*)a7 + 48LL))(
                      a7, (unsigned int)a5) >= 5) {
                v58 = (*(__int64 (**)(__int64, _QWORD, __int64))(
                    *(_QWORD*)a7 + 64LL))(a7, (unsigned int)a5, 4);
                *(float*)(a2 + 4LL * v58) = (float)(*a4 * *((float*)v60 + a5)) *
                                            *(float*)(a6 + 4LL * v58);
                if ((*(int (**)(__int64, _QWORD))(*(_QWORD*)a7 + 48LL))(
                        a7, (unsigned int)a5) >= 6) {
                  v59 = (*(__int64 (**)(__int64, _QWORD, __int64))(
                      *(_QWORD*)a7 + 64LL))(a7, (unsigned int)a5, 5);
                  *(float*)(a2 + 4LL * v59) =
                      (float)(*a4 * *((float*)v60 + a5)) *
                      *(float*)(a6 + 4LL * v59);
                  (*(void (**)(__int64, _QWORD))(*(_QWORD*)a7 + 48LL))(
                      a7, (unsigned int)a5);
                }
              }
            }
          }
        }
      }
      ++a5;
    } while (v19 != a5);
  }
}

__int64 GameHr_2a9930(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 result;
  __int64 v7;
  _QWORD v8[10];
  _QWORD v9[10];

  result = *(_QWORD*)(a1 + 352);
  if (result != 0) {
    result = GameRoutine_283920();
    if ((result & 1) != 0) {
      v9[2] = 0x3F8000003F800000LL;
      v9[3] = 0x3F8000003F800000LL;
      v9[0] = 0;
      v9[1] = 0x3F8000003F800000LL;
      v9[6] = 0x3F8000003F800000LL;
      memset(&v9[7], 0, 24);
      v9[4] = 0x3F8000003F800000LL;
      v9[5] = 0x3F8000003F800000LL;
      GameRoutine_2a83d0(a1, a3, v9);
      v7 = *(_QWORD*)(a1 + 352);
      qmemcpy(v8, v9, sizeof(v8));
      return GameRoutine_283a20(v7, a2, v8);
    }
  }
  return result;
}

__int64 GameHr_2aa8a0(__int64 result, __int64 a2)
{
  _QWORD* v2;
  __int64* v3;
  __int64* v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;

  v2 = (_QWORD*)(result + 8);
  v3 = (__int64*)(a2 + 400);
  if (a2 + 400 != result + 8) {
    v4 = *(__int64**)(a2 + 408);
    v5 = *v4;
    *(_QWORD*)(*(_QWORD*)(a2 + 400) + 8LL) = v4;
    *v4 = *(_QWORD*)(a2 + 400);
    *(_QWORD*)(v5 + 8) = v3;
    *(_QWORD*)(a2 + 400) = v5;
  }
  do {
    v6 = v2;
    v2 = (_QWORD*)*v2;
  } while (v6 != *(_QWORD**)(result + 16) &&
           *((_DWORD*)v2 - 35) > *(_DWORD*)(a2 + 260));
  v7 = *v3;
  *v3 = (__int64)v2;
  *(_QWORD*)(v7 + 8) = v6;
  *(_QWORD*)(*v6 + 8LL) = v3;
  *v6 = v7;
  return result;
}

__int64 GameHr_2ac480(__int64 result)
{
  __int64 v1;
  int v2;
  int v3;
  __int64* v4;
  _QWORD* v5;
  __int64* v6;
  __int64 v7;
  _QWORD* v8;
  unsigned int v9;
  int v10;
  __int64 v11;

  v1 = *(_QWORD*)(result + 568);
  v2 = *(unsigned __int8*)(result + 256);
  v3 = *(_DWORD*)(result + 124);
  v4 = (__int64*)(result + 544);
  v5 = (_QWORD*)(v1 + 32);
  if (result + 544 != v1 + 32) {
    v6 = *(__int64**)(result + 552);
    v7 = *v6;
    *(_QWORD*)(*(_QWORD*)(result + 544) + 8LL) = v6;
    *v6 = *(_QWORD*)(result + 544);
    *(_QWORD*)(v7 + 8) = v4;
    *(_QWORD*)(result + 544) = v7;
  }
  v8 = *(_QWORD**)(v1 + 40);
  if (v8 != v5) {
    v9 = (v3 + v2) & ~((v3 + v2) >> 31);
    do {
      v10 = (*((_DWORD*)v8 - 105) + *((unsigned __int8*)v8 - 288)) &
            ~((*((_DWORD*)v8 - 105) + *((unsigned __int8*)v8 - 288)) >> 31);
      if (v10 >= 127) {
        v10 = 127;
      }
      if (v9 < v10) {
        break;
      }
      v8 = (_QWORD*)v8[1];
    } while (v8 != v5);
  }
  v11 = *v4;
  *v4 = *v8;
  *(_QWORD*)(v11 + 8) = v8;
  *(_QWORD*)(*v8 + 8LL) = v4;
  *v8 = v11;
  return result;
}

void GameHr_2ac780(_QWORD* a1)
{
  *a1 = GameData_2135490[0] + 16;
  GameRoutine_2acf30(a1 + 74);
  GameRoutine_651250(a1, 0x408u);
}

void GameHr_2b4f90(_QWORD* a1)
{
  *a1 = GameData_2134b60 + 2;
  GameRoutine_1a09f60(a1 + 1);
  GameRoutine_651250(a1, 0x68u);
}

void GameHr_2b8260(_QWORD* a1)
{
  *a1 = GameData_2135520[0] + 16;
  GameRoutine_1a09f60(a1 + 27);
  GameRoutine_1a09f60(a1 + 23);
  *a1 = GameData_2134b60 + 2;
  GameRoutine_1a09f60(a1 + 1);
  GameRoutine_651250(a1, 0x100u);
}

void GameHr_2b9580(_QWORD* a1)
{
  *a1 = GameData_2135540 + 16;
  a1[6] = GameData_1f809d8;
  GameRoutine_2b97b0(a1 + 6);
  GameRoutine_651250(a1, 0x78u);
}

void GameHr_2b9e60(_QWORD* a1)
{
  *a1 = GameData_2135560 + 16;
  a1[6] = GameData_1f809d8;
  GameRoutine_2b97b0(a1 + 6);
  GameRoutine_651250(a1, 0x78u);
}

void GameHr_3bd110(_QWORD* a1)
{
  char* v1;

  v1 = (char*)GameData_2135680;
  a1[2] = 0;
  *a1 = v1 + 16;
  GameRoutine_651250(a1, 0x50u);
}

void GameHr_3bdc20(_QWORD* a1)
{
  char* v1;

  v1 = (char*)GameData_2135680;
  a1[2] = 0;
  *a1 = v1 + 16;
  GameRoutine_651250(a1, 0x50u);
}

bool GameHr_55be90(__int64 a1)
{
  int v1;

  v1 = 0;
  atomic_compare_exchange_strong((atomic_uint* volatile)(a1 + 460),
                                 (unsigned int*)&v1, 0);
  return v1 != 0;
}

__int64 GameHr_55cc20(__int64 result, float* a2, char a3, char a4, char a5)
{
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  int v9;
  int* v10;
  unsigned __int64 v11;
  int v12;
  __int64 v13;
  __int64 v14;
  int* v15;
  unsigned __int64 v16;
  int v17;
  __int64 v18;
  float v19;
  unsigned int v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64* v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  unsigned int v29;
  __int64 v30;
  unsigned int v31;
  unsigned __int64 v33;
  __int64 v34;
  unsigned __int8 v35;
  __int64 v36;
  char v37;
  unsigned int v38;
  __int64 v39;
  unsigned __int64* v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  int v44;
  float v45;
  char v46;
  __int64 v47;
  unsigned int v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  int v55;
  _DWORD* v56;
  __int64 v57;
  __int64 v58;
  _DWORD* v59;
  int v60;
  int v61;
  int v62;
  int v63;
  int v64;
  int v65;
  int v66;
  int v67;
  int* v68;
  _DWORD* v69;
  int v70;
  int v71;
  unsigned int v72;
  unsigned int v73;
  unsigned int v74;
  int i;
  int j;
  int v77;
  int v78;
  __int64 v79;
  _QWORD v80[4];
  _QWORD v81[2];
  _QWORD v82[6];

  v8 = 96;
  v9 = *(_DWORD*)(result + 156);
  if (*(_BYTE*)(result + 186) == 0) {
    v8 = 64;
  }
  if (*(_QWORD*)a2 != 0) {
    v10 = *(int**)(result + 176);
    v11 =
        (*((_QWORD*)v10 + 4) + 2 * v9 * (__int64)v8 - 1) & -*((_QWORD*)v10 + 4);
    v12 = *v10;
    if ((*v10 & 1) == 0) {
      v13 = *((_QWORD*)v10 + 8);
      v14 = v13 + v11;
      *((_QWORD*)v10 + 8) = v14;
      if ((v12 & 2) == 0 &&
          (unsigned __int64)(*((_QWORD*)v10 + 9) + v14) > *((_QWORD*)v10 + 3)) {
        goto LABEL_11;
      }
    LABEL_21:
      *(_DWORD*)(result + 4) = v13;
      v19 = a2[5];
      v20 = *((_DWORD*)a2 + 4);
      v21 = *(_QWORD*)a2;
      v22 = *((_QWORD*)a2 + 1);
      if ((a5 & 1) == 0) {
        goto LABEL_35;
      }
      goto LABEL_22;
    }
    LODWORD(v13) = atomic_fetch_add(*((atomic_ullong* volatile*)v10 + 8), v11);
    if ((*(_BYTE*)v10 & 1) != 0) {
      v23 = *((unsigned __int64**)v10 + 9);
      v24 = atomic_load(*((unsigned __int64**)v10 + 8));
      v25 = atomic_load(v23);
      if (v25 + v24 <= *((_QWORD*)v10 + 3)) {
        goto LABEL_21;
      }
    }
    else if (*((_QWORD*)v10 + 9) + *((_QWORD*)v10 + 8) <= *((_QWORD*)v10 + 3)) {
      goto LABEL_21;
    }
    LODWORD(v13) = 0;
    goto LABEL_21;
  }
  v15 = *(int**)(result + 176);
  v16 = (*((_QWORD*)v15 + 4) + v8 * (__int64)v9 - 1) & -*((_QWORD*)v15 + 4);
  v17 = *v15;
  if ((*v15 & 1) != 0) {
    LODWORD(v13) = atomic_fetch_add(*((atomic_ullong* volatile*)v15 + 8), v16);
    if ((*(_BYTE*)v15 & 1) != 0) {
      v40 = *((unsigned __int64**)v15 + 9);
      v41 = atomic_load(*((unsigned __int64**)v15 + 8));
      v42 = atomic_load(v40);
      if (v42 + v41 > *((_QWORD*)v15 + 3)) {
        goto LABEL_11;
      }
    }
    else if (*((_QWORD*)v15 + 9) + *((_QWORD*)v15 + 8) > *((_QWORD*)v15 + 3)) {
      goto LABEL_11;
    }
  }
  else {
    v13 = *((_QWORD*)v15 + 8);
    v18 = v13 + v16;
    *((_QWORD*)v15 + 8) = v18;
    if ((v17 & 2) == 0 &&
        (unsigned __int64)(*((_QWORD*)v15 + 9) + v18) > *((_QWORD*)v15 + 3)) {
    LABEL_11:
      LODWORD(v13) = 0;
      *(_DWORD*)(result + 4) = 0;
      v19 = a2[5];
      v20 = *((_DWORD*)a2 + 4);
      v21 = *(_QWORD*)a2;
      v22 = *((_QWORD*)a2 + 1);
      if ((a5 & 1) == 0) {
        goto LABEL_35;
      }
      goto LABEL_22;
    }
  }
  *(_DWORD*)(result + 4) = v13;
  v19 = a2[5];
  v20 = *((_DWORD*)a2 + 4);
  v21 = *(_QWORD*)a2;
  v22 = *((_QWORD*)a2 + 1);
  if ((a5 & 1) == 0) {
    goto LABEL_35;
  }
LABEL_22:
  v26 = *(unsigned int*)(result + 156);
  if ((_DWORD)v26 != 0) {
    v27 = result + 16;
    v28 = 0;
    v29 = 0;
    do {
      while (1) {
        v33 = *(_QWORD*)(*(_QWORD*)(result + 160) + 56 * v28 + 40) &
              0xFFFFFFFFFFFFFFFELL;
        v34 = *(_QWORD*)(*(_QWORD*)(result + 160) + 56 * v28 + 40) & 1LL;
        v35 = 0;
        if (v29 != 0) {
          break;
        }
      LABEL_24:
        v30 = v27 + 16LL * v29;
        *(_QWORD*)v30 = v33;
        *(_QWORD*)(v30 + 8) = 1;
        *(_DWORD*)(v30 + 12) = *(unsigned __int8*)(v33 + 24) | (2 * v34);
        v31 = v29 + 1;
        if (v29++ <= 6) {
          *(_BYTE*)(*(_QWORD*)(result + 168) + v28++) = v35;
          if (v28 != v26) {
            continue;
          }
        }
        goto LABEL_32;
      }
      while (1) {
        v36 = v27 + 16LL * v35;
        if (*(_QWORD*)v36 == v33 &&
            ((*(_DWORD*)(v36 + 12) & 2) != 0) == (_DWORD)v34) {
          break;
        }
        if (v29 <= ++v35) {
          goto LABEL_24;
        }
      }
      ++*(_DWORD*)(v36 + 8);
      v31 = v29;
      *(_BYTE*)(*(_QWORD*)(result + 168) + v28++) = v35;
    } while (v28 != v26);
  LABEL_32:
    LODWORD(v13) = *(_DWORD*)(result + 4);
  }
  else {
    v31 = 0;
  }
  *(_DWORD*)(result + 144) = v31;
LABEL_35:
  v37 = a4 & 1;
  v38 = v20;
  v39 = v21;
  v82[2] = v7;
  v82[4] = v5;
  v82[5] = v6;
  v43 = *(_QWORD*)(result + 176);
  v44 = *(_DWORD*)(result + 144);
  v45 = v19;
  v46 = v37;
  v47 = v21;
  v48 = v38;
  v49 = v22;
  v50 = (unsigned int)v13;
  v51 = result;
  v82[0] = 0;
  v82[1] = 0;
  v81[0] = 0;
  v81[1] = 0;
  v52 = *(_QWORD*)(v43 + 56);
  if (v44 >= 1) {
    v53 = v44 & 7;
    if ((unsigned int)v44 < 8) {
      v54 = 0;
      v55 = 0;
      if (v53 == 0) {
        goto LABEL_48;
      }
      goto LABEL_46;
    }
    v56 = (_DWORD*)(result + 72);
    v57 = 0;
    v55 = 0;
    v58 = -(__int64)(v44 & 0x7FFFFFF8);
    v59 = v82;
    do {
      v57 -= 8;
      v60 = *(v56 - 12) + v55;
      *(v59 - 4) = v55;
      *(v59 - 3) = v60;
      v61 = *(v56 - 8) + v60;
      v62 = *(v56 - 4) + v61;
      *(v59 - 2) = v61;
      *(v59 - 1) = v62;
      v63 = *v56 + v62;
      v64 = v56[4] + v63;
      *v59 = v63;
      v59[1] = v64;
      v65 = v56[8] + v64;
      v66 = v56[12] + v65;
      v59[2] = v65;
      v59[3] = v66;
      v67 = v56[16];
      v56 += 32;
      v59 += 8;
      v55 = v67 + v66;
    } while (v58 != v57);
    v54 = -v57;
    if (v53 != 0) {
    LABEL_46:
      v68 = (int*)(result + 16 * v54 + 24);
      v69 = (_DWORD*)v81 + v54;
      do {
        v70 = *v68;
        v68 += 4;
        *v69++ = v55;
        --v53;
        v55 += v70;
      } while (v53 != 0);
    }
  }
LABEL_48:
  memset(v80, 0, sizeof(v80));
  if (v52 == 0) {
    return result;
  }
  v71 = *(_DWORD*)(result + 156);
  if (v39 != 0) {
    v72 = 2;
  }
  else {
    v72 = 1;
  }
  if (v39 != 0) {
    if ((a3 & 1) != 0) {
      if (v71 < 1) {
        return result;
      }
      v73 = v71 + 1;
      do {
        LOBYTE(v78) = v46;
        ((void (*)(__int64, __int64, __int64, _QWORD, __int64, _QWORD*, __int64,
                   __int64, float, _QWORD*, unsigned int, int,
                   __int64))GameRoutine_55d1b0)(
            v51, v50, v49, v48, v47, v81, v52, 2, v45, v80, v73 - 2, v78, v79);
        --v73;
      } while (v73 > 1);
    LABEL_60:
      v74 = v71 + 1;
      do {
        LOBYTE(v77) = v46;
        result = GameRoutine_55d400(v51, v50, v49, v48, v81, v52, v72, v80, v45,
                                    v74 - 2, v77);
        --v74;
      } while (v74 > 1);
      return result;
    }
    if (v71 < 1) {
      return result;
    }
    for (i = 0; i != v71; ++i) {
      LOBYTE(v78) = v46;
      ((void (*)(__int64, __int64, __int64, _QWORD, __int64, _QWORD*, __int64,
                 __int64, float, _QWORD*, int, int,
                 __int64))GameRoutine_55d1b0)(v51, v50, v49, v48, v47, v81, v52,
                                              2, v45, v80, i, v78, v79);
    }
  }
  else {
    if ((a3 & 1) != 0) {
      if (v71 < 1) {
        return result;
      }
      goto LABEL_60;
    }
    if (v71 < 1) {
      return result;
    }
  }
  for (j = 0; j != v71; ++j) {
    LOBYTE(v77) = v46;
    result =
        GameRoutine_55d400(v51, v50, v49, v48, v81, v52, v72, v80, v45, j, v77);
  }
  return result;
}

void GameHr_560290(_QWORD* a1)
{
  *a1 = GameData_2135fb8[0] + 2;
  GameRoutine_55d690();
  GameRoutine_651250(a1, 0x30u);
}

__int64 GameHr_56f080(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;

  v2 = *(_QWORD*)(result + 24);
  if (*(_WORD*)(v2 + 14) != 0) {
    v4 = result;
    v5 = 0;
    v6 = v2 + *(unsigned int*)(v2 + 16);
    do {
      v7 = v2 + *(unsigned int*)(v6 + 4 * v5);
      if (*(_BYTE*)(v7 + 29) == 1) {
        result = GameRoutine_5716e0(*(_QWORD*)(a2 + 40),
                                    v2 + *(unsigned int*)(v6 + 4 * v5));
        if ((result & 1) != 0) {
          result = GameRoutine_56eaa0(v4, a2, v7);
          if ((result & 1) == 0) {
            break;
          }
        }
      }
      ++v5;
    } while (v5 < *(unsigned __int16*)(v2 + 14));
  }
  return result;
}

__int64 GameHr_582640(__int64 result, float a2)
{
  float v2;
  unsigned int v3;
  float v4;
  __int64 v5;
  int v6;
  int v7;
  float v8;
  int v9;
  unsigned int v10;
  __int64 v11;
  unsigned int v12;
  float v13;
  unsigned int v14;
  float v15;
  unsigned int v16;

  v2 = *(float*)(result + 60);
  v3 = *(_DWORD*)(result + 68) & 0xFFFFFFF0;
  *(_DWORD*)(result + 68) = v3;
  if (v2 != 0.0) {
    v4 = *(float*)(result + 32) + (float)(v2 * a2);
    if (v2 <= 0.0) {
      if (v4 > 0.0) {
        goto LABEL_5;
      }
      v6 = *(_DWORD*)(result + 64);
      switch (v6) {
      case 2:
        v8 = -v4;
        *(float*)(result + 60) = -v2;
        break;
      case 1:
        v11 = result;
        v12 = (unsigned __int16)((__int64 (*)(void))GameRoutine_56e670)();
        result = v11;
        v13 = (float)v12;
        v3 = *(_DWORD*)(v11 + 68);
        v8 = v4 + v13;
        break;
      case 0:
        *(_DWORD*)(result + 60) = 0;
        v7 = v3 | 1;
        v8 = 0.0;
        goto LABEL_21;
      default:
        goto LABEL_5;
      }
      v7 = v3 | 4;
    }
    else {
      v5 = result;
      if (v4 <
          (float)(unsigned __int16)((__int64 (*)(void))GameRoutine_56e670)()) {
        result = v5;
      LABEL_5:
        *(float*)(result + 32) = v4;
        return result;
      }
      v9 = *(_DWORD*)(v5 + 64);
      result = v5;
      switch (v9) {
      case 2:
        v15 = (float)(unsigned __int16)GameRoutine_56e670(v5);
        v16 = (unsigned __int16)GameRoutine_56e670(v5);
        result = v5;
        v8 = (float)((float)v16 - v4) + v15;
        *(float*)(v5 + 60) = -*(float*)(v5 + 60);
        break;
      case 1:
        v14 = (unsigned __int16)GameRoutine_56e670(v5);
        result = v5;
        v8 = v4 - (float)v14;
        break;
      case 0:
        v10 = (unsigned __int16)GameRoutine_56e670(v5);
        result = v5;
        *(_DWORD*)(v5 + 60) = 0;
        v8 = (float)v10;
        v7 = *(_DWORD*)(v5 + 68) | 1;
        goto LABEL_21;
      default:
        goto LABEL_5;
      }
      v7 = *(_DWORD*)(v5 + 68) | 2;
    }
  LABEL_21:
    *(_DWORD*)(result + 68) = v7;
    *(float*)(result + 32) = v8;
  }
  return result;
}

__int64 GameHr_590990(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                      __int64 a5, __int64 a6)
{
  char v11;
  char v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  int v18;
  __int64 v19;
  float v20;
  __int64 result;
  __int64 v22;
  int v23;

  *(_QWORD*)a1 = a4;
  v11 = *(_BYTE*)(a1 + 552) & 0xFB | (4 * *(_BYTE*)(a5 + 219));
  *(_BYTE*)(a1 + 552) = v11;
  v12 = v11 & 0xF7 | (8 * *(_BYTE*)(a5 + 221));
  *(_BYTE*)(a1 + 552) = v12;
  *(_BYTE*)(a1 + 552) = v12 & 0xFD | (2 * *(_BYTE*)(a5 + 220));
  GameRoutine_1a0ba50(a1 + 8, 0, 528, a4, a5, a6);
  v13 = GameRoutine_58d5b0(a4, 3);
  v14 = GameRoutine_58d5b0(*(_QWORD*)a1, 4);
  v15 = v14;
  if (v13 != 0) {
    *(_QWORD*)(a1 + 8) = v13;
    GameRoutine_590b30(a1, a2, a3, v13, a5);
    if (v15 == 0) {
      v16 = *(_QWORD*)(a5 + 32);
      v23 = 1;
      v17 = GameRoutine_57d040(v16, a3, 1263747405, 1, &v23);
      *(_QWORD*)(a1 + 536) = v17;
      v18 = GameRoutine_59ed60(*(_QWORD*)(v17 + 56), 1263747405, 1, &v23);
      *(_DWORD*)(a1 + 544) = v18;
    LABEL_7:
      v22 = *(_QWORD*)(*(_QWORD*)(a1 + 536) + 48LL);
      result = GameRoutine_5987a0();
      *(_DWORD*)(a1 + 548) = *(_DWORD*)(v22 + 4LL * (int)result * v18);
      goto LABEL_8;
    }
  }
  else if (v14 == 0) {
    v18 = *(_DWORD*)(a1 + 544);
    goto LABEL_7;
  }
  *(_QWORD*)(a1 + 88) = v15;
  GameRoutine_590d80(a1, a3, v15, a5);
  v19 = GameRoutine_59fb80(
      *(_QWORD*)(*(_QWORD*)(a5 + 48) + 32LL),
      **(_QWORD**)(a5 + 48) + 12LL +
          *(unsigned int*)(**(_QWORD**)(a5 + 48) + 12LL +
                           4LL * *(unsigned __int16*)(v15 + 4)));
  v20 = GameRoutine_59fbe0(v19);
  result = GameRoutine_590f00(a1, a3, *(_QWORD*)(a5 + 32), v13, v15, v20);
LABEL_8:
  *(_QWORD*)(a1 + 8) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  return result;
}

float GameHr_592dd0(__int64* a1, float* a2)
{
  __int64 v3;
  __int64 v5;
  __int64 v6;
  char v7;
  float v8;
  float v9;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  v3 = *a1;
  v11 = 0;
  (*(void (**)(__int64, __int64*))(*(_QWORD*)v3 + 96LL))(v3, &v11);
  v5 = *a1;
  v12 = 0;
  (*(void (**)(__int64, __int64*))(*(_QWORD*)v5 + 104LL))(v5, &v12);
  v6 = *a1;
  v13 = 0;
  (*(void (**)(__int64, __int64*))(*(_QWORD*)v6 + 96LL))(v6, &v13);
  v7 = *(_BYTE*)(*a1 + 91);
  v8 = (float)(*(float*)&v13 - *(float*)(*a1 + 80)) * 0.5;
  if ((v7 & 3) == 2) {
    v9 = v8 + *(float*)&v12;
    goto LABEL_5;
  }
  if ((v7 & 3) == 1) {
    v9 = *(float*)&v12 - v8;
  LABEL_5:
    *(float*)&v12 = v9;
  }
  return *(float*)&v12 - (float)((float)(*a2 - *(float*)&v11) * 0.5);
}

#pragma GCC visibility pop
